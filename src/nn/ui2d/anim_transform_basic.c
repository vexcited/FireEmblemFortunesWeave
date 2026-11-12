#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_5714e0(_QWORD, _QWORD);
__int64 GameRoutine_571930(_QWORD, _QWORD);
__int64 GameRoutine_571cd0(_QWORD);
__int64 GameRoutine_579180(_QWORD);
__int64 GameRoutine_5791a0(void);
__int64 GameRoutine_59f2e0(_QWORD, float, float);
__int64 LayoutEx_57b5c0(_QWORD);
__int64 Pane_58fa40(_QWORD);
__int64 Pane_58fa70(_QWORD);
__int64 Pane_58fac0(void);
__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
extern _QWORD GameData_1b138b0[5];
extern __int64 (*nn_ui2d_AnimTransformBasic_vtable[])();
extern __int64* GameData_2136068;
float GameRoutine_59f160(_QWORD, _QWORD, float);
bool AnimTransformBasic_56e6a0(__int64 a1);
bool AnimTransformBasic_56e6c0(__int64 a1);
__int64 AnimTransformBasic_56e6e0(__int64 result);
__int64 AnimTransformBasic_DeletingDestructor(_QWORD* a1);
__int64 AnimTransformBasic_56e7a0(__int64 a1, __int64 a2, __int64 a3,
                                  __int64 a4);
__int64 AnimTransformBasic_56e7b0(_QWORD* a1);
__int64 AnimTransformBasic_56e800(__int64 a1, __int64 a2, __int64 a3,
                                  __int64 a4, unsigned __int16 a5);
__int64 AnimTransformBasic_56e920(__int64 result, __int64 a2, char a3);
bool AnimTransformBasic_56eaa0(__int64 a1, __int64 a2, __int64 a3);
__int64 AnimTransformBasic_56ee80(__int64 result, __int64 a2);
__int64 AnimTransformBasic_56f300(__int64 a1, __int64 a2);
__int64 AnimTransformBasic_56f480(__int64 result, __int64 a2);
__int64 AnimTransformBasic_56f4e0(__int64 result, __int64 a2);
__int64 AnimTransformBasic_56f550(__int64 result);
__int64 AnimTransformBasic_56f560(__int64 result);
__int64 AnimTransformBasic_56f600(__int64 result, __int64 a2);
__int64 AnimTransformBasic_56f700(__int64 result, __int64 a2);
void AnimTransformBasic_570120(__int64 a1, __int64 a2, __int64 a3);
void AnimTransformBasic_5709a0(__int64 a1, __int64 a2, __int64 a3);
_QWORD* AnimTransformBasic_570dd0(_QWORD* result);
__int64 AnimTransformBasic_570f40(__int64 a1);
__int64 AnimTransformBasic_570f60(__int64 a1);
__int64 AnimTransformBasic_570f80(__int64 a1);
__int64 AnimTransformBasic_570fa0(__int64 a1);
__int64 AnimTransformBasic_570fc0(__int64 a1);
__int64 AnimTransformBasic_570fe0(__int64 a1, __int64 a2);
__int64 AnimTransformBasic_571340(__int64 a1, __int64 a2, __int64 a3,
                                  __int64 a4, __int64 a5);
__int64
    AnimTransformBasic_56eaa0_alt1(_QWORD, _QWORD,
                                   _QWORD) __asm__("AnimTransformBasic_56eaa0");
__int64 AnimTransformBasic_5716e0(_QWORD, _QWORD);
__int64 LayoutEx_58d5b0(_QWORD, _QWORD);
__int64 LayoutEx_58d820(_QWORD, _QWORD);
__int64 TextBox_59d8e0(_QWORD, _QWORD, long double);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 nn_detail_UnexpectedDefaultImpl(_QWORD);
__int64 nn_ui2d_Pane_GetRuntimeTypeInfoStatic(float, long double, long double,
                                              long double, long double);
__int64 strcmp(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
               _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
               _QWORD, _QWORD);
extern _QWORD GameData_1b01688[4];
extern _UNKNOWN* GameData_212dfd0;
extern __int64* GameData_212dfc8;
long double TextBox_59d920(_QWORD, _QWORD);
__int64 AnimTransformBasic_56f080(__int64 result, __int64 a2);
void AnimTransformBasic_56f760_alt1(
    __int64 a1, float* a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6,
    __int64 a7, __int64 a8) __asm__("AnimTransformBasic_56f760");
__int64 LayoutEx_57b5c0_alt1(__int64) __asm__("LayoutEx_57b5c0");
__int64 LayoutEx_579180(__int64);
__int64 memset_alt1(__int64, int, unsigned __int64) __asm__("memset");
__int64* nn_ui2d_Pane_GetRuntimeTypeInfoStatic_alt1() __asm__(
    "nn_ui2d_Pane_GetRuntimeTypeInfoStatic");
__int64 LayoutEx_58d5b0_alt1(__int64, int) __asm__("LayoutEx_58d5b0");
__int64 LayoutEx_58d820_alt1(__int64, int) __asm__("LayoutEx_58d820");
__int64 TextBox_59d8e0_alt1(__int64 result, int,
                            float) __asm__("TextBox_59d8e0");
float TextBox_59d920_alt1(__int64, int) __asm__("TextBox_59d920");
float nn_ui2d_59f160(float*, int, float);
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
int strcmp_alt1(const char*, const char*) __asm__("strcmp");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");
void nn_detail_UnexpectedDefaultImpl_alt1() __asm__(
    "nn_detail_UnexpectedDefaultImpl");
void nn_ui2d_59f2e0(_WORD*, float);
void AnimTransformBasic_56f760(__int64 a1, float* a2, __int64 a3);

bool AnimTransformBasic_56e6a0(__int64 a1)
{
  return *(_BYTE*)(*(_QWORD*)(a1 + 24) + 10LL) != 0;
}

bool AnimTransformBasic_56e6c0(__int64 a1)
{
  return *(_WORD*)(*(_QWORD*)(a1 + 24) + 8LL) == 0;
}

__int64 AnimTransformBasic_56e6e0(__int64 result)
{
  *(_DWORD*)(result + 32) = 0;
  *(_QWORD*)(result + 16) = result + 8;
  *(_QWORD*)(result + 24) = 0;
  *(_BYTE*)(result + 36) = 1;
  *(_QWORD*)(result + 40) = 0;
  *(_QWORD*)(result + 48) = 0;
  *(_DWORD*)(result + 56) = 0;
  *(_QWORD*)result = nn_ui2d_AnimTransformBasic_vtable;
  *(_QWORD*)(result + 8) = result + 8;
  return result;
}

__int64 AnimTransformBasic_DeletingDestructor(_QWORD* a1)
{
  __int64 result;

  *a1 = GameData_2136068 + 2;
  if (a1[6] != 0) {
    GameRoutine_5791a0();
  }
  result = a1[5];
  if (result != 0) {
    return GameRoutine_5791a0();
  }
  return result;
}

__int64 AnimTransformBasic_56e7a0(__int64 a1, __int64 a2, __int64 a3,
                                  __int64 a4)
{
  return (*(__int64 (**)(__int64, __int64, __int64, __int64, _QWORD))(
      *(_QWORD*)a1 + 72LL))(a1, a2, a3, a4, *(unsigned __int16*)(a4 + 14));
}

__int64 AnimTransformBasic_56e7b0(_QWORD* a1)
{
  __int64 result;

  a1[3] = 0;
  if (a1[6] != 0) {
    GameRoutine_5791a0();
  }
  result = a1[5];
  a1[6] = 0;
  if (result != 0) {
    result = GameRoutine_5791a0();
  }
  a1[5] = 0;
  return result;
}

__int64 AnimTransformBasic_56e800(__int64 a1, __int64 a2, __int64 a3,
                                  __int64 a4, unsigned __int16 a5)
{
  __int64 v7;
  unsigned __int64 v8;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 result;
  __int64 v17;

  *(_QWORD*)(a1 + 24) = a4;
  *(_QWORD*)(a1 + 40) = 0;
  v7 = *(unsigned __int16*)(a4 + 12);
  if (*(_WORD*)(a4 + 12) == 0) {
    goto LABEL_6;
  }
  v8 = 8 * v7;
  v12 = LayoutEx_579180(8 * v7);
  if (v12 != 0) {
    v13 = v12;
    memset_alt1(v12, 0, v8);
    *(_QWORD*)(a1 + 40) = v13;
    if (*(_WORD*)(a4 + 12) != 0) {
      v14 = 0;
      do {
        *(_QWORD*)(*(_QWORD*)(a1 + 40) + 8 * v14) =
            (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)a3 + 112LL))(
                a3, a2, a4 + 20 + *(unsigned int*)(a4 + 20 + 4 * v14));
        ++v14;
      } while (v14 < *(unsigned __int16*)(a4 + 12));
    }
  LABEL_6:
    v15 = 16LL * a5;
    result = LayoutEx_579180(v15);
    if (a5 == 0) {
      goto LABEL_10;
    }
    goto LABEL_7;
  }
  *(_QWORD*)(a1 + 40) = 0;
  v15 = 16LL * a5;
  result = LayoutEx_579180(v15);
  if (a5 == 0) {
  LABEL_10:
    *(_QWORD*)(a1 + 48) = result;
    if (result == 0) {
      return result;
    }
    goto LABEL_11;
  }
LABEL_7:
  if (result == 0) {
    goto LABEL_10;
  }
  v17 = result;
  result = memset_alt1(result, 0, v15);
  *(_QWORD*)(a1 + 48) = v17;
LABEL_11:
  *(_WORD*)(a1 + 58) = a5;
  return result;
}

