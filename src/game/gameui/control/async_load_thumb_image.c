#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_1560070(PSEUDO_X8, _QWORD, _QWORD);
_QWORD* GameRoutine_1886290(__int64, _QWORD*);
__int64 Alignment_56b600(_QWORD);
__int64 GameRoutine_136a920(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_155e140(_QWORD);
__int64 GameRoutine_155e830(_QWORD, _QWORD);
__int64 GameRoutine_155fbe0(_QWORD, _QWORD);
__int64 GameRoutine_1562680(_QWORD, _QWORD, float);
__int64 GameRoutine_1562b50(_QWORD, _QWORD);
__int64 GameRoutine_1562cf0(_QWORD, _QWORD);
__int64 GameRoutine_1563f90(_QWORD, _QWORD);
__int64 GameRoutine_1564060(_QWORD);
__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_156c910(_QWORD, const char*, ...);
__int64 GameRoutine_157ac20(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_157b170(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_157b310(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_157ecd0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_15853b0(_QWORD, _QWORD);
__int64 GameRoutine_1841000(_QWORD, _QWORD);
__int64 GameRoutine_1841930(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_18863e0(__int64, _QWORD*, char);
__int64 GameRoutine_188d1f0(_QWORD*);
__int64 GameRoutine_18a57c0(void);
__int64 GameRoutine_18a59b0(__int64, char*);
__int64 GameRoutine_18a7690(__int64, _WORD*, __int64, char);
__int64 GameRoutine_18a7ae0(__int64, unsigned int*, __int64, char, int, __int64,
                            char);
__int64 GameRoutine_18a80b0(__int64, unsigned int*);
__int64 GameRoutine_18a82e0(void);
__int64 GameRoutine_18aa420(__int64, __int64*, __int64);
__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 GameRoutine_6ed030(_QWORD);
__int64 GameRoutine_6fb810(_QWORD);
__int64 GameRoutine_a4da40(_QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a51f40(_QWORD);
__int64 __cxa_guard_acquire(_QWORD, _QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_util_Format(const char*, ...);
__int64 nn_ui2d_Pane_GetRuntimeTypeInfoStatic(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindAlignment(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_GetPane(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
__int64 ui_LayoutAccessor_Setup_155dea0(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN GameData_2107810;
extern _UNKNOWN GameData_21f8028;
extern _UNKNOWN GameData_2259378;
extern _UNKNOWN* GameData_2102a08;
extern _UNKNOWN* GameData_212dfd0;
extern _UNKNOWN* GameData_2130ea8;
extern _UNKNOWN* GameData_2131900;
extern __int64 (*GameData_204d688[])();
extern __int64 (*msg_TagSelector_vtable[])();
extern __int64 GameData_212d690;
extern __int64 GameData_21c99b8;
extern __int64 GameData_21f8020;
extern __int64 GameData_2259370;
extern __int64 ui_Manager_instance_;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212c8a0;
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_212e348;
extern __int64* GameData_2130ea0;
extern __int64* GameData_21318f8;
extern __int64* msg_MessageManager_instance__ptr[2];
extern char GameData_1a9f09e;
extern char* GameData_2100738[42];
extern char** msg_MessageManager_empty_text__ptr;
__int64* AsyncLoadThumbImage_188f320(__int64 a1, unsigned int a2, char a3,
                                     char a4, unsigned __int8 a5);
__int64* AsyncLoadThumbImage_188f620(__int64 a1);
__int64 AsyncLoadThumbImage_1891c20(_QWORD* a1);
__int64 AsyncLoadThumbImage_1891d60(__int64 result, __int64* a2);
__int64 AsyncLoadThumbImage_1899450(__int64 a1);
__int64* AsyncLoadThumbImage_18999e0(__int64 a1);
__int64* AsyncLoadThumbImage_1899ba0(__int64 a1);
__int64 AsyncLoadThumbImage_1899d60(__int64 a1, __int64 a2);
__int64 AsyncLoadThumbImage_189a040(__int64 a1, _BYTE* a2);
__int64 AsyncLoadThumbImage_189a3a0_alt1(_QWORD* a1, __int64 a2) __asm__(
    "AsyncLoadThumbImage_189a3a0");
__int64* AsyncLoadThumbImage_189ac20(__int64 a1, int a2);
__int64* AsyncLoadThumbImage_189adc0(__int64 a1, int a2, int a3);
bool AsyncLoadThumbImage_189bc60(__int64 a1);
__int64 AsyncLoadThumbImage_18b53c0(__int64 a1, unsigned __int16* a2,
                                    __int64 a3, char a4);
__int64 AsyncLoadThumbImage_18b5580(__int64 a1, __int64 a2, __int64 a3,
                                    char a4);
bool AsyncLoadThumbImage_18b59e0(__int64 a1);
__int64 AsyncLoadThumbImage_18b5b10(__int64 result, __int64* a2);
bool AsyncLoadThumbImage_18b6260(_QWORD* a1);
__int64 AsyncLoadThumbImage_18b6390(__int64 result, __int64* a2);
__int64 AsyncLoadThumbImage_18ba5b0(__int64 a1);
__int64 AsyncLoadThumbImage_18ba690(__int64 a1, __int64 a2);
__int64 AsyncLoadThumbImage_18ba7a0(__int64 a1, __int64* a2);
float AsyncLoadThumbImage_18bf370(__int64 a1);
__int64 AsyncLoadThumbImage_18bf450(__int64 result, __int64 a2, const char* a3,
                                    __int64 a4);
__int64 AsyncLoadThumbImage_18bf740(__int64 a1);
__int64 AsyncLoadThumbImage_18bf8c0(__int64 a1);
__int64 AsyncLoadThumbImage_18bfc30(__int64 a1);
__int64 AsyncLoadThumbImage_18bfe00(__int64 a1);
__int64 AsyncLoadThumbImage_18bfef0(__int64 a1);
__int64 AsyncLoadThumbImage_18c0070(__int64 result, unsigned __int8 a2);
__int64 AsyncLoadThumbImage_18c0210(__int64 a1);
__int64 AsyncLoadThumbImage_18c0390(__int64 a1);
__int64 AsyncLoadThumbImage_18c0b70(__int64 result, __int64 a2, __int64 a3);
__int64 AsyncLoadThumbImage_18c0ca0(__int64 result, __int64 a2, __int64 a3);
__int64 AsyncLoadThumbImage_18c0e20(__int64 result, __int64 a2, __int64 a3);
__int64 AsyncLoadThumbImage_18c0f50(__int64 result, __int64 a2, __int64 a3);
_DWORD* GameRoutine_157b170_alt1(__int64*, __int64,
                                 char) __asm__("GameRoutine_157b170");
_QWORD* Element_1886290(__int64, const char**);
_QWORD* ui_LayoutAccessor_Setup_155dea0_alt1(_QWORD*, _QWORD*, __int64) __asm__(
    "ui_LayoutAccessor_Setup_155dea0");
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64* nn_ui2d_Pane_GetRuntimeTypeInfoStatic_alt1() __asm__(
    "nn_ui2d_Pane_GetRuntimeTypeInfoStatic");
__int64 GameHr_157b310(__int64*, unsigned __int16*, __int64);
__int64 GameRoutine_157ac20_alt1(__int64*, __int64, char,
                                 char) __asm__("GameRoutine_157ac20");
__int64 GameRoutine_157ecd0_alt1(__int64*, __int64,
                                 char) __asm__("GameRoutine_157ecd0");
__int64 GameRoutine_15853b0_alt1(__int64*,
                                 __int64) __asm__("GameRoutine_15853b0");
__int64 GameRoutine_1841930_alt1(__int64,
                                 __int64) __asm__("GameRoutine_1841930");
__int64 LayoutAccessor_155e140(__int64*);
__int64 LayoutAccessor_155e830(__int64 result, char);
__int64 Manager_136a920(__int64, __int64, int, unsigned int, const char*);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
__int64 ui_LayoutAccessor_FindTextBox_alt1(__int64*, __int64) __asm__(
    "ui_LayoutAccessor_FindTextBox");
__int64 ui_LayoutAccessor_SetPaneVisible_alt1(
    __int64 result, __int64, char) __asm__("ui_LayoutAccessor_SetPaneVisible");
char* GameHr_6ed030(__int64);
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
void AsyncLoadThumbImage_18999e0_alt1(__int64) __asm__(
    "AsyncLoadThumbImage_18999e0");
void GameRoutine_1563f90_alt1(__int64, __int64) __asm__("GameRoutine_1563f90");
void GameRoutine_1564060_alt1(__int64*) __asm__("GameRoutine_1564060");
void GameRoutine_156c5d0_alt1(__int64, __int64,
                              char) __asm__("GameRoutine_156c5d0");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");
__int64 AsyncLoadThumbImage_189a3a0(__int64* a1, __int64 a2);

__int64* AsyncLoadThumbImage_188f320(__int64 a1, unsigned int a2, char a3,
                                     char a4, unsigned __int8 a5)
{
  __int64 v10;
  _QWORD* v11;
  __int64* v12;
  const char* v14;
  const char* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  _BYTE* v19;
  atomic_uchar* v20;
  unsigned __int8 explicit;
  __int64* v22;
  __int64* v23;
  char v25;
  __int64* result;
  __int64 v27;
  __int64* v28;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  _QWORD v35[4];
  int v36;
  int v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;

  v35[0] = "Text";
  v35[1] = 4;
  v11 = GameRoutine_1886290(a1, v35);
  if ((atomic_load_explicit((atomic_uchar* volatile)GameData_2130ea8,
                            memory_order_acquire) &
       1) == 0) {
    v30 = __cxa_guard_acquire(GameData_2130ea8, v10);
    if ((_DWORD)v30 != 0) {
      *GameData_2130ea0 = nn_ui2d_Pane_GetRuntimeTypeInfoStatic(v30, v31);
      __cxa_guard_release(GameData_2130ea8);
    }
  }
  if (v11 != nullptr) {
    v12 = (__int64*)(*(__int64 (**)(_QWORD*))(*v11 + 16LL))(v11);
    if (v12 == GameData_2130ea0) {
      goto LABEL_10;
    }
    do {
      v12 = (__int64*)*v12;
    } while (v12 != GameData_2130ea0 && v12 != nullptr);
    if (v12 != nullptr) {
    LABEL_10:
      if (a2 > 0x29) {
        v14 = "MID_Sys_ValueEmptyLong";
      }
      else {
        v14 = GameData_2100738[a2];
      }
      if (((a2 == 17) & a5) != 0) {
        v15 = "MID_Sys_Range";
      }
      else {
        v15 = v14;
      }
      v38 = -1;
      v39 = -1;
      v40 = -1;
      v41 = -1;
      v16 = *msg_MessageManager_instance__ptr[0];
      v42 = -1;
      v43 = -1;
      v44 = -1;
      v45 = -1;
      v46 = -1;
      v47 = -1;
      v48 = -1;
      v49 = -1;
      v35[0] = GameData_212e348 + 2;
      v35[1] = 0xFFFF0001FFFF0000LL;
      v35[2] = 0xFFFF0004FFFF0002LL;
      v35[3] = 0xFFFF0006FFFF0005LL;
      v50 = 8;
      v36 = -65529;
      v37 = -65528;
      v17 = GameRoutine_a4dbe0(v16, v15, 0, v35);
      GameRoutine_156c5d0(v11, v17, 0);
    }
  }
  v35[0] = "Icon";
  v35[1] = 4;
  v19 = GameRoutine_1886290(a1, v35);
  v20 = (atomic_uchar*)GameData_2131900;
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_2131900,
                                  memory_order_acquire);
  v22 = GameData_21318f8;
  if ((explicit & 1) == 0) {
    v32 = __cxa_guard_acquire(GameData_2131900, v18);
    if ((_DWORD)v32 != 0) {
      *v22 = nn_ui2d_Pane_GetRuntimeTypeInfoStatic(v32, v33);
      __cxa_guard_release(GameData_2131900);
    }
  }
  if (v19 != nullptr) {
    v23 = (__int64*)(*(__int64 (**)(_BYTE*))(*(_QWORD*)v19 + 16LL))(v19);
    if (v23 == v22) {
      goto LABEL_27;
    }
    do {
      v23 = (__int64*)*v23;
    } while (v23 != v22 && v23 != nullptr);
    if (v23 != nullptr) {
    LABEL_27:
      if (a2 != 28 || (a4 & 1) != 0) {
        v25 = v19[88] & 0xFE | GameRoutine_1841000(v19, a2) & 1;
      }
      else {
        v25 = v19[88] & 0xFE;
      }
      v19[88] = v25;
    }
  }
  v35[0] = "IconDamage";
  v35[1] = 10;
  result = GameRoutine_1886290(a1, v35);
  v28 = result;
  if ((atomic_load_explicit(v20, memory_order_acquire) & 1) == 0) {
    result = (__int64*)__cxa_guard_acquire(GameData_2131900, v27);
    if ((_DWORD)result != 0) {
      *v22 = nn_ui2d_Pane_GetRuntimeTypeInfoStatic(result, v34);
      result = (__int64*)__cxa_guard_release(GameData_2131900);
    }
  }
  if (v28 != nullptr) {
    result = (__int64*)(*(__int64 (**)(__int64*))(*v28 + 16))(v28);
    if (result == v22) {
      goto LABEL_40;
    }
    do {
      result = (__int64*)*result;
    } while (result != v22 && result != nullptr);
    if (result != nullptr) {
    LABEL_40:
      *((_BYTE*)v28 + 88) = v28[11] & 0xFE | a3 & 1;
    }
  }
  return result;
}

__int64* AsyncLoadThumbImage_188f620(__int64 a1)
{
  __int64 v2;
  _QWORD* v3;
  __int64* v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _BYTE* v9;
  atomic_uchar* v10;
  unsigned __int8 explicit;
  __int64* v12;
  __int64* v13;
  __int64* result;
  __int64 v16;
  __int64* v17;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  _QWORD v24[4];
  int v25;
  int v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;

  v24[0] = "Text";
  v24[1] = 4;
  v3 = GameRoutine_1886290(a1, v24);
  if ((atomic_load_explicit((atomic_uchar* volatile)GameData_2130ea8,
                            memory_order_acquire) &
       1) == 0) {
    v19 = __cxa_guard_acquire(GameData_2130ea8, v2);
    if ((_DWORD)v19 != 0) {
      *GameData_2130ea0 = nn_ui2d_Pane_GetRuntimeTypeInfoStatic(v19, v20);
      __cxa_guard_release(GameData_2130ea8);
    }
  }
  if (v3 != nullptr) {
    v4 = (__int64*)(*(__int64 (**)(_QWORD*))(*v3 + 16LL))(v3);
    if (v4 == GameData_2130ea0) {
      goto LABEL_10;
    }
    do {
      v4 = (__int64*)*v4;
    } while (v4 != GameData_2130ea0 && v4 != nullptr);
    if (v4 != nullptr) {
    LABEL_10:
      v27 = -1;
      v28 = -1;
      v29 = -1;
      v30 = -1;
      v6 = *msg_MessageManager_instance__ptr[0];
      v31 = -1;
      v32 = -1;
      v33 = -1;
      v34 = -1;
      v35 = -1;
      v36 = -1;
      v37 = -1;
      v38 = -1;
      v24[0] = GameData_212e348 + 2;
      v24[1] = 0xFFFF0001FFFF0000LL;
      v24[2] = 0xFFFF0004FFFF0002LL;
      v24[3] = 0xFFFF0006FFFF0005LL;
      v39 = 8;
      v25 = -65529;
      v26 = -65528;
      v7 = GameRoutine_a4dbe0(v6, "MID_Sys_Phy", 0, v24);
      GameRoutine_156c5d0(v3, v7, 0);
    }
  }
  v24[0] = "Icon";
  v24[1] = 4;
  v9 = GameRoutine_1886290(a1, v24);
  v10 = (atomic_uchar*)GameData_2131900;
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_2131900,
                                  memory_order_acquire);
  v12 = GameData_21318f8;
  if ((explicit & 1) == 0) {
    v21 = __cxa_guard_acquire(GameData_2131900, v8);
    if ((_DWORD)v21 != 0) {
      *v12 = nn_ui2d_Pane_GetRuntimeTypeInfoStatic(v21, v22);
      __cxa_guard_release(GameData_2131900);
    }
  }
  if (v9 != nullptr) {
    v13 = (__int64*)(*(__int64 (**)(_BYTE*))(*(_QWORD*)v9 + 16LL))(v9);
    if (v13 == v12) {
      goto LABEL_20;
    }
    do {
      v13 = (__int64*)*v13;
    } while (v13 != v12 && v13 != nullptr);
    if (v13 != nullptr) {
    LABEL_20:
      v9[88] &= ~1u;
    }
  }
  v24[0] = "IconDamage";
  v24[1] = 10;
  result = GameRoutine_1886290(a1, v24);
  v17 = result;
  if ((atomic_load_explicit(v10, memory_order_acquire) & 1) == 0) {
    result = (__int64*)__cxa_guard_acquire(GameData_2131900, v16);
    if ((_DWORD)result != 0) {
      *v12 = nn_ui2d_Pane_GetRuntimeTypeInfoStatic(result, v23);
      result = (__int64*)__cxa_guard_release(GameData_2131900);
    }
  }
  if (v17 != nullptr) {
    result = (__int64*)(*(__int64 (**)(__int64*))(*v17 + 16))(v17);
    if (result == v12) {
      goto LABEL_30;
    }
    do {
      result = (__int64*)*result;
    } while (result != v12 && result != nullptr);
    if (result != nullptr) {
    LABEL_30:
      *((_BYTE*)v17 + 88) &= ~1u;
    }
  }
  return result;
}

__int64 AsyncLoadThumbImage_1891c20(_QWORD* a1)
{
  __int64 v2;
  char v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  if (((*(__int64 (**)(_QWORD*))(a1[129] + 8LL))(a1 + 129) & 1) != 0 &&
      ((*(__int64 (**)(_QWORD*))(*a1 + 144LL))(a1) & 1) != 0 &&
      ((*(__int64 (**)(_QWORD*))(*a1 + 32LL))(a1) & 1) != 0) {
    v2 = *(_QWORD*)(a1[1] + 24LL);
    while (1) {
      v2 = *(_QWORD*)(v2 + 24);
      if (v2 == 0) {
        break;
      }
      if ((*(_BYTE*)(v2 + 88) & 1) == 0) {
        goto LABEL_7;
      }
    }
    v5 = a1[40];
    if (v5 != 0 &&
        (v6 = a1[39], v7 = a1[40],
         atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 16), 1u,
                                   memory_order_relaxed),
         v8 = std___1___shared_weak_count_lock(v7),
         std___1___shared_weak_count___release_weak(v5), v8 != 0)) {
      if (v6 != 0) {
        if (((*(__int64 (**)(__int64))(*(_QWORD*)v6 + 144LL))(v6) & 1) != 0) {
          LODWORD(v6) = (*(__int64 (**)(__int64))(*(_QWORD*)v6 + 32LL))(v6) ^ 1;
        }
        else {
          LOBYTE(v6) = 1;
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
        std___1___shared_weak_count___release_weak(v8);
      }
    }
    else {
      LOBYTE(v6) = 0;
    }
    v3 = v6 ^ 1;
  }
  else {
  LABEL_7:
    v3 = 0;
  }
  return v3 & 1;
}

__int64 AsyncLoadThumbImage_1891d60(__int64 result, __int64* a2)
{
  __int64 v2;
  __int64 v4;

  if (*(_QWORD*)(result + 1088) != 0) {
    v2 = result;
    result = a2[1];
    if (result != 0) {
      result = std___1___shared_weak_count_lock(result);
      if (result != 0) {
        v4 = result;
        result = *a2;
        if (*a2 != 0) {
          if (*(_QWORD*)(v2 + 1080) != 0) {
            result = GameRoutine_18a82e0();
          }
          else {
            result = GameRoutine_18a57c0();
          }
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
          return std___1___shared_weak_count___release_weak(v4);
        }
      }
    }
  }
  return result;
}

__int64 AsyncLoadThumbImage_1899450(__int64 a1)
{
  if ((*(_BYTE*)(a1 + 292) & 4) != 0) {
    return GameRoutine_1562cf0(a1 + 88, "FixedDefault");
  }
  else {
    return GameRoutine_188d1f0((_QWORD*)a1);
  }
}

__int64* AsyncLoadThumbImage_18999e0(__int64 a1)
{
  __int64* result;
  __int64 v3;
  _BYTE* v4;
  __int64 v6;
  __int64* v7;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD v12[2];

  if ((GameRoutine_1562b50(a1 + 88, "Icon") & 1) != 0) {
    return (__int64*)GameRoutine_1562cf0(a1 + 88, "Icon");
  }
  v12[0] = "Icon";
  v12[1] = 4;
  v4 = GameRoutine_1886290(a1, v12);
  if ((atomic_load_explicit((atomic_uchar* volatile)GameData_212dfd0,
                            memory_order_acquire) &
       1) == 0) {
    v9 = __cxa_guard_acquire(&GameData_21f8028, v3);
    if ((_DWORD)v9 != 0) {
      GameData_21f8020 = nn_ui2d_Pane_GetRuntimeTypeInfoStatic(v9, v10);
      __cxa_guard_release(&GameData_21f8028);
    }
  }
  if (v4 == nullptr) {
    goto LABEL_13;
  }
  result = (__int64*)(*(__int64 (**)(_BYTE*))(*(_QWORD*)v4 + 16LL))(v4);
  if (result == &GameData_21f8020) {
    goto LABEL_12;
  }
  do {
    result = (__int64*)*result;
  } while (result != &GameData_21f8020 && result != nullptr);
  if (result != nullptr) {
  LABEL_12:
    v4[88] |= 1u;
  }
  else {
  LABEL_13:
    v12[0] = "Icon";
    v12[1] = 4;
    result = GameRoutine_1886290(a1, v12);
    v7 = result;
    if ((atomic_load_explicit((atomic_uchar* volatile)GameData_2131900,
                              memory_order_acquire) &
         1) == 0) {
      result = (__int64*)__cxa_guard_acquire(&GameData_2259378, v6);
      if ((_DWORD)result != 0) {
        GameData_2259370 = nn_ui2d_Pane_GetRuntimeTypeInfoStatic(result, v11);
        result = (__int64*)__cxa_guard_release(&GameData_2259378);
      }
    }
    if (v7 != nullptr) {
      result = (__int64*)(*(__int64 (**)(__int64*))(*v7 + 16))(v7);
      if (result == &GameData_2259370) {
        goto LABEL_22;
      }
      do {
        result = (__int64*)*result;
      } while (result != &GameData_2259370 && result != nullptr);
      if (result != nullptr) {
      LABEL_22:
        *((_BYTE*)v7 + 88) |= 1u;
      }
    }
  }
  return result;
}

__int64* AsyncLoadThumbImage_1899ba0(__int64 a1)
{
  __int64* result;
  __int64 v3;
  _BYTE* v4;
  __int64 v6;
  __int64* v7;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD v12[2];

  if ((GameRoutine_1562b50(a1 + 88, "Txt") & 1) != 0) {
    return (__int64*)GameRoutine_1562cf0(a1 + 88, "Txt");
  }
  v12[0] = "Icon";
  v12[1] = 4;
  v4 = GameRoutine_1886290(a1, v12);
  if ((atomic_load_explicit((atomic_uchar* volatile)GameData_212dfd0,
                            memory_order_acquire) &
       1) == 0) {
    v9 = __cxa_guard_acquire(&GameData_21f8028, v3);
    if ((_DWORD)v9 != 0) {
      GameData_21f8020 = nn_ui2d_Pane_GetRuntimeTypeInfoStatic(v9, v10);
      __cxa_guard_release(&GameData_21f8028);
    }
  }
  if (v4 == nullptr) {
    goto LABEL_13;
  }
  result = (__int64*)(*(__int64 (**)(_BYTE*))(*(_QWORD*)v4 + 16LL))(v4);
  if (result == &GameData_21f8020) {
    goto LABEL_12;
  }
  do {
    result = (__int64*)*result;
  } while (result != &GameData_21f8020 && result != nullptr);
  if (result != nullptr) {
  LABEL_12:
    v4[88] &= ~1u;
  }
  else {
  LABEL_13:
    v12[0] = "Icon";
    v12[1] = 4;
    result = GameRoutine_1886290(a1, v12);
    v7 = result;
    if ((atomic_load_explicit((atomic_uchar* volatile)GameData_2131900,
                              memory_order_acquire) &
         1) == 0) {
      result = (__int64*)__cxa_guard_acquire(&GameData_2259378, v6);
      if ((_DWORD)result != 0) {
        GameData_2259370 = nn_ui2d_Pane_GetRuntimeTypeInfoStatic(result, v11);
        result = (__int64*)__cxa_guard_release(&GameData_2259378);
      }
    }
    if (v7 != nullptr) {
      result = (__int64*)(*(__int64 (**)(__int64*))(*v7 + 16))(v7);
      if (result == &GameData_2259370) {
        goto LABEL_22;
      }
      do {
        result = (__int64*)*result;
      } while (result != &GameData_2259370 && result != nullptr);
      if (result != nullptr) {
      LABEL_22:
        *((_BYTE*)v7 + 88) &= ~1u;
      }
    }
  }
  return result;
}

__int64 AsyncLoadThumbImage_1899d60(__int64 a1, __int64 a2)
{
  _QWORD* v4;
  __int64* v5;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _BYTE* v12;
  __int64* v13;
  char v15;
  __int64 v16;
  atomic_ullong* v17;
  __int64 v18;
  struct {
    const char* v19;
    __int64 v20;
    __int64 v21;
  } v19_;
  __int64* v22;
  __int64 v23[2];
  struct {
    __int64 v24[4];
    int v25;
    char gap92_[4];
    __int64 v26;
    __int64 v27;
  } v24_;
  _QWORD v28[2];

  if (a2 == 0) {
    return 0;
  }
  AsyncLoadThumbImage_18999e0_alt1(a1);
  v19_.v19 = "Icon";
  v19_.v20 = 4;
  v4 = Element_1886290(a1, &v19_.v19);
  if ((atomic_load_explicit((atomic_uchar* volatile)GameData_212dfd0,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire_alt1((__int64)&GameData_21f8028) != 0) {
    GameData_21f8020 = (__int64)nn_ui2d_Pane_GetRuntimeTypeInfoStatic_alt1();
    __cxa_guard_release_alt1((__int64)&GameData_21f8028);
  }
  if (v4 != nullptr) {
    v5 = (__int64*)(*(__int64 (**)(_QWORD*))(*v4 + 16LL))(v4);
    if (v5 == &GameData_21f8020) {
      goto LABEL_11;
    }
    do {
      v5 = (__int64*)*v5;
    } while (v5 != &GameData_21f8020 && v5 != nullptr);
    if (v5 != nullptr) {
    LABEL_11:
      v7 = *(_QWORD*)(a1 + 96);
      if (v7 != 0) {
        v8 = std___1___shared_weak_count_lock_alt1(v7);
        v9 = *(_QWORD*)(a1 + 88);
        v10 = v8;
        if (v8 == 0) {
          v9 = 0;
        }
      }
      else {
        v9 = 0;
        v10 = 0;
      }
      v16 = v4[29];
      v23[0] = 0;
      v23[1] = 0;
      v19_.v19 = nullptr;
      v19_.v20 = 0;
      memset(v24_.v24, 0, sizeof(v24_.v24));
      v24_.v26 = 0;
      v24_.v27 = 0;
      v28[0] = v9;
      v28[1] = v10;
      v19_.v21 = 0;
      v22 = v23;
      v24_.v25 = 1065353216;
      if (v10 == 0) {
        ui_LayoutAccessor_Setup_155dea0_alt1(&v19_.v19, v28, v16);
        goto LABEL_35;
      }
      v17 = (atomic_ullong*)(v10 + 8);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                                memory_order_relaxed);
      ui_LayoutAccessor_Setup_155dea0_alt1(&v19_.v19, v28, v16);
      if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        if (atomic_fetch_add(v17, 0xFFFFFFFFFFFFFFFFLL) != 0) {
          goto LABEL_35;
        }
      }
      else {
        (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
        std___1___shared_weak_count___release_weak_alt1(v10);
        if (atomic_fetch_add(v17, 0xFFFFFFFFFFFFFFFFLL) != 0) {
          goto LABEL_35;
        }
      }
      (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
      std___1___shared_weak_count___release_weak_alt1(v10);
    LABEL_35:
      GameRoutine_157ecd0_alt1((__int64*)&v19_.v19, a2, 0);
      LayoutAccessor_155e140((__int64*)&v19_.v19);
      v18 = v24_.v27;
      if (v24_.v27 != 0 &&
          atomic_fetch_add((atomic_ullong* volatile)(v24_.v27 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
        std___1___shared_weak_count___release_weak_alt1(v18);
      }
      GameRoutine_1564060_alt1(v24_.v24);
      GameRoutine_1563f90_alt1((__int64)&v22, v23[0]);
      if (v19_.v20 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v19_.v20);
      }
      v15 = 1;
      return v15 & 1;
    }
  }
  v19_.v19 = "Icon";
  v19_.v20 = 4;
  v12 = Element_1886290(a1, &v19_.v19);
  if ((atomic_load_explicit((atomic_uchar* volatile)GameData_2131900,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire_alt1((__int64)&GameData_2259378) != 0) {
    GameData_2259370 = (__int64)nn_ui2d_Pane_GetRuntimeTypeInfoStatic_alt1();
    __cxa_guard_release_alt1((__int64)&GameData_2259378);
  }
  if (v12 == nullptr) {
    goto LABEL_26;
  }
  v13 = (__int64*)(*(__int64 (**)(_BYTE*))(*(_QWORD*)v12 + 16LL))(v12);
  if (v13 == &GameData_2259370) {
    goto LABEL_25;
  }
  do {
    v13 = (__int64*)*v13;
  } while (v13 != &GameData_2259370 && v13 != nullptr);
  if (v13 != nullptr) {
  LABEL_25:
    v15 = GameRoutine_1841930_alt1((__int64)v12, a2);
    v12[88] = v12[88] & 0xFE | v15 & 1;
  }
  else {
  LABEL_26:
    v15 = 0;
  }
  return v15 & 1;
}

__int64 AsyncLoadThumbImage_189a040(__int64 a1, _BYTE* a2)
{
  _QWORD* v4;
  __int64* v5;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _BYTE* v12;
  __int64* v13;
  __int64 v15;
  const char* v16;
  char v17;
  __int64 v18;
  atomic_ullong* v19;
  __int64 v20;
  struct {
    const char* v21;
    __int64 v22;
    __int64 v23;
  } v21_;
  __int64* v24;
  __int64 v25[2];
  struct {
    __int64 v26[4];
    int v27;
    char gap92_[4];
    __int64 v28;
    __int64 v29;
  } v26_;
  _QWORD v30[2];

  if (*a2 == 0) {
    return 0;
  }
  AsyncLoadThumbImage_18999e0_alt1(a1);
  v21_.v21 = "Icon";
  v21_.v22 = 4;
  v4 = Element_1886290(a1, &v21_.v21);
  if ((atomic_load_explicit((atomic_uchar* volatile)GameData_212dfd0,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire_alt1((__int64)&GameData_21f8028) != 0) {
    GameData_21f8020 = (__int64)nn_ui2d_Pane_GetRuntimeTypeInfoStatic_alt1();
    __cxa_guard_release_alt1((__int64)&GameData_21f8028);
  }
  if (v4 != nullptr) {
    v5 = (__int64*)(*(__int64 (**)(_QWORD*))(*v4 + 16LL))(v4);
    if (v5 == &GameData_21f8020) {
      goto LABEL_11;
    }
    do {
      v5 = (__int64*)*v5;
    } while (v5 != &GameData_21f8020 && v5 != nullptr);
    if (v5 != nullptr) {
    LABEL_11:
      v7 = *(_QWORD*)(a1 + 96);
      if (v7 != 0) {
        v8 = std___1___shared_weak_count_lock_alt1(v7);
        v9 = *(_QWORD*)(a1 + 88);
        v10 = v8;
        if (v8 == 0) {
          v9 = 0;
        }
      }
      else {
        v9 = 0;
        v10 = 0;
      }
      v18 = v4[29];
      v25[0] = 0;
      v25[1] = 0;
      v21_.v21 = nullptr;
      v21_.v22 = 0;
      memset(v26_.v26, 0, sizeof(v26_.v26));
      v26_.v28 = 0;
      v26_.v29 = 0;
      v30[0] = v9;
      v30[1] = v10;
      v21_.v23 = 0;
      v24 = v25;
      v26_.v27 = 1065353216;
      if (v10 == 0) {
        ui_LayoutAccessor_Setup_155dea0_alt1(&v21_.v21, v30, v18);
        goto LABEL_37;
      }
      v19 = (atomic_ullong*)(v10 + 8);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                                memory_order_relaxed);
      ui_LayoutAccessor_Setup_155dea0_alt1(&v21_.v21, v30, v18);
      if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        if (atomic_fetch_add(v19, 0xFFFFFFFFFFFFFFFFLL) != 0) {
          goto LABEL_37;
        }
      }
      else {
        (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
        std___1___shared_weak_count___release_weak_alt1(v10);
        if (atomic_fetch_add(v19, 0xFFFFFFFFFFFFFFFFLL) != 0) {
          goto LABEL_37;
        }
      }
      (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
      std___1___shared_weak_count___release_weak_alt1(v10);
    LABEL_37:
      GameRoutine_15853b0_alt1((__int64*)&v21_.v21,
                               *(_QWORD*)(*(_QWORD*)(*GameData_212c8a0 + 64) +
                                          8LL * (unsigned __int8)*a2));
      LayoutAccessor_155e140((__int64*)&v21_.v21);
      v20 = v26_.v29;
      if (v26_.v29 != 0 &&
          atomic_fetch_add((atomic_ullong* volatile)(v26_.v29 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
        std___1___shared_weak_count___release_weak_alt1(v20);
      }
      GameRoutine_1564060_alt1(v26_.v26);
      GameRoutine_1563f90_alt1((__int64)&v24, v25[0]);
      if (v21_.v22 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v21_.v22);
      }
      v17 = 1;
      return v17 & 1;
    }
  }
  v21_.v21 = "Icon";
  v21_.v22 = 4;
  v12 = Element_1886290(a1, &v21_.v21);
  if ((atomic_load_explicit((atomic_uchar* volatile)GameData_2131900,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire_alt1((__int64)&GameData_2259378) != 0) {
    GameData_2259370 = (__int64)nn_ui2d_Pane_GetRuntimeTypeInfoStatic_alt1();
    __cxa_guard_release_alt1((__int64)&GameData_2259378);
  }
  if (v12 == nullptr) {
    goto LABEL_28;
  }
  v13 = (__int64*)(*(__int64 (**)(_BYTE*))(*(_QWORD*)v12 + 16LL))(v12);
  if (v13 == &GameData_2259370) {
    goto LABEL_25;
  }
  do {
    v13 = (__int64*)*v13;
  } while (v13 != &GameData_2259370 && v13 != nullptr);
  if (v13 != nullptr) {
  LABEL_25:
    v15 = *(_QWORD*)(*(_QWORD*)(*GameData_212c8a0 + 64) +
                     8LL * (unsigned __int8)*a2);
    if (v15 != 0) {
      if ((unsigned int)*(unsigned __int8*)(v15 + 32) - 1 > 4) {
        v16 = &GameData_1a9f09e;
      }
      else {
        v16 = (const char*)*(&GameData_2102a08 +
                             (unsigned __int8)(*(_BYTE*)(v15 + 32) - 1));
      }
      v17 = Manager_136a920(ui_Manager_instance_ + 1264, (__int64)v12, 0, 2u,
                            v16);
    }
    else {
      v17 = 0;
    }
    v12[88] = v12[88] & 0xFE | v17 & 1;
  }
  else {
  LABEL_28:
    v17 = 0;
  }
  return v17 & 1;
}

__int64 AsyncLoadThumbImage_189a3a0(__int64* a1, __int64 a2)
{
  _QWORD* v4;
  __int64* v5;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _BYTE* v12;
  __int64* v13;
  __int64 v15;
  unsigned __int64 v16;
  bool v17;
  unsigned __int64 v18;
  const char* v19;
  const char* v20;
  const char* v21;
  char v22;
  __int64 v23;
  atomic_ullong* v24;
  __int64 v25;
  __int64 v26;
  char v27;
  __int64 v28;
  struct {
    const char* v29;
    __int64 v30;
    __int64 v31;
  } v29_;
  __int64* v32;
  __int64 v33[2];
  struct {
    __int64 v34[4];
    int v35;
    char gap92_[4];
    __int64 v36;
    __int64 v37;
  } v34_;
  _QWORD v38[2];

  if (a2 == 0) {
    return 0;
  }
  AsyncLoadThumbImage_18999e0_alt1((__int64)a1);
  v29_.v29 = "Icon";
  v29_.v30 = 4;
  v4 = Element_1886290((__int64)a1, &v29_.v29);
  if ((atomic_load_explicit((atomic_uchar* volatile)GameData_212dfd0,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire_alt1((__int64)&GameData_21f8028) != 0) {
    GameData_21f8020 = (__int64)nn_ui2d_Pane_GetRuntimeTypeInfoStatic_alt1();
    __cxa_guard_release_alt1((__int64)&GameData_21f8028);
  }
  if (v4 != nullptr) {
    v5 = (__int64*)(*(__int64 (**)(_QWORD*))(*v4 + 16LL))(v4);
    if (v5 == &GameData_21f8020) {
      goto LABEL_11;
    }
    do {
      v5 = (__int64*)*v5;
    } while (v5 != &GameData_21f8020 && v5 != nullptr);
    if (v5 != nullptr) {
    LABEL_11:
      v7 = a1[12];
      if (v7 != 0) {
        v8 = std___1___shared_weak_count_lock_alt1(v7);
        v9 = a1[11];
        v10 = v8;
        if (v8 == 0) {
          v9 = 0;
        }
      }
      else {
        v9 = 0;
        v10 = 0;
      }
      v23 = v4[29];
      v33[0] = 0;
      v33[1] = 0;
      v29_.v29 = nullptr;
      v29_.v30 = 0;
      memset(v34_.v34, 0, sizeof(v34_.v34));
      v34_.v36 = 0;
      v34_.v37 = 0;
      v38[0] = v9;
      v38[1] = v10;
      v29_.v31 = 0;
      v32 = v33;
      v34_.v35 = 1065353216;
      if (v10 != 0) {
        v24 = (atomic_ullong*)(v10 + 8);
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                                  memory_order_relaxed);
        ui_LayoutAccessor_Setup_155dea0_alt1(&v29_.v29, v38, v23);
        if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          if (atomic_fetch_add(v24, 0xFFFFFFFFFFFFFFFFLL) == 0) {
            goto LABEL_42;
          }
        }
        else {
          (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
          std___1___shared_weak_count___release_weak_alt1(v10);
          if (atomic_fetch_add(v24, 0xFFFFFFFFFFFFFFFFLL) == 0) {
          LABEL_42:
            (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
            std___1___shared_weak_count___release_weak_alt1(v10);
          }
        }
      }
      else {
        ui_LayoutAccessor_Setup_155dea0_alt1(&v29_.v29, v38, v23);
      }
      GameRoutine_157b170_alt1((__int64*)&v29_.v29, a2, 0);
      v25 = a1[137];
      if (v25 != 0) {
        v26 = *(unsigned __int16*)(v25 + 1952);
        if (v26 != 0) {
          v26 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) + 8 * v26);
        }
        v27 = a2 == v26;
      }
      else {
        v27 = 0;
      }
      GameRoutine_157ac20_alt1(a1 + 11, (__int64)"IconEquip", v27, 1);
      LayoutAccessor_155e140((__int64*)&v29_.v29);
      v28 = v34_.v37;
      if (v34_.v37 != 0 &&
          atomic_fetch_add((atomic_ullong* volatile)(v34_.v37 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
        std___1___shared_weak_count___release_weak_alt1(v28);
      }
      GameRoutine_1564060_alt1(v34_.v34);
      GameRoutine_1563f90_alt1((__int64)&v32, v33[0]);
      if (v29_.v30 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v29_.v30);
      }
      v22 = 1;
      return v22 & 1;
    }
  }
  v29_.v29 = "Icon";
  v29_.v30 = 4;
  v12 = Element_1886290((__int64)a1, &v29_.v29);
  if ((atomic_load_explicit((atomic_uchar* volatile)GameData_2131900,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire_alt1((__int64)&GameData_2259378) != 0) {
    GameData_2259370 = (__int64)nn_ui2d_Pane_GetRuntimeTypeInfoStatic_alt1();
    __cxa_guard_release_alt1((__int64)&GameData_2259378);
  }
  if (v12 == nullptr) {
    goto LABEL_34;
  }
  v13 = (__int64*)(*(__int64 (**)(_BYTE*))(*(_QWORD*)v12 + 16LL))(v12);
  if (v13 == &GameData_2259370) {
    goto LABEL_25;
  }
  do {
    v13 = (__int64*)*v13;
  } while (v13 != &GameData_2259370 && v13 != nullptr);
  if (v13 != nullptr) {
  LABEL_25:
    v15 = *(_QWORD*)(a2 + 24);
    v16 = *(unsigned __int8*)(v15 + 560);
    v17 = (v16 & 1) == 0;
    if ((v16 & 1) != 0) {
      v18 = *(_QWORD*)(v15 + 568);
    }
    else {
      v18 = v16 >> 1;
    }
    v19 = *(const char**)(v15 + 576);
    v20 = (const char*)(v15 + 561);
    if (!v17) {
      v20 = v19;
    }
    if (v18 != 0) {
      v21 = v20;
    }
    else {
      v21 = nullptr;
    }
    v22 =
        Manager_136a920(ui_Manager_instance_ + 1264, (__int64)v12, 0, 2u, v21);
    v12[88] = v12[88] & 0xFE | v22 & 1;
  }
  else {
  LABEL_34:
    v22 = 0;
  }
  return v22 & 1;
}

__int64* AsyncLoadThumbImage_189ac20(__int64 a1, int a2)
{
  __int64* result;
  __int64 v5;
  __int64* v6;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD v11[4];
  int v12;
  int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;

  v11[0] = "NumCost";
  v11[1] = 7;
  GameRoutine_18863e0(a1, v11, 1);
  v11[0] = "Cost";
  v11[1] = 4;
  result = GameRoutine_1886290(a1, v11);
  v6 = result;
  if ((atomic_load_explicit((atomic_uchar* volatile)GameData_2130ea8,
                            memory_order_acquire) &
       1) == 0) {
    result = (__int64*)__cxa_guard_acquire(GameData_2130ea8, v5);
    if ((_DWORD)result != 0) {
      *GameData_2130ea0 = nn_ui2d_Pane_GetRuntimeTypeInfoStatic(result, v10);
      result = (__int64*)__cxa_guard_release(GameData_2130ea8);
    }
  }
  if (v6 != nullptr) {
    result = (__int64*)(*(__int64 (**)(__int64*))(*v6 + 16))(v6);
    if (result == GameData_2130ea0) {
      goto LABEL_10;
    }
    do {
      result = (__int64*)*result;
    } while (result != GameData_2130ea0 && result != nullptr);
    if (result != nullptr) {
    LABEL_10:
      if (a2 < 0) {
        v14 = -1;
        v15 = -1;
        v16 = -1;
        v17 = -1;
        v8 = *msg_MessageManager_instance__ptr[0];
        v18 = -1;
        v19 = -1;
        v20 = -1;
        v21 = -1;
        v22 = -1;
        v23 = -1;
        v24 = -1;
        v25 = -1;
        v11[0] = GameData_212e348 + 2;
        v11[1] = 0xFFFF0001FFFF0000LL;
        v11[2] = 0xFFFF0004FFFF0002LL;
        v11[3] = 0xFFFF0006FFFF0005LL;
        v26 = 8;
        v12 = -65529;
        v13 = -65528;
        v9 = GameRoutine_a4dbe0(v8, "MID_Sys_unlimited", 0, v11);
        return (__int64*)GameRoutine_156c5d0(v6, v9, 0);
      }
      else {
        return (__int64*)GameRoutine_156c910(v6, "%d", 1);
      }
    }
  }
  return result;
}

__int64* AsyncLoadThumbImage_189adc0(__int64 a1, int a2, int a3)
{
  __int64 v6;
  _QWORD* v7;
  atomic_uchar* v8;
  unsigned __int8 explicit;
  __int64* v10;
  __int64* v11;
  __int64 v13;
  __int64* result;
  __int64 v15;
  __int64* v16;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  _QWORD v22[2];

  v22[0] = "NumEndurance";
  v22[1] = 12;
  GameRoutine_18863e0(a1, v22, 1);
  v22[0] = "Count";
  v22[1] = 5;
  v7 = GameRoutine_1886290(a1, v22);
  v8 = (atomic_uchar*)GameData_2130ea8;
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_2130ea8,
                                  memory_order_acquire);
  v10 = GameData_2130ea0;
  if ((explicit & 1) == 0) {
    v19 = __cxa_guard_acquire(GameData_2130ea8, v6);
    if ((_DWORD)v19 != 0) {
      *v10 = nn_ui2d_Pane_GetRuntimeTypeInfoStatic(v19, v20);
      __cxa_guard_release(GameData_2130ea8);
    }
  }
  if (v7 != nullptr) {
    v11 = (__int64*)(*(__int64 (**)(_QWORD*))(*v7 + 16LL))(v7);
    if (v11 == v10) {
      goto LABEL_10;
    }
    do {
      v11 = (__int64*)*v11;
    } while (v11 != v10 && v11 != nullptr);
    if (v11 != nullptr) {
    LABEL_10:
      v13 = game_util_Format("%d", a2);
      GameRoutine_156c5d0(v7, v13, 0);
    }
  }
  v22[0] = "CountMax";
  v22[1] = 8;
  result = GameRoutine_1886290(a1, v22);
  v16 = result;
  if ((atomic_load_explicit(v8, memory_order_acquire) & 1) == 0) {
    result = (__int64*)__cxa_guard_acquire(GameData_2130ea8, v15);
    if ((_DWORD)result != 0) {
      *v10 = nn_ui2d_Pane_GetRuntimeTypeInfoStatic(result, v21);
      result = (__int64*)__cxa_guard_release(GameData_2130ea8);
    }
  }
  if (v16 != nullptr) {
    result = (__int64*)(*(__int64 (**)(__int64*))(*v16 + 16))(v16);
    if (result == v10) {
      goto LABEL_20;
    }
    do {
      result = (__int64*)*result;
    } while (result != v10 && result != nullptr);
    if (result != nullptr) {
    LABEL_20:
      v18 = game_util_Format("%d", a3);
      return (__int64*)GameRoutine_156c5d0(v16, v18, 0);
    }
  }
  return result;
}

bool AsyncLoadThumbImage_189bc60(__int64 a1)
{
  __int64 v2;
  _BOOL8 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  char v8;

  if (((*(__int64 (**)(__int64))(*(_QWORD*)(a1 + 1064) + 8LL))(a1 + 1064) &
       1) == 0 ||
      ((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 32LL))(a1) & 1) == 0) {
    return false;
  }
  v2 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 24LL);
  while (1) {
    v2 = *(_QWORD*)(v2 + 24);
    if (v2 == 0) {
      break;
    }
    if ((*(_BYTE*)(v2 + 88) & 1) == 0) {
      return false;
    }
  }
  v4 = *(_QWORD*)(a1 + 320);
  if (v4 != 0) {
    v5 = *(_QWORD*)(a1 + 312);
    v6 = *(_QWORD*)(a1 + 320);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                              memory_order_relaxed);
    v7 = std___1___shared_weak_count_lock(v6);
    std___1___shared_weak_count___release_weak(v4);
    if (v7 != 0) {
      if (v5 != 0) {
        v8 = ((*(__int64 (**)(__int64))(*(_QWORD*)v5 + 144LL))(v5) & 1) != 0
                 ? (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 32LL))(v5)
                 : 0;
      }
      else {
        v8 = 1;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
        std___1___shared_weak_count___release_weak(v7);
      }
      if ((v8 & 1) == 0) {
        return false;
      }
    }
  }
  if ((*(_BYTE*)(a1 + 1108) & 1) != 0) {
    return true;
  }
  if (*(_BYTE*)(a1 + 1080) != 1) {
    return *(_QWORD*)(a1 + 1088) != 0;
  }
  result = true;
  if ((*(_WORD*)(a1 + 1076) & 0xFFF) == 0 && *(_QWORD*)(a1 + 1088) == 0) {
    return false;
  }
  return result;
}

__int64 AsyncLoadThumbImage_18b53c0(__int64 a1, unsigned __int16* a2,
                                    __int64 a3, char a4)
{
  unsigned __int16* v4;
  unsigned __int16 v7;
  char* v9;
  __int64 v10;
  __int64 v11;
  __int64 result;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  struct {
    __int64 (**v17)();
    __int64 v18;
    char gap16_[16];
    __int64 (***v19)();
  } v17_;

  *(_QWORD*)(a1 + 1080) = a3;
  v4 = (unsigned __int16*)(a1 + 1088);
  if (*a2 != 0) {
    v7 = *a2;
    *(_BYTE*)(a1 + 1090) = *((_BYTE*)a2 + 2);
    *v4 = v7;
    *(_BYTE*)(a1 + 1091) = *((_BYTE*)a2 + 3);
    *(_DWORD*)(a1 + 1092) = *((_DWORD*)a2 + 1);
    v9 = GameHr_6ed030(
        *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * *a2));
    if (v9 != nullptr) {
      v10 = (__int64)v9;
      v11 = ui_LayoutAccessor_FindTextBox_alt1((__int64*)(a1 + 88),
                                               (__int64)"T_Txt");
      if (v11 != 0) {
        GameRoutine_156c5d0_alt1(v11, v10, 0);
      }
    }
    LayoutAccessor_1560070((void*)(&v17_.v17), (__int64*)(a1 + 88), "L_Icon");
    result = v17_.v18;
    if (v17_.v18 != 0) {
      v13 = std___1___shared_weak_count_lock_alt1(v17_.v18);
      v14 = (__int64*)v17_.v17;
      result = v17_.v18;
      if (v17_.v18 != 0) {
        result = std___1___shared_weak_count___release_weak_alt1(v17_.v18);
      }
      if (v13 == 0 || v14 == nullptr) {
        if (v13 == 0) {
          goto LABEL_22;
        }
        goto LABEL_20;
      }
      LayoutAccessor_155e830((__int64)v14, 1);
      v17_.v17 = GameData_204d688;
      v17_.v19 = &v17_.v17;
      GameHr_157b310(v14, a2, (__int64)&v17_.v17);
      result = (__int64)v17_.v19;
      if (v17_.v19 == &v17_.v17) {
        v15 = 4;
      }
      else {
        if (v17_.v19 == nullptr) {
          goto LABEL_20;
        }
        v15 = 5;
      }
      result = ((__int64 (*)(__int64))(*v17_.v19)[v15])((__int64)v17_.v19);
    LABEL_20:
      if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
        result = std___1___shared_weak_count___release_weak_alt1(v13);
      }
    }
  }
  else {
    *(_QWORD*)v4 = 0;
    v16 = ui_LayoutAccessor_FindTextBox_alt1((__int64*)(a1 + 88),
                                             (__int64)"T_Txt");
    if (v16 != 0) {
      GameRoutine_156c5d0_alt1(v16, (__int64)&GameData_1a9f09e, 0);
    }
    result =
        ui_LayoutAccessor_SetPaneVisible_alt1(a1 + 88, (__int64)"L_Icon", 0);
  }
LABEL_22:
  *(_QWORD*)(a1 + 1096) = 0;
  *(_BYTE*)(a1 + 1105) = a4 & 1;
  return result;
}

__int64 AsyncLoadThumbImage_18b5580(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 result;
  __int64 v12;

  *(_QWORD*)(a1 + 1096) = a2;
  *(_QWORD*)(a1 + 1080) = a3;
  if (a2 != 0) {
    v7 = GameRoutine_6fb810(a2);
    if (v7 != 0) {
      v8 = v7;
      v9 = ui_LayoutAccessor_FindTextBox(a1 + 88, "T_Txt");
      if (v9 != 0) {
        GameRoutine_156c5d0(v9, v8, 0);
      }
    }
    v10 = GameRoutine_155fbe0(a1 + 88, "L_Icon");
    result = GameRoutine_157ecd0(v10, a2, 0);
  }
  else {
    v12 = ui_LayoutAccessor_FindTextBox(a1 + 88, "T_Txt");
    if (v12 != 0) {
      GameRoutine_156c5d0(v12, &GameData_1a9f09e, 0);
    }
    result = ui_LayoutAccessor_SetPaneVisible(a1 + 88, "L_Icon", 0);
  }
  *(_QWORD*)(a1 + 1088) = 0;
  *(_BYTE*)(a1 + 1105) = a4 & 1;
  return result;
}

bool AsyncLoadThumbImage_18b59e0(__int64 a1)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  char v8;

  if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 144LL))(a1) & 1) == 0 ||
      ((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 32LL))(a1) & 1) == 0) {
    return false;
  }
  v2 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 24LL);
  while (1) {
    v2 = *(_QWORD*)(v2 + 24);
    if (v2 == 0) {
      break;
    }
    if ((*(_BYTE*)(v2 + 88) & 1) == 0) {
      return false;
    }
  }
  v4 = *(_QWORD*)(a1 + 320);
  if (v4 != 0) {
    v5 = *(_QWORD*)(a1 + 312);
    v6 = *(_QWORD*)(a1 + 320);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                              memory_order_relaxed);
    v7 = std___1___shared_weak_count_lock(v6);
    std___1___shared_weak_count___release_weak(v4);
    if (v7 != 0) {
      if (v5 != 0) {
        if (((*(__int64 (**)(__int64))(*(_QWORD*)v5 + 144LL))(v5) & 1) != 0) {
          v8 = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 32LL))(v5);
        }
        else {
          v8 = 0;
        }
      }
      else {
        v8 = 1;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
        std___1___shared_weak_count___release_weak(v7);
      }
      if ((v8 & 1) == 0) {
        return false;
      }
    }
  }
  return *(_WORD*)(a1 + 1088) != 0 || *(_QWORD*)(a1 + 1096) != 0;
}

__int64 AsyncLoadThumbImage_18b5b10(__int64 result, __int64* a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  char v8;
  unsigned int v9;
  int v10;

  v3 = result;
  if (*(_WORD*)(result + 1088) != 0 && *(_QWORD*)(result + 1080) != 0) {
    result = a2[1];
    if (result != 0) {
      result = std___1___shared_weak_count_lock(result);
      if (result != 0) {
        v4 = result;
        result = *a2;
        if (*a2 != 0) {
          result =
              GameRoutine_18a7690(result, (_WORD*)(v3 + 1088),
                                  *(_QWORD*)(v3 + 1080), *(_BYTE*)(v3 + 1105));
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
          return std___1___shared_weak_count___release_weak(v4);
        }
      }
    }
    return result;
  }
  if (*(_QWORD*)(result + 1096) == 0) {
    return result;
  }
  result = a2[1];
  if (result == 0) {
    return result;
  }
  result = std___1___shared_weak_count_lock(result);
  if (result == 0) {
    return result;
  }
  v5 = result;
  result = *a2;
  if (*a2 != 0) {
    v6 = *(_QWORD*)(v3 + 1096);
    if (v6 != 0) {
      if (*(_BYTE*)(v6 + 104) == 3 &&
          (unsigned int)*(unsigned __int8*)(v6 + 250) - 33 <= 1) {
        v10 = *(_WORD*)(v6 + 16) & 0xFFF;
        result = GameRoutine_18a80b0(result, (unsigned int*)&v10);
        goto LABEL_19;
      }
      LODWORD(v6) = *(_WORD*)(v6 + 16) & 0xFFF;
    }
    v7 = *(_QWORD*)(v3 + 1080);
    v8 = *(_BYTE*)(v3 + 1105);
    v9 = v6;
    result = GameRoutine_18a7ae0(result, &v9, v7, 0, 0, 0, v8);
  }

LABEL_19:
  if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    return std___1___shared_weak_count___release_weak(v5);
  }
  return result;
}

bool AsyncLoadThumbImage_18b6260(_QWORD* a1)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  char v8;

  if (((*(__int64 (**)(_QWORD*))(*a1 + 144LL))(a1) & 1) == 0 ||
      ((*(__int64 (**)(_QWORD*))(*a1 + 32LL))(a1) & 1) == 0) {
    return false;
  }
  v2 = *(_QWORD*)(a1[1] + 24LL);
  while (1) {
    v2 = *(_QWORD*)(v2 + 24);
    if (v2 == 0) {
      break;
    }
    if ((*(_BYTE*)(v2 + 88) & 1) == 0) {
      return false;
    }
  }
  v4 = a1[40];
  if (v4 != 0) {
    v5 = a1[39];
    v6 = a1[40];
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                              memory_order_relaxed);
    v7 = std___1___shared_weak_count_lock(v6);
    std___1___shared_weak_count___release_weak(v4);
    if (v7 != 0) {
      if (v5 != 0) {
        if (((*(__int64 (**)(__int64))(*(_QWORD*)v5 + 144LL))(v5) & 1) != 0) {
          v8 = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 32LL))(v5);
        }
        else {
          v8 = 0;
        }
      }
      else {
        v8 = 1;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
        std___1___shared_weak_count___release_weak(v7);
      }
      if ((v8 & 1) == 0) {
        return false;
      }
    }
  }
  return a1[135] != 0 && a1[136] != 0;
}

