#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};

extern char SdkData_10450b0;

extern _UNKNOWN* SdkData_10450b8;

extern int SdkData_ea8514;

extern char SdkData_ea8518;

__int64 SdkRoutine_699e40(_QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_7786e0(void);

__int64 SdkRoutine_778820(void);

__int64 SdkRoutine_7e62a0(_QWORD);

void __attribute__((noreturn)) SdkRoutine_84c1f0(_QWORD);

__int64 SdkRoutine_857cc0(_QWORD, _QWORD);

__int64 SdkRoutine_859cb0(void);

__int64 SdkRoutine_85cc20(_QWORD, _QWORD);

__int64 SdkRoutine_85d220(_QWORD, _QWORD);

__int64 SdkRoutine_86ee50(_QWORD);

__int64 SdkRoutine_87c790(_QWORD);

__int64 SdkRoutine_87c7a0(void);

__int64 SdkRoutine_87c800(_QWORD);

__int64 SdkRoutine_87c810(_QWORD, _QWORD);

__int64 SdkRoutine_87c840(_QWORD);

__int64 SdkRoutine_87c920(_QWORD);

__int64 SdkRoutine_87c9d0(_QWORD);

__int64 SdkRoutine_87c9e0(_QWORD);

__int64 SdkRoutine_87cc80(_QWORD);

__int64 SdkRoutine_87cca0(_QWORD);

__int64 SdkRoutine_87ccf0(_QWORD, _QWORD);

__int64 SdkHr_6684e0(_QWORD* a1, __int64 a2)
{
  a1[2] = 0;
  a1[3] = 0;
  *a1 = a2;
  a1[1] = 0;
  return 1;
}

__int64 SdkHr_6684f0(_QWORD* a1, __int64 a2)
{
  a1[2] = 0;
  a1[3] = 0;
  *a1 = a2;
  a1[1] = 0;
  return 1;
}

__int64 SdkHr_668ee0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                     unsigned int a5)
{
  return SdkRoutine_699e40(a1 + 11240, a3, a5);
}

double SdkHr_669680(__int64 a1, int a2)
{
  double result;

  *(_DWORD*)(a1 + 40) = a2;
  *(_QWORD*)(a1 + 44) = 0x100000001LL;
  *(_QWORD*)&result = 0x100000001LL;
  return result;
}

_DWORD* SdkHr_669690(_DWORD* result, int a2, int a3)
{
  result[10] = a2;
  result[11] = a3;
  result[12] = 1;
  return result;
}

_DWORD* SdkHr_6696a0(_DWORD* result, int a2, int a3, int a4)
{
  result[10] = a2;
  result[11] = a3;
  result[12] = a4;
  return result;
}

_DWORD* SdkHr_6696e0(_DWORD* result, int a2, int a3, int a4, int a5)
{
  result[16] = a2;
  result[17] = a3;
  result[18] = a4;
  result[19] = a5;
  return result;
}

__int64 SdkHr_669700(__int64 result, __int64 a2, __int64 a3)
{
  *(_QWORD*)(result + 16) = a2;
  *(_QWORD*)(result + 24) = a3;
  return result;
}

_QWORD* SdkHr_669f00(_QWORD* result)
{
  *result = 0;
  result[1] = 0;
  return result;
}

__int64* SdkHr_669f60(__int64* result, int a2)
{
  __int64 v2;

  v2 = *result;
  *((_DWORD*)result + 2) = a2;
  *result = v2 | 0x400000000000000LL;
  return result;
}

bool SdkHr_66a000(__int64 a1, _DWORD* a2)
{
  *a2 = *(_DWORD*)(a1 + 8);
  return (*(_QWORD*)a1 & 0x400000000000000LL) != 0;
}

__int64 SdkHr_66b2d0(__int64 a1) { return *(__int16*)(a1 + 40) & 0xFFFF7FFF; }

__int64 SdkHr_66b2e0(__int64 a1)
{
  return (__int64)(int)*(_QWORD*)(a1 + 40) >> 25;
}

__int64 SdkHr_66b320(__int64 a1)
{
  return (__int64)(*(_QWORD*)(a1 + 24) << 8) >> 56;
}

__int64 SdkHr_66b330(__int64 a1)
{
  return (__int64)(*(_QWORD*)(a1 + 40) << 39) >> 55;
}

__int64 SdkHr_66b340(__int64 a1) { return (unsigned int)*(char*)(a1 + 31); }

__int64 SdkHr_66b390(__int64 a1)
{
  return (__int64)(*(_QWORD*)(a1 + 40) << 18) >> 62;
}

__int64 SdkHr_66c0c0(__int64 a1)
{
  return (__int64)(*(_QWORD*)(a1 + 24) << 16) >> 16;
}

