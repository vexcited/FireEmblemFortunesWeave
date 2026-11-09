#include "decomp/pseudo_helpers.h"
#pragma GCC visibility push(hidden)

extern int CudaDriverData_1435898;
extern int CudaDriverData_143589c;
extern int CudaDriverData_14359b4;
extern int CudaDriverData_1435ff8;
extern _UNKNOWN* CudaDriverData_14364e0;
extern _UNKNOWN* CudaDriverData_14364f8;
__int64 CudaDriverRoutine_107880(void);
__int64 CudaDriverRoutine_107e20(void);
__int64 CudaDriverRoutine_10c480(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_10c5b0(void);
__int64 CudaDriverRoutine_114a00(_QWORD);
__int64 CudaDriverRoutine_1175a0(void);
__int64 CudaDriverRoutine_12e340(__int64 result);
__int64 CudaDriverRoutine_42ee0(void);
__int64 CudaDriverRoutine_980c0(_QWORD, _QWORD);
__int64 CudaDriverRoutine_988f0(void);
__int64 CudaDriverRoutine_b9360(void);
__int64 CudaDriverRoutine_bae20(void);
__int64 CudaDriverRoutine_bb120(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 CudaDriverRoutine_bb530(void);
__int64 CudaDriverRoutine_d9180(void);
__int64 CudaDriverRoutine_f2040(_QWORD, _QWORD);

__int64 CudaDriverHr_1bf720(__int64 a1, _DWORD* a2)
{
  int v2;

  v2 = *(_DWORD*)(a1 + 4152);
  *a2 = v2;
  return 0;
}

__int64 CudaDriverHr_1bf8b0(__int64 a1, _DWORD* a2)
{
  *a2 = 0;
  return 0;
}

__int64 CudaDriverHr_1c0a30(__int64 a1, _DWORD* a2)
{
  *a2 = 8;
  return 0;
}

__int64 CudaDriverHr_1c8880(__int64 a1, __int64 a2)
{
  if (a2 != 0) {
    return 0;
  }
  else {
    return 4;
  }
}

__int64 CudaDriverHr_1c8890(__int64 a1, __int64 a2)
{
  if (a2 != 0) {
    return 0;
  }
  else {
    return 4;
  }
}

__int64 CudaDriverHr_1c88a0(__int64 a1, __int64 a2, bool* a3)
{
  *a3 = a2 == -4;
  return 0;
}

__int64 CudaDriverHr_1c9590(__int64 a1, __int64 a2, _DWORD* a3)
{
  *a3 = 0;
  return 0;
}

__int64 CudaDriverHr_1c9920(_BYTE* a1)
{
  *a1 = 0;
  return 0;
}

__int64 CudaDriverHr_1ca5a0(__int64 a1)
{
  if (a1 != 0) {
    return 11;
  }
  else {
    return 4;
  }
}

__int64 CudaDriverHr_1ca680(__int64 a1)
{
  if (a1 != 0) {
    return 11;
  }
  else {
    return 4;
  }
}

__int64 CudaDriverHr_1ca810(__int64 a1)
{
  if (a1 != 0) {
    return 11;
  }
  else {
    return 4;
  }
}

__int64 CudaDriverHr_1ca830(__int64 a1)
{
  if (a1 != 0) {
    return 11;
  }
  else {
    return 4;
  }
}

__int64 CudaDriverHr_1ca850(__int64 a1)
{
  if (a1 != 0) {
    return 11;
  }
  else {
    return 4;
  }
}

__int64 CudaDriverHr_1ca870(__int64 a1)
{
  if (a1 != 0) {
    return 11;
  }
  else {
    return 4;
  }
}

__int64 CudaDriverHr_1ca890(__int64 a1)
{
  if (a1 != 0) {
    return 11;
  }
  else {
    return 4;
  }
}

__int64 CudaDriverHr_1ca8b0(__int64 a1)
{
  if (a1 != 0) {
    return 11;
  }
  else {
    return 4;
  }
}

_DWORD* CudaDriverHr_1cd190(_DWORD* result, int a2)
{
  *result = a2;
  result[1] = 3;
  return result;
}

_QWORD* CudaDriverHr_1cd1a0(_QWORD* a1)
{
  *a1 = 0x700000002001000DLL;
  return a1 + 1;
}

_QWORD* CudaDriverHr_1cd1b0(_QWORD* a1)
{
  *a1 = 0x800000002001000DLL;
  return a1 + 1;
}

_DWORD* CudaDriverHr_1cd210(_DWORD* result, int a2)
{
  *result = a2;
  result[1] = 3;
  return result;
}

_QWORD* CudaDriverHr_1cd220(_QWORD* a1)
{
  *a1 = 536936478;
  return a1 + 1;
}

_QWORD* CudaDriverHr_1cd230(_QWORD* a1)
{
  *a1 = 536936478;
  return a1 + 1;
}

_DWORD* CudaDriverHr_1cd280(_DWORD* a1)
{
  *a1 = -536870912;
  return a1 + 1;
}

_DWORD* CudaDriverHr_1cd290(_DWORD* a1)
{
  *a1 = 0;
  return a1 + 1;
}

__int64 CudaDriverHr_1d9aa0(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned int v2;

  if (a1 > a2) {
    v2 = 1;
  }
  else {
    v2 = -1;
  }
  if (a1 == a2) {
    return 0;
  }
  else {
    return v2;
  }
}

__int64 CudaDriverHr_1d9c30(__int64 result)
{
  if (result != 0) {
    return *(unsigned __int8*)(result + 56);
  }
  return result;
}

bool CudaDriverHr_1da030(__int64 a1) { return *(_BYTE*)(a1 + 80) == 0; }

__int64 CudaDriverHr_1db1b0(__int64 a1)
{
  return *(_QWORD*)(*(_QWORD*)(a1 + 72) + 240LL);
}

__int64 CudaDriverHr_1db770(__int64 result, _QWORD* a2)
{
  *a2 = *(_QWORD*)(result + 72) + 240LL;
  return result;
}

__int64 CudaDriverHr_1db780(__int64 result, _QWORD* a2)
{
  *a2 = *(_QWORD*)(*(_QWORD*)(result + 72) + 168LL) + 240LL;
  return result;
}

bool CudaDriverHr_1db830(__int64 a1) { return (*(_BYTE*)(a1 + 472) & 2) != 0; }

bool CudaDriverHr_1dc790(char a1) { return (a1 & 7) == 2; }

bool CudaDriverHr_1dc7d0(__int64 a1, unsigned int a2)
{
  return ((a2 >> 6) & 7) - 1 < 2;
}

bool CudaDriverHr_1dc7f0(__int64 a1, __int16 a2) { return (a2 & 0x1C0) == 64; }

bool CudaDriverHr_1dc800(__int16 a1) { return (a1 & 0x7E00) == 7680; }

bool CudaDriverHr_1dca20(__int64 a1)
{
  return (*(_DWORD*)(*(_QWORD*)(a1 + 72) + 240LL) & 0x800000) != 0;
}

__int64 CudaDriverHr_1dd030(__int64 a1) { return *(_BYTE*)(a1 + 472) & 1; }

__int64 CudaDriverHr_1ddad0(__int64 a1, unsigned int a2)
{
  if (a2 > 3) {
    return 1;
  }
  else {
    return CudaDriverRoutine_988f0();
  }
}

__int64 CudaDriverHr_1deed0() { return 0x41DE16420LL; }

__int64 CudaDriverHr_1df6a0(__int64 a1)
{
  if (a1 != 0) {
    return CudaDriverRoutine_980c0(a1, 1);
  }
  else {
    return 1;
  }
}

__int64 CudaDriverHr_1e5180(__int64 a1, int a2)
{
  __int64 v2;

  v2 = *(_QWORD*)(a1 + 19824);
  *(_DWORD*)(v2 + 120) = a2;
  return 0;
}

__int64 CudaDriverHr_1e5190(__int64 a1, _DWORD* a2)
{
  *a2 = 0;
  return 0;
}

__int64 CudaDriverHr_1e5780(__int64 a1, _BYTE* a2)
{
  *a2 = 1;
  return 0;
}

__int64 CudaDriverHr_1e5a60(__int64 a1, __int64 a2, __int64 a3)
{
  *(_BYTE*)(a3 + 5) = 0;
  *(_DWORD*)a3 = 0;
  return 0;
}

bool CudaDriverHr_1e5aa0(__int64 a1)
{
  return (*(_BYTE*)(a1 + 16976) & 8) != 0;
}

__int64 CudaDriverHr_1e6510(__int64 a1, _QWORD* a2)
{
  *a2 = 0;
  a2[1] = 0;
  return 0;
}

__int64 CudaDriverHr_1e7aa0(__int64 a1)
{
  return *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(a1 + 19824) + 96LL) + 262LL);
}

