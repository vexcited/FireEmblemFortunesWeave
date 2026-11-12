#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern _UNKNOWN* CudaDriverData_1432498;

extern char CudaDriverData_14325d2;

extern char CudaDriverData_14325d3;

extern char CudaDriverData_1432e38;

extern char CudaDriverData_1432e80;

extern __int64 CudaDriverData_1432e84;

extern __int64 (*CudaDriverData_143ba40)(void);

extern __int64 CudaDriverData_143bda8;

extern __int128 CudaDriverData_14403f8;

extern __int64 CudaDriverData_1440428;

extern __int64 CudaDriverData_1440430;

__int64 CudaDriverRoutine_108070(void);

__int64 CudaDriverRoutine_12c960(_QWORD, _QWORD);

__int64 CudaDriverRoutine_12db40(void);

__int64 CudaDriverRoutine_12dbb0(_QWORD);

__int64 CudaDriverRoutine_12e1e0(_QWORD);

__int64 CudaDriverRoutine_12e340(void);

__int64 CudaDriverRoutine_12e4f0(_QWORD);

__int64 CudaDriverRoutine_1a16e0(_QWORD, _QWORD);

__int64 CudaDriverRoutine_1d9c30(_QWORD);

__int64 CudaDriverRoutine_1dbf90(void);

__int64 CudaDriverRoutine_222b80(_QWORD, _QWORD);

__int64 CudaDriverRoutine_25da90(void);

__int64 CudaDriverRoutine_25dd40(const char*, ...);

__int64 CudaDriverRoutine_76d10();

__int64 CudaDriverRoutine_770a0(_QWORD);

__int64 CudaDriverRoutine_935f0(void);

__int64 CudaDriverRoutine_a3b60(void);

__int64 CudaDriverRoutine_a4120(void);

__int64 CudaDriverRoutine_a81a0(void);

__int64 CudaDriverRoutine_a8520(void);

__int64 CudaDriverRoutine_ab0e0(void);

__int64 CudaDriverRoutine_b3020(void);