__int64 AsyncLoadThumbImage_18b6390(__int64 result, __int64* a2)
{
  __int64 v2;
  __int64* v4;
  __int64 v5;

  if (*(_QWORD*)(result + 1080) != 0 && *(_QWORD*)(result + 1088) != 0 &&
      a2[1] != 0) {
    v2 = result;
    result = std___1___shared_weak_count_lock(a2[1]);
    if (result != 0) {
      v4 = a2;
      v5 = result;
      result = *v4;
      if (*v4 != 0) {
        result = GameRoutine_18aa420(result, *(__int64**)(v2 + 1080),
                                     *(_QWORD*)(v2 + 1088));
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        return std___1___shared_weak_count___release_weak(v5);
      }
    }
  }
  return result;
}

__int64 AsyncLoadThumbImage_18ba5b0(__int64 a1)
{
  __int64 v2;
  __int64 result;
  __int64 v4;
  _QWORD v5[4];
  int v6;
  int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;

  *(_QWORD*)(a1 + 1080) = 0;
  v8 = -1;
  v9 = -1;
  v10 = -1;
  v11 = -1;
  v2 = *msg_MessageManager_instance__ptr[0];
  v12 = -1;
  v13 = -1;
  v14 = -1;
  v15 = -1;
  v16 = -1;
  v17 = -1;
  v18 = -1;
  v19 = -1;
  v5[0] = GameData_212e348 + 2;
  v5[1] = 0xFFFF0001FFFF0000LL;
  v5[2] = 0xFFFF0004FFFF0002LL;
  v5[3] = 0xFFFF0006FFFF0005LL;
  v20 = 8;
  v6 = -65529;
  v7 = -65528;
  result = GameRoutine_a4dbe0(v2, "MID_Sys_ValueEmptyLong", 0, v5);
  if (result != 0) {
    v4 = result;
    result = ui_LayoutAccessor_FindTextBox(a1 + 88, "T_Txt");
    if (result != 0) {
      return GameRoutine_156c5d0(result, v4, 0);
    }
  }
  return result;
}