__int64 CudaDriverHr_1e8940(__int64 a1)
{
  return *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(a1 + 19824) + 96LL) + 260LL);
}

__int64 CudaDriverHr_1ead20(__int64 result, __int64 a2)
{
  *(_DWORD*)(a2 + 128) = *(_DWORD*)(result + 48);
  *(_DWORD*)(a2 + 132) = *(_DWORD*)(result + 52);
  return result;
}

__int64 CudaDriverHr_1ebbc0(__int64 a1) { return ***(_QWORD***)(a1 + 2000); }

long double CudaDriverHr_1ee1a0(__int64 a1)
{
  _OWORD* v1;
  long double result;

  v1 = *(_OWORD**)(a1 + 16);
  v1[1] = 0u;
  v1[2] = 0u;
  *v1 = 0u;
  *(_OWORD*)&result = 0u;
  return result;
}

_QWORD* CudaDriverHr_1f1100(_QWORD* a1)
{
  *a1 = 536944708;
  return a1 + 1;
}

_DWORD* CudaDriverHr_1f1110(_DWORD* a1, int a2)
{
  *a1 = 536944720;
  a1[1] = a2;
  return a1 + 2;
}

_QWORD* CudaDriverHr_1f1120(_QWORD* a1)
{
  *a1 = 536944704;
  return a1 + 1;
}

