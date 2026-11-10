#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_87cd80(_QWORD, _QWORD);
__int64 std___1_locale_Destroy_locale_plt(_QWORD);
__int64 std___1_locale_locale_plt_86ee50(_QWORD);
__int64 std___1_locale_locale_plt_87cd70(_QWORD, _QWORD);
__int64 strlen_plt(_QWORD);
extern __int64 SdkData_e888e8;
extern __int64 SdkData_e897b0;
__int64 std___1_strstreambuf_strstreambuf_8315e0(void* this_, __int64 a2);
__int64 std___1_strstreambuf_strstreambuf_831650(void* this_,
                                                 void* (*a2)(unsigned __int64),
                                                 void (*a3)(void*));
__int64 std___1_strstreambuf_strstreambuf_831740(void* this_, char* a2,
                                                 __int64 a3, char* a4);
__int64 std___1_strstreambuf_strstreambuf_8317f0(void* this_, const char* a2,
                                                 __int64 a3);
__int64 std___1_strstreambuf_strstreambuf_831890(void* this_, signed __int8* a2,
                                                 __int64 a3, signed __int8* a4);
__int64 std___1_strstreambuf_strstreambuf_831940(void* this_,
                                                 const signed __int8* a2,
                                                 __int64 a3);
__int64 std___1_strstreambuf_strstreambuf_8319e0(void* this_,
                                                 unsigned __int8* a2,
                                                 __int64 a3,
                                                 unsigned __int8* a4);
__int64 std___1_strstreambuf_strstreambuf_831a90(void* this_,
                                                 const unsigned __int8* a2,
                                                 __int64 a3);
__int64 std___1_strstreambuf_swap(void* this_, void* a2);

__int64 std___1_strstreambuf_strstreambuf_8315e0(void* this_, __int64 a2)
{
  __int64 result;
  __int64 v5;

  *(_QWORD*)this_ = SdkData_e888e8 + 16;
  result = std___1_locale_locale_plt_86ee50((char*)this_ + 8);
  *((_QWORD*)this_ + 6) = 0;
  *((_QWORD*)this_ + 7) = 0;
  *((_QWORD*)this_ + 4) = 0;
  *((_QWORD*)this_ + 5) = 0;
  *((_QWORD*)this_ + 2) = 0;
  *((_QWORD*)this_ + 3) = 0;
  v5 = SdkData_e897b0;
  *((_QWORD*)this_ + 9) = a2;
  *((_QWORD*)this_ + 10) = 0;
  *((_QWORD*)this_ + 11) = 0;
  *(_QWORD*)this_ = v5 + 16;
  *((_DWORD*)this_ + 16) = 4;
  return result;
}

__int64 std___1_strstreambuf_strstreambuf_831650(void* this_,
                                                 void* (*a2)(unsigned __int64),
                                                 void (*a3)(void*))
{
  __int64 result;
  __int64 v7;

  *(_QWORD*)this_ = SdkData_e888e8 + 16;
  result = std___1_locale_locale_plt_86ee50((char*)this_ + 8);
  *((_QWORD*)this_ + 6) = 0;
  *((_QWORD*)this_ + 7) = 0;
  *((_QWORD*)this_ + 4) = 0;
  *((_QWORD*)this_ + 5) = 0;
  *((_QWORD*)this_ + 2) = 0;
  *((_QWORD*)this_ + 3) = 0;
  v7 = SdkData_e897b0;
  *((_QWORD*)this_ + 11) = a3;
  *(_QWORD*)this_ = v7 + 16;
  *((_DWORD*)this_ + 16) = 4;
  *((_QWORD*)this_ + 9) = 4096;
  *((_QWORD*)this_ + 10) = a2;
  return result;
}

