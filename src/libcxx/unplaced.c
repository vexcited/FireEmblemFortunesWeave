#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 NgxRoutine_bb710(__int64, __int64);
__int64 NgxRoutine_bb830(__int64, __int64);
__int64 NgxRoutine_bbe20(__int64, __int64, __int64);
__int64 NgxRoutine_bc630(__int64, __int64, __int64);
__int64 NgxRoutine_bc9e0(_QWORD);
__int64 NgxRoutine_bc9e0_alt1() __asm__("NgxRoutine_bc9e0");
__int64 NgxRoutine_be820(__int64, __int64);
__int64 NgxRoutine_db240(__int64*);
__int64 _Unwind_Resume_plt(_QWORD);
extern _UNKNOWN* NgxData_951128;
extern _UNKNOWN* NgxData_951140;
extern __int64 NgxData_951170[8];
extern __int64 NgxData_951178[7];
extern __int64 NgxData_951180[6];
extern __int64 NgxData_951188[5];
extern __int64 NgxData_951190[4];
extern __int64 NgxData_951198[3];
extern __int64 NgxData_9511a0[2];
extern __int64 NgxData_9511a8;
extern void (*NgxData_9513b0[27])();
extern void (*NgxData_9513b8[26])();
extern void (*NgxData_9513c8[24])();
__int64 libcxx_bb400();
void __attribute__((noreturn)) libcxx_bb690(__int64 a1);
void __attribute__((noreturn)) libcxx_bb7f4(__int64 a1);
void __attribute__((noreturn)) libcxx_bb914(__int64 a1);

__int64 libcxx_bb400()
{
  __int64* v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  char* v6;
  char* v7;
  char* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  char* v22;
  char* v23;
  char* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 result;
  __int64 v32;
  __int64 v33;

  v0 = (__int64*)NgxData_951170[0];
  v1 = *(_QWORD*)NgxData_9513c8[0];
  NgxRoutine_bb710(NgxData_951170[0], *(_QWORD*)NgxData_9513c8[0]);
  v2 = NgxData_951178[0];
  v3 = *(_QWORD*)NgxData_9513b8[0];
  v4 = NgxData_951178[0] + 160;
  v5 = NgxData_951178[0] + 256;
  *(_QWORD*)((char*)((_UNKNOWN*)0xFCLL) + NgxData_951178[0] + 4) = 0;
  NgxRoutine_bbe20(v4, v3, v5);
  *(_QWORD*)&(*(_BYTE(*)[28])0x24LL)[v2 + 20] = 0;
  v6 = (char*)NgxData_951128;
  v7 = (char*)NgxData_951128 + 64;
  v8 = (char*)NgxData_951128 + 24;
  *(char**)((char*)((_UNKNOWN**)0x8LL) + v2) = (char*)NgxData_951128 + 64;
  *(_QWORD*)v2 = v8;
  NgxRoutine_be820((__int64)((_UNKNOWN**)0x8LL) + v2, v2 + 160);
  *(_QWORD*)((char*)((_UNKNOWN*)0x90LL) + v2) = 0;
  *(_DWORD*)((char*)((_UNKNOWN*)0x98LL) + v2) = -1;
  v9 = NgxData_951180[0];
  v10 = *(_QWORD*)NgxData_9513b0[0];
  v11 = NgxData_951180[0] + 160;
  v12 = NgxData_951180[0] + 256;
  *(_QWORD*)((char*)((_UNKNOWN*)0xFCLL) + NgxData_951180[0] + 4) = 0;
  NgxRoutine_bbe20(v11, v10, v12);
  *(_UNKNOWN**)((char*)((_UNKNOWN**)0x8LL) + v9) = v7;
  *(_QWORD*)&(*(_BYTE(*)[28])0x24LL)[v9 + 20] = 0;
  *(_QWORD*)v9 = v8;
  NgxRoutine_be820((__int64)((_UNKNOWN**)0x8LL) + v9, v9 + 160);
  *(_QWORD*)((char*)((_UNKNOWN*)0x90LL) + v9) = 0;
  *(_DWORD*)((char*)((_UNKNOWN*)0x98LL) + v9) = -1;
  v13 = NgxData_951188[0];
  v14 = NgxData_951188[0] + 160;
  v15 = NgxData_951188[0] + 256;
  *(_QWORD*)((char*)((_UNKNOWN*)0xFCLL) + NgxData_951188[0] + 4) = 0;
  NgxRoutine_bbe20(v14, v10, v15);
  *(_QWORD*)&(*(_BYTE(*)[28])0x24LL)[v13 + 20] = 0;
  *(_QWORD*)v13 = v6 + 24;
  *(_UNKNOWN**)((char*)((_UNKNOWN**)0x8LL) + v13) = v6 + 64;
  NgxRoutine_be820((__int64)((_UNKNOWN**)0x8LL) + v13, v13 + 160);
  v16 = *v0;
  *(_QWORD*)((char*)((_UNKNOWN*)0x90LL) + v13) = 0;
  *(_DWORD*)((char*)((_UNKNOWN*)0x98LL) + v13) = -1;
  *(__int64*)((char*)v0 + *(_QWORD*)(v16 - 24) + 136) = v2;
  v17 = *(_QWORD*)v9;
  *(_DWORD*)(v9 + *(_QWORD*)(*(_QWORD*)v9 - 24LL) + 8) |= 0x2000u;
  *(_QWORD*)(v9 + *(_QWORD*)(v17 - 24) + 136) = v2;
  v18 = (__int64*)NgxData_951190[0];
  NgxRoutine_bb830(NgxData_951190[0], v1);
  v19 = NgxData_951198[0];
  v20 = NgxData_951198[0] + 160;
  v21 = NgxData_951198[0] + 256;
  *(_QWORD*)((char*)((_UNKNOWN*)0xFCLL) + NgxData_951198[0] + 4) = 0;
  NgxRoutine_bc630(v20, v3, v21);
  *(_QWORD*)&(*(_BYTE(*)[28])0x24LL)[v19 + 20] = 0;
  v22 = (char*)NgxData_951140;
  v23 = (char*)NgxData_951140 + 64;
  v24 = (char*)NgxData_951140 + 24;
  *(char**)((char*)((_UNKNOWN**)0x8LL) + v19) = (char*)NgxData_951140 + 64;
  *(_QWORD*)v19 = v24;
  NgxRoutine_be820((__int64)((_UNKNOWN**)0x8LL) + v19, v19 + 160);
  *(_QWORD*)((char*)((_UNKNOWN*)0x90LL) + v19) = 0;
  *(_DWORD*)((char*)((_UNKNOWN*)0x98LL) + v19) = -1;
  v25 = NgxData_9511a0[0];
  v26 = NgxData_9511a0[0] + 160;
  v27 = NgxData_9511a0[0] + 256;
  *(_QWORD*)((char*)((_UNKNOWN*)0xFCLL) + NgxData_9511a0[0] + 4) = 0;
  NgxRoutine_bc630(v26, v10, v27);
  *(_UNKNOWN**)((char*)((_UNKNOWN**)0x8LL) + v25) = v23;
  *(_QWORD*)&(*(_BYTE(*)[28])0x24LL)[v25 + 20] = 0;
  *(_QWORD*)v25 = v24;
  NgxRoutine_be820((__int64)((_UNKNOWN**)0x8LL) + v25, v25 + 160);
  *(_QWORD*)((char*)((_UNKNOWN*)0x90LL) + v25) = 0;
  *(_DWORD*)((char*)((_UNKNOWN*)0x98LL) + v25) = -1;
  v28 = NgxData_9511a8;
  v29 = NgxData_9511a8 + 160;
  v30 = NgxData_9511a8 + 256;
  *(_QWORD*)((char*)((_UNKNOWN*)0xFCLL) + NgxData_9511a8 + 4) = 0;
  NgxRoutine_bc630(v29, v10, v30);
  *(_QWORD*)&(*(_BYTE(*)[28])0x24LL)[v28 + 20] = 0;
  *(_QWORD*)v28 = v22 + 24;
  *(_UNKNOWN**)((char*)((_UNKNOWN**)0x8LL) + v28) = v22 + 64;
  result = NgxRoutine_be820((__int64)((_UNKNOWN**)0x8LL) + v28, v28 + 160);
  v32 = *v18;
  *(_QWORD*)((char*)((_UNKNOWN*)0x90LL) + v28) = 0;
  *(_DWORD*)((char*)((_UNKNOWN*)0x98LL) + v28) = -1;
  *(__int64*)((char*)v18 + *(_QWORD*)(v32 - 24) + 136) = v19;
  v33 = *(_QWORD*)v25;
  *(_DWORD*)(v25 + *(_QWORD*)(*(_QWORD*)v25 - 24LL) + 8) |= 0x2000u;
  *(_QWORD*)(v25 + *(_QWORD*)(v33 - 24) + 136) = v19;
  return result;
}