_QWORD* CudaDriverHr_1f1130(_QWORD* a1)
{
  *a1 = 536969280;
  return a1 + 1;
}

__int64 CudaDriverHr_1f1620(__int64 a1, _DWORD* a2)
{
  int v2;

  v2 = *(_DWORD*)(a1 + 4152);
  *a2 = v2;
  return 0;
}

__int64 CudaDriverHr_1f17a0(__int64 a1, _DWORD* a2)
{
  *a2 = 0;
  return 0;
}

__int64 CudaDriverHr_1f41d0(__int64 a1, _BYTE* a2)
{
  *a2 = 1;
  return 0;
}

__int64 CudaDriverHr_1f4b30(__int64 a1)
{
  if (a1 != 0) {
    return 11;
  }
  else {
    return 4;
  }
}

_QWORD* CudaDriverHr_1f54f0(_QWORD* a1)
{
  *a1 = 0x700000002001000DLL;
  return a1 + 1;
}

_QWORD* CudaDriverHr_1f5500(_QWORD* a1)
{
  *a1 = 0x800000002001000DLL;
  return a1 + 1;
}

_DWORD* CudaDriverHr_1f5560(_DWORD* result, int a2)
{
  *result = a2;
  result[1] = 3;
  return result;
}

_QWORD* CudaDriverHr_1f55a0(_QWORD* a1)
{
  *a1 = 536936478;
  return a1 + 1;
}

