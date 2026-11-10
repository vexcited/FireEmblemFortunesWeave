#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_7e42f0(_QWORD, _QWORD);
__int64 SdkRoutine_7e4330(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_7e4330_alt1(unsigned __int8*, char*, __int64*,
                               unsigned int) __asm__("SdkRoutine_7e4330");
__int64 SdkRoutine_857220(_QWORD, _QWORD);
__int64 SdkRoutine_85e050(unsigned __int64);
__int64 SdkRoutine_87cb80(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_87cba0(_QWORD);
__int64 SdkRoutine_87cbb0(_QWORD);
__int64 _Unwind_Resume_plt(_QWORD);
__int64 __cxa_allocate_exception_plt(_QWORD);
__int64 __cxa_free_exception_plt(_QWORD);
__int64 __cxa_throw_plt(_QWORD, _QWORD, _QWORD);
__int64 __errno_location_plt(_QWORD, _QWORD);
__int64 memchr_plt(_QWORD, _QWORD, _QWORD);
__int64 memmove_plt(_QWORD, _QWORD, _QWORD);
__int64 std___1_anonymous_as_integer_helper_alt1(
    _QWORD, _QWORD, _QWORD,
    _QWORD) __asm__("std___1_anonymous_as_integer_helper");
__int64 std___1_stod_7e1c80_alt1(_QWORD) __asm__("std___1_stod_7e1c80");
__int64 std___1_stold_7e1de0_alt1(_QWORD) __asm__("std___1_stold_7e1de0");
__int64 strtol_plt(_QWORD, _QWORD, _QWORD);
__int64 swprintf_plt(_QWORD, _QWORD, _QWORD, double);
__int64 wcstod_plt(_QWORD, _QWORD);
__int64 wcstold_plt(_QWORD, _QWORD);
__int64 wmemchr_plt(_QWORD, _QWORD, _QWORD);
double _Unwind_Resume_plt_alt1(_QWORD) __asm__("_Unwind_Resume_plt");
extern _UNKNOWN SdkData_bd123c;
extern _UNKNOWN SdkData_bd12a8;
extern __int64 SdkData_e893c8;
extern __int64 SdkData_e893d0;
void SdkRoutine_7cdb80();
void __attribute__((noreturn)) SdkRoutine_7cd620();
void __attribute__((noreturn)) ios_instantiations_7d3940(__int64);
void __attribute__((noreturn)) locale_7d3920();
void __attribute__((noreturn)) locale_7d5830(__int64);
_BYTE* std___1_basic_string___init(_BYTE* result, __int64 a2, __int64 a3,
                                   unsigned __int64 a4);
char* std___1_basic_string_insert(unsigned __int64* a1, char* a2, char a3);
unsigned __int64* std___1_basic_string_reserve_7dd760(unsigned __int64* result,
                                                      unsigned __int64 a2);
__int64 std___1_basic_string_find_7dd8b0(unsigned __int8* a1,
                                         unsigned __int8 a2,
                                         unsigned __int64 a3);
__int64 std___1_basic_string_find_first_not_of_7ddcc0(unsigned __int8* a1,
                                                      __int64 a2,
                                                      unsigned __int64 a3,
                                                      __int64 a4);
__int64 std___1_basic_string_find_last_not_of(unsigned __int8* a1, __int64 a2,
                                              unsigned __int64 a3, __int64 a4);
void __attribute__((noreturn)) string_7ddedc();
__int64* std___1_basic_string_reserve_7df940(__int64* result,
                                             unsigned __int64 a2);
__int64 std___1_basic_string_find_7dfa90(unsigned __int8* a1, __int64 a2,
                                         unsigned __int64 a3);
__int64 std___1_basic_string_find_first_not_of_7dff40(unsigned __int8* a1,
                                                      __int64 a2,
                                                      unsigned __int64 a3,
                                                      __int64 a4);
void __attribute__((noreturn)) string_7e01ac();
void __attribute__((noreturn))
std___1___basic_string_common___throw_length_error();
void __attribute__((noreturn))
std___1___basic_string_common___throw_out_of_range();
__int64 std___1_stol_7e0c20(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                            __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                            __int64 a9, __int64 a10, __int64 a11, char a12);
__int64 std___1_stol_7e0c50(char* a1, _QWORD* a2, unsigned int a3);
void __attribute__((noreturn)) string_7e0cb0(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8, __int64 a9,
                                             char a10);
void __attribute__((noreturn)) string_7e0e14(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8, __int64 a9,
                                             __int64 a10, __int64 a11,
                                             char a12);
void __attribute__((noreturn)) string_7e0f84(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8, __int64 a9,
                                             __int64 a10, __int64 a11,
                                             char a12);
void __attribute__((noreturn)) string_7e10f8(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8, __int64 a9,
                                             __int64 a10, __int64 a11,
                                             char a12);
void __attribute__((noreturn)) string_7e1244(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8, __int64 a9,
                                             __int64 a10, __int64 a11,
                                             char a12);
void __attribute__((noreturn)) string_7e1394(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8, __int64 a9,
                                             __int64 a10, __int64 a11,
                                             char a12);
void __attribute__((noreturn)) string_7e14f4(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8, __int64 a9,
                                             __int64 a10, __int64 a11,
                                             char a12);
__int64 std___1_stol_7e15c0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                            __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                            __int64 a9, __int64 a10, __int64 a11, char a12);
__int64 std___1_stol_7e15f0(char* a1, __int64* a2, unsigned int a3);
void __attribute__((noreturn)) string_7e1650(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8, __int64 a9,
                                             char a10);
void __attribute__((noreturn)) string_7e17c0(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8, __int64 a9,
                                             __int64 a10, __int64 a11,
                                             char a12);
void __attribute__((noreturn)) string_7e1950(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8, __int64 a9,
                                             __int64 a10, __int64 a11,
                                             char a12);
void __attribute__((noreturn)) string_7e1ae4(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8, __int64 a9,
                                             __int64 a10, __int64 a11,
                                             char a12);
__int64 std___1_stod_7e1c4c(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                            __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                            __int64 a9, __int64 a10, __int64 a11, char a12);
double std___1_stod_7e1c80(__int64 a1, __int64* a2);
__int64 std___1_stold_7e1dac(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                             __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                             __int64 a9, __int64 a10, __int64 a11, char a12);
long double std___1_stold_7e1de0(__int64 a1, __int64* a2);
void __attribute__((noreturn)) string_7e1f20(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8, __int64 a9,
                                             __int64 a10, __int64 a11,
                                             char a12);
__attribute__((swiftcall)) void std___1_to_wstring_7e30a0(PSEUDO_X8 x8_,
                                                          unsigned int a1);
void __attribute__((noreturn)) string_7e37f4(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8, __int64 a9,
                                             char a10);
void __attribute__((noreturn)) string_7e39d4(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8, __int64 a9,
                                             char a10);
void __attribute__((noreturn)) string_7e3b90(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8, __int64 a9,
                                             __int64 a10, __int64 a11,
                                             char a12);
__int64 std___1_to_wstring_7e3d24(__int64 a1, __int64 a2, __int64 a3,
                                  __int64 a4, __int64 a5, __int64 a6,
                                  __int64 a7, __int64 a8, __int64 a9, char a10);
__int64 std___1_to_wstring_7e3ea4(__int64 a1, __int64 a2, __int64 a3,
                                  __int64 a4, __int64 a5, __int64 a6,
                                  __int64 a7, __int64 a8, __int64 a9, char a10);
void __attribute__((noreturn)) string_7e4000(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8, __int64 a9,
                                             __int64 a10, __int64 a11,
                                             char a12);
__int64 std___1_anonymous_as_integer_helper(unsigned __int8* a1, char* a2,
                                            _QWORD* a3, unsigned int a4);
void __attribute__((noreturn)) string_7e4264(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8, __int64 a9,
                                             char a10);
void __attribute__((noreturn)) string_7e4290(__int64 a1);

_BYTE* std___1_basic_string___init(_BYTE* result, __int64 a2, __int64 a3,
                                   unsigned __int64 a4)
{
  __int64* v5;
  _BYTE* v6;
  __int64 v7;
  __int64 v8;

  if (a4 >= 0x3FFFFFFFFFFFFFF6LL) {
    locale_7d3920();
  }
  v5 = (__int64*)result;
  if (a4 <= 4) {
    *result = 2 * a3;
    v6 = result + 4;
    if (a3 == 0) {
      goto LABEL_10;
    }
    goto LABEL_9;
  }
  v7 = a2;
  if ((a4 | 1) == 5) {
    v8 = 8;
  }
  else {
    v8 = (a4 | 1) + 1;
  }
  result = (_BYTE*)SdkRoutine_85e050(4 * v8);
  a2 = v7;
  v5[1] = a3;
  v5[2] = (__int64)result;
  *v5 = v8 | 1;
  v6 = result;
  if (a3 != 0) {
  LABEL_9:
    result = (_BYTE*)memmove_plt(v6, a2, 4 * a3);
  }
LABEL_10:
  *(_DWORD*)&v6[4 * a3] = 0;
  return result;
}

char* std___1_basic_string_insert(unsigned __int64* a1, char* a2, char a3)
{
  unsigned __int64 v3;
  bool v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  char* v10;
  signed __int64 v11;
  char* v12;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  char* v20;
  char v21;

  v3 = *(unsigned __int8*)a1;
  v6 = (v3 & 1) == 0;
  v7 = v3 >> 1;
  if (v6) {
    v8 = v7;
  }
  else {
    v8 = a1[1];
  }
  v9 = 22;
  if (v6) {
    v10 = (char*)a1 + 1;
  }
  else {
    v10 = (char*)a1[2];
  }
  if (!v6) {
    v9 = (*a1 & 0xFFFFFFFFFFFFFFFELL) - 1;
  }
  v11 = a2 - v10;
  if ((*a1 & 1) != 0) {
    v12 = (char*)a1[2];
  }
  else {
    v12 = (char*)a1 + 1;
  }
  if (v9 == v8) {
    v14 = (2 * v8) | 7;
    if (v14 == 23) {
      v15 = 26;
    }
    else {
      v15 = v14 + 1;
    }
    if (v8 < 0xC) {
      v15 = 23;
    }
    if (v8 <= 0x7FFFFFFFFFFFFFF2LL) {
      v16 = v15;
    }
    else {
      v16 = -9;
    }
    v17 = SdkRoutine_85e050(v16);
    v18 = v17;
    if (a2 != v10) {
      memmove_plt(v17, v12, v11);
    }
    if (v8 != v11) {
      memmove_plt(v18 + v11 + 1, &v12[v11], v8 - v11);
    }
    if (v8 != 22) {
      SdkRoutine_857220(v12, v8 + 1);
    }
    a1[1] = v8 + 1;
    a1[2] = v18;
    *a1 = v16 | 1;
    v19 = v8 + 1;
    *(_BYTE*)(v18 + v11) = a3;
    v20 = (char*)a1 + 1;
    *(_BYTE*)(v18 + v8 + 1) = 0;
    v21 = *(_BYTE*)a1;
    if ((*(_BYTE*)a1 & 1) != 0) {
    LABEL_28:
      a1[1] = v19;
      goto LABEL_33;
    }
  }
  else {
    if (v8 != v11) {
      memmove_plt(&v12[v11 + 1], &v12[v11], v8 - v11);
    }
    v19 = v8 + 1;
    v12[v11] = a3;
    v20 = (char*)a1 + 1;
    v12[v8 + 1] = 0;
    v21 = *(_BYTE*)a1;
    if ((*(_BYTE*)a1 & 1) != 0) {
      goto LABEL_28;
    }
  }
  *(_BYTE*)a1 = 2 * v19;
LABEL_33:
  if ((v21 & 1) != 0) {
    v20 = (char*)a1[2];
  }
  return &v20[v11];
}

unsigned __int64* std___1_basic_string_reserve_7dd760(unsigned __int64* result,
                                                      unsigned __int64 a2)
{
  unsigned __int64 v2;
  unsigned __int64* v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64* v9;
  unsigned __int64 v10;
  char* v11;

  if (a2 >= 0xFFFFFFFFFFFFFFF7LL) {
    locale_7d3920();
  }
  v2 = *result;
  v3 = result;
  v4 = *result & 0xFFFFFFFFFFFFFFFELL;
  v5 = 22;
  if ((*(_BYTE*)result & 1) != 0) {
    v5 = v4 - 1;
  }
  if (a2 > v5) {
    if ((a2 | 7) == 0x17) {
      v6 = 26;
    }
    else {
      v6 = (a2 | 7) + 1;
    }
    if (a2 >= 0x17) {
      v7 = v6;
    }
    else {
      v7 = 23;
    }
    result = (unsigned __int64*)SdkRoutine_85e050(v7);
    v8 = v3[2];
    v9 = result;
    if ((v2 & 1) != 0) {
      v10 = v3[1];
    }
    else {
      v10 = (unsigned __int8)v2 >> 1;
    }
    if (v10 != -1) {
      if ((v2 & 1) != 0) {
        v11 = (char*)v3[2];
      }
      else {
        v11 = (char*)v3 + 1;
      }
      result = (unsigned __int64*)memmove_plt(result, v11, v10 + 1);
    }
    if ((v2 & 1) != 0) {
      result = (unsigned __int64*)SdkRoutine_857220(v8, v4);
    }
    v3[2] = (unsigned __int64)v9;
    *v3 = v7 | 1;
    v3[1] = v10;
  }
  return result;
}

__int64 std___1_basic_string_find_7dd8b0(unsigned __int8* a1,
                                         unsigned __int8 a2,
                                         unsigned __int64 a3)
{
  unsigned __int64 v3;
  unsigned __int64 v4;
  bool v5;
  unsigned __int64 v6;
  unsigned __int8* v8;
  __int64 v9;

  v3 = *a1;
  v4 = *((_QWORD*)a1 + 1);
  if ((v3 & 1) == 0) {
    v4 = v3 >> 1;
  }
  v5 = v4 >= a3;
  v6 = v4 - a3;
  if (!v5) {
    return -1;
  }
  if ((v3 & 1) != 0) {
    v8 = *((unsigned __int8**)a1 + 2);
  }
  else {
    v8 = a1 + 1;
  }
  v9 = memchr_plt(&v8[a3], a2, v6);
  if (v9 != 0) {
    return v9 - (_QWORD)v8;
  }
  else {
    return -1;
  }
}

__int64 std___1_basic_string_find_first_not_of_7ddcc0(unsigned __int8* a1,
                                                      __int64 a2,
                                                      unsigned __int64 a3,
                                                      __int64 a4)
{
  unsigned __int64 v4;
  bool v5;
  unsigned __int64 v6;
  unsigned __int8* v7;
  unsigned __int64 v8;
  unsigned __int64 v10;

  v4 = *a1;
  v5 = (v4 & 1) == 0;
  v6 = v4 >> 1;
  if (v5) {
    v7 = a1 + 1;
  }
  else {
    v7 = *((unsigned __int8**)a1 + 2);
  }
  if (v5) {
    v8 = v6;
  }
  else {
    v8 = *((_QWORD*)a1 + 1);
  }
  if (a3 >= v8) {
    return -1;
  }
  v10 = a3;
  while (memchr_plt(a2, v7[v10], a4) != 0) {
    if (v8 == ++v10) {
      return -1;
    }
  }
  return v10;
}

__int64 std___1_basic_string_find_last_not_of(unsigned __int8* a1, __int64 a2,
                                              unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 v4;
  unsigned __int8* v5;
  bool v8;
  unsigned __int64 v9;
  unsigned __int8* v10;
  unsigned __int64 v11;
  __int64 v12;

  v4 = *a1;
  v5 = *((unsigned __int8**)a1 + 2);
  v8 = (v4 & 1) == 0;
  v9 = v4 >> 1;
  if (v8) {
    v5 = a1 + 1;
  }
  else {
    v9 = *((_QWORD*)a1 + 1);
  }
  v10 = v5 - 1;
  if (a3 < v9) {
    v11 = a3 + 1;
  }
  else {
    v11 = v9;
  }
  while (v11 != 0) {
    v12 = memchr_plt(a2, v10[v11--], a4);
    if (v12 == 0) {
      return v11;
    }
  }
  return -1;
}

void __attribute__((noreturn)) string_7ddedc() { SdkRoutine_7cd620(); }

__int64* std___1_basic_string_reserve_7df940(__int64* result,
                                             unsigned __int64 a2)
{
  __int64 v2;
  __int64* v3;
  unsigned __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  char* v10;

  if (a2 >= 0x3FFFFFFFFFFFFFF6LL) {
    locale_7d3920();
  }
  v2 = *result;
  v3 = result;
  v4 = 4;
  if ((*(_BYTE*)result & 1) != 0) {
    v4 = (*result & 0xFFFFFFFFFFFFFFFELL) - 1;
  }
  if (a2 > v4) {
    if ((a2 | 1) == 5) {
      v5 = 8;
    }
    else {
      v5 = (a2 | 1) + 1;
    }
    if (a2 >= 5) {
      v6 = v5;
    }
    else {
      v6 = 5;
    }
    result = (__int64*)SdkRoutine_85e050(4 * v6);
    v7 = v3[2];
    v8 = result;
    if ((v2 & 1) != 0) {
      v9 = v3[1];
    }
    else {
      v9 = (unsigned __int8)v2 >> 1;
    }
    if (v9 != -1) {
      if ((v2 & 1) != 0) {
        v10 = (char*)v3[2];
      }
      else {
        v10 = (char*)v3 + 4;
      }
      result = (__int64*)memmove_plt(result, v10, 4 * (v9 + 1));
    }
    if ((v2 & 1) != 0) {
      result = (__int64*)SdkRoutine_857220(v7, (4 * v2) & 0xFFFFFFFFFFFFFFF8LL);
    }
    v3[2] = (__int64)v8;
    *v3 = v6 | 1;
    v3[1] = v9;
  }
  return result;
}

__int64 std___1_basic_string_find_7dfa90(unsigned __int8* a1, __int64 a2,
                                         unsigned __int64 a3)
{
  unsigned __int64 v3;
  unsigned __int64 v4;
  bool v5;
  unsigned __int64 v6;
  unsigned __int8* v8;
  __int64 v9;

  v3 = *a1;
  v4 = *((_QWORD*)a1 + 1);
  if ((v3 & 1) == 0) {
    v4 = v3 >> 1;
  }
  v5 = v4 >= a3;
  v6 = v4 - a3;
  if (!v5) {
    return -1;
  }
  if ((v3 & 1) != 0) {
    v8 = *((unsigned __int8**)a1 + 2);
  }
  else {
    v8 = a1 + 4;
  }
  v9 = wmemchr_plt(&v8[4 * a3], a2, v6);
  if (v9 != 0) {
    return (v9 - (__int64)v8) >> 2;
  }
  else {
    return -1;
  }
}

__int64 std___1_basic_string_find_first_not_of_7dff40(unsigned __int8* a1,
                                                      __int64 a2,
                                                      unsigned __int64 a3,
                                                      __int64 a4)
{
  unsigned __int64 v4;
  bool v5;
  unsigned __int64 v6;
  unsigned __int8* v7;
  __int64 v8;
  __int64 v9;

  v4 = *a1;
  v5 = (v4 & 1) == 0;
  v6 = v4 >> 1;
  if (v5) {
    v7 = a1 + 4;
  }
  else {
    v7 = *((unsigned __int8**)a1 + 2);
  }
  if (!v5) {
    v6 = *((_QWORD*)a1 + 1);
  }
  if (a3 >= v6) {
    return -1;
  }
  v8 = 4 * a3;
  v9 = 4 * v6;
  while (wmemchr_plt(a2, *(unsigned int*)&v7[v8], a4) != 0) {
    v8 += 4;
    if (v9 == v8) {
      return -1;
    }
  }
  return v8 >> 2;
}

void __attribute__((noreturn)) string_7e01ac() { SdkRoutine_7cd620(); }

void __attribute__((noreturn))

std___1___basic_string_common___throw_length_error()
{
  ios_instantiations_7d3940((__int64)"basic_string");
}

void __attribute__((noreturn))

std___1___basic_string_common___throw_out_of_range()
{
  locale_7d5830((__int64)"basic_string");
}

__int64 std___1_stol_7e0c20(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                            __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                            __int64 a9, __int64 a10, __int64 a11, char a12)
{
  __int64 v12;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned int v17;
  __int64 v18;
  __int64 v19;
  char v21;
  char v22[23];
  __int64 v23;
  __int64 v24;
  __int64 v25;

  SdkRoutine_87cba0(&a12);
  SdkRoutine_87cba0(&a9);
  v14 = _Unwind_Resume_plt(a1);
  SdkRoutine_87cba0(&a9);
  v15 = _Unwind_Resume_plt(v14);
  v23 = v12;
  v24 = v16;
  v25 = v14;
  v21 = 8;
  strcpy(v22, "stol");
  v19 = std___1_anonymous_as_integer_helper_alt1(&v21, v15, v18, v17);
  SdkRoutine_87cba0(&v21);
  return v19;
}

__int64 std___1_stol_7e0c50(char* a1, _QWORD* a2, unsigned int a3)
{
  __int64 v3;
  unsigned __int8 v5;
  char v6[23];

  v5 = 8;
  strcpy(v6, "stol");
  v3 = std___1_anonymous_as_integer_helper(&v5, a1, a2, a3);
  SdkRoutine_87cba0(&v5);
  return v3;
}

void __attribute__((noreturn)) string_7e0cb0(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8, __int64 a9,
                                             char a10)
{
  SdkRoutine_87cba0(&a10);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) string_7e0e14(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8, __int64 a9,
                                             __int64 a10, __int64 a11, char a12)
{
  SdkRoutine_87cba0(&a12);
  SdkRoutine_87cba0(&a9);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) string_7e0f84(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8, __int64 a9,
                                             __int64 a10, __int64 a11, char a12)
{
  SdkRoutine_87cba0(&a12);
  SdkRoutine_87cba0(&a9);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) string_7e10f8(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8, __int64 a9,
                                             __int64 a10, __int64 a11, char a12)
{
  SdkRoutine_87cba0(&a12);
  SdkRoutine_87cba0(&a9);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) string_7e1244(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8, __int64 a9,
                                             __int64 a10, __int64 a11, char a12)
{
  SdkRoutine_87cba0(&a12);
  SdkRoutine_87cba0(&a9);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) string_7e1394(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8, __int64 a9,
                                             __int64 a10, __int64 a11, char a12)
{
  SdkRoutine_87cba0(&a12);
  SdkRoutine_87cba0(&a9);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) string_7e14f4(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8, __int64 a9,
                                             __int64 a10, __int64 a11, char a12)
{
  __int64 v12;

  SdkRoutine_87cba0(v12 - 24);
  SdkRoutine_87cba0(&a12);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

__int64 std___1_stol_7e15c0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                            __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                            __int64 a9, __int64 a10, __int64 a11, char a12)
{
  __int64 v12;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned int v17;
  __int64 v18;
  __int64 v19;
  char v21;
  char v22[23];
  __int64 v23;
  __int64 v24;
  __int64 v25;

  SdkRoutine_87cba0(&a12);
  SdkRoutine_87cba0(&a9);
  v14 = _Unwind_Resume_plt(a1);
  SdkRoutine_87cba0(&a9);
  v15 = _Unwind_Resume_plt(v14);
  v23 = v12;
  v24 = v16;
  v25 = v14;
  v21 = 8;
  strcpy(v22, "stol");
  v19 = SdkRoutine_7e4330(&v21, v15, v18, v17);
  SdkRoutine_87cba0(&v21);
  return v19;
}

__int64 std___1_stol_7e15f0(char* a1, __int64* a2, unsigned int a3)
{
  __int64 v3;
  unsigned __int8 v5;
  char v6[23];

  v5 = 8;
  strcpy(v6, "stol");
  v3 = SdkRoutine_7e4330_alt1(&v5, a1, a2, a3);
  SdkRoutine_87cba0(&v5);
  return v3;
}

void __attribute__((noreturn)) string_7e1650(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8, __int64 a9,
                                             char a10)
{
  SdkRoutine_87cba0(&a10);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) string_7e17c0(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8, __int64 a9,
                                             __int64 a10, __int64 a11, char a12)
{
  __int64 v13;

  SdkRoutine_87cba0(&a12);
  SdkRoutine_87cba0(&a9);
  v13 = _Unwind_Resume_plt(a1);
  SdkRoutine_87cba0(&a9);
  _Unwind_Resume_plt(v13);
  __udf(0);
}

void __attribute__((noreturn)) string_7e1950(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8, __int64 a9,
                                             __int64 a10, __int64 a11, char a12)
{
  __int64 v13;

  SdkRoutine_87cba0(&a12);
  SdkRoutine_87cba0(&a9);
  v13 = _Unwind_Resume_plt(a1);
  SdkRoutine_87cba0(&a9);
  _Unwind_Resume_plt(v13);
  __udf(0);
}

void __attribute__((noreturn)) string_7e1ae4(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8, __int64 a9,
                                             __int64 a10, __int64 a11, char a12)
{
  __int64 v13;

  SdkRoutine_87cba0(&a12);
  SdkRoutine_87cba0(&a9);
  v13 = _Unwind_Resume_plt(a1);
  SdkRoutine_87cba0(&a9);
  _Unwind_Resume_plt(v13);
  __udf(0);
}

__int64 std___1_stod_7e1c4c(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                            __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                            __int64 a9, __int64 a10, __int64 a11, char a12)
{
  __int64 v13;
  __int64 v14;

  SdkRoutine_87cba0(&a12);
  SdkRoutine_87cba0(&a9);
  v13 = _Unwind_Resume_plt(a1);
  SdkRoutine_87cba0(&a9);
  v14 = _Unwind_Resume_plt(v13);
  return std___1_stod_7e1c80_alt1(v14);
}

double std___1_stod_7e1c80(__int64 a1, __int64* a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v4;
  int* v5;
  int v6;
  int* v7;
  double v8;
  int v9;
  double v10;
  char v12;
  struct {
    char v13[23];
    char v14;
  } v13_;
  char v15[23];
  __int64 v16;

  v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(double, "d0", "=w"));
  v2 = *(_QWORD*)(a1 + 16);
  v16 = 0;
  v12 = 8;
  strcpy(v13_.v13, "stod");
  if ((*(_BYTE*)a1 & 1) != 0) {
    v4 = v2;
  }
  else {
    v4 = a1 + 4;
  }
  v5 = (int*)__errno_location_plt(a1, a2),
  v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(double, "d0", "=w"));
  v6 = *v5;
  v7 = v5;
  *v5 = 0;
  wcstod_plt(v4, &v16),
      v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(double, "d0", "=w"));
  v9 = *v7;
  *v7 = v6;
  if (v9 == 34) {
    v15[16] = 0;
    *(_WORD*)&v15[17] = 0;
    *(_DWORD*)&v15[19] = 0;
    v13_.v14 = 36;
    *(_DWORD*)v15 = *(_DWORD*)v13_.v13;
    strcpy(&v15[4], ": out of ra");
    locale_7d5830((__int64)v15),
        v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(double, "d0", "=w"));
  }
  if (v16 == v4) {
    v15[20] = 0;
    *(_WORD*)&v15[21] = 0;
    v13_.v14 = 38;
    *(_DWORD*)v15 = *(_DWORD*)v13_.v13;
    strcpy(&v15[4], ": no conversion");
    string_7e4290((__int64)v15),
        v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(double, "d0", "=w"));
  }
  v10 = v8;
  if (a2 != nullptr) {
    *a2 = (v16 - v4) >> 2;
  }
  SdkRoutine_87cba0(&v12),
      v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(double, "d0", "=w"));
  return v10;
}