__int64 AnimTransformBasic_56e920(__int64 result, __int64 a2, char a3)
{
  __int64 v3;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned int v10;
  int v11;
  __int64 v13;
  __int64 v14;
  __int64* v15;

  v3 = *(_QWORD*)(result + 24);
  if (*(_WORD*)(v3 + 14) != 0) {
    v6 = result;
    v7 = 0;
    v8 = v3 + *(unsigned int*)(v3 + 16);
    while (1) {
      v9 = v3 + *(unsigned int*)(v8 + 4 * v7);
      v10 = *(unsigned __int8*)(v9 + 29);
      if (v10 > 2) {
        break;
      }
      if (*(_BYTE*)(v9 + 29) == 0) {
        goto LABEL_17;
      }
      if (v10 == 1) {
        result =
            (*(__int64 (**)(__int64, __int64, _QWORD))(*(_QWORD*)a2 + 136LL))(
                a2, v3 + *(unsigned int*)(v8 + 4 * v7), a3 & 1);
        if (result != 0) {
          result = AnimTransformBasic_56eaa0(v6, result, v9);
        }
        goto LABEL_3;
      }
      if (v10 == 2) {
        result =
            (*(__int64 (**)(__int64, __int64, _QWORD))(*(_QWORD*)a2 + 120LL))(
                a2, v3 + *(unsigned int*)(v8 + 4 * v7), a3 & 1);
        if (result != 0) {
          v11 = *(unsigned __int8*)(v9 + 29);
          if (v11 != 4 && v11 != 2) {
            result = Pane_58fac0();
            if (result == 0) {
              goto LABEL_3;
            }
          LABEL_18:
            v13 = *(unsigned __int16*)(v6 + 56);
            if ((unsigned int)v13 < *(unsigned __int16*)(v6 + 58)) {
              v14 = *(_QWORD*)(v6 + 48);
              *(_WORD*)(v6 + 56) = v13 + 1;
              v15 = (__int64*)(v14 + 16 * v13);
              *v15 = result;
              v15[1] = v9;
            }
            goto LABEL_3;
          }
          result = Pane_58fac0();
          if (result != 0) {
            goto LABEL_18;
          }
        }
      }
    LABEL_3:
      if (++v7 >= (unsigned __int64)*(unsigned __int16*)(v3 + 14)) {
        return result;
      }
    }
    if (v10 - 3 > 1) {
      goto LABEL_3;
    }
  LABEL_17:
    result = (*(__int64 (**)(__int64, __int64, _QWORD))(*(_QWORD*)a2 + 120LL))(
        a2, v3 + *(unsigned int*)(v8 + 4 * v7), a3 & 1);
    if (result != 0) {
      goto LABEL_18;
    }
    goto LABEL_3;
  }
  return result;
}

bool AnimTransformBasic_56eaa0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3;
  unsigned int v4;
  unsigned int v7;
  int v8;
  __int64 v10;
  unsigned int v11;
  unsigned __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;
  unsigned __int8 v16;
  __int64 v17;
  _BOOL4 v19;
  int v20;
  unsigned __int8* v21;
  unsigned __int8 v22;
  int v23;
  unsigned int v25;
  unsigned int v26;
  bool v27;
  unsigned __int8 v30;
  unsigned __int8 v31;
  int v32;
  _BOOL4 v38;
  __int64 v39;
  __int64 v40;
  __int64 v42;
  _QWORD* v43;
  unsigned int v45;
  unsigned int v46;
  __int64 v47;
  __int64 v48;

  v3 = *(unsigned __int16*)(a1 + 56);
  v4 = *(unsigned __int16*)(a1 + 58);
  if (v3 >= v4) {
    return v3 < v4;
  }
  v7 = *(unsigned __int16*)(a1 + 56);
  if (a3 == 0) {
    goto LABEL_95;
  }
  v8 = *(unsigned __int8*)(a3 + 29);
  if (v8 == 4 || v8 == 2) {
    v10 = *(unsigned int*)(a3 + 32);
    v11 = *(unsigned __int8*)(a3 + 28);
    if (*(_BYTE*)(a3 + 28) == 0) {
    LABEL_95:
      v42 = *(_QWORD*)(a1 + 48);
      *(_WORD*)(a1 + 56) = v7 + 1;
      v43 = (_QWORD*)(v42 + 16LL * v7);
      *v43 = a2;
      v43[1] = a3;
      return v3 < v4;
    }
  }
  else {
    v10 = 32;
    v11 = *(unsigned __int8*)(a3 + 28);
    if (*(_BYTE*)(a3 + 28) == 0) {
      goto LABEL_95;
    }
  }
  v45 = *(unsigned __int16*)(a1 + 58);
  v46 = *(unsigned __int16*)(a1 + 56);
  v12 = 0;
  v47 = a3;
  v48 = a3 + v10;
  v13 = 1;
  v14 = 1380078662;
  do {
    v15 = a3 + *(unsigned int*)(v48 + 4 * v12);
    v16 = *(_BYTE*)(v15 + 4);
    if (v16 != 0) {
      v17 = 0;
      while (1) {
        v20 = *(_DWORD*)v15;
        v21 = (unsigned __int8*)(v15 + *(unsigned int*)(v15 + 8 + 4 * v17));
        if (*(int*)v15 <= 1347701829) {
          break;
        }
        if (v20 > 1397115973) {
          if (v20 == 1397115974) {
            v19 = v21[2] == 2 && v21[1] < 7u &&
                  (*(_DWORD*)(a2 + 16) & 0x8000) != 0;
          }
          else {
            if (v20 != 1398033478) {
              goto LABEL_23;
            }
            v25 = *v21;
            v26 = (*(unsigned __int8*)(a2 + 16) >> 2) & 3;
            v27 = v21[2] != 2 || v21[1] >= 5u;
          LABEL_53:
            v19 = !v27 && v26 > v25;
          }
        LABEL_22:
          v13 &= v19;
          goto LABEL_23;
        }
        if (v20 == 1347701830) {
          v38 = v21[1] == 0 && v21[2] == 1 &&
                (*(_DWORD*)(a2 + 20) & 3u) > *v21 && *(_QWORD*)(a1 + 40) != 0;
          v13 &= v38;
          if (*(_WORD*)(*(_QWORD*)(a1 + 24) + 12LL) != 0) {
            v39 = 0;
            while (1) {
              v40 = *(_QWORD*)(*(_QWORD*)(a1 + 40) + 8 * v39);
              if (((*(__int64 (**)(__int64, __int64))(*(_QWORD*)v40 + 48LL))(
                       v40, v14) &
                   1) == 0) {
                break;
              }
              if (++v39 >= (unsigned __int64)*(
                               unsigned __int16*)(*(_QWORD*)(a1 + 24) + 12LL)) {
                goto LABEL_92;
              }
            }
            v13 = 0;
          LABEL_92:
            v16 = *(_BYTE*)(v15 + 4);
            v14 = 1380078662;
          }
          goto LABEL_23;
        }
        if (v20 == 1380078662) {
          v25 = *v21;
          v26 = (*(_DWORD*)(a2 + 16) >> 20) & 3;
          v27 = v21[2] != 2 || v21[1] >= 7u;
          goto LABEL_53;
        }
      LABEL_23:
        if (++v17 >= (unsigned __int64)v16) {
          a3 = v47;
          v11 = *(unsigned __int8*)(v47 + 28);
          goto LABEL_13;
        }
      }
      if (v20 > 1129139269) {
        if (v20 == 1129139270) {
          v19 = v21[2] == 2 && v21[1] < 0x38u;
        }
        else {
          if (v20 != 1296649286) {
            goto LABEL_23;
          }
          v19 =
              v21[2] == 2 && v21[1] < 3u && (*(_DWORD*)(a2 + 16) & 0x1000) != 0;
        }
      }
      else if (v20 == 1095194182) {
        v30 = v21[1];
        v31 = *v21;
        v32 = v21[2];
        v19 = v30 == 0 && v32 == 2 && ((*(_DWORD*)(a2 + 16) >> 18) & 3u) > v31;
      }
      else {
        if (v20 != 1128352838) {
          goto LABEL_23;
        }
        v22 = v21[1];
        v23 = v21[2];
        v19 = v22 == 0 && v23 == 2 && (*(_DWORD*)(a2 + 16) & 0x200) != 0;
      }
      goto LABEL_22;
    }
  LABEL_13:
    ++v12;
  } while (v12 < v11);
  v4 = v45;
  v3 = v46;
  if ((v13 & 1) != 0) {
    v7 = *(unsigned __int16*)(a1 + 56);
    goto LABEL_95;
  }
  return v3 < v4;
}

__int64 AnimTransformBasic_56ee80(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  int v17;
  __int64 v19;
  __int64 v20;
  __int64* v21;

  v2 = *(_QWORD*)(result + 24);
  if (*(_WORD*)(v2 + 14) != 0) {
    v3 = a2 + 24;
    v5 = result;
    v6 = 0;
    v7 = v2 + *(unsigned int*)(v2 + 16);
    do {
      v8 = v2 + *(unsigned int*)(v7 + 4 * v6);
      v9 = *(unsigned __int8*)(v8 + 29);
      if (v9 > 2) {
        if (v9 - 3 <= 1) {
        LABEL_14:
          v11 = *(_QWORD*)(a2 + 32);
          if (v11 != v3) {
            while (1) {
              result = GameRoutine_5714e0(v8, *(_QWORD*)(v11 + 16) + 176LL);
              if ((result & 1) != 0) {
                break;
              }
              v11 = *(_QWORD*)(v11 + 8);
              if (v11 == v3) {
                goto LABEL_4;
              }
            }
            v13 = *(_QWORD*)(v11 + 16);
            if (v13 != 0) {
              v14 = *(unsigned __int16*)(v5 + 56);
              if ((unsigned int)v14 < *(unsigned __int16*)(v5 + 58)) {
                v15 = *(_QWORD*)(v5 + 48);
                *(_WORD*)(v5 + 56) = v14 + 1;
                v16 = (_QWORD*)(v15 + 16 * v14);
                *v16 = v13;
                v16[1] = v8;
              }
            }
          }
        }
      }
      else {
        if (*(_BYTE*)(v8 + 29) == 0) {
          goto LABEL_14;
        }
        if (v9 == 1) {
          v12 = *(_QWORD*)(a2 + 32);
          if (v12 != v3) {
            while (1) {
              result = (*(__int64 (**)(_QWORD, __int64, _QWORD))(
                  **(_QWORD**)(v12 + 16) + 136LL))(*(_QWORD*)(v12 + 16), v8, 0);
              if (result != 0) {
                break;
              }
              v12 = *(_QWORD*)(v12 + 8);
              if (v12 == v3) {
                goto LABEL_4;
              }
            }
            result = AnimTransformBasic_56eaa0(v5, result, v8);
          }
          goto LABEL_4;
        }
        if (v9 == 2) {
          v10 = *(_QWORD*)(a2 + 32);
          if (v10 != v3) {
            while (1) {
              result = GameRoutine_5714e0(v8, *(_QWORD*)(v10 + 16) + 176LL);
              if ((result & 1) != 0) {
                break;
              }
              v10 = *(_QWORD*)(v10 + 8);
              if (v10 == v3) {
                goto LABEL_4;
              }
            }
            result = *(_QWORD*)(v10 + 16);
            if (result != 0) {
              v17 = *(unsigned __int8*)(v8 + 29);
              if (v17 != 4 && v17 != 2) {
                result = Pane_58fac0();
                if (result == 0) {
                  goto LABEL_4;
                }
              LABEL_34:
                v19 = *(unsigned __int16*)(v5 + 56);
                if ((unsigned int)v19 < *(unsigned __int16*)(v5 + 58)) {
                  v20 = *(_QWORD*)(v5 + 48);
                  *(_WORD*)(v5 + 56) = v19 + 1;
                  v21 = (__int64*)(v20 + 16 * v19);
                  *v21 = result;
                  v21[1] = v8;
                }
                goto LABEL_4;
              }
              result = Pane_58fac0();
              if (result != 0) {
                goto LABEL_34;
              }
            }
          }
        }
      }
    LABEL_4:
      ++v6;
    } while (v6 < *(unsigned __int16*)(v2 + 14));
  }
  return result;
}