_DWORD* CudaDriverHr_1f55b0(_DWORD* a1)
{
  *a1 = -536870912;
  return a1 + 1;
}

_DWORD* CudaDriverHr_1f55c0(_DWORD* a1)
{
  *a1 = 0;
  return a1 + 1;
}

__int64 CudaDriverHr_1fc7a0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if (a1 != 0) {
    return CudaDriverRoutine_10c480(a1, a2, a3, a4, 0);
  }
  else {
    return 1;
  }
}

__int64 CudaDriverHr_1fc7c0(__int64 a1, __int64 a2)
{
  if (a2 != 0) {
    return CudaDriverRoutine_10c5b0();
  }
  else {
    return 1;
  }
}

__int64 CudaDriverHr_1ff6e0(__int64 result, int a2)
{
  *(_DWORD*)(result + 32) += a2;
  return result;
}

unsigned __int64 CudaDriverHr_1ffe10(__int64 a1)
{
  return atomic_fetch_or((atomic_ullong* volatile)(a1 + 96), 0);
}

__int64 CudaDriverHr_1ffe20(__int64 a1, int a2) { return (4 * a2) | 2u; }

__int64 CudaDriverHr_1ffe30(__int64 a1)
{
  return (4 * (unsigned int)atomic_fetch_or((atomic_ullong* volatile)(a1 + 96),
                                            0)) |
         2;
}

bool CudaDriverHr_1ffe50(char a1) { return (a1 & 3) == 2; }

bool CudaDriverHr_201450(__int64 a1)
{
  return *(_QWORD*)(a1 + 8) == *(_QWORD*)(a1 + 16);
}

_QWORD* CudaDriverHr_201560(_QWORD* result, int a2)
{
  *result = 0;
  result[1] = 0;
  *((_DWORD*)result + 2) = a2;
  return result;
}

__int64 CudaDriverHr_207160(__int64 result)
{
  ++*(_DWORD*)(result + 56);
  return result;
}

__int64 CudaDriverHr_2077b0(__int64 result)
{
  *(_BYTE*)(result + 60) |= 0x80u;
  return result;
}

__int64 CudaDriverHr_209810(__int64 a1)
{
  if (a1 != 0) {
    return 0;
  }
  else {
    return 201;
  }
}

__int64 CudaDriverHr_209820(__int64 a1)
{
  if (a1 != 0) {
    return 0;
  }
  else {
    return 201;
  }
}

__int64 CudaDriverHr_20bff0(__int64 a1, __int64 a2)
{
  if (a2 != 0) {
    return CudaDriverRoutine_114a00(a2);
  }
  else {
    return 1;
  }
}

__int64 CudaDriverHr_20c0f0(__int64 result, int a2)
{
  CudaDriverData_143589c = result;
  CudaDriverData_1435898 = a2;
  return result;
}

__int64 CudaDriverHr_20d780(__int64 a1, __int64 a2, __int64 a3)
{
  if (a1 != 0 && a3 != 0) {
    return CudaDriverRoutine_1175a0();
  }
  else {
    return 1;
  }
}

__int64 CudaDriverHr_2162d0(__int64 a1, __int64 a2)
{
  if (a2 == 0 || a1 == 0) {
    return 1;
  }
  else {
    return 801;
  }
}

__int64 CudaDriverHr_2167f0(__int64 a1, __int64 a2)
{
  if (a1 != 0 && a2 != 0) {
    return CudaDriverRoutine_d9180();
  }
  else {
    return 1;
  }
}

__int64 CudaDriverHr_2172a0(_DWORD* a1)
{
  *a1 = 3;
  return 0;
}

__int64 CudaDriverHr_21c9e0(__int64 a1, __int64 a2)
{
  if (a2 != 0) {
    return CudaDriverRoutine_42ee0();
  }
  else {
    return 1;
  }
}

__int64 CudaDriverHr_21d020(__int64 a1)
{
  if (a1 != 0) {
    return CudaDriverRoutine_b9360();
  }
  else {
    return 1;
  }
}

