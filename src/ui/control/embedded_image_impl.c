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
__int64 EmbeddedImage_1889eb0(__int64 a1, __int64 a2);
__int64 EmbeddedImage_1889fc0(__int64 a1, __int64 a2);
__int64* EmbeddedImage_188a0a0(__int64 a1, __int64 a2);

__int64 EmbeddedImage_1889ae0(__int64 a1, __int64 a2)
{
  __int64 result;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  bool v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  char v13;
  __int64 v14;
  __int64 v15;
  int v16;
  __int64 v17;
  int v18;
  __int64 v19;

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
      v10 = *(_QWORD*)(v6 + 576);
      v11 = v6 + 561;
      if (!v8) {
        v11 = v10;
      }
      if (v9 != 0) {
        v12 = v11;
      }
      else {
        v12 = 0;
      }
      v13 = GameRoutine_136a920(ui_Manager_instance_ + 1264, v5, 0, 2, v12);
      result = 0;
      if ((v13 & 1) != 0) {
        GameRoutine_18899f0(a1);
        v15 = *(_QWORD*)(a1 + 80);
        if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22594f0,
                                  memory_order_acquire) &
             1) == 0) {
          v19 = v15;
          v18 = __cxa_guard_acquire(&GameData_22594f0, v14);
          v15 = v19;
          if (v18 != 0) {
            GameData_22594e8 = -1;
            __cxa_guard_release(&GameData_22594f0);
            v15 = v19;
          }
        }
        if (v15 != 0) {
          v16 = GameData_22594e8;
          v17 =
              (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v15 + 88LL))(v15, 0);
          if (v17 != 0) {
            *(_DWORD*)(v17 + 12) = v16;
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
  __int64 v9;
  int v10;
  __int64 v11;
  int v12;
  __int64 v13;

  result = 0;
  if (a2 != 0) {
    v5 = *(_QWORD*)(a1 + 80);
    if (v5 != 0) {
      v6 = (unsigned int)*(unsigned __int8*)(a2 + 32) - 1 > 4
               ? &GameData_1a9f09e
               : (char*)*(&GameData_20ff480 +
                          (unsigned __int8)(*(_BYTE*)(a2 + 32) - 1));
      v7 = GameRoutine_136a920(ui_Manager_instance_ + 1264, v5, 0, 2, v6);
      result = 0;
      if ((v7 & 1) != 0) {
        GameRoutine_18899f0(a1);
        v9 = *(_QWORD*)(a1 + 80);
        if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22594f0,
                                  memory_order_acquire) &
             1) == 0) {
          v13 = v9;
          v12 = __cxa_guard_acquire(&GameData_22594f0, v8);
          v9 = v13;
          if (v12 != 0) {
            GameData_22594e8 = -1;
            __cxa_guard_release(&GameData_22594f0);
            v9 = v13;
          }
        }
        if (v9 != 0) {
          v10 = GameData_22594e8;
          v11 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v9 + 88LL))(v9, 0);
          if (v11 != 0) {
            *(_DWORD*)(v11 + 12) = v10;
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
  __int64 v6;
  int v7;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64 v11;

  v2 = *(_QWORD*)(a1 + 80);
  if (v2 == 0) {
    return 0;
  }
  result = *(_QWORD*)(a2 + 32);
  if (result != 0) {
    v11 = v2;
    if (((*(__int64 (**)(__int64, __int64*))(*(_QWORD*)result + 48LL))(result,
                                                                       &v11) &
         1) != 0) {
      GameRoutine_18899f0(a1);
      v6 = *(_QWORD*)(a1 + 80);
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22594f0,
                                memory_order_acquire) &
           1) == 0) {
        v10 = v6;
        v9 = __cxa_guard_acquire(&GameData_22594f0, v5);
        v6 = v10;
        if (v9 != 0) {
          GameData_22594e8 = -1;
          __cxa_guard_release(&GameData_22594f0);
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
  __int64 v5;
  int v6;
  __int64 v7;
  int v8;
  __int64 v9;

  result = *(_QWORD*)(a1 + 80);
  if (result != 0) {
    if ((GameRoutine_1841c80(result, a2, 0) & 1) != 0) {
      GameRoutine_18899f0(a1);
      v5 = *(_QWORD*)(a1 + 80);
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22594f0,
                                memory_order_acquire) &
           1) == 0) {
        v9 = v5;
        v8 = __cxa_guard_acquire(&GameData_22594f0, v4);
        v5 = v9;
        if (v8 != 0) {
          GameData_22594e8 = -1;
          __cxa_guard_release(&GameData_22594f0);
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

__int64 EmbeddedImage_1889eb0(__int64 a1, __int64 a2)
{
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 v11;
  int v12;

  v3 = *(_QWORD*)(a1 + 80);
  if (v3 == 0) {
    return 0;
  }
  if ((GameRoutine_136a920(ui_Manager_instance_ + 1264, v3, 0, 7, a2) & 1) ==
      0) {
    v5 = *(_QWORD*)(a1 + 80);
    if (v5 == 0 ||
        (GameRoutine_136a920(ui_Manager_instance_ + 1264, v5, 0, 0, a2) & 1) ==
            0) {
      return 0;
    }
  }
  GameRoutine_18899f0(a1);
  v7 = *(_QWORD*)(a1 + 80);
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22594f0,
                            memory_order_acquire) &
       1) == 0) {
    v11 = v7;
    v12 = __cxa_guard_acquire(&GameData_22594f0, v6);
    v7 = v11;
    if (v12 != 0) {
      GameData_22594e8 = -1;
      __cxa_guard_release(&GameData_22594f0);
      v7 = v11;
    }
  }
  if (v7 != 0) {
    v8 = GameData_22594e8;
    v9 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v7 + 88LL))(v7, 0);
    if (v9 != 0) {
      *(_DWORD*)(v9 + 12) = v8;
    }
  }
  return 1;
}

