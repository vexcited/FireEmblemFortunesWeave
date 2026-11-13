#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 CudaDriverRoutine_197480(__int64 result, __int64, unsigned int,
                                 unsigned int*, __int64, unsigned int, _QWORD*,
                                 unsigned int*);
__int64 CudaDriverRoutine_20f580(__int64 result);
__int64 CudaDriverRoutine_98340(__int64 result);
__int64 CudaDriverRoutine_bc3f0(__int64);
__int64 CudaDriverRoutine_f1f00(_QWORD*, _QWORD*);
__int64 CudaDriverStub_107f90(__int64);
__int64 CudaDriverStub_108070(__int64);
__int64 CudaDriverStub_640d0(__int64, __int64, unsigned __int64);
__int64 cuda_driver_20b420(unsigned int, unsigned int, __int64);
__int64 memcpy_plt(__int64, __int64, unsigned __int64);
__int64 nvidia_ed630(__int64, __int64, __int64, ...);
bool CudaDriverRoutine_bbdf0(__int64);
bool CudaDriverStub_b9300(__int64);
extern _UNKNOWN* CudaDriverData_1422118;
extern _UNKNOWN* CudaDriverData_14225e0;
extern _UNKNOWN** CudaDriverData_1423090;
void CudaDriverRoutine_743c();
void CudaDriverStub_10fdf0();
__int64 nvidia_213260(unsigned int* a1);
__int64 nvidia_213530(unsigned int* a1);
__int64 nvidia_21c480(unsigned int* a1, __int64 a2);
void nvidia_233a60(__int64 a1, _QWORD* a2);
__int64 nvidia_239be0(__int64 a1, __int64 a2, unsigned int a3, int a4,
                      __int64 a5, __int64 a6, int* a7);
__int64 nvidia_241a00(__int64* a1, __int64 a2, __int64 a3, __int64 a4,
                      __int64 a5);
void nvidia_245e20(__int64 a1, _QWORD* a2);

__int64 nvidia_213260(unsigned int* a1)
{
  unsigned int v1;
  unsigned __int64 v3;
  __int64 v4;
  unsigned int v5;
  struct {
    __int128 v7;
    __int128 v8;
  } v7_;
  __int128 v9;
  __int64 v10;

  if (a1 != nullptr) {
    {
      v1 = *a1;
      __asm__ volatile("" ::"r"(v1));
    }
    v7_.v8 = (__typeof__(v7_.v8)){0};
    v9 = (__typeof__(v9)){0};
    v7_.v7 = (__typeof__(v7_.v7)){0};
    if (v1 >= 0x30) {
      v3 = 48;
    }
    else {
      v3 = v1;
    }
    memcpy_plt((__int64)&v7_.v7, (__int64)a1, v3);
    LODWORD(v7_.v7) = v3;
    v10 = 0;
    if (DWORD2(v7_.v7) != 0 && HIDWORD(v7_.v7) != 0 && (_QWORD)v7_.v8 != 0) {
      if (*(_DWORD*)v7_.v8 == 1) {
        v4 = (*(__int64 (**)(_QWORD, unsigned __int64, __int64*, __int128*))(
            *(char**)((char*)((_UNKNOWN**)0x8LL) +
                      (_QWORD)CudaDriverData_1423090) +
            (unsigned __int64)((char*)0x20LL)))(
            *(_QWORD*)(v7_.v8 + 8),
            DWORD2(v7_.v7) | ((unsigned __int64)HIDWORD(v7_.v7) << 32), &v10,
            &v9);
        v5 = CudaDriverRoutine_20f580(v4);
        if (v5 == 0) {
          *((_QWORD*)&v7_.v8 + 1) = v10;
        }
      }
      else {
        v5 = 45;
      }
    }
    else {
      v5 = 4;
    }
    memcpy_plt((__int64)a1, (__int64)&v7_.v7, (unsigned int)v7_.v7);
  }
  else {
    return 4;
  }
  return v5;
}

