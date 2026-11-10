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

void __attribute__((noreturn)) SdkRoutine_7cd620(void);

__int64 SdkRoutine_7e62a0(_QWORD);

__int64 SdkRoutine_7ed750(double);

__int64 SdkRoutine_7f2dd0(double);

__int64 SdkRoutine_8087a0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_810f00(int, int, int, int, int, void*);

__int64 SdkRoutine_812100(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_82dd20(_QWORD);

__int64 SdkRoutine_830290(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_830970(_QWORD);

void __attribute__((noreturn)) SdkRoutine_84c1f0(_QWORD);

__int64 SdkRoutine_857220(_QWORD, _QWORD);

__int64 SdkRoutine_857cc0(_QWORD, _QWORD);

__int64 SdkRoutine_859cb0(void);

__int64 SdkRoutine_85cc20(_QWORD, _QWORD);

__int64 SdkRoutine_85d220(_QWORD, _QWORD);

__int64 SdkRoutine_86ee50(_QWORD);

__int64 SdkRoutine_86ee60(_QWORD);

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

__int64 SdkRoutine_87cd70(_QWORD, _QWORD);

__int64 SdkRoutine_87cd80(_QWORD, _QWORD);

struct PseudoSret SdkRoutine_87cd90(_QWORD);

__int64 SdkRoutine_87d080(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD);

__int64 SdkRoutine_87d0a0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD);

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

void __attribute__((noreturn)) SdkHr_7ddedc() { SdkRoutine_7cd620(); }

void __attribute__((noreturn)) SdkHr_7e01ac() { SdkRoutine_7cd620(); }

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

__int64 SdkHr_7ed730(float a1) { return SdkRoutine_7ed750(a1); }

__int64 SdkHr_7f2db0(float a1) { return SdkRoutine_7f2dd0(a1); }

__int64 SdkHr_7f3b6c(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                     __int64 a6, __int64 a7, __int64 a8, __int64 a9,
                     __int64 a10, char a11)
{
  __int64 v11;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  _BYTE* v25;
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
  _BYTE* v41;
  __int64 v43;
  __int64 v44;
  char v45[8];
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;

  SdkRoutine_86ee60(&a11);
  v13 = SdkRoutine_87c790(a1);
  v47 = v11;
  v48 = v15;
  v49 = a1;
  v16 = (__int64*)(v14 + 64);
  v17 = v14;
  v18 = v13;
  if ((*(_BYTE*)(v14 + 64) & 1) != 0) {
    v19 = *(_QWORD*)(v14 + 80);
  }
  else {
    v19 = v14 + 65;
  }
  v20 = *(_QWORD*)(v14 + 16);
  if (v20 != 0) {
    v21 = v20 - v19;
    v22 = *(_QWORD*)(v14 + 24) - v19;
    v23 = *(_QWORD*)(v14 + 32) - v19;
    v24 = *(_QWORD*)(v14 + 40);
    v25 = (_BYTE*)(v14 + 65);
    if (v24 != 0) {
    LABEL_6:
      v26 = v24 - v19;
      v27 = *(_QWORD*)(v14 + 48) - v19;
      v28 = *(_QWORD*)(v14 + 56) - v19;
      goto LABEL_9;
    }
  }
  else {
    v23 = -1;
    v22 = -1;
    v21 = -1;
    v24 = *(_QWORD*)(v14 + 40);
    v25 = (_BYTE*)(v14 + 65);
    if (v24 != 0) {
      goto LABEL_6;
    }
  }
  v26 = -1;
  v27 = -1;
  v28 = -1;
LABEL_9:
  v29 = *(_QWORD*)(v14 + 88);
  v30 = v29 - v19;
  if (v29 != 0) {
    v31 = v30;
  }
  else {
    v31 = -1;
  }
  if ((*(_BYTE*)(v13 + 64) & 1) != 0) {
    v43 = v22;
    v44 = v31;
    SdkRoutine_857220(*(_QWORD*)(v13 + 80),
                      *(_QWORD*)(v13 + 64) & 0xFFFFFFFFFFFFFFFELL);
    v22 = v43;
    v31 = v44;
  }
  v32 = *v16;
  v33 = v16[2];
  *(_QWORD*)(v18 + 72) = v16[1];
  *(_QWORD*)(v18 + 80) = v33;
  *(_QWORD*)(v18 + 64) = v32;
  *(_BYTE*)v16 = 0;
  *v25 = 0;
  if ((*(_BYTE*)(v18 + 64) & 1) != 0) {
    v34 = *(_QWORD*)(v18 + 80);
  }
  else {
    v34 = v18 + 65;
  }
  v35 = v34 + v21;
  v36 = v34 + v22;
  v37 = v34 + v23;
  if (v21 == -1) {
    v35 = 0;
    v36 = 0;
    v37 = 0;
  }
  *(_QWORD*)(v18 + 16) = v35;
  *(_QWORD*)(v18 + 24) = v36;
  *(_QWORD*)(v18 + 32) = v37;
  if (v26 == -1) {
    v38 = 0;
    v39 = 0;
    *(_QWORD*)(v18 + 48) = 0;
  }
  else {
    v38 = v34 + v26;
    v39 = v34 + v28;
    *(_QWORD*)(v18 + 48) = v34 + v26 + v27;
  }
  v40 = v34 + v31;
  *(_QWORD*)(v18 + 40) = v38;
  *(_QWORD*)(v18 + 56) = v39;
  if (v31 == -1) {
    v40 = 0;
  }
  *(_QWORD*)(v18 + 88) = v40;
  *(_DWORD*)(v18 + 96) = *(_DWORD*)(v17 + 96);
  if ((*(_BYTE*)(v17 + 64) & 1) != 0) {
    v41 = *(_BYTE**)(v17 + 80);
  }
  else {
    v41 = v25;
  }
  *(_QWORD*)(v17 + 16) = v41;
  *(_QWORD*)(v17 + 24) = v41;
  *(_QWORD*)(v17 + 32) = v41;
  *(_QWORD*)(v17 + 40) = v41;
  *(_QWORD*)(v17 + 48) = v41;
  *(_QWORD*)(v17 + 56) = v41;
  *(_QWORD*)(v17 + 88) = v41;
  SdkRoutine_87cd70(v45, v17 + 8);
  (*(void (**)(__int64, char*))(*(_QWORD*)v18 + 16LL))(v18, v45);
  SdkRoutine_87cd70(&v46, v18 + 8);
  SdkRoutine_87cd80(v18 + 8, v45);
  SdkRoutine_86ee60(&v46);
  SdkRoutine_86ee60(v45);
  return v18;
}

__int64 SdkHr_802c2c(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                     __int64 a6, __int64 a7, __int64 a8, __int64 a9)
{
  __int64 v9;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  unsigned int v15;
  unsigned int v16;
  char* v17;
  __int64 v18;
  int v19;
  int v20;
  int v21;
  unsigned int v22;
  __int64 v23;
  __int64 v24;
  char v25;
  __int64 v26;
  __int64 v27;
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
  char* v40;
  __int64 v42;
  __int64 v43;
  int v44;
  _BYTE v45[45];
  char v46;
  unsigned __int8 v47;
  _BYTE v48[6];
  _QWORD v49[8];

  SdkRoutine_86ee60(&a9);
  SdkRoutine_87c790(a1);
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
  if (v11 < 0) {
    if (v21 == 8) {
      goto LABEL_15;
    }
    v24 = v11;
    if (v21 != 64) {
      v24 = -v11;
      v17 = (char*)&v47;
      v46 = 45;
    }
  }
  else {
    if ((v14 & 0x800) == 0 || v21 == 8) {
      goto LABEL_15;
    }
    v24 = v11;
    if (v21 != 64) {
      v17 = (char*)&v47;
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
  v26 = SdkRoutine_830290(v17, v49, v24, v23);
  v27 = v26;
  if ((~v14 & 0x4008) == 0) {
    v28 = (unsigned __int64)&v17[-v26];
    if (v17 != (char*)v26) {
      for (i = ((_BYTE)v26 - (_BYTE)v17) & 7; i != 0; *v17++ = v30) {
        v30 = (unsigned __int8)*v17;
        if ((unsigned int)(v30 - 97) < 6) {
          LOBYTE(v30) = v30 - 32;
        }
        --i;
      }
      if (v28 <= 0xFFFFFFFFFFFFFFF8LL) {
        do {
          v31 = (unsigned __int8)*v17;
          if ((unsigned int)(v31 - 97) < 6) {
            LOBYTE(v31) = v31 - 32;
          }
          *v17 = v31;
          v32 = (unsigned __int8)v17[1];
          if ((unsigned int)(v32 - 97) < 6) {
            LOBYTE(v32) = v32 - 32;
          }
          v17[1] = v32;
          v33 = (unsigned __int8)v17[2];
          if ((unsigned int)(v33 - 97) < 6) {
            LOBYTE(v33) = v33 - 32;
          }
          v17[2] = v33;
          v34 = (unsigned __int8)v17[3];
          if ((unsigned int)(v34 - 97) < 6) {
            LOBYTE(v34) = v34 - 32;
          }
          v17[3] = v34;
          v35 = (unsigned __int8)v17[4];
          if ((unsigned int)(v35 - 97) < 6) {
            LOBYTE(v35) = v35 - 32;
          }
          v17[4] = v35;
          v36 = (unsigned __int8)v17[5];
          if ((unsigned int)(v36 - 97) < 6) {
            LOBYTE(v36) = v36 - 32;
          }
          v17[5] = v36;
          v37 = (unsigned __int8)v17[6];
          if ((unsigned int)(v37 - 97) < 6) {
            LOBYTE(v37) = v37 - 32;
          }
          v17[6] = v37;
          v38 = (unsigned __int8)v17[7];
          if ((unsigned int)(v38 - 97) < 6) {
            LOBYTE(v38) = v38 - 32;
          }
          v17[7] = v38;
          v17 += 8;
        } while (v17 != (char*)v26);
      }
    }
  }
  v39 = *(_DWORD*)(v18 + 8) & 0xB0;
  if (v39 == 32) {
    v40 = (char*)v26;
    goto LABEL_60;
  }
  if (v39 != 16) {
  LABEL_59:
    v40 = &v46;
    goto LABEL_60;
  }
  if (v46 != 45 && v46 != 43) {
    if (v26 - (__int64)&v46 >= 2 && v46 == 48 && (v47 | 0x20) == 0x78) {
      v40 = v48;
      goto LABEL_60;
    }
    goto LABEL_59;
  }
  v40 = (char*)&v47;
LABEL_60:
  *(struct PseudoSret*)(&v42) = SdkRoutine_87cd90(v18);
  SdkRoutine_87d080(&v46, v40, v27, v45, &v44, &v43, &v42);
  SdkRoutine_86ee60(&v42);
  return SdkRoutine_810f00(v20, (int)v45, v44, v43, v18, (void*)v16);
}

__int64 SdkHr_802f6c(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                     __int64 a6, __int64 a7, __int64 a8, __int64 a9)
{
  __int64 v9;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  unsigned int v15;
  unsigned int v16;
  char* v17;
  __int64 v18;
  int v19;
  int v20;
  int v21;
  unsigned int v22;
  __int64 v23;
  char v24;
  __int64 v25;
  __int64 v26;
  __int64 v28;
  char* v29;
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
  char* v40;
  __int64 v42;
  __int64 v43;
  int v44;
  _BYTE v45[45];
  char v46;
  unsigned __int8 v47;
  _BYTE v48[22];
  _QWORD v49[8];

  SdkRoutine_86ee60(&a9);
  SdkRoutine_87c790(a1);
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
      v17 = (char*)&v47;
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
  v25 = SdkRoutine_830290(v17, v49, v11, v23);
  v26 = v25;
  if ((~v14 & 0x4008) == 0 && v17 != (char*)v25) {
    v28 = ((_BYTE)v25 - (_BYTE)v17) & 7;
    v29 = v17;
    if ((((_BYTE)v25 - (_BYTE)v17) & 7) != 0) {
      v29 = v17;
      do {
        v30 = (unsigned __int8)*v29;
        if ((unsigned int)(v30 - 97) < 6) {
          LOBYTE(v30) = v30 - 32;
        }
        --v28;
        *v29++ = v30;
      } while (v28 != 0);
    }
    if ((unsigned __int64)&v17[-v25] <= 0xFFFFFFFFFFFFFFF8LL) {
      do {
        v31 = (unsigned __int8)*v29;
        if ((unsigned int)(v31 - 97) < 6) {
          LOBYTE(v31) = v31 - 32;
        }
        *v29 = v31;
        v32 = (unsigned __int8)v29[1];
        if ((unsigned int)(v32 - 97) < 6) {
          LOBYTE(v32) = v32 - 32;
        }
        v29[1] = v32;
        v33 = (unsigned __int8)v29[2];
        if ((unsigned int)(v33 - 97) < 6) {
          LOBYTE(v33) = v33 - 32;
        }
        v29[2] = v33;
        v34 = (unsigned __int8)v29[3];
        if ((unsigned int)(v34 - 97) < 6) {
          LOBYTE(v34) = v34 - 32;
        }
        v29[3] = v34;
        v35 = (unsigned __int8)v29[4];
        if ((unsigned int)(v35 - 97) < 6) {
          LOBYTE(v35) = v35 - 32;
        }
        v29[4] = v35;
        v36 = (unsigned __int8)v29[5];
        if ((unsigned int)(v36 - 97) < 6) {
          LOBYTE(v36) = v36 - 32;
        }
        v29[5] = v36;
        v37 = (unsigned __int8)v29[6];
        if ((unsigned int)(v37 - 97) < 6) {
          LOBYTE(v37) = v37 - 32;
        }
        v29[6] = v37;
        v38 = (unsigned __int8)v29[7];
        if ((unsigned int)(v38 - 97) < 6) {
          LOBYTE(v38) = v38 - 32;
        }
        v29[7] = v38;
        v29 += 8;
      } while (v29 != (char*)v25);
    }
  }
  v39 = *(_DWORD*)(v18 + 8) & 0xB0;
  if (v39 == 32) {
    v40 = (char*)v25;
    goto LABEL_54;
  }
  if (v39 != 16) {
  LABEL_53:
    v40 = &v46;
    goto LABEL_54;
  }
  if (v46 != 45 && v46 != 43) {
    if (v25 - (__int64)&v46 >= 2 && v46 == 48 && (v47 | 0x20) == 0x78) {
      v40 = v48;
      goto LABEL_54;
    }
    goto LABEL_53;
  }
  v40 = (char*)&v47;
LABEL_54:
  *(struct PseudoSret*)(&v42) = SdkRoutine_87cd90(v18);
  SdkRoutine_87d080(&v46, v40, v26, v45, &v44, &v43, &v42);
  SdkRoutine_86ee60(&v42);
  return SdkRoutine_810f00(v20, (int)v45, v44, v43, v18, (void*)v16);
}

__int64 SdkHr_80447c(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                     __int64 a6, __int64 a7, __int64 a8, __int64 a9)
{
  __int64 v9;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  unsigned int v15;
  unsigned int v16;
  char* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  int v21;
  unsigned int v22;
  __int64 v23;
  __int64 v24;
  char v25;
  __int64 v26;
  __int64 v27;
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
  char* v40;
  __int64 v42;
  __int64 v43;
  _BYTE v44[180];
  char v45;
  unsigned __int8 v46;
  _BYTE v47[6];
  _QWORD v48[2];
  _QWORD v49[7];

  SdkRoutine_86ee60(&a9);
  SdkRoutine_87c790(a1);
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
  if (v11 < 0) {
    if (v21 == 8) {
      goto LABEL_15;
    }
    v24 = v11;
    if (v21 != 64) {
      v24 = -v11;
      v17 = (char*)&v46;
      v45 = 45;
    }
  }
  else {
    if ((v14 & 0x800) == 0 || v21 == 8) {
      goto LABEL_15;
    }
    v24 = v11;
    if (v21 != 64) {
      v17 = (char*)&v46;
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
  v26 = SdkRoutine_830290(v17, v48, v24, v23);
  v27 = v26;
  if ((~v14 & 0x4008) == 0) {
    v28 = (unsigned __int64)&v17[-v26];
    if (v17 != (char*)v26) {
      for (i = ((_BYTE)v26 - (_BYTE)v17) & 7; i != 0; *v17++ = v30) {
        v30 = (unsigned __int8)*v17;
        if ((unsigned int)(v30 - 97) < 6) {
          LOBYTE(v30) = v30 - 32;
        }
        --i;
      }
      if (v28 <= 0xFFFFFFFFFFFFFFF8LL) {
        do {
          v31 = (unsigned __int8)*v17;
          if ((unsigned int)(v31 - 97) < 6) {
            LOBYTE(v31) = v31 - 32;
          }
          *v17 = v31;
          v32 = (unsigned __int8)v17[1];
          if ((unsigned int)(v32 - 97) < 6) {
            LOBYTE(v32) = v32 - 32;
          }
          v17[1] = v32;
          v33 = (unsigned __int8)v17[2];
          if ((unsigned int)(v33 - 97) < 6) {
            LOBYTE(v33) = v33 - 32;
          }
          v17[2] = v33;
          v34 = (unsigned __int8)v17[3];
          if ((unsigned int)(v34 - 97) < 6) {
            LOBYTE(v34) = v34 - 32;
          }
          v17[3] = v34;
          v35 = (unsigned __int8)v17[4];
          if ((unsigned int)(v35 - 97) < 6) {
            LOBYTE(v35) = v35 - 32;
          }
          v17[4] = v35;
          v36 = (unsigned __int8)v17[5];
          if ((unsigned int)(v36 - 97) < 6) {
            LOBYTE(v36) = v36 - 32;
          }
          v17[5] = v36;
          v37 = (unsigned __int8)v17[6];
          if ((unsigned int)(v37 - 97) < 6) {
            LOBYTE(v37) = v37 - 32;
          }
          v17[6] = v37;
          v38 = (unsigned __int8)v17[7];
          if ((unsigned int)(v38 - 97) < 6) {
            LOBYTE(v38) = v38 - 32;
          }
          v17[7] = v38;
          v17 += 8;
        } while (v17 != (char*)v26);
      }
    }
  }
  v39 = *(_DWORD*)(v18 + 8) & 0xB0;
  if (v39 == 32) {
    v40 = (char*)v26;
    goto LABEL_60;
  }
  if (v39 != 16) {
  LABEL_59:
    v40 = &v45;
    goto LABEL_60;
  }
  if (v45 != 45 && v45 != 43) {
    if (v26 - (__int64)&v45 >= 2 && v45 == 48 && (v46 | 0x20) == 0x78) {
      v40 = v47;
      goto LABEL_60;
    }
    goto LABEL_59;
  }
  v40 = (char*)&v46;
LABEL_60:
  *(struct PseudoSret*)(&v42) = SdkRoutine_87cd90(v18);
  SdkRoutine_87d0a0(&v45, v40, v27, v44, v49, &v43, &v42);
  SdkRoutine_86ee60(&v42);
  return SdkRoutine_812100(v20, v44, v49[0], v43, v18, v16);
}

__int64 SdkHr_8047bc(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                     __int64 a6, __int64 a7, __int64 a8, __int64 a9)
{
  __int64 v9;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  unsigned int v15;
  unsigned int v16;
  char* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  int v21;
  unsigned int v22;
  __int64 v23;
  char v24;
  __int64 v25;
  __int64 v26;
  __int64 v28;
  char* v29;
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
  char* v40;
  __int64 v42;
  __int64 v43;
  _BYTE v44[180];
  char v45;
  unsigned __int8 v46;
  _BYTE v47[22];
  _QWORD v48[2];
  _QWORD v49[7];

  SdkRoutine_86ee60(&a9);
  SdkRoutine_87c790(a1);
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
      v17 = (char*)&v46;
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
  v25 = SdkRoutine_830290(v17, v48, v11, v23);
  v26 = v25;
  if ((~v14 & 0x4008) == 0 && v17 != (char*)v25) {
    v28 = ((_BYTE)v25 - (_BYTE)v17) & 7;
    v29 = v17;
    if ((((_BYTE)v25 - (_BYTE)v17) & 7) != 0) {
      v29 = v17;
      do {
        v30 = (unsigned __int8)*v29;
        if ((unsigned int)(v30 - 97) < 6) {
          LOBYTE(v30) = v30 - 32;
        }
        --v28;
        *v29++ = v30;
      } while (v28 != 0);
    }
    if ((unsigned __int64)&v17[-v25] <= 0xFFFFFFFFFFFFFFF8LL) {
      do {
        v31 = (unsigned __int8)*v29;
        if ((unsigned int)(v31 - 97) < 6) {
          LOBYTE(v31) = v31 - 32;
        }
        *v29 = v31;
        v32 = (unsigned __int8)v29[1];
        if ((unsigned int)(v32 - 97) < 6) {
          LOBYTE(v32) = v32 - 32;
        }
        v29[1] = v32;
        v33 = (unsigned __int8)v29[2];
        if ((unsigned int)(v33 - 97) < 6) {
          LOBYTE(v33) = v33 - 32;
        }
        v29[2] = v33;
        v34 = (unsigned __int8)v29[3];
        if ((unsigned int)(v34 - 97) < 6) {
          LOBYTE(v34) = v34 - 32;
        }
        v29[3] = v34;
        v35 = (unsigned __int8)v29[4];
        if ((unsigned int)(v35 - 97) < 6) {
          LOBYTE(v35) = v35 - 32;
        }
        v29[4] = v35;
        v36 = (unsigned __int8)v29[5];
        if ((unsigned int)(v36 - 97) < 6) {
          LOBYTE(v36) = v36 - 32;
        }
        v29[5] = v36;
        v37 = (unsigned __int8)v29[6];
        if ((unsigned int)(v37 - 97) < 6) {
          LOBYTE(v37) = v37 - 32;
        }
        v29[6] = v37;
        v38 = (unsigned __int8)v29[7];
        if ((unsigned int)(v38 - 97) < 6) {
          LOBYTE(v38) = v38 - 32;
        }
        v29[7] = v38;
        v29 += 8;
      } while (v29 != (char*)v25);
    }
  }
  v39 = *(_DWORD*)(v18 + 8) & 0xB0;
  if (v39 == 32) {
    v40 = (char*)v25;
    goto LABEL_54;
  }
  if (v39 != 16) {
  LABEL_53:
    v40 = &v45;
    goto LABEL_54;
  }
  if (v45 != 45 && v45 != 43) {
    if (v25 - (__int64)&v45 >= 2 && v45 == 48 && (v46 | 0x20) == 0x78) {
      v40 = v47;
      goto LABEL_54;
    }
    goto LABEL_53;
  }
  v40 = (char*)&v46;
LABEL_54:
  *(struct PseudoSret*)(&v42) = SdkRoutine_87cd90(v18);
  SdkRoutine_87d0a0(&v45, v40, v26, v44, v49, &v43, &v42);
  SdkRoutine_86ee60(&v42);
  return SdkRoutine_812100(v20, v44, v49[0], v43, v18, v16);
}

__int64 SdkHr_807e9c(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                     __int64 a6, __int64 a7, __int64 a8, __int64 a9,
                     __int64 a10, char a11)
{
  _DWORD* v12;
  _DWORD* v13;
  _DWORD* v14;
  _DWORD* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 result;

  SdkRoutine_86ee60(&a11);
  SdkRoutine_87c790(a1);
  v13 = v12;
  v15 = v14;
  result = SdkRoutine_8087a0(v16, v17, v12, v18, 2);
  if ((unsigned int)(result - 1) <= 0x1E && (*v13 & 4) == 0) {
    *v15 = result;
  }
  else {
    *v13 |= 4u;
  }
  return result;
}

__int64 SdkHr_81c910(__int64 a1, unsigned int a2)
{
  if (a2 - 91 >= 0xFFFFFFE6) {
    return a2 | 0x20;
  }
  else {
    return a2;
  }
}

__int64 SdkHr_83027c(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                     __int64 a6, __int64 a7, __int64 a8, __int64 a9, char a10)
{
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;

  SdkRoutine_86ee60(&a10);
  v11 = SdkRoutine_87c790(a1);
  return SdkRoutine_830290(v11, v12, v13, v14);
}

__int64 SdkHr_83095c(__int64 a1)
{
  __int64 v1;
  __int64 v3;

  SdkRoutine_82dd20(v1 - 40);
  v3 = SdkRoutine_87c790(a1);
  return SdkRoutine_830970(v3);
}

void __attribute__((noreturn)) SdkHr_84b34c()
{
  SdkRoutine_87c7a0();
  SdkRoutine_84c1f0(
      "libc++abi: terminate_handler unexpectedly threw an exception");
}

#pragma GCC visibility pop