__int64 CudaDriverHr_21d7b0(__int64 a1, __int64 a2)
{
  if (a2 != 0) {
    return *(unsigned int*)(a2 + 472);
  }
  else {
    return 0xFFFFFFFFLL;
  }
}

__int64 CudaDriverHr_21da50(__int64 a1, __int64 a2, __int64 a3)
{
  if (a1 != 0 && a3 != 0) {
    return CudaDriverRoutine_bb530();
  }
  else {
    return 999;
  }
}

__int64 CudaDriverHr_21dc70(__int64 a1)
{
  if (a1 != 0) {
    return 0;
  }
  else {
    return 999;
  }
}

__int64 CudaDriverHr_21e6a0(__int64 a1, __int64 a2, __int64 a3)
{
  if (a1 != 0 && a3 != 0) {
    return CudaDriverRoutine_bae20();
  }
  else {
    return 999;
  }
}

__int64 CudaDriverHr_21ee90(__int64 a1, __int64 a2, __int64 a3)
{
  if (a1 != 0) {
    return CudaDriverRoutine_bb120(a1, a2, a3, 1);
  }
  else {
    return 999;
  }
}

__int64 CudaDriverHr_21ef30(__int64 a1)
{
  if (a1 != 0) {
    return CudaDriverRoutine_107880();
  }
  else {
    return 1;
  }
}

__int64 CudaDriverHr_21ef40(__int64 a1)
{
  if (a1 != 0) {
    return CudaDriverRoutine_107e20();
  }
  else {
    return 1;
  }
}

bool CudaDriverHr_222160(__int64 a1, __int64 a2) { return a1 == a2; }

bool CudaDriverHr_222180(__int64 a1, __int64 a2) { return a1 == a2; }

__int64 CudaDriverHr_222da0(__int64 result)
{
  if (result != 0) {
    return *(_QWORD*)(result + 8);
  }
  return result;
}

__int64 CudaDriverHr_223220(__int64 result)
{
  if (result != 0) {
    return CudaDriverRoutine_12e340(result);
  }
  return result;
}

__int64 CudaDriverHr_224490(_OWORD* a1)
{
  a1[7] = 0u;
  a1[8] = 0u;
  a1[6] = 0u;
  return 0;
}

_QWORD* CudaDriverHr_22bbd0(_QWORD* a1)
{
  *a1 = 536944708;
  return a1 + 1;
}

_DWORD* CudaDriverHr_22bbe0(_DWORD* a1, int a2)
{
  *a1 = 536944720;
  a1[1] = a2;
  return a1 + 2;
}

_QWORD* CudaDriverHr_22bbf0(_QWORD* a1)
{
  *a1 = 536944704;
  return a1 + 1;
}

_QWORD* CudaDriverHr_22bc00(_QWORD* a1)
{
  *a1 = 536969280;
  return a1 + 1;
}

__int64 CudaDriverHr_22c0d0(unsigned int a1) { return (a1 >> 12) + 1; }

__int64 CudaDriverHr_22c1d0(__int64 result, __int64 a2)
{
  *(_QWORD*)(result + 14792) = a2 + 128;
  *(_QWORD*)(result + 14800) = a2 + 132;
  return result;
}

__int64 CudaDriverHr_22c1f0(__int64 a1, _DWORD* a2)
{
  *a2 = 0;
  return 0;
}

_QWORD* CudaDriverHr_22d340(_QWORD* a1)
{
  *a1 = 0x700000002001000DLL;
  return a1 + 1;
}

_QWORD* CudaDriverHr_22d350(_QWORD* a1)
{
  *a1 = 0x800000002001000DLL;
  return a1 + 1;
}

_DWORD* CudaDriverHr_22d3d0(_DWORD* result, int a2)
{
  *result = a2;
  result[1] = 3;
  return result;
}

_QWORD* CudaDriverHr_22d410(_QWORD* a1)
{
  *a1 = 536936478;
  return a1 + 1;
}