__int64 std___1_stold_7e1dac(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                             __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                             __int64 a9, __int64 a10, __int64 a11, char a12)
{
  __int64 v13;
  __int64 v14;

  SdkRoutine_87cba0(&a12);
  SdkRoutine_87cba0(&a9);
  v13 = _Unwind_Resume_plt(a1);
  SdkRoutine_87cba0(&a9);
  v14 = _Unwind_Resume_plt(v13);
  return std___1_stold_7e1de0_alt1(v14);
}

long double std___1_stold_7e1de0(__int64 a1, __int64* a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v4;
  int* v5;
  int v6;
  int* v7;
  long double v8;
  int v9;
  long double v11;
  char v12[24];
  __int64 v13;
  _WORD v14[12];

  v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v2 = *(_QWORD*)(a1 + 16);
  v13 = 0;
  strcpy(v12, "\nstold");
  if ((*(_BYTE*)a1 & 1) != 0) {
    v4 = v2;
  }
  else {
    v4 = a1 + 4;
  }
  v5 = (int*)__errno_location_plt(a1, a2),
  v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v6 = *v5;
  v7 = v5;
  *v5 = 0;
  wcstold_plt(v4, &v13),
      v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v9 = *v7;
  *v7 = v6;
  if (v9 == 34) {
    HIBYTE(v14[10]) = 0;
    v14[11] = 0;
    strcpy((char*)v14, "&stold: out of range");
    locale_7d5830((__int64)v14 + 1),
        v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  if (v13 == v4) {
    HIBYTE(v14[10]) = 0;
    v14[11] = 0;
    strcpy((char*)v14, "(stold: no conversio");
    string_7e4290((__int64)v14 + 1),
        v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v11 = v8;
  if (a2 != nullptr) {
    *a2 = (v13 - v4) >> 2;
  }
  SdkRoutine_87cba0(v12),
      v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v0", "=w"));
  return v11;
}

void __attribute__((noreturn)) string_7e1f20(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8, __int64 a9,
                                             __int64 a10, __int64 a11, char a12)
{
  __int64 v12;
  __int64 v14;

  SdkRoutine_87cba0(v12 - 24);
  SdkRoutine_87cba0(&a12);
  v14 = _Unwind_Resume_plt(a1);
  SdkRoutine_87cba0(&a12);
  _Unwind_Resume_plt(v14);
  __udf(0);
}

__attribute__((swiftcall)) void std___1_to_wstring_7e30a0(PSEUDO_X8 x8_,
                                                          unsigned int a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  unsigned __int8* result;
  unsigned __int64 v4;
  unsigned __int8* v5;
  unsigned __int8* v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int8* i;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  unsigned __int8* v18;
  _BYTE v19[11];

  result = (unsigned __int8*)((__int64 (*)(_BYTE*, _QWORD))SdkRoutine_7cdb80)(
      v19, a1);
  v4 = result - v19;
  if ((unsigned __int64)(result - v19) >= 0x3FFFFFFFFFFFFFF6LL) {
    locale_7d3920();
  }
  v5 = result;
  if (v4 > 4) {
    if ((v4 | 1) == 5) {
      v7 = 8;
    }
    else {
      v7 = (v4 | 1) + 1;
    }
    result = (unsigned __int8*)SdkRoutine_85e050(4 * v7);
    a2[1] = v4;
    a2[2] = (__int64)result;
    *a2 = v7 | 1;
    v6 = result;
    if (v19 == v5) {
      goto LABEL_14;
    }
  }
  else {
    *(_BYTE*)a2 = 2 * v4;
    v6 = (unsigned __int8*)a2 + 4;
    if (v19 == result) {
      goto LABEL_14;
    }
  }
  v8 = v4 & 7;
  for (i = v19; v8 != 0; v6 += 4) {
    v10 = *i++;
    --v8;
    *(_DWORD*)v6 = v10;
  }
  if ((unsigned __int64)(v19 - v5) <= 0xFFFFFFFFFFFFFFF8LL) {
    do {
      v11 = i[1];
      v12 = i[2];
      v13 = i[3];
      *(_DWORD*)v6 = *i;
      *((_DWORD*)v6 + 1) = v11;
      v14 = i[4];
      v15 = i[5];
      *((_DWORD*)v6 + 2) = v12;
      *((_DWORD*)v6 + 3) = v13;
      v16 = i[7];
      *((_DWORD*)v6 + 4) = v14;
      *((_DWORD*)v6 + 5) = v15;
      v17 = i[6];
      v18 = v6 + 32;
      i += 8;
      *((_DWORD*)v6 + 6) = v17;
      *((_DWORD*)v6 + 7) = v16;
      v6 += 32;
    } while (i != v5);
    v6 = v18;
  }
LABEL_14:
  *(_DWORD*)v6 = 0;
  {
    result;
    return;
  }
}

void __attribute__((noreturn)) string_7e37f4(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8, __int64 a9,
                                             char a10)
{
  __int64 v11;
  __int64 v12;

  SdkRoutine_87cba0(&a10);
  v11 = _Unwind_Resume_plt(a1);
  SdkRoutine_87cba0(&a10);
  v12 = _Unwind_Resume_plt(v11);
  SdkRoutine_87cba0(&a10);
  _Unwind_Resume_plt(v12);
  __udf(0);
}

void __attribute__((noreturn)) string_7e39d4(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8, __int64 a9,
                                             char a10)
{
  __int64 v11;
  __int64 v12;

  SdkRoutine_87cba0(&a10);
  v11 = _Unwind_Resume_plt(a1);
  SdkRoutine_87cba0(&a10);
  v12 = _Unwind_Resume_plt(v11);
  SdkRoutine_87cba0(&a10);
  _Unwind_Resume_plt(v12);
  __udf(0);
}

void __attribute__((noreturn)) string_7e3b90(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8, __int64 a9,
                                             __int64 a10, __int64 a11, char a12)
{
  __int64 v13;
  __int64 v14;

  SdkRoutine_87cba0(&a12);
  v13 = _Unwind_Resume_plt(a1);
  SdkRoutine_87cba0(&a12);
  v14 = _Unwind_Resume_plt(v13);
  SdkRoutine_87cba0(&a12);
  _Unwind_Resume_plt(v14);
  __udf(0);
}

__int64 std___1_to_wstring_7e3d24(__int64 a1, __int64 a2, __int64 a3,
                                  __int64 a4, __int64 a5, __int64 a6,
                                  __int64 a7, __int64 a8, __int64 a9, char a10)
{
  __int64 v10;
  __int64 v11;
  __int64 v13;
  __int64 v14;
  double v15;
  __int64 v16;
  double v17;
  __int64* v18;
  __int64* v19;
  __int64 v20;
  char v21;
  unsigned __int64 v22;
  __int64* v23;
  unsigned int v24;
  __int64 v25;
  __int64 v26;
  _QWORD* v27;
  __int64 v29;
  __int64 v30;
  __int64* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;

  SdkRoutine_87cbb0(&a10);
  v13 = ((__int64 (*)(__int64))_Unwind_Resume_plt_alt1)(a1);
  SdkRoutine_87cbb0(&a10);
  v14 = ((__int64 (*)(__int64))_Unwind_Resume_plt_alt1)(v13);
  SdkRoutine_87cbb0(&a10);
  v15 = _Unwind_Resume_plt_alt1(v14);
  v32 = v11;
  v33 = v10;
  v34 = v16;
  v35 = v14;
  v17 = v15;
  v19 = v18;
  v20 = SdkRoutine_85e050(0x58u);
  *(_QWORD*)v20 = 0;
  *(_QWORD*)(v20 + 8) = 0;
  *(_QWORD*)(v20 + 16) = 0;
  *(_QWORD*)(v20 + 24) = 0;
  *(_QWORD*)(v20 + 32) = 0;
  *(_QWORD*)(v20 + 40) = 0;
  *(_QWORD*)(v20 + 48) = 0;
  *(_QWORD*)(v20 + 56) = 0;
  *(_QWORD*)(v20 + 64) = 0;
  *(_QWORD*)(v20 + 72) = 0;
  *(_DWORD*)(v20 + 80) = 0;
  v29 = 23;
  v30 = 20;
  v31 = (__int64*)v20;
  SdkRoutine_87cb80(&v29, 21, 0);
  v21 = v29;
  if ((v29 & 1) != 0) {
    v22 = v30;
  }
  else {
    v22 = (unsigned __int64)(unsigned __int8)v29 >> 1;
  }
  while (1) {
    v23 = (v21 & 1) != 0 ? v31 : (__int64*)((char*)&v29 + 4);
    v24 = swprintf_plt(v23, v22 + 1, &SdkData_bd123c, v17);
    if ((v24 & 0x80000000) == 0) {
      break;
    }
    v22 = (2 * v22) | 1;
  LABEL_11:
    SdkRoutine_87cb80(&v29, v22, 0);
    v21 = v29;
  }
  if (v22 < v24) {
    v22 = v24;
    goto LABEL_11;
  }
  SdkRoutine_87cb80(&v29, v24, 0);
  v25 = v29;
  v26 = v30;
  v29 = 0;
  v30 = 0;
  *v19 = v25;
  v19[1] = v26;
  v27 = v31;
  v31 = nullptr;
  v19[2] = (__int64)v27;
  return SdkRoutine_87cbb0(&v29);
}

__int64 std___1_to_wstring_7e3ea4(__int64 a1, __int64 a2, __int64 a3,
                                  __int64 a4, __int64 a5, __int64 a6,
                                  __int64 a7, __int64 a8, __int64 a9, char a10)
{
  __int64 v10;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  double v16;
  __int64 v17;
  __int64* v18;
  __int64* v19;
  __int64 v20;
  char v21;
  unsigned __int64 v22;
  __int64* v23;
  unsigned int v24;
  __int64 v25;
  __int64 v26;
  _QWORD* v27;
  double v29;
  __int64 v30;
  __int64 v31;
  __int64* v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;

  SdkRoutine_87cbb0(&a10);
  _Unwind_Resume_plt_alt1(a1);
  v13 = v12;
  SdkRoutine_87cbb0(&a10);
  _Unwind_Resume_plt_alt1(v13);
  v15 = v14;
  SdkRoutine_87cbb0(&a10);
  v16 = _Unwind_Resume_plt_alt1(v15);
  v33 = v10;
  v34 = v17;
  v35 = v15;
  v29 = v16;
  v19 = v18;
  v20 = SdkRoutine_85e050(0x58u);
  *(_QWORD*)v20 = 0;
  *(_QWORD*)(v20 + 8) = 0;
  *(_QWORD*)(v20 + 16) = 0;
  *(_QWORD*)(v20 + 24) = 0;
  *(_QWORD*)(v20 + 32) = 0;
  *(_QWORD*)(v20 + 40) = 0;
  *(_QWORD*)(v20 + 48) = 0;
  *(_QWORD*)(v20 + 56) = 0;
  *(_QWORD*)(v20 + 64) = 0;
  *(_QWORD*)(v20 + 72) = 0;
  *(_DWORD*)(v20 + 80) = 0;
  v30 = 23;
  v31 = 20;
  v32 = (__int64*)v20;
  SdkRoutine_87cb80(&v30, 21, 0);
  v21 = v30;
  if ((v30 & 1) != 0) {
    v22 = v31;
  }
  else {
    v22 = (unsigned __int64)(unsigned __int8)v30 >> 1;
  }
  while (1) {
    v23 = (v21 & 1) != 0 ? v32 : (__int64*)((char*)&v30 + 4);
    v24 = swprintf_plt(v23, v22 + 1, &SdkData_bd12a8, v29);
    if ((v24 & 0x80000000) == 0) {
      break;
    }
    v22 = (2 * v22) | 1;
  LABEL_11:
    SdkRoutine_87cb80(&v30, v22, 0);
    v21 = v30;
  }
  if (v22 < v24) {
    v22 = v24;
    goto LABEL_11;
  }
  SdkRoutine_87cb80(&v30, v24, 0);
  v25 = v30;
  v26 = v31;
  v30 = 0;
  v31 = 0;
  *v19 = v25;
  v19[1] = v26;
  v27 = v32;
  v32 = nullptr;
  v19[2] = (__int64)v27;
  return SdkRoutine_87cbb0(&v30);
}

void __attribute__((noreturn)) string_7e4000(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8, __int64 a9,
                                             __int64 a10, __int64 a11, char a12)
{
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  SdkRoutine_87cbb0(&a12);
  _Unwind_Resume_plt_alt1(a1);
  v14 = v13;
  SdkRoutine_87cbb0(&a12);
  _Unwind_Resume_plt_alt1(v14);
  v16 = v15;
  SdkRoutine_87cbb0(&a12);
  _Unwind_Resume_plt_alt1(v16);
  __udf(0);
}

__int64 std___1_anonymous_as_integer_helper(unsigned __int8* a1, char* a2,
                                            _QWORD* a3, unsigned int a4)
{
  char v4;
  char* v5;
  char* v9;
  int* v10;
  int v11;
  int* v12;
  __int64 result;
  int v14;
  unsigned __int64 v15;
  bool v16;
  unsigned __int64 v17;
  unsigned __int8* v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  char* v21;
  unsigned __int64 v22;
  bool v23;
  unsigned __int64 v24;
  unsigned __int8* v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  char* v28;
  unsigned __int64 v29;
  char* v30;
  unsigned __int64 v31;
  char* v32;
  char* v33;
  struct {
    __int64 v34;
    unsigned __int64 v35;
    char* v36;
  } v34_;

  v4 = *a2;
  v5 = *((char**)a2 + 2);
  v33 = nullptr;
  if ((v4 & 1) != 0) {
    v9 = v5;
  }
  else {
    v9 = a2 + 1;
  }
  v10 = (int*)__errno_location_plt(a1, a2);
  v11 = *v10;
  v12 = v10;
  *v10 = 0;
  result = strtol_plt(v9, &v33, a4);
  v14 = *v12;
  *v12 = v11;
  if (v14 == 34) {
    v15 = *a1;
    v16 = (v15 & 1) == 0;
    v17 = v15 >> 1;
    if (v16) {
      v18 = a1 + 1;
    }
    else {
      v18 = *((unsigned __int8**)a1 + 2);
    }
    if (v16) {
      v19 = v17;
    }
    else {
      v19 = *((_QWORD*)a1 + 1);
    }
    v20 = v19 + 14;
    if (v19 + 14 >= 0xFFFFFFFFFFFFFFF7LL) {
    LABEL_26:
      locale_7d3920();
    }
    if (v20 >= 0x17) {
      if ((v20 | 7) == 0x17) {
        v29 = 26;
      }
      else {
        v29 = (v20 | 7) + 1;
      }
      v21 = (char*)SdkRoutine_85e050(v29);
      v34_.v35 = v19 + 14;
      v34_.v36 = v21;
      v34_.v34 = v29 | 1;
    }
    else {
      v34_.v35 = 0;
      v34_.v36 = nullptr;
      v34_.v34 = (unsigned __int8)(2 * v20);
      v21 = (char*)&v34_.v34 + 1;
      if (v19 == 0) {
      LABEL_35:
        strcpy(&v21[v19], ": out of range");
        if ((v34_.v34 & 1) != 0) {
          v30 = v34_.v36;
        }
        else {
          v30 = (char*)&v34_.v34 + 1;
        }
        locale_7d5830((__int64)v30);
      }
    }
    memmove_plt(v21, v18, v19);
    goto LABEL_35;
  }
  if (v33 == v9) {
    v22 = *a1;
    v23 = (v22 & 1) == 0;
    v24 = v22 >> 1;
    if (v23) {
      v25 = a1 + 1;
    }
    else {
      v25 = *((unsigned __int8**)a1 + 2);
    }
    if (v23) {
      v26 = v24;
    }
    else {
      v26 = *((_QWORD*)a1 + 1);
    }
    v27 = v26 + 15;
    if (v26 + 15 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_26;
    }
    if (v27 >= 0x17) {
      if ((v27 | 7) == 0x17) {
        v31 = 26;
      }
      else {
        v31 = (v27 | 7) + 1;
      }
      v28 = (char*)SdkRoutine_85e050(v31);
      v34_.v35 = v26 + 15;
      v34_.v36 = v28;
      v34_.v34 = v31 | 1;
    }
    else {
      v34_.v35 = 0;
      v34_.v36 = nullptr;
      v34_.v34 = (unsigned __int8)(2 * v27);
      v28 = (char*)&v34_.v34 + 1;
      if (v26 == 0) {
      LABEL_44:
        strcpy(&v28[v26], ": no conversion");
        if ((v34_.v34 & 1) != 0) {
          v32 = v34_.v36;
        }
        else {
          v32 = (char*)&v34_.v34 + 1;
        }
        string_7e4290((__int64)v32);
      }
    }
    memmove_plt(v28, v25, v26);
    goto LABEL_44;
  }
  if (a3 != nullptr) {
    *a3 = v33 - v9;
  }
  return result;
}

void __attribute__((noreturn)) string_7e4264(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8, __int64 a9,
                                             char a10)
{
  __int64 v11;
  __int64 v12;

  SdkRoutine_87cba0(&a10);
  _Unwind_Resume_plt_alt1(a1);
  v12 = v11;
  SdkRoutine_87cba0(&a10);
  _Unwind_Resume_plt_alt1(v12);
  __udf(0);
}

void __attribute__((noreturn)) string_7e4290(__int64 a1)
{
  __int64 v2;
  __int64 v3;

  v2 = __cxa_allocate_exception_plt(16);
  SdkRoutine_7e42f0(v2, a1);
  v3 = __cxa_throw_plt(v2, SdkData_e893c8, SdkData_e893d0);
  __cxa_free_exception_plt(v2);
  _Unwind_Resume_plt_alt1(v3);
  __udf(0);
}

#pragma GCC visibility pop
