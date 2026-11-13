#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void
    nn_fs_detail_GetFileSystemProxyServiceObject_plt(PSEUDO_X8);
__int64 fw_rtld_RegisterCrtDestructor();
__int64 nn_fs_detail_Allocate_plt(unsigned __int64);
__int64 nn_fs_detail_Deallocate_plt(__int64, unsigned __int64);
__int64 nn_fs_e04f0();
__int64 nn_fs_e0880();
__int64 nn_fs_e0b90();
__int64 nn_util_VSNPrintf_plt(_QWORD, _QWORD, _QWORD, _QWORD);
extern _UNKNOWN SdkData_eaf458;
extern _UNKNOWN SdkData_eaf468;
extern _UNKNOWN SdkData_eaf478;
extern __int64 SdkData_eaf450;
extern __int64 SdkData_eaf460;
extern __int64 SdkData_eaf470;
extern int SdkData_eafa2c;
int __cxa_guard_acquire_plt(__int64);
void SdkRoutine_118e80();
void __cxa_guard_release_plt(__int64);
__attribute__((swiftcall)) void nn_fs_e0450(PSEUDO_X8 x8_);
__attribute__((swiftcall)) void nn_fs_e07e0(PSEUDO_X8 x8_);
__attribute__((swiftcall)) void nn_fs_e0af0(PSEUDO_X8 x8_);
__attribute__((swiftcall)) void nn_fs_f72d0(PSEUDO_X8 x8_, __int64 a1);
__attribute__((swiftcall)) void nn_fs_f72f0(PSEUDO_X8 x8_, __int64 a1);
__int64 nn_fs_1184c0(__int64 this_, ...);

