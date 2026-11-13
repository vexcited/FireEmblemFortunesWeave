#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nvidia_6474d0(__int64 result, int, int, int, int, int, int, int, int,
                      unsigned int, int);
__int64 nvidia_647a50(_DWORD*, __int64, int*, char*, int);
extern _UNKNOWN* SdkData_e89ba0;
extern __int64 (*__nnmusl_lock_clock_sources_ptr[])();
__int64 nn_1d0(__int64 (**a1)(void));
__int64 nn_66a6d0(__int64 result, __int64 a2, __int64* a3);

__int64 nn_1d0(__int64 (**a1)(void))
{
  if (a1 < __nnmusl_lock_clock_sources_ptr ||
      (unsigned __int64)a1 >= 0xE4C300 || ((unsigned __int8)a1 & 7) != 0) {
    __udf(0x8003u);
  }
  return ((__typeof__((*a1)()) (*)())(*a1))(a1);
}

__int64 nn_66a6d0(__int64 result, __int64 a2, __int64* a3)
{
  __int64 v3;
  unsigned int v4;
  int v5;
  int v6;
  _QWORD* v7;
  _BOOL4 v8;
  unsigned int v9;
  char v10;
  unsigned int v11;
  unsigned int v12;
  unsigned __int64 v13;
  bool v14;
  char v15;
  unsigned int v16;
  unsigned int v17;
  __int64 v18;
  int v19;
  int v20;
  char* v21;
  unsigned int v22;
  unsigned int v23;
  int v24;
  unsigned int v25;
  unsigned int v26;
  unsigned int v27;
  unsigned int v28;
  unsigned int v29;
  unsigned int v30;
  int v31;
  int v32;
  unsigned int v33;
  int v34;
  __int64 v35;
  int v37;
  __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  struct {
    __int64 v41;
    int v42;
    int v43;
    int v44;
    char gap44_[4];
    __int64 v45;
  } v41_;
  struct {
    _DWORD v46[12];
    char gap112_[28];
    int v47;
  } v46_;

  if (a3 == nullptr) {
    v5 = 0;
    v4 = 0;
  LABEL_29:
    *(_QWORD*)(a2 + 80) = 0;
    v7 = (_QWORD*)(result + 40);
    *(_OWORD*)(a2 + 16) = (__typeof__(*(_OWORD*)(a2 + 16))){0};
    *(_OWORD*)(a2 + 32) = (__typeof__(*(_OWORD*)(a2 + 32))){0};
    *(_OWORD*)(a2 + 48) = (__typeof__(*(_OWORD*)(a2 + 48))){0};
    *(_OWORD*)(a2 + 64) = (__typeof__(*(_OWORD*)(a2 + 64))){0};
    *(_OWORD*)a2 = (__typeof__(*(_OWORD*)a2)){0};
    *(_QWORD*)a2 = *(_QWORD*)(result + 96);
    goto LABEL_30;
  }
  v3 = *a3;
  if ((*a3 & 0x200000000000000LL) != 0) {
    v4 = (__int16)*a3;
  }
  else {
    v4 = 0;
  }
  if ((*a3 & 0x200000000000000LL) != 0) {
    v5 = (int)v3 >> 16;
  }
  else {
    v5 = 0;
  }
  if ((v3 & 0x100000000000000LL) == 0) {
    goto LABEL_29;
  }
  *(_QWORD*)(a2 + 80) = 0;
  v6 = BYTE4(v3);
  v7 = (_QWORD*)(result + 40);
  *(_OWORD*)(a2 + 16) = (__typeof__(*(_OWORD*)(a2 + 16))){0};
  *(_OWORD*)(a2 + 32) = (__typeof__(*(_OWORD*)(a2 + 32))){0};
  *(_OWORD*)(a2 + 48) = (__typeof__(*(_OWORD*)(a2 + 48))){0};
  *(_OWORD*)(a2 + 64) = (__typeof__(*(_OWORD*)(a2 + 64))){0};
  *(_OWORD*)a2 = (__typeof__(*(_OWORD*)a2)){0};
  *(_QWORD*)a2 = *(_QWORD*)(result + 96);
  if (BYTE4(v3) == 0) {
  LABEL_30:
    v9 = *(_DWORD*)(result + 104);
    v6 = 0;
    *(_DWORD*)(a2 + 12) = v9;
    v12 = *(unsigned __int16*)(result + 108);
    *(_DWORD*)(a2 + 16) = v12;
    v17 = *(unsigned __int16*)(result + 110);
    goto LABEL_31;
  }
  v8 = (*(_DWORD*)(result + 40) & 0x800) != 0;
  v9 = ((unsigned int)(*(int*)(result + 104) - v8) >> SBYTE4(v3)) + v8;
  if (v9 <= v8 + 1) {
    v9 = v8 + 1;
  }
  *(_DWORD*)(a2 + 12) = v9;
  if ((*(_QWORD*)(result + 88) & 0xFELL) != 0) {
    v10 = BYTE4(v3);
  }
  else {
    v10 = 0;
  }
  if ((*(_QWORD*)(result + 88) & 0xFELL) != 0) {
    v11 = v8 + 1;
  }
  else {
    v11 = 1;
  }
  v12 = (((unsigned int)*(unsigned __int16*)(result + 108) - v8) >> v10) + v8;
  if (v12 <= v11) {
    v12 = v11;
  }
  *(_DWORD*)(a2 + 16) = v12;
  v13 = *(unsigned __int8*)(result + 88);
  v14 = v13 > 2;
  if (v13 <= 2) {
    v15 = 0;
  }
  else {
    v15 = BYTE4(v3);
  }
  if (v14) {
    v16 = v8 + 1;
  }
  else {
    v16 = 1;
  }
  v17 = (((unsigned int)*(unsigned __int16*)(result + 110) - v8) >> v15) + v8;
  if (v17 <= v16) {
    v17 = v16;
  }
LABEL_31:
  *(_DWORD*)(a2 + 20) = v17;
  *(_DWORD*)(a2 + 72) = *(unsigned __int8*)(result + 84);
  *(_DWORD*)(a2 + 76) = (*(_DWORD*)(result + 84) >> 21) & 0x3F;
  if (a3 != nullptr && (*((_BYTE*)a3 + 7) & 4) != 0) {
    LODWORD(v18) = *((_DWORD*)a3 + 2);
  }
  else {
    v18 = (__int64)(*v7 << 39) >> 55;
  }
  *(_DWORD*)(a2 + 80) = v18;
  if ((*v7 & 0xFE000000LL) == 0x14000000) {
    *(_DWORD*)(a2 + 8) = 0;
    *(_DWORD*)(a2 + 24) = 1;
    return result;
  }
  if ((*v7 & 0x50LL) != 0) {
    *(_DWORD*)(a2 + 24) = 1;
    *(_DWORD*)(a2 + 8) = *(_DWORD*)(result + 80);
    return result;
  }
  *(_DWORD*)(a2 + 24) = 2;
  v19 = ((*(_DWORD*)(result + 84) >> 15) & 7) * v9;
  *(_DWORD*)(a2 + 32) = v19;
  v20 = ((*(_DWORD*)(result + 84) >> 18) & 7) * v12;
  *(_DWORD*)(a2 + 36) = v20;
  *(_DWORD*)(a2 + 40) = v17;
  *(_QWORD*)(a2 + 64) = *(_QWORD*)(result + 72) >> 16;
  if (a3 != nullptr && (*((_BYTE*)a3 + 7) & 4) != 0) {
    v21 = (char*)SdkData_e89ba0 + 48 * *((int*)a3 + 2);
    v22 = (unsigned __int8)v21[8];
    if (v22 >= (unsigned __int8)*(_DWORD*)(result + 72)) {
      v26 = v22 / (unsigned __int8)*(_DWORD*)(result + 72);
      v24 = v9 * v26;
      v25 = v19 * v26;
    }
    else {
      v23 = (unsigned __int8)*(_DWORD*)(result + 72) / v22;
      v24 = (int)(v9 + v23 - 1) / (int)v23;
      v25 = (v19 + v23 - 1) / v23;
    }
    *(_DWORD*)(a2 + 12) = v24;
    *(_DWORD*)(a2 + 32) = v25;
    v27 = *(_DWORD*)(result + 72);
    v28 = (unsigned __int8)v21[9];
    v29 = v27 >> 8;
    v30 = BYTE1(v27);
    if (v28 >= (unsigned __int8)v29) {
      v34 = v28 / v30;
      v32 = v12 * v34;
      v33 = v20 * v34;
    }
    else {
      v31 = v30 / v28;
      v32 = (int)(v12 + v31 - 1) / v31;
      v33 = (v20 + v31 - 1) / (unsigned int)v31;
    }
    *(_DWORD*)(a2 + 16) = v32;
    *(_DWORD*)(a2 + 36) = v33;
  }
  v35 = result;
  nvidia_6474d0((__int64)v46_.v46, (__int16)*(_QWORD*)(result + 40),
                (int)*(_QWORD*)(result + 40) >> 25,
                (unsigned __int8)*(_DWORD*)(result + 84), *(char*)(result + 31),
                (unsigned __int8)*(_DWORD*)(result + 72),
                BYTE1(*(_DWORD*)(result + 72)), *(_DWORD*)(result + 84) >> 27,
                *(_DWORD*)(result + 104),
                (unsigned __int16)*(_DWORD*)(result + 108),
                HIWORD(*(_DWORD*)(result + 108)));
  v46_.v47 = 1;
  result = nvidia_647a50(v46_.v46, (__int64)&v41_.v41, &v46_.v47,
                         (char*)(v35 + 112), v6);
  v37 = v46_.v47;
  v38 = *(_QWORD*)a2 + v41_.v45;
  v39 = v41_.v41;
  *(_QWORD*)a2 = v38;
  *(_QWORD*)(a2 + 44) = v39;
  *(_DWORD*)(a2 + 52) = v41_.v42;
  *(_DWORD*)(a2 + 56) = v37;
  if (v4 != 0) {
    if ((*v7 & 0xFE000000LL) == 0x4000000) {
      v40 = (unsigned __int64)(((v41_.v44 * v41_.v43 * (v4 >> v41_.v42))
                                << (BYTE4(v41_.v41) + v41_.v42)) +
                               ((v4 & ~(-1 << v41_.v42)) << SBYTE4(v41_.v41)))
            << 9;
    }
    else {
      v40 = (*(_QWORD*)(v35 + 72) >> 16) * v4;
    }
    *(_QWORD*)a2 = v40 + v38;
    if (v5 == 0) {
      v5 = *(int*)(a2 + 20) - v4;
    }
  }
  else if (v5 == 0) {
    return result;
  }
  *(_DWORD*)(a2 + 20) = v5;
  return result;
}

#pragma GCC visibility pop