__int64 std___1_strstreambuf_strstreambuf_831740(void* this_, char* a2,
                                                 __int64 a3, char* a4)
{
  __int64 v8;
  __int64 result;

  *(_QWORD*)this_ = SdkData_e888e8 + 16;
  std___1_locale_locale_plt_86ee50((char*)this_ + 8);
  *((_QWORD*)this_ + 6) = 0;
  *((_QWORD*)this_ + 7) = 0;
  *((_QWORD*)this_ + 4) = 0;
  *((_QWORD*)this_ + 5) = 0;
  *((_QWORD*)this_ + 2) = 0;
  *((_QWORD*)this_ + 3) = 0;
  v8 = SdkData_e897b0;
  *((_DWORD*)this_ + 16) = 0;
  *((_QWORD*)this_ + 11) = 0;
  *(_QWORD*)this_ = v8 + 16;
  *((_QWORD*)this_ + 9) = 4096;
  *((_QWORD*)this_ + 10) = 0;
  if (a3 != 0) {
    if (a3 >= 0) {
      result = a3;
    }
    else {
      result = 0x7FFFFFFF;
    }
    if (a4 != nullptr) {
      goto LABEL_6;
    }
  LABEL_8:
    a4 = &a2[result];
    goto LABEL_9;
  }
  result = strlen_plt(a2);
  if (a4 == nullptr) {
    goto LABEL_8;
  }
LABEL_6:
  *((_QWORD*)this_ + 5) = a4;
  *((_QWORD*)this_ + 6) = a4;
  *((_QWORD*)this_ + 7) = &a4[result];
LABEL_9:
  *((_QWORD*)this_ + 2) = a2;
  *((_QWORD*)this_ + 3) = a2;
  *((_QWORD*)this_ + 4) = a4;
  return result;
}

__int64 std___1_strstreambuf_strstreambuf_8317f0(void* this_, const char* a2,
                                                 __int64 a3)
{
  __int64 v6;
  __int64 result;

  *(_QWORD*)this_ = SdkData_e888e8 + 16;
  std___1_locale_locale_plt_86ee50((char*)this_ + 8);
  *((_QWORD*)this_ + 6) = 0;
  *((_QWORD*)this_ + 7) = 0;
  *((_QWORD*)this_ + 4) = 0;
  *((_QWORD*)this_ + 5) = 0;
  *((_QWORD*)this_ + 2) = 0;
  *((_QWORD*)this_ + 3) = 0;
  v6 = SdkData_e897b0;
  *((_QWORD*)this_ + 11) = 0;
  *(_QWORD*)this_ = v6 + 16;
  *((_DWORD*)this_ + 16) = 2;
  *((_QWORD*)this_ + 9) = 4096;
  *((_QWORD*)this_ + 10) = 0;
  if (a3 != 0) {
    if (a3 >= 0) {
      result = a3;
    }
    else {
      result = 0x7FFFFFFF;
    }
  }
  else {
    result = strlen_plt(a2);
  }
  *((_QWORD*)this_ + 2) = a2;
  *((_QWORD*)this_ + 3) = a2;
  *((_QWORD*)this_ + 4) = &a2[result];
  return result;
}

__int64 std___1_strstreambuf_strstreambuf_831890(void* this_, signed __int8* a2,
                                                 __int64 a3, signed __int8* a4)
{
  __int64 v8;
  __int64 result;

  *(_QWORD*)this_ = SdkData_e888e8 + 16;
  std___1_locale_locale_plt_86ee50((char*)this_ + 8);
  *((_QWORD*)this_ + 6) = 0;
  *((_QWORD*)this_ + 7) = 0;
  *((_QWORD*)this_ + 4) = 0;
  *((_QWORD*)this_ + 5) = 0;
  *((_QWORD*)this_ + 2) = 0;
  *((_QWORD*)this_ + 3) = 0;
  v8 = SdkData_e897b0;
  *((_DWORD*)this_ + 16) = 0;
  *((_QWORD*)this_ + 11) = 0;
  *(_QWORD*)this_ = v8 + 16;
  *((_QWORD*)this_ + 9) = 4096;
  *((_QWORD*)this_ + 10) = 0;
  if (a3 != 0) {
    if (a3 >= 0) {
      result = a3;
    }
    else {
      result = 0x7FFFFFFF;
    }
    if (a4 != nullptr) {
      goto LABEL_6;
    }
  LABEL_8:
    a4 = &a2[result];
    goto LABEL_9;
  }
  result = strlen_plt(a2);
  if (a4 == nullptr) {
    goto LABEL_8;
  }
LABEL_6:
  *((_QWORD*)this_ + 5) = a4;
  *((_QWORD*)this_ + 6) = a4;
  *((_QWORD*)this_ + 7) = &a4[result];
LABEL_9:
  *((_QWORD*)this_ + 2) = a2;
  *((_QWORD*)this_ + 3) = a2;
  *((_QWORD*)this_ + 4) = a4;
  return result;
}