__int64 AsyncLoadThumbImage_18ba690(__int64 a1, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  __int64 result;
  char* v6;
  _QWORD v7[4];
  int v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;

  *(_QWORD*)(a1 + 1080) = a2;
  v3 = *(_QWORD*)(a2 + 32);
  if (v3 != 0) {
    v10 = -1;
    v11 = -1;
    v12 = -1;
    v13 = -1;
    v4 = *msg_MessageManager_instance__ptr[0];
    v14 = -1;
    v15 = -1;
    v16 = -1;
    v17 = -1;
    v18 = -1;
    v19 = -1;
    v20 = -1;
    v21 = -1;
    v7[0] = msg_TagSelector_vtable;
    v7[1] = 0xFFFF0001FFFF0000LL;
    v7[2] = 0xFFFF0004FFFF0002LL;
    v7[3] = 0xFFFF0006FFFF0005LL;
    v22 = 8;
    v8 = -65529;
    v9 = -65528;
    result = GameRoutine_a4dbe0(v4, v3, 0, v7);
    v6 = (char*)result;
    if (result == 0) {
      return result;
    }
  }
  else {
    v6 = &GameData_1a9f09e;
  }
  result = ui_LayoutAccessor_FindTextBox(a1 + 88, "T_Txt");
  if (result != 0) {
    return GameRoutine_156c5d0(result, v6, 0);
  }
  return result;
}

