#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_136a920(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1841c80(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_18899f0(__int64);
__int64 __cxa_guard_acquire(_QWORD, _QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 nn_ui2d_Pane_GetRuntimeTypeInfoStatic(void);
__int64 std___1___hash_memory(_QWORD, _QWORD);
extern _UNKNOWN GameData_21f8028;
extern _UNKNOWN GameData_22594f0;
extern _UNKNOWN* GameData_20ff480;
extern _UNKNOWN* GameData_212dfd0;
extern __int64 GameData_21f8020;
extern __int64 ui_Manager_instance_;
extern char GameData_1a9f09e;
extern int GameData_22594e8;
__int64 EmbeddedImage_1889ae0(__int64 a1, __int64 a2);
__int64 EmbeddedImage_1889bf0(__int64 a1, __int64 a2);
__int64 EmbeddedImage_1889d00(__int64 a1, __int64 a2);
__int64 EmbeddedImage_1889df0(__int64 a1, __int64 a2);
__int64 EmbeddedImage_1889eb0_alt1(__int64 a1,
                                   __int64 a2) __asm__("EmbeddedImage_1889eb0");
__int64 EmbeddedImage_1889fc0_alt1(__int64 a1,
                                   __int64 a2) __asm__("EmbeddedImage_1889fc0");
__int64* EmbeddedImage_188a0a0(__int64 a1, __int64 a2);
__int64* nn_ui2d_Pane_GetRuntimeTypeInfoStatic_alt1() __asm__(
    "nn_ui2d_Pane_GetRuntimeTypeInfoStatic");
__int64 GameRoutine_1841c80_alt1(__int64,
                                 __int64) __asm__("GameRoutine_1841c80");
__int64 Manager_136a920(__int64, __int64, int, unsigned int, _BYTE*);
__int64
std___1___hash_memory_alt1(__int64,
                           unsigned __int64) __asm__("std___1___hash_memory");
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");
__int64 EmbeddedImage_1889eb0(__int64 a1, _BYTE* a2);
__int64 EmbeddedImage_1889fc0(__int64 a1, _BYTE* a2);

__int64 EmbeddedImage_1889ae0(__int64 a1, __int64 a2)
{
  __int64 result;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  bool v8;
  unsigned __int64 v9;
  _BYTE* v10;
  _BYTE* v11;
  _BYTE* v12;
  char v13;
  __int64 v14;
  int v15;
  __int64 v16;
  int v17;
  __int64 v18;

  result = 0;
  if (a2 != 0) {
    v5 = *(_QWORD*)(a1 + 80);
    if (v5 != 0) {
      v6 = *(_QWORD*)(a2 + 24);
      v7 = *(unsigned __int8*)(v6 + 560);
      v8 = (v7 & 1) == 0;
      if ((v7 & 1) != 0) {
        v9 = *(_QWORD*)(v6 + 568);
      }
      else {
        v9 = v7 >> 1;
      }
      v10 = *(_BYTE**)(v6 + 576);
      v11 = (_BYTE*)(v6 + 561);
      if (!v8) {
        v11 = v10;
      }
      if (v9 != 0) {
        v12 = v11;
      }
      else {
        v12 = nullptr;
      }
      v13 = Manager_136a920(ui_Manager_instance_ + 1264, v5, 0, 2u, v12);
      result = 0;
      if ((v13 & 1) != 0) {
        GameRoutine_18899f0(a1);
        v14 = *(_QWORD*)(a1 + 80);
        if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22594f0,
                                  memory_order_acquire) &
             1) == 0) {
          v18 = v14;
          v17 = __cxa_guard_acquire_alt1((__int64)&GameData_22594f0);
          v14 = v18;
          if (v17 != 0) {
            GameData_22594e8 = -1;
            __cxa_guard_release_alt1((__int64)&GameData_22594f0);
            v14 = v18;
          }
        }
        if (v14 != 0) {
          v15 = GameData_22594e8;
          v16 =
              (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v14 + 88LL))(v14, 0);
          if (v16 != 0) {
            *(_DWORD*)(v16 + 12) = v15;
          }
        }
        return 1;
      }
    }
  }
  return result;
}