__int64 nvidia_213530(unsigned int* a1)
{
  unsigned int v1;
  unsigned __int64 v3;
  __int64 v4;
  unsigned int v5;
  unsigned int v6;
  struct {
    __int128 v8;
    __int128 v9;
  } v8_;
  struct {
    __int128 v10;
    char gap48_[28];
    int v11;
  } v10_;

  if (a1 != nullptr) {
    {
      v1 = *a1;
      __asm__ volatile("" ::"r"(v1));
    }
    v8_.v9 = (__typeof__(v8_.v9)){0};
    v10_.v10 = (__typeof__(v10_.v10)){0};
    v8_.v8 = (__typeof__(v8_.v8)){0};
    if (v1 >= 0x30) {
      v3 = 48;
    }
    else {
      v3 = v1;
    }
    memcpy_plt((__int64)&v8_.v8, (__int64)a1, v3);
    LODWORD(v8_.v8) = v3;
    if (*((_QWORD*)&v8_.v8 + 1) != 0 && DWORD2(v8_.v9) != 0) {
      if (**((_DWORD**)&v8_.v8 + 1) == 1) {
        v10_.v11 = DWORD2(v8_.v9);
        v4 = (*(__int64 (**)(_QWORD, int*, __int128*))(
            *(char**)((char*)((_UNKNOWN**)0x8LL) +
                      (_QWORD)CudaDriverData_1423090) +
            (unsigned __int64)((__int64*)0x38LL)))(
            *(_QWORD*)(*((_QWORD*)&v8_.v8 + 1) + 8LL), &v10_.v11, &v10_.v10);
        v5 = CudaDriverRoutine_20f580(v4);
        v3 = (unsigned int)v8_.v8;
        v6 = v5;
      }
      else {
        v6 = 45;
      }
    }
    else {
      v6 = 4;
    }
    memcpy_plt((__int64)a1, (__int64)&v8_.v8, v3);
  }
  else {
    return 4;
  }
  return v6;
}

__int64 nvidia_21c480(unsigned int* a1, __int64 a2)
{
  unsigned int v2;
  __int64* v3;
  unsigned __int64 v4;
  __int64 v5;
  unsigned int* v6;
  __int64 v7;
  __int64 v9;
  _DWORD* v10;
  __int128 v11;
  __int64 v12;
  __int64 v13;
  _OWORD v14[8];
  struct {
    __int128 v15;
    __int128 v16;
  } v15_;
  struct {
    _QWORD v17[4];
    __int128 v18;
    __int64 v19;
  } v17_;

  if (a1 == nullptr) {
    return 1;
  }
  {
    v2 = *a1;
    __asm__ volatile("" ::"r"(v2));
  }
  {
    v3 = *(__int64**)(a2 + 96);
    __asm__ volatile("" ::"r"(v3));
  }
  v17_.v19 = 0;
  v15_.v16 = (__typeof__(v15_.v16)){0};
  memset(v17_.v17, 0, sizeof(v17_.v17));
  v17_.v18 = (__typeof__(v17_.v18)){0};
  if (v2 >= 0x58) {
    v4 = 88;
  }
  else {
    v4 = v2;
  }
  v15_.v15 = (__typeof__(v15_.v15)){0};
  LODWORD(v15_.v15) = v4;
  if (v3 != nullptr) {
    {
      v5 = *v3;
      __asm__ volatile("" ::"r"(v5));
    }
    if (*v3 != 0) {
      v6 = a1;
      CudaDriverStub_107f90(v3[11]);
      CudaDriverRoutine_f1f00(v3, v14);
      CudaDriverStub_108070(v3[11]);
      a1 = v6;
      *((_QWORD*)&v15_.v15 + 1) = *(_QWORD*)(v5 + 64);
      LODWORD(v15_.v16) = 1;
      {
        v7 = *(_QWORD*)(v5 + 80);
        __asm__ volatile("" ::"r"(v7));
      }
      *(_OWORD*)v17_.v17 = v14[0];
      *((_QWORD*)&v15_.v16 + 1) = v7;
      v17_.v19 = v3[9];
      LOBYTE(v17_.v18) = *((_BYTE*)v3 + 125);
    LABEL_11:
      memcpy_plt((__int64)a1, (__int64)&v15_.v15, v4);
      return 0;
    }
  }
  else {
    {
      v9 = *(_QWORD*)(a2 + 104);
      __asm__ volatile("" ::"r"(v9));
    }
    if (v9 != 0) {
      {
        v10 = *(_DWORD**)(v9 + 104);
        __asm__ volatile("" ::"r"(v10));
      }
      v11 = *(_OWORD*)(v9 + 72);
      *((_QWORD*)&v15_.v15 + 1) = *(_QWORD*)(v9 + 128);
      LODWORD(v10) = *(_DWORD*)v10;
      LODWORD(v15_.v16) = 2;
      {
        v12 = *(unsigned int*)(v9 + 144);
        __asm__ volatile("" ::"r"(v12));
      }
      {
        v13 = *(_QWORD*)(v9 + 88);
        __asm__ volatile("" ::"r"(v13));
      }
      *(_OWORD*)&v17_.v17[1] = v11;
      DWORD2(v15_.v16) = (_DWORD)v10;
      v17_.v17[0] = v12;
      v17_.v17[3] = v13;
      goto LABEL_11;
    }
  }
  return 999;
}