__int64 SdkHr_66c0d0(__int64 a1) { return *(unsigned int*)(a1 + 90); }

__int64 SdkHr_66c290(__int64 result, int a2, __int64 a3)
{
  *(_DWORD*)(result + 16) = a2;
  *(_QWORD*)(result + 56) = a3;
  return result;
}

__int64 SdkHr_66c2a0(__int64 result, int a2)
{
  *(_DWORD*)(result + 32) = a2 - 1;
  return result;
}

__int64 SdkHr_66c300(__int64 result, float a2, float a3)
{
  *(float*)(result + 104) = a2;
  *(float*)(result + 108) = a3;
  return result;
}

__int64 SdkHr_66c350(__int64 a1)
{
  return (unsigned int)(*(_DWORD*)(a1 + 32) + 1);
}

float SdkHr_66c400(__int64 a1, _DWORD* a2, float* a3)
{
  float result;

  *a2 = *(_DWORD*)(a1 + 104);
  result = *(float*)(a1 + 108);
  *a3 = result;
  return result;
}

float SdkHr_66c840(__int64 a1, _DWORD* a2, float* a3)
{
  float result;

  *a2 = *(_DWORD*)(a1 + 112);
  result = *(float*)(a1 + 116);
  *a3 = result;
  return result;
}

__int64 SdkHr_66f540(__int64 result, _DWORD* a2)
{
  *a2 = *(_DWORD*)(result + 112);
  a2[1] = *(_DWORD*)(result + 260);
  return result;
}

__int64 SdkHr_670330(__int64 a1, __int64 a2)
{
  return (*(__int64 (**)(__int64))(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 7688LL) +
                                   120LL))(a2);
}

__int64 SdkHr_672c10(__int64 a1, __int64 a2, __int64 a3)
{
  return (*(__int64 (**)(_QWORD, __int64, __int64, __int64))(
      *(_QWORD*)(a1 + 7688) + 264LL))(*(_QWORD*)(a1 + 7696), a2, a3, -1);
}

__int64 SdkHr_672c40(__int64 result, int a2, __int64 a3)
{
  *(_QWORD*)(result + 8LL * a2 + 6000) = a3;
  return result;
}

__int64 SdkHr_672c50(__int64 result, int a2, __int64 a3)
{
  *(_QWORD*)(result + 8LL * a2 + 6320) = a3;
  return result;
}

__int64 SdkHr_672c60(__int64 result, int a2, __int64 a3)
{
  *(_QWORD*)(result + 8LL * a2 + 7344) = a3;
  return result;
}

__int64 SdkHr_672c70(__int64 result, int a2, __int64 a3)
{
  *(_QWORD*)(result + 8LL * a2 + 6256) = a3;
  return result;
}

__int64 SdkHr_672ce0(__int64 result, int a2, __int64 a3)
{
  *(_QWORD*)(result + 8LL * a2 + 7600) = a3;
  return result;
}

_QWORD* SdkHr_672ec0(_QWORD* result, int a2)
{
  __int64 v2;
  __int64 v3;

  v2 = result[15];
  v3 = result[10];
  result[16] = v2;
  *(_QWORD*)(v3 + 8LL * a2) = v2;
  return result;
}

unsigned __int64 SdkHr_673630(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  return ((a3 << 41) + 0x1E0000000000LL) & 0xFFFFE00000000000LL | (a2 >> 4);
}

__int64 SdkHr_688370(__int64 result)
{
  ++*(_DWORD*)(result + 12);
  return result;
}

__int64 SdkHr_69bff0(__int64 result)
{
  if (result != 0) {
    return *(_QWORD*)(result + 7272);
  }
  return result;
}

__int64 SdkHr_69c000(__int64 result)
{
  if (result != 0) {
    return *(_QWORD*)(result + 7888);
  }
  return result;
}

_QWORD* SdkHr_69cf30(_QWORD* result)
{
  *(_QWORD*)(*result + 16LL) = result[1];
  return result;
}

__int64 SdkHr_69d470(__int64 a1)
{
  *(_DWORD*)(a1 + 24) = 1;
  return 0;
}

__int64 SdkHr_69d480(__int64 a1)
{
  *(_QWORD*)(a1 + 24) = *(_QWORD*)(a1 + 16);
  return 0;
}

_DWORD* SdkHr_69dfe0(_DWORD* result, _DWORD* a2)
{
  *result = 231;
  *a2 = 40;
  return result;
}

__int64 SdkHr_69e5d0(__int64 result, _QWORD* a2, _DWORD* a3)
{
  *a2 = *(_QWORD*)(result + 8024);
  *a3 = *(_QWORD*)(result + 8056);
  return result;
}