__int64 EmbeddedImage_1889fc0(__int64 a1, __int64 a2)
{
  __int64 v3;
  __int64 v5;
  __int64 v6;
  int v7;
  __int64 v8;
  int v10;
  __int64 v11;

  v3 = *(_QWORD*)(a1 + 80);
  if (v3 == 0) {
    return 0;
  }
  if ((GameRoutine_136a920(ui_Manager_instance_ + 1264, v3, 0, 7, a2) & 1) ==
      0) {
    return 0;
  }
  GameRoutine_18899f0(a1);
  v6 = *(_QWORD*)(a1 + 80);
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22594f0,
                            memory_order_acquire) &
       1) == 0) {
    v11 = v6;
    v10 = __cxa_guard_acquire(&GameData_22594f0, v5);
    v6 = v11;
    if (v10 != 0) {
      GameData_22594e8 = -1;
      __cxa_guard_release(&GameData_22594f0);
      v6 = v11;
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

__int64* EmbeddedImage_188a0a0(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64* result;
  __int64 v6;

  v3 = (*(__int64 (**)(_QWORD, __int64, __int64))(
      **(_QWORD**)(a1 + 24) + 120LL))(*(_QWORD*)(a1 + 24), a2, 1);
  if ((atomic_load_explicit((atomic_uchar* volatile)GameData_212dfd0,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21f8028, v2) != 0) {
    GameData_21f8020 = nn_ui2d_Pane_GetRuntimeTypeInfoStatic();
    __cxa_guard_release(&GameData_21f8028);
  }
  if (v3 == 0) {
    return nullptr;
  }
  result = (__int64*)(*(__int64 (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
  if (result == &GameData_21f8020) {
    goto LABEL_10;
  }
  do {
    result = (__int64*)*result;
  } while (result != &GameData_21f8020 && result != nullptr);
  if (result != nullptr) {
  LABEL_10:
    v6 = v3;
    return (__int64*)std___1___hash_memory(&v6, 8);
  }
  return result;
}

#pragma GCC visibility pop
