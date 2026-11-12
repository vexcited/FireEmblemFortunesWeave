#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_159d0c0(_QWORD, _QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 memchr(_QWORD, _QWORD, _QWORD);
__int64 nn_ui2d_Pane_GetRuntimeTypeInfoStatic(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 strlen(_QWORD);
extern _UNKNOWN* GameData_212dfd0;
extern _UNKNOWN* GameData_2131900;
extern __int64* GameData_212dfc8;
extern __int64* GameData_21318f8;
extern __int64* ui_LayoutAccessor_empty__ptr[3];
__int64 GameMenuItem_16eacc0(_QWORD* a1);
__int64* nn_ui2d_Pane_GetRuntimeTypeInfoStatic_alt1() __asm__(
    "nn_ui2d_Pane_GetRuntimeTypeInfoStatic");
__int64 memchr_alt1(__int64, int, unsigned __int64) __asm__("memchr");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
const char* GameRoutine_159d0c0_alt1(const char* result, char,
                                     char) __asm__("GameRoutine_159d0c0");
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");

__int64 GameMenuItem_16eacc0(_QWORD* a1)
{
  __int64 result;
  __int64* v3;
  __int64 v4;
  const char* v5;
  signed __int64 v6;
  const char* v7;
  __int64 v8;
  const char* v9;
  bool v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  atomic_uchar* v17;
  __int64* v18;
  atomic_uchar* v19;
  __int64* v20;
  const char* v21;
  char v22;
  char v23;
  __int64 v24;
  __int64 v25;
  int v26;
  __int64 v27;
  int v28;
  __int64 v29;

  result = a1[7];
  if (result != 0) {
    result = std___1___shared_weak_count_lock_alt1(result);
    if (result != 0) {
      v3 = (__int64*)a1[6];
      if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v4 = result;
        (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
        result = std___1___shared_weak_count___release_weak_alt1(v4);
      }
      if (v3 != nullptr && v3 != ui_LayoutAccessor_empty__ptr[0]) {
        v5 = (const char*)(*(__int64 (**)(_QWORD*))(*a1 + 552LL))(a1);
        v6 = strlen_alt1(v5);
        v7 = &v5[v6];
        if (v6 >= 7) {
          v8 = (__int64)v5;
          do {
            v9 = (const char*)memchr_alt1(v8, 68, v6 - 6);
            if (v9 == nullptr) {
              break;
            }
            if (*(_DWORD*)v9 == 1634953540 &&
                *(_DWORD*)(v9 + 3) == 1701601889) {
              goto LABEL_16;
            }
            v8 = (__int64)(v9 + 1);
            v6 = v7 - (v9 + 1);
          } while (v6 > 6);
        }
        v9 = v7;
      LABEL_16:
        v12 = v9 != v7 && v9 - v5 != -1;
        result = std___1___shared_weak_count_lock_alt1(v3[1]);
        if (result != 0 &&
            atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          v13 = result;
          (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
          result = std___1___shared_weak_count___release_weak_alt1(v13);
        }
        v14 = *(_QWORD*)(v3[2] + 24);
        v15 = *(_QWORD*)(v14 + 40);
        v16 = v14 + 32;
        if (v15 != v14 + 32) {
          v17 = (atomic_uchar*)GameData_212dfd0;
          v18 = GameData_212dfc8;
          v19 = (atomic_uchar*)GameData_2131900;
          v20 = GameData_21318f8;
          do {
            v24 =
                (*(__int64 (**)(__int64))(*(_QWORD*)(v15 - 8) + 16LL))(v15 - 8);
            if ((atomic_load_explicit(v17, memory_order_acquire) & 1) == 0) {
              v29 = v24;
              v26 = __cxa_guard_acquire_alt1((__int64)v17);
              v24 = v29;
              if (v26 != 0) {
                *v18 = (__int64)nn_ui2d_Pane_GetRuntimeTypeInfoStatic_alt1();
                __cxa_guard_release_alt1((__int64)v17);
                v24 = v29;
              }
            }
            if ((__int64*)v24 == v18) {
              v21 = (const char*)(v15 + 24);
              v22 = v12;
              v23 = 1;
            }
            else {
              v25 = (*(__int64 (**)(__int64))(*(_QWORD*)(v15 - 8) + 16LL))(v15 -
                                                                           8);
              if ((atomic_load_explicit(v19, memory_order_acquire) & 1) == 0) {
                v27 = v25;
                v28 = __cxa_guard_acquire_alt1((__int64)v19);
                v25 = v27;
                if (v28 != 0) {
                  *v20 = (__int64)nn_ui2d_Pane_GetRuntimeTypeInfoStatic_alt1();
                  __cxa_guard_release_alt1((__int64)v19);
                  v25 = v27;
                }
              }
              if ((__int64*)v25 == v20) {
                v21 = (const char*)(v15 + 24);
                v22 = 0;
              }
              else {
                v21 = (const char*)(v15 + 24);
                v22 = v12;
              }
              v23 = 0;
            }
            result = (__int64)GameRoutine_159d0c0_alt1(v21, v22, v23);
            v15 = *(_QWORD*)(v15 + 8);
          } while (v15 != v16);
        }
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