void __attribute__((noreturn)) libcxx_bb690(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  NgxRoutine_bc9e0(v4 + 8);
  v7 = _Unwind_Resume_plt(a1);
  NgxRoutine_bc9e0(v1 + 8);
  v8 = _Unwind_Resume_plt(v7);
  NgxRoutine_bc9e0(v2 + 8);
  v9 = _Unwind_Resume_plt(v8);
  NgxRoutine_bc9e0(v5 + 8);
  v10 = _Unwind_Resume_plt(v9);
  NgxRoutine_bc9e0(v4 + 8);
  v11 = _Unwind_Resume_plt(v10);
  NgxRoutine_bc9e0(v3 + 8);
  _Unwind_Resume_plt(v11);
  __udf(0);
}

void __attribute__((noreturn)) libcxx_bb7f4(__int64 a1)
{
  _QWORD* v1;
  __int64 v3;
  __int64 v4;
  __int64 v6;

  NgxRoutine_bc9e0_alt1();
  v6 = _Unwind_Resume_plt(a1);
  NgxRoutine_db240((__int64*)(v4 + 24));
  *v1 = v3;
  NgxRoutine_db240(v1 + 1);
  _Unwind_Resume_plt(v6);
  __udf(0);
}

void __attribute__((noreturn)) libcxx_bb914(__int64 a1)
{
  _QWORD* v1;
  __int64 v3;
  __int64 v4;
  __int64 v6;

  NgxRoutine_bc9e0_alt1();
  v6 = _Unwind_Resume_plt(a1);
  NgxRoutine_db240((__int64*)(v4 + 24));
  *v1 = v3;
  NgxRoutine_db240(v1 + 1);
  _Unwind_Resume_plt(v6);
  __udf(0);
}

#pragma GCC visibility pop