__int64 EmbeddedImage_1889bf0(__int64 a1, __int64 a2)
{
  __int64 result;
  __int64 v5;
  char* v6;
  char v7;
  __int64 v8;
  int v9;
  __int64 v10;
  int v11;
  __int64 v12;

  result = 0;
  if (a2 != 0) {
    v5 = *(_QWORD*)(a1 + 80);
    if (v5 != 0) {
      v6 = (unsigned int)*(unsigned __int8*)(a2 + 32) - 1 > 4
               ? &GameData_1a9f09e
               : (char*)*(&GameData_20ff480 +
                          (unsigned __int8)(*(_BYTE*)(a2 + 32) - 1));
      v7 = Manager_136a920(ui_Manager_instance_ + 1264, v5, 0, 2u, v6);
      result = 0;
      if ((v7 & 1) != 0) {
        GameRoutine_18899f0(a1);
        v8 = *(_QWORD*)(a1 + 80);
        if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22594f0,
                                  memory_order_acquire) &
             1) == 0) {
          v12 = v8;
          v11 = __cxa_guard_acquire_alt1((__int64)&GameData_22594f0);
          v8 = v12;
          if (v11 != 0) {
            GameData_22594e8 = -1;
            __cxa_guard_release_alt1((__int64)&GameData_22594f0);
            v8 = v12;
          }
        }
        if (v8 != 0) {
          v9 = GameData_22594e8;
          v10 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v8 + 88LL))(v8, 0);
          if (v10 != 0) {
            *(_DWORD*)(v10 + 12) = v9;
          }
        }
        return 1;
      }
    }
  }
  return result;
}

__int64 EmbeddedImage_1889d00(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 result;
  __int64 v5;
  int v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;

  v2 = *(_QWORD*)(a1 + 80);
  if (v2 == 0) {
    return 0;
  }
  result = *(_QWORD*)(a2 + 32);
  if (result != 0) {
    v10 = v2;
    if (((*(__int64 (**)(__int64, __int64*))(*(_QWORD*)result + 48LL))(result,
                                                                       &v10) &
         1) != 0) {
      GameRoutine_18899f0(a1);
      v5 = *(_QWORD*)(a1 + 80);
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22594f0,
                                memory_order_acquire) &
           1) == 0) {
        v9 = v5;
        v8 = __cxa_guard_acquire_alt1((__int64)&GameData_22594f0);
        v5 = v9;
        if (v8 != 0) {
          GameData_22594e8 = -1;
          __cxa_guard_release_alt1((__int64)&GameData_22594f0);
          v5 = v9;
        }
      }
      if (v5 != 0) {
        v6 = GameData_22594e8;
        v7 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v5 + 88LL))(v5, 0);
        if (v7 != 0) {
          *(_DWORD*)(v7 + 12) = v6;
        }
      }
      return 1;
    }
    else {
      return 0;
    }
  }
  return result;
}

__int64 EmbeddedImage_1889df0(__int64 a1, __int64 a2)
{
  __int64 result;
  __int64 v4;
  int v5;
  __int64 v6;
  int v7;
  __int64 v8;

  result = *(_QWORD*)(a1 + 80);
  if (result != 0) {
    if ((GameRoutine_1841c80_alt1(result, a2) & 1) != 0) {
      GameRoutine_18899f0(a1);
      v4 = *(_QWORD*)(a1 + 80);
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22594f0,
                                memory_order_acquire) &
           1) == 0) {
        v8 = v4;
        v7 = __cxa_guard_acquire_alt1((__int64)&GameData_22594f0);
        v4 = v8;
        if (v7 != 0) {
          GameData_22594e8 = -1;
          __cxa_guard_release_alt1((__int64)&GameData_22594f0);
          v4 = v8;
        }
      }
      if (v4 != 0) {
        v5 = GameData_22594e8;
        v6 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v4 + 88LL))(v4, 0);
        if (v6 != 0) {
          *(_DWORD*)(v6 + 12) = v5;
        }
      }
      return 1;
    }
    else {
      return 0;
    }
  }
  return result;
}