__int64 SdkHr_69efd0() { return (unsigned __int8)SdkData_10450b0; }

__int64 SdkHr_69efe0()
{
  SdkData_10450b0 = 1;
  return 1;
}

void* SdkHr_69f0a0() { return SdkData_10450b8; }

void* SdkHr_69f0b0(void* result)
{
  SdkData_10450b8 = result;
  return result;
}

__int64 SdkHr_69fab0(__int64 a1)
{
  *(_DWORD*)(a1 + 4) = 0;
  return 0;
}

__int64 SdkHr_6a0890() { return (unsigned __int8)SdkData_ea8518; }

__int64 SdkHr_6a0b10() { return (unsigned int)SdkData_ea8514; }

__int64 SdkHr_6a0b20(__int64 result)
{
  if (result != 0) {
    return *(_QWORD*)(result + 16);
  }
  return result;
}

__int64 SdkHr_6a0be0(__int64 a1)
{
  if (a1 != 0) {
    return a1 + 11240;
  }
  else {
    return 0;
  }
}

__int64 SdkHr_6a1f60(__int64 a1)
{
  return *(_QWORD*)(a1 + 10784) + *(unsigned int*)(a1 + 11040);
}

__int64 SdkHr_6a2170(__int64 result, _QWORD* a2, _DWORD* a3)
{
  *a2 = *(_QWORD*)(result + 5888);
  *a3 = *(_DWORD*)(result + 5896);
  return result;
}

__int64 SdkHr_6a3990(__int64 a1, char a2)
{
  unsigned int v2;

  v2 = *(unsigned __int8*)(a1 + 11449);
  *(_BYTE*)(a1 + 11449) = a2;
  return v2;
}

__int64 SdkHr_6a4600(__int64 result, _QWORD* a2)
{
  *a2 = result + 304;
  return result;
}

__int64 SdkHr_6a4610(__int64 result, _QWORD* a2)
{
  *a2 = result + 11168;
  return result;
}

__int64 SdkHr_6a4790(__int64 result, __int64 a2, _QWORD* a3)
{
  if (a3 != nullptr) {
    *a3 = *(_QWORD*)(result + 368);
  }
  *(_QWORD*)(result + 368) = a2;
  return result;
}

__int64 SdkHr_6a52b0(unsigned int a1)
{
  if ((a1 & 0x100) != 0) {
    return 1;
  }
  else {
    return (a1 >> 8) & 2;
  }
}

__int64 SdkHr_6a52d0(__int64 result, unsigned int a2)
{
  atomic_exchange((atomic_uint* volatile)(result + 7584), a2);
  return result;
}

__int64 SdkHr_6a6f70(__int64 result, _DWORD* a2)
{
  *a2 = *(_DWORD*)(result + 20);
  return result;
}

__int64 SdkHr_6a7c90(__int64 result)
{
  if (result != 0) {
    return *(unsigned int*)(result + 356);
  }
  return result;
}

__int64 SdkHr_6a7ca0(__int64 result)
{
  if (result != 0) {
    return *(unsigned int*)(result + 356);
  }
  return result;
}

__int64 SdkHr_6a8ef0(__int64 result)
{
  if (result != 0) {
    return *(_QWORD*)(result + 7920);
  }
  return result;
}

__int64 SdkHr_778690(__int64 a1)
{
  *(_QWORD*)(a1 + 72) = SdkRoutine_778820;
  return SdkRoutine_778820();
}

__int64 SdkHr_7786a0(__int64 a1)
{
  *(_QWORD*)(a1 + 64) = SdkRoutine_7786e0;
  return SdkRoutine_7786e0();
}

__int64 SdkHr_7bc520()
{
  __int64 v0;
  __int64 v1;
  _QWORD* v2;

  v0 = SdkRoutine_859cb0();
  if (v0 != 0) {
    v2 = (_QWORD*)v0;
    SdkRoutine_85d220(0, 1);
    *v2 = 0;
    return 0;
  }
  else {
    *(_DWORD*)SdkRoutine_857cc0(0, v1) = 22;
    return 0xFFFFFFFFLL;
  }
}

__int64 SdkHr_7d3320(__int64* a1, __int64* a2)
{
  __int64 v2;

  v2 = *a2;
  *a1 = *a2;
  return SdkRoutine_87c800(v2);
}