__int64 std___1_strstreambuf_strstreambuf_831940(void* this_,
                                                 const signed __int8* a2,
                                                 __int64 a3)
{
  __int64 v6;
  __int64 result;

  *(_QWORD*)this_ = SdkData_e888e8 + 16;
  std___1_locale_locale_plt_86ee50((char*)this_ + 8);
  *((_QWORD*)this_ + 6) = 0;
  *((_QWORD*)this_ + 7) = 0;
  *((_QWORD*)this_ + 4) = 0;
  *((_QWORD*)this_ + 5) = 0;
  *((_QWORD*)this_ + 2) = 0;
  *((_QWORD*)this_ + 3) = 0;
  v6 = SdkData_e897b0;
  *((_QWORD*)this_ + 11) = 0;
  *(_QWORD*)this_ = v6 + 16;
  *((_DWORD*)this_ + 16) = 2;
  *((_QWORD*)this_ + 9) = 4096;
  *((_QWORD*)this_ + 10) = 0;
  if (a3 != 0) {
    if (a3 >= 0) {
      result = a3;
    }
    else {
      result = 0x7FFFFFFF;
    }
  }
  else {
    result = strlen_plt(a2);
  }
  *((_QWORD*)this_ + 2) = a2;
  *((_QWORD*)this_ + 3) = a2;
  *((_QWORD*)this_ + 4) = &a2[result];
  return result;
}

__int64 std___1_strstreambuf_strstreambuf_8319e0(void* this_,
                                                 unsigned __int8* a2,
                                                 __int64 a3,
                                                 unsigned __int8* a4)
{
  __int64 v8;
  __int64 result;

  *(_QWORD*)this_ = SdkData_e888e8 + 16;
  std___1_locale_locale_plt_86ee50((char*)this_ + 8);
  *((_QWORD*)this_ + 6) = 0;
  *((_QWORD*)this_ + 7) = 0;
  *((_QWORD*)this_ + 4) = 0;
  *((_QWORD*)this_ + 5) = 0;
  *((_QWORD*)this_ + 2) = 0;
  *((_QWORD*)this_ + 3) = 0;
  v8 = SdkData_e897b0;
  *((_DWORD*)this_ + 16) = 0;
  *((_QWORD*)this_ + 11) = 0;
  *(_QWORD*)this_ = v8 + 16;
  *((_QWORD*)this_ + 9) = 4096;
  *((_QWORD*)this_ + 10) = 0;
  if (a3 != 0) {
    if (a3 >= 0) {
      result = a3;
    }
    else {
      result = 0x7FFFFFFF;
    }
    if (a4 != nullptr) {
      goto LABEL_6;
    }
  LABEL_8:
    a4 = &a2[result];
    goto LABEL_9;
  }
  result = strlen_plt(a2);
  if (a4 == nullptr) {
    goto LABEL_8;
  }
LABEL_6:
  *((_QWORD*)this_ + 5) = a4;
  *((_QWORD*)this_ + 6) = a4;
  *((_QWORD*)this_ + 7) = &a4[result];
LABEL_9:
  *((_QWORD*)this_ + 2) = a2;
  *((_QWORD*)this_ + 3) = a2;
  *((_QWORD*)this_ + 4) = a4;
  return result;
}