__int64 CudaDriverRoutine_bb120(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 CudaDriverRoutine_da4e0(void);

__int64 CudaDriverRoutine_dabc0(void);

__int64 CudaDriverRoutine_deeb0(_QWORD);

void __attribute__((noreturn)) CudaDriverHr_0() { __udf(1u); }

_QWORD* CudaDriverHr_3210(_QWORD* a1)
{
  *a1 = 536944708;
  return a1 + 1;
}

_DWORD* CudaDriverHr_3220(_DWORD* a1, int a2)
{
  *a1 = 536944720;
  a1[1] = a2;
  return a1 + 2;
}

_QWORD* CudaDriverHr_3230(_QWORD* a1)
{
  *a1 = 536944704;
  return a1 + 1;
}

_QWORD* CudaDriverHr_3240(_QWORD* a1)
{
  *a1 = 536969280;
  return a1 + 1;
}

__int64 CudaDriverHr_3910(__int64 result, __int64 a2)
{
  *(_QWORD*)(result + 14792) = a2 + 128;
  *(_QWORD*)(result + 14800) = a2 + 132;
  return result;
}

__int64 CudaDriverHr_3930(__int64 a1, _DWORD* a2)
{
  __int64 v2;

  v2 = *(_QWORD*)(a1 + 16104);
  *a2 = *(_DWORD*)(v2 + 3112);
  return 0;
}

__int64 CudaDriverHr_73f0(__int64 result, unsigned __int16 a2)
{
  *(_DWORD*)(*(_QWORD*)(result + 8) + 16LL) =
      *(_DWORD*)(*(_QWORD*)(result + 8) + 16LL) & 0xC0003FFF | (a2 << 14);
  return result;
}

__int64 CudaDriverHr_84c0(__int64 a1, __int64 a2)
{
  *(_BYTE*)(a2 + 408) = 0;
  *(_DWORD*)(a2 + 412) = -1;
  return 0;
}

bool CudaDriverHr_a010(__int64 a1, __int64 a2)
{
  return (*(_WORD*)(a2 + 977) & 0x400) == 0;
}

bool CudaDriverHr_a030(__int64 a1, __int64 a2)
{
  return (*(_WORD*)(a2 + 977) & 0x400) == 0;
}

bool CudaDriverHr_a050(__int64 a1, __int64 a2)
{
  return *(_BYTE*)(a2 + 1114) == 0;
}

bool CudaDriverHr_a060(__int64 a1, __int64 a2)
{
  return (*(_WORD*)(a2 + 977) & 0x400) == 0;
}

bool CudaDriverHr_a080(__int64 a1, __int64 a2)
{
  return (*(_WORD*)(a2 + 977) & 0x400) == 0;
}

bool CudaDriverHr_a0a0(__int64 a1, __int64 a2)
{
  return (*(_WORD*)(a2 + 977) & 0x400) == 0;
}

bool CudaDriverHr_a0c0(__int64 a1, __int64 a2)
{
  return (*(_WORD*)(a2 + 977) & 0x400) == 0;
}

bool CudaDriverHr_a0e0(__int64 a1, __int64 a2)
{
  return *(_BYTE*)(a2 + 1112) == 0;
}

bool CudaDriverHr_a150(__int64 a1, __int64 a2)
{
  return (*(_WORD*)(a2 + 977) & 0x400) == 0;
}

bool CudaDriverHr_a1d0(__int64 a1, __int64 a2)
{
  return (*(_WORD*)(a2 + 977) & 0x400) == 0;
}

bool CudaDriverHr_a200(__int64 a1, __int64 a2)
{
  return (*(_WORD*)(a2 + 977) & 0x400) == 0;
}

bool CudaDriverHr_a220(__int64 a1, __int64 a2)
{
  return (*(_WORD*)(a2 + 977) & 0x200) == 0;
}

bool CudaDriverHr_a270(__int64 a1, __int64 a2)
{
  return (*(_WORD*)(a2 + 977) & 0x400) == 0;
}

bool CudaDriverHr_a290(__int64 a1, __int64 a2)
{
  return (*(_WORD*)(a2 + 977) & 0x200) == 0;
}

_QWORD* CudaDriverHr_15a40(_QWORD* a1)
{
  *a1 = 536944708;
  return a1 + 1;
}

_DWORD* CudaDriverHr_15a50(_DWORD* a1, int a2)
{
  *a1 = 536944720;
  a1[1] = a2;
  return a1 + 2;
}

_QWORD* CudaDriverHr_15a60(_QWORD* a1)
{
  *a1 = 536944704;
  return a1 + 1;
}

_QWORD* CudaDriverHr_15a70(_QWORD* a1)
{
  *a1 = 536969280;
  return a1 + 1;
}

_QWORD* CudaDriverHr_15a80(_QWORD* a1)
{
  *a1 = 536936512;
  return a1 + 1;
}

__int64 CudaDriverHr_16130(__int64 result, __int64 a2)
{
  *(_QWORD*)(result + 14792) = a2 + 128;
  *(_QWORD*)(result + 14800) = a2 + 132;
  return result;
}

__int64 CudaDriverHr_16150(__int64 a1, _DWORD* a2)
{
  __int64 v2;

  v2 = *(_QWORD*)(a1 + 16104);
  *a2 = *(_DWORD*)(v2 + 3112);
  return 0;
}

__int64 CudaDriverHr_1b6e0(__int64 result, char a2)
{
  *(_DWORD*)(*(_QWORD*)(result + 8) + 16LL) =
      *(_DWORD*)(*(_QWORD*)(result + 8) + 16LL) & 0xC07FFFFF |
      ((a2 & 0x7F) << 23);
  return result;
}

__int64 CudaDriverHr_1b700(__int64 result, unsigned __int16 a2)
{
  *(_DWORD*)(*(_QWORD*)(result + 8) + 16LL) =
      *(_DWORD*)(*(_QWORD*)(result + 8) + 16LL) & 0xC0003FFF | (a2 << 14);
  return result;
}

_QWORD* CudaDriverHr_4c480(_QWORD* result, __int64 a2, __int64 a3)
{
  result[1] = a2;
  result[2] = 0;
  *result = a3;
  return result;
}

_QWORD* CudaDriverHr_4c490(_QWORD* result)
{
  *result = 0;
  result[1] = 0;
  result[2] = 0;
  return result;
}

__int64 CudaDriverHr_4d0d0(__int64 result)
{
  if (result != 0) {
    return *(_QWORD*)result;
  }
  return result;
}

__int64 CudaDriverHr_4f770(_QWORD* a1)
{
  return CudaDriverRoutine_1a16e0(a1[1], *a1);
}

__int64 CudaDriverHr_4f8c0(_QWORD* a1, _QWORD* a2)
{
  if (a2 != nullptr) {
    *a2 = *a1;
  }
  return a1[1];
}

__int64 CudaDriverHr_51e80(__int64 a1, _QWORD* a2)
{
  __int64 v2;

  v2 = *(_QWORD*)(a1 + 104);
  *a2 = v2;
  return 0;
}

__int64 CudaDriverHr_51eb0(__int64 a1, __int64 a2, __int64 a3)
{
  if (a1 != 0) {
    return CudaDriverRoutine_bb120(a1, a2, a3, 1);
  }
  else {
    return 400;
  }
}

__int64 CudaDriverHr_52610(__int64 a1)
{
  return *(unsigned __int8*)(a1 + 16448);
}

bool CudaDriverHr_54b90(__int64 a1) { return a1 == 0; }

__int64 CudaDriverHr_56260(__int64 result)
{
  *(_DWORD*)(result + 16) = 0;
  return result;
}

void CudaDriverHr_58730(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  if (*(_QWORD*)(a2 + 48) < a3) {
    *(_QWORD*)(a2 + 48) = a3;
  }
}

__int64 CudaDriverHr_592c0(_QWORD* a1, __int64 a2, __int64 a3)
{
  a1[2] = 0;
  a1[3] = 0;
  *a1 = a2;
  a1[1] = 0;
  a1[5] = a3;
  return 0;
}

unsigned __int64 CudaDriverHr_5ae00(__int64 a1)
{
  return atomic_fetch_or((atomic_ullong* volatile)(a1 + 16), 0);
}

unsigned __int64 CudaDriverHr_5b820(__int64 a1)
{
  return atomic_fetch_add((atomic_ullong* volatile)(a1 + 8), 1u) + 1;
}

unsigned __int64 CudaDriverHr_5b8d0(__int64 a1)
{
  return atomic_fetch_or((atomic_ullong* volatile)(a1 + 8), 0) + 1;
}

__int64 CudaDriverHr_5b9f0(__int64 result, __int64 a2)
{
  *(_QWORD*)(result + 34160) = a2;
  return result;
}

__int64 CudaDriverHr_5bba0(__int64 a1, unsigned int a2)
{
  return *(unsigned int*)(a1 + 4LL * a2 + 76);
}

unsigned __int64 CudaDriverHr_5bda0(__int64 a1)
{
  return atomic_fetch_or((atomic_ullong* volatile)(a1 + 24), 0);
}

_QWORD* CudaDriverHr_5c020(_QWORD* result, __int64 a2, __int64 a3)
{
  *result = a2;
  result[5] = a3;
  return result;
}

unsigned __int64 CudaDriverHr_5c030(__int64 a1)
{
  return atomic_fetch_or((atomic_ullong* volatile)(a1 + 8), 0);
}

bool CudaDriverHr_5c040(__int64 a1, __int64 a2)
{
  return atomic_fetch_or((atomic_ullong* volatile)(a1 + 8), 0) == a2;
}

bool CudaDriverHr_5c090(__int64 a1, unsigned __int64 a2)
{
  return atomic_fetch_or((atomic_ullong* volatile)(a1 + 16), 0) >= a2;
}

__int64 CudaDriverHr_5c0b0(__int64 a1) { return *(unsigned int*)(a1 + 34228); }

__int64 CudaDriverHr_5e790(__int64 a1)
{
  return CudaDriverRoutine_12e1e0(a1 + 34336);
}

void CudaDriverHr_5e800(__int64 a1, unsigned int a2)
{
  int v2;

  v2 = 0;
  atomic_compare_exchange_strong((atomic_uint* volatile)(a1 + 34388),
                                 (unsigned int*)&v2, a2);
}

__int64 CudaDriverHr_5e970(__int64 a1) { return *(_QWORD*)(a1 + 34328); }

__int64 CudaDriverHr_617b0(_DWORD* a1)
{
  *a1 = 1;
  return 0;
}

__int64 CudaDriverHr_61af0(__int64 a1)
{
  return CudaDriverRoutine_12dbb0(a1 + 33728);
}

__int64 CudaDriverHr_62780(int a1, __int64 a2)
{
  *(_DWORD*)(a2 + 8) = a1;
  return CudaDriverRoutine_12e4f0(a2);
}

__int64 CudaDriverHr_633a0(unsigned __int8* a1, unsigned __int8* a2)
{
  return *a1 - (unsigned int)*a2;
}

__int64 CudaDriverHr_634f0(__int64 a1, _QWORD* a2)
{
  *a2 = 0;
  return 0;
}

__int64 CudaDriverHr_65470(void* a1)
{
  CudaDriverData_1432498 = a1;
  return 0;
}

__int64 CudaDriverHr_76d00(__int64 a1, __int64 a2)
{
  return CudaDriverRoutine_222b80(*(_QWORD*)(a2 + 32), CudaDriverRoutine_76d10);
}

void CudaDriverHr_77070() { CudaDriverData_14325d3 = 1; }

__int64 CudaDriverHr_77080() { return (unsigned __int8)CudaDriverData_14325d2; }

__int64 CudaDriverHr_77210(const char* a1)
{
  if (a1 == nullptr) {
    a1 = "core_%t_%h_%p.nvcudmp";
  }
  return CudaDriverRoutine_770a0(a1);
}

__int64 CudaDriverHr_7a0c0(__int64 result, _DWORD* a2)
{
  if (result != 0) {
    return CudaDriverRoutine_12e340();
  }
  *a2 = 4;
  return result;
}

__int64 CudaDriverHr_7a0e0(__int64 result, _DWORD* a2)
{
  if (result != 0) {
    return CudaDriverRoutine_12e340();
  }
  *a2 = 4;
  return result;
}

__int64 CudaDriverHr_7a4f0(__int64 result, _DWORD* a2)
{
  if (result != 0) {
    return CudaDriverRoutine_12e340();
  }
  *a2 = 4;
  return result;
}

__int64 CudaDriverHr_81690(__int64 result)
{
  *(_BYTE*)(result + 16316) |= 2u;
  return result;
}

void CudaDriverHr_868d0(__int64 a1, _BYTE* a2) { *a2 = 0; }

__int64 CudaDriverHr_86e90(_QWORD* a1)
{
  if (a1 != nullptr) {
    return CudaDriverRoutine_deeb0(*a1);
  }
  else {
    return 400;
  }
}

__int64 CudaDriverHr_874b0(__int64 a1)
{
  return *(unsigned __int8*)(a1 + 20) >> 7;
}

bool CudaDriverHr_874c0(unsigned __int8 a1)
{
  return (unsigned int)a1 - 145 < 0xE;
}

bool CudaDriverHr_87cc0(__int64 a1) { return (*(_BYTE*)(a1 + 20) & 0xC0) != 0; }

__int64 CudaDriverHr_8ab00(__int64 a1)
{
  return (unsigned int)(1 << (*(_BYTE*)(a1 + 44) + 3));
}

__int64 CudaDriverHr_8e1e0() { return CudaDriverData_143ba40(); }

bool CudaDriverHr_91a80(_BYTE* a1) { return (*a1 & 0x40) != 0; }

_QWORD* CudaDriverHr_91a90(_QWORD* result)
{
  *result |= 0x10000uLL;
  return result;
}

_QWORD* CudaDriverHr_91aa0(_QWORD* result)
{
  *result |= 0x10uLL;
  return result;
}

__int64 CudaDriverHr_95c80(__int64 result)
{
  *(_QWORD*)(result + 8) |= 0x100000uLL;
  return result;
}

__int64 CudaDriverHr_96e40(__int64 result)
{
  if (result != 0) {
    return *(_QWORD*)(result + 16);
  }
  return result;
}

bool CudaDriverHr_97fd0(__int64 a1)
{
  return (unsigned int)(*(_DWORD*)(a1 + 8) - 3) < 2;
}

bool CudaDriverHr_98110(_BOOL8 result)
{
  if (result != 0) {
    return *(_QWORD*)(result + 16136) != 0;
  }
  return result;
}

__int64 CudaDriverHr_98340(__int64 result)
{
  if (*(_DWORD*)result == 1) {
    return *(_QWORD*)(result + 168);
  }
  return result;
}

bool CudaDriverHr_985b0(int a1) { return a1 == 2; }

__int64 CudaDriverHr_985c0(__int64 result)
{
  if (result != 0) {
    return CudaDriverRoutine_1d9c30(*(_QWORD*)(result + 80));
  }
  return result;
}

__int64 CudaDriverHr_98850(__int64 a1)
{
  atomic_uint* v1;

  v1 = (atomic_uint*)(a1 + 48);
  atomic_fetch_add(v1, 1u);
  return 0;
}

__int64 CudaDriverHr_99c50(__int64 a1, _DWORD* a2)
{
  int v2;

  v2 = *(_DWORD*)(a1 + 17748);
  *a2 = v2;
  return 0;
}

bool CudaDriverHr_9aa00(__int64 a1) { return *(_DWORD*)(a1 + 21864) == 0; }

bool CudaDriverHr_9aa20(__int64 a1)
{
  return (*(_WORD*)(a1 + 16848) & 0x2000) != 0;
}

bool CudaDriverHr_9aa30(__int64 a1) { return *(_DWORD*)(a1 + 3152) > 6u; }

bool CudaDriverHr_9aa40(__int64 a1) { return *(_DWORD*)(a1 + 21864) == 4; }

__int64 CudaDriverHr_9ab10(__int64 a1)
{
  return *(unsigned __int8*)(a1 + 17093);
}

__int64 CudaDriverHr_9ab20(_DWORD* a1)
{
  *a1 = 12090;
  return 0;
}

__int64 CudaDriverHr_9ab30(__int64 a1, _BYTE* a2)
{
  *a2 = 1;
  return 0;
}

bool CudaDriverHr_9ab40(__int64 a1) { return (*(_BYTE*)(a1 + 3360) & 2) != 0; }

bool CudaDriverHr_9ab50(__int64 a1) { return *(_DWORD*)(a1 + 21864) == 1; }

bool CudaDriverHr_9ad80(__int64 a1) { return *(_DWORD*)(a1 + 3152) > 7u; }

__int64 CudaDriverHr_9ea90(__int64 a1)
{
  __int64 result;

  result = *(_QWORD*)(a1 + 1232);
  if (result != 0) {
    return CudaDriverRoutine_1dbf90();
  }
  return result;
}

bool CudaDriverHr_9eaa0(__int64 a1) { return (*(_BYTE*)(a1 + 16316) & 4) != 0; }

__int64 CudaDriverHr_9eac0(__int64 result, _QWORD* a2)
{
  *a2 = *(_QWORD*)(result + 768);
  return result;
}

__int64 CudaDriverHr_a3980(__int64 a1, _QWORD* a2)
{
  if (a2 != nullptr) {
    *a2 = *(_QWORD*)(a1 + 120);
  }
  return *(_QWORD*)(a1 + 128);
}

__int64 CudaDriverHr_a39a0(__int64 a1)
{
  return (unsigned int)(*(_DWORD*)(*(_QWORD*)(a1 + 40) + 20LL) /
                        *(_DWORD*)(*(_QWORD*)(a1 + 40) + 36LL));
}

__int64 CudaDriverHr_a3ee0(_BYTE* a1)
{
  if (*a1 != 0) {
    return CudaDriverRoutine_a81a0();
  }
  else {
    return CudaDriverRoutine_a3b60();
  }
}

__int64 CudaDriverHr_a4110(_BYTE* a1)
{
  if (*a1 != 0) {
    return CudaDriverRoutine_a8520();
  }
  else {
    return CudaDriverRoutine_a4120();
  }
}

__int64 CudaDriverHr_a7f00(__int64 a1)
{
  return *(_QWORD*)(*(_QWORD*)(a1 + 40) + 32LL) /
         *(_QWORD*)(*(_QWORD*)(a1 + 40) + 56LL);
}

__int64 CudaDriverHr_ab0c0(__int64 a1)
{
  if ((*(_BYTE*)(*(_QWORD*)(a1 + 32) + 380LL) & 2) != 0) {
    return CudaDriverRoutine_b3020();
  }
  else {
    return CudaDriverRoutine_ab0e0();
  }
}

__int64 CudaDriverHr_b0cc0(_DWORD* a1, _DWORD* a2)
{
  return (unsigned int)(*a1 - *a2);
}

__int64 CudaDriverHr_b0cd0(_DWORD* a1, _DWORD* a2)
{
  return (unsigned int)(*a1 - *a2);
}

__int64 CudaDriverHr_b0ce0(_DWORD* a1, _DWORD* a2)
{
  return (unsigned int)(*a1 - *a2);
}

__int64 CudaDriverHr_bbd70(__int64 result, _QWORD* a2)
{
  *a2 = *(_QWORD*)(result + 104);
  return result;
}

__int64 CudaDriverHr_bbd80(__int64 a1, __int64 a2)
{
  *(_QWORD*)(a1 + 104) = a2;
  return 0;
}

__int64 CudaDriverHr_bbd90(__int64 a1, __int64 a2)
{
  *(_QWORD*)(a1 + 104) = a2;
  return CudaDriverRoutine_935f0();
}

__int64 CudaDriverHr_be980(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                           __int64 a5, __int64 a6)
{
  return (*(__int64 (**)(_QWORD))(**(_QWORD**)(a6 + 40) + 72LL))(
      *(_QWORD*)(a6 + 40));
}

atomic_uint* CudaDriverHr_d2ef0(atomic_uint* result)
{
  atomic_fetch_add(result, 1u);
  return result;
}

bool CudaDriverHr_d3240(__int64 a1) { return a1 != 0; }

__int64 CudaDriverHr_d5900(__int64 a1, _DWORD* a2)
{
  return (*(_QWORD*)(a1 + 136) >> *a2) & 1LL;
}

__int64 CudaDriverHr_d9080(__int64 result, _DWORD* a2)
{
  *a2 = *(_DWORD*)(result + 4);
  return result;
}

__int64 CudaDriverHr_dabb0(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  if (a4 == 1) {
    return CudaDriverRoutine_da4e0();
  }
  else {
    return CudaDriverRoutine_dabc0();
  }
}

__int64 CudaDriverHr_e7e40(__int64 a1)
{
  return (unsigned int)(*(_DWORD*)(a1 + 156) * *(_DWORD*)(a1 + 156) *
                        *(_DWORD*)(a1 + 160));
}

__int64 CudaDriverHr_f30a0(__int64 result)
{
  *(_DWORD*)(result + 120) = 2;
  return result;
}

__int64 CudaDriverHr_f3ac0(__int64 result, __int64 a2)
{
  atomic_fetch_add((atomic_ullong* volatile)(result + 56), -a2);
  return result;
}

bool CudaDriverHr_f41c0(_BOOL8 result)
{
  if (result != 0) {
    return *(_QWORD*)(result + 232) != 0;
  }
  return result;
}

_QWORD* CudaDriverHr_f9010(_QWORD* result, __int64 a2, __int64 a3, __int64 a4)
{
  result[50] = a2;
  result[51] = a3;
  result[52] = a4;
  return result;
}

__int64 CudaDriverHr_fcf00(__int64 result)
{
  *(_DWORD*)(result + 28) = 3;
  return result;
}

__int64 CudaDriverHr_fcf10(__int64 result)
{
  *(_DWORD*)(result + 28) = 0;
  return result;
}

__int64 CudaDriverHr_fe9d0(__int64 a1, __int64 a2)
{
  return CudaDriverRoutine_12c960(a1, a2 + a1);
}

__int64 CudaDriverHr_101ed0(__int64 a1, __int64 a2)
{
  if (a1 - a2 > 0) {
    return 1;
  }
  else {
    return (unsigned int)((a1 - a2) >> 63);
  }
}

__int64 CudaDriverHr_107f40(_QWORD* a1, __int64 a2, char a3)
{
  *a1 = 0;
  a1[1] = 0;
  if ((a3 & 2) != 0) {
    *((_BYTE*)a1 + 8) = 1;
  }
  return CudaDriverRoutine_12db40();
}

__int64 CudaDriverHr_109050(__int64 a1)
{
  *(_QWORD*)(a1 + 16336) = 0;
  return 0;
}

__int64 CudaDriverHr_117020(__int64 a1)
{
  return *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 88) + 8LL) + 32LL);
}

