#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_6fefc0(__int64 result, unsigned __int64);
__int64 __cxa_guard_acquire_plt(_QWORD);
__int64 __cxa_guard_release_plt(_QWORD);
__int64 log_plt(void* this_, double);
__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 memset_plt(void* this_, void*, int, unsigned __int64);
__int64 nerd_gyro_pointing_6ff380(__int64 result, unsigned __int64, __int64,
                                  unsigned __int64);
__int64 nerd_gyro_pointing_GyroPointingStateDetector_IsStillnessDataReady_plt(
    _QWORD);
extern __int64 SdkData_e89160;
extern __int64 SdkData_e89170;
extern __int64 SdkData_e89180;
extern __int64 SdkData_e89190;
extern __int64 SdkData_e891a0;
extern __int64 SdkData_e891b0;
extern void (*SdkData_e89158[41])();
extern void (*SdkData_e89168[39])();
extern void (*SdkData_e89178[37])();
extern void (*SdkData_e89188[35])();
extern void (*SdkData_e89198[33])();
extern void (*SdkData_e891a8[31])();
void nerd_sensors_6fd620();
void nerd_sensors_6fd680();
void nerd_sensors_6fd6e0();
void nerd_sensors_6fd740();
void nerd_sensors_6fd7b0();
void nerd_sensors_6fd840();
unsigned __int64 nerd_sensors_6fea40(void* this_, __int64 a2, __int64 a3,
                                     unsigned __int64 a4);

