#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 DeviceChild_53d60(__int64, unsigned int*);
__int64 GameHr_5ceb0(_QWORD*, __int64);
__int64 GameHr_5df00(_QWORD*, unsigned int*);
__int64 GameRoutine_19e10();
__int64 GameRoutine_651190(__int64);
__int64 NvnDescriptorPool_57720(__int64, int*);
__int64 __assert_fail(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 gxc_56ce0(__int64, unsigned int*);
__int64 gxc_DeviceChild_SetDevice(__int64 result);
__int64 gxc_NvnCommandList_NvnCommandList(__int64, __int64);
__int64 gxc_NvnFence_NvnFence(_QWORD*);
__int64 gxc_NvnGpuBuffer_NvnGpuBuffer(__int64, int*);
__int64 gxc_NvnGpuMemoryPool_NvnGpuMemoryPool(__int64, __int64);
__int64 gxc_NvnQueue_NvnQueue(_QWORD*, __int64);
__int64 gxc_NvnSemaphore_NvnSemaphore(_QWORD*);
__int64 spine_SpineObject_Destroy_SpineObject_4e8a0(_QWORD*);
extern __int64 (*GameData_1f50998[])();
extern __int64* GameData_21322b8[2];
extern __int64 GameData_2132658[5];
extern __int64 GameData_2132668[3];
__int64 spine_cpp_src_spine_e1c0(__int64 a1);
__attribute__((swiftcall)) void spine_cpp_src_spine_53930(PSEUDO_X8 x8_,
                                                          __int64 a1);
__attribute__((swiftcall)) void spine_cpp_src_spine_539a0(PSEUDO_X8 x8_,
                                                          __int64 a1);
__attribute__((swiftcall)) void spine_cpp_src_spine_539f0(PSEUDO_X8 x8_,
                                                          unsigned int* a1);
__attribute__((swiftcall)) void spine_cpp_src_spine_53a40(PSEUDO_X8 x8_,
                                                          __int64 a1);
__attribute__((swiftcall)) void spine_cpp_src_spine_53a90(PSEUDO_X8 x8_);
__attribute__((swiftcall)) void spine_cpp_src_spine_53ae0(PSEUDO_X8 x8_);
__attribute__((swiftcall)) void spine_cpp_src_spine_53b30(PSEUDO_X8 x8_,
                                                          __int64 a1);
__attribute__((swiftcall)) void spine_cpp_src_spine_53b80(PSEUDO_X8 x8_,
                                                          int* a1);
__attribute__((swiftcall)) void spine_cpp_src_spine_53bd0(PSEUDO_X8 x8_,
                                                          int* a1);
__attribute__((swiftcall)) void spine_cpp_src_spine_53c20(PSEUDO_X8 x8_,
                                                          unsigned int* a1);
__attribute__((swiftcall)) void spine_cpp_src_spine_53c70(PSEUDO_X8 x8_,
                                                          unsigned int* a1);

__int64 spine_cpp_src_spine_e1c0(__int64 a1)
{
  unsigned __int64 v2;
  unsigned __int64 v3;
  unsigned __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;

  *(_QWORD*)a1 = GameData_2132658[0] + 16;
  v2 = *(_QWORD*)(a1 + 16);
  if ((int)v2 >= 1) {
    v3 = *(_QWORD*)(a1 + 16) & 0x7FFFFFFFLL;
    while (1) {
      v5 = v3 - 1;
      if (v2 <= v3 - 1) {
        goto LABEL_23;
      }
      v6 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 8 * v5);
      if (v6 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v6 + 8LL))(v6);
        v2 = *(_QWORD*)(a1 + 16);
      }
      if (v2 <= v5) {
        break;
      }
      *(_QWORD*)(a1 + 16) = --v2;
      if (v2 > v5) {
        v7 = v3;
        do {
          v8 = (_QWORD*)(*(_QWORD*)(a1 + 32) + 8 * v7);
          v9 = *(v8 - 1);
          *(v8 - 1) = *v8;
          *(_QWORD*)(*(_QWORD*)(a1 + 32) + 8 * v7) = v9;
          v2 = *(_QWORD*)(a1 + 16);
        } while (v7++ < v2);
      }
      if (v3-- <= 1) {
        goto LABEL_14;
      }
    }
    __assert_fail("inIndex < _size",
                  "/Program/Externals/Spine/include\\spine/Vector.h", 126,
                  "removeAt");
  LABEL_23:
    __assert_fail("inIndex < _size",
                  "/Program/Externals/Spine/include\\spine/Vector.h", 162,
                  "operator[]");
    __udf(0);
  }