__int64 CudaDriverHr_1174d0(__int64 a1)
{
  return *(_QWORD*)(a1 + 8LL * *(unsigned int*)(a1 + 736) + 616);
}

__int64 CudaDriverHr_119530(__int64 a1, _DWORD* a2)
{
  int v2;

  v2 = *(_DWORD*)(a1 + 1308);
  *a2 = v2;
  return 0;
}

bool CudaDriverHr_11b920(__int64 a1)
{
  return *(_QWORD*)(*(_QWORD*)(a1 + 64) + 3128LL) > 0xBFu;
}

__int64 CudaDriverHr_11d560(__int64 a1, unsigned int a2)
{
  return *(unsigned int*)(a1 + 104LL * a2 + 2472);
}

__int64 CudaDriverHr_11ec20(__int64 result)
{
  *(_DWORD*)(result + 332) = 1;
  return result;
}

long double CudaDriverHr_11f810(long double* a1, __int64 a2)
{
  long double result;

  result = *(long double*)(a2 + 300);
  *a1 = result;
  return result;
}

__int64 CudaDriverHr_121b30(__int64 result, char a2)
{
  *(_BYTE*)(result + 36) = a2 == 0;
  return result;
}

__int64 CudaDriverHr_121b80(__int64 result, _QWORD* a2)
{
  *a2 = *(_QWORD*)(result + 40);
  return result;
}