__int64 AsyncLoadThumbImage_18ba7a0(__int64 a1, __int64* a2)
{
  __int64 result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  const char* v9;
  char* v10;
  _QWORD v11[4];
  int v12;
  int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;

  result = a2[1];
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v5 = *a2;
      v6 = result;
      if (v5 != 0) {
        v7 = *(_QWORD*)(*(_QWORD*)(a1 + 1080) + 32LL);
        if (v7 != 0) {
          v14 = -1;
          v15 = -1;
          v16 = -1;
          v17 = -1;
          v8 = *msg_MessageManager_instance__ptr[0];
          v18 = -1;
          v19 = -1;
          v20 = -1;
          v21 = -1;
          v22 = -1;
          v23 = -1;
          v24 = -1;
          v25 = -1;
          v11[0] = msg_TagSelector_vtable;
          v11[1] = 0xFFFF0001FFFF0000LL;
          v11[2] = 0xFFFF0004FFFF0002LL;
          v11[3] = 0xFFFF0006FFFF0005LL;
          v26 = 8;
          v12 = -65529;
          v13 = -65528;
          v9 = (const char*)GameRoutine_a4dbe0(v8, v7, 0, v11);
        }
        else {
          v9 = &GameData_1a9f09e;
        }
        v10 = (char*)game_util_Format("MID_Clan_H_  (%s)", v9);
        result = GameRoutine_18a59b0(v5, v10);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
        return std___1___shared_weak_count___release_weak(v6);
      }
    }
  }
  return result;
}