LABEL_14:
  *(_QWORD*)(a1 + 72) = GameData_21322b8[0] + 2;
  v11 = *(_QWORD*)(a1 + 88);
  if (v11 != 0 && (*(_BYTE*)(a1 + 96) & 1) != 0) {
    v12 = GameRoutine_19e10();
    (*(void (**)(__int64, __int64, const char*, __int64))(*(_QWORD*)v12 +
                                                          40LL))(
        v12, v11, "/Program/Externals/Spine/include\\spine/SpineString.h", 206);
  }
  spine_SpineObject_Destroy_SpineObject_4e8a0((_QWORD*)(a1 + 72));
  *(_QWORD*)(a1 + 40) = GameData_2132668[0] + 16;
  v13 = *(_QWORD**)(a1 + 48);
  if (v13 != nullptr) {
    do {
      v14 = (_QWORD*)v13[3];
      (*(void (**)(_QWORD*))(*v13 + 8LL))(v13);
      v13 = v14;
    } while (v14 != nullptr);
  }
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  spine_SpineObject_Destroy_SpineObject_4e8a0((_QWORD*)(a1 + 40));
  v15 = *(_QWORD*)(a1 + 32);
  *(_QWORD*)(a1 + 8) = GameData_1f50998;
  *(_QWORD*)(a1 + 16) = 0;
  if (v15 != 0) {
    v16 = GameRoutine_19e10();
    (*(void (**)(__int64, __int64, const char*, __int64))(*(_QWORD*)v16 +
                                                          40LL))(
        v16, v15, "/Program/Externals/Spine/include\\spine/Vector.h", 206);
  }
  spine_SpineObject_Destroy_SpineObject_4e8a0((_QWORD*)(a1 + 8));
  return spine_SpineObject_Destroy_SpineObject_4e8a0((_QWORD*)a1);
}

__attribute__((swiftcall)) void spine_cpp_src_spine_53930(PSEUDO_X8 x8_,
                                                          __int64 a1)
{
  _QWORD* a2 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  _QWORD* v4;
  __int64 result;

  v4 = (_QWORD*)GameRoutine_651190(12312);
  GameHr_5ceb0(v4, a1);
  result = gxc_DeviceChild_SetDevice((__int64)v4);
  *a2 = v4;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void spine_cpp_src_spine_539a0(PSEUDO_X8 x8_,
                                                          __int64 a1)
{
  _QWORD* a2 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  _QWORD* v4;
  __int64 result;

  v4 = (_QWORD*)GameRoutine_651190(12304);
  result = gxc_NvnQueue_NvnQueue(v4, a1);
  *a2 = v4;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void spine_cpp_src_spine_539f0(PSEUDO_X8 x8_,
                                                          unsigned int* a1)
{
  _QWORD* a2 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  _QWORD* v4;
  __int64 result;

  v4 = (_QWORD*)GameRoutine_651190(720);
  result = GameHr_5df00(v4, a1);
  *a2 = v4;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void spine_cpp_src_spine_53a40(PSEUDO_X8 x8_,
                                                          __int64 a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v4;
  __int64 result;

  v4 = GameRoutine_651190(432);
  result = gxc_NvnCommandList_NvnCommandList(v4, a1);
  *a2 = v4;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void spine_cpp_src_spine_53a90(PSEUDO_X8 x8_)
{
  _QWORD* a1 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  _QWORD* v2;
  __int64 result;

  v2 = (_QWORD*)GameRoutine_651190(72);
  result = gxc_NvnSemaphore_NvnSemaphore(v2);
  *a1 = v2;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void spine_cpp_src_spine_53ae0(PSEUDO_X8 x8_)
{
  _QWORD* a1 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  _QWORD* v2;
  __int64 result;

  v2 = (_QWORD*)GameRoutine_651190(80);
  result = gxc_NvnFence_NvnFence(v2);
  *a1 = v2;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void spine_cpp_src_spine_53b30(PSEUDO_X8 x8_,
                                                          __int64 a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v4;
  __int64 result;

  v4 = GameRoutine_651190(352);
  result = gxc_NvnGpuMemoryPool_NvnGpuMemoryPool(v4, a1);
  *a2 = v4;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void spine_cpp_src_spine_53b80(PSEUDO_X8 x8_,
                                                          int* a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v4;
  __int64 result;

  v4 = GameRoutine_651190(248);
  result = NvnDescriptorPool_57720(v4, a1);
  *a2 = v4;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void spine_cpp_src_spine_53bd0(PSEUDO_X8 x8_,
                                                          int* a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v4;
  __int64 result;

  v4 = GameRoutine_651190(128);
  result = gxc_NvnGpuBuffer_NvnGpuBuffer(v4, a1);
  *a2 = v4;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void spine_cpp_src_spine_53c20(PSEUDO_X8 x8_,
                                                          unsigned int* a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v4;
  __int64 result;

  v4 = GameRoutine_651190(144);
  result = DeviceChild_53d60(v4, a1);
  *a2 = v4;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void spine_cpp_src_spine_53c70(PSEUDO_X8 x8_,
                                                          unsigned int* a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v4;
  __int64 result;

  v4 = GameRoutine_651190(112);
  result = gxc_56ce0(v4, a1);
  *a2 = v4;
  {
    result;
    return;
  }
}

#pragma GCC visibility pop