__int64 EmbeddedImage_1889eb0(__int64 a1, _BYTE* a2)
{
  __int64 v3;
  __int64 v5;
  __int64 v6;
  int v7;
  __int64 v8;
  __int64 v10;
  int v11;

  v3 = *(_QWORD*)(a1 + 80);
  if (v3 == 0) {
    return 0;
  }
  if ((Manager_136a920(ui_Manager_instance_ + 1264, v3, 0, 7u, a2) & 1) == 0) {
    v5 = *(_QWORD*)(a1 + 80);
    if (v5 == 0 ||
        (Manager_136a920(ui_Manager_instance_ + 1264, v5, 0, 0, a2) & 1) == 0) {
      return 0;
    }
  }
  GameRoutine_18899f0(a1);
  v6 = *(_QWORD*)(a1 + 80);
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22594f0,
                            memory_order_acquire) &
       1) == 0) {
    v10 = v6;
    v11 = __cxa_guard_acquire_alt1((__int64)&GameData_22594f0);
    v6 = v10;
    if (v11 != 0) {
      GameData_22594e8 = -1;
      __cxa_guard_release_alt1((__int64)&GameData_22594f0);
      v6 = v10;
    }
  }
  if (v6 != 0) {
    v7 = GameData_22594e8;
    v8 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v6 + 88LL))(v6, 0);
    if (v8 != 0) {
      *(_DWORD*)(v8 + 12) = v7;
    }
  }
  return 1;
}

__int64 EmbeddedImage_1889fc0(__int64 a1, _BYTE* a2)
{
  __int64 v3;
  __int64 v5;
  int v6;
  __int64 v7;
  int v9;
  __int64 v10;

  v3 = *(_QWORD*)(a1 + 80);
  if (v3 == 0) {
    return 0;
  }
  if ((Manager_136a920(ui_Manager_instance_ + 1264, v3, 0, 7u, a2) & 1) == 0) {
    return 0;
  }
  GameRoutine_18899f0(a1);
  v5 = *(_QWORD*)(a1 + 80);
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22594f0,
                            memory_order_acquire) &
       1) == 0) {
    v10 = v5;
    v9 = __cxa_guard_acquire_alt1((__int64)&GameData_22594f0);
    v5 = v10;
    if (v9 != 0) {
      GameData_22594e8 = -1;
      __cxa_guard_release_alt1((__int64)&GameData_22594f0);
      v5 = v10;
    }
  }
  if (v5 != 0) {
    v6 = GameData_22594e8;
    v7 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v5 + 88LL))(v5, 0);
    if (v7 != 0) {
      *(_DWORD*)(v7 + 12) = v6;
    }
  }
  return 1;
}

__int64* EmbeddedImage_188a0a0(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64* result;
  __int64 v5;

  v2 = (*(__int64 (**)(_QWORD, __int64, __int64))(
      **(_QWORD**)(a1 + 24) + 120LL))(*(_QWORD*)(a1 + 24), a2, 1);
  if ((atomic_load_explicit((atomic_uchar* volatile)GameData_212dfd0,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire_alt1((__int64)&GameData_21f8028) != 0) {
    GameData_21f8020 = (__int64)nn_ui2d_Pane_GetRuntimeTypeInfoStatic_alt1();
    __cxa_guard_release_alt1((__int64)&GameData_21f8028);
  }
  if (v2 == 0) {
    return nullptr;
  }
  result = (__int64*)(*(__int64 (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
  if (result == &GameData_21f8020) {
    goto LABEL_10;
  }
  do {
    result = (__int64*)*result;
  } while (result != &GameData_21f8020 && result != nullptr);
  if (result != nullptr) {
  LABEL_10:
    v5 = v2;
    return (__int64*)std___1___hash_memory_alt1((__int64)&v5, 8u);
  }
  return result;
}

#pragma GCC visibility pop