__int64 std___1_strstreambuf_strstreambuf_831a90(void* this_,
                                                 const unsigned __int8* a2,
                                                 __int64 a3)
{
  __int64 v6;
  __int64 result;

  *(_QWORD*)this_ = SdkData_e888e8 + 16;
  std___1_locale_locale_plt_86ee50((char*)this_ + 8);
  *((_QWORD*)this_ + 6) = 0;
  *((_QWORD*)this_ + 7) = 0;
  *((_QWORD*)this_ + 4) = 0;
  *((_QWORD*)this_ + 5) = 0;
  *((_QWORD*)this_ + 2) = 0;
  *((_QWORD*)this_ + 3) = 0;
  v6 = SdkData_e897b0;
  *((_QWORD*)this_ + 11) = 0;
  *(_QWORD*)this_ = v6 + 16;
  *((_DWORD*)this_ + 16) = 2;
  *((_QWORD*)this_ + 9) = 4096;
  *((_QWORD*)this_ + 10) = 0;
  if (a3 != 0) {
    if (a3 >= 0) {
      result = a3;
    }
    else {
      result = 0x7FFFFFFF;
    }
  }
  else {
    result = strlen_plt(a2);
  }
  *((_QWORD*)this_ + 2) = a2;
  *((_QWORD*)this_ + 3) = a2;
  *((_QWORD*)this_ + 4) = &a2[result];
  return result;
}

__int64 std___1_strstreambuf_swap(void* this_, void* a2)
{
  __int64 result;
  __int64 v5;
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
  _BYTE v16[8];

  std___1_locale_locale_plt_87cd70(v16, (char*)this_ + 8);
  SdkRoutine_87cd80((char*)this_ + 8, (char*)a2 + 8);
  SdkRoutine_87cd80((char*)a2 + 8, v16);
  result = std___1_locale_Destroy_locale_plt(v16);
  v5 = *((_QWORD*)this_ + 2);
  *((_QWORD*)this_ + 2) = *((_QWORD*)a2 + 2);
  *((_QWORD*)a2 + 2) = v5;
  v6 = *((_QWORD*)this_ + 3);
  *((_QWORD*)this_ + 3) = *((_QWORD*)a2 + 3);
  *((_QWORD*)a2 + 3) = v6;
  v7 = *((_QWORD*)this_ + 4);
  *((_QWORD*)this_ + 4) = *((_QWORD*)a2 + 4);
  *((_QWORD*)a2 + 4) = v7;
  v8 = *((_QWORD*)this_ + 5);
  *((_QWORD*)this_ + 5) = *((_QWORD*)a2 + 5);
  *((_QWORD*)a2 + 5) = v8;
  v9 = *((_QWORD*)this_ + 6);
  *((_QWORD*)this_ + 6) = *((_QWORD*)a2 + 6);
  *((_QWORD*)a2 + 6) = v9;
  v10 = *((_QWORD*)this_ + 7);
  *((_QWORD*)this_ + 7) = *((_QWORD*)a2 + 7);
  *((_QWORD*)a2 + 7) = v10;
  LODWORD(v10) = *((_DWORD*)this_ + 16);
  v11 = *((_QWORD*)a2 + 9);
  v12 = *((_QWORD*)a2 + 10);
  *((_DWORD*)this_ + 16) = *((_DWORD*)a2 + 16);
  *((_DWORD*)a2 + 16) = v10;
  v13 = *((_QWORD*)this_ + 9);
  v14 = *((_QWORD*)this_ + 10);
  *((_QWORD*)this_ + 9) = v11;
  *((_QWORD*)this_ + 10) = v12;
  *((_QWORD*)a2 + 9) = v13;
  *((_QWORD*)a2 + 10) = v14;
  v15 = *((_QWORD*)this_ + 11);
  *((_QWORD*)this_ + 11) = *((_QWORD*)a2 + 11);
  *((_QWORD*)a2 + 11) = v15;
  return result;
}

#pragma GCC visibility pop