__int64 AnimTransformBasic_56f080(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;

  v2 = *(_QWORD*)(result + 24);
  if (*(_WORD*)(v2 + 14) != 0) {
    v4 = result;
    v5 = 0;
    v6 = v2 + *(unsigned int*)(v2 + 16);
    do {
      v7 = v2 + *(unsigned int*)(v6 + 4 * v5);
      if (*(_BYTE*)(v7 + 29) == 1) {
        result = AnimTransformBasic_5716e0(*(_QWORD*)(a2 + 40),
                                           v2 + *(unsigned int*)(v6 + 4 * v5));
        if ((result & 1) != 0) {
          result = AnimTransformBasic_56eaa0_alt1(v4, a2, v7);
          if ((result & 1) == 0) {
            break;
          }
        }
      }
      ++v5;
    } while (v5 < *(unsigned __int16*)(v2 + 14));
  }
  return result;
}

__int64 AnimTransformBasic_56f300(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  unsigned __int16 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  _QWORD* v18;
  __int64 v19;
  __int64 result;
  int v21;
  unsigned int v22;

  v2 = *(unsigned __int16*)(a1 + 56);
  if (*(_WORD*)(a1 + 56) != 0) {
    v5 = 0;
    while (1) {
      v6 = *(_QWORD*)(a1 + 48);
      v7 = (_QWORD*)(v6 + 16 * v5);
      if (*v7 == a2) {
        break;
      }
      v8 = Pane_58fa40(a2);
      if (v8 != 0) {
        v9 = v8;
        v10 = -12;
        while (1) {
          v10 += 12;
          if (Pane_58fa70(a2) + v10 == *v7) {
            break;
          }
          if (--v9 == 0) {
            goto LABEL_4;
          }
        }
        v11 = *(unsigned __int16*)(a1 + 56);
        if (v5 + 1 < v11) {
          v12 = *(_QWORD*)(a1 + 48);
          v13 = v12 + 16 * v11;
          v14 = (_QWORD*)(v12 + 16 * v5);
          v15 = *(_QWORD*)(v13 - 16);
          v11 = *(_QWORD*)(v13 - 8);
          *v14 = v15;
          v14[1] = v11;
          LOWORD(v11) = *(_WORD*)(a1 + 56);
        }
        *(_WORD*)(a1 + 56) = v11 - 1;
      }
    LABEL_4:
      if (++v5 == v2) {
        goto LABEL_16;
      }
    }
    v16 = *(unsigned __int16*)(a1 + 56);
    if ((int)v5 + 1 < (unsigned int)v16) {
      v17 = v6 + 16 * v16;
      v18 = (_QWORD*)(v6 + 16LL * (unsigned int)v5);
      v19 = *(_QWORD*)(v17 - 16);
      v16 = *(_QWORD*)(v17 - 8);
      *v18 = v19;
      v18[1] = v16;
      LOWORD(v16) = *(_WORD*)(a1 + 56);
    }
    *(_WORD*)(a1 + 56) = v16 - 1;
  }

LABEL_16:
  result = (*(__int64 (**)(__int64))(*(_QWORD*)a2 + 80LL))(a2);
  v21 = (unsigned __int8)result;
  if ((_BYTE)result != 0) {
    v22 = 0;
    do {
      result = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a2 + 88LL))(a2, v22);
      if (result != 0) {
        result = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)a1 + 128LL))(
            a1, result);
      }
      ++v22;
    } while (v21 != v22);
  }
  return result;
}

__int64 AnimTransformBasic_56f480(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;

  v2 = *(_QWORD*)(a2 + 32);
  v3 = a2 + 24;
  if (v2 != a2 + 24) {
    v4 = result;
    do {
      result = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v4 + 112LL))(
          v4, *(_QWORD*)(v2 + 16));
      v2 = *(_QWORD*)(v2 + 8);
    } while (v2 != v3);
  }
  return result;
}

__int64 AnimTransformBasic_56f4e0(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  _QWORD* i;
  __int64 v5;
  __int64 v6;

  v2 = *(unsigned __int16*)(result + 56);
  if (*(_WORD*)(result + 56) != 0) {
    v3 = 0;
    for (i = *(_QWORD**)(result + 48); *i != a2; i += 2) {
      if (v2 == ++v3) {
        return result;
      }
    }
    if ((int)v3 + 1 < (unsigned int)v2) {
      v5 = *(_QWORD*)(result + 48) + 16LL * *(unsigned __int16*)(result + 56);
      v6 = *(_QWORD*)(v5 - 16);
      v2 = *(_QWORD*)(v5 - 8);
      *i = v6;
      i[1] = v2;
      LOWORD(v2) = *(_WORD*)(result + 56);
    }
    *(_WORD*)(result + 56) = v2 - 1;
  }
  return result;
}

__int64 AnimTransformBasic_56f550(__int64 result)
{
  *(_WORD*)(result + 56) = 0;
  return result;
}

__int64 AnimTransformBasic_56f560(__int64 result)
{
  _QWORD* v1;
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  unsigned __int64 v5;

  if (*(_BYTE*)(result + 36) == 1) {
    v1 = (_QWORD*)result;
    if (*(_WORD*)(result + 56) != 0) {
      v2 = 16LL * *(unsigned __int16*)(result + 56);
      v3 = 0;
      do {
        v4 = (_QWORD*)(v1[6] + v3);
        v5 = *(unsigned __int8*)(v4[1] + 29LL);
        if (v5 <= 4) {
          result = (*(__int64 (**)(_QWORD*, _QWORD))(
              *v1 + GameData_1b138b0[v5]))(v1, *v4);
        }
        v3 += 16;
      } while (v2 != v3);
    }
  }
  return result;
}

__int64 AnimTransformBasic_56f600(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  _QWORD* i;
  int v6;
  unsigned int v7;

  if (*(_BYTE*)(result + 36) == 1) {
    v2 = *(unsigned __int16*)(result + 56);
    v3 = result;
    if (*(_WORD*)(result + 56) != 0) {
      for (i = (_QWORD*)(*(_QWORD*)(result + 48) + 8LL); *(i - 1) != a2;
           i += 2) {
        if (--v2 == 0) {
          return result;
        }
      }
      (*(void (**)(__int64, __int64, _QWORD))(*(_QWORD*)result + 152LL))(
          result, a2, *i);
      result = (*(__int64 (**)(__int64))(*(_QWORD*)a2 + 80LL))(a2);
      v6 = (unsigned __int8)result;
      if ((_BYTE)result != 0) {
        v7 = 0;
        do {
          result =
              (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a2 + 88LL))(a2, v7);
          if (result != 0) {
            result = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v3 + 56LL))(
                v3, result);
          }
          ++v7;
        } while (v6 != v7);
      }
    }
  }
  return result;
}

__int64 AnimTransformBasic_56f700(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 i;

  if (*(_BYTE*)(result + 36) == 1) {
    v2 = *(unsigned __int16*)(result + 56);
    if (*(_WORD*)(result + 56) != 0) {
      for (i = *(_QWORD*)(result + 48) + 8LL; *(_QWORD*)(i - 8) != a2;
           i += 16) {
        if (--v2 == 0) {
          return result;
        }
      }
      return (*(__int64 (**)(__int64))(*(_QWORD*)result + 160LL))(result);
    }
  }
  return result;
}