void nvidia_233a60(__int64 a1, _QWORD* a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  unsigned __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  bool v7;
  unsigned __int64 v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  unsigned __int64 v14;
  unsigned int v15;
  unsigned int v16;
  int32x4_t* v17;
  float* v18;
  int32x4_t v19;
  int32x4_t v20;
  int32x4_t v21;
  unsigned __int64 v22;
  int32x4_t v23;
  int32x4_t v24;
  char v25;
  _DWORD v26[768];
  float32x4x3_t v27;
  float32x4x3_t v28;

  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  {
    v2 = *(_QWORD*)(a1 + 64);
    __asm__ volatile("" ::"r"(v2));
  }
  {
    v4 = *(unsigned int*)(v2 + 3732);
    __asm__ volatile("" ::"r"(v4));
  }
  if ((_DWORD)v4 != 0) {
    {
      v5 = *(_QWORD*)(a1 + 16104);
      __asm__ volatile("" ::"r"(v5));
    }
    v6 = v5 + 1048;
    if ((unsigned int)v4 < 0xC ||
        ((unsigned int)(v4 - 1) <= 0x55555554 ? (v7 = (v4 - 1) >> 32 == 0)
                                              : (v7 = false),
         !v7 || v6 < (unsigned __int64)&v26[3 * (unsigned int)v4] &&
                    (unsigned __int64)v26 < v5 + 4 * v4 + 1048)) {
      v8 = 0;
      v9 = 0;
      do {
      LABEL_11:
        {
          v10 = *(_DWORD*)(v6 + 4 * v8);
          __asm__ volatile("" ::"r"(v10));
        }
        v11 = v9 + 1;
        v12 = v9 + 2;
        ++v8;
        v10 += 5261064;
        v26[v9] = v10;
        v9 += 3;
        v26[v11] = v10 + 16;
        v26[v12] = v10 + 8;
      } while (v8 < v4);
      goto LABEL_12;
    }
    v8 = (unsigned int)v4 & 0xFFFFFFF8;
    v17 = (int32x4_t*)(v5 + 1064);
    v9 = 3 * (v4 & 0xFFFFFFF8);
    v18 = (float*)v26;
    v19 = vdupq_n_s32(0x504710u);
    v20 = vdupq_n_s32(0x504708u);
    v21 = vdupq_n_s32(0x504718u);
    v22 = v8;
    do {
      {
        v23 = v17[-1];
        __asm__ volatile("" ::"w"(v23));
      }
      {
        v24 = *v17;
        __asm__ volatile("" ::"w"(v24));
      }
      v22 -= 8LL;
      v17 += 2;
      v27.val[2] = vaddq_s32(v23, v19);
      v27.val[1] = vaddq_s32(v23, v21);
      v27.val[0] = vaddq_s32(v23, v20);
      v28.val[2] = vaddq_s32(v24, v19);
      v28.val[1] = vaddq_s32(v24, v21);
      v28.val[0] = vaddq_s32(v24, v20);
      vst3q_f32(v18, v27);
      vst3q_f32(v18 + 12, v28);
      v18 += 24;
    } while (v22 != 0);
    if (v8 != v4) {
      goto LABEL_11;
    }
  }
LABEL_12:
  CudaDriverRoutine_98340(a1),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  CudaDriverStub_10fdf0(),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if (v13 == 0 && *(_DWORD*)(v2 + 3732) != 0) {
    v14 = 0;
    v15 = 0;
    do {
      ++v14;
      *a2 = *((_QWORD*)&v25 + v15);
      a2[2] = *((_QWORD*)&v25 + v15 + 1);
      v16 = v15 + 2;
      v15 += 3;
      a2[6] = *((_QWORD*)&v25 + v16);
      a2 += 40;
    } while (v14 < *(unsigned int*)(v2 + 3732));
  }
}