float AsyncLoadThumbImage_18bf370(__int64 a1)
{
  __int64 v2;
  float v3;

  v2 = ui_LayoutAccessor_GetPane(a1 + 80, "T_Txt");
  if (v2 == 0) {
    return *(float*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 24LL) + 80LL);
  }
  v3 = *(float*)(v2 + 80);
  ui_LayoutAccessor_GetPane(a1 + 80, "T_Num");
  return v3;
}

__int64 AsyncLoadThumbImage_18bf450(__int64 result, __int64 a2, const char* a3,
                                    __int64 a4)
{
  const char* v4;
  __int64 v5;
  __int64* v8;
  __int64 v9;
  __int64* v10;
  char v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  _QWORD v20[2];
  unsigned __int64 v21;
  unsigned __int64 v22;
  int v23;
  int v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;

  if (a3 != nullptr) {
    v4 = a3;
  }
  else {
    v4 = "T_Txt";
  }
  if (a2 != 0) {
    v5 = result;
    v8 = msg_MessageManager_instance__ptr[0];
    v9 = *msg_MessageManager_instance__ptr[0];
    v10 = GameData_212e348;
    if (a4 != 0) {
      v11 = GameRoutine_a4da40(v9);
      v12 = *v8;
      if ((v11 & 1) != 0) {
        v25 = -1;
        v26 = -1;
        v27 = -1;
        v28 = -1;
        v29 = -1;
        v30 = -1;
        v31 = -1;
        v32 = -1;
        v33 = -1;
        v34 = -1;
        v35 = -1;
        v36 = -1;
        v20[0] = v10 + 2;
        v20[1] = 0xFFFF0001FFFF0000LL;
        v21 = 0xFFFF0004FFFF0002LL;
        v22 = 0xFFFF0006FFFF0005LL;
        v37 = 8;
        v23 = -65529;
        v24 = -65528;
        v13 = GameRoutine_a4dbe0(v12, a4, 0, v20);
        if (v13 != 0) {
          v14 = v13;
        }
        else {
          v14 = (__int64)*msg_MessageManager_empty_text__ptr;
        }
        v15 = *v8 + 14704;
      }
      else {
        v14 = a4;
        v15 = v12 + 14704;
      }
      GameRoutine_60a020(v15, v14);
    }
    else {
      GameRoutine_a51f40(v9 + 14704);
    }
    v16 = *v8;
    v25 = -1;
    v26 = -1;
    v27 = -1;
    v28 = -1;
    v29 = -1;
    v30 = -1;
    v31 = -1;
    v32 = -1;
    v33 = -1;
    v34 = -1;
    v35 = -1;
    v36 = -1;
    v20[0] = v10 + 2;
    v20[1] = 0xFFFF0001FFFF0000LL;
    v21 = 0xFFFF0004FFFF0002LL;
    v22 = 0xFFFF0006FFFF0005LL;
    v37 = 8;
    v23 = -65529;
    v24 = -65528;
    v17 = GameRoutine_a4dbe0(v16, a2, 0, v20);
    if (v17 != 0) {
      v18 = v17;
      v19 = ui_LayoutAccessor_FindTextBox(v5 + 80, v4);
      if (v19 != 0) {
        GameRoutine_156c5d0(v19, v18, 0);
      }
    }
    return (*(__int64 (**)(__int64, const char*))(*(_QWORD*)v5 + 160LL))(v5,
                                                                         v4);
  }
  return result;
}

