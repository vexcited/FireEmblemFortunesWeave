#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_f3d070(_QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 wld_Crc32(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN* GameData_212df10;
extern int* GameData_212df08;
__int64 ObjectDissolveModule_f8e8c0(__int64 result, __int64 a2);
_QWORD* Material_addbe0(_QWORD* result, __int64, __int64, char);
__int64 std___1___shared_weak_count___release_weak(__int64);
extern __int64 fw_memory_g_heap_manager_ptr;
void ObjectDissolveModule_f8e8c0_alt1(_QWORD*, __int64) __asm__(
    "ObjectDissolveModule_f8e8c0");
void nn_mem_StandardAllocator_Free(__int64, __int64);
void ObjectDissolveModule_f8e6c0(__int64 a1);

void ObjectDissolveModule_f8e6c0(__int64 a1)
{

#pragma clang fp contract(off)
  float v2;
  _QWORD* v3;
  _QWORD* v4;
  _QWORD* v5;
  __n128 v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  struct {
    _QWORD* v11;
    _QWORD* v12;
    __int64 v13;
  } v11_;

  v2 = *(float*)(a1 + 24);
  v3 = *(_QWORD**)(a1 + 8);
  v11_.v12 = nullptr;
  v11_.v13 = 0;
  v11_.v11 = nullptr;
  ObjectDissolveModule_f8e8c0_alt1(v3, (__int64)&v11_.v11);
  v4 = v11_.v11;
  v5 = v11_.v12;
  if (v11_.v11 != v11_.v12) {
    do {
      Material_addbe0((_QWORD*)*v4, (__int64)"co_dissolve", 11, v2 > 0x0.0p+0f);
      (*(void (**)(_QWORD, const char*, __int64, float))(*(_QWORD*)*v4 + 16LL))(
          *v4, "DissolveThreshold", 17, *(float*)(a1 + 24));
      (*(void (**)(_QWORD, const char*, __int64, long double))(
          *(_QWORD*)*v4 + 32LL))(*v4, "DissolveRadiateCenter", 21,
                                 *(long double*)(a1 + 32));
      (*(void (**)(_QWORD, const char*, __int64, float))(*(_QWORD*)*v4 + 16LL))(
          *v4, "DissolveRadiateRadius", 21, *(float*)(a1 + 48));
      v6 = ((__n128 (*)(_QWORD, const char*, __int64, float)) *
            (_QWORD*)(*(_QWORD*)*v4 + 16LL))(*v4, "DissolveRadiateRange", 20,
                                             *(float*)(a1 + 52));
      v7 = *v4;
      v4 += 2;
      PSEUDO_LOW_LANE128(v6, n128_u8, *(_BYTE*)(a1 + 28));
      (*(void (**)(__int64, const char*, __int64, float))(*(_QWORD*)v7 + 16LL))(
          v7, "DissolveRadiateEnable", 21, (float)LANES128(v6).n128_u32[0]);
    } while (v4 != v5);
    v4 = v11_.v11;
  }
  if (v4 != nullptr) {
    v8 = v11_.v12;
    if (v4 == v11_.v12) {
      goto LABEL_12;
    }
    do {
      v9 = *(v8 - 1);
      if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
        std___1___shared_weak_count___release_weak(v9);
      }
      v8 -= 2;
    } while (v8 != v4);
    v11_.v12 = v4;
    v4 = v11_.v11;
    if (v11_.v11 != nullptr) {
    LABEL_12:
      v10 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v10 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v10, (__int64)v4);
    }
  }
}

__int64 ObjectDissolveModule_f8e8c0(__int64 result, __int64 a2)
{
  _QWORD* v3;
  unsigned __int8 explicit;
  int* v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 i;
  __int64* v13;
  __int64* j;
  __int64 v15;

  if (result != 0) {
    v3 = (_QWORD*)result;
    explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212df10,
                                    memory_order_acquire);
    v5 = GameData_212df08;
    if ((explicit & 1) == 0) {
      result = __cxa_guard_acquire(GameData_212df10);
      if ((_DWORD)result != 0) {
        *v5 = wld_Crc32(0, "ModelModule", 11);
        result = __cxa_guard_release(GameData_212df10);
      }
    }
    v6 = v3[64];
    v7 = v6;
    while (v7 != v3[63]) {
      v8 = *(_DWORD*)(v7 - 16);
      v7 -= 16;
      v6 -= 16;
      if (v8 == *v5) {
        if (v3[64] != v6) {
          v9 = *(_QWORD*)(v6 + 8);
          if (v9 != 0) {
            v10 = *(_QWORD*)(v9 + 24);
            v11 = *(_QWORD*)(v10 + 312);
            for (i = *(_QWORD*)(v10 + 320); v11 != i; v11 += 16) {
              result = GameRoutine_f3d070(a2, v11);
            }
          }
        }
        break;
      }
    }
    v13 = (__int64*)v3[93];
    for (j = (__int64*)v3[94]; v13 != j;
         result = ObjectDissolveModule_f8e8c0(v15, a2)) {
      v15 = *v13++;
    }
  }
  return result;
}

#pragma GCC visibility pop