__int64 nvidia_239be0(__int64 a1, __int64 a2, unsigned int a3, int a4,
                      __int64 a5, __int64 a6, int* a7)
{
  unsigned __int64 v12;
  void* v13;
  int v14;
  int v15;
  int v16;
  unsigned int v18;
  int v19;
  unsigned int v20;
  unsigned int v21;
  int v23;
  int v24;
  unsigned int v25;
  __int64 v26;
  unsigned int v27;
  unsigned __int64 v28;
  __int64 v29;

  v12 = a3;
  v13 = CudaDriverData_1422118;
  if ((*(unsigned __int8*)(a1 + 0x3FFF) |
       *((unsigned __int8*)&CudaDriverRoutine_743c +
         (_QWORD)CudaDriverData_1422118 + 2)) != 0) {
    v14 = 64;
  }
  else {
    v14 = 576;
  }
  if (a4 != 0) {
    v15 = a4 + 16;
  }
  else {
    v15 = 0;
  }
  v16 = v14 + v15;
  *(_DWORD*)(a6 + 28) = *(_DWORD*)(a5 + 28);
  *(_DWORD*)(a6 + 32) = *(_DWORD*)(a5 + 32);
  *a7 = 1;
  if (a2 != 0) {
    if (a3 <= (unsigned int)CudaDriverRoutine_bc3f0(a2)) {
      v12 = (unsigned int)CudaDriverRoutine_bc3f0(a2);
    }
    if (CudaDriverStub_b9300(a2) &&
        v12 <= *(unsigned int*)(*(_QWORD*)(a2 + 32) + 332LL)) {
      LODWORD(v12) = *(_DWORD*)(*(_QWORD*)(a2 + 32) + 332LL);
    }
    v13 = CudaDriverData_1422118;
    if (*(_BYTE*)(a1 + 1301) != 0) {
      {
        v18 = *(_DWORD*)(a2 + 72);
        __asm__ volatile("" ::"r"(v18));
      }
    LABEL_18:
      v20 = (v18 + 15) & 0xFFFFFFF0;
      v19 = 1;
      *(_DWORD*)(a6 + 28) = v20;
      goto LABEL_24;
    }
    {
      v18 = *(_DWORD*)(a2 + 72);
      __asm__ volatile("" ::"r"(v18));
    }
    if (*(_DWORD*)(a5 + 28) < v18) {
      goto LABEL_18;
    }
    if (*(_DWORD*)(a5 + 32) == ((v16 + (int)v12 + 15) & 0xFFFFFFF0)) {
    LABEL_23:
      v19 = 3;
    LABEL_24:
      *a7 = v19;
      {
        v21 = *(_DWORD*)(a6 + 28);
        __asm__ volatile("" ::"r"(v21));
      }
      if (v21 <= 0x80000) {
        goto LABEL_25;
      }
      return 999;
    }
  }
  else {
    if (*(_DWORD*)(a5 + 28) > 0x3FFu) {
      v19 = 2;
      *(_DWORD*)(a6 + 28) = 0;
      goto LABEL_24;
    }
    if (*(_DWORD*)(a5 + 32) == ((v16 + a3 + 15) & 0xFFFFFFF0)) {
      goto LABEL_23;
    }
  }
  {
    v21 = *(_DWORD*)(a6 + 28);
    __asm__ volatile("" ::"r"(v21));
  }
  if (v21 > 0x80000) {
    return 999;
  }
LABEL_25:
  if ((*(unsigned __int8*)(a1 + 0x3FFF) |
       *((unsigned __int8*)&CudaDriverRoutine_743c + (_QWORD)v13 + 2)) != 0) {
    v23 = 64;
  }
  else {
    v23 = 576;
  }
  v24 = v15 + v12 + v23 + 15;
  v25 = v24 & 0xFFFFFFF0;
  if ((v24 & 0xFFFFFFF0) <= 0x80000) {
    {
      v26 = *(_QWORD*)(a1 + 64);
      __asm__ volatile("" ::"r"(v26));
    }
    {
      v27 = (*(int*)(v26 + 3924) * (v25 + v21) + 511) & 0xFFFFFE00;
      __asm__ volatile("" ::"r"(v27));
    }
    {
      v28 = *(unsigned int*)(v26 + 3756) * (unsigned __int64)v27 + 0x7FFF;
      __asm__ volatile("" ::"r"(v28));
    }
    {
      v29 = *(unsigned int*)(a1 + 164);
      __asm__ volatile("" ::"r"(v29));
    }
    *(_DWORD*)(a6 + 32) = v25;
    *(_DWORD*)(a6 + 36) = v27;
    *(_DWORD*)(a6 + 20) =
        ((((v24 | 0xF) + v21) >> 4 << 9) + 33791) & 0xFFFFFE00;
    *(_DWORD*)(a6 + 24) = a4;
    *(_DWORD*)(a6 + 16) = v25 - v16;
    *(_QWORD*)(a6 + 8) = (v28 & 0xFFFFFFFFFFFF8000LL) * v29;
    return 0;
  }
  else {
    nvidia_ed630((__int64)"CUDA", 0,
                 (__int64)"Requested stack size exceeds limit\n");
    return 1;
  }
}

