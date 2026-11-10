#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
__attribute__((swiftcall)) void SdkRoutine_7202e0(PSEUDO_X8, __int64, __int64*,
                                                  __int64*, unsigned __int64);
__attribute__((swiftcall)) void
fw_math_MapStateIndices21(PSEUDO_X8, unsigned __int64*, __int64*);
__attribute__((swiftcall)) void
fw_math_MapStateIndices9(PSEUDO_X8, unsigned __int64*, __int64*);
__attribute__((swiftcall)) void
    fw_math_MapStateIndices9_alt2(PSEUDO_X8, _QWORD,
                                  _QWORD) __asm__("fw_math_MapStateIndices9");
__attribute__((swiftcall)) void math_730a40(PSEUDO_X8, unsigned __int64*,
                                            __int64*);
__attribute__((swiftcall)) void math_730ca0(PSEUDO_X8, __int64, __int64*,
                                            __int64*, unsigned __int64);
__int64 SdkRoutine_87a390(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64
    fw_math_LookupStateIndex_alt1(_QWORD,
                                  _QWORD) __asm__("fw_math_LookupStateIndex");
__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 memset_plt(void* this_, void*, int);
__int64 memset_plt_alt1(void* this_, void*, int,
                        unsigned __int64) __asm__("memset_plt");
float SdkRoutine_87a340(_QWORD, _QWORD, _QWORD, _QWORD);
float cosf_plt(float);
float math_7314a0(__int64, __int64);
float sinf_plt(float);
struct PseudoSret
    fw_math_MapStateIndices9_alt1(_QWORD,
                                  _QWORD) __asm__("fw_math_MapStateIndices9");
unsigned __int64* fw_math_LookupStateIndex(unsigned __int64*, __int64*);
unsigned __int64 math_730ec0(unsigned __int64*, unsigned __int64,
                             unsigned __int64, unsigned __int64);
void __attribute__((noreturn)) nn_codec_hwacod_32f020(_QWORD, _QWORD);
float gyro_pointing_kalman_filter_728fe0(unsigned __int64* a1,
                                         unsigned __int64* a2, __int64 a3,
                                         unsigned __int64 a4);
float gyro_pointing_kalman_filter_729580(unsigned __int64* a1,
                                         unsigned __int64* a2, __int64 a3,
                                         unsigned __int64 a4);
float gyro_pointing_kalman_filter_729c20(unsigned __int64* a1,
                                         unsigned __int64* a2, __int64 a3,
                                         unsigned __int64 a4);
bool nerd_gyro_pointing_GyroPointingKalmanFilter_TestParameterStates(
    void* this_, __int64 a2, __int64 a3, unsigned __int64 a4);
void nerd_gyro_pointing_GyroPointingKalmanFilter_ApplyCorrection(__int64 a1,
                                                                 __int64 a2);
float nerd_gyro_pointing_GyroPointingKalmanFilter_UpdateBoxConstraints(
    __int64 a1, __int64 a2);
__int64*
nerd_gyro_pointing_GyroPointingKalmanFilter_AddVariableCovariances(_QWORD* a1,
                                                                   float a2);
__attribute__((swiftcall)) void
nerd_gyro_pointing_GyroPointingKalmanFilter_StoreState(PSEUDO_X8 x8_,
                                                       void* this_,
                                                       __int64 unused_int1,
                                                       __int64 unused_int2,
                                                       unsigned __int64 a2);
__int64 nerd_gyro_pointing_GyroPointingKalmanFilter_LoadState(
    __int64 a1, __int64* a2, char a3, char a4, char a5, char a6, char a7,
    char a8, float a9);
__int64
nerd_gyro_pointing_GyroPointingKalmanFilter_GetCalibrationState(void* this_);
__int64
nerd_gyro_pointing_GyroPointingKalmanFilter_GetIntegrityState(void* this_);

float gyro_pointing_kalman_filter_728fe0(unsigned __int64* a1,
                                         unsigned __int64* a2, __int64 a3,
                                         unsigned __int64 a4)
{

#pragma clang fp contract(off)
  unsigned __int64 v5;
  unsigned __int64 v6;
  unsigned __int64* v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  char v26;
  __int64 v27;
  int v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  char* v35;
  char* v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64 v39;
  void* v40;
  void* v48;
  int v49;
  unsigned __int64 v50;
  __int64 v51;
  __int64 v52;
  void* v53;
  void* v61;
  unsigned __int64 v62;
  unsigned __int64* v63;
  unsigned __int64 v64;
  unsigned __int64 v65;
  char* v66;
  unsigned __int64 v67;
  char* v68;
  char* v69;
  float result;
  __int64 v71;
  unsigned __int64 v72;
  unsigned __int64 v73;
  unsigned __int64 v74;
  unsigned __int64 v75;
  struct {
    unsigned __int64 v76;
    unsigned __int64 v77;
    _BYTE v78[4368];
  } v76_;

  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v5 = a1[547];
  v6 = *a1;
  v9 = a1 + 937;
  *a2 = v5;
  a1[a1[970]++ + 937] = v5;
  math_730ec0(a1 + 548, v5, v6, a4),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v10 = a1[547] + 1;
  a1[547] = v10;
  a2[1] = v10;
  v11 = a1[547];
  v9[a1[970]++] = v11;
  math_730ec0(a1 + 548, v11, v6 + 1, v12),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v13 = v6 + 2;
  v14 = a1[547] + 1;
  a1[547] = v14;
  a2[2] = v14;
  v15 = a1[547];
  v9[a1[970]++] = v15;
  math_730ec0(a1 + 548, v15, v6 + 2, v16),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v18 = *a1;
  v19 = a1[1];
  v20 = v6 + 3;
  ++a1[547];
  if (__PAIR128__(v6 + 3, v6 + 3) == __PAIR128__(v19, v18)) {
    goto LABEL_39;
  }
  if (v20 >= 0x22) {
    *(_QWORD*)&v76_.v78[4352] = 0;
    v76_.v76 = v6 + 3;
    v76_.v77 = v6 + 3;
    memset_plt((void*)v76_.v78, nullptr, 4356),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
    if (v20 >= v18) {
      v21 = v18;
    }
    else {
      v21 = v6 + 3;
    }
    if (v18 == 0 || v19 == 0) {
      goto LABEL_24;
    }
    if (v20 >= v19) {
      v22 = v19;
    }
    else {
      v22 = v6 + 3;
    }
    v23 = v21 & 7;
    v24 = 4 * v22;
    if (v21 - 1 >= 7) {
      v31 = 0;
      v32 = 0;
      v33 = -(__int64)(v21 & 0xFFFFFFFFFFFFFFF8LL);
      do {
        memcpy_plt(&v76_.v78[v32 * 8], &a1[v32 + 2], v24),
            v12 = COERCE_AS(__typeof__(v12),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v16 = COERCE_AS(__typeof__(v16),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
        memcpy_plt(&v76_.v78[v32 * 8 + 132], (char*)&a1[v32 + 18] + 4, v24),
            v12 = COERCE_AS(__typeof__(v12),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v16 = COERCE_AS(__typeof__(v16),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
        memcpy_plt(&v76_.v78[v32 * 8 + 264], &a1[v32 + 35], v24),
            v12 = COERCE_AS(__typeof__(v12),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v16 = COERCE_AS(__typeof__(v16),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
        memcpy_plt(&v76_.v78[v32 * 8 + 396], (char*)&a1[v32 + 51] + 4, v24),
            v12 = COERCE_AS(__typeof__(v12),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v16 = COERCE_AS(__typeof__(v16),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
        memcpy_plt(&v76_.v78[v32 * 8 + 528], &a1[v32 + 68], v24),
            v12 = COERCE_AS(__typeof__(v12),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v16 = COERCE_AS(__typeof__(v16),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
        memcpy_plt(&v76_.v78[v32 * 8 + 660], (char*)&a1[v32 + 84] + 4, v24),
            v12 = COERCE_AS(__typeof__(v12),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v16 = COERCE_AS(__typeof__(v16),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
        memcpy_plt(&v76_.v78[v32 * 8 + 792], &a1[v32 + 101], v24),
            v12 = COERCE_AS(__typeof__(v12),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v16 = COERCE_AS(__typeof__(v16),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
        memcpy_plt(&v76_.v78[v32 * 8 + 924], (char*)&a1[v32 + 117] + 4, v24),
            v12 = COERCE_AS(__typeof__(v12),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v16 = COERCE_AS(__typeof__(v16),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
        v32 += 132;
        v31 -= 8;
      } while (v33 != v31);
      v25 = -v31;
      if (v23 == 0) {
        goto LABEL_24;
      }
    }
    else {
      v25 = 0;
      if (v23 == 0) {
      LABEL_24:
        v37 = v76_.v77;
        *a1 = v76_.v76;
        a1[1] = v37;
        memcpy_plt(a1 + 2, v76_.v78, 4356),
            v12 = COERCE_AS(__typeof__(v12),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v16 = COERCE_AS(__typeof__(v16),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
        goto LABEL_39;
      }
    }
    v34 = 132 * v25 + 16;
    v35 = (char*)a1 + v34;
    v36 = (char*)&v76_.v76 + v34;
    do {
      memcpy_plt(v36, v35, v24),
          v12 = COERCE_AS(__typeof__(v12),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v16 = COERCE_AS(__typeof__(v16),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
      v35 += 132;
      v36 += 132;
      --v23;
    } while (v23 != 0);
    goto LABEL_24;
  }
  v26 = v20 - v18;
  *a1 = v20;
  if (v20 > v18 && v19 != 0) {
    v27 = 33 * v18;
    v28 = 4 * v19;
    v29 = v26 & 7;
    if (v6 - v18 + 2 >= 7) {
      v71 = 33 * v18;
      v72 = v19;
      v38 = 0;
      v39 = -(__int64)(v26 & 0x38);
      v40 = (void*)((char*)a1 + 4 * v27 + 940);
      do {
        memset_plt((void*)((char*)v40 - 924), nullptr, v28),
            v12 = COERCE_AS(__typeof__(v12),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v16 = COERCE_AS(__typeof__(v16),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
        memset_plt((void*)((char*)v40 - 792), nullptr, v28),
            v12 = COERCE_AS(__typeof__(v12),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v16 = COERCE_AS(__typeof__(v16),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
        memset_plt((void*)((char*)v40 - 660), nullptr, v28),
            v12 = COERCE_AS(__typeof__(v12),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v16 = COERCE_AS(__typeof__(v16),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
        memset_plt((void*)((char*)v40 - 528), nullptr, v28),
            v12 = COERCE_AS(__typeof__(v12),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v16 = COERCE_AS(__typeof__(v16),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
        memset_plt((void*)((char*)v40 - 396), nullptr, v28),
            v12 = COERCE_AS(__typeof__(v12),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v16 = COERCE_AS(__typeof__(v16),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
        memset_plt((void*)((char*)v40 - 264), nullptr, v28),
            v12 = COERCE_AS(__typeof__(v12),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v16 = COERCE_AS(__typeof__(v16),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
        memset_plt((void*)((char*)v40 - 132), nullptr, v28),
            v12 = COERCE_AS(__typeof__(v12),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v16 = COERCE_AS(__typeof__(v16),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
        memset_plt(v40, nullptr, v28),
            v12 = COERCE_AS(__typeof__(v12),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v16 = COERCE_AS(__typeof__(v16),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
        v40 = (void*)((char*)v40 + 1056);
        v38 -= 8;
      } while (v39 != v38);
      v27 = v71;
      v19 = v72;
      v30 = -v38;
      if (v29 == 0) {
        goto LABEL_30;
      }
    }
    else {
      v30 = 0;
      if (v29 == 0) {
        goto LABEL_30;
      }
    }
    v48 = (void*)((char*)a1 + 132 * v30 + 4 * v27 + 16);
    do {
      memset_plt(v48, nullptr, v28),
          v12 = COERCE_AS(__typeof__(v12),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v16 = COERCE_AS(__typeof__(v16),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
      v48 = (void*)((char*)v48 + 132);
      --v29;
    } while (v29 != 0);
  }
LABEL_30:
  a1[1] = v20;
  if (v20 <= v19) {
    goto LABEL_39;
  }
  v49 = 4 * (v20 - v19);
  v50 = v20 & 7;
  if (v13 < 7) {
    v51 = 0;
    if ((v20 & 7) == 0) {
      goto LABEL_39;
    }
    goto LABEL_37;
  }
  v52 = 0;
  v53 = (void*)((char*)a1 + 4 * v19 + 940);
  do {
    memset_plt((void*)((char*)v53 - 924), nullptr, v49),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
    memset_plt((void*)((char*)v53 - 792), nullptr, v49),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
    memset_plt((void*)((char*)v53 - 660), nullptr, v49),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
    memset_plt((void*)((char*)v53 - 528), nullptr, v49),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
    memset_plt((void*)((char*)v53 - 396), nullptr, v49),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
    memset_plt((void*)((char*)v53 - 264), nullptr, v49),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
    memset_plt((void*)((char*)v53 - 132), nullptr, v49),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
    memset_plt(v53, nullptr, v49),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
    v53 = (void*)((char*)v53 + 1056);
    v52 -= 8;
  } while (-(__int64)(v20 & 0x38) != v52);
  v51 = -v52;
  if ((v20 & 7) != 0) {
  LABEL_37:
    v61 = (void*)((char*)a1 + 132 * v51 + 4 * v19 + 16);
    do {
      memset_plt(v61, nullptr, v49),
          v12 = COERCE_AS(__typeof__(v12),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v16 = COERCE_AS(__typeof__(v16),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
      v61 = (void*)((char*)v61 + 132);
      --v50;
    } while (v50 != 0);
  }
LABEL_39:
  v62 = a2[1];
  v73 = *a2;
  v74 = v62;
  v75 = a2[2];
  v73 = *fw_math_LookupStateIndex(a1 + 548, (__int64*)&v73),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v74 = *fw_math_LookupStateIndex(a1 + 548, (__int64*)&v74),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v63 = fw_math_LookupStateIndex(a1 + 548, (__int64*)&v75),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v64 = v73;
  v65 = v74;
  v66 = (char*)a1 + 132 * v73 + 16;
  v67 = *v63;
  *(_DWORD*)&v66[4 * v73] = *(_DWORD*)a3;
  *(_DWORD*)&v66[4 * v65] = *(_DWORD*)(a3 + 4);
  *(_DWORD*)&v66[4 * v67] = *(_DWORD*)(a3 + 8);
  v68 = (char*)a1 + 132 * v65 + 16;
  v69 = (char*)a1 + 132 * v67 + 16;
  *(_DWORD*)&v68[4 * v64] = *(_DWORD*)(a3 + 12);
  *(_DWORD*)&v68[4 * v65] = *(_DWORD*)(a3 + 16);
  *(_DWORD*)&v68[4 * v67] = *(_DWORD*)(a3 + 20);
  *(_DWORD*)&v69[4 * v64] = *(_DWORD*)(a3 + 24);
  *(_DWORD*)&v69[4 * v65] = *(_DWORD*)(a3 + 28);
  result = *(float*)(a3 + 32);
  *(float*)&v69[4 * v67] = result;
  return result;
}

float gyro_pointing_kalman_filter_729580(unsigned __int64* a1,
                                         unsigned __int64* a2, __int64 a3,
                                         unsigned __int64 a4)
{

#pragma clang fp contract(off)
  unsigned __int64 v5;
  unsigned __int64 v6;
  unsigned __int64* v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  unsigned __int64 v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  __int64 v43;
  char v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  char* v52;
  char* v53;
  unsigned __int64 v54;
  __int64 v55;
  __int64 v56;
  void* v57;
  void* v65;
  unsigned __int64 v66;
  __int64 v67;
  __int64 v68;
  void* v69;
  void* v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v85;
  __int64 v86;
  _QWORD v87[5];
  __int64 v88[9];
  struct {
    unsigned __int64 v89;
    unsigned __int64 v90;
    _QWORD v91[546];
  } v89_;

  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v27 = COERCE_AS(__typeof__(v27),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v30 = COERCE_AS(__typeof__(v30),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v34 = COERCE_AS(__typeof__(v34),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v5 = a1[547];
  v6 = *a1;
  v9 = a1 + 937;
  *a2 = v5;
  a1[a1[970]++ + 937] = v5;
  math_730ec0(a1 + 548, v5, v6, a4),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v27 = COERCE_AS(__typeof__(v27),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v34 = COERCE_AS(__typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v10 = a1[547] + 1;
  a1[547] = v10;
  a2[1] = v10;
  v11 = a1[547];
  v9[a1[970]++] = v11;
  math_730ec0(a1 + 548, v11, v6 + 1, v12),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v27 = COERCE_AS(__typeof__(v27),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v34 = COERCE_AS(__typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v13 = a1[547] + 1;
  a1[547] = v13;
  a2[2] = v13;
  v14 = a1[547];
  v9[a1[970]++] = v14;
  math_730ec0(a1 + 548, v14, v6 + 2, v15),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v27 = COERCE_AS(__typeof__(v27),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v34 = COERCE_AS(__typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v16 = a1[547] + 1;
  a1[547] = v16;
  a2[3] = v16;
  v17 = a1[547];
  v9[a1[970]++] = v17;
  math_730ec0(a1 + 548, v17, v6 + 3, v18),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v27 = COERCE_AS(__typeof__(v27),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v34 = COERCE_AS(__typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v19 = a1[547] + 1;
  a1[547] = v19;
  a2[4] = v19;
  v20 = a1[547];
  v9[a1[970]++] = v20;
  math_730ec0(a1 + 548, v20, v6 + 4, v21),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v27 = COERCE_AS(__typeof__(v27),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v34 = COERCE_AS(__typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v22 = a1[547] + 1;
  a1[547] = v22;
  a2[5] = v22;
  v23 = a1[547];
  v9[a1[970]++] = v23;
  math_730ec0(a1 + 548, v23, v6 + 5, v24),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v27 = COERCE_AS(__typeof__(v27),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v34 = COERCE_AS(__typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v25 = a1[547] + 1;
  a1[547] = v25;
  a2[6] = v25;
  v26 = a1[547];
  v9[a1[970]++] = v26;
  math_730ec0(a1 + 548, v26, v6 + 6, v27),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v27 = COERCE_AS(__typeof__(v27),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v34 = COERCE_AS(__typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v28 = a1[547] + 1;
  a1[547] = v28;
  a2[7] = v28;
  v29 = a1[547];
  v9[a1[970]++] = v29;
  math_730ec0(a1 + 548, v29, v6 + 7, v30),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v27 = COERCE_AS(__typeof__(v27),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v34 = COERCE_AS(__typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v31 = v6 + 8;
  v32 = a1[547] + 1;
  a1[547] = v32;
  a2[8] = v32;
  v33 = a1[547];
  v9[a1[970]++] = v33;
  math_730ec0(a1 + 548, v33, v6 + 8, v34),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v27 = COERCE_AS(__typeof__(v27),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v34 = COERCE_AS(__typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v36 = *a1;
  v37 = a1[1];
  v38 = v6 + 9;
  ++a1[547];
  if (__PAIR128__(v6 + 9, v6 + 9) == __PAIR128__(v37, v36)) {
    goto LABEL_39;
  }
  if (v38 >= 0x22) {
    v89_.v91[544] = 0;
    v89_.v89 = v6 + 9;
    v89_.v90 = v6 + 9;
    memset_plt((void*)v89_.v91, nullptr, 4356),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
    if (v38 >= v36) {
      v39 = v36;
    }
    else {
      v39 = v6 + 9;
    }
    if (v36 == 0 || v37 == 0) {
      goto LABEL_24;
    }
    if (v38 >= v37) {
      v40 = v37;
    }
    else {
      v40 = v6 + 9;
    }
    v41 = v39 & 7;
    v42 = 4 * v40;
    if (v39 - 1 >= 7) {
      v48 = 0;
      v49 = 0;
      v50 = -(__int64)(v39 & 0xFFFFFFFFFFFFFFF8LL);
      do {
        memcpy_plt(&v89_.v91[v49], &a1[v49 + 2], v42),
            v12 = COERCE_AS(__typeof__(v12),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v15 = COERCE_AS(__typeof__(v15),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v18 = COERCE_AS(__typeof__(v18),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v21 = COERCE_AS(__typeof__(v21),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v24 = COERCE_AS(__typeof__(v24),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v27 = COERCE_AS(__typeof__(v27),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v30 = COERCE_AS(__typeof__(v30),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v34 = COERCE_AS(__typeof__(v34),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
        memcpy_plt((char*)&v89_.v91[v49 + 16] + 4, (char*)&a1[v49 + 18] + 4,
                   v42),
            v12 = COERCE_AS(__typeof__(v12),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v15 = COERCE_AS(__typeof__(v15),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v18 = COERCE_AS(__typeof__(v18),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v21 = COERCE_AS(__typeof__(v21),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v24 = COERCE_AS(__typeof__(v24),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v27 = COERCE_AS(__typeof__(v27),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v30 = COERCE_AS(__typeof__(v30),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v34 = COERCE_AS(__typeof__(v34),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
        memcpy_plt(&v89_.v91[v49 + 33], &a1[v49 + 35], v42),
            v12 = COERCE_AS(__typeof__(v12),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v15 = COERCE_AS(__typeof__(v15),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v18 = COERCE_AS(__typeof__(v18),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v21 = COERCE_AS(__typeof__(v21),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v24 = COERCE_AS(__typeof__(v24),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v27 = COERCE_AS(__typeof__(v27),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v30 = COERCE_AS(__typeof__(v30),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v34 = COERCE_AS(__typeof__(v34),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
        memcpy_plt((char*)&v89_.v91[v49 + 49] + 4, (char*)&a1[v49 + 51] + 4,
                   v42),
            v12 = COERCE_AS(__typeof__(v12),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v15 = COERCE_AS(__typeof__(v15),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v18 = COERCE_AS(__typeof__(v18),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v21 = COERCE_AS(__typeof__(v21),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v24 = COERCE_AS(__typeof__(v24),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v27 = COERCE_AS(__typeof__(v27),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v30 = COERCE_AS(__typeof__(v30),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v34 = COERCE_AS(__typeof__(v34),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
        memcpy_plt(&v89_.v91[v49 + 66], &a1[v49 + 68], v42),
            v12 = COERCE_AS(__typeof__(v12),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v15 = COERCE_AS(__typeof__(v15),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v18 = COERCE_AS(__typeof__(v18),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v21 = COERCE_AS(__typeof__(v21),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v24 = COERCE_AS(__typeof__(v24),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v27 = COERCE_AS(__typeof__(v27),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v30 = COERCE_AS(__typeof__(v30),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v34 = COERCE_AS(__typeof__(v34),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
        memcpy_plt((char*)&v89_.v91[v49 + 82] + 4, (char*)&a1[v49 + 84] + 4,
                   v42),
            v12 = COERCE_AS(__typeof__(v12),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v15 = COERCE_AS(__typeof__(v15),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v18 = COERCE_AS(__typeof__(v18),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v21 = COERCE_AS(__typeof__(v21),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v24 = COERCE_AS(__typeof__(v24),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v27 = COERCE_AS(__typeof__(v27),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v30 = COERCE_AS(__typeof__(v30),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v34 = COERCE_AS(__typeof__(v34),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
        memcpy_plt(&v89_.v91[v49 + 99], &a1[v49 + 101], v42),
            v12 = COERCE_AS(__typeof__(v12),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v15 = COERCE_AS(__typeof__(v15),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v18 = COERCE_AS(__typeof__(v18),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v21 = COERCE_AS(__typeof__(v21),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v24 = COERCE_AS(__typeof__(v24),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v27 = COERCE_AS(__typeof__(v27),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v30 = COERCE_AS(__typeof__(v30),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v34 = COERCE_AS(__typeof__(v34),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
        memcpy_plt((char*)&v89_.v91[v49 + 115] + 4, (char*)&a1[v49 + 117] + 4,
                   v42),
            v12 = COERCE_AS(__typeof__(v12),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v15 = COERCE_AS(__typeof__(v15),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v18 = COERCE_AS(__typeof__(v18),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v21 = COERCE_AS(__typeof__(v21),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v24 = COERCE_AS(__typeof__(v24),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v27 = COERCE_AS(__typeof__(v27),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v30 = COERCE_AS(__typeof__(v30),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v34 = COERCE_AS(__typeof__(v34),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
        v49 += 132;
        v48 -= 8;
      } while (v50 != v48);
      v43 = -v48;
      if (v41 == 0) {
        goto LABEL_24;
      }
    }
    else {
      v43 = 0;
      if (v41 == 0) {
      LABEL_24:
        v54 = v89_.v90;
        *a1 = v89_.v89;
        a1[1] = v54;
        memcpy_plt(a1 + 2, v89_.v91, 4356),
            v12 = COERCE_AS(__typeof__(v12),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v15 = COERCE_AS(__typeof__(v15),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v18 = COERCE_AS(__typeof__(v18),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v21 = COERCE_AS(__typeof__(v21),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v24 = COERCE_AS(__typeof__(v24),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v27 = COERCE_AS(__typeof__(v27),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v30 = COERCE_AS(__typeof__(v30),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v34 = COERCE_AS(__typeof__(v34),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
        goto LABEL_39;
      }
    }
    v51 = 132 * v43 + 16;
    v52 = (char*)a1 + v51;
    v53 = (char*)&v89_.v89 + v51;
    do {
      memcpy_plt(v53, v52, v42),
          v12 = COERCE_AS(__typeof__(v12),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v15 = COERCE_AS(__typeof__(v15),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v18 = COERCE_AS(__typeof__(v18),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v21 = COERCE_AS(__typeof__(v21),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v24 = COERCE_AS(__typeof__(v24),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v27 = COERCE_AS(__typeof__(v27),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v30 = COERCE_AS(__typeof__(v30),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v34 = COERCE_AS(__typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
      v52 += 132;
      v53 += 132;
      --v41;
    } while (v41 != 0);
    goto LABEL_24;
  }
  v44 = v38 - v36;
  *a1 = v38;
  if (v38 > v36 && v37 != 0) {
    v45 = 33 * v36;
    v46 = v44 & 7;
    if (v6 - v36 + 8 >= 7) {
      v85 = 33 * v36;
      v86 = a3;
      v55 = 0;
      v56 = -(__int64)(v44 & 0x38);
      v57 = (void*)((char*)a1 + 4 * v45 + 940);
      do {
        memset_plt((void*)((char*)v57 - 924), nullptr, 4 * v37),
            v12 = COERCE_AS(__typeof__(v12),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v15 = COERCE_AS(__typeof__(v15),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v18 = COERCE_AS(__typeof__(v18),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v21 = COERCE_AS(__typeof__(v21),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v24 = COERCE_AS(__typeof__(v24),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v27 = COERCE_AS(__typeof__(v27),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v30 = COERCE_AS(__typeof__(v30),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v34 = COERCE_AS(__typeof__(v34),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
        memset_plt((void*)((char*)v57 - 792), nullptr, 4 * v37),
            v12 = COERCE_AS(__typeof__(v12),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v15 = COERCE_AS(__typeof__(v15),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v18 = COERCE_AS(__typeof__(v18),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v21 = COERCE_AS(__typeof__(v21),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v24 = COERCE_AS(__typeof__(v24),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v27 = COERCE_AS(__typeof__(v27),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v30 = COERCE_AS(__typeof__(v30),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v34 = COERCE_AS(__typeof__(v34),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
        memset_plt((void*)((char*)v57 - 660), nullptr, 4 * v37),
            v12 = COERCE_AS(__typeof__(v12),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v15 = COERCE_AS(__typeof__(v15),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v18 = COERCE_AS(__typeof__(v18),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v21 = COERCE_AS(__typeof__(v21),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v24 = COERCE_AS(__typeof__(v24),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v27 = COERCE_AS(__typeof__(v27),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v30 = COERCE_AS(__typeof__(v30),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v34 = COERCE_AS(__typeof__(v34),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
        memset_plt((void*)((char*)v57 - 528), nullptr, 4 * v37),
            v12 = COERCE_AS(__typeof__(v12),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v15 = COERCE_AS(__typeof__(v15),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v18 = COERCE_AS(__typeof__(v18),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v21 = COERCE_AS(__typeof__(v21),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v24 = COERCE_AS(__typeof__(v24),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v27 = COERCE_AS(__typeof__(v27),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v30 = COERCE_AS(__typeof__(v30),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v34 = COERCE_AS(__typeof__(v34),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
        memset_plt((void*)((char*)v57 - 396), nullptr, 4 * v37),
            v12 = COERCE_AS(__typeof__(v12),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v15 = COERCE_AS(__typeof__(v15),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v18 = COERCE_AS(__typeof__(v18),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v21 = COERCE_AS(__typeof__(v21),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v24 = COERCE_AS(__typeof__(v24),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v27 = COERCE_AS(__typeof__(v27),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v30 = COERCE_AS(__typeof__(v30),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v34 = COERCE_AS(__typeof__(v34),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
        memset_plt((void*)((char*)v57 - 264), nullptr, 4 * v37),
            v12 = COERCE_AS(__typeof__(v12),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v15 = COERCE_AS(__typeof__(v15),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v18 = COERCE_AS(__typeof__(v18),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v21 = COERCE_AS(__typeof__(v21),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v24 = COERCE_AS(__typeof__(v24),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v27 = COERCE_AS(__typeof__(v27),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v30 = COERCE_AS(__typeof__(v30),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v34 = COERCE_AS(__typeof__(v34),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
        memset_plt((void*)((char*)v57 - 132), nullptr, 4 * v37),
            v12 = COERCE_AS(__typeof__(v12),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v15 = COERCE_AS(__typeof__(v15),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v18 = COERCE_AS(__typeof__(v18),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v21 = COERCE_AS(__typeof__(v21),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v24 = COERCE_AS(__typeof__(v24),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v27 = COERCE_AS(__typeof__(v27),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v30 = COERCE_AS(__typeof__(v30),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v34 = COERCE_AS(__typeof__(v34),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
        memset_plt(v57, nullptr, 4 * v37),
            v12 = COERCE_AS(__typeof__(v12),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v15 = COERCE_AS(__typeof__(v15),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v18 = COERCE_AS(__typeof__(v18),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v21 = COERCE_AS(__typeof__(v21),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v24 = COERCE_AS(__typeof__(v24),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v27 = COERCE_AS(__typeof__(v27),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v30 = COERCE_AS(__typeof__(v30),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v34 = COERCE_AS(__typeof__(v34),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
        v57 = (void*)((char*)v57 + 1056);
        v55 -= 8;
      } while (v56 != v55);
      v45 = v85;
      a3 = v86;
      v47 = -v55;
      if (v46 == 0) {
        goto LABEL_30;
      }
    }
    else {
      v47 = 0;
      if (v46 == 0) {
        goto LABEL_30;
      }
    }
    v65 = (void*)((char*)a1 + 132 * v47 + 4 * v45 + 16);
    do {
      memset_plt(v65, nullptr, 4 * v37),
          v12 = COERCE_AS(__typeof__(v12),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v15 = COERCE_AS(__typeof__(v15),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v18 = COERCE_AS(__typeof__(v18),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v21 = COERCE_AS(__typeof__(v21),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v24 = COERCE_AS(__typeof__(v24),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v27 = COERCE_AS(__typeof__(v27),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v30 = COERCE_AS(__typeof__(v30),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v34 = COERCE_AS(__typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
      v65 = (void*)((char*)v65 + 132);
      --v46;
    } while (v46 != 0);
  }
LABEL_30:
  a1[1] = v38;
  if (v38 <= v37) {
    goto LABEL_39;
  }
  v66 = v38 & 7;
  if (v31 < 7) {
    v67 = 0;
    if ((v38 & 7) == 0) {
      goto LABEL_39;
    }
    goto LABEL_37;
  }
  v68 = 0;
  v69 = (void*)((char*)a1 + 4 * v37 + 940);
  do {
    memset_plt((void*)((char*)v69 - 924), nullptr, 4 * (v38 - v37)),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
    memset_plt((void*)((char*)v69 - 792), nullptr, 4 * (v38 - v37)),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
    memset_plt((void*)((char*)v69 - 660), nullptr, 4 * (v38 - v37)),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
    memset_plt((void*)((char*)v69 - 528), nullptr, 4 * (v38 - v37)),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
    memset_plt((void*)((char*)v69 - 396), nullptr, 4 * (v38 - v37)),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
    memset_plt((void*)((char*)v69 - 264), nullptr, 4 * (v38 - v37)),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
    memset_plt((void*)((char*)v69 - 132), nullptr, 4 * (v38 - v37)),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
    memset_plt(v69, nullptr, 4 * (v38 - v37)),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
    v69 = (void*)((char*)v69 + 1056);
    v68 -= 8;
  } while (-(__int64)(v38 & 0x38) != v68);
  v67 = -v68;
  if ((v38 & 7) != 0) {
  LABEL_37:
    v77 = (void*)((char*)a1 + 132 * v67 + 4 * v37 + 16);
    do {
      memset_plt(v77, nullptr, 4 * (v38 - v37)),
          v12 = COERCE_AS(__typeof__(v12),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v15 = COERCE_AS(__typeof__(v15),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v18 = COERCE_AS(__typeof__(v18),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v21 = COERCE_AS(__typeof__(v21),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v24 = COERCE_AS(__typeof__(v24),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v27 = COERCE_AS(__typeof__(v27),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v30 = COERCE_AS(__typeof__(v30),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v34 = COERCE_AS(__typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
      v77 = (void*)((char*)v77 + 132);
      --v66;
    } while (v66 != 0);
  }
LABEL_39:
  v78 = a2[6];
  v79 = a2[7];
  v80 = a2[8];
  v89_.v90 = 0;
  memset(v89_.v91, 0, 56);
  v88[6] = v78;
  v88[7] = v79;
  v88[8] = v80;
  v89_.v89 = 0;
  v81 = a2[3];
  v88[2] = a2[2];
  v88[3] = v81;
  v82 = a2[5];
  v88[4] = a2[4];
  v88[5] = v82;
  v83 = a2[1];
  v88[0] = *a2;
  v88[1] = v83;
  fw_math_MapStateIndices9((void*)((__int64*)&v89_.v89), a1 + 548, v88),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v27 = COERCE_AS(__typeof__(v27),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v34 = COERCE_AS(__typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v87[4] = &v89_.v89;
  v87[0] = a1 + 2;
  v87[1] = 1;
  v87[2] = 33;
  v87[3] = &v89_.v89;
  return math_7314a0((__int64)v87, a3);
}

float gyro_pointing_kalman_filter_729c20(unsigned __int64* a1,
                                         unsigned __int64* a2, __int64 a3,
                                         unsigned __int64 a4)
{

#pragma clang fp contract(off)
  unsigned __int64 v5;
  unsigned __int64 v6;
  unsigned __int64* v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;
  char v35;
  __int64 v36;
  int v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  char* v44;
  char* v45;
  unsigned __int64 v46;
  __int64 v47;
  __int64 v48;
  void* v49;
  void* v57;
  int v58;
  unsigned __int64 v59;
  __int64 v60;
  char* v61;
  __int64 v62;
  void* v63;
  void* v71;
  unsigned __int64 v72;
  unsigned __int64 v73;
  unsigned __int64 v74;
  unsigned __int64* v75;
  unsigned __int64 v76;
  unsigned __int64 v77;
  char* v78;
  unsigned __int64 v79;
  unsigned __int64 v80;
  unsigned __int64 v81;
  unsigned __int64 v82;
  char* v83;
  char* v84;
  char* v85;
  char* v86;
  char* v87;
  float result;
  __int64 v89;
  unsigned __int64 v90;
  unsigned __int64 v91;
  unsigned __int64 v92;
  unsigned __int64 v93;
  unsigned __int64 v94;
  unsigned __int64 v95;
  unsigned __int64 v96;
  unsigned __int64 v97;
  struct {
    unsigned __int64 v98;
    unsigned __int64 v99;
    _BYTE v100[4368];
  } v98_;

  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v25 = COERCE_AS(__typeof__(v25),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v5 = a1[547];
  v6 = *a1;
  v9 = a1 + 937;
  *a2 = v5;
  a1[a1[970]++ + 937] = v5;
  math_730ec0(a1 + 548, v5, v6, a4),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v10 = a1[547] + 1;
  a1[547] = v10;
  a2[1] = v10;
  v11 = a1[547];
  v9[a1[970]++] = v11;
  math_730ec0(a1 + 548, v11, v6 + 1, v12),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v13 = a1[547] + 1;
  a1[547] = v13;
  a2[2] = v13;
  v14 = a1[547];
  v9[a1[970]++] = v14;
  math_730ec0(a1 + 548, v14, v6 + 2, v15),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v16 = a1[547] + 1;
  a1[547] = v16;
  a2[3] = v16;
  v17 = a1[547];
  v9[a1[970]++] = v17;
  math_730ec0(a1 + 548, v17, v6 + 3, v18),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v19 = a1[547] + 1;
  a1[547] = v19;
  a2[4] = v19;
  v20 = a1[547];
  v9[a1[970]++] = v20;
  math_730ec0(a1 + 548, v20, v6 + 4, v21),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v22 = v6 + 5;
  v23 = a1[547] + 1;
  a1[547] = v23;
  a2[5] = v23;
  v24 = a1[547];
  v9[a1[970]++] = v24;
  math_730ec0(a1 + 548, v24, v6 + 5, v25),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v27 = *a1;
  v28 = a1[1];
  v29 = v6 + 6;
  ++a1[547];
  if (__PAIR128__(v6 + 6, v6 + 6) == __PAIR128__(v28, v27)) {
    goto LABEL_39;
  }
  if (v29 >= 0x22) {
    *(_QWORD*)&v98_.v100[4352] = 0;
    v98_.v98 = v6 + 6;
    v98_.v99 = v6 + 6;
    memset_plt((void*)v98_.v100, nullptr, 4356),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v25 = COERCE_AS(__typeof__(v25),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
    if (v29 >= v27) {
      v30 = v27;
    }
    else {
      v30 = v6 + 6;
    }
    if (v27 == 0 || v28 == 0) {
      goto LABEL_24;
    }
    if (v29 >= v28) {
      v31 = v28;
    }
    else {
      v31 = v6 + 6;
    }
    v32 = v30 & 7;
    v33 = 4 * v31;
    if (v30 - 1 >= 7) {
      v40 = 0;
      v41 = 0;
      v42 = -(__int64)(v30 & 0xFFFFFFFFFFFFFFF8LL);
      do {
        memcpy_plt(&v98_.v100[v41 * 8], &a1[v41 + 2], v33),
            v12 = COERCE_AS(__typeof__(v12),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v15 = COERCE_AS(__typeof__(v15),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v18 = COERCE_AS(__typeof__(v18),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v21 = COERCE_AS(__typeof__(v21),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v25 = COERCE_AS(__typeof__(v25),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
        memcpy_plt(&v98_.v100[v41 * 8 + 132], (char*)&a1[v41 + 18] + 4, v33),
            v12 = COERCE_AS(__typeof__(v12),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v15 = COERCE_AS(__typeof__(v15),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v18 = COERCE_AS(__typeof__(v18),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v21 = COERCE_AS(__typeof__(v21),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v25 = COERCE_AS(__typeof__(v25),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
        memcpy_plt(&v98_.v100[v41 * 8 + 264], &a1[v41 + 35], v33),
            v12 = COERCE_AS(__typeof__(v12),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v15 = COERCE_AS(__typeof__(v15),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v18 = COERCE_AS(__typeof__(v18),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v21 = COERCE_AS(__typeof__(v21),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v25 = COERCE_AS(__typeof__(v25),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
        memcpy_plt(&v98_.v100[v41 * 8 + 396], (char*)&a1[v41 + 51] + 4, v33),
            v12 = COERCE_AS(__typeof__(v12),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v15 = COERCE_AS(__typeof__(v15),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v18 = COERCE_AS(__typeof__(v18),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v21 = COERCE_AS(__typeof__(v21),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v25 = COERCE_AS(__typeof__(v25),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
        memcpy_plt(&v98_.v100[v41 * 8 + 528], &a1[v41 + 68], v33),
            v12 = COERCE_AS(__typeof__(v12),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v15 = COERCE_AS(__typeof__(v15),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v18 = COERCE_AS(__typeof__(v18),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v21 = COERCE_AS(__typeof__(v21),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v25 = COERCE_AS(__typeof__(v25),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
        memcpy_plt(&v98_.v100[v41 * 8 + 660], (char*)&a1[v41 + 84] + 4, v33),
            v12 = COERCE_AS(__typeof__(v12),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v15 = COERCE_AS(__typeof__(v15),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v18 = COERCE_AS(__typeof__(v18),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v21 = COERCE_AS(__typeof__(v21),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v25 = COERCE_AS(__typeof__(v25),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
        memcpy_plt(&v98_.v100[v41 * 8 + 792], &a1[v41 + 101], v33),
            v12 = COERCE_AS(__typeof__(v12),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v15 = COERCE_AS(__typeof__(v15),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v18 = COERCE_AS(__typeof__(v18),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v21 = COERCE_AS(__typeof__(v21),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v25 = COERCE_AS(__typeof__(v25),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
        memcpy_plt(&v98_.v100[v41 * 8 + 924], (char*)&a1[v41 + 117] + 4, v33),
            v12 = COERCE_AS(__typeof__(v12),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v15 = COERCE_AS(__typeof__(v15),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v18 = COERCE_AS(__typeof__(v18),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v21 = COERCE_AS(__typeof__(v21),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v25 = COERCE_AS(__typeof__(v25),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
        v41 += 132;
        v40 -= 8;
      } while (v42 != v40);
      v34 = -v40;
      if (v32 == 0) {
        goto LABEL_24;
      }
    }
    else {
      v34 = 0;
      if (v32 == 0) {
      LABEL_24:
        v46 = v98_.v99;
        *a1 = v98_.v98;
        a1[1] = v46;
        memcpy_plt(a1 + 2, v98_.v100, 4356),
            v12 = COERCE_AS(__typeof__(v12),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v15 = COERCE_AS(__typeof__(v15),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v18 = COERCE_AS(__typeof__(v18),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v21 = COERCE_AS(__typeof__(v21),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v25 = COERCE_AS(__typeof__(v25),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
        goto LABEL_39;
      }
    }
    v43 = 132 * v34 + 16;
    v44 = (char*)a1 + v43;
    v45 = (char*)&v98_.v98 + v43;
    do {
      memcpy_plt(v45, v44, v33),
          v12 = COERCE_AS(__typeof__(v12),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v15 = COERCE_AS(__typeof__(v15),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v18 = COERCE_AS(__typeof__(v18),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v21 = COERCE_AS(__typeof__(v21),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v25 = COERCE_AS(__typeof__(v25),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
      v44 += 132;
      v45 += 132;
      --v32;
    } while (v32 != 0);
    goto LABEL_24;
  }
  v35 = v29 - v27;
  *a1 = v29;
  if (v29 > v27 && v28 != 0) {
    v36 = 33 * v27;
    v37 = 4 * v28;
    v38 = v35 & 7;
    if (v6 - v27 + 5 >= 7) {
      v89 = 33 * v27;
      v90 = v28;
      v47 = 0;
      v48 = -(__int64)(v35 & 0x38);
      v49 = (void*)((char*)a1 + 4 * v36 + 940);
      do {
        memset_plt((void*)((char*)v49 - 924), nullptr, v37),
            v12 = COERCE_AS(__typeof__(v12),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v15 = COERCE_AS(__typeof__(v15),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v18 = COERCE_AS(__typeof__(v18),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v21 = COERCE_AS(__typeof__(v21),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v25 = COERCE_AS(__typeof__(v25),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
        memset_plt((void*)((char*)v49 - 792), nullptr, v37),
            v12 = COERCE_AS(__typeof__(v12),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v15 = COERCE_AS(__typeof__(v15),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v18 = COERCE_AS(__typeof__(v18),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v21 = COERCE_AS(__typeof__(v21),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v25 = COERCE_AS(__typeof__(v25),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
        memset_plt((void*)((char*)v49 - 660), nullptr, v37),
            v12 = COERCE_AS(__typeof__(v12),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v15 = COERCE_AS(__typeof__(v15),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v18 = COERCE_AS(__typeof__(v18),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v21 = COERCE_AS(__typeof__(v21),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v25 = COERCE_AS(__typeof__(v25),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
        memset_plt((void*)((char*)v49 - 528), nullptr, v37),
            v12 = COERCE_AS(__typeof__(v12),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v15 = COERCE_AS(__typeof__(v15),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v18 = COERCE_AS(__typeof__(v18),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v21 = COERCE_AS(__typeof__(v21),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v25 = COERCE_AS(__typeof__(v25),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
        memset_plt((void*)((char*)v49 - 396), nullptr, v37),
            v12 = COERCE_AS(__typeof__(v12),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v15 = COERCE_AS(__typeof__(v15),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v18 = COERCE_AS(__typeof__(v18),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v21 = COERCE_AS(__typeof__(v21),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v25 = COERCE_AS(__typeof__(v25),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
        memset_plt((void*)((char*)v49 - 264), nullptr, v37),
            v12 = COERCE_AS(__typeof__(v12),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v15 = COERCE_AS(__typeof__(v15),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v18 = COERCE_AS(__typeof__(v18),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v21 = COERCE_AS(__typeof__(v21),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v25 = COERCE_AS(__typeof__(v25),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
        memset_plt((void*)((char*)v49 - 132), nullptr, v37),
            v12 = COERCE_AS(__typeof__(v12),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v15 = COERCE_AS(__typeof__(v15),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v18 = COERCE_AS(__typeof__(v18),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v21 = COERCE_AS(__typeof__(v21),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v25 = COERCE_AS(__typeof__(v25),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
        memset_plt(v49, nullptr, v37),
            v12 = COERCE_AS(__typeof__(v12),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v15 = COERCE_AS(__typeof__(v15),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v18 = COERCE_AS(__typeof__(v18),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v21 = COERCE_AS(__typeof__(v21),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v25 = COERCE_AS(__typeof__(v25),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
        v49 = (void*)((char*)v49 + 1056);
        v47 -= 8;
      } while (v48 != v47);
      v39 = -v47;
      v36 = v89;
      v28 = v90;
      if (v38 == 0) {
        goto LABEL_30;
      }
    }
    else {
      v39 = 0;
      if (v38 == 0) {
        goto LABEL_30;
      }
    }
    v57 = (void*)((char*)a1 + 132 * v39 + 4 * v36 + 16);
    do {
      memset_plt(v57, nullptr, v37),
          v12 = COERCE_AS(__typeof__(v12),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v15 = COERCE_AS(__typeof__(v15),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v18 = COERCE_AS(__typeof__(v18),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v21 = COERCE_AS(__typeof__(v21),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v25 = COERCE_AS(__typeof__(v25),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
      v57 = (void*)((char*)v57 + 132);
      --v38;
    } while (v38 != 0);
  }
LABEL_30:
  a1[1] = v29;
  if (v29 <= v28) {
    goto LABEL_39;
  }
  v58 = 4 * (v29 - v28);
  v59 = v29 & 7;
  if (v22 < 7) {
    v60 = 0;
    if ((v29 & 7) == 0) {
      goto LABEL_39;
    }
    goto LABEL_37;
  }
  v91 = v28;
  v61 = (char*)a1 + 4 * v28;
  v62 = 0;
  v63 = (void*)(v61 + 940);
  do {
    memset_plt((void*)((char*)v63 - 924), nullptr, v58),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v25 = COERCE_AS(__typeof__(v25),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
    memset_plt((void*)((char*)v63 - 792), nullptr, v58),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v25 = COERCE_AS(__typeof__(v25),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
    memset_plt((void*)((char*)v63 - 660), nullptr, v58),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v25 = COERCE_AS(__typeof__(v25),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
    memset_plt((void*)((char*)v63 - 528), nullptr, v58),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v25 = COERCE_AS(__typeof__(v25),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
    memset_plt((void*)((char*)v63 - 396), nullptr, v58),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v25 = COERCE_AS(__typeof__(v25),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
    memset_plt((void*)((char*)v63 - 264), nullptr, v58),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v25 = COERCE_AS(__typeof__(v25),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
    memset_plt((void*)((char*)v63 - 132), nullptr, v58),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v25 = COERCE_AS(__typeof__(v25),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
    memset_plt(v63, nullptr, v58),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v25 = COERCE_AS(__typeof__(v25),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
    v63 = (void*)((char*)v63 + 1056);
    v62 -= 8;
  } while (-(__int64)(v29 & 0x38) != v62);
  v60 = -v62;
  v28 = v91;
  if ((v29 & 7) != 0) {
  LABEL_37:
    v71 = (void*)((char*)a1 + 132 * v60 + 4 * v28 + 16);
    do {
      memset_plt(v71, nullptr, v58),
          v12 = COERCE_AS(__typeof__(v12),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v15 = COERCE_AS(__typeof__(v15),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v18 = COERCE_AS(__typeof__(v18),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v21 = COERCE_AS(__typeof__(v21),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v25 = COERCE_AS(__typeof__(v25),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
      v71 = (void*)((char*)v71 + 132);
      --v59;
    } while (v59 != 0);
  }
LABEL_39:
  v72 = a2[3];
  v94 = a2[2];
  v95 = v72;
  v73 = a2[5];
  v96 = a2[4];
  v97 = v73;
  v74 = a2[1];
  v92 = *a2;
  v93 = v74;
  v92 = *fw_math_LookupStateIndex(a1 + 548, (__int64*)&v92),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v25 = COERCE_AS(__typeof__(v25),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v93 = *fw_math_LookupStateIndex(a1 + 548, (__int64*)&v93),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v25 = COERCE_AS(__typeof__(v25),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v94 = *fw_math_LookupStateIndex(a1 + 548, (__int64*)&v94),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v25 = COERCE_AS(__typeof__(v25),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v95 = *fw_math_LookupStateIndex(a1 + 548, (__int64*)&v95),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v25 = COERCE_AS(__typeof__(v25),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v96 = *fw_math_LookupStateIndex(a1 + 548, (__int64*)&v96),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v25 = COERCE_AS(__typeof__(v25),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v75 = fw_math_LookupStateIndex(a1 + 548, (__int64*)&v97),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v25 = COERCE_AS(__typeof__(v25),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v77 = v92;
  v76 = v93;
  v78 = (char*)a1 + 132 * v92 + 16;
  v79 = *v75;
  v81 = v94;
  v80 = v95;
  v82 = v96;
  *(_DWORD*)&v78[4 * v92] = *(_DWORD*)a3;
  *(_DWORD*)&v78[4 * v76] = *(_DWORD*)(a3 + 4);
  *(_DWORD*)&v78[4 * v81] = *(_DWORD*)(a3 + 8);
  *(_DWORD*)&v78[4 * v80] = *(_DWORD*)(a3 + 12);
  *(_DWORD*)&v78[4 * v82] = *(_DWORD*)(a3 + 16);
  *(_DWORD*)&v78[4 * v79] = *(_DWORD*)(a3 + 20);
  v83 = (char*)a1 + 132 * v76 + 16;
  *(_DWORD*)&v83[4 * v77] = *(_DWORD*)(a3 + 24);
  *(_DWORD*)&v83[4 * v76] = *(_DWORD*)(a3 + 28);
  *(_DWORD*)&v83[4 * v81] = *(_DWORD*)(a3 + 32);
  *(_DWORD*)&v83[4 * v80] = *(_DWORD*)(a3 + 36);
  *(_DWORD*)&v83[4 * v82] = *(_DWORD*)(a3 + 40);
  *(_DWORD*)&v83[4 * v79] = *(_DWORD*)(a3 + 44);
  v84 = (char*)a1 + 132 * v81 + 16;
  *(_DWORD*)&v84[4 * v77] = *(_DWORD*)(a3 + 48);
  *(_DWORD*)&v84[4 * v76] = *(_DWORD*)(a3 + 52);
  *(_DWORD*)&v84[4 * v81] = *(_DWORD*)(a3 + 56);
  *(_DWORD*)&v84[4 * v80] = *(_DWORD*)(a3 + 60);
  *(_DWORD*)&v84[4 * v82] = *(_DWORD*)(a3 + 64);
  *(_DWORD*)&v84[4 * v79] = *(_DWORD*)(a3 + 68);
  v85 = (char*)a1 + 132 * v80 + 16;
  *(_DWORD*)&v85[4 * v77] = *(_DWORD*)(a3 + 72);
  *(_DWORD*)&v85[4 * v76] = *(_DWORD*)(a3 + 76);
  *(_DWORD*)&v85[4 * v81] = *(_DWORD*)(a3 + 80);
  *(_DWORD*)&v85[4 * v80] = *(_DWORD*)(a3 + 84);
  *(_DWORD*)&v85[4 * v82] = *(_DWORD*)(a3 + 88);
  *(_DWORD*)&v85[4 * v79] = *(_DWORD*)(a3 + 92);
  v86 = (char*)a1 + 132 * v82 + 16;
  v87 = (char*)a1 + 132 * v79 + 16;
  *(_DWORD*)&v86[4 * v77] = *(_DWORD*)(a3 + 96);
  *(_DWORD*)&v86[4 * v76] = *(_DWORD*)(a3 + 100);
  *(_DWORD*)&v86[4 * v81] = *(_DWORD*)(a3 + 104);
  *(_DWORD*)&v86[4 * v80] = *(_DWORD*)(a3 + 108);
  *(_DWORD*)&v86[4 * v82] = *(_DWORD*)(a3 + 112);
  *(_DWORD*)&v86[4 * v79] = *(_DWORD*)(a3 + 116);
  *(_DWORD*)&v87[4 * v77] = *(_DWORD*)(a3 + 120);
  *(_DWORD*)&v87[4 * v76] = *(_DWORD*)(a3 + 124);
  *(_DWORD*)&v87[4 * v81] = *(_DWORD*)(a3 + 128);
  *(_DWORD*)&v87[4 * v80] = *(_DWORD*)(a3 + 132);
  *(_DWORD*)&v87[4 * v82] = *(_DWORD*)(a3 + 136);
  result = *(float*)(a3 + 140);
  *(float*)&v87[4 * v79] = result;
  return result;
}

bool nerd_gyro_pointing_GyroPointingKalmanFilter_TestParameterStates(
    void* this_, __int64 a2, __int64 a3, unsigned __int64 a4)
{

#pragma clang fp contract(off)
  __int64 v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  bool v16;
  unsigned __int64 v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  __int64 v27;
  float v28;
  float v29;
  float v30;
  unsigned __int64 v31;
  float v32;
  float v33;
  float v34;
  float v35;
  __int64 v36;
  float* v37;
  float v38;
  float v39;
  float v40;
  float v41;
  float v42;
  float v43;
  float v44;
  float v45;
  float v46;
  float v47;
  float v48;
  float v49;
  float v50;
  float v51;
  float v52;
  float v53;
  float v54;
  float v55;
  float v56;
  float v57;
  float v58;
  float v59;
  float v60;
  float v61;
  float v62;
  float v63;
  float v64;
  float v65;
  float v66;
  float v67;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  _BYTE v82[1764];
  _DWORD v83[21];
  _BYTE v84[1764];
  float v85[21];
  _BYTE v86[1764];
  __int64 v87[21];
  __int64 v88[22];

  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v4 = *((_QWORD*)this_ + 1030);
  v6 = *((_QWORD*)this_ + 1031);
  v7 = *((_QWORD*)this_ + 1037);
  v8 = *((_QWORD*)this_ + 1038);
  v9 = *((_QWORD*)this_ + 1039);
  v10 = *((_QWORD*)this_ + 1040);
  v11 = *((_QWORD*)this_ + 1041);
  v12 = *((_QWORD*)this_ + 1042);
  v80 = *((_QWORD*)this_ + 1010);
  v81 = *((_QWORD*)this_ + 1029);
  v78 = *((_QWORD*)this_ + 1012);
  v79 = *((_QWORD*)this_ + 1011);
  v76 = *((_QWORD*)this_ + 1019);
  v77 = *((_QWORD*)this_ + 1018);
  v74 = *((_QWORD*)this_ + 1021);
  v75 = *((_QWORD*)this_ + 1020);
  v72 = *((_QWORD*)this_ + 1023);
  v73 = *((_QWORD*)this_ + 1022);
  v70 = *((_QWORD*)this_ + 1025);
  v71 = *((_QWORD*)this_ + 1024);
  v69 = *((_QWORD*)this_ + 1026);
  memset_plt_alt1((void*)v86, nullptr, 1764, a4),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  memset(v88, 0, 168);
  v87[1] = v4;
  v87[2] = v6;
  v87[3] = v7;
  v87[4] = v8;
  v87[5] = v9;
  v87[6] = v10;
  v87[7] = v11;
  v87[8] = v12;
  v87[0] = v81;
  v87[9] = v80;
  v87[10] = v79;
  v87[11] = v78;
  v87[12] = v77;
  v87[13] = v76;
  v87[14] = v75;
  v87[15] = v74;
  v87[16] = v73;
  v87[17] = v72;
  v87[19] = v70;
  v87[18] = v71;
  v87[20] = v69;
  fw_math_MapStateIndices21((void*)((__int64)v88),
                            (unsigned __int64*)this_ + 548, v87),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  SdkRoutine_7202e0((void*)((__int64)v86), (__int64)this_, v88, v88, v13),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v14 = *((_QWORD*)this_ + 1520);
  if (v14 == 0) {
    return true;
  }
  v15 = *((_QWORD*)this_ + 1522);
  v16 = v15 >= v14;
  v17 = v15 - v14;
  v18 = *((float*)this_ + 2065);
  v19 = *((float*)this_ + 2066);
  v20 = *((float*)this_ + 2026);
  v21 = *((float*)this_ + 2068);
  v22 = *((float*)this_ + 2069);
  v23 = *((float*)this_ + 2072);
  v24 = *((float*)this_ + 2016);
  v25 = *((float*)this_ + 2027);
  v26 = *((float*)this_ + 2028);
  if (v16) {
    v27 = 0;
  }
  else {
    v27 = *((_QWORD*)this_ + 1521);
  }
  v28 = *((float*)this_ + 2017);
  v29 = *((float*)this_ + 2018);
  v30 = *((float*)this_ + 2029);
  v31 = v27 + v17;
  v32 = *((float*)this_ + 2030);
  v33 = *((float*)this_ + 2031);
  v34 = *((float*)this_ + 2032);
  v35 = *((float*)this_ + 2033);
  if (v31 >= *((_QWORD*)this_ + 1521)) {
    v36 = *((_QWORD*)this_ + 1521);
  }
  else {
    v36 = 0;
  }
  v37 = (float*)((char*)this_ + 1860 * (v31 - v36));
  v38 = v37[2555];
  v39 = v37[2552] - *((float*)this_ + 2055);
  v40 = v37[2556];
  v41 = v37[2554] - *((float*)this_ + 2064);
  v42 = v37[2553] - *((float*)this_ + 2056);
  v43 = v37[2558];
  v44 = v37[2559];
  v85[0] = v37[2551] - *((float*)this_ + 2054);
  v45 = v37[2566];
  v85[1] = v39;
  v85[3] = v41;
  v46 = v37[2567];
  v47 = v37[2568];
  v85[2] = v42;
  v48 = v38 - v18;
  v49 = v37[2562];
  v50 = v40 - v19;
  v51 = v37[2563];
  v52 = v43 - v21;
  v53 = v37[2564];
  v54 = v44 - v22;
  v55 = v37[2565];
  v56 = v45 - v20;
  v57 = v37[2572];
  v58 = v46 - v25;
  v59 = v37[2573];
  v60 = v47 - v26;
  v61 = v37[2574];
  v85[4] = v48;
  v85[5] = v50;
  v85[6] = v52;
  v85[7] = v54;
  v85[12] = v56;
  v62 = *((float*)this_ + 2034);
  v85[13] = v58;
  v85[14] = v60;
  v63 = v49 - v23;
  v64 = v51 - v24;
  v65 = v37[2569];
  v66 = v37[2570];
  v67 = v37[2571];
  v85[8] = v63;
  v85[9] = v64;
  v85[10] = v53 - v28;
  v85[11] = v55 - v29;
  v85[18] = v57 - v34;
  v85[19] = v59 - v35;
  v85[20] = v61 - v62;
  v85[15] = v65 - v30;
  v85[16] = v66 - v32;
  v85[17] = v67 - v33;
  memcpy_plt(v84, v37 + 2110, 1764),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  memset(v83, 0, sizeof(v83));
  memcpy_plt(v82, v86, 1764),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  return SdkRoutine_87a340(v85, v84, v83, v82) <= 0x1.0000000000000p+2f;
}

void nerd_gyro_pointing_GyroPointingKalmanFilter_ApplyCorrection(__int64 a1,
                                                                 __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  __int64 v27;
  __int64 v28;
  __int64* v29;
  __int64 v30;
  __int64 v31;
  float v32;
  float v33;
  float v34;
  float v35;
  __int64 v36;
  __int64 v37;
  float v38;
  float v39;
  float v40;
  float v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  float v45;
  float v46;
  float v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  float v51;
  __int64 v52;
  float v53;
  __int64 v54;
  float v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  float v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  float v69;
  float v70;
  float v71;
  float v72;
  float v73;
  float v74;
  float v75;
  float v76;
  float v77;
  float v78;
  __int64 v79;
  __int64 v80;
  float v81;
  float v82;
  float v83;
  float v84;
  float v85;
  float v86;
  float v87;
  float v88;
  float v89;
  float v90;
  float v91;
  float v92;
  float v93;
  float v94;
  __int64 v95;
  __int64* v96;
  __int64 v97;
  __int64 v98;
  float v99;
  float v100;
  float v101;
  float v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  float v106;
  float v107;
  __int64 v108;
  __int64 v109;
  float v110;
  float v111;
  __int64 v112;
  __int64* v113;
  __int64 v114;
  __int64 v115;
  __int64 v116;
  float v117;
  __int64 v118;
  __int64 v119;
  float v120;
  float v121;
  float v122;
  float v123;
  float v124;
  float v125;
  float v126;
  float v127;
  float v128;
  float v129;
  float v130;
  float v131;
  float v132;
  float v133;
  float v134;
  float v135;
  float v136;
  float v137;
  __int64 v138;
  __int64 v139;
  __int64* v140;
  __int64 v141;
  __int64 v142;
  __int64 v143;
  float v144;
  float v145;
  float v146;
  float v147;
  float v148;
  __int64 v149;
  __int64 v150;
  __int64* v151;
  __int64 v152;
  __int64 v153;
  float v154;
  float v155;
  float v156;
  float v157;
  float v158;
  float v159;
  float v160;
  float v161;
  float v162;
  float v163;
  float v164;
  float v165;
  float v166;
  _QWORD v167[9];
  __int64 v168;
  __int64 v169;
  __int64 v170;
  __int64 v171;
  __int64 v172;
  __int64 v173;
  __int64 v174;
  __int64 v175;
  __int64 v176;

  v2 = *(_QWORD*)(a1 + 8048);
  v3 = *(_QWORD*)(a2 + 144);
  v168 = *(_QWORD*)(a1 + 8040);
  v169 = v2;
  v170 = *(_QWORD*)(a1 + 8056);
  v168 = *(_QWORD*)fw_math_LookupStateIndex_alt1(v3, &v168);
  v169 = *(_QWORD*)fw_math_LookupStateIndex_alt1(v3, &v169);
  v6 = (__int64*)fw_math_LookupStateIndex_alt1(v3, &v170);
  v7 = v169;
  v8 = *v6;
  v9 = a2 + 152;
  v10 = *(float*)(a2 + 4 * v168);
  v11 = *(float*)(a2 + 4 * v169);
  v12 = *(float*)(a2 + 4 * *v6);
  *(_BYTE*)(v9 + v168) = 1;
  *(_BYTE*)(v9 + v7) = 1;
  *(_BYTE*)(v9 + v8) = 1;
  v13 = sqrtf((float)((float)((float)(v10 * v10) + (float)(v11 * v11)) +
                      (float)(v12 * v12)) +
              1.1755e-38f) *
        0.5f;
  if ((float)(v13 * v13) <= 0.04f) {
    v14 =
        (float)((float)((float)((float)((float)((float)((float)((float)((float)((float)(v13 *
                                                                                        v13) *
                                                                                -0.000000025052f) +
                                                                        0.0000027557f) *
                                                                (float)(v13 *
                                                                        v13)) +
                                                        -0.00019841f) *
                                                (float)(v13 * v13)) +
                                        0.0083333f) *
                                (float)(v13 * v13)) +
                        -0.16667f) *
                (float)(v13 * v13)) +
        1.0f;
  }
  else {
    v14 = sinf_plt(v13) / v13;
  }
  v15 = v14 * 0.5f;
  v16 = cosf_plt(v13);
  v17 = *(float*)(a1 + 8024);
  v18 = *(float*)(a1 + 8028);
  v19 = *(float*)(a1 + 8032);
  v20 = *(float*)(a1 + 8036);
  v21 = -(
      float)((float)((float)((float)((float)((float)(v10 * v15) * v17) + 0.0f) +
                             (float)((float)(v11 * v15) * v18)) +
                     (float)((float)(v12 * v15) * v19)) -
             (float)(v16 * v20));
  *(float*)(a1 + 8036) = v21;
  v22 = (float)((float)((float)(v10 * v15) * v20) + (float)(v16 * v17)) +
        (float)((float)((float)(v11 * v15) * v19) -
                (float)(v18 * (float)(v12 * v15)));
  v23 = (float)((float)((float)(v11 * v15) * v20) + (float)(v16 * v18)) +
        (float)((float)((float)(v12 * v15) * v17) -
                (float)(v19 * (float)(v10 * v15)));
  v24 = (float)((float)((float)(v10 * v15) * v18) -
                (float)(v17 * (float)(v11 * v15))) +
        (float)((float)(v20 * (float)(v12 * v15)) + (float)(v16 * v19));
  *(float*)(a1 + 8024) = v22;
  *(float*)(a1 + 8028) = v23;
  *(float*)(a1 + 8032) = v24;
  v25 = (float)(v21 * v21) +
        (float)((float)(v24 * v24) +
                (float)((float)(v22 * v22) + (float)(v23 * v23)));
  if (v25 != 0.0f) {
    v26 = 1.0f / sqrtf(v25);
    *(float*)(a1 + 8032) = v24 * v26;
    *(float*)(a1 + 8024) = v22 * v26;
    *(float*)(a1 + 8028) = v23 * v26;
    *(float*)(a1 + 8036) = v21 * v26;
  }
  v27 = *(_QWORD*)(a1 + 8008);
  v28 = *(_QWORD*)(a2 + 144);
  v168 = *(_QWORD*)(a1 + 8000);
  v169 = v27;
  v170 = *(_QWORD*)(a1 + 8016);
  v168 = *(_QWORD*)fw_math_LookupStateIndex_alt1(v28, &v168);
  v169 = *(_QWORD*)fw_math_LookupStateIndex_alt1(v28, &v169);
  v29 = (__int64*)fw_math_LookupStateIndex_alt1(v28, &v170);
  v30 = *v29;
  v31 = v169;
  v32 = *(float*)(a2 + 4 * v168);
  v33 = *(float*)(a2 + 4 * v169);
  v34 = *(float*)(a2 + 4 * *v29);
  *(_BYTE*)(v9 + v168) = 1;
  *(_BYTE*)(v9 + v31) = 1;
  *(_BYTE*)(v9 + v30) = 1;
  v35 = *(float*)(a1 + 7984);
  v36 = *(_QWORD*)(a1 + 8088);
  v168 = *(_QWORD*)(a1 + 8080);
  v169 = v36;
  v37 = *(_QWORD*)(a1 + 8096);
  v38 = v32 + v35;
  v39 = *(float*)(a1 + 7988);
  *(float*)(a1 + 7984) = v38;
  v170 = v37;
  v40 = v33 + v39;
  v41 = *(float*)(a1 + 7992);
  *(float*)(a1 + 7988) = v40;
  *(float*)(a1 + 7992) = v34 + v41;
  v42 = *(_QWORD*)(a2 + 144);
  v168 = *(_QWORD*)fw_math_LookupStateIndex_alt1(v42, &v168);
  v169 = *(_QWORD*)fw_math_LookupStateIndex_alt1(v42, &v169);
  v43 = *(_QWORD*)fw_math_LookupStateIndex_alt1(v42, &v170);
  v44 = v169;
  v175 = 0;
  v176 = 0;
  v173 = 0;
  v174 = 0;
  v171 = 0;
  v172 = 0;
  v169 = 0;
  v170 = 0;
  v45 = *(float*)(a2 + 4 * v168);
  v46 = *(float*)(a2 + 4 * v44);
  v47 = *(float*)(a2 + 4 * v43);
  *(_BYTE*)(v9 + v168) = 1;
  *(_BYTE*)(v9 + v44) = 1;
  *(_BYTE*)(v9 + v43) = 1;
  v48 = *(_QWORD*)(a1 + 8200);
  v49 = *(_QWORD*)(a1 + 8168);
  v50 = *(_QWORD*)(a1 + 8184);
  v51 = v45 + *(float*)(a1 + 8064);
  v167[6] = *(_QWORD*)(a1 + 0x2000);
  v167[7] = v48;
  v52 = *(_QWORD*)(a1 + 8160);
  v53 = *(float*)(a1 + 8068);
  v54 = *(_QWORD*)(a1 + 8208);
  *(float*)(a1 + 8064) = v51;
  v55 = *(float*)(a1 + 8072);
  v167[2] = v52;
  v167[3] = v49;
  v56 = *(_QWORD*)(a1 + 8176);
  v167[8] = v54;
  v168 = 0;
  v57 = *(_QWORD*)(a1 + 8152);
  *(float*)(a1 + 8068) = v46 + v53;
  v167[4] = v56;
  v167[5] = v50;
  v58 = *(_QWORD*)(a1 + 8144);
  *(float*)(a1 + 8072) = v47 + v55;
  v59 = *(_QWORD*)(a2 + 144);
  v167[0] = v58;
  v167[1] = v57;
  *(struct PseudoSret*)(&v168) = fw_math_MapStateIndices9_alt1(v59, v167);
  v60 = v169;
  v61 = v170;
  v62 = v171;
  v63 = v176;
  v64 = *(float*)(a2 + 4 * v168);
  v65 = v172;
  v66 = v173;
  v67 = v174;
  v68 = v175;
  v69 = *(float*)(a2 + 4 * v169);
  v70 = *(float*)(a2 + 4 * v170);
  v71 = *(float*)(a2 + 4 * v171);
  v72 = *(float*)(a2 + 4 * v172);
  v73 = *(float*)(a2 + 4 * v173);
  v74 = *(float*)(a2 + 4 * v174);
  v75 = *(float*)(a2 + 4 * v175);
  v76 = *(float*)(a2 + 4 * v176);
  *(_BYTE*)(v9 + v168) = 1;
  *(_BYTE*)(v9 + v60) = 1;
  *(_BYTE*)(v9 + v61) = 1;
  *(_BYTE*)(v9 + v62) = 1;
  *(_BYTE*)(v9 + v65) = 1;
  *(_BYTE*)(v9 + v66) = 1;
  *(_BYTE*)(v9 + v67) = 1;
  *(_BYTE*)(v9 + v68) = 1;
  *(_BYTE*)(v9 + v63) = 1;
  v77 = v64 + *(float*)(a1 + 8104);
  v78 = *(float*)(a1 + 8108);
  v79 = *(_QWORD*)(a1 + 8240);
  v168 = *(_QWORD*)(a1 + 8232);
  v169 = v79;
  v80 = *(_QWORD*)(a1 + 8248);
  v81 = v69 + v78;
  v82 = *(float*)(a1 + 8112);
  *(float*)(a1 + 8104) = v77;
  v170 = v80;
  *(float*)(a1 + 8108) = v81;
  v83 = v70 + v82;
  v84 = *(float*)(a1 + 8116);
  *(float*)(a1 + 8112) = v83;
  v85 = v71 + v84;
  v86 = *(float*)(a1 + 8120);
  *(float*)(a1 + 8116) = v85;
  v87 = v72 + v86;
  v88 = *(float*)(a1 + 8124);
  *(float*)(a1 + 8120) = v87;
  v89 = v73 + v88;
  v90 = *(float*)(a1 + 8128);
  *(float*)(a1 + 8124) = v89;
  v91 = v74 + v90;
  v92 = *(float*)(a1 + 8132);
  *(float*)(a1 + 8128) = v91;
  v93 = v75 + v92;
  v94 = *(float*)(a1 + 8136);
  *(float*)(a1 + 8132) = v93;
  *(float*)(a1 + 8136) = v76 + v94;
  v95 = *(_QWORD*)(a2 + 144);
  v168 = *(_QWORD*)fw_math_LookupStateIndex_alt1(v95, &v168);
  v169 = *(_QWORD*)fw_math_LookupStateIndex_alt1(v95, &v169);
  v96 = (__int64*)fw_math_LookupStateIndex_alt1(v95, &v170);
  v97 = *v96;
  v98 = v169;
  v99 = *(float*)(a2 + 4 * v168);
  v100 = *(float*)(a2 + 4 * v169);
  v101 = *(float*)(a2 + 4 * *v96);
  *(_BYTE*)(v9 + v168) = 1;
  *(_BYTE*)(v9 + v98) = 1;
  *(_BYTE*)(v9 + v97) = 1;
  v102 = *(float*)(a1 + 8216);
  v103 = *(_QWORD*)(a1 + 8320);
  v170 = *(_QWORD*)(a1 + 8312);
  v171 = v103;
  v104 = *(_QWORD*)(a1 + 8328);
  v105 = *(_QWORD*)(a1 + 8336);
  v106 = v99 + v102;
  v107 = *(float*)(a1 + 8220);
  *(float*)(a1 + 8216) = v106;
  v172 = v104;
  v173 = v105;
  v108 = *(_QWORD*)(a1 + 8296);
  v109 = *(_QWORD*)(a1 + 8304);
  v110 = v100 + v107;
  v111 = *(float*)(a1 + 8224);
  *(float*)(a1 + 8220) = v110;
  v168 = v108;
  v169 = v109;
  *(float*)(a1 + 8224) = v101 + v111;
  v112 = *(_QWORD*)(a2 + 144);
  v168 = *(_QWORD*)fw_math_LookupStateIndex_alt1(v112, &v168);
  v169 = *(_QWORD*)fw_math_LookupStateIndex_alt1(v112, &v169);
  v170 = *(_QWORD*)fw_math_LookupStateIndex_alt1(v112, &v170);
  v171 = *(_QWORD*)fw_math_LookupStateIndex_alt1(v112, &v171);
  v172 = *(_QWORD*)fw_math_LookupStateIndex_alt1(v112, &v172);
  v113 = (__int64*)fw_math_LookupStateIndex_alt1(v112, &v173);
  v114 = *v113;
  v115 = v169;
  v116 = v172;
  v117 = *(float*)(a2 + 4 * v168);
  v118 = v170;
  v119 = v171;
  v120 = *(float*)(a2 + 4 * v169);
  v121 = *(float*)(a2 + 4 * v170);
  v122 = *(float*)(a2 + 4 * v171);
  v123 = *(float*)(a2 + 4 * v172);
  v124 = *(float*)(a2 + 4 * *v113);
  *(_BYTE*)(v9 + v168) = 1;
  *(_BYTE*)(v9 + v115) = 1;
  *(_BYTE*)(v9 + v118) = 1;
  *(_BYTE*)(v9 + v119) = 1;
  *(_BYTE*)(v9 + v116) = 1;
  *(_BYTE*)(v9 + v114) = 1;
  v125 = *(float*)(a1 + 8260);
  v126 = *(float*)(a1 + 8268);
  v127 = v121 + *(float*)(a1 + 8264);
  v128 = v121 + *(float*)(a1 + 8280);
  v129 = *(float*)(a1 + 8284);
  LODWORD(v114) = *(unsigned __int8*)(a1 + 8384);
  *(float*)(a1 + 8256) = v117 + *(float*)(a1 + 8256);
  *(float*)(a1 + 8264) = v127;
  *(float*)(a1 + 8280) = v128;
  v130 = v120 + v125;
  v131 = v120 + v126;
  v132 = *(float*)(a1 + 8272);
  *(float*)(a1 + 8260) = v130;
  *(float*)(a1 + 8268) = v131;
  v133 = v122 + v132;
  v134 = *(float*)(a1 + 8276);
  *(float*)(a1 + 8272) = v133;
  v135 = v123 + v134;
  v136 = v123 + v129;
  v137 = *(float*)(a1 + 8288);
  *(float*)(a1 + 8276) = v135;
  *(float*)(a1 + 8284) = v136;
  *(float*)(a1 + 8288) = v124 + v137;
  if ((_DWORD)v114 == 1) {
    v138 = *(_QWORD*)(a1 + 8368);
    v139 = *(_QWORD*)(a2 + 144);
    v168 = *(_QWORD*)(a1 + 8360);
    v169 = v138;
    v170 = *(_QWORD*)(a1 + 8376);
    v168 = *(_QWORD*)fw_math_LookupStateIndex_alt1(v139, &v168);
    v169 = *(_QWORD*)fw_math_LookupStateIndex_alt1(v139, &v169);
    v140 = (__int64*)fw_math_LookupStateIndex_alt1(v139, &v170);
    v142 = *v140;
    v143 = v169;
    v144 = *(float*)(a2 + 4 * v168);
    v145 = *(float*)(a2 + 4 * v169);
    v146 = *(float*)(a2 + 4 * *v140);
    *(_BYTE*)(v9 + v168) = 1;
    *(_BYTE*)(v9 + v143) = 1;
    *(_BYTE*)(v9 + v142) = 1;
    if ((*(_BYTE*)(a1 + 8384) & 1) == 0) {
      goto LABEL_16;
    }
    v147 = v146 + *(float*)(a1 + 8352);
    v148 = *(float*)(a1 + 8348);
    *(float*)(a1 + 8344) = v144 + *(float*)(a1 + 8344);
    *(float*)(a1 + 8352) = v147;
    *(float*)(a1 + 8348) = v145 + v148;
  }
  if (*(_BYTE*)(a1 + 8432) != 1) {
    return;
  }
  v149 = *(_QWORD*)(a1 + 8416);
  v150 = *(_QWORD*)(a2 + 144);
  v168 = *(_QWORD*)(a1 + 8408);
  v169 = v149;
  v170 = *(_QWORD*)(a1 + 8424);
  v168 = *(_QWORD*)fw_math_LookupStateIndex_alt1(v150, &v168);
  v169 = *(_QWORD*)fw_math_LookupStateIndex_alt1(v150, &v169);
  v151 = (__int64*)fw_math_LookupStateIndex_alt1(v150, &v170);
  v152 = v169;
  v153 = *v151;
  v154 = *(float*)(a2 + 4 * v168);
  v155 = *(float*)(a2 + 4 * v169);
  v156 = *(float*)(a2 + 4 * *v151);
  *(_BYTE*)(v9 + v168) = 1;
  *(_BYTE*)(v9 + v152) = 1;
  *(_BYTE*)(v9 + v153) = 1;
  v157 = sqrtf((float)((float)((float)(v154 * v154) + (float)(v155 * v155)) +
                       (float)(v156 * v156)) +
               1.1755e-38f) *
         0.5f;
  if ((float)(v157 * v157) <= 0.04f) {
    v158 =
        (float)((float)((float)((float)((float)((float)((float)((float)((float)((float)(v157 *
                                                                                        v157) *
                                                                                -0.000000025052f) +
                                                                        0.0000027557f) *
                                                                (float)(v157 *
                                                                        v157)) +
                                                        -0.00019841f) *
                                                (float)(v157 * v157)) +
                                        0.0083333f) *
                                (float)(v157 * v157)) +
                        -0.16667f) *
                (float)(v157 * v157)) +
        1.0f;
  }
  else {
    v158 = sinf_plt(v157) / v157;
  }
  v159 = cosf_plt(v157);
  if ((*(_BYTE*)(a1 + 8432) & 1) == 0) {
  LABEL_16:
    nn_codec_hwacod_32f020(v140, v141);
  }
  v160 = *(float*)(a1 + 8404);
  v161 = *(float*)(a1 + 8400);
  v162 = *(float*)(a1 + 8392);
  v163 = *(float*)(a1 + 8396);
  v164 = v156 * (float)(v158 * 0.5f);
  v165 = v155 * (float)(v158 * 0.5f);
  v166 = v154 * (float)(v158 * 0.5f);
  *(float*)(a1 + 8404) =
      -(float)((float)((float)((float)((float)(v166 * v162) + 0.0f) +
                               (float)(v165 * v163)) +
                       (float)(v164 * v161)) -
               (float)(v159 * v160));
  *(float*)(a1 + 8396) = (float)((float)(v165 * v160) + (float)(v159 * v163)) +
                         (float)((float)(v164 * v162) - (float)(v161 * v166));
  *(float*)(a1 + 8392) = (float)((float)(v165 * v161) - (float)(v163 * v164)) +
                         (float)((float)(v166 * v160) + (float)(v159 * v162));
  *(float*)(a1 + 8400) = (float)((float)(v164 * v160) + (float)(v159 * v161)) +
                         (float)((float)(v166 * v163) - (float)(v162 * v165));
}

float nerd_gyro_pointing_GyroPointingKalmanFilter_UpdateBoxConstraints(
    __int64 a1, __int64 a2)
{
  float v2;
  float v3;
  float v6;
  float v7;
  float v8;
  __int64 v9;
  __int64 v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  float v20;
  float v21;
  float v22;
  float v23;
  __int64 v24;
  __int64 v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float v32;
  __int64* v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float v41;
  float v42;
  float v43;
  float v44;
  float v45;
  __int64 v46;
  __int64 v47;
  float v48;
  __int64 v49;
  __int64 v50;
  float v51;
  float v52;
  float v53;
  float v54;
  float v55;
  float v56;
  float v57;
  float v58;
  float v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  float v63;
  float v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  float v74;
  float v75;
  float v76;
  float v77;
  __int64 v78;
  __int64 v79;
  float v80;
  float v81;
  float v82;
  float v83;
  float v84;
  float v85;
  float v86;
  __int64* v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  float v91;
  float v92;
  float v93;
  float v94;
  float v95;
  float v96;
  float v97;
  float v98;
  float v99;
  float v100;
  float v101;
  float v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  float v106;
  __int64 v107;
  float v108;
  float v109;
  float v110;
  float v111;
  float v112;
  float v113;
  __int64* v114;
  __int64 v115;
  __int64 v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  float v122;
  float v123;
  float v124;
  float v125;
  float v126;
  float v127;
  float v128;
  float v129;
  float v130;
  float v131;
  float v132;
  float v133;
  float v134;
  float v135;
  _QWORD v136[9];
  __int64 v137;
  __int64 v138;
  __int64 v139;
  __int64 v140;
  __int64 v141;
  __int64 v142;
  __int64 v143;
  __int64 v144;
  __int64 v145;

  v2 = *(float*)(a1 + 7984);
  v3 = *(float*)(a1 + 7988);
  v6 = *(float*)(a1 + 7768) - v2;
  v7 = *(float*)(a1 + 7772);
  v8 = *(float*)(a1 + 7992);
  v9 = *(_QWORD*)(a1 + 8008);
  v10 = *(_QWORD*)(a2 + 288);
  v137 = *(_QWORD*)(a1 + 8000);
  v138 = v9;
  v139 = *(_QWORD*)(a1 + 8016);
  v11 = v7 - v3;
  v12 = *(float*)(a1 + 7776) - v8;
  v13 = *(float*)(a1 + 7780) - v2;
  v14 = *(float*)(a1 + 7784) - v3;
  v15 = *(float*)(a1 + 7788) - v8;
  v137 = *(_QWORD*)fw_math_LookupStateIndex_alt1(v10, &v137);
  v138 = *(_QWORD*)fw_math_LookupStateIndex_alt1(v10, &v138);
  v16 = *(_QWORD*)fw_math_LookupStateIndex_alt1(v10, &v139);
  v17 = v137;
  v18 = v138;
  v19 = a2 + 144;
  *(float*)(a2 + 4 * v137) = v6;
  *(float*)(a2 + 4 * v18) = v11;
  *(float*)(a2 + 4 * v16) = v12;
  *(float*)(v19 + 4 * v17) = v13;
  *(float*)(v19 + 4 * v18) = v14;
  *(float*)(v19 + 4 * v16) = v15;
  v20 = *(float*)(a1 + 7792);
  v21 = *(float*)(a1 + 8064);
  v22 = *(float*)(a1 + 8068);
  v23 = *(float*)(a1 + 8072);
  v24 = *(_QWORD*)(a1 + 8088);
  v25 = *(_QWORD*)(a2 + 288);
  v137 = *(_QWORD*)(a1 + 8080);
  v138 = v24;
  v26 = v20 - v21;
  v27 = *(float*)(a1 + 7796);
  v139 = *(_QWORD*)(a1 + 8096);
  v28 = v27 - v22;
  v29 = *(float*)(a1 + 7800) - v23;
  v30 = *(float*)(a1 + 7804) - v21;
  v31 = *(float*)(a1 + 7808) - v22;
  v32 = *(float*)(a1 + 7812) - v23;
  v137 = *(_QWORD*)fw_math_LookupStateIndex_alt1(v25, &v137);
  v138 = *(_QWORD*)fw_math_LookupStateIndex_alt1(v25, &v138);
  v33 = (__int64*)fw_math_LookupStateIndex_alt1(v25, &v139);
  v34 = v137;
  v35 = v138;
  v36 = *v33;
  v144 = 0;
  v145 = 0;
  v142 = 0;
  v143 = 0;
  v140 = 0;
  v141 = 0;
  v138 = 0;
  v139 = 0;
  *(float*)(a2 + 4 * v137) = v26;
  *(float*)(a2 + 4 * v35) = v28;
  *(float*)(a2 + 4 * v36) = v29;
  *(float*)(v19 + 4 * v34) = v30;
  *(float*)(v19 + 4 * v35) = v31;
  *(float*)(v19 + 4 * v36) = v32;
  v37 = *(float*)(a1 + 8104);
  v38 = *(float*)(a1 + 7852);
  v39 = *(float*)(a1 + 8108);
  v40 = *(float*)(a1 + 8112);
  v41 = *(float*)(a1 + 7816) - v37;
  v42 = *(float*)(a1 + 8116);
  v43 = *(float*)(a1 + 8120);
  v44 = *(float*)(a1 + 8124);
  v45 = *(float*)(a1 + 8128);
  v46 = *(_QWORD*)(a1 + 8200);
  v136[6] = *(_QWORD*)(a1 + 0x2000);
  v136[7] = v46;
  v47 = *(_QWORD*)(a1 + 8168);
  v48 = *(float*)(a1 + 8132);
  v49 = *(_QWORD*)(a1 + 8184);
  v50 = *(_QWORD*)(a1 + 8208);
  v51 = *(float*)(a1 + 8136);
  v52 = *(float*)(a1 + 7820) - v39;
  v53 = *(float*)(a1 + 7824) - v40;
  v54 = *(float*)(a1 + 7828) - v42;
  v55 = *(float*)(a1 + 7832) - v43;
  v56 = *(float*)(a1 + 7836) - v44;
  v57 = *(float*)(a1 + 7840) - v45;
  v58 = *(float*)(a1 + 7844) - v48;
  v59 = *(float*)(a1 + 7848) - v51;
  v60 = *(_QWORD*)(a2 + 288);
  v122 = v41;
  v136[2] = *(_QWORD*)(a1 + 8160);
  v136[3] = v47;
  v61 = *(_QWORD*)(a1 + 8176);
  v136[8] = v50;
  v137 = 0;
  v62 = *(_QWORD*)(a1 + 8152);
  v134 = v38 - v37;
  v63 = *(float*)(a1 + 7856) - v39;
  v64 = *(float*)(a1 + 7860);
  v136[4] = v61;
  v136[5] = v49;
  v136[0] = *(_QWORD*)(a1 + 8144);
  v136[1] = v62;
  v130 = v64 - v40;
  v132 = v63;
  v127 = *(float*)(a1 + 7868) - v43;
  v128 = *(float*)(a1 + 7864) - v42;
  v125 = *(float*)(a1 + 7876) - v45;
  v126 = *(float*)(a1 + 7872) - v44;
  v123 = *(float*)(a1 + 7884) - v51;
  v124 = *(float*)(a1 + 7880) - v48;
  fw_math_MapStateIndices9_alt2((void*)&v137, v60, v136);
  v65 = v137;
  v66 = v138;
  v67 = v145;
  *(float*)(a2 + 4 * v137) = v122;
  v68 = v139;
  v69 = v140;
  v70 = v141;
  v71 = v142;
  v72 = v143;
  v73 = v144;
  *(float*)(a2 + 4 * v66) = v52;
  *(float*)(a2 + 4 * v68) = v53;
  *(float*)(a2 + 4 * v69) = v54;
  *(float*)(a2 + 4 * v70) = v55;
  *(float*)(a2 + 4 * v71) = v56;
  *(float*)(a2 + 4 * v72) = v57;
  *(float*)(a2 + 4 * v73) = v58;
  *(float*)(a2 + 4 * v67) = v59;
  *(float*)(v19 + 4 * v65) = v134;
  *(float*)(v19 + 4 * v66) = v132;
  *(float*)(v19 + 4 * v68) = v130;
  *(float*)(v19 + 4 * v69) = v128;
  *(float*)(v19 + 4 * v70) = v127;
  *(float*)(v19 + 4 * v71) = v126;
  *(float*)(v19 + 4 * v72) = v125;
  *(float*)(v19 + 4 * v73) = v124;
  *(float*)(v19 + 4 * v67) = v123;
  v74 = *(float*)(a1 + 7888);
  v75 = *(float*)(a1 + 8216);
  v76 = *(float*)(a1 + 8220);
  v77 = *(float*)(a1 + 8224);
  v78 = *(_QWORD*)(a1 + 8240);
  v79 = *(_QWORD*)(a2 + 288);
  v137 = *(_QWORD*)(a1 + 8232);
  v138 = v78;
  v80 = v74 - v75;
  v81 = *(float*)(a1 + 7892);
  v139 = *(_QWORD*)(a1 + 8248);
  v82 = v81 - v76;
  v83 = *(float*)(a1 + 7896) - v77;
  v84 = *(float*)(a1 + 7900) - v75;
  v85 = *(float*)(a1 + 7904) - v76;
  v86 = *(float*)(a1 + 7908) - v77;
  v137 = *(_QWORD*)fw_math_LookupStateIndex_alt1(v79, &v137);
  v138 = *(_QWORD*)fw_math_LookupStateIndex_alt1(v79, &v138);
  v87 = (__int64*)fw_math_LookupStateIndex_alt1(v79, &v139);
  v88 = v137;
  v89 = v138;
  v90 = *v87;
  *(float*)(a2 + 4 * v137) = v80;
  *(float*)(a2 + 4 * v89) = v82;
  *(float*)(a2 + 4 * v90) = v83;
  *(float*)(v19 + 4 * v88) = v84;
  *(float*)(v19 + 4 * v89) = v85;
  *(float*)(v19 + 4 * v90) = v86;
  v91 = *(float*)(a1 + 8256);
  v92 = *(float*)(a1 + 8260);
  v93 = *(float*)(a1 + 8264);
  v94 = *(float*)(a1 + 8276);
  v95 = *(float*)(a1 + 7944);
  v96 = *(float*)(a1 + 7912) - v91;
  v97 = *(float*)(a1 + 8288);
  v98 = *(float*)(a1 + 7948);
  v99 = *(float*)(a1 + 7916) - v92;
  v100 = *(float*)(a1 + 7920) - v93;
  v101 = *(float*)(a1 + 7932) - v94;
  v102 = *(float*)(a1 + 8272);
  v103 = *(_QWORD*)(a1 + 8320);
  v139 = *(_QWORD*)(a1 + 8312);
  v140 = v103;
  v104 = *(_QWORD*)(a1 + 8336);
  v105 = *(_QWORD*)(a2 + 288);
  v106 = *(float*)(a1 + 7928) - v102;
  v133 = v95 - v97;
  v135 = v101;
  v141 = *(_QWORD*)(a1 + 8328);
  v142 = v104;
  v107 = *(_QWORD*)(a1 + 8304);
  v129 = v100;
  v131 = v98 - v91;
  v108 = *(float*)(a1 + 7952);
  v137 = *(_QWORD*)(a1 + 8296);
  v138 = v107;
  v109 = v108 - v92;
  v110 = *(float*)(a1 + 7956) - v93;
  v111 = *(float*)(a1 + 7964) - v102;
  v112 = *(float*)(a1 + 7968) - v94;
  v113 = *(float*)(a1 + 7980) - v97;
  v137 = *(_QWORD*)fw_math_LookupStateIndex_alt1(v105, &v137);
  v138 = *(_QWORD*)fw_math_LookupStateIndex_alt1(v105, &v138);
  v139 = *(_QWORD*)fw_math_LookupStateIndex_alt1(v105, &v139);
  v140 = *(_QWORD*)fw_math_LookupStateIndex_alt1(v105, &v140);
  v141 = *(_QWORD*)fw_math_LookupStateIndex_alt1(v105, &v141);
  v114 = (__int64*)fw_math_LookupStateIndex_alt1(v105, &v142);
  v115 = v137;
  v116 = v138;
  v117 = *v114;
  v118 = v141;
  *(float*)(a2 + 4 * v137) = v96;
  v119 = v139;
  v120 = v140;
  *(float*)(a2 + 4 * v116) = v99;
  *(float*)(a2 + 4 * v119) = v129;
  *(float*)(a2 + 4 * v120) = v106;
  *(float*)(a2 + 4 * v118) = v135;
  *(float*)(a2 + 4 * v117) = v133;
  *(float*)(v19 + 4 * v115) = v131;
  *(float*)(v19 + 4 * v116) = v109;
  *(float*)(v19 + 4 * v119) = v110;
  *(float*)(v19 + 4 * v120) = v111;
  *(float*)(v19 + 4 * v118) = v112;
  *(float*)(v19 + 4 * v117) = v113;
  return v131;
}

__int64*

nerd_gyro_pointing_GyroPointingKalmanFilter_AddVariableCovariances(_QWORD* a1,
                                                                   float a2)
{
  __int64 v3;
  float v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  bool v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  float* v23;
  float v24;
  float v25;
  float v26;
  __int64 v27;
  float v28;
  __int64* result;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  char* v33;
  char* v34;
  char* v35;
  __int64 v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  unsigned __int64 v42;
  float* v43;
  float v44;
  float v45;
  float v46;
  float v47;
  float v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;

  v3 = a1[1011];
  v5 = a2 * 0.01f;
  v49 = a1[1010];
  v50 = v3;
  v51 = a1[1012];
  v49 = *(_QWORD*)fw_math_LookupStateIndex_alt1(a1 + 548, &v49);
  v50 = *(_QWORD*)fw_math_LookupStateIndex_alt1(a1 + 548, &v50);
  v6 = (__int64*)fw_math_LookupStateIndex_alt1(a1 + 548, &v51);
  v7 = v49;
  v8 = v50;
  v9 = a1 + 2;
  v10 = *v6;
  v11 = (__int64)a1 + 132 * v49 + 16;
  *(float*)(v11 + 4 * v49) = v5 + *(float*)(v11 + 4 * v49);
  *(float*)(v11 + 4 * v8) = *(float*)(v11 + 4 * v8) + 0.0f;
  *(float*)(v11 + 4 * v10) = *(float*)(v11 + 4 * v10) + 0.0f;
  v12 = (__int64)a1 + 132 * v8 + 16;
  v13 = (__int64)a1 + 132 * v10 + 16;
  *(float*)(v12 + 4 * v7) = *(float*)(v12 + 4 * v7) + 0.0f;
  *(float*)(v12 + 4 * v8) = v5 + *(float*)(v12 + 4 * v8);
  *(float*)(v12 + 4 * v10) = *(float*)(v12 + 4 * v10) + 0.0f;
  *(float*)(v13 + 4 * v7) = *(float*)(v13 + 4 * v7) + 0.0f;
  *(float*)(v13 + 4 * v8) = *(float*)(v13 + 4 * v8) + 0.0f;
  *(float*)(v13 + 4 * v10) = v5 + *(float*)(v13 + 4 * v10);
  v14 = a1[1520];
  if (v14 != 0) {
    v15 = a1[1522];
    v16 = a1[1521];
    v17 = v15 >= v14;
    v18 = v15 - v14;
    if (v17) {
      v19 = 0;
    }
    else {
      v19 = a1[1521];
    }
    v20 = v18 + v19;
    v21 = (__int64)a1 + 1860 * v20 + 9320;
    do {
      v17 = v20++ >= v16;
      if (v17) {
        v22 = v16;
      }
      else {
        v22 = 0;
      }
      --v14;
      v23 = (float*)(v21 - 1860 * v22);
      v21 += 1860;
      v24 = *(v23 - 21) + 0.0f;
      *(v23 - 22) = v5 + *(v23 - 22);
      *(v23 - 21) = v24;
      *(v23 - 20) = *(v23 - 20) + 0.0f;
      v25 = v5 + *v23;
      *(v23 - 1) = *(v23 - 1) + 0.0f;
      *v23 = v25;
      v23[1] = v23[1] + 0.0f;
      v26 = v23[21] + 0.0f;
      v23[20] = v23[20] + 0.0f;
      v23[21] = v26;
      v23[22] = v5 + v23[22];
    } while (v14 != 0);
  }
  v27 = a1[1030];
  v28 = a2 * 4.0e-10f;
  v49 = a1[1029];
  v50 = v27;
  v51 = a1[1031];
  v49 = *(_QWORD*)fw_math_LookupStateIndex_alt1(a1 + 548, &v49);
  v50 = *(_QWORD*)fw_math_LookupStateIndex_alt1(a1 + 548, &v50);
  result = (__int64*)fw_math_LookupStateIndex_alt1(a1 + 548, &v51);
  v30 = v49;
  v31 = v50;
  v32 = *result;
  v33 = (char*)v9 + 132 * v49;
  *(float*)&v33[4 * v49] = v28 + *(float*)&v33[4 * v49];
  *(float*)&v33[4 * v31] = *(float*)&v33[4 * v31] + 0.0f;
  *(float*)&v33[4 * v32] = *(float*)&v33[4 * v32] + 0.0f;
  v34 = (char*)v9 + 132 * v31;
  v35 = (char*)v9 + 132 * v32;
  *(float*)&v34[4 * v30] = *(float*)&v34[4 * v30] + 0.0f;
  *(float*)&v34[4 * v31] = v28 + *(float*)&v34[4 * v31];
  *(float*)&v34[4 * v32] = *(float*)&v34[4 * v32] + 0.0f;
  *(float*)&v35[4 * v30] = *(float*)&v35[4 * v30] + 0.0f;
  *(float*)&v35[4 * v31] = *(float*)&v35[4 * v31] + 0.0f;
  *(float*)&v35[4 * v32] = v28 + *(float*)&v35[4 * v32];
  v36 = a1[1520];
  if (v36 != 0) {
    v37 = a1[1522];
    v38 = v37;
    do {
      v39 = a1[1520];
      v40 = a1[1521];
      if (v39 <= v37) {
        v41 = 0;
      }
      else {
        v41 = a1[1521];
      }
      if (v38 + v41 - v39 < v40) {
        v40 = 0;
      }
      --v36;
      v42 = v38 + v41 - v40 - v39;
      ++v38;
      v43 = (float*)a1 + 465 * v42 + 2110;
      v44 = v43[1] + 0.0f;
      v45 = v43[23] + 0.0f;
      *v43 = v28 + *v43;
      v43[1] = v44;
      v46 = v43[2];
      v43[23] = v45;
      v43[2] = v46 + 0.0f;
      v47 = v28 + v43[22];
      v43[21] = v43[21] + 0.0f;
      v43[22] = v47;
      v48 = v43[43] + 0.0f;
      v43[42] = v43[42] + 0.0f;
      v43[43] = v48;
      v43[44] = v28 + v43[44];
    } while (v36 != 0);
  }
  return result;
}

__attribute__((swiftcall)) void

nerd_gyro_pointing_GyroPointingKalmanFilter_StoreState(PSEUDO_X8 x8_,
                                                       void* this_,
                                                       __int64 unused_int1,
                                                       __int64 unused_int2,
                                                       unsigned __int64 a2)
{
  __int64 a3 = (__int64)PSEUDO_X8_VALUE(x8_);
  int v4;
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
  __int64 v20;
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
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  unsigned __int64 v42;
  __int64 v44[27];
  __int64 v45[27];

  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v4 = *((_DWORD*)this_ + 1998);
  *(_QWORD*)a3 = *((_QWORD*)this_ + 998);
  v6 = *((_QWORD*)this_ + 1003);
  *(_DWORD*)(a3 + 8) = v4;
  v7 = *((_QWORD*)this_ + 1004);
  *(_QWORD*)(a3 + 12) = v6;
  v8 = *((_QWORD*)this_ + 1008);
  *(_QWORD*)(a3 + 20) = v7;
  LODWORD(v7) = *((_DWORD*)this_ + 2018);
  *(_QWORD*)(a3 + 28) = v8;
  LODWORD(v8) = *((_DWORD*)this_ + 2034);
  *(_DWORD*)(a3 + 36) = v7;
  v9 = *((_QWORD*)this_ + 1015);
  *(_DWORD*)(a3 + 72) = v8;
  v10 = *((_QWORD*)this_ + 1016);
  *(_QWORD*)(a3 + 56) = v9;
  *(_QWORD*)(a3 + 64) = v10;
  v11 = *((_QWORD*)this_ + 1014);
  *(_QWORD*)(a3 + 40) = *((_QWORD*)this_ + 1013);
  *(_QWORD*)(a3 + 48) = v11;
  v12 = *((_QWORD*)this_ + 1027);
  *(_DWORD*)(a3 + 84) = *((_DWORD*)this_ + 2056);
  *(_QWORD*)(a3 + 76) = v12;
  memset_plt_alt1((void*)(a3 + 124), nullptr, 2972, a2),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v13 = *((_QWORD*)this_ + 1033);
  v14 = *((_QWORD*)this_ + 1010);
  v15 = *((_QWORD*)this_ + 1011);
  v16 = *((_QWORD*)this_ + 1007);
  v17 = *((_QWORD*)this_ + 1012);
  v18 = *((_QWORD*)this_ + 1018);
  v19 = *((_QWORD*)this_ + 1019);
  v20 = *((_QWORD*)this_ + 1020);
  *(_QWORD*)(a3 + 136) = 3;
  *(_QWORD*)(a3 + 144) = 6;
  v21 = *((_QWORD*)this_ + 1034);
  *(_QWORD*)(a3 + 168) = 21;
  v22 = *((_QWORD*)this_ + 1006);
  v23 = *((_QWORD*)this_ + 1021);
  v24 = *((_QWORD*)this_ + 1022);
  memset(&v45[17], 0, 80);
  *(_QWORD*)(a3 + 152) = 9;
  *(_QWORD*)(a3 + 160) = 18;
  v25 = *((_QWORD*)this_ + 1035);
  v26 = *((_QWORD*)this_ + 1005);
  memset(v45, 0, 136);
  v44[6] = v14;
  v44[7] = v15;
  v27 = *((_QWORD*)this_ + 1031);
  v44[8] = v17;
  v44[9] = v18;
  v44[10] = v19;
  v44[11] = v20;
  v28 = *((_QWORD*)this_ + 1038);
  v29 = *((_QWORD*)this_ + 1039);
  v30 = *((_QWORD*)this_ + 1040);
  v31 = *((_QWORD*)this_ + 1041);
  v44[12] = v23;
  v44[13] = v24;
  v44[4] = v22;
  v44[5] = v16;
  v32 = *((_QWORD*)this_ + 1029);
  v33 = *((_QWORD*)this_ + 1030);
  *(_QWORD*)(a3 + 104) = v21;
  *(_QWORD*)(a3 + 112) = v25;
  LODWORD(v21) = *((_DWORD*)this_ + 2072);
  v34 = *((_QWORD*)this_ + 1002);
  v44[22] = v28;
  v44[23] = v29;
  v44[24] = v30;
  v44[25] = v31;
  v44[18] = v32;
  v44[19] = v33;
  *(_DWORD*)(a3 + 120) = v21;
  v35 = *((_QWORD*)this_ + 1032);
  v44[2] = v34;
  v44[3] = v26;
  v36 = *((_QWORD*)this_ + 1025);
  v37 = *((_QWORD*)this_ + 1026);
  *(_QWORD*)(a3 + 88) = v35;
  *(_QWORD*)(a3 + 96) = v13;
  v38 = *((_QWORD*)this_ + 1000);
  v39 = *((_QWORD*)this_ + 1001);
  v44[16] = v36;
  v44[17] = v37;
  v44[0] = v38;
  v44[1] = v39;
  v40 = *((_QWORD*)this_ + 1024);
  v44[14] = *((_QWORD*)this_ + 1023);
  v44[15] = v40;
  v41 = *((_QWORD*)this_ + 1037);
  v44[20] = v27;
  v44[21] = v41;
  v44[26] = *((_QWORD*)this_ + 1042);
  math_730a40((void*)((__int64)v45), (unsigned __int64*)this_ + 548, v44),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  {
    X8CALL_X0(__int64,
              math_730ca0((void*)(a3 + 176), (__int64)this_, v45, v45, v42)),
        v42 = COERCE_AS(__typeof__(v42),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
    return;
  }
}

__int64 nerd_gyro_pointing_GyroPointingKalmanFilter_LoadState(
    __int64 a1, __int64* a2, char a3, char a4, char a5, char a6, char a7,
    char a8, float a9)
{

#pragma clang fp contract(off)
  __int64 v19;
  _DWORD* v20;
  __int64 v21;
  __int64 v22;
  float v23;
  __int64 v24;
  _DWORD* v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  __int64 v31;
  _DWORD* v32;
  float v33;
  _DWORD* v34;
  _DWORD* v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  int v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  unsigned __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  int v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  _QWORD* v81;
  __int64 v82;
  __int64 v83;
  _DWORD* v84;
  __int64 v85;
  __int64 v86;
  __int64* v87;
  _DWORD* v88;
  int v89;
  int v90;
  int v91;
  __int64 v92;
  __int64 v93;
  int v94;
  int v95;
  __int64 v96;
  __int64 v97;
  int v98;
  int v99;
  __int64 v100;
  __int64* v101;
  unsigned __int64 v102;
  _DWORD* v103;
  __int64 v104;
  __int64 v106;
  _QWORD v107[2];
  _DWORD v108[2];
  _QWORD v109[364];
  _DWORD v110[729];
  struct {
    __int64 v111;
    __int64 v112;
    __int64 v113;
    __int64 v114;
  } v111_;
  struct {
    _QWORD v115[23];
    __int64 v116;
  } v115_;
  struct {
    _QWORD v117[2];
    __int64 v118;
    __int64 v119;
    __int64 v120;
    __int64 v121;
    __int64 v122;
    __int64 v123;
    __int64 v124;
    __int64 v125;
    __int64 v126;
    __int64 v127;
    __int64 v128;
    __int64 v129;
    __int64 v130;
    __int64 v131;
    __int64 v132;
    __int64 v133;
    __int64 v134;
    __int64 v135;
    __int64 v136;
    __int64 v137;
    __int64 v138;
    __int64 v139;
    __int64 v140;
    __int64 v141;
    __int64 v142;
    __int64 v143;
  } v117_;
  __int64 v144;

  v117_.v142 = 0;
  v117_.v143 = 0;
  v117_.v140 = 0;
  v117_.v141 = 0;
  v117_.v138 = 0;
  v117_.v139 = 0;
  v117_.v136 = 0;
  v117_.v137 = 0;
  v117_.v134 = 0;
  v117_.v135 = 0;
  v117_.v132 = 0;
  v117_.v133 = 0;
  v117_.v130 = 0;
  v117_.v131 = 0;
  v117_.v128 = 0;
  v117_.v129 = 0;
  v117_.v126 = 0;
  v117_.v127 = 0;
  v117_.v124 = 0;
  v117_.v125 = 0;
  v117_.v122 = 0;
  v117_.v123 = 0;
  v117_.v120 = 0;
  v117_.v121 = 0;
  v117_.v118 = 0;
  v117_.v119 = 0;
  v117_.v117[0] = 0;
  v117_.v117[1] = 0;
  v115_.v116 = 0;
  memset(v115_.v115, 0, sizeof(v115_.v115));
  v111_.v114 = 0;
  v111_.v113 = 0;
  v111_.v112 = 0;
  v111_.v111 = 0;
  memcpy_plt(v110, a2 + 22, 2916);
  v19 = a2[18];
  v20 = &v110[27 * v19];
  v21 = v19;
  v22 = v21 * 4 + 4;
  v23 = *(float*)&v20[v19];
  v24 = 4 * v19 + 8;
  v25 = v20 + 27;
  *(float*)((char*)v20 + v22) = *(float*)&v20[v21 + 1] + 0x0.0p+0f;
  *(float*)&v20[v21] = (float)(a9 * 0x1.47ae160000000p-7f) + v23;
  *(float*)((char*)v20 + v24) = *(float*)((char*)v20 + v24) + 0x0.0p+0f;
  v26 = *(float*)&v20[v21 + 28];
  v20 += 54;
  v27 = (float)(a9 * 0x1.47ae160000000p-7f) + *(float*)((char*)v20 + v24);
  v28 = *(float*)&v25[v21];
  *(float*)((char*)v25 + v22) = (float)(a9 * 0x1.47ae160000000p-7f) + v26;
  v29 = *(float*)((char*)v25 + v24);
  *(float*)((char*)v20 + v24) = v27;
  *(float*)&v25[v21] = v28 + 0x0.0p+0f;
  *(float*)((char*)v25 + v24) = v29 + 0x0.0p+0f;
  *(float*)&v20[v21] = *(float*)&v20[v21] + 0x0.0p+0f;
  v30 = *(float*)&v20[v21 + 1];
  v31 = a2[20];
  v32 = &v110[27 * v31];
  v31 *= 4;
  v33 = *(float*)((char*)v32 + v31);
  v34 = v32 + 27;
  v35 = v32 + 54;
  *(float*)((char*)v20 + v22) = v30 + 0x0.0p+0f;
  v36 = v31 + 4;
  v37 = v31 + 8;
  *(float*)((char*)v32 + v31) = (float)(a9 * 0x1.b7cdfc0000000p-32f) + v33;
  *(float*)((char*)v32 + v36) = *(float*)((char*)v32 + v31 + 4) + 0x0.0p+0f;
  *(float*)((char*)v32 + v37) = *(float*)((char*)v32 + v31 + 8) + 0x0.0p+0f;
  *(float*)((char*)v34 + v31) = *(float*)((char*)v32 + v31 + 108) + 0x0.0p+0f;
  *(float*)((char*)v34 + v36) =
      (float)(a9 * 0x1.b7cdfc0000000p-32f) + *(float*)((char*)v32 + v31 + 112);
  *(float*)((char*)v34 + v37) = *(float*)((char*)v32 + v31 + 116) + 0x0.0p+0f;
  *(float*)((char*)v35 + v31) = *(float*)((char*)v32 + v31 + 216) + 0x0.0p+0f;
  *(float*)((char*)v35 + v36) = *(float*)((char*)v32 + v31 + 220) + 0x0.0p+0f;
  *(float*)((char*)v35 + v37) =
      (float)(a9 * 0x1.b7cdfc0000000p-32f) + *(float*)((char*)v32 + v31 + 224);
  if (a9 == 0x0.0p+0f) {
    if ((a8 & 1) != 0) {
      v38 = *a2;
      *(_DWORD*)(a1 + 7992) = *((_DWORD*)a2 + 2);
      *(_QWORD*)(a1 + 7984) = v38;
      v39 = *(_QWORD*)(a1 + 8008);
      v117_.v117[0] = *(_QWORD*)(a1 + 8000);
      v117_.v117[1] = v39;
      v40 = *(_QWORD*)(a1 + 8016);
      v117_.v143 = 3;
      v115_.v116 = 3;
      v117_.v118 = v40;
      v111_.v111 = a2[16];
      v111_.v112 = v111_.v111 + 1;
      v111_.v113 = v111_.v111 + 2;
    }
    if ((a7 & 1) != 0) {
      v41 = *(__int64*)((char*)a2 + 12);
      *(_QWORD*)(a1 + 8032) = *(__int64*)((char*)a2 + 20);
      *(_QWORD*)(a1 + 8024) = v41;
      v117_.v117[v117_.v143] = *(_QWORD*)(a1 + 8040);
      v42 = *(_QWORD*)(a1 + 8048);
      v117_.v117[++v117_.v143] = v42;
      v43 = *(_QWORD*)(a1 + 8056);
      ++v117_.v143;
      v117_.v117[v117_.v143++] = v43;
      v44 = a2[17];
      *(&v111_.v111 + v115_.v116++) = v44;
      *(&v111_.v111 + v115_.v116++) = v44 + 1;
      *(&v111_.v111 + v115_.v116++) = v44 + 2;
    }
  }
  if ((a4 & 1) != 0) {
    v58 = *(__int64*)((char*)a2 + 28);
    *(_DWORD*)(a1 + 8072) = *((_DWORD*)a2 + 9);
    *(_QWORD*)(a1 + 8064) = v58;
    v117_.v117[v117_.v143] = *(_QWORD*)(a1 + 8080);
    v59 = *(_QWORD*)(a1 + 8088);
    v117_.v117[++v117_.v143] = v59;
    v60 = *(_QWORD*)(a1 + 8096);
    ++v117_.v143;
    v117_.v117[v117_.v143++] = v60;
    v61 = a2[18];
    *(&v111_.v111 + v115_.v116++) = v61;
    *(&v111_.v111 + v115_.v116++) = v61 + 1;
    *(&v111_.v111 + v115_.v116++) = v61 + 2;
    if ((a6 & 1) == 0) {
    LABEL_8:
      if ((a3 & 1) == 0) {
        goto LABEL_9;
      }
    LABEL_13:
      v77 = *(__int64*)((char*)a2 + 76);
      *(_DWORD*)(a1 + 8224) = *((_DWORD*)a2 + 21);
      *(_QWORD*)(a1 + 8216) = v77;
      v117_.v117[v117_.v143] = *(_QWORD*)(a1 + 8232);
      v78 = *(_QWORD*)(a1 + 8240);
      v117_.v117[++v117_.v143] = v78;
      v79 = *(_QWORD*)(a1 + 8248);
      ++v117_.v143;
      v117_.v117[v117_.v143++] = v79;
      v80 = a2[20];
      *(&v111_.v111 + v115_.v116++) = v80;
      *(&v111_.v111 + v115_.v116++) = v80 + 1;
      *(&v111_.v111 + v115_.v116++) = v80 + 2;
      if ((a5 & 1) != 0) {
        goto LABEL_10;
      }
      goto LABEL_14;
    }
  }
  else if ((a6 & 1) == 0) {
    goto LABEL_8;
  }
  v62 = a2[5];
  v63 = a2[7];
  v64 = a2[8];
  v65 = *((_DWORD*)a2 + 18);
  *(_QWORD*)(a1 + 8112) = a2[6];
  *(_QWORD*)(a1 + 8104) = v62;
  v66 = v117_.v143;
  v67 = *(_QWORD*)(a1 + 8144);
  *(_QWORD*)(a1 + 8120) = v63;
  *(_DWORD*)(a1 + 8136) = v65;
  *(_QWORD*)(a1 + 8128) = v64;
  v117_.v117[v66] = v67;
  v68 = *(_QWORD*)(a1 + 8152);
  v117_.v117[++v117_.v143] = v68;
  v69 = *(_QWORD*)(a1 + 8160);
  v117_.v117[++v117_.v143] = v69;
  v70 = *(_QWORD*)(a1 + 8168);
  v117_.v117[++v117_.v143] = v70;
  v71 = *(_QWORD*)(a1 + 8176);
  v117_.v117[++v117_.v143] = v71;
  v72 = *(_QWORD*)(a1 + 8184);
  v117_.v117[++v117_.v143] = v72;
  v73 = *(_QWORD*)(a1 + 0x2000);
  v117_.v117[++v117_.v143] = v73;
  v74 = *(_QWORD*)(a1 + 8200);
  v117_.v117[++v117_.v143] = v74;
  v75 = *(_QWORD*)(a1 + 8208);
  ++v117_.v143;
  v117_.v117[v117_.v143++] = v75;
  v76 = a2[19];
  *(&v111_.v111 + v115_.v116++) = v76;
  *(&v111_.v111 + v115_.v116++) = v76 + 1;
  *(&v111_.v111 + v115_.v116++) = v76 + 2;
  *(&v111_.v111 + v115_.v116++) = v76 + 3;
  *(&v111_.v111 + v115_.v116++) = v76 + 4;
  *(&v111_.v111 + v115_.v116++) = v76 + 5;
  *(&v111_.v111 + v115_.v116++) = v76 + 6;
  *(&v111_.v111 + v115_.v116++) = v76 + 7;
  *(&v111_.v111 + v115_.v116++) = v76 + 8;
  if ((a3 & 1) != 0) {
    goto LABEL_13;
  }
LABEL_9:
  if ((a5 & 1) != 0) {
  LABEL_10:
    v45 = a2[11];
    v46 = a2[13];
    v47 = a2[14];
    v48 = *((_DWORD*)a2 + 30);
    *(_QWORD*)(a1 + 8264) = a2[12];
    *(_QWORD*)(a1 + 8256) = v45;
    v49 = v117_.v143;
    v50 = *(_QWORD*)(a1 + 8296);
    *(_QWORD*)(a1 + 8272) = v46;
    *(_DWORD*)(a1 + 8288) = v48;
    *(_QWORD*)(a1 + 8280) = v47;
    v117_.v117[v49] = v50;
    v51 = *(_QWORD*)(a1 + 8304);
    v117_.v117[++v117_.v143] = v51;
    v52 = *(_QWORD*)(a1 + 8312);
    v117_.v117[++v117_.v143] = v52;
    v53 = *(_QWORD*)(a1 + 8320);
    v117_.v117[++v117_.v143] = v53;
    v54 = *(_QWORD*)(a1 + 8328);
    v117_.v117[++v117_.v143] = v54;
    v55 = *(_QWORD*)(a1 + 8336);
    ++v117_.v143;
    v117_.v117[v117_.v143++] = v55;
    v56 = a2[21];
    *(&v111_.v111 + v115_.v116++) = v56;
    *(&v111_.v111 + v115_.v116++) = v56 + 1;
    *(&v111_.v111 + v115_.v116++) = v56 + 2;
    *(&v111_.v111 + v115_.v116++) = v56 + 3;
    *(&v111_.v111 + v115_.v116++) = v56 + 4;
    *(&v111_.v111 + v115_.v116) = v56 + 5;
    v57 = ++v115_.v116;
    goto LABEL_15;
  }
LABEL_14:
  v57 = v115_.v116;
LABEL_15:
  v109[363] = 0;
  v107[0] = v57;
  v107[1] = v57;
  memset_plt((void*)v108, nullptr, 2916);
  if (v57 != 0) {
    v81 = v109;
    v82 = 0;
    v83 = 0;
    while (1) {
      v84 = &v110[27 * *(&v111_.v111 + v83)];
      if (v57 >= 8) {
        break;
      }
      v85 = 0;
      if ((v57 & 7) != 0) {
        goto LABEL_24;
      }
    LABEL_17:
      ++v83;
      v81 = (_QWORD*)((char*)v81 + 108);
      v82 += 27;
      if (v83 == v57) {
        goto LABEL_27;
      }
    }
    v86 = 0;
    v87 = v115_.v115;
    v88 = v81;
    do {
      v86 -= 8;
      v89 = v84[*(v87 - 3)];
      v90 = v84[*(v87 - 2)];
      v91 = v84[*(v87 - 1)];
      v92 = *v87;
      v93 = v87[1];
      *(v88 - 2) = v84[*(v87 - 4)];
      *(v88 - 1) = v89;
      v94 = v84[v92];
      v95 = v84[v93];
      v96 = v87[2];
      v97 = v87[3];
      v87 += 8;
      *v88 = v90;
      v88[1] = v91;
      v98 = v84[v96];
      v88[2] = v94;
      v88[3] = v95;
      v99 = v84[v97];
      v88[4] = v98;
      v88[5] = v99;
      v88 += 8;
    } while (-(__int64)(v57 & 0xFFFFFFFFFFFFFFF8LL) != v86);
    v85 = -v86;
    if ((v57 & 7) == 0) {
      goto LABEL_17;
    }
  LABEL_24:
    v100 = v85 + v82;
    v101 = &v111_.v111 + v85;
    v102 = v57 & 7;
    v103 = &v108[v100];
    do {
      v104 = *v101++;
      --v102;
      *v103++ = v84[v104];
    } while (v102 != 0);
    goto LABEL_17;
  }
LABEL_27:
  v144 = 0;
  v106 = v117_.v143;
  SdkRoutine_87a390(a1, &v106, &v144, v117_.v117, v107);
  return 1;
}

__int64

nerd_gyro_pointing_GyroPointingKalmanFilter_GetCalibrationState(void* this_)
{

#pragma clang fp contract(off)
  unsigned __int64 v1;
  char* v3;
  unsigned __int64 v4;
  float v5;
  float v6;
  double v7;
  __int64 v8;
  double v9;
  __int64 v10;
  double v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  float v16;
  float v17;
  float v18;
  double v19;
  __int64 v20;
  double v21;
  __int64 v22;
  double v23;
  __int64 v24;
  __int64 v25;
  double v26;
  __int64 v27;
  unsigned __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  __int64 v34;

  v1 = *((_QWORD*)this_ + 1030);
  v29 = *((_QWORD*)this_ + 1029);
  v30 = v1;
  v31 = *((_QWORD*)this_ + 1031);
  v29 =
      *fw_math_LookupStateIndex((unsigned __int64*)this_ + 548, (__int64*)&v29);
  v30 =
      *fw_math_LookupStateIndex((unsigned __int64*)this_ + 548, (__int64*)&v30);
  v3 = (char*)this_ + 16;
  v4 =
      *fw_math_LookupStateIndex((unsigned __int64*)this_ + 548, (__int64*)&v31);
  v5 = sqrtf(*((float*)this_ + 34 * v30 + 4));
  v6 = sqrtf(*((float*)this_ + 34 * v4 + 4));
  v7 = sqrtf(*((float*)this_ + 34 * v29 + 4));
  if (v7 >= 0x1.0624dd2f1a9fcp-9) {
    if (v7 >= 0x1.47ae147ae147bp-7) {
      v8 = 0;
      v9 = v5;
      if (v9 < 0x1.0624dd2f1a9fcp-9) {
        goto LABEL_10;
      }
    }
    else {
      v8 = 1;
      v9 = v5;
      if (v9 < 0x1.0624dd2f1a9fcp-9) {
        goto LABEL_10;
      }
    }
  }
  else {
    v8 = 2;
    v9 = v5;
    if (v9 < 0x1.0624dd2f1a9fcp-9) {
    LABEL_10:
      v10 = 512;
      v11 = v6;
      if (v11 < 0x1.0624dd2f1a9fcp-9) {
        goto LABEL_11;
      }
      goto LABEL_13;
    }
  }
  if (v9 >= 0x1.47ae147ae147bp-7) {
    v10 = 0;
    v11 = v6;
    if (v11 < 0x1.0624dd2f1a9fcp-9) {
      goto LABEL_11;
    }
  }
  else {
    v10 = 256;
    v11 = v6;
    if (v11 < 0x1.0624dd2f1a9fcp-9) {
    LABEL_11:
      v12 = 0x20000;
      goto LABEL_16;
    }
  }
LABEL_13:
  if (v11 >= 0x1.47ae147ae147bp-7) {
    v12 = 0;
  }
  else {
    v12 = 0x10000;
  }
LABEL_16:
  v13 = *((_QWORD*)this_ + 1040);
  v31 = *((_QWORD*)this_ + 1039);
  v32 = v13;
  v14 = *((_QWORD*)this_ + 1042);
  v33 = *((_QWORD*)this_ + 1041);
  v34 = v14;
  v15 = *((_QWORD*)this_ + 1038);
  v29 = *((_QWORD*)this_ + 1037);
  v30 = v15;
  v29 =
      *fw_math_LookupStateIndex((unsigned __int64*)this_ + 548, (__int64*)&v29);
  v30 =
      *fw_math_LookupStateIndex((unsigned __int64*)this_ + 548, (__int64*)&v30);
  v31 =
      *fw_math_LookupStateIndex((unsigned __int64*)this_ + 548, (__int64*)&v31);
  v32 =
      *fw_math_LookupStateIndex((unsigned __int64*)this_ + 548, (__int64*)&v32);
  v33 =
      *fw_math_LookupStateIndex((unsigned __int64*)this_ + 548, (__int64*)&v33);
  fw_math_LookupStateIndex((unsigned __int64*)this_ + 548, &v34);
  v16 = sqrtf(*(float*)&v3[136 * v30]);
  v17 = sqrtf(*(float*)&v3[136 * v31]);
  v18 = sqrtf(*(float*)&v3[136 * v32]);
  v19 = sqrtf(*(float*)&v3[136 * v29]);
  if (v19 >= 0x1.0624dd2f1a9fcp-10) {
    if (v19 >= 0x1.89374bc6a7efap-9) {
      v20 = 0;
      v21 = v16;
      if (v21 < 0x1.0624dd2f1a9fcp-10) {
        goto LABEL_25;
      }
    }
    else {
      v20 = 0x1000000;
      v21 = v16;
      if (v21 < 0x1.0624dd2f1a9fcp-10) {
        goto LABEL_25;
      }
    }
  }
  else {
    v20 = 0x2000000;
    v21 = v16;
    if (v21 < 0x1.0624dd2f1a9fcp-10) {
    LABEL_25:
      v22 = 0x200000000LL;
      v23 = v17;
      if (v23 < 0x1.0624dd2f1a9fcp-10) {
        goto LABEL_26;
      }
    LABEL_29:
      if (v23 >= 0x1.89374bc6a7efap-9) {
        v24 = 0;
        if (v21 < 0x1.0624dd2f1a9fcp-10) {
          goto LABEL_35;
        }
      }
      else {
        v24 = 0x10000000000LL;
        if (v21 < 0x1.0624dd2f1a9fcp-10) {
          goto LABEL_35;
        }
      }
      goto LABEL_31;
    }
  }
  if (v21 < 0x1.89374bc6a7efap-9) {
    v22 = 0x100000000LL;
    v23 = v17;
    if (v23 < 0x1.0624dd2f1a9fcp-10) {
      goto LABEL_26;
    }
    goto LABEL_29;
  }
  v22 = 0;
  v23 = v17;
  if (v23 >= 0x1.0624dd2f1a9fcp-10) {
    goto LABEL_29;
  }
LABEL_26:
  v24 = 0x20000000000LL;
  if (v21 < 0x1.0624dd2f1a9fcp-10) {
  LABEL_35:
    v25 = 0x2000000000000LL;
    v26 = v18;
    if (v26 < 0x1.0624dd2f1a9fcp-10) {
      goto LABEL_36;
    }
    goto LABEL_38;
  }
LABEL_31:
  if (v21 >= 0x1.89374bc6a7efap-9) {
    v25 = 0;
    v26 = v18;
    if (v26 < 0x1.0624dd2f1a9fcp-10) {
      goto LABEL_36;
    }
  }
  else {
    v25 = 0x1000000000000LL;
    v26 = v18;
    if (v26 < 0x1.0624dd2f1a9fcp-10) {
    LABEL_36:
      v27 = 0x200000000000000LL;
      return v27 | v25 | v24 | v22 | v20 | v12 | v10 | v8;
    }
  }
LABEL_38:
  if (v26 >= 0x1.89374bc6a7efap-9) {
    v27 = 0;
  }
  else {
    v27 = 0x100000000000000LL;
  }
  return v27 | v25 | v24 | v22 | v20 | v12 | v10 | v8;
}

__int64

nerd_gyro_pointing_GyroPointingKalmanFilter_GetIntegrityState(void* this_)
{
  float v1;
  float v2;
  float v3;
  float v4;
  __int64 v5;
  float v6;
  bool v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  __int64 v13;
  float v14;
  float v15;
  __int64 v16;
  float v17;
  float v18;
  float v19;
  float v20;
  __int64 v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  __int64 v28;
  float v29;
  float v30;
  __int64 v31;
  float v32;
  float v33;
  float v34;
  float v35;
  __int64 v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float v41;
  float v42;
  float v43;
  float v44;
  _BOOL8 v45;
  __int64 v46;
  float v47;
  float v48;
  float v49;
  float v50;
  float v51;
  float v52;
  float v53;
  float v54;
  float v55;
  float v56;
  float v57;
  float v58;
  float v59;
  float v60;
  float v61;
  float v62;
  float v63;
  float v64;
  float v65;
  float v66;
  float v67;
  float v68;
  float v69;
  float v70;
  float v71;
  float v72;
  float v73;
  float v74;
  __int64 v75;
  float v76;
  float v77;
  float v78;
  float v79;
  float v80;
  float v81;
  __int64 v82;
  float v83;
  float v84;
  __int64 v85;
  float v86;
  float v87;
  float v88;
  float v89;
  __int64 v90;
  float v91;
  float v92;
  __int64 v93;
  float v94;
  float v95;
  float v96;
  float v97;
  __int64 v98;
  float v99;
  float v100;
  __int64 v101;
  float v102;
  float v103;
  float v104;
  float v105;
  __int64 v106;
  float v107;
  float v108;
  _BOOL8 v109;
  unsigned __int64 v110;

  v1 = *((float*)this_ + 1975);
  v2 = *((float*)this_ + 1972);
  v3 = *((float*)this_ + 2054);
  v4 = *((float*)this_ + 2055);
  LODWORD(v5) =
      v3 <= (float)(v2 + (float)((float)(v1 - v2) * 0x1.47ae140000000p-7f));
  v6 = *((float*)this_ + 1973);
  v7 = v3 <= (float)(v1 + (float)((float)(v1 - v2) * -0x1.47ae140000000p-7f));
  v8 = *((float*)this_ + 1976);
  if (v7) {
    v5 = (unsigned int)v5;
  }
  else {
    v5 = 1;
  }
  v9 = v8 - v6;
  v10 = v6 + (float)((float)(v8 - v6) * 0x1.47ae140000000p-7f);
  v11 = v8 + (float)(v9 * -0x1.47ae140000000p-7f);
  v7 = v4 > v10;
  v12 = *((float*)this_ + 1974);
  LODWORD(v13) = !v7;
  v7 = v4 <= v11;
  v14 = *((float*)this_ + 1977);
  v15 = *((float*)this_ + 2056);
  if (v7) {
    v13 = (unsigned int)v13;
  }
  else {
    v13 = 1;
  }
  v16 = v5 + v13;
  v17 = v14 - v12;
  v18 = v12 + (float)((float)(v14 - v12) * 0x1.47ae140000000p-7f);
  v19 = v14 + (float)(v17 * -0x1.47ae140000000p-7f);
  v7 = v15 > v18;
  v20 = *((float*)this_ + 1948);
  LODWORD(v21) = !v7;
  v7 = v15 <= v19;
  v22 = *((float*)this_ + 1951);
  v23 = *((float*)this_ + 2016);
  if (v7) {
    v21 = (unsigned int)v21;
  }
  else {
    v21 = 1;
  }
  v24 = v22 - v20;
  v25 = v20 + (float)((float)(v22 - v20) * 0x1.47ae140000000p-7f);
  v26 = v22 + (float)(v24 * -0x1.47ae140000000p-7f);
  v7 = v23 > v25;
  v27 = *((float*)this_ + 1949);
  LODWORD(v28) = !v7;
  v7 = v23 <= v26;
  v29 = *((float*)this_ + 1952);
  v30 = *((float*)this_ + 2017);
  if (v7) {
    v28 = (unsigned int)v28;
  }
  else {
    v28 = 1;
  }
  v31 = v16 + v21 + v28;
  v32 = v29 - v27;
  v33 = v27 + (float)((float)(v29 - v27) * 0x1.47ae140000000p-7f);
  v34 = v29 + (float)(v32 * -0x1.47ae140000000p-7f);
  v7 = v30 > v33;
  v35 = *((float*)this_ + 1950);
  LODWORD(v36) = !v7;
  v7 = v30 <= v34;
  v37 = *((float*)this_ + 1953);
  v38 = *((float*)this_ + 2018);
  if (v7) {
    v36 = (unsigned int)v36;
  }
  else {
    v36 = 1;
  }
  v39 = v37 - v35;
  v40 = v35 + (float)((float)(v37 - v35) * 0x1.47ae140000000p-7f);
  v41 = v37 + (float)(v39 * -0x1.47ae140000000p-7f);
  v42 = *((float*)this_ + 1978);
  v43 = *((float*)this_ + 2064);
  v7 = v38 <= v41;
  v44 = *((float*)this_ + 1987);
  v45 = !v7 || v38 <= v40;
  v46 = v31 + v36 + v45;
  if (v43 <=
          (float)(v42 + (float)((float)(v44 - v42) * 0x1.47ae140000000p-7f)) ||
      v43 > (float)((float)(PSEUDO_UNFUSED((float)(v44 - v42) *
                                           -0x1.47ae140000000p-7f)) +
                    (float)(v44 * 0x1.fae1480000000p-1f))) {
    ++v46;
  }
  v47 = *((float*)this_ + 1988);
  v48 = *((float*)this_ + 1979);
  v49 = *((float*)this_ + 2065);
  if (v49 <=
          (float)(v48 + (float)((float)(v47 - v48) * 0x1.47ae140000000p-7f)) ||
      v49 > (float)((float)(PSEUDO_UNFUSED((float)(v47 - v48) *
                                           -0x1.47ae140000000p-7f)) +
                    (float)(v47 * 0x1.fae1480000000p-1f))) {
    ++v46;
  }
  v50 = *((float*)this_ + 1989);
  v51 = *((float*)this_ + 1980);
  v52 = *((float*)this_ + 2066);
  if (v52 <=
          (float)(v51 + (float)((float)(v50 - v51) * 0x1.47ae140000000p-7f)) ||
      v52 > (float)((float)(PSEUDO_UNFUSED((float)(v50 - v51) *
                                           -0x1.47ae140000000p-7f)) +
                    (float)(v50 * 0x1.fae1480000000p-1f))) {
    ++v46;
  }
  v53 = *((float*)this_ + 1990);
  v54 = *((float*)this_ + 1981);
  v55 = *((float*)this_ + 2067);
  if (v55 <=
          (float)(v54 + (float)((float)(v53 - v54) * 0x1.47ae140000000p-7f)) ||
      v55 > (float)((float)(PSEUDO_UNFUSED((float)(v53 - v54) *
                                           -0x1.47ae140000000p-7f)) +
                    (float)(v53 * 0x1.fae1480000000p-1f))) {
    ++v46;
  }
  v56 = *((float*)this_ + 1991);
  v57 = *((float*)this_ + 1982);
  v58 = *((float*)this_ + 2068);
  if (v58 <=
          (float)(v57 + (float)((float)(v56 - v57) * 0x1.47ae140000000p-7f)) ||
      v58 > (float)((float)(PSEUDO_UNFUSED((float)(v56 - v57) *
                                           -0x1.47ae140000000p-7f)) +
                    (float)(v56 * 0x1.fae1480000000p-1f))) {
    ++v46;
  }
  v59 = *((float*)this_ + 1992);
  v60 = *((float*)this_ + 1983);
  v61 = *((float*)this_ + 2069);
  if (v61 <=
          (float)(v60 + (float)((float)(v59 - v60) * 0x1.47ae140000000p-7f)) ||
      v61 > (float)((float)(PSEUDO_UNFUSED((float)(v59 - v60) *
                                           -0x1.47ae140000000p-7f)) +
                    (float)(v59 * 0x1.fae1480000000p-1f))) {
    ++v46;
  }
  v62 = *((float*)this_ + 1993);
  v63 = *((float*)this_ + 1984);
  v64 = *((float*)this_ + 2070);
  if (v64 <=
          (float)(v63 + (float)((float)(v62 - v63) * 0x1.47ae140000000p-7f)) ||
      v64 > (float)((float)(PSEUDO_UNFUSED((float)(v62 - v63) *
                                           -0x1.47ae140000000p-7f)) +
                    (float)(v62 * 0x1.fae1480000000p-1f))) {
    ++v46;
  }
  v65 = *((float*)this_ + 1994);
  v66 = *((float*)this_ + 1985);
  v67 = *((float*)this_ + 2071);
  if (v67 <=
          (float)(v66 + (float)((float)(v65 - v66) * 0x1.47ae140000000p-7f)) ||
      v67 > (float)((float)(PSEUDO_UNFUSED((float)(v65 - v66) *
                                           -0x1.47ae140000000p-7f)) +
                    (float)(v65 * 0x1.fae1480000000p-1f))) {
    ++v46;
  }
  v68 = *((float*)this_ + 1995);
  v69 = *((float*)this_ + 1986);
  v70 = *((float*)this_ + 2072);
  if (v70 <=
          (float)(v69 + (float)((float)(v68 - v69) * 0x1.47ae140000000p-7f)) ||
      v70 > (float)((float)(PSEUDO_UNFUSED((float)(v68 - v69) *
                                           -0x1.47ae140000000p-7f)) +
                    (float)(v68 * 0x1.fae1480000000p-1f))) {
    ++v46;
  }
  v71 = *((float*)this_ + 1963);
  v72 = *((float*)this_ + 1954);
  v73 = *((float*)this_ + 2026);
  v74 = *((float*)this_ + 2029);
  LODWORD(v75) =
      v73 <= (float)(v72 + (float)((float)(v71 - v72) * 0x1.47ae140000000p-7f));
  v76 = *((float*)this_ + 1957);
  v7 = v73 <=
       (float)(v71 + (float)((float)(v71 - v72) * -0x1.47ae140000000p-7f));
  v77 = *((float*)this_ + 1966);
  if (v7) {
    v75 = (unsigned int)v75;
  }
  else {
    v75 = 1;
  }
  v78 = v77 - v76;
  v79 = v76 + (float)((float)(v77 - v76) * 0x1.47ae140000000p-7f);
  v80 = v77 + (float)(v78 * -0x1.47ae140000000p-7f);
  v7 = v74 > v79;
  v81 = *((float*)this_ + 1958);
  LODWORD(v82) = !v7;
  v7 = v74 <= v80;
  v83 = *((float*)this_ + 1967);
  v84 = *((float*)this_ + 2030);
  if (v7) {
    v82 = (unsigned int)v82;
  }
  else {
    v82 = 1;
  }
  v85 = v75 + v82;
  v86 = v83 - v81;
  v87 = v81 + (float)((float)(v83 - v81) * 0x1.47ae140000000p-7f);
  v88 = v83 + (float)(v86 * -0x1.47ae140000000p-7f);
  v7 = v84 > v87;
  v89 = *((float*)this_ + 1960);
  LODWORD(v90) = !v7;
  v7 = v84 <= v88;
  v91 = *((float*)this_ + 1969);
  v92 = *((float*)this_ + 2032);
  if (v7) {
    v90 = (unsigned int)v90;
  }
  else {
    v90 = 1;
  }
  v93 = v85 + v90;
  v94 = v91 - v89;
  v95 = v89 + (float)((float)(v91 - v89) * 0x1.47ae140000000p-7f);
  v96 = v91 + (float)(v94 * -0x1.47ae140000000p-7f);
  v7 = v92 > v95;
  v97 = *((float*)this_ + 1961);
  LODWORD(v98) = !v7;
  v7 = v92 <= v96;
  v99 = *((float*)this_ + 1970);
  v100 = *((float*)this_ + 2033);
  if (v7) {
    v98 = (unsigned int)v98;
  }
  else {
    v98 = 1;
  }
  v101 = v46 + v93 + v98;
  v102 = v99 - v97;
  v103 = v97 + (float)((float)(v99 - v97) * 0x1.47ae140000000p-7f);
  v104 = v99 + (float)(v102 * -0x1.47ae140000000p-7f);
  v7 = v100 > v103;
  v105 = *((float*)this_ + 1962);
  LODWORD(v106) = !v7;
  v7 = v100 <= v104;
  v107 = *((float*)this_ + 1971);
  v108 = *((float*)this_ + 2034);
  if (v7) {
    v106 = (unsigned int)v106;
  }
  else {
    v106 = 1;
  }
  v109 =
      v108 > (float)(v107 +
                     (float)((float)(v107 - v105) * -0x1.47ae140000000p-7f)) ||
      v108 <=
          (float)(v105 + (float)((float)(v107 - v105) * 0x1.47ae140000000p-7f));
  v110 = v101 + v106 + v109;
  if (v110 <= 2) {
    return v110 != 0;
  }
  else {
    return 2;
  }
}

#pragma GCC visibility pop