__int64 CudaDriverHr_121b90(__int64 result, atomic_uint** a2)
{
  atomic_uint* v2;

  v2 = *(atomic_uint**)(result + 40);
  *a2 = v2;
  atomic_fetch_add(v2, 1u);
  return result;
}

__int64 CudaDriverHr_122000(__int64 result, _BYTE* a2)
{
  *a2 = *(_BYTE*)(result + 64);
  return result;
}

bool CudaDriverHr_122140(_BOOL8 result)
{
  if (result != 0) {
    return *(_DWORD*)(result + 8) == 2;
  }
  return result;
}

__int64 CudaDriverHr_122400(__int64 a1)
{
  return *(_QWORD*)(*(_QWORD*)(a1 + 82128) + 96LL);
}

__int64 CudaDriverHr_1274c0(__int64 result)
{
  if (result != 0) {
    return CudaDriverRoutine_108070();
  }
  return result;
}

__int64 CudaDriverHr_127660(__int64 result)
{
  if (*(_QWORD*)(result + 368) != 0) {
    *(_QWORD*)(result + 368) = 0;
  }
  return result;
}

void CudaDriverHr_1290e0(__int64 a1, unsigned __int64* a2)
{
  *a2 = *a2 & 0xFFFFFFFFFFFFFFC0LL | 0xA;
}