_DWORD* CudaDriverHr_22d420(_DWORD* a1)
{
  *a1 = -536870912;
  return a1 + 1;
}

_DWORD* CudaDriverHr_22d430(_DWORD* a1)
{
  *a1 = 0;
  return a1 + 1;
}

__int64 CudaDriverHr_234f40(_BYTE* a1)
{
  *a1 = 1;
  return 0;
}

__int64 CudaDriverHr_235a10(void* a1)
{
  CudaDriverData_14364e0 = a1;
  return 0;
}

__int64 CudaDriverHr_235c30(void* a1)
{
  CudaDriverData_14364f8 = a1;
  return 0;
}

__int64 CudaDriverHr_235c50(int a1)
{
  CudaDriverData_14359b4 = a1;
  return 0;
}

__int64 CudaDriverHr_236230(__int64 a1, __int64 a2)
{
  if (a2 == 0 || a1 == 0) {
    return 1;
  }
  else {
    return 801;
  }
}

__int64 CudaDriverHr_2371a0(int a1)
{
  CudaDriverData_1435ff8 = a1;
  return 0;
}

__int64 CudaDriverHr_2374b0(int a1) { return CudaDriverRoutine_f2040(a1, 2); }

_QWORD* CudaDriverHr_23bcb0(_QWORD* a1)
{
  *a1 = 536944708;
  return a1 + 1;
}

_DWORD* CudaDriverHr_23bcc0(_DWORD* a1, int a2)
{
  *a1 = 536944720;
  a1[1] = a2;
  return a1 + 2;
}

_QWORD* CudaDriverHr_23bcd0(_QWORD* a1)
{
  *a1 = 536944704;
  return a1 + 1;
}

_QWORD* CudaDriverHr_23bce0(_QWORD* a1)
{
  *a1 = 536969280;
  return a1 + 1;
}

__int64 CudaDriverHr_23c300(__int64 result, __int64 a2)
{
  *(_QWORD*)(result + 14792) = a2 + 128;
  *(_QWORD*)(result + 14800) = a2 + 132;
  return result;
}

__int64 CudaDriverHr_23c320(__int64 a1, _DWORD* a2)
{
  *a2 = 0;
  return 0;
}

__int64 CudaDriverHr_23d390(__int64 a1, _DWORD* a2)
{
  *a2 = 16;
  return 0;
}

_QWORD* CudaDriverHr_23d400(_QWORD* a1)
{
  *a1 = 0x700000002001000DLL;
  return a1 + 1;
}

_QWORD* CudaDriverHr_23d410(_QWORD* a1)
{
  *a1 = 0x800000002001000DLL;
  return a1 + 1;
}

_DWORD* CudaDriverHr_23d490(_DWORD* result, int a2)
{
  *result = a2;
  result[1] = 3;
  return result;
}

_QWORD* CudaDriverHr_23d4d0(_QWORD* a1)
{
  *a1 = 536936478;
  return a1 + 1;
}

_DWORD* CudaDriverHr_23d4e0(_DWORD* a1)
{
  *a1 = -536870912;
  return a1 + 1;
}

_DWORD* CudaDriverHr_23d4f0(_DWORD* a1)
{
  *a1 = 0;
  return a1 + 1;
}

bool CudaDriverHr_246d00(_BOOL8 result)
{
  if (result != 0) {
    return *(unsigned __int8*)(result + 4) == 2;
  }
  return result;
}

__int64 CudaDriverHr_247310(__int64 a1, __int64 a2)
{
  if (a2 != 0) {
    return *(unsigned int*)(a2 + 20);
  }
  else {
    return 0;
  }
}

__int64 CudaDriverHr_247930(__int64 a1, __int64 a2)
{
  if (a2 != 0) {
    return *(_QWORD*)(a2 + 32);
  }
  else {
    return 0;
  }
}

#pragma GCC visibility pop