__attribute__((swiftcall)) void nn_fs_e0450(PSEUDO_X8 x8_)
{
  _QWORD* a1 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 (***result)(_QWORD);
  _QWORD* v3;
  int v4;

  if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_eaf458,
                            memory_order_acquire) &
       1) == 0) {
    v3 = a1;
    v4 = __cxa_guard_acquire_plt((__int64)&SdkData_eaf458);
    a1 = v3;
    if (v4 != 0) {
      nn_fs_e04f0();
      fw_rtld_RegisterCrtDestructor();
      __cxa_guard_release_plt((__int64)&SdkData_eaf458);
      a1 = v3;
    }
  }
  result = (__int64 (***)(_QWORD))SdkData_eaf450;
  *a1 = SdkData_eaf450;
  if (result != nullptr) {
    (__int64 (***)(_QWORD)) (**result)(result);
    return;
  }
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void nn_fs_e07e0(PSEUDO_X8 x8_)
{
  _QWORD* a1 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 (***result)(_QWORD);
  _QWORD* v3;
  int v4;

  if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_eaf468,
                            memory_order_acquire) &
       1) == 0) {
    v3 = a1;
    v4 = __cxa_guard_acquire_plt((__int64)&SdkData_eaf468);
    a1 = v3;
    if (v4 != 0) {
      nn_fs_e0880();
      fw_rtld_RegisterCrtDestructor();
      __cxa_guard_release_plt((__int64)&SdkData_eaf468);
      a1 = v3;
    }
  }
  result = (__int64 (***)(_QWORD))SdkData_eaf460;
  *a1 = SdkData_eaf460;
  if (result != nullptr) {
    (__int64 (***)(_QWORD)) (**result)(result);
    return;
  }
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void nn_fs_e0af0(PSEUDO_X8 x8_)
{
  _QWORD* a1 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 (***result)(_QWORD);
  _QWORD* v3;
  int v4;

  if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_eaf478,
                            memory_order_acquire) &
       1) == 0) {
    v3 = a1;
    v4 = __cxa_guard_acquire_plt((__int64)&SdkData_eaf478);
    a1 = v3;
    if (v4 != 0) {
      nn_fs_e0b90();
      fw_rtld_RegisterCrtDestructor();
      __cxa_guard_release_plt((__int64)&SdkData_eaf478);
      a1 = v3;
    }
  }
  result = (__int64 (***)(_QWORD))SdkData_eaf470;
  *a1 = SdkData_eaf470;
  if (result != nullptr) {
    (__int64 (***)(_QWORD)) (**result)(result);
    return;
  }
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void nn_fs_f72d0(PSEUDO_X8 x8_, __int64 a1)
{
  _QWORD* a2 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 (***result)(_QWORD);

  result = *(__int64 (****)(_QWORD))(a1 + 16);
  *a2 = result;
  if (result != nullptr) {
    (__int64 (***)(_QWORD)) (**result)(result);
    return;
  }
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void nn_fs_f72f0(PSEUDO_X8 x8_, __int64 a1)
{
  _QWORD* a2 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 (***result)(_QWORD);

  result = *(__int64 (****)(_QWORD))(a1 + 8);
  *a2 = result;
  if (result != nullptr) {
    (__int64 (***)(_QWORD)) (**result)(result);
    return;
  }
  {
    result;
    return;
  }
}

__int64 nn_fs_1184c0(__int64 this_, ...)
{

#pragma clang fp contract(off)
  double v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  int v14;
  int v15;
  __int64 v16;
  __int64 v17;
  double v18;
  __int64 v19;
  double v20;
  __int64 v21;
  double v22;
  __int64 v23;
  double v24;
  __int64 v25;
  __builtin_va_list va;
  __builtin_va_list va1;
  __builtin_va_list va2;
  _QWORD v29[2];
  __int64 v30;

  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v5 = COERCE_AS(__typeof__(v5),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v7 = COERCE_AS(__typeof__(v7),
                 PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v9 = COERCE_AS(__typeof__(v9),
                 PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
  __builtin_va_start(va, this_);
  __builtin_va_arg(va, _QWORD);
  __builtin_va_arg(va, _QWORD);
  __builtin_va_arg(va, _QWORD);
  __builtin_va_arg(va, _QWORD);
  __builtin_va_arg(va, _QWORD);
  __builtin_va_arg(va, _QWORD);
  __builtin_va_arg(va, _QWORD);
  v18 = __builtin_va_arg(va, double);
  v20 = __builtin_va_arg(va, double);
  v22 = __builtin_va_arg(va, double);
  v2 = __builtin_va_arg(va, double);
  __builtin_va_end(va);
  __builtin_va_start(va, this_);
  __builtin_va_start(va1, this_);
  v24 = v2;
  if ((SdkData_eafa2c & 2) != 0) {
    v3 = this_;
    v4 = nn_fs_detail_Allocate_plt(0x400u),
    v10 = COERCE_AS(__typeof__(v10),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v11 = COERCE_AS(__typeof__(v11),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v5 = COERCE_AS(__typeof__(v5),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v6 = COERCE_AS(__typeof__(v6),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v7 = COERCE_AS(__typeof__(v7),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v8 = COERCE_AS(__typeof__(v8),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v9 = COERCE_AS(__typeof__(v9),
                   PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
    if (v4 != 0) {
      v12 = 1024;
      v13 = v4;
      v14 = 1024;
      while (1) {
        __builtin_va_copy(va2, va);
        v15 = nn_util_VSNPrintf_plt(v13, v14, v3, (__int64)&va2),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v11 = COERCE_AS(__typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v5 = COERCE_AS(__typeof__(v5),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v6 = COERCE_AS(__typeof__(v6),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v7 = COERCE_AS(__typeof__(v7),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v8 = COERCE_AS(__typeof__(v8),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v9 = COERCE_AS(__typeof__(v9),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
        if (v15 < v14) {
          break;
        }
        v14 = v15 + 1;
        v16 = nn_fs_detail_Allocate_plt(v15 + 1),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v11 = COERCE_AS(__typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v5 = COERCE_AS(__typeof__(v5),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v6 = COERCE_AS(__typeof__(v6),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v7 = COERCE_AS(__typeof__(v7),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v8 = COERCE_AS(__typeof__(v8),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v9 = COERCE_AS(__typeof__(v9),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
        v4 = nn_fs_detail_Deallocate_plt(v13, v12),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v11 = COERCE_AS(__typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v5 = COERCE_AS(__typeof__(v5),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v6 = COERCE_AS(__typeof__(v6),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v7 = COERCE_AS(__typeof__(v7),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v8 = COERCE_AS(__typeof__(v8),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v9 = COERCE_AS(__typeof__(v9),
                       PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
        v12 = v14;
        v13 = v16;
        if (v16 == 0) {
          return (
              (__int64 (*)(__int64, __int64, __int64, __int64, __int64, __int64,
                           __int64, __int64, _QWORD, __int64, _QWORD, __int64,
                           _QWORD, __int64, _QWORD, __int64))SdkRoutine_118e80)(
              v4, v5, v6, v7, v8, v9, v10, v11, *(_QWORD*)&v18, v19,
              *(_QWORD*)&v20, v21, *(_QWORD*)&v22, v23, *(_QWORD*)&v24, v25);
        }
      }
      v17 = v15;
      v30 = 0;
      nn_fs_detail_GetFileSystemProxyServiceObject_plt((void*)(&v30)),
          v10 = COERCE_AS(__typeof__(v10),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v11 = COERCE_AS(__typeof__(v11),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v5 = COERCE_AS(__typeof__(v5),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v6 = COERCE_AS(__typeof__(v6),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v7 = COERCE_AS(__typeof__(v7),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v8 = COERCE_AS(__typeof__(v8),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v9 = COERCE_AS(__typeof__(v9),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
      v29[0] = v13;
      v29[1] = v17;
      (*(void (**)(__int64, _QWORD*))(*(_QWORD*)v30 + 944LL))(v30, v29),
          v10 = COERCE_AS(__typeof__(v10),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v11 = COERCE_AS(__typeof__(v11),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v5 = COERCE_AS(__typeof__(v5),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v6 = COERCE_AS(__typeof__(v6),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v7 = COERCE_AS(__typeof__(v7),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v8 = COERCE_AS(__typeof__(v8),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v9 = COERCE_AS(__typeof__(v9),
                         PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
      if (v30 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v30 + 8LL))(v30),
            v10 = COERCE_AS(__typeof__(v10),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v11 = COERCE_AS(__typeof__(v11),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v5 = COERCE_AS(__typeof__(v5),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v6 = COERCE_AS(__typeof__(v6),
                           PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v7 = COERCE_AS(__typeof__(v7),
                           PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v8 = COERCE_AS(__typeof__(v8),
                           PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v9 = COERCE_AS(__typeof__(v9),
                           PSEUDO_REGISTER(unsigned long long, "x5", "=r"));
      }
      return nn_fs_detail_Deallocate_plt(v13, v12);
    }
    else {
      return ((__int64 (*)(__int64, __int64, __int64, __int64, __int64, __int64,
                           __int64, __int64, _QWORD, __int64, _QWORD, __int64,
                           _QWORD, __int64, _QWORD, __int64))SdkRoutine_118e80)(
          v4, v5, v6, v7, v8, v9, v10, v11, *(_QWORD*)&v18, v19, *(_QWORD*)&v20,
          v21, *(_QWORD*)&v22, v23, *(_QWORD*)&v24, v25);
    }
  }
  return this_;
}

#pragma GCC visibility pop