__int64 nvidia_241a00(__int64* a1, __int64 a2, __int64 a3, __int64 a4,
                      __int64 a5)
{
  __int64 v5;
  __int64 v6;
  __int64 v11;
  __int64 v12;
  __int16 v13;
  char v14;
  __int64 v15;
  _DWORD* v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 result;
  unsigned __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  struct {
    unsigned int v25;
    unsigned int v26;
  } v25_;
  _DWORD v27[2];
  struct {
    _QWORD v28[6];
    __int16 v29;
    char gap66_[6];
    __int64* v30;
    char gap80_[8];
    char v31;
    char gap89_[7];
    __int64 v32;
  } v28_;
  _DWORD* v33;

  {
    v5 = *(_QWORD*)(a5 + 8);
    __asm__ volatile("" ::"r"(v5));
  }
  {
    v6 = *(_QWORD*)(a5 + 136);
    __asm__ volatile("" ::"r"(v6));
  }
  v33 = (_DWORD*)*a1;
  {
    v11 = *(_QWORD*)(a3 + 32);
    __asm__ volatile("" ::"r"(v11));
  }
  {
    v12 = *(_QWORD*)(v11 + 24);
    __asm__ volatile("" ::"r"(v12));
  }
  {
    v13 = *(_WORD*)(*(_QWORD*)(v12 + 64) + 17281LL);
    __asm__ volatile("" ::"r"(v13));
  }
  {
    v14 = *(_BYTE*)(*(_QWORD*)(v12 + 16104) + 3096LL);
    __asm__ volatile("" ::"r"(v14));
  }
  if (*(_DWORD*)((char*)((_UNKNOWN**)0x8LL) +
                 *(_QWORD*)((char*)((_UNKNOWN*)0x58LL) +
                            (_QWORD)CudaDriverData_14225e0)) != 0) {
    v28_.v28[0] = *(_QWORD*)(v11 + 24);
    v28_.v28[1] = v11;
    v28_.v28[2] = a3;
    v28_.v28[3] = v5;
    {
      v15 = *(_QWORD*)(v6 + 8);
      __asm__ volatile("" ::"r"(v15));
    }
    v27[0] = 104;
    v28_.v31 = v14;
    v28_.v29 = v13;
    v28_.v32 = a5;
    v28_.v28[4] = v15;
    v28_.v30 = (__int64*)&v33;
    cuda_driver_20b420(0xBu, 2u, (__int64)v27);
  }
  if (CudaDriverStub_b9300(a3) && CudaDriverRoutine_bbdf0(a3)) {
    v16 = v33;
    {
      v17 = (unsigned __int64)(*(_QWORD*)(v6 + 8) + 512LL) >> 8;
      __asm__ volatile("" ::"r"(v17));
    }
    *((_QWORD*)v33 + 1) = 0x3200120AFLL;
    *(_DWORD*)v16 = 536944813;
    v16[1] = v17;
    v33 = v16 + 4;
  }
  if (*(_BYTE*)(*(_QWORD*)(v12 + 16104) + 3096LL) != 0 &&
      *(_BYTE*)(a5 + 197) == 0) {
    if (*(_QWORD*)(a3 + 832) != 0) {
      {
        v21 = *(_QWORD*)(v6 + 8);
        __asm__ volatile("" ::"r"(v21));
      }
      v27[0] = 541204678;
      v27[1] = v21 >> 40;
      LODWORD(v28_.v28[0]) = v21 >> 8;
      CudaDriverStub_640d0((__int64)v28_.v28 + 4, v5, 0x100u);
      v25_.v25 = 12;
      v25_.v26 = 64;
      result = CudaDriverRoutine_197480((__int64)v33, a2, 1u, &v25_.v26,
                                        (__int64)v27, 0x110u,
                                        (_QWORD*)(a3 + 832), &v25_.v25);
    }
    else {
      v22 = (__int64)v33;
      {
        v23 = *(_QWORD*)(v6 + 8);
        __asm__ volatile("" ::"r"(v23));
      }
      v24 = (__int64)(v33 + 3);
      *(_DWORD*)v33 = 541204678;
      *(_DWORD*)(v22 + 4) = v23 >> 40;
      *(_DWORD*)(v22 + 8) = v23 >> 8;
      CudaDriverStub_640d0(v24, v5, 0x100u);
      result = v22 + 268;
    }
  }
  else {
    v18 = (__int64)v33;
    {
      v19 = *(_QWORD*)(v6 + 8) >> 8;
      __asm__ volatile("" ::"r"(v19));
    }
    result = (__int64)(v33 + 4);
    *(_DWORD*)v33 = 536944813;
    *(_DWORD*)(v18 + 4) = v19;
    *(_QWORD*)(v18 + 8) = 0x3200120AFLL;
  }
  *a1 = result;
  return result;
}