void CudaDriverHr_1294c0(__int64 a1, unsigned __int64* a2)
{
  *a2 = *a2 & 0xFFFFFFFFFFFFFFC0LL | 0xA;
}

__int64 CudaDriverHr_12c9c0()
{
  return *(_QWORD*)(CudaDriverData_143bda8 + 168);
}

_QWORD* CudaDriverHr_12cdf0(_QWORD* result, __int64 a2)
{
  *result = 0;
  result[1] = 0;
  result[2] = 0;
  result[3] = a2;
  return result;
}

__int64 CudaDriverHr_12ced0(__int64* a1)
{
  __int64 v1;

  v1 = *a1;
  a1[1] = 0;
  a1[2] = 0;
  *a1 = 0;
  return v1;
}

__int64 CudaDriverHr_12cff0(_QWORD* a1, __int64 a2) { return *a1 + a1[3] * a2; }

__int64 CudaDriverHr_12dd50(atomic_ullong* a1, unsigned __int64 a2, __int64 a3)
{
  atomic_compare_exchange_strong(a1, (unsigned __int64*)&a3, a2);
  return a3;
}

__int64 CudaDriverHr_12e340(__int64 result)
{
  if (result != 0) {
    return CudaDriverRoutine_25da90();
  }
  return result;
}