__int64 AsyncLoadThumbImage_18bf740(__int64 a1)
{
  char* v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD v10[4];
  int v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;

  if ((*(_BYTE*)(a1 + 248) & 1) != 0) {
    *(_QWORD*)(a1 + 256) = 9;
    v2 = *(char**)(a1 + 264);
  }
  else {
    *(_BYTE*)(a1 + 248) = 18;
    v2 = (char*)(a1 + 249);
  }
  strcpy(v2, "Anim_Heal");
  v3 = msg_MessageManager_instance__ptr[0];
  GameRoutine_a51f40(*msg_MessageManager_instance__ptr[0] + 14704);
  v4 = *v3;
  v13 = -1;
  v14 = -1;
  v15 = -1;
  v16 = -1;
  v17 = -1;
  v18 = -1;
  v19 = -1;
  v20 = -1;
  v21 = -1;
  v22 = -1;
  v23 = -1;
  v24 = -1;
  v10[0] = GameData_212e348 + 2;
  v10[1] = 0xFFFF0001FFFF0000LL;
  v10[2] = 0xFFFF0004FFFF0002LL;
  v10[3] = 0xFFFF0006FFFF0005LL;
  v25 = 8;
  v11 = -65529;
  v12 = -65528;
  v5 = GameRoutine_a4dbe0(v4, "MID_Battle_Damage_Miss", 0, v10);
  if (v5 != 0) {
    v6 = v5;
    v7 = ui_LayoutAccessor_FindTextBox(a1 + 80, "T_Txt");
    if (v7 != 0) {
      GameRoutine_156c5d0(v7, v6, 0);
    }
  }
  (*(void (**)(__int64, const char*))(*(_QWORD*)a1 + 160LL))(a1, "T_Txt");
  GameRoutine_1562cf0(a1 + 80, "Miss");
  if ((*(_BYTE*)(a1 + 248) & 1) != 0) {
    v8 = *(_QWORD*)(a1 + 264);
  }
  else {
    v8 = a1 + 249;
  }
  GameRoutine_1562680(a1 + 80, v8, 1.0);
  return (*(__int64 (**)(__int64, __int64))(*(_QWORD*)a1 + 40LL))(a1, 1);
}