__int64 SdkHr_7e631c(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned int* v11;
  __int64 v12;
  __int64 v13;
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
  unsigned int* v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  _QWORD v34[8];
  __int64 v35;
  _QWORD v36[7];
  __int64 v37;
  _QWORD v38[3];
  __int64 v39;

  SdkRoutine_87c920(v1);
  v6 = SdkRoutine_87c790(a1);
  v38[0] = v4;
  v38[1] = v7;
  v38[2] = a1;
  v39 = v1;
  v8 = v6;
  SdkRoutine_87c9d0(v6 + 24);
  if ((*(_BYTE*)(v8 + 40) & 1) != 0 ||
      (v9 = *(_QWORD*)(v8 + 16), v37 = 0, v10 = SdkRoutine_87c840(&v37),
       v9 != 0)) {
    v15 = SdkRoutine_7e62a0(2);
    SdkRoutine_87c9e0(v8 + 24);
    v16 = SdkRoutine_87c790(v15);
    v36[0] = v38;
    v36[1] = v17;
    v36[2] = v3;
    v36[3] = v2;
    v36[4] = v15;
    v36[5] = v8;
    v18 = v16;
    v20 = v19;
    SdkRoutine_87c9d0(v16 + 24);
    if ((*(_BYTE*)(v18 + 40) & 1) != 0 ||
        (v2 = v18 + 16, v3 = *(_QWORD*)(v18 + 16), v35 = 0,
         SdkRoutine_87c840(&v35), v3 != 0)) {
      v21 = SdkRoutine_7e62a0(2);
      SdkRoutine_87c9e0(v18 + 24);
      v22 = SdkRoutine_87c790(v21);
      v34[1] = v36;
      v34[2] = v23;
      v34[3] = v3;
      v34[4] = v2;
      v34[5] = v21;
      v34[6] = v18;
      v24 = v22;
      v26 = v25;
      SdkRoutine_87c9d0(v22 + 24);
      if ((*(_BYTE*)(v24 + 40) & 1) != 0 ||
          (v27 = *(_QWORD*)(v24 + 16), v34[0] = 0, SdkRoutine_87c840(v34),
           v27 != 0)) {
        v32 = SdkRoutine_7e62a0(2);
        SdkRoutine_87c9e0(v24 + 24);
        v33 = SdkRoutine_87c790(v32);
        SdkRoutine_87c9d0(v33 + 24);
        *(_DWORD*)(v33 + 40) |= 4u;
        SdkRoutine_87cc80(v33 + 32);
        return SdkRoutine_87c9e0(v33 + 24);
      }
      else {
        v28 = SdkRoutine_87c810(v24 + 16, v26);
        v29 = (unsigned int*)SdkRoutine_87cca0(v28);
        v31 = SdkRoutine_85cc20(*v29, v30);
        SdkRoutine_87ccf0(v31, v24);
        return SdkRoutine_87c9e0(v24 + 24);
      }
    }
    else {
      SdkRoutine_87c810(v18 + 16, v20);
      *(_DWORD*)(v18 + 40) |= 4u;
      SdkRoutine_87cc80(v18 + 32);
      return SdkRoutine_87c9e0(v18 + 24);
    }
  }
  else {
    *(_DWORD*)(v8 + 40) |= 1u;
    v11 = (unsigned int*)SdkRoutine_87cca0(v10);
    v13 = SdkRoutine_85cc20(*v11, v12);
    SdkRoutine_87ccf0(v13, v8);
    return SdkRoutine_87c9e0(v8 + 24);
  }
}

double SdkHr_7e81c0() { return 0.0; }

__int64 SdkHr_7e896c(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;

  SdkRoutine_87c920(v1);
  v3 = SdkRoutine_87c790(a1);
  *(_QWORD*)(v3 + 40) = v4;
  *(_QWORD*)(v3 + 56) = 0;
  *(_QWORD*)(v3 + 64) = 0;
  *(_DWORD*)(v3 + 8) = 4098;
  *(_QWORD*)(v3 + 72) = 0;
  *(_QWORD*)(v3 + 80) = 0;
  *(_QWORD*)(v3 + 88) = 0;
  *(_QWORD*)(v3 + 96) = 0;
  *(_QWORD*)(v3 + 104) = 0;
  *(_QWORD*)(v3 + 112) = 0;
  *(_QWORD*)(v3 + 120) = 0;
  *(_QWORD*)(v3 + 128) = 0;
  *(_DWORD*)(v3 + 32) = v4 == 0;
  *(_DWORD*)(v3 + 36) = 0;
  *(_QWORD*)(v3 + 16) = 6;
  *(_QWORD*)(v3 + 24) = 0;
  return SdkRoutine_86ee50(v3 + 48);
}

void __attribute__((noreturn)) SdkHr_84b34c()
{
  SdkRoutine_87c7a0();
  SdkRoutine_84c1f0(
      "libc++abi: terminate_handler unexpectedly threw an exception");
}

#pragma GCC visibility pop
