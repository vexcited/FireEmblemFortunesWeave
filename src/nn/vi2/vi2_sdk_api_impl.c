#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 memset_plt(void* this_, void*, int, unsigned __int64);
unsigned int* nn_sm_detail_CloseSession(unsigned int* result);
unsigned int* vi2_sdk_api_5e0bd0(unsigned int* result);
__int64 vi2_sdk_api_5e0bf0(void* a1, __int64 a2, __int64 a3,
                           unsigned __int64 a4);
__int64 vi2_sdk_api_5e0dc0(__int64 result);

unsigned int* vi2_sdk_api_5e0bd0(unsigned int* result)
{
  if (*((_BYTE*)result + 4) == 1) {
    return nn_sm_detail_CloseSession(result + 2);
  }
  return result;
}

__int64 vi2_sdk_api_5e0bf0(void* a1, __int64 a2, __int64 a3,
                           unsigned __int64 a4)
{
  void* v4;
  unsigned __int64* v5;

  v4 = a1;
  v5 = (unsigned __int64*)((char*)a1 + 40);
  memset_plt(a1, nullptr, 672, a4);
  atomic_store(0xFFFFFFFFFFFFFF00LL, v5);
  *((_QWORD*)v4 + 15) = 0;
  v4 = (void*)((char*)v4 + 120);
  *((_QWORD*)v4 - 2) = 0;
  *((_QWORD*)v4 - 1) = 0;
  *((_QWORD*)v4 - 4) = 0;
  *((_QWORD*)v4 - 3) = 0;
  *((_QWORD*)v4 - 6) = 0;
  *((_QWORD*)v4 - 5) = 0;
  *((_QWORD*)v4 - 7) = 0;
  *((_QWORD*)v4 + 15) = 0;
  *((_QWORD*)v4 + 14) = 0;
  *((_QWORD*)v4 + 13) = 0;
  *((_QWORD*)v4 + 12) = 0;
  *((_QWORD*)v4 + 11) = 0;
  *((_QWORD*)v4 + 10) = 0;
  *((_QWORD*)v4 + 9) = 0;
  *((_QWORD*)v4 + 8) = 0;
  *((_QWORD*)v4 + 7) = 0;
  *((_QWORD*)v4 + 6) = 0;
  *((_QWORD*)v4 + 5) = 0;
  *((_QWORD*)v4 + 4) = 0;
  *((_QWORD*)v4 - 9) = 0;
  *((_QWORD*)v4 - 8) = 0;
  *((_QWORD*)v4 + 3) = 0;
  *((_QWORD*)v4 + 2) = 0;
  *((_QWORD*)v4 + 1) = 0;
  atomic_store(1u, (unsigned int*)v4);
  atomic_store(0, (unsigned int*)v4 + 1);
  atomic_store(0, (unsigned int*)v4 + 2);
  atomic_store(0, (unsigned int*)v4 + 3);
  atomic_store(0, (unsigned int*)v4 + 4);
  atomic_store(0, (unsigned int*)v4 + 5);
  atomic_store(0, (unsigned int*)v4 + 6);
  atomic_store(0, (unsigned int*)v4 + 7);
  atomic_store(0, (unsigned int*)v4 + 8);
  atomic_store(0, (unsigned int*)v4 + 9);
  atomic_store(0, (unsigned int*)v4 + 10);
  atomic_store(0, (unsigned int*)v4 + 11);
  atomic_store(0, (unsigned int*)v4 + 12);
  atomic_store(0, (unsigned int*)v4 + 13);
  atomic_store(0, (unsigned int*)v4 + 14);
  atomic_store(0, (unsigned int*)v4 + 15);
  atomic_store(0, (unsigned int*)v4 + 16);
  atomic_store(0, (unsigned int*)v4 + 17);
  atomic_store(0, (unsigned int*)v4 + 18);
  atomic_store(0, (unsigned int*)v4 + 19);
  atomic_store(0, (unsigned int*)v4 + 20);
  atomic_store(0, (unsigned int*)v4 + 21);
  atomic_store(0, (unsigned int*)v4 + 22);
  atomic_store(0, (unsigned int*)v4 + 23);
  atomic_store(0, (unsigned int*)v4 + 24);
  atomic_store(0, (unsigned int*)v4 + 25);
  atomic_store(0, (unsigned int*)v4 + 26);
  atomic_store(0, (unsigned int*)v4 + 27);
  atomic_store(0, (unsigned int*)v4 + 28);
  atomic_store(0, (unsigned int*)v4 + 29);
  atomic_store(0, (unsigned int*)v4 + 30);
  atomic_store(0, (unsigned int*)v4 + 31);
  *((_QWORD*)v4 + 32) = 0;
  *((_QWORD*)v4 + 33) = 0;
  *((_QWORD*)v4 + 30) = 0;
  *((_QWORD*)v4 + 31) = 0;
  *((_QWORD*)v4 + 28) = 0;
  *((_QWORD*)v4 + 29) = 0;
  *((_QWORD*)v4 + 26) = 0;
  *((_QWORD*)v4 + 27) = 0;
  *((_QWORD*)v4 + 24) = 0;
  *((_QWORD*)v4 + 25) = 0;
  *((_QWORD*)v4 + 22) = 0;
  *((_QWORD*)v4 + 23) = 0;
  *((_QWORD*)v4 + 20) = 0;
  *((_QWORD*)v4 + 21) = 0;
  *((_QWORD*)v4 + 18) = 0;
  *((_QWORD*)v4 + 19) = 0;
  *((_QWORD*)v4 + 16) = 0;
  *((_QWORD*)v4 + 17) = 0;
  *((_QWORD*)v4 + 34) = 0;
  *((_QWORD*)v4 + 35) = (char*)v4 + 280;
  *((_QWORD*)v4 + 36) = (char*)v4 + 280;
  return memset_plt((void*)((char*)v4 + 296), nullptr, 264,
                    (unsigned __int64)v4 + 12);
}

__int64 vi2_sdk_api_5e0dc0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 (*v4)(_QWORD*);
  _QWORD v5[3];

  v3 = *(_QWORD*)(result + 648);
  if (v3 != 0) {
    *(_QWORD*)(result + 648) = 0;
    if (atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 72),
                                  0xFFFFFFFFFFFFFFFFLL,
                                  memory_order_release) == 1) {
      v5[1] = v1;
      v5[2] = v2;
      __builtin_arm_dmb(9u);
      v4 = *(__int64 (**)(_QWORD*))(v3 + 56);
      v5[0] = *(_QWORD*)(v3 + 64);
      return v4(v5);
    }
  }
  return result;
}

#pragma GCC visibility pop