__int64 CudaDriverHr_12e7d0()
{
  return (unsigned __int8)CudaDriverData_1432e38;
}

void CudaDriverHr_12e900(__int64 a1, _QWORD* a2) { *a2 = 1; }

__int64 CudaDriverHr_138be0() { return HIDWORD(CudaDriverData_1432e84); }

void CudaDriverHr_138bf0()
{
  CudaDriverData_1432e80 = 0;
  CudaDriverData_1432e84 = 0;
}

__int64 CudaDriverHr_1a0600() { return CudaDriverData_1440428; }

__int64 CudaDriverHr_1a0610() { return CudaDriverData_1440430; }

bool CudaDriverHr_1a0620(_BOOL8 result)
{
  if (result != 0) {
    return *(_DWORD*)(result + 16) == 1;
  }
  return result;
}

bool CudaDriverHr_1a0fd0() { return (CudaDriverData_14403f8 & 2) != 0; }

__int64 CudaDriverHr_1a4080(_QWORD* a1)
{
  return CudaDriverRoutine_25dd40("[addr: 0x%llx, size: 0x%llx]", *a1, a1[1]);
}

_QWORD* CudaDriverHr_1a7e50(_QWORD* a1)
{
  *a1 = 536944708;
  return a1 + 1;
}

_DWORD* CudaDriverHr_1a7e60(_DWORD* a1, int a2)
{
  *a1 = 536944720;
  a1[1] = a2;
  return a1 + 2;
}