__int64 AsyncLoadThumbImage_18bf8c0(__int64 a1)
{
  char* v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD v10[4];
  int v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;

  if ((*(_BYTE*)(a1 + 248) & 1) != 0) {
    *(_QWORD*)(a1 + 256) = 11;
    v2 = *(char**)(a1 + 264);
  }
  else {
    *(_BYTE*)(a1 + 248) = 22;
    v2 = (char*)(a1 + 249);
  }
  strcpy(v2, "Anim_Attack");
  v3 = msg_MessageManager_instance__ptr[0];
  GameRoutine_a51f40(*msg_MessageManager_instance__ptr[0] + 14704);
  v4 = *v3;
  v13 = -1;
  v14 = -1;
  v15 = -1;
  v16 = -1;
  v17 = -1;
  v18 = -1;
  v19 = -1;
  v20 = -1;
  v21 = -1;
  v22 = -1;
  v23 = -1;
  v24 = -1;
  v10[0] = GameData_212e348 + 2;
  v10[1] = 0xFFFF0001FFFF0000LL;
  v10[2] = 0xFFFF0004FFFF0002LL;
  v10[3] = 0xFFFF0006FFFF0005LL;
  v25 = 8;
  v11 = -65529;
  v12 = -65528;
  v5 = GameRoutine_a4dbe0(v4, "MID_Battle_Damage_NoDamage", 0, v10);
  if (v5 != 0) {
    v6 = v5;
    v7 = ui_LayoutAccessor_FindTextBox(a1 + 80, "T_Txt");
    if (v7 != 0) {
      GameRoutine_156c5d0(v7, v6, 0);
    }
  }
  (*(void (**)(__int64, const char*))(*(_QWORD*)a1 + 160LL))(a1, "T_Txt");
  GameRoutine_1562cf0(a1 + 80, "NoDamage");
  if ((*(_BYTE*)(a1 + 248) & 1) != 0) {
    v8 = *(_QWORD*)(a1 + 264);
  }
  else {
    v8 = a1 + 249;
  }
  GameRoutine_1562680(a1 + 80, v8, 1.0);
  return (*(__int64 (**)(__int64, __int64))(*(_QWORD*)a1 + 40LL))(a1, 1);
}

__int64 AsyncLoadThumbImage_18bfc30(__int64 a1)
{
  char* v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD v12[4];
  int v13;
  int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;

  if ((*(_BYTE*)(a1 + 248) & 1) != 0) {
    *(_QWORD*)(a1 + 256) = 12;
    v2 = *(char**)(a1 + 264);
  }
  else {
    *(_BYTE*)(a1 + 248) = 24;
    v2 = (char*)(a1 + 249);
  }
  strcpy(v2, "Anim_AttackC");
  v3 = msg_MessageManager_instance__ptr[0];
  GameRoutine_a51f40(*msg_MessageManager_instance__ptr[0] + 14704);
  v4 = *v3;
  v15 = -1;
  v16 = -1;
  v17 = -1;
  v18 = -1;
  v19 = -1;
  v20 = -1;
  v21 = -1;
  v22 = -1;
  v23 = -1;
  v24 = -1;
  v25 = -1;
  v26 = -1;
  v12[0] = GameData_212e348 + 2;
  v12[1] = 0xFFFF0001FFFF0000LL;
  v12[2] = 0xFFFF0004FFFF0002LL;
  v12[3] = 0xFFFF0006FFFF0005LL;
  v27 = 8;
  v13 = -65529;
  v14 = -65528;
  v5 = GameRoutine_a4dbe0(v4, "MID_Battle_Damage_ChainAttack", 0, v12);
  if (v5 != 0) {
    v6 = v5;
    v7 = ui_LayoutAccessor_FindTextBox(a1 + 80, "T_Txt");
    if (v7 != 0) {
      GameRoutine_156c5d0(v7, v6, 0);
    }
  }
  (*(void (**)(__int64, const char*))(*(_QWORD*)a1 + 160LL))(a1, "T_Txt");
  v8 = ui_LayoutAccessor_FindPane(a1 + 80, "T_Num");
  if (v8 != 0) {
    v9 = __dynamic_cast(v8, GameData_212d670[0], GameData_212d690, 0);
    if (v9 != 0) {
      GameRoutine_156c910(v9, "%d", 1);
    }
  }
  GameRoutine_1562cf0(a1 + 80, "ChainAttack");
  if ((*(_BYTE*)(a1 + 248) & 1) != 0) {
    v10 = *(_QWORD*)(a1 + 264);
  }
  else {
    v10 = a1 + 249;
  }
  GameRoutine_1562680(a1 + 80, v10, 1.0);
  return (*(__int64 (**)(__int64, __int64))(*(_QWORD*)a1 + 40LL))(a1, 1);
}

__int64 AsyncLoadThumbImage_18bfe00(__int64 a1)
{
  char* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  if ((*(_BYTE*)(a1 + 248) & 1) != 0) {
    *(_QWORD*)(a1 + 256) = 12;
    v2 = *(char**)(a1 + 264);
  }
  else {
    *(_BYTE*)(a1 + 248) = 24;
    v2 = (char*)(a1 + 249);
  }
  strcpy(v2, "Anim_AttackC");
  v3 = ui_LayoutAccessor_FindPane(a1 + 80, "T_Num");
  if (v3 != 0) {
    v4 = __dynamic_cast(v3, GameData_212d670[0], GameData_212d690, 0);
    if (v4 != 0) {
      GameRoutine_156c910(v4, "%d", 1);
    }
  }
  GameRoutine_1562cf0(a1 + 80, "IshAttack");
  if ((*(_BYTE*)(a1 + 248) & 1) != 0) {
    v5 = *(_QWORD*)(a1 + 264);
  }
  else {
    v5 = a1 + 249;
  }
  GameRoutine_1562680(a1 + 80, v5, 1.0);
  return (*(__int64 (**)(__int64, __int64))(*(_QWORD*)a1 + 40LL))(a1, 1);
}

__int64 AsyncLoadThumbImage_18bfef0(__int64 a1)
{
  char* v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD v10[4];
  int v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;

  if ((*(_BYTE*)(a1 + 248) & 1) != 0) {
    *(_QWORD*)(a1 + 256) = 11;
    v2 = *(char**)(a1 + 264);
  }
  else {
    *(_BYTE*)(a1 + 248) = 22;
    v2 = (char*)(a1 + 249);
  }
  strcpy(v2, "Anim_Attack");
  v3 = msg_MessageManager_instance__ptr[0];
  GameRoutine_a51f40(*msg_MessageManager_instance__ptr[0] + 14704);
  v4 = *v3;
  v13 = -1;
  v14 = -1;
  v15 = -1;
  v16 = -1;
  v17 = -1;
  v18 = -1;
  v19 = -1;
  v20 = -1;
  v21 = -1;
  v22 = -1;
  v23 = -1;
  v24 = -1;
  v10[0] = GameData_212e348 + 2;
  v10[1] = 0xFFFF0001FFFF0000LL;
  v10[2] = 0xFFFF0004FFFF0002LL;
  v10[3] = 0xFFFF0006FFFF0005LL;
  v25 = 8;
  v11 = -65529;
  v12 = -65528;
  v5 = GameRoutine_a4dbe0(v4, "MID_Battle_Damage_Guard", 0, v10);
  if (v5 != 0) {
    v6 = v5;
    v7 = ui_LayoutAccessor_FindTextBox(a1 + 80, "T_Txt");
    if (v7 != 0) {
      GameRoutine_156c5d0(v7, v6, 0);
    }
  }
  (*(void (**)(__int64, const char*))(*(_QWORD*)a1 + 160LL))(a1, "T_Txt");
  GameRoutine_1562cf0(a1 + 80, "IshGuard");
  if ((*(_BYTE*)(a1 + 248) & 1) != 0) {
    v8 = *(_QWORD*)(a1 + 264);
  }
  else {
    v8 = a1 + 249;
  }
  GameRoutine_1562680(a1 + 80, v8, 1.0);
  return (*(__int64 (**)(__int64, __int64))(*(_QWORD*)a1 + 40LL))(a1, 1);
}

__int64 AsyncLoadThumbImage_18c0070(__int64 result, unsigned __int8 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v5;
  char* v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _QWORD v13[4];
  int v14;
  int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;

  if (a2 != 0) {
    v29 = v2;
    v30 = v3;
    v5 = result;
    if ((*(_BYTE*)(result + 248) & 1) != 0) {
      *(_QWORD*)(result + 256) = 12;
      v6 = *(char**)(result + 264);
    }
    else {
      *(_BYTE*)(result + 248) = 24;
      v6 = (char*)(result + 249);
    }
    strcpy(v6, "Anim_AttackC");
    v7 = msg_MessageManager_instance__ptr[0];
    GameRoutine_a51f40(*msg_MessageManager_instance__ptr[0] + 14704);
    v8 = *v7;
    v16 = -1;
    v17 = -1;
    v18 = -1;
    v19 = -1;
    v20 = -1;
    v21 = -1;
    v22 = -1;
    v23 = -1;
    v24 = -1;
    v25 = -1;
    v26 = -1;
    v27 = -1;
    v13[0] = GameData_212e348 + 2;
    v13[1] = 0xFFFF0001FFFF0000LL;
    v13[2] = 0xFFFF0004FFFF0002LL;
    v13[3] = 0xFFFF0006FFFF0005LL;
    v28 = 8;
    v14 = -65529;
    v15 = -65528;
    v9 = GameRoutine_a4dbe0(v8, "MID_Battle_Damage_OverBlaze", 0, v13);
    if (v9 != 0) {
      v10 = v9;
      v11 = ui_LayoutAccessor_FindTextBox(v5 + 80, "T_Txt");
      if (v11 != 0) {
        GameRoutine_156c5d0(v11, v10, 0);
      }
    }
    (*(void (**)(__int64, const char*))(*(_QWORD*)v5 + 160LL))(v5, "T_Txt");
    GameRoutine_1562cf0(v5 + 80, *((_QWORD*)&GameData_2107810 + a2));
    if ((*(_BYTE*)(v5 + 248) & 1) != 0) {
      v12 = *(_QWORD*)(v5 + 264);
    }
    else {
      v12 = v5 + 249;
    }
    GameRoutine_1562680(v5 + 80, v12, 1.0);
    return (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v5 + 40LL))(v5, 1);
  }
  return result;
}