void AnimTransformBasic_56f760(__int64 a1, float* a2, __int64 a3)
{

#pragma clang fp contract(off)
  int v3;
  bool v5;
  __int64 v6;
  float* v7;
  __int64 v8;
  atomic_uchar* v9;
  __int64* v10;
  __int64 v11;
  int v12;
  __int64 v13;
  __int64 v14;
  float v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  float v19;
  float v20;
  __int64 v21;
  float v22;
  unsigned __int64 v23;
  float v24;
  float v25;
  __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  float v29;
  float* v30;
  char v31;
  __int64 v32;
  int v33;
  float* v34;
  int v35;
  float* v36;
  __int64 v37;
  int v39;
  int v40;
  float* v42;
  float* v43;
  float v44;
  unsigned __int64 v45;
  float v46;
  __int64 v47;
  float v48;
  __int64 v49;
  float v50;
  __int64 v51;
  unsigned __int8 v52;
  __int64 v53;
  float v54;
  __int64 v55;
  _WORD* v56;
  __int64 v57;
  __int64 v58;
  float* v59;
  float v60;
  __int64 v62;
  __int64* v63;
  __int64 v65;
  __int64 v66;
  unsigned int v67;
  __int64** v68;
  __int64* v69;
  __int64* v70;
  __int64* v71;
  __int64* v72;
  __int64* v73;
  __int64* v74;
  __int64 v75;
  __int64* v76;
  __int64 v77;
  __int64 v78;
  __int64* v79;
  __int64 v81;
  unsigned __int64 v82;
  float v83;
  float v84;
  float v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  float v89;
  __int64 v90;
  __int64 v91;
  float v92;
  __int64 v93;
  __int64 v94;
  float v95;
  unsigned __int64 v96;
  float v97;
  __int64 v98;
  float v99;
  unsigned __int64 v100;
  unsigned __int64 v101;
  float v102;
  float v103;
  __int64 v104;
  __int64 v105;
  __int64 v107;
  __int64 v108;
  float* v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;

  v103 = COERCE_AS(__typeof__(v103), PSEUDO_REGISTER(float, "s0", "=w")),
  v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s0", "=w")),
  v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(float, "s0", "=w")),
  v84 = COERCE_AS(__typeof__(v84), PSEUDO_REGISTER(float, "s0", "=w")),
  v95 = COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(float, "s0", "=w"));
  v3 = *(unsigned __int8*)(a3 + 29);
  v5 = v3 == 4 || v3 == 2;
  if (v5) {
    v6 = *(unsigned int*)(a3 + 32);
    if (*(_BYTE*)(a3 + 28) != 0) {
    LABEL_9:
      v7 = a2 + 12;
      v8 = 0;
      v108 = a3 + v6;
      v9 = (atomic_uchar*)GameData_212dfd0;
      v10 = GameData_212dfc8;
      v107 = a3;
      v109 = a2 + 12;
      do {
        v110 = v8;
        v11 = a3 + *(unsigned int*)(v108 + 4 * v8);
        v13 = v11 + 8;
        v12 = *(_DWORD*)v11;
        v112 = v11 + 8;
        if (*(int*)v11 <= 1314344005) {
          if (v12 > 1129729093) {
            if (v12 == 1129729094) {
              if (*(_BYTE*)(v11 + 4) != 0) {
                v82 = 0;
                v83 = *(float*)(a1 + 32);
                do {
                  v86 = v11 + *(unsigned int*)(v13 + 4 * v82);
                  v87 = *(unsigned int*)(v86 + 8);
                  if (*(_BYTE*)(v86 + 2) == 3) {
                    (*(void (**)(float*, _QWORD))(*(_QWORD*)a2 + 48LL))(
                        a2, *(unsigned __int8*)(v86 + 1)),
                        v103 = COERCE_AS(__typeof__(v103),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v19 = COERCE_AS(__typeof__(v19),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v25 = COERCE_AS(__typeof__(v25),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v84 = COERCE_AS(__typeof__(v84),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v95 = COERCE_AS(__typeof__(v95),
                                        PSEUDO_REGISTER(float, "s0", "=w"));
                    nn_ui2d_59f2e0((_WORD*)(v86 + v87), v83),
                        v103 = COERCE_AS(__typeof__(v103),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v19 = COERCE_AS(__typeof__(v19),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v25 = COERCE_AS(__typeof__(v25),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v84 = COERCE_AS(__typeof__(v84),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v95 = COERCE_AS(__typeof__(v95),
                                        PSEUDO_REGISTER(float, "s0", "=w"));
                  }
                  else {
                    v84 = nn_ui2d_59f160((float*)(v86 + v87),
                                         *(unsigned __int16*)(v86 + 4), v83),
                    v103 = COERCE_AS(__typeof__(v103),
                                     PSEUDO_REGISTER(float, "s0", "=w")),
                    v19 = COERCE_AS(__typeof__(v19),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v25 = COERCE_AS(__typeof__(v25),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v95 = COERCE_AS(__typeof__(v95),
                                    PSEUDO_REGISTER(float, "s0", "=w"));
                  }
                  v85 = v84 + 0x1.0000000000000p-1f;
                  if (v85 < 0x0.0p+0f) {
                    v85 = 0x0.0p+0f;
                  }
                  if (v85 > 0x1.fe00000000000p+7f) {
                    v85 = 0x1.fe00000000000p+7f;
                  }
                  (*(void (**)(float*, _QWORD, _QWORD))(*(_QWORD*)a2 + 56LL))(
                      a2, *(unsigned __int8*)(v86 + 1), (unsigned int)(int)v85),
                      v103 = COERCE_AS(__typeof__(v103),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v19 = COERCE_AS(__typeof__(v19),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v25 = COERCE_AS(__typeof__(v25),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v84 = COERCE_AS(__typeof__(v84),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v95 = COERCE_AS(__typeof__(v95),
                                      PSEUDO_REGISTER(float, "s0", "=w"));
                  ++v82;
                } while (v82 < *(unsigned __int8*)(v11 + 4));
              }
            }
            else if (v12 == 1230392390 && *(_BYTE*)(v11 + 4) != 0) {
              v28 = 0;
              v29 = *(float*)(a1 + 32);
              do {
                v32 = v11 + *(unsigned int*)(v13 + 4 * v28);
                v33 = *(unsigned __int16*)(v32 + 4);
                v34 = (float*)(v32 + *(unsigned int*)(v32 + 8));
                v35 = v33 - 1;
                if (v33 == 1 || v29 <= *v34) {
                  v30 = v34 + 1;
                }
                else {
                  v36 = &v34[2 * v35];
                  if (v29 >= *v36) {
                    v30 = v36 + 1;
                  }
                  else {
                    if ((unsigned int)(v33 - 3) > 0xFFFFFFFD) {
                      v37 = 0;
                    }
                    else {
                      LODWORD(v37) = 0;
                      do {
                        while (1) {
                          v39 = (v35 + (int)v37) / 2;
                          if (v29 >= v34[2 * v39]) {
                            break;
                          }
                          v35 = (v35 + (int)v37) / 2;
                          v40 = v39 - 1;
                          if ((_DWORD)v37 == v35 || (_DWORD)v37 == v40) {
                            goto LABEL_56;
                          }
                        }
                        LODWORD(v37) = (v35 + (int)v37) / 2;
                      } while (v39 != v35 && v39 != v35 - 1);
                    LABEL_56:
                      v37 = (int)v37;
                    }
                    v42 = &v34[2 * v35];
                    v30 = &v34[2 * v37 + 1];
                    v44 = *v42;
                    v43 = v42 + 1;
                    if (vabds_f32(v29, v44) < 0x1.0624de0000000p-10f) {
                      v30 = v43;
                    }
                  }
                }
                ++v28;
                v5 = *(unsigned __int16*)v30 == 0;
                v31 = (_BYTE)a2[22] & 0xFE;
                if (!v5) {
                  ++v31;
                }
                *((_BYTE*)a2 + 88) = v31;
              } while (v28 < *(unsigned __int8*)(v11 + 4));
            }
            goto LABEL_10;
          }
          if (v12 != 1095586630) {
            if (v12 == 1095781446 && *(_BYTE*)(v11 + 4) != 0) {
              v23 = 0;
              v24 = *(float*)(a1 + 32);
              do {
                v26 = v11 + *(unsigned int*)(v13 + 4 * v23);
                v27 = *(unsigned int*)(v26 + 8);
                if (*(_BYTE*)(v26 + 2) == 3) {
                  nn_ui2d_59f2e0((_WORD*)(v26 + v27), v24),
                      v103 = COERCE_AS(__typeof__(v103),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v19 = COERCE_AS(__typeof__(v19),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v25 = COERCE_AS(__typeof__(v25),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v84 = COERCE_AS(__typeof__(v84),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v95 = COERCE_AS(__typeof__(v95),
                                      PSEUDO_REGISTER(float, "s0", "=w"));
                }
                else {
                  v25 = nn_ui2d_59f160((float*)(v26 + v27),
                                       *(unsigned __int16*)(v26 + 4), v24),
                  v103 = COERCE_AS(__typeof__(v103),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v19 = COERCE_AS(__typeof__(v19),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v84 = COERCE_AS(__typeof__(v84),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v95 = COERCE_AS(__typeof__(v95),
                                  PSEUDO_REGISTER(float, "s0", "=w"));
                }
                ++v23;
                v7[*(unsigned __int8*)(v26 + 1)] = v25;
                *((_BYTE*)a2 + 88) |= 0x10u;
              } while (v23 < *(unsigned __int8*)(v11 + 4));
            }
            goto LABEL_10;
          }
          v52 = *(_BYTE*)(v11 + 4);
          if (v52 != 0) {
            v53 = 0;
            v111 = a3 + *(unsigned int*)(v108 + 4 * v8);
            v54 = *(float*)(a1 + 32);
            while (1) {
              v55 = v11 + *(unsigned int*)(v13 + 4 * v53);
              v56 = (_WORD*)(v55 + *(unsigned int*)(v55 + 8));
              v57 = (unsigned __int16)*v56;
              if (*v56 != 0) {
                break;
              }
            LABEL_72:
              v11 = v111;
              if (++v53 >= (unsigned __int64)v52) {
                goto LABEL_10;
              }
            }
            v58 = 0;
            while (2) {
              v59 = (float*)((char*)v56 + *(unsigned int*)&v56[2 * v58 + 2]);
              v60 = v59[4];
              if (v54 >= v60 && (float)(v60 + 0x1.99999a0000000p-4f) >= v54) {
                v62 = *((_QWORD*)v59 + 1);
                if (*(_QWORD*)v62 != 0 || *(_QWORD*)(v62 + 8) != 0 ||
                    *(_QWORD*)(v62 + 16) != 0) {
                  if (strcmp_alt1(*(const char**)v62, "body") != 0) {
                    if ((atomic_load_explicit(v9, memory_order_acquire) & 1) ==
                            0 &&
                        __cxa_guard_acquire_alt1((__int64)v9) != 0) {
                      *v10 =
                          (__int64)nn_ui2d_Pane_GetRuntimeTypeInfoStatic_alt1(),
                      v103 = COERCE_AS(__typeof__(v103),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v19 = COERCE_AS(__typeof__(v19),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v25 = COERCE_AS(__typeof__(v25),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v84 = COERCE_AS(__typeof__(v84),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v95 = COERCE_AS(__typeof__(v95),
                                      PSEUDO_REGISTER(float, "s0", "=w"));
                      __cxa_guard_release_alt1((__int64)v9),
                          v103 = COERCE_AS(__typeof__(v103),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                          v19 = COERCE_AS(__typeof__(v19),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v25 = COERCE_AS(__typeof__(v25),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v84 = COERCE_AS(__typeof__(v84),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v95 = COERCE_AS(__typeof__(v95),
                                          PSEUDO_REGISTER(float, "s0", "=w"));
                    }
                    v63 = (__int64*)(*(__int64 (**)(float*))(*(_QWORD*)a2 +
                                                             16LL))(a2),
                    v103 = COERCE_AS(__typeof__(v103),
                                     PSEUDO_REGISTER(float, "s0", "=w")),
                    v19 = COERCE_AS(__typeof__(v19),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v25 = COERCE_AS(__typeof__(v25),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v84 = COERCE_AS(__typeof__(v84),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v95 = COERCE_AS(__typeof__(v95),
                                    PSEUDO_REGISTER(float, "s0", "=w"));
                    if (v63 != v10) {
                      do {
                        v63 = (__int64*)*v63;
                      } while (v63 != v10 && v63 != nullptr);
                    }
                    v65 = LayoutEx_58d5b0_alt1(
                        *(_QWORD*)(*((_QWORD*)a2 + 29) + 24LL), 19),
                    v103 = COERCE_AS(__typeof__(v103),
                                     PSEUDO_REGISTER(float, "s0", "=w")),
                    v19 = COERCE_AS(__typeof__(v19),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v25 = COERCE_AS(__typeof__(v25),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v84 = COERCE_AS(__typeof__(v84),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v95 = COERCE_AS(__typeof__(v95),
                                    PSEUDO_REGISTER(float, "s0", "=w"));
                    if (v65 != 0) {
                      goto LABEL_92;
                    }
                  }
                  else if (a2 != nullptr) {
                    v77 = (__int64)a2;
                    while (1) {
                      if (strcmp_alt1((const char*)(v77 + 176), "RootPane") ==
                          0) {
                        v78 = LayoutEx_58d5b0_alt1(v77, 19),
                        v103 = COERCE_AS(__typeof__(v103),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v19 = COERCE_AS(__typeof__(v19),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v25 = COERCE_AS(__typeof__(v25),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v84 = COERCE_AS(__typeof__(v84),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v95 = COERCE_AS(__typeof__(v95),
                                        PSEUDO_REGISTER(float, "s0", "=w"));
                        if (v78 != 0 && *(_QWORD*)(v78 + 8) != 0) {
                          break;
                        }
                      }
                      if ((atomic_load_explicit(v9, memory_order_acquire) &
                           1) == 0 &&
                          __cxa_guard_acquire_alt1((__int64)v9) != 0) {
                        *v10 = (__int64)
                            nn_ui2d_Pane_GetRuntimeTypeInfoStatic_alt1(),
                        v103 = COERCE_AS(__typeof__(v103),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v19 = COERCE_AS(__typeof__(v19),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v25 = COERCE_AS(__typeof__(v25),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v84 = COERCE_AS(__typeof__(v84),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v95 = COERCE_AS(__typeof__(v95),
                                        PSEUDO_REGISTER(float, "s0", "=w"));
                        __cxa_guard_release_alt1((__int64)v9),
                            v103 =
                                COERCE_AS(__typeof__(v103),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                            v19 = COERCE_AS(__typeof__(v19),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v25 = COERCE_AS(__typeof__(v25),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v84 = COERCE_AS(__typeof__(v84),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v95 = COERCE_AS(__typeof__(v95),
                                            PSEUDO_REGISTER(float, "s0", "=w"));
                      }
                      v79 = (__int64*)(*(__int64 (**)(__int64))(*(_QWORD*)v77 +
                                                                16LL))(v77),
                      v103 = COERCE_AS(__typeof__(v103),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v19 = COERCE_AS(__typeof__(v19),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v25 = COERCE_AS(__typeof__(v25),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v84 = COERCE_AS(__typeof__(v84),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v95 = COERCE_AS(__typeof__(v95),
                                      PSEUDO_REGISTER(float, "s0", "=w"));
                      if (v79 == v10) {
                        goto LABEL_111;
                      }
                      do {
                        v79 = (__int64*)*v79;
                      } while (v79 != v10 && v79 != nullptr);
                      if (v79 != nullptr) {
                      LABEL_111:
                        v81 = LayoutEx_58d5b0_alt1(
                            *(_QWORD*)(*(_QWORD*)(v77 + 232) + 24LL), 19),
                        v103 = COERCE_AS(__typeof__(v103),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v19 = COERCE_AS(__typeof__(v19),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v25 = COERCE_AS(__typeof__(v25),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v84 = COERCE_AS(__typeof__(v84),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v95 = COERCE_AS(__typeof__(v95),
                                        PSEUDO_REGISTER(float, "s0", "=w"));
                        if (v81 != 0 && *(_QWORD*)(v81 + 8) != 0) {
                          break;
                        }
                      }
                      v77 = *(_QWORD*)(v77 + 24);
                      if (v77 == 0) {
                        goto LABEL_75;
                      }
                    }
                    v65 = LayoutEx_58d5b0_alt1(v77, 19),
                    v103 = COERCE_AS(__typeof__(v103),
                                     PSEUDO_REGISTER(float, "s0", "=w")),
                    v19 = COERCE_AS(__typeof__(v19),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v25 = COERCE_AS(__typeof__(v25),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v84 = COERCE_AS(__typeof__(v84),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v95 = COERCE_AS(__typeof__(v95),
                                    PSEUDO_REGISTER(float, "s0", "=w"));
                    if (v65 != 0) {
                    LABEL_92:
                      v66 = *(_QWORD*)(v65 + 8);
                      if (v66 != 0) {
                        v67 = *(unsigned __int8*)v59 - 16;
                        if (v67 >= 3) {
                          nn_detail_UnexpectedDefaultImpl_alt1(),
                              v103 =
                                  COERCE_AS(__typeof__(v103),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                              v19 =
                                  COERCE_AS(__typeof__(v19),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                              v25 =
                                  COERCE_AS(__typeof__(v25),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                              v84 =
                                  COERCE_AS(__typeof__(v84),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                              v95 =
                                  COERCE_AS(__typeof__(v95),
                                            PSEUDO_REGISTER(float, "s0", "=w"));
                          __udf(0);
                        }
                        v68 = *(__int64***)(v66 + 152);
                        if (v68 != (__int64**)(v66 + 144)) {
                          v69 = *((__int64**)v59 + 1);
                          v70 = v68[1];
                          v72 = (__int64*)v69[1];
                          v71 = (__int64*)v69[2];
                          v73 = (__int64*)*v69;
                          v74 = (__int64*)*v70;
                          (*v68)[1] = (__int64)v70;
                          *v70 = (__int64)*v68;
                          v74[1] = (__int64)v68;
                          *v68 = v74;
                          *((_DWORD*)v68 + 4) = (unsigned __int8)v67 | 8;
                          v68[3] = v73;
                          v68[4] = v72;
                          v68[5] = v71;
                          *((_DWORD*)v68 + 12) = 0;
                          v76 = *(__int64**)(v66 + 128);
                          v75 = v66 + 128;
                          *v68 = v76;
                          v74[1] = v75;
                          *(_QWORD*)(*(_QWORD*)v75 + 8LL) = v68;
                          *(_QWORD*)v75 = v74;
                        }
                      }
                    }
                  }
                }
              }
            LABEL_75:
              if (++v58 == v57) {
                v7 = v109;
                v13 = v112;
                v52 = *(_BYTE*)(v111 + 4);
                goto LABEL_72;
              }
              continue;
            }
          }
        }
        else {
          if (v12 <= 1397771333) {
            if (v12 == 1314344006) {
              if (*(_BYTE*)(v11 + 4) != 0) {
                v96 = 0;
                v97 = *(float*)(a1 + 32);
                do {
                  v98 = v11 + *(unsigned int*)(v13 + 4 * v96);
                  v99 =
                      nn_ui2d_59f160((float*)(v98 + *(unsigned int*)(v98 + 8)),
                                     *(unsigned __int16*)(v98 + 4), v97),
                  v103 = COERCE_AS(__typeof__(v103),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v19 = COERCE_AS(__typeof__(v19),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v25 = COERCE_AS(__typeof__(v25),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v84 = COERCE_AS(__typeof__(v84),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v95 = COERCE_AS(__typeof__(v95),
                                  PSEUDO_REGISTER(float, "s0", "=w"));
                  v100 = *(unsigned __int8*)(v98 + 1);
                  if (v100 <= 3) {
                    *(_WORD*)((char*)a2 + GameData_1b01688[v100]) =
                        (int)v99 & ~(unsigned __int16)((int)v99 >> 31);
                  }
                  ++v96;
                } while (v96 < *(unsigned __int8*)(v11 + 4));
              }
            }
            else if (v12 == 1396984902 && *(_BYTE*)(v11 + 4) != 0) {
              v45 = 0;
              v46 = *(float*)(a1 + 32);
              do {
                v47 = v11 + *(unsigned int*)(v13 + 4 * v45);
                v48 = nn_ui2d_59f160((float*)(v47 + *(unsigned int*)(v47 + 8)),
                                     *(unsigned __int16*)(v47 + 4), v46),
                v103 = COERCE_AS(__typeof__(v103),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v19 = COERCE_AS(__typeof__(v19),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v25 = COERCE_AS(__typeof__(v25),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v84 = COERCE_AS(__typeof__(v84),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v95 = COERCE_AS(__typeof__(v95),
                                PSEUDO_REGISTER(float, "s0", "=w"));
                v49 = *(unsigned __int8*)(v47 + 1);
                v50 = v48;
                v51 = LayoutEx_58d820_alt1((__int64)a2, 4),
                v103 = COERCE_AS(__typeof__(v103),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v19 = COERCE_AS(__typeof__(v19),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v25 = COERCE_AS(__typeof__(v25),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v84 = COERCE_AS(__typeof__(v84),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v95 = COERCE_AS(__typeof__(v95),
                                PSEUDO_REGISTER(float, "s0", "=w"));
                if (v51 != 0) {
                  *(float*)(v51 + 4 * v49 + 32) = v50;
                }
                ++v45;
              } while (v45 < *(unsigned __int8*)(v11 + 4));
            }
            goto LABEL_10;
          }
          if (v12 == 1397771334) {
            if (*(_BYTE*)(v11 + 4) == 0) {
              goto LABEL_10;
            }
            v88 = 0;
            v89 = *(float*)(a1 + 32);
            while (2) {
              v90 = v11 + *(unsigned int*)(v13 + 4 * v88);
              v91 = *(unsigned int*)(v90 + 8);
              if (*(_BYTE*)(v90 + 2) == 3) {
                LayoutEx_58d5b0_alt1((__int64)a2, 6),
                    v103 = COERCE_AS(__typeof__(v103),
                                     PSEUDO_REGISTER(float, "s0", "=w")),
                    v19 = COERCE_AS(__typeof__(v19),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v25 = COERCE_AS(__typeof__(v25),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v84 = COERCE_AS(__typeof__(v84),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v95 = COERCE_AS(__typeof__(v95),
                                    PSEUDO_REGISTER(float, "s0", "=w"));
                nn_ui2d_59f2e0((_WORD*)(v90 + v91), v89),
                    v103 = COERCE_AS(__typeof__(v103),
                                     PSEUDO_REGISTER(float, "s0", "=w")),
                    v19 = COERCE_AS(__typeof__(v19),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v25 = COERCE_AS(__typeof__(v25),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v84 = COERCE_AS(__typeof__(v84),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v95 = COERCE_AS(__typeof__(v95),
                                    PSEUDO_REGISTER(float, "s0", "=w"));
                v13 = v11 + 8;
                v92 = v95;
                v93 = *(unsigned __int8*)(v90 + 1);
                v94 = LayoutEx_58d820_alt1((__int64)a2, 6),
                v103 = COERCE_AS(__typeof__(v103),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v19 = COERCE_AS(__typeof__(v19),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v25 = COERCE_AS(__typeof__(v25),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v84 = COERCE_AS(__typeof__(v84),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v95 = COERCE_AS(__typeof__(v95),
                                PSEUDO_REGISTER(float, "s0", "=w"));
                if (v94 != 0) {
                LABEL_137:
                  *(float*)(v94 + 4 * v93 + 28) = v92;
                }
              }
              else {
                v92 = nn_ui2d_59f160((float*)(v90 + v91),
                                     *(unsigned __int16*)(v90 + 4), v89),
                v103 = COERCE_AS(__typeof__(v103),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v19 = COERCE_AS(__typeof__(v19),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v25 = COERCE_AS(__typeof__(v25),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v84 = COERCE_AS(__typeof__(v84),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v95 = COERCE_AS(__typeof__(v95),
                                PSEUDO_REGISTER(float, "s0", "=w"));
                v93 = *(unsigned __int8*)(v90 + 1);
                v94 = LayoutEx_58d820_alt1((__int64)a2, 6),
                v103 = COERCE_AS(__typeof__(v103),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v19 = COERCE_AS(__typeof__(v19),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v25 = COERCE_AS(__typeof__(v25),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v84 = COERCE_AS(__typeof__(v84),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v95 = COERCE_AS(__typeof__(v95),
                                PSEUDO_REGISTER(float, "s0", "=w"));
                if (v94 != 0) {
                  goto LABEL_137;
                }
              }
              if (++v88 >= (unsigned __int64)*(unsigned __int8*)(v11 + 4)) {
                goto LABEL_10;
              }
              continue;
            }
          }
          if (v12 == 1413696582) {
            if (*(_BYTE*)(v11 + 4) != 0) {
              v101 = 0;
              v102 = *(float*)(a1 + 32);
              do {
                v104 = v11 + *(unsigned int*)(v13 + 4 * v101);
                v105 = *(unsigned int*)(v104 + 8);
                if (*(_BYTE*)(v104 + 2) == 3) {
                  TextBox_59d920_alt1((__int64)a2,
                                      *(unsigned __int8*)(v104 + 1)),
                      v103 = COERCE_AS(__typeof__(v103),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v19 = COERCE_AS(__typeof__(v19),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v25 = COERCE_AS(__typeof__(v25),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v84 = COERCE_AS(__typeof__(v84),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v95 = COERCE_AS(__typeof__(v95),
                                      PSEUDO_REGISTER(float, "s0", "=w"));
                  nn_ui2d_59f2e0((_WORD*)(v104 + v105), v102),
                      v103 = COERCE_AS(__typeof__(v103),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v19 = COERCE_AS(__typeof__(v19),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v25 = COERCE_AS(__typeof__(v25),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v84 = COERCE_AS(__typeof__(v84),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v95 = COERCE_AS(__typeof__(v95),
                                      PSEUDO_REGISTER(float, "s0", "=w"));
                }
                else {
                  v103 = nn_ui2d_59f160((float*)(v104 + v105),
                                        *(unsigned __int16*)(v104 + 4), v102),
                  v19 = COERCE_AS(__typeof__(v19),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v25 = COERCE_AS(__typeof__(v25),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v84 = COERCE_AS(__typeof__(v84),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v95 = COERCE_AS(__typeof__(v95),
                                  PSEUDO_REGISTER(float, "s0", "=w"));
                }
                TextBox_59d8e0_alt1((__int64)a2, *(unsigned __int8*)(v104 + 1),
                                    v103),
                    v103 = COERCE_AS(__typeof__(v103),
                                     PSEUDO_REGISTER(float, "s0", "=w")),
                    v19 = COERCE_AS(__typeof__(v19),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v25 = COERCE_AS(__typeof__(v25),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v84 = COERCE_AS(__typeof__(v84),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v95 = COERCE_AS(__typeof__(v95),
                                    PSEUDO_REGISTER(float, "s0", "=w"));
                ++v101;
              } while (v101 < *(unsigned __int8*)(v11 + 4));
            }
          }
          else if (v12 == 1414351942 && *(_BYTE*)(v11 + 4) != 0) {
            v14 = 0;
            v15 = *(float*)(a1 + 32);
            while (1) {
              v16 = v11 + *(unsigned int*)(v13 + 4 * v14);
              v17 = *(unsigned int*)(v16 + 8);
              if (*(_BYTE*)(v16 + 2) == 3) {
                break;
              }
              v22 = nn_ui2d_59f160((float*)(v16 + v17),
                                   *(unsigned __int16*)(v16 + 4), v15),
              v103 = COERCE_AS(__typeof__(v103),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v19 = COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v25 = COERCE_AS(__typeof__(v25),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v84 = COERCE_AS(__typeof__(v84),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v95 = COERCE_AS(__typeof__(v95),
                              PSEUDO_REGISTER(float, "s0", "=w"));
              v18 = *(unsigned __int8*)(v16 + 1);
              v20 = v22;
              v21 = LayoutEx_58d820_alt1((__int64)a2, 3),
              v103 = COERCE_AS(__typeof__(v103),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v19 = COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v25 = COERCE_AS(__typeof__(v25),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v84 = COERCE_AS(__typeof__(v84),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v95 = COERCE_AS(__typeof__(v95),
                              PSEUDO_REGISTER(float, "s0", "=w"));
              if (v21 != 0) {
                goto LABEL_23;
              }
            LABEL_18:
              if (++v14 >= (unsigned __int64)*(unsigned __int8*)(v11 + 4)) {
                goto LABEL_10;
              }
            }
            LayoutEx_58d5b0_alt1((__int64)a2, 3),
                v103 = COERCE_AS(__typeof__(v103),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v19 = COERCE_AS(__typeof__(v19),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v25 = COERCE_AS(__typeof__(v25),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v84 = COERCE_AS(__typeof__(v84),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v95 = COERCE_AS(__typeof__(v95),
                                PSEUDO_REGISTER(float, "s0", "=w"));
            v13 = v11 + 8;
            nn_ui2d_59f2e0((_WORD*)(v16 + v17), v15),
                v103 = COERCE_AS(__typeof__(v103),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v19 = COERCE_AS(__typeof__(v19),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v25 = COERCE_AS(__typeof__(v25),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v84 = COERCE_AS(__typeof__(v84),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v95 = COERCE_AS(__typeof__(v95),
                                PSEUDO_REGISTER(float, "s0", "=w"));
            v18 = *(unsigned __int8*)(v16 + 1);
            v20 = v19;
            v21 = LayoutEx_58d820_alt1((__int64)a2, 3),
            v103 =
                COERCE_AS(__typeof__(v103), PSEUDO_REGISTER(float, "s0", "=w")),
            v19 =
                COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s0", "=w")),
            v25 =
                COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(float, "s0", "=w")),
            v84 =
                COERCE_AS(__typeof__(v84), PSEUDO_REGISTER(float, "s0", "=w")),
            v95 =
                COERCE_AS(__typeof__(v95), PSEUDO_REGISTER(float, "s0", "=w"));
            if (v21 == 0) {
              goto LABEL_18;
            }
          LABEL_23:
            *(float*)(v21 + 4 * v18 + 24) = v20;
            goto LABEL_18;
          }
        }
      LABEL_10:
        a3 = v107;
        v8 = v110 + 1;
      } while (v110 + 1 < (unsigned __int64)*(unsigned __int8*)(v107 + 28));
    }
  }
  else {
    v6 = 32;
    if (*(_BYTE*)(a3 + 28) != 0) {
      goto LABEL_9;
    }
  }
}

void AnimTransformBasic_570120(__int64 a1, __int64 a2, __int64 a3)
{
  int v3;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  unsigned __int64 v11;
  float v12;
  __int64 v13;
  float v14;
  float* v15;
  int v16;
  unsigned __int64 v17;
  float v18;
  unsigned __int8* v19;
  float v20;
  unsigned int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  unsigned __int64 v32;
  float v33;
  __int64 v34;
  __int64 v35;
  float v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  float v39;
  float v40;
  unsigned __int8* v41;
  __int64 v42;
  unsigned __int64 v43;
  float v44;
  unsigned __int8* v45;
  float v46;
  unsigned int v47;
  unsigned __int64 v48;
  float v49;
  __int64 v50;
  unsigned __int8* v51;
  int v52;
  float* v53;
  int v54;
  float* v55;
  __int64 v56;
  int v58;
  int v59;
  float* v61;
  __int64 v62;
  float* v63;
  float* v64;
  float v65;
  __int64 v66;
  float v67;
  __int64 v68;
  __int64 v69;
  int v70;
  float v71;
  unsigned int v72;
  unsigned int v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  unsigned __int64 v77;
  float v78;
  __int64 v79;
  float v80;
  unsigned int v81;
  int v82;
  int v83;
  int v84;
  __int64 v85;
  __int64 v87;
  __int64 v88;

  v3 = *(unsigned __int8*)(a3 + 29);
  if (v3 == 4 || v3 == 2) {
    v6 = *(unsigned int*)(a3 + 32);
    if (*(_BYTE*)(a3 + 28) != 0) {
      goto LABEL_9;
    }
  }
  else {
    v6 = 32;
    if (*(_BYTE*)(a3 + 28) != 0) {
    LABEL_9:
      v7 = 0;
      v87 = a3 + v6;
      v88 = a3;
      while (1) {
        v8 = a3 + *(unsigned int*)(v87 + 4 * v7);
        v10 = v8 + 8;
        v9 = *(_DWORD*)v8;
        if (*(int*)v8 > 1347701829) {
          if (v9 > 1397115973) {
            if (v9 == 1397115974) {
              if (*(_BYTE*)(v8 + 4) != 0) {
                v77 = 0;
                v78 = *(float*)(a1 + 32);
                do {
                  v79 = v8 + *(unsigned int*)(v10 + 4 * v77);
                  v80 = GameRoutine_59f160(v79 + *(unsigned int*)(v79 + 8),
                                           *(unsigned __int16*)(v79 + 4), v78) +
                        0.5f;
                  v81 = *(_DWORD*)(a2 + 16);
                  ++v77;
                  if (v80 < 0.0f) {
                    v80 = 0.0f;
                  }
                  v82 = (v81 >> 6) & 8;
                  v83 = ((int)(v81 << 19) >> 31) & 0xC;
                  v84 = ((v81 >> 8) & 0xC) + ((v81 >> 4) & 0x1C);
                  v85 = 20 * (((v81 >> 13) & 3) + ((v81 >> 2) & 3));
                  if (v80 > 255.0f) {
                    v80 = 255.0f;
                  }
                  *(_BYTE*)(*(_QWORD*)(a2 + 24) + v85 +
                            ((16 * (*(_DWORD*)(a2 + 16) & 3) +
                              (*(_DWORD*)(a2 + 16) & 0x30)) |
                             (unsigned int)v82) +
                            v84 + v83 + *(unsigned __int8*)(v79 + 1)) =
                      (int)v80;
                } while (v77 < *(unsigned __int8*)(v8 + 4));
              }
            }
            else if (v9 == 1398033478 && *(_BYTE*)(v8 + 4) != 0) {
              v38 = 0;
              v39 = *(float*)(a1 + 32);
              do {
                v41 = (unsigned __int8*)(v8 + *(unsigned int*)(v10 + 4 * v38));
                v42 = *((unsigned int*)v41 + 2);
                if (v41[2] == 3) {
                  GameRoutine_59f2e0(
                      &v41[v42], v39,
                      *(float*)(*(_QWORD*)(a2 + 24) +
                                16LL * (*(_DWORD*)(a2 + 16) & 3) + 20LL * *v41 +
                                4LL * v41[1]));
                }
                else {
                  v40 = GameRoutine_59f160(&v41[v42],
                                           *((unsigned __int16*)v41 + 2), v39);
                }
                ++v38;
                *(float*)(*(_QWORD*)(a2 + 24) +
                          16LL * (*(_DWORD*)(a2 + 16) & 3) + 20LL * *v41 +
                          4LL * v41[1]) = v40;
              } while (v38 < *(unsigned __int8*)(v8 + 4));
            }
          }
          else if (v9 == 1347701830) {
            if (*(_BYTE*)(v8 + 4) != 0) {
              v48 = 0;
              v49 = *(float*)(a1 + 32);
              v50 = *(_QWORD*)(a1 + 40);
              do {
                v51 = (unsigned __int8*)(v8 + *(unsigned int*)(v10 + 4 * v48));
                v52 = *((unsigned __int16*)v51 + 2);
                v53 = (float*)&v51[*((unsigned int*)v51 + 2)];
                v54 = v52 - 1;
                if (v52 == 1 || v49 <= *v53) {
                  v61 = v53 + 1;
                }
                else {
                  v55 = &v53[2 * v54];
                  if (v49 >= *v55) {
                    v61 = v55 + 1;
                  }
                  else {
                    if ((unsigned int)(v52 - 3) > 0xFFFFFFFD) {
                      v56 = 0;
                    }
                    else {
                      LODWORD(v56) = 0;
                      do {
                        while (1) {
                          v58 = (v54 + (int)v56) / 2;
                          if (v49 >= v53[2 * v58]) {
                            break;
                          }
                          v54 = (v54 + (int)v56) / 2;
                          v59 = v58 - 1;
                          if ((_DWORD)v56 == v54 || (_DWORD)v56 == v59) {
                            goto LABEL_69;
                          }
                        }
                        LODWORD(v56) = (v54 + (int)v56) / 2;
                      } while (v58 != v54 && v58 != v54 - 1);
                    LABEL_69:
                      v56 = (int)v56;
                    }
                    v63 = &v53[2 * v54];
                    v61 = &v53[2 * v56 + 1];
                    v65 = *v63;
                    v64 = v63 + 1;
                    if (vabds_f32(v49, v65) < 0.001f) {
                      v61 = v64;
                    }
                  }
                }
                v62 = *(unsigned __int16*)v61;
                if (((*(__int64 (**)(_QWORD))(**(_QWORD**)(v50 + 8 * v62) +
                                              48LL))(
                         *(_QWORD*)(v50 + 8 * v62)) &
                     1) != 0) {
                  *(_QWORD*)(*(_QWORD*)(a2 + 24) + 16LL * *v51 + 8) =
                      *(_QWORD*)(v50 + 8 * v62);
                }
                ++v48;
              } while (v48 < *(unsigned __int8*)(v8 + 4));
            }
          }
          else if (v9 == 1380078662 && *(_BYTE*)(v8 + 4) != 0) {
            v17 = 0;
            v18 = *(float*)(a1 + 32);
            do {
              v19 = (unsigned __int8*)(v8 + *(unsigned int*)(v10 + 4 * v17));
              v20 = GameRoutine_59f160(&v19[*((unsigned int*)v19 + 2)],
                                       *((unsigned __int16*)v19 + 2), v18);
              v21 = *(_DWORD*)(a2 + 16);
              ++v17;
              v22 = (v21 >> 6) & 7;
              v23 = (v21 >> 13) & 0x60;
              v24 = ((int)(v21 << 19) >> 31) & 0xC;
              v25 = ((int)(v21 << 15) >> 31) & 0x1C;
              v26 = ((int)(v21 << 14) >> 31) & 0x74;
              v27 = (v21 >> 12) & 8;
              v28 = ((v21 >> 8) & 0xC) + ((v21 >> 4) & 0x1C);
              v29 = (v21 >> 12) & 0x10;
              v30 = 5 * (((v21 >> 13) & 3) + ((v21 >> 2) & 3));
              if ((v21 & 0x300000) != 0) {
                v31 = 16;
              }
              else {
                v31 = 0;
              }
              *(float*)(*(_QWORD*)(a2 + 24) + (unsigned int)(4 * v30) +
                        ((16 * (*(_DWORD*)(a2 + 16) & 3) +
                          (*(_DWORD*)(a2 + 16) & 0x30)) |
                         (*(_DWORD*)(a2 + 16) >> 6) & 8u) +
                        v28 + v27 + v23 + v24 + v25 + v29 * v22 + v26 + v31 +
                        88LL * *v19 + 4LL * v19[1]) = v20;
            } while (v17 < *(unsigned __int8*)(v8 + 4));
          }
          goto LABEL_10;
        }
        if (v9 <= 1129139269) {
          if (v9 == 1095194182) {
            if (*(_BYTE*)(v8 + 4) != 0) {
              v43 = 0;
              v44 = *(float*)(a1 + 32);
              do {
                v45 = (unsigned __int8*)(v8 + *(unsigned int*)(v10 + 4 * v43));
                v46 = GameRoutine_59f160(&v45[*((unsigned int*)v45 + 2)],
                                         *((unsigned __int16*)v45 + 2), v44);
                v47 = *(_DWORD*)(a2 + 16);
                ++v43;
                *(float*)(*(_QWORD*)(a2 + 24) +
                          20 * (((v47 >> 13) & 3) + ((v47 >> 2) & 3)) +
                          ((16 * (v47 & 3) + (v47 & 0x30)) | (v47 >> 6) & 8) +
                          ((v47 >> 8) & 0xC) + ((v47 >> 4) & 0x1C) +
                          ((v47 >> 12) & 8) + (((int)(v47 << 19) >> 31) & 0xC) +
                          (((int)(v47 << 15) >> 31) & 0x1C) +
                          ((v47 >> 12) & 0x10) * ((v47 >> 6) & 7) +
                          (((int)(v47 << 14) >> 31) & 0x74) + 32LL * *v45 +
                          4LL * v45[1]) = v46;
              } while (v43 < *(unsigned __int8*)(v8 + 4));
            }
          }
          else if (v9 == 1128352838 && *(_BYTE*)(v8 + 4) != 0) {
            v11 = 0;
            v12 = *(float*)(a1 + 32);
            do {
              v13 = v8 + *(unsigned int*)(v10 + 4 * v11);
              v14 = GameRoutine_59f160(v13 + *(unsigned int*)(v13 + 8),
                                       *(unsigned __int16*)(v13 + 4), v12);
              ++v11;
              if (v14 < 0.0f) {
                v14 = 0.0f;
              }
              if (v14 > 1.0f) {
                v14 = 1.0f;
              }
              v15 =
                  (float*)(*(_QWORD*)(a2 + 24) +
                           16 * (*(_DWORD*)(a2 + 16) & 3) +
                           (*(_DWORD*)(a2 + 16) & 0x30u) +
                           20 * (((unsigned __int64)*(unsigned int*)(a2 + 16) >>
                                  2) &
                                 3));
              v16 = *(unsigned __int8*)v15;
              v15[1] = v14;
              *(_DWORD*)v15 = v16;
            } while (v11 < *(unsigned __int8*)(v8 + 4));
          }
          goto LABEL_10;
        }
        if (v9 != 1129139270) {
          if (v9 == 1296649286 && *(_BYTE*)(v8 + 4) != 0) {
            v32 = 0;
            v33 = *(float*)(a1 + 32);
            do {
              v34 = v8 + *(unsigned int*)(v10 + 4 * v32);
              v35 = *(unsigned __int8*)(v34 + 1);
              v36 = GameRoutine_59f160(v34 + *(unsigned int*)(v34 + 8),
                                       *(unsigned __int16*)(v34 + 4), v33);
              v37 = *(unsigned int*)(a2 + 16);
              ++v32;
              *(float*)(*(_QWORD*)(a2 + 24) +
                        ((16 * (v37 & 3) + (v37 & 0x30)) |
                         ((unsigned int)v37 >> 6) & 8) +
                        (((unsigned int)v37 >> 8) & 0xC) +
                        20 * ((v37 >> 2) & 3) + 4 * v35) = v36;
            } while (v32 < *(unsigned __int8*)(v8 + 4));
          }
          goto LABEL_10;
        }
        if (*(_BYTE*)(v8 + 4) != 0) {
          break;
        }
      LABEL_10:
        a3 = v88;
        if (++v7 >= (unsigned __int64)*(unsigned __int8*)(v88 + 28)) {
          return;
        }
      }
      v66 = 0;
      v67 = *(float*)(a1 + 32);
      while (1) {
        v68 = v8 + *(unsigned int*)(v10 + 4 * v66);
        v69 = *(unsigned int*)(v68 + 8);
        if (*(_BYTE*)(v68 + 2) == 3) {
          v70 = GameRoutine_571930(a2, *(unsigned __int8*)(v68 + 1));
          GameRoutine_59f2e0(v68 + v69, v67, (float)v70);
          v72 = *(unsigned __int8*)(v68 + 1);
          v73 = v72 - 28;
          if (v72 > 0x1C) {
            goto LABEL_86;
          }
        }
        else {
          v71 =
              GameRoutine_59f160(v68 + v69, *(unsigned __int16*)(v68 + 4), v67);
          v72 = *(unsigned __int8*)(v68 + 1);
          v73 = v72 - 28;
          if (v72 > 0x1C) {
          LABEL_86:
            if (v73 <= 7) {
              v74 = *(_QWORD*)(a2 + 8);
              v75 = v73 >> 2;
              if ((v72 & 3) > 1) {
                v76 = v74 + 16 * v75;
                if ((v72 & 3) == 2) {
                  *(float*)(v76 + 8) = v71;
                }
                else {
                  *(float*)(v76 + 12) = v71;
                }
              }
              else if ((v72 & 3) != 0) {
                *(float*)(v74 + 16 * v75 + 4) = v71;
              }
              else {
                *(float*)(v74 + 16 * v75) = v71;
              }
            }
            goto LABEL_81;
          }
        }
        GameRoutine_571cd0(a2);
      LABEL_81:
        if (++v66 >= (unsigned __int64)*(unsigned __int8*)(v8 + 4)) {
          goto LABEL_10;
        }
      }
    }
  }
}

void AnimTransformBasic_5709a0(__int64 a1, __int64 a2, __int64 a3)
{
  int v3;
  __int64 v8;
  unsigned int v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  float v13;
  unsigned __int64 v14;
  int v15;
  unsigned __int8* v16;
  __int64 v17;

  v3 = *(unsigned __int8*)(a3 + 29);
  if (v3 == 4 || v3 == 2) {
    v8 = *(unsigned int*)(a3 + 32);
    v9 = *(unsigned __int8*)(a3 + 28);
    if (*(_BYTE*)(a3 + 28) == 0) {
      return;
    }
  }
  else {
    v8 = 32;
    v9 = *(unsigned __int8*)(a3 + 28);
    if (*(_BYTE*)(a3 + 28) == 0) {
      return;
    }
  }
  v10 = a3 + v8;
  v11 = 0;
  do {
    v12 = a3 + *(unsigned int*)(v10 + 4 * v11);
    if (*(_BYTE*)(v12 + 4) != 0) {
      v13 = *(float*)(a1 + 32);
      v14 = 0;
      do {
        v15 = *(unsigned __int8*)(a2 + 10);
        v16 = (unsigned __int8*)(v12 + *(unsigned int*)(v12 + 8 + 4 * v14));
        v17 = *((unsigned int*)v16 + 2);
        if (v15 == 2) {
          *(float*)(a2 + *(unsigned int*)(a2 + 4) + 4LL * *v16) =
              GameRoutine_59f160(&v16[v17], *((unsigned __int16*)v16 + 2), v13);
        }
        else if (v15 == 1) {
          *(_DWORD*)(a2 + *(unsigned int*)(a2 + 4) + 4LL * *v16) =
              (int)GameRoutine_59f160(&v16[v17], *((unsigned __int16*)v16 + 2),
                                      v13);
        }
        ++v14;
      } while (v14 < *(unsigned __int8*)(v12 + 4));
      v9 = *(unsigned __int8*)(a3 + 28);
    }
    ++v11;
  } while (v11 < v9);
}

_QWORD* AnimTransformBasic_570dd0(_QWORD* result)
{
  result[2] = 0;
  result[3] = 0;
  *result = 0;
  result[1] = 0;
  return result;
}

__int64 AnimTransformBasic_570f40(__int64 a1)
{
  __int64 v1;

  v1 = *(_QWORD*)(a1 + 16);
  if (v1 != 0) {
    return *(unsigned __int16*)(v1 + 10);
  }
  else {
    return 0;
  }
}

__int64 AnimTransformBasic_570f60(__int64 a1)
{
  __int64 v1;

  v1 = *(_QWORD*)(a1 + 16);
  if (v1 != 0) {
    return v1 + *(unsigned int*)(v1 + 16);
  }
  else {
    return 0;
  }
}

__int64 AnimTransformBasic_570f80(__int64 a1)
{
  __int64 v1;

  v1 = *(_QWORD*)(a1 + 16);
  if (v1 != 0) {
    return *(_BYTE*)(v1 + 28) & 1;
  }
  else {
    return 0;
  }
}

__int64 AnimTransformBasic_570fa0(__int64 a1)
{
  __int64 v1;

  v1 = *(_QWORD*)(a1 + 24);
  if (v1 != 0) {
    return *(unsigned __int16*)(v1 + 12);
  }
  else {
    return 0;
  }
}

__int64 AnimTransformBasic_570fc0(__int64 a1)
{
  __int64 v1;

  v1 = *(_QWORD*)(a1 + 24);
  if (v1 != 0) {
    return v1 + *(unsigned int*)(v1 + 8);
  }
  else {
    return 0;
  }
}

__int64 AnimTransformBasic_570fe0(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  unsigned int v5;
  int v6;
  _QWORD* v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v13;

  v2 = *(_QWORD*)(a2 + 32);
  v13 = a2 + 24;
  if (v2 == a2 + 24) {
    return 0;
  }
  v3 = *(_QWORD*)(a1 + 8);
  if (v3 == 0) {
    return 0;
  }
  else {
    v5 = 0;
    do {
      if (v3 != 0 && *(_WORD*)(v3 + 14) != 0) {
        v7 = *(_QWORD**)(v2 + 16);
        v8 = 0;
        v6 = 0;
        v9 = v3 + *(unsigned int*)(v3 + 16);
        do {
          if (*(_BYTE*)(v3 + *(unsigned int*)(v9 + 4 * v8) + 29) != 0) {
            v10 = 136;
          }
          else {
            v10 = 120;
          }
          v11 = (*(__int64 (**)(_QWORD*))(*v7 + v10))(v7);
          v3 = *(_QWORD*)(a1 + 8);
          ++v8;
          if (v11 != 0) {
            ++v6;
          }
        } while (v8 < *(unsigned __int16*)(v3 + 14));
      }
      else {
        v6 = 0;
      }
      v2 = *(_QWORD*)(v2 + 8);
      v5 += v6;
    } while (v2 != v13);
  }
  return v5;
}

__int64 AnimTransformBasic_571340(__int64 a1, __int64 a2, __int64 a3,
                                  __int64 a4, __int64 a5)
{
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  unsigned __int8 v14;
  unsigned int v15;
  _QWORD* v16;
  unsigned int v17;
  int v18;
  __int64 v19;
  __int64 v20;

  v9 = LayoutEx_57b5c0_alt1(a3);
  (*(void (**)(__int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v9 + 72LL))(v9, a2, a5, *(_QWORD*)(a1 + 8),
                            *(unsigned __int16*)(a1 + 112));
  v10 = *(_QWORD*)(a1 + 32);
  if (v10 != 0) {
    v11 = *(unsigned __int16*)(v9 + 56);
    if ((unsigned int)v11 < *(unsigned __int16*)(v9 + 58)) {
      v12 = *(_QWORD*)(v9 + 48);
      *(_WORD*)(v9 + 56) = v11 + 1;
      v13 = (_QWORD*)(v12 + 16 * v11);
      *v13 = a4;
      v13[1] = v10;
    }
  }
  v14 = (*(__int64 (**)(__int64))(*(_QWORD*)a4 + 80LL))(a4);
  if (v14 >= (unsigned int)*(unsigned __int8*)(a1 + 114)) {
    v15 = *(unsigned __int8*)(a1 + 114);
  }
  else {
    v15 = v14;
  }
  if (v15 != 0) {
    v16 = (_QWORD*)(a1 + 40);
    v17 = 1;
    v18 = 0;
    v19 = 0;
    if (*v16 == 0) {
      goto LABEL_10;
    }
  LABEL_9:
    v20 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a4 + 88LL))(
        a4, (unsigned int)v19);
    if (AnimTransformBasic_56eaa0(v9, v20, v16[v19])) {
    LABEL_10:
      while (v17 < v15) {
        ++v18;
        v19 = v17++;
        if (v16[(unsigned int)v19] != 0) {
          goto LABEL_9;
        }
      }
    }
  }
  return v9;
}

#pragma GCC visibility pop