_QWORD* CudaDriverHr_1a7e70(_QWORD* a1)
{
  *a1 = 536944704;
  return a1 + 1;
}

_QWORD* CudaDriverHr_1a7e80(_QWORD* a1)
{
  *a1 = 536969280;
  return a1 + 1;
}

__int64 CudaDriverHr_1a8440(unsigned int a1)
{
  if (a1 == -1) {
    return 0;
  }
  else {
    return (a1 >> 12) + 1;
  }
}

__int64 CudaDriverHr_1a8590(__int64 result, __int64 a2)
{
  *(_QWORD*)(result + 14792) = a2 + 128;
  *(_QWORD*)(result + 14800) = a2 + 132;
  return result;
}

__int64 CudaDriverHr_1a85b0(__int64 a1, _DWORD* a2)
{
  __int64 v2;

  v2 = *(_QWORD*)(a1 + 16104);
  *a2 = *(_DWORD*)(v2 + 4520);
  return 0;
}

__int64 CudaDriverHr_1a9030(__int64 a1, unsigned int a2)
{
  return *(unsigned int*)(*(_QWORD*)(a1 + 16104) + 4LL * a2 + 1048);
}

__int64 CudaDriverHr_1a9050(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3;
  unsigned int v4;

  v3 = *(_DWORD*)(a1 + 3800);
  v4 = *(_DWORD*)(a3 + 232);
  if (v3 <= v4) {
    return v4;
  }
  else {
    return v3;
  }
}