__int64 AsyncLoadThumbImage_18c0210(__int64 a1)
{
  char* v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD v10[4];
  int v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;

  if ((*(_BYTE*)(a1 + 248) & 1) != 0) {
    *(_QWORD*)(a1 + 256) = 11;
    v2 = *(char**)(a1 + 264);
  }
  else {
    *(_BYTE*)(a1 + 248) = 22;
    v2 = (char*)(a1 + 249);
  }
  strcpy(v2, "Anim_Attack");
  GameRoutine_1562cf0(a1 + 80, "Burst");
  v3 = msg_MessageManager_instance__ptr[0];
  GameRoutine_a51f40(*msg_MessageManager_instance__ptr[0] + 14704);
  v4 = *v3;
  v13 = -1;
  v14 = -1;
  v15 = -1;
  v16 = -1;
  v17 = -1;
  v18 = -1;
  v19 = -1;
  v20 = -1;
  v21 = -1;
  v22 = -1;
  v23 = -1;
  v24 = -1;
  v10[0] = GameData_212e348 + 2;
  v10[1] = 0xFFFF0001FFFF0000LL;
  v10[2] = 0xFFFF0004FFFF0002LL;
  v10[3] = 0xFFFF0006FFFF0005LL;
  v25 = 8;
  v11 = -65529;
  v12 = -65528;
  v5 = GameRoutine_a4dbe0(v4, "MID_Battle_Damage_Burst", 0, v10);
  if (v5 != 0) {
    v6 = v5;
    v7 = ui_LayoutAccessor_FindTextBox(a1 + 80, "T_Txt");
    if (v7 != 0) {
      GameRoutine_156c5d0(v7, v6, 0);
    }
  }
  (*(void (**)(__int64, const char*))(*(_QWORD*)a1 + 160LL))(a1, "T_Txt");
  if ((*(_BYTE*)(a1 + 248) & 1) != 0) {
    v8 = *(_QWORD*)(a1 + 264);
  }
  else {
    v8 = a1 + 249;
  }
  GameRoutine_1562680(a1 + 80, v8, 1.0);
  return (*(__int64 (**)(__int64, __int64))(*(_QWORD*)a1 + 40LL))(a1, 1);
}

__int64 AsyncLoadThumbImage_18c0390(__int64 a1)
{
  char* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  if ((*(_BYTE*)(a1 + 248) & 1) != 0) {
    *(_QWORD*)(a1 + 256) = 11;
    v2 = *(char**)(a1 + 264);
  }
  else {
    *(_BYTE*)(a1 + 248) = 22;
    v2 = (char*)(a1 + 249);
  }
  strcpy(v2, "Anim_Attack");
  GameRoutine_1562cf0(a1 + 80, "Debuff");
  v3 = ui_LayoutAccessor_FindPane(a1 + 80, "T_Num");
  if (v3 != 0) {
    v4 = __dynamic_cast(v3, GameData_212d670[0], GameData_212d690, 0);
    if (v4 != 0) {
      GameRoutine_156c910(v4, "%d", 1);
    }
  }
  if ((*(_BYTE*)(a1 + 248) & 1) != 0) {
    v5 = *(_QWORD*)(a1 + 264);
  }
  else {
    v5 = a1 + 249;
  }
  GameRoutine_1562680(a1 + 80, v5, 1.0);
  return (*(__int64 (**)(__int64, __int64))(*(_QWORD*)a1 + 40LL))(a1, 1);
}

__int64 AsyncLoadThumbImage_18c0b70(__int64 result, __int64 a2, __int64 a3)
{
  __int64 v5;
  char* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  if (a2 != 0) {
    v5 = result;
    if ((*(_BYTE*)(result + 248) & 1) != 0) {
      *(_QWORD*)(result + 256) = 10;
      v6 = *(char**)(result + 264);
    }
    else {
      *(_BYTE*)(result + 248) = 20;
      v6 = (char*)(result + 249);
    }
    strcpy(v6, "Anim_Skill");
    GameRoutine_1562cf0(result + 80, "Skill");
    v7 = ui_LayoutAccessor_FindPane(v5 + 80, "Skill_Icon");
    if (v7 != 0) {
      v7 = __dynamic_cast(v7, GameData_212d670[0], GameData_212d678[0], 0);
    }
    GameRoutine_1841930(v7, a2, 0);
    if (a3 == 0) {
      a3 = *(_QWORD*)(a2 + 32);
    }
    AsyncLoadThumbImage_18bf450(v5, a3, "T_Skill_Txt", *(_QWORD*)(a2 + 40));
    v8 = ui_LayoutAccessor_FindAlignment(v5 + 80, "A_Skill");
    if (v8 != 0) {
      Alignment_56b600(v8);
    }
    if ((*(_BYTE*)(v5 + 248) & 1) != 0) {
      v9 = *(_QWORD*)(v5 + 264);
    }
    else {
      v9 = v5 + 249;
    }
    GameRoutine_1562680(v5 + 80, v9, 1.0);
    return (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v5 + 40LL))(v5, 1);
  }
  return result;
}

__int64 AsyncLoadThumbImage_18c0ca0(__int64 result, __int64 a2, __int64 a3)
{
  __int64 v4;
  __int64 v6;
  __int64 v7;
  char* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  if (a2 == 0) {
    return result;
  }
  v4 = result;
  v6 = ui_LayoutAccessor_FindPane(result + 80, "Skill_Icon");
  if (v6 != 0) {
    v7 = __dynamic_cast(v6, GameData_212d670[0], GameData_212d678[0], 0);
    if ((*(_BYTE*)(v4 + 248) & 1) == 0) {
    LABEL_4:
      *(_BYTE*)(v4 + 248) = 20;
      v8 = (char*)(v4 + 249);
      goto LABEL_8;
    }
  }
  else {
    v7 = 0;
    if ((*(_BYTE*)(v4 + 248) & 1) == 0) {
      goto LABEL_4;
    }
  }
  *(_QWORD*)(v4 + 256) = 10;
  v8 = *(char**)(v4 + 264);

LABEL_8:
  strcpy(v8, "Anim_Skill");
  GameRoutine_1562cf0(v4 + 80, "Skill");
  GameRoutine_1841930(v7, a2, 0);
  GameRoutine_a51f40(*msg_MessageManager_instance__ptr[0] + 14704);
  if (a3 != 0) {
    v9 = ui_LayoutAccessor_FindTextBox(v4 + 80, "T_Skill_Txt");
    if (v9 != 0) {
      GameRoutine_156c5d0(v9, a3, 0);
    }
  }
  (*(void (**)(__int64, const char*))(*(_QWORD*)v4 + 160LL))(v4, "T_Skill_Txt");
  v10 = ui_LayoutAccessor_FindAlignment(v4 + 80, "A_Skill");
  if (v10 != 0) {
    Alignment_56b600(v10);
  }
  if ((*(_BYTE*)(v4 + 248) & 1) != 0) {
    v11 = *(_QWORD*)(v4 + 264);
  }
  else {
    v11 = v4 + 249;
  }
  GameRoutine_1562680(v4 + 80, v11, 1.0);
  return (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v4 + 40LL))(v4, 1);
}

__int64 AsyncLoadThumbImage_18c0e20(__int64 result, __int64 a2, __int64 a3)
{
  __int64 v5;
  char* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  if (a2 != 0) {
    v5 = result;
    if ((*(_BYTE*)(result + 248) & 1) != 0) {
      *(_QWORD*)(result + 256) = 10;
      v6 = *(char**)(result + 264);
    }
    else {
      *(_BYTE*)(result + 248) = 20;
      v6 = (char*)(result + 249);
    }
    strcpy(v6, "Anim_Skill");
    GameRoutine_1562cf0(result + 80, "BadStatus");
    v7 = ui_LayoutAccessor_FindPane(v5 + 80, "Skill_Icon");
    if (v7 != 0) {
      v7 = __dynamic_cast(v7, GameData_212d670[0], GameData_212d678[0], 0);
    }
    GameRoutine_1841930(v7, a2, 0);
    if (a3 == 0) {
      a3 = *(_QWORD*)(a2 + 32);
    }
    AsyncLoadThumbImage_18bf450(v5, a3, "T_Skill_Txt", *(_QWORD*)(a2 + 40));
    v8 = ui_LayoutAccessor_FindAlignment(v5 + 80, "A_Skill");
    if (v8 != 0) {
      Alignment_56b600(v8);
    }
    if ((*(_BYTE*)(v5 + 248) & 1) != 0) {
      v9 = *(_QWORD*)(v5 + 264);
    }
    else {
      v9 = v5 + 249;
    }
    GameRoutine_1562680(v5 + 80, v9, 1.0);
    return (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v5 + 40LL))(v5, 1);
  }
  return result;
}

__int64 AsyncLoadThumbImage_18c0f50(__int64 result, __int64 a2, __int64 a3)
{
  __int64 v5;
  char* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  if (a2 != 0) {
    v5 = result;
    if ((*(_BYTE*)(result + 248) & 1) != 0) {
      *(_QWORD*)(result + 256) = 10;
      v6 = *(char**)(result + 264);
    }
    else {
      *(_BYTE*)(result + 248) = 20;
      v6 = (char*)(result + 249);
    }
    strcpy(v6, "Anim_Skill");
    GameRoutine_1562cf0(result + 80, "BadStatus");
    v7 = ui_LayoutAccessor_FindPane(v5 + 80, "Skill_Icon");
    if (v7 != 0) {
      v7 = __dynamic_cast(v7, GameData_212d670[0], GameData_212d678[0], 0);
    }
    GameRoutine_1841930(v7, a2, 0);
    GameRoutine_a51f40(*msg_MessageManager_instance__ptr[0] + 14704);
    if (a3 != 0) {
      v8 = ui_LayoutAccessor_FindTextBox(v5 + 80, "T_Skill_Txt");
      if (v8 != 0) {
        GameRoutine_156c5d0(v8, a3, 0);
      }
    }
    (*(void (**)(__int64, const char*))(*(_QWORD*)v5 + 160LL))(v5,
                                                               "T_Skill_Txt");
    v9 = ui_LayoutAccessor_FindAlignment(v5 + 80, "A_Skill");
    if (v9 != 0) {
      Alignment_56b600(v9);
    }
    if ((*(_BYTE*)(v5 + 248) & 1) != 0) {
      v10 = *(_QWORD*)(v5 + 264);
    }
    else {
      v10 = v5 + 249;
    }
    GameRoutine_1562680(v5 + 80, v10, 1.0);
    return (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v5 + 40LL))(v5, 1);
  }
  return result;
}

#pragma GCC visibility pop