void nerd_sensors_6fd620()
{
  if ((atomic_load_explicit((atomic_uchar* volatile)SdkData_e89160,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(SdkData_e89160) != 0) {
    *(_QWORD*)SdkData_e89158[0] = 0x3FF6A09E667F3BCDLL;
    __cxa_guard_release_plt(SdkData_e89160);
  }
}

void nerd_sensors_6fd680()
{
  if ((atomic_load_explicit((atomic_uchar* volatile)SdkData_e89170,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(SdkData_e89170) != 0) {
    *(_QWORD*)SdkData_e89168[0] = 0x3FE62E42FEFA39EFLL;
    __cxa_guard_release_plt(SdkData_e89170);
  }
}

void nerd_sensors_6fd6e0()
{
  if ((atomic_load_explicit((atomic_uchar* volatile)SdkData_e89180,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(SdkData_e89180) != 0) {
    *(_QWORD*)SdkData_e89178[0] = 0x400921FB54442D18LL;
    __cxa_guard_release_plt(SdkData_e89180);
  }
}

void nerd_sensors_6fd740()
{

#pragma clang fp contract(off)
  void* v0;
  __int64 v1;

  v1 = COERCE_AS(__typeof__(v1), PSEUDO_REGISTER(double, "d0", "=w"));
  if ((atomic_load_explicit((atomic_uchar* volatile)SdkData_e89190,
                            memory_order_acquire) &
       1) == 0) {
    v0 = (void*)__cxa_guard_acquire_plt(SdkData_e89190),
    v1 = COERCE_AS(__typeof__(v1), PSEUDO_REGISTER(double, "d0", "=w"));
    if ((_DWORD)v0 != 0) {
      log_plt(v0, *(double*)SdkData_e89178[0]),
          v1 = COERCE_AS(__typeof__(v1), PSEUDO_REGISTER(double, "d0", "=w"));
      *(_QWORD*)SdkData_e89188[0] = v1;
      __cxa_guard_release_plt(SdkData_e89190),
          v1 = COERCE_AS(__typeof__(v1), PSEUDO_REGISTER(double, "d0", "=w"));
    }
  }
}

void nerd_sensors_6fd7b0()
{
  void(__attribute__((noreturn)) * v0)();
  __int64 v1;

  if ((atomic_load_explicit((atomic_uchar* volatile)SdkData_e891a0,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(SdkData_e891a0) != 0) {
    v0 = SdkData_e89198[0];
    *(_QWORD*)SdkData_e89198[0] = 0;
    *((_QWORD*)v0 + 1) = 0;
    *(__int64*)((char*)((__int64*)0xCLL) + (_QWORD)v0 + 4) = 0;
    *(__int64*)((char*)((__int64*)0xCLL) + (_QWORD)v0 + 12) = 1065353216;
    *(_QWORD*)&(*(_BYTE(*)[4])0x20LL)[(_QWORD)v0] = 0;
    *(_DWORD*)((char*)((__int64*)0x28LL) + (_QWORD)v0) = 1065353216;
    *(__int64*)((char*)((__int64*)0x28LL) + (_QWORD)v0 + 4) = 0;
    *(__int64*)((char*)((__int64*)0x30LL) + (_QWORD)v0 + 4) =
        0x3F80000000000000LL;
    *(__int64*)((char*)((__int64*)0x38LL) + (_QWORD)v0 + 4) = 0;
    *(int*)((char*)((int*)0x44LL) + (_QWORD)v0) = 0;
    *(__int64*)((char*)((__int64*)0x48LL) + (_QWORD)v0) = 1065353216;
    *(__int64*)((char*)((__int64*)0x48LL) + (_QWORD)v0 + 8) = 0;
    *(_DWORD*)((char*)((__int64*)0x58LL) + (_QWORD)v0) = 1065353216;
    *(__int64*)((char*)((__int64*)0x58LL) + (_QWORD)v0 + 4) = 0;
    *(_QWORD*)((char*)((_UNKNOWN*)0x64LL) + (_QWORD)v0) = 0x3F80000000000000LL;
    *(_QWORD*)((char*)((_UNKNOWN*)0x6CLL) + (_QWORD)v0) = 0;
    v1 = SdkData_e891a0;
    *(_DWORD*)((char*)((_UNKNOWN*)0x74LL) + (_QWORD)v0) = 0;
    *(_DWORD*)((char*)((_UNKNOWN*)0x74LL) + (_QWORD)v0 + 4) = 1065353216;
    __cxa_guard_release_plt(v1);
  }
}

void nerd_sensors_6fd840()
{
  void(__attribute__((noreturn)) * v0)();
  __int64 v1;

  if ((atomic_load_explicit((atomic_uchar* volatile)SdkData_e891b0,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(SdkData_e891b0) != 0) {
    v0 = SdkData_e891a8[0];
    *(_QWORD*)SdkData_e891a8[0] = 0x43C8000043C80000LL;
    *((_QWORD*)v0 + 1) = 0x3E80000043C80000LL;
    *(_QWORD*)((char*)((_UNKNOWN*)0x68LL) + (_QWORD)v0) = 0;
    *(_QWORD*)((char*)((_UNKNOWN*)0x68LL) + (_QWORD)v0 + 8) = 0;
    *(_QWORD*)((char*)((_UNKNOWN*)0x88LL) + (_QWORD)v0) = 0;
    *(_QWORD*)((char*)((_UNKNOWN*)0x88LL) + (_QWORD)v0 + 8) = 0;
    *(_QWORD*)((char*)((_UNKNOWN*)0xB8LL) + (_QWORD)v0) = 0;
    *(_QWORD*)((char*)((_UNKNOWN*)0xB8LL) + (_QWORD)v0 + 8) = 0;
    *(__int64*)((char*)((__int64*)0xCLL) + (_QWORD)v0 + 4) = 1048576000;
    *(__int64*)((char*)((__int64*)0xCLL) + (_QWORD)v0 + 12) =
        0x43C8000043C80000LL;
    *(__int64*)((char*)((__int64*)0x30LL) + (_QWORD)v0) = 0x38D1B71738D1B717LL;
    *(__int64*)((char*)((__int64*)0x30LL) + (_QWORD)v0 + 8) =
        0x38D1B71738D1B717LL;
    *(_QWORD*)((char*)((char*)0x40LL) + (_QWORD)v0) = 0x38D1B71738D1B717LL;
    *(_QWORD*)((char*)((char*)0x40LL) + (_QWORD)v0 + 8) = 0x3D8000003D800000LL;
    *(__int64*)((char*)((__int64*)0x58LL) + (_QWORD)v0) = 0;
    *(__int64*)((char*)((__int64*)0x58LL) + (_QWORD)v0 + 8) = 0;
    *(_QWORD*)((char*)((_UNKNOWN*)0x78LL) + (_QWORD)v0) = 0;
    *(_QWORD*)((char*)((_UNKNOWN*)0x78LL) + (_QWORD)v0 + 8) = 0;
    *(_QWORD*)((char*)((_UNKNOWN*)0x98LL) + (_QWORD)v0) = 0;
    *(_QWORD*)((char*)((_UNKNOWN*)0x98LL) + (_QWORD)v0 + 8) = 0;
    *(_QWORD*)((char*)((_UNKNOWN*)0xA8LL) + (_QWORD)v0) = 0;
    *(_QWORD*)((char*)((_UNKNOWN*)0xA8LL) + (_QWORD)v0 + 8) = 0;
    *(_QWORD*)((char*)((_UNKNOWN*)0xC4LL) + (_QWORD)v0 + 4) = 0;
    *(_QWORD*)((char*)((_UNKNOWN*)0xC4LL) + (_QWORD)v0 + 12) = 0;
    *(_QWORD*)((char*)((_UNKNOWN*)0xD8LL) + (_QWORD)v0) = 0;
    *(_QWORD*)&(*(_BYTE(*)[4])0x20LL)[(_QWORD)v0] = 0x38D1B71743C80000LL;
    *(_QWORD*)&(*(_BYTE(*)[4])0x20LL)[(_QWORD)v0 + 8] = 0x38D1B71738D1B717LL;
    *(_DWORD*)((char*)((_UNKNOWN*)0x70LL) + (_QWORD)v0) = 953267991;
    *(_DWORD*)((char*)((_UNKNOWN*)0x8CLL) + (_QWORD)v0) = 953267991;
    *(_DWORD*)((char*)((_UNKNOWN*)0xC4LL) + (_QWORD)v0) = 953267991;
    *(_DWORD*)((char*)((__int64*)0x50LL) + (_QWORD)v0) = 1031798784;
    *(_DWORD*)((char*)((__int64*)0x50LL) + (_QWORD)v0 + 4) = 980581299;
    *(_DWORD*)((char*)((_UNKNOWN*)0xA8LL) + (_QWORD)v0) = 980581299;
    *(_DWORD*)((char*)((char*)0x60LL) + (_QWORD)v0) = 980151802;
    *(_DWORD*)((char*)((_UNKNOWN*)0x68LL) + (_QWORD)v0) = 980151802;
    *(_DWORD*)((char*)((_UNKNOWN*)0x9CLL) + (_QWORD)v0) = 980151802;
    *(_DWORD*)((char*)((_UNKNOWN*)0xB0LL) + (_QWORD)v0) = 980151802;
    *(_DWORD*)((char*)((_UNKNOWN*)0xCCLL) + (_QWORD)v0) = 980151802;
    *(_DWORD*)((char*)((_UNKNOWN*)0xD8LL) + (_QWORD)v0) = 980151802;
    v1 = SdkData_e891b0;
    *(_DWORD*)((char*)((_UNKNOWN*)0xE0LL) + (_QWORD)v0) = 980581299;
    __cxa_guard_release_plt(v1);
  }
}

unsigned __int64 nerd_sensors_6fea40(void* this_, __int64 a2, __int64 a3,
                                     unsigned __int64 a4)
{

#pragma clang fp contract(off)
  char* v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  _QWORD* v9;
  __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  char* v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  char* v24;
  _QWORD* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  char* v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  char* v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  char* v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  unsigned __int64 v59;
  char* v60;
  bool v61;
  unsigned __int64 v62;
  char* v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  unsigned __int64 v69;
  _BYTE* v70;
  unsigned __int64 v71;
  unsigned __int64 v72;
  unsigned __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  char* v79;
  unsigned __int64 v80;
  _BYTE* v81;
  unsigned __int64 v82;
  char* v83;
  __int64 v84;
  unsigned __int64 v85;
  char* v86;
  __int64 v87;
  unsigned __int64 v88;
  unsigned __int64 v89;
  unsigned __int64 v90;
  __int64 v91;
  unsigned __int64 v92;
  char* v93;
  char* v94;
  __int64 v95;
  unsigned __int64 v96;
  char* v97;
  unsigned __int64 v98;
  char* v99;
  __int64 v100;
  char v101;
  unsigned int v102;
  struct {
    _QWORD v104[3];
    int v105;
  } v104_;
  int v106;
  struct {
    _BYTE v107[3584];
    unsigned __int64 v108;
    __int64 v109;
    __int64 v110;
  } v107_;
  struct {
    _BYTE v111[768];
    unsigned __int64 v112;
    __int64 v113;
    __int64 v114;
  } v111_;
  double v115[10];

  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v5 = (char*)this_ + 23832;
  memset_plt((void*)&v106, nullptr, 4596, a4),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v6 = *((_QWORD*)this_ + 2979);
  v7 = *((_QWORD*)this_ + 2980);
  v8 = *((_QWORD*)this_ + 3432);
  v107_.v108 = 0;
  v107_.v109 = 0;
  v107_.v110 = 0;
  v104_.v104[0] = v6;
  v104_.v104[1] = v7;
  v104_.v104[2] = *((_QWORD*)this_ + 2981);
  LODWORD(v6) = *((_DWORD*)v5 + 6);
  v9 = v107_.v107;
  v104_.v105 = v6;
  SdkRoutine_6fefc0((__int64)v107_.v107, v8),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v14 = *((_QWORD*)this_ + 3431);
  if (v14 == 0) {
    goto LABEL_28;
  }
  v15 = *((_QWORD*)this_ + 3433);
  v16 = *((_QWORD*)this_ + 3432);
  v17 = *((_QWORD*)this_ + 3431) & 3LL;
  if (v15 >= v14) {
    v18 = 0;
  }
  else {
    v18 = *((_QWORD*)this_ + 3432);
  }
  if (v14 < 4) {
    v19 = 0;
    if ((v14 & 3) == 0) {
      goto LABEL_28;
    }
    goto LABEL_23;
  }
  v20 = 0;
  v19 = 0;
  v21 = (char*)this_ + 56 * v15 + 56 * v18 - 56 * v14;
  do {
    v22 = v15 - v14 + v18 + v19;
    v19 += 4;
    if (v22 >= v16) {
      v23 = v16;
    }
    else {
      v23 = 0;
    }
    v24 = &v21[v20 - 56 * v23];
    v25 = &v107_.v107[v20];
    v26 = *((_QWORD*)v24 + 2988);
    v27 = *((_QWORD*)v24 + 2984);
    v28 = *((_QWORD*)v24 + 2986);
    v25[4] = *((_QWORD*)v24 + 2987);
    v25[5] = v26;
    v29 = *((_QWORD*)v24 + 2983);
    v30 = *((_QWORD*)v24 + 2989);
    v31 = *((_QWORD*)v24 + 2985);
    *v25 = v29;
    v25[1] = v27;
    v25[2] = v31;
    v25[3] = v28;
    if (v22 + 1 >= v16) {
      v32 = v16;
    }
    else {
      v32 = 0;
    }
    v33 = &v21[v20 - 56 * v32];
    v34 = *((_QWORD*)v33 + 2990);
    v35 = *((_QWORD*)v33 + 2992);
    v25[8] = *((_QWORD*)v33 + 2991);
    v25[9] = v35;
    v36 = *((_QWORD*)v33 + 2993);
    v25[6] = v30;
    v25[7] = v34;
    v37 = *((_QWORD*)v33 + 2994);
    v38 = *((_QWORD*)v33 + 2995);
    v39 = *((_QWORD*)v33 + 2996);
    v25[12] = v38;
    v25[13] = v39;
    v40 = v22 + 2;
    v25[10] = v36;
    v25[11] = v37;
    v41 = v22 + 3;
    if (v40 >= v16) {
      v42 = v16;
    }
    else {
      v42 = 0;
    }
    v43 = v20 - 56 * v42;
    if (v41 >= v16) {
      v44 = v16;
    }
    else {
      v44 = 0;
    }
    v45 = v20 - 56 * v44;
    v20 += 224;
    v46 = &v21[v43];
    v47 = *((_QWORD*)v46 + 2998);
    v48 = *((_QWORD*)v46 + 2999);
    v49 = *((_QWORD*)v46 + 3000);
    v50 = *((_QWORD*)v46 + 3003);
    v51 = &v21[v45];
    v25[14] = *((_QWORD*)v46 + 2997);
    v25[15] = v47;
    v52 = *((_QWORD*)v46 + 3001);
    v53 = *((_QWORD*)v46 + 3002);
    v54 = *((_QWORD*)v51 + 3004);
    v25[16] = v48;
    v25[19] = v53;
    v25[20] = v50;
    v25[17] = v49;
    v25[18] = v52;
    v55 = *((_QWORD*)v51 + 3005);
    v56 = *((_QWORD*)v51 + 3006);
    v25[21] = v54;
    v13 = *((_QWORD*)v51 + 3009);
    v25[22] = v55;
    v25[23] = v56;
    v12 = *((_QWORD*)v51 + 3007);
    v57 = *((_QWORD*)v51 + 3010);
    v58 = *((_QWORD*)v51 + 3008);
    v25[26] = v13;
    v25[27] = v57;
    v25[24] = v12;
    v25[25] = v58;
  } while ((v14 & 0xFFFFFFFFFFFFFFFCLL) != v19);
  v9 = &v107_.v107[v20];
  if ((v14 & 3) != 0) {
  LABEL_23:
    v59 = v18 + v19 + v15 - v14;
    v60 = (char*)this_ + 56 * v59 + 23864;
    do {
      v61 = v59++ >= v16;
      if (v61) {
        v62 = v16;
      }
      else {
        v62 = 0;
      }
      --v17;
      v63 = &v60[-56 * v62];
      v60 += 56;
      v64 = *((_QWORD*)v63 + 5);
      v65 = *((_QWORD*)v63 + 6);
      v9[4] = *((_QWORD*)v63 + 4);
      v9[5] = v64;
      v66 = *(_QWORD*)v63;
      v67 = *((_QWORD*)v63 + 1);
      v9[6] = v65;
      *v9 = v66;
      v9[1] = v67;
      v68 = *((_QWORD*)v63 + 3);
      v9[2] = *((_QWORD*)v63 + 2);
      v9[3] = v68;
      v9 += 7;
    } while (v17 != 0);
  }
LABEL_28:
  v69 = *((_QWORD*)this_ + 3531);
  v70 = v111_.v111;
  v107_.v108 = v14;
  v111_.v112 = 0;
  v111_.v113 = 0;
  v111_.v114 = 0;
  nerd_gyro_pointing_6ff380((__int64)v111_.v111, v69, v12, v13),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v71 = *((_QWORD*)this_ + 3530);
  if (v71 == 0) {
    goto LABEL_55;
  }
  v72 = *((_QWORD*)this_ + 3532);
  v73 = *((_QWORD*)this_ + 3531);
  v74 = *((_QWORD*)this_ + 3530) & 3LL;
  if (v72 >= v71) {
    v75 = 0;
  }
  else {
    v75 = *((_QWORD*)this_ + 3531);
  }
  if (v71 < 4) {
    v76 = 0;
    if ((v71 & 3) == 0) {
      goto LABEL_55;
    }
    goto LABEL_50;
  }
  v77 = v72 - v71 + v75;
  v78 = 0;
  v76 = 0;
  v79 = (char*)this_ + 12 * (v75 + v72) - 12 * v71;
  do {
    v80 = v77 + v76;
    v81 = &v111_.v111[v78];
    v76 += 4;
    if (v80 >= v73) {
      v82 = v73;
    }
    else {
      v82 = 0;
    }
    v83 = (char*)this_ + 12 * v77 + v78 + -12 * v82 + 27472;
    v84 = *(_QWORD*)v83;
    *((_DWORD*)v81 + 2) = *((_DWORD*)v83 + 2);
    *(_QWORD*)v81 = v84;
    if (v80 + 1 >= v73) {
      v85 = v73;
    }
    else {
      v85 = 0;
    }
    v86 = &v79[v78 + 27484 + -12 * v85];
    v87 = *(_QWORD*)v86;
    *((_DWORD*)v81 + 5) = *((_DWORD*)v86 + 2);
    v88 = v80 + 2;
    *(_QWORD*)(v81 + 12) = v87;
    v89 = v80 + 3;
    if (v88 >= v73) {
      v90 = v73;
    }
    else {
      v90 = 0;
    }
    v91 = v78 - 12 * v90;
    if (v89 >= v73) {
      v92 = v73;
    }
    else {
      v92 = 0;
    }
    v93 = &v79[v91];
    v94 = &v79[v78 + 27508 + -12 * v92];
    v78 += 48;
    *((_QWORD*)v81 + 3) = *((_QWORD*)v93 + 3437);
    *((_DWORD*)v81 + 8) = *((_DWORD*)v93 + 6876);
    LODWORD(v93) = *((_DWORD*)v94 + 2);
    v95 = *(_QWORD*)v94;
    *((_DWORD*)v81 + 11) = (_DWORD)v93;
    *(_QWORD*)(v81 + 36) = v95;
  } while ((v71 & 0xFFFFFFFFFFFFFFFCLL) != v76);
  v70 = &v111_.v111[v78];
  if ((v71 & 3) != 0) {
  LABEL_50:
    v96 = v75 + v76 + v72 - v71;
    v97 = (char*)this_ + 12 * v96 + 27472;
    do {
      v61 = v96++ >= v73;
      if (v61) {
        v98 = v73;
      }
      else {
        v98 = 0;
      }
      --v74;
      v99 = &v97[-12 * v98];
      v97 += 12;
      v100 = *(_QWORD*)v99;
      LODWORD(v99) = *((_DWORD*)v99 + 2);
      *(_QWORD*)v70 = v100;
      *((_DWORD*)v70 + 2) = (_DWORD)v99;
      v70 += 12;
    } while (v74 != 0);
  }
LABEL_55:
  v111_.v112 = v71;
  memcpy_plt(v115, (char*)this_ + 28264, 192),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v101 = nerd_gyro_pointing_GyroPointingStateDetector_IsStillnessDataReady_plt(
      v104_.v104),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  *(float*)&v102 = v115[9];
  return v101 & 1 | ((unsigned __int64)v102 << 32);
}

#pragma GCC visibility pop