void nvidia_245e20(__int64 a1, _QWORD* a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  unsigned __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  bool v7;
  unsigned __int64 v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  unsigned __int64 v14;
  unsigned int v15;
  unsigned int v16;
  int32x4_t* v17;
  float* v18;
  int32x4_t v19;
  int32x4_t v20;
  int32x4_t v21;
  unsigned __int64 v22;
  int32x4_t v23;
  int32x4_t v24;
  char v25;
  _DWORD v26[768];
  float32x4x3_t v27;
  float32x4x3_t v28;

  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  {
    v2 = *(_QWORD*)(a1 + 64);
    __asm__ volatile("" ::"r"(v2));
  }
  {
    v4 = *(unsigned int*)(v2 + 3732);
    __asm__ volatile("" ::"r"(v4));
  }
  if ((_DWORD)v4 != 0) {
    {
      v5 = *(_QWORD*)(a1 + 16104);
      __asm__ volatile("" ::"r"(v5));
    }
    v6 = v5 + 1048;
    if ((unsigned int)v4 < 0xC ||
        ((unsigned int)(v4 - 1) <= 0x55555554 ? (v7 = (v4 - 1) >> 32 == 0)
                                              : (v7 = false),
         !v7 || v6 < (unsigned __int64)&v26[3 * (unsigned int)v4] &&
                    (unsigned __int64)v26 < v5 + 4 * v4 + 1048)) {
      v8 = 0;
      v9 = 0;
      do {
      LABEL_11:
        {
          v10 = *(_DWORD*)(v6 + 4 * v8);
          __asm__ volatile("" ::"r"(v10));
        }
        v11 = v9 + 1;
        v12 = v9 + 2;
        ++v8;
        v10 += 5261064;
        v26[v9] = v10;
        v9 += 3;
        v26[v11] = v10 + 16;
        v26[v12] = v10 + 8;
      } while (v8 < v4);
      goto LABEL_12;
    }
    v8 = (unsigned int)v4 & 0xFFFFFFF8;
    v17 = (int32x4_t*)(v5 + 1064);
    v9 = 3 * (v4 & 0xFFFFFFF8);
    v18 = (float*)v26;
    v19 = vdupq_n_s32(0x504710u);
    v20 = vdupq_n_s32(0x504708u);
    v21 = vdupq_n_s32(0x504718u);
    v22 = v8;
    do {
      {
        v23 = v17[-1];
        __asm__ volatile("" ::"w"(v23));
      }
      {
        v24 = *v17;
        __asm__ volatile("" ::"w"(v24));
      }
      v22 -= 8LL;
      v17 += 2;
      v27.val[2] = vaddq_s32(v23, v19);
      v27.val[1] = vaddq_s32(v23, v21);
      v27.val[0] = vaddq_s32(v23, v20);
      v28.val[2] = vaddq_s32(v24, v19);
      v28.val[1] = vaddq_s32(v24, v21);
      v28.val[0] = vaddq_s32(v24, v20);
      vst3q_f32(v18, v27);
      vst3q_f32(v18 + 12, v28);
      v18 += 24;
    } while (v22 != 0);
    if (v8 != v4) {
      goto LABEL_11;
    }
  }
LABEL_12:
  CudaDriverRoutine_98340(a1),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  CudaDriverStub_10fdf0(),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if (v13 == 0 && *(_DWORD*)(v2 + 3732) != 0) {
    v14 = 0;
    v15 = 0;
    do {
      ++v14;
      *a2 = *((_QWORD*)&v25 + v15);
      a2[2] = *((_QWORD*)&v25 + v15 + 1);
      v16 = v15 + 2;
      v15 += 3;
      a2[6] = *((_QWORD*)&v25 + v16);
      a2 += 40;
    } while (v14 < *(unsigned int*)(v2 + 3732));
  }
}

#pragma GCC visibility pop