_QWORD* CudaDriverHr_1aa750(_QWORD* a1)
{
  *a1 = 0x700000002001000DLL;
  return a1 + 1;
}

_QWORD* CudaDriverHr_1aa760(_QWORD* a1)
{
  *a1 = 0x800000002001000DLL;
  return a1 + 1;
}

_DWORD* CudaDriverHr_1aa7e0(_DWORD* result, int a2)
{
  *result = a2;
  result[1] = 3;
  return result;
}

_QWORD* CudaDriverHr_1aa820(_QWORD* a1)
{
  *a1 = 536936478;
  return a1 + 1;
}

_DWORD* CudaDriverHr_1aa830(_DWORD* a1)
{
  *a1 = -536870912;
  return a1 + 1;
}

_DWORD* CudaDriverHr_1aa840(_DWORD* a1)
{
  *a1 = 0;
  return a1 + 1;
}

__int64 CudaDriverHr_1adeb0(__int64 result, __int16 a2)
{
  **(_WORD**)(result + 8) = a2;
  return result;
}

__int64 CudaDriverHr_1bbee0(__int64 a1)
{
  return (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a1 + 132744LL))(a1, 0);
}

__int64 CudaDriverHr_1bbf00(__int64 a1)
{
  return (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 132744LL))(a1);
}

__int64 CudaDriverHr_1bbf50(__int64 a1)
{
  return (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 132720LL))(a1);
}

_QWORD* CudaDriverHr_1bf180(_QWORD* a1)
{
  *a1 = 536944708;
  return a1 + 1;
}

_DWORD* CudaDriverHr_1bf190(_DWORD* a1, int a2)
{
  *a1 = 536944720;
  a1[1] = a2;
  return a1 + 2;
}

_QWORD* CudaDriverHr_1bf1a0(_QWORD* a1)
{
  *a1 = 536944704;
  return a1 + 1;
}

_QWORD* CudaDriverHr_1bf1b0(_QWORD* a1)
{
  *a1 = 536969280;
  return a1 + 1;
}

_QWORD* CudaDriverHr_1bf5a0(_QWORD* a1)
{
  *a1 = 0x480000012001000BLL;
  return a1 + 1;
}

#pragma GCC visibility pop
