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
void AnimTransformBasic_56f760(__int64 a1, float* a2, __int64 a3, __int64 a4,
                               __int64 a5, __int64 a6, __int64 a7, __int64 a8);
__int64 LayoutEx_57b5c0_alt1(__int64) __asm__("LayoutEx_57b5c0");

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
  __int64 v8;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 result;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;

  *(_QWORD*)(a1 + 24) = a4;
  *(_QWORD*)(a1 + 40) = 0;
  v7 = *(unsigned __int16*)(a4 + 12);
  if (*(_WORD*)(a4 + 12) == 0) {
    goto LABEL_6;
  }
  v8 = 8 * v7;
  v12 = GameRoutine_579180(8 * v7);
  if (v12 != 0) {
    v16 = v12;
    memset(v12, 0, v8, v13, v14, v15);
    *(_QWORD*)(a1 + 40) = v16;
    if (*(_WORD*)(a4 + 12) != 0) {
      v17 = 0;
      do {
        *(_QWORD*)(*(_QWORD*)(a1 + 40) + 8 * v17) =
            (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)a3 + 112LL))(
                a3, a2, a4 + 20 + *(unsigned int*)(a4 + 20 + 4 * v17));
        ++v17;
      } while (v17 < *(unsigned __int16*)(a4 + 12));
    }
  LABEL_6:
    v18 = 16LL * a5;
    result = GameRoutine_579180(v18);
    if (a5 == 0) {
      goto LABEL_10;
    }
    goto LABEL_7;
  }
  *(_QWORD*)(a1 + 40) = 0;
  v18 = 16LL * a5;
  result = GameRoutine_579180(v18);
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
  v23 = result;
  result = memset(result, 0, v18, v20, v21, v22);
  *(_QWORD*)(a1 + 48) = v23;

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

void AnimTransformBasic_56f760(__int64 a1, float* a2, __int64 a3, __int64 a4,
                               __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  int v8;
  bool v10;
  __int64 v11;
  float* v12;
  __int64 v13;
  atomic_uchar* v14;
  __int64* v15;
  __int64 v16;
  int v17;
  __int64 v18;
  __int64 v19;
  float v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  float v26;
  float v27;
  __int64 v28;
  float v29;
  unsigned __int64 v30;
  float v31;
  float v32;
  __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  float v36;
  float* v37;
  char v38;
  __int64 v39;
  int v40;
  float* v41;
  int v42;
  float* v43;
  __int64 v44;
  int v46;
  int v47;
  float* v49;
  float* v50;
  float v51;
  unsigned __int64 v52;
  float v53;
  __int64 v54;
  float v55;
  __int64 v56;
  float v57;
  __int64 v58;
  unsigned __int8 v59;
  __int64 v60;
  float v61;
  __int64 v62;
  _WORD* v63;
  __int64 v64;
  __int64 v65;
  float* v66;
  float v67;
  _QWORD* v69;
  __int64* v70;
  __int64 v72;
  __int64 v73;
  unsigned int v74;
  __int64** v75;
  __int64* v76;
  __int64* v77;
  __int64* v78;
  __int64* v79;
  __int64* v80;
  __int64* v81;
  __int64 v82;
  __int64* v83;
  float* v84;
  __int64 v85;
  __int64* v86;
  __int64 v88;
  float v89;
  long double v90;
  long double v91;
  long double v92;
  long double v93;
  float v94;
  long double v95;
  long double v96;
  long double v97;
  long double v98;
  unsigned __int64 v99;
  float v100;
  float v101;
  float v102;
  __int64 v103;
  __int64 v104;
  unsigned __int8 v105;
  __int64 v106;
  float v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  float v112;
  float v113;
  __int64 v114;
  __int64 v115;
  float v116;
  unsigned __int64 v117;
  float v118;
  __int64 v119;
  float v120;
  unsigned __int64 v121;
  unsigned __int64 v122;
  float v123;
  long double v124;
  __int64 v125;
  __int64 v126;
  long double v127;
  __int64 v128;
  __int64 v129;
  __int64 v130;
  __int64 v131;
  float* v132;
  __int64 v133;
  __int64 v134;
  __int64 v135;
  __int64 v136;
  __int64 v137;

  v8 = *(unsigned __int8*)(a3 + 29);
  v129 = a1;
  v10 = v8 == 4 || v8 == 2;
  if (v10) {
    v11 = *(unsigned int*)(a3 + 32);
    if (*(_BYTE*)(a3 + 28) != 0) {
    LABEL_9:
      v12 = a2 + 12;
      v13 = 0;
      v131 = a3 + v11;
      v14 = (atomic_uchar*)GameData_212dfd0;
      v15 = GameData_212dfc8;
      v130 = a3;
      v132 = a2 + 12;
      do {
        v133 = v13;
        v16 = a3 + *(unsigned int*)(v131 + 4 * v13);
        v18 = v16 + 8;
        v17 = *(_DWORD*)v16;
        v135 = v16 + 8;
        if (*(int*)v16 <= 1314344005) {
          if (v17 > 1129729093) {
            if (v17 == 1129729094) {
              if (*(_BYTE*)(v16 + 4) != 0) {
                v99 = 0;
                v100 = *(float*)(v129 + 32);
                do {
                  v103 = v16 + *(unsigned int*)(v18 + 4 * v99);
                  v104 = *(unsigned int*)(v103 + 8);
                  if (*(_BYTE*)(v103 + 2) == 3) {
                    (*(void (**)(float*, _QWORD))(*(_QWORD*)a2 + 48LL))(
                        a2, *(unsigned __int8*)(v103 + 1));
                    GameRoutine_59f2e0(v103 + v104, v100, (float)v105);
                  }
                  else {
                    v101 = GameRoutine_59f160(
                        v103 + v104, *(unsigned __int16*)(v103 + 4), v100);
                  }
                  v102 = v101 + 0.5;
                  if (v102 < 0.0) {
                    v102 = 0.0;
                  }
                  if (v102 > 255.0) {
                    v102 = 255.0;
                  }
                  (*(void (**)(float*, _QWORD, _QWORD))(*(_QWORD*)a2 + 56LL))(
                      a2, *(unsigned __int8*)(v103 + 1),
                      (unsigned int)(int)v102);
                  ++v99;
                } while (v99 < *(unsigned __int8*)(v16 + 4));
              }
            }
            else if (v17 == 1230392390 && *(_BYTE*)(v16 + 4) != 0) {
              v35 = 0;
              v36 = *(float*)(v129 + 32);
              do {
                v39 = v16 + *(unsigned int*)(v18 + 4 * v35);
                v40 = *(unsigned __int16*)(v39 + 4);
                v41 = (float*)(v39 + *(unsigned int*)(v39 + 8));
                v42 = v40 - 1;
                if (v40 == 1 || v36 <= *v41) {
                  v37 = v41 + 1;
                }
                else {
                  v43 = &v41[2 * v42];
                  if (v36 >= *v43) {
                    v37 = v43 + 1;
                  }
                  else {
                    if ((unsigned int)(v40 - 3) > 0xFFFFFFFD) {
                      v44 = 0;
                    }
                    else {
                      LODWORD(v44) = 0;
                      do {
                        while (1) {
                          v46 = (v42 + (int)v44) / 2;
                          if (v36 >= v41[2 * v46]) {
                            break;
                          }
                          v42 = (v42 + (int)v44) / 2;
                          v47 = v46 - 1;
                          if ((_DWORD)v44 == v42 || (_DWORD)v44 == v47) {
                            goto LABEL_56;
                          }
                        }
                        LODWORD(v44) = (v42 + (int)v44) / 2;
                      } while (v46 != v42 && v46 != v42 - 1);
                    LABEL_56:
                      v44 = (int)v44;
                    }
                    v49 = &v41[2 * v42];
                    v37 = &v41[2 * v44 + 1];
                    v51 = *v49;
                    v50 = v49 + 1;
                    if (vabds_f32(v36, v51) < 0.001) {
                      v37 = v50;
                    }
                  }
                }
                ++v35;
                v10 = *(unsigned __int16*)v37 == 0;
                v38 = (_BYTE)a2[22] & 0xFE;
                if (!v10) {
                  ++v38;
                }
                *((_BYTE*)a2 + 88) = v38;
              } while (v35 < *(unsigned __int8*)(v16 + 4));
            }
            goto LABEL_10;
          }
          if (v17 != 1095586630) {
            if (v17 == 1095781446 && *(_BYTE*)(v16 + 4) != 0) {
              v30 = 0;
              v31 = *(float*)(v129 + 32);
              do {
                v33 = v16 + *(unsigned int*)(v18 + 4 * v30);
                v34 = *(unsigned int*)(v33 + 8);
                if (*(_BYTE*)(v33 + 2) == 3) {
                  GameRoutine_59f2e0(v33 + v34, v31,
                                     v12[*(unsigned __int8*)(v33 + 1)]);
                }
                else {
                  v32 = GameRoutine_59f160(v33 + v34,
                                           *(unsigned __int16*)(v33 + 4), v31);
                }
                ++v30;
                v12[*(unsigned __int8*)(v33 + 1)] = v32;
                *((_BYTE*)a2 + 88) |= 0x10u;
              } while (v30 < *(unsigned __int8*)(v16 + 4));
            }
            goto LABEL_10;
          }
          v59 = *(_BYTE*)(v16 + 4);
          if (v59 != 0) {
            v60 = 0;
            v134 = a3 + *(unsigned int*)(v131 + 4 * v13);
            v61 = *(float*)(v129 + 32);
            while (1) {
              v62 = v16 + *(unsigned int*)(v18 + 4 * v60);
              v63 = (_WORD*)(v62 + *(unsigned int*)(v62 + 8));
              v64 = (unsigned __int16)*v63;
              if (*v63 != 0) {
                break;
              }
            LABEL_72:
              v16 = v134;
              if (++v60 >= (unsigned __int64)v59) {
                goto LABEL_10;
              }
            }
            v65 = 0;
            while (2) {
              v66 = (float*)((char*)v63 + *(unsigned int*)&v63[2 * v65 + 2]);
              v67 = v66[4];
              if (v61 >= v67 && (float)(v67 + 0.1) >= v61) {
                v69 = *((_QWORD**)v66 + 1);
                if (*v69 != 0 || v69[1] != 0 || v69[2] != 0) {
                  if ((unsigned int)strcmp(*v69, "body", a3, a4, a5, a6, a7, a8,
                                           v128, v129, v130, v131, v132, v133,
                                           v134, v135, v136, v137) != 0) {
                    if ((atomic_load_explicit(v14, memory_order_acquire) & 1) ==
                            0 &&
                        (unsigned int)__cxa_guard_acquire(v14) != 0) {
                      *v15 = nn_ui2d_Pane_GetRuntimeTypeInfoStatic(
                          v94, v95, v96, v97, v98);
                      __cxa_guard_release(v14);
                    }
                    v70 = (__int64*)(*(__int64 (**)(float*))(*(_QWORD*)a2 +
                                                             16LL))(a2);
                    if (v70 != v15) {
                      do {
                        v70 = (__int64*)*v70;
                      } while (v70 != v15 && v70 != nullptr);
                    }
                    v72 = LayoutEx_58d5b0(
                        *(_QWORD*)(*((_QWORD*)a2 + 29) + 24LL), 19);
                    if (v72 != 0) {
                      goto LABEL_92;
                    }
                  }
                  else if (a2 != nullptr) {
                    v84 = a2;
                    while (1) {
                      if ((unsigned int)strcmp(v84 + 44, "RootPane", a3, a4, a5,
                                               a6, a7, a8, v128, v129, v130,
                                               v131, v132, v133, v134, v135,
                                               v136, v137) == 0) {
                        v85 = LayoutEx_58d5b0(v84, 19);
                        if (v85 != 0 && *(_QWORD*)(v85 + 8) != 0) {
                          break;
                        }
                      }
                      if ((atomic_load_explicit(v14, memory_order_acquire) &
                           1) == 0 &&
                          (unsigned int)__cxa_guard_acquire(v14) != 0) {
                        *v15 = nn_ui2d_Pane_GetRuntimeTypeInfoStatic(
                            v89, v90, v91, v92, v93);
                        __cxa_guard_release(v14);
                      }
                      v86 = (__int64*)(*(__int64 (**)(float*))(*(_QWORD*)v84 +
                                                               16LL))(v84);
                      if (v86 == v15) {
                        goto LABEL_111;
                      }
                      do {
                        v86 = (__int64*)*v86;
                      } while (v86 != v15 && v86 != nullptr);
                      if (v86 != nullptr) {
                      LABEL_111:
                        v88 = LayoutEx_58d5b0(
                            *(_QWORD*)(*((_QWORD*)v84 + 29) + 24LL), 19);
                        if (v88 != 0 && *(_QWORD*)(v88 + 8) != 0) {
                          break;
                        }
                      }
                      v84 = *((float**)v84 + 3);
                      if (v84 == nullptr) {
                        goto LABEL_75;
                      }
                    }
                    v72 = LayoutEx_58d5b0(v84, 19);
                    if (v72 != 0) {
                    LABEL_92:
                      v73 = *(_QWORD*)(v72 + 8);
                      if (v73 != 0) {
                        v74 = *(unsigned __int8*)v66 - 16;
                        if (v74 >= 3) {
                          nn_detail_UnexpectedDefaultImpl(v72);
                          __udf(0);
                        }
                        v75 = *(__int64***)(v73 + 152);
                        if (v75 != (__int64**)(v73 + 144)) {
                          v76 = *((__int64**)v66 + 1);
                          v77 = v75[1];
                          v79 = (__int64*)v76[1];
                          v78 = (__int64*)v76[2];
                          v80 = (__int64*)*v76;
                          v81 = (__int64*)*v77;
                          (*v75)[1] = (__int64)v77;
                          *v77 = (__int64)*v75;
                          v81[1] = (__int64)v75;
                          *v75 = v81;
                          *((_DWORD*)v75 + 4) = (unsigned __int8)v74 | 8;
                          v75[3] = v80;
                          v75[4] = v79;
                          v75[5] = v78;
                          *((_DWORD*)v75 + 12) = 0;
                          v83 = *(__int64**)(v73 + 128);
                          v82 = v73 + 128;
                          *v75 = v83;
                          v81[1] = v82;
                          *(_QWORD*)(*(_QWORD*)v82 + 8LL) = v75;
                          *(_QWORD*)v82 = v81;
                        }
                      }
                    }
                  }
                }
              }
            LABEL_75:
              if (++v65 == v64) {
                v12 = v132;
                v18 = v135;
                v59 = *(_BYTE*)(v134 + 4);
                goto LABEL_72;
              }
              continue;
            }
          }
        }
        else {
          if (v17 <= 1397771333) {
            if (v17 == 1314344006) {
              if (*(_BYTE*)(v16 + 4) != 0) {
                v117 = 0;
                v118 = *(float*)(v129 + 32);
                do {
                  v119 = v16 + *(unsigned int*)(v18 + 4 * v117);
                  v120 =
                      GameRoutine_59f160(v119 + *(unsigned int*)(v119 + 8),
                                         *(unsigned __int16*)(v119 + 4), v118);
                  v121 = *(unsigned __int8*)(v119 + 1);
                  if (v121 <= 3) {
                    *(_WORD*)((char*)a2 + GameData_1b01688[v121]) =
                        (int)v120 & ~(unsigned __int16)((int)v120 >> 31);
                  }
                  ++v117;
                } while (v117 < *(unsigned __int8*)(v16 + 4));
              }
            }
            else if (v17 == 1396984902 && *(_BYTE*)(v16 + 4) != 0) {
              v52 = 0;
              v53 = *(float*)(v129 + 32);
              do {
                v54 = v16 + *(unsigned int*)(v18 + 4 * v52);
                v55 = GameRoutine_59f160(v54 + *(unsigned int*)(v54 + 8),
                                         *(unsigned __int16*)(v54 + 4), v53);
                v56 = *(unsigned __int8*)(v54 + 1);
                v57 = v55;
                v58 = LayoutEx_58d820(a2, 4);
                if (v58 != 0) {
                  *(float*)(v58 + 4 * v56 + 32) = v57;
                }
                ++v52;
              } while (v52 < *(unsigned __int8*)(v16 + 4));
            }
            goto LABEL_10;
          }
          if (v17 == 1397771334) {
            if (*(_BYTE*)(v16 + 4) == 0) {
              goto LABEL_10;
            }
            v106 = 0;
            v107 = *(float*)(v129 + 32);
            while (2) {
              v108 = v16 + *(unsigned int*)(v18 + 4 * v106);
              v109 = *(unsigned int*)(v108 + 8);
              if (*(_BYTE*)(v108 + 2) == 3) {
                v110 = *(unsigned __int8*)(v108 + 1);
                v111 = LayoutEx_58d5b0(a2, 6);
                if (v111 != 0) {
                  v112 = *(float*)(v111 + 4 * v110 + 28);
                }
                else {
                  v112 = 0.0;
                }
                GameRoutine_59f2e0(v108 + v109, v107, v112);
                v18 = v16 + 8;
                v113 = v116;
                v114 = *(unsigned __int8*)(v108 + 1);
                v115 = LayoutEx_58d820(a2, 6);
                if (v115 != 0) {
                LABEL_139:
                  *(float*)(v115 + 4 * v114 + 28) = v113;
                }
              }
              else {
                v113 = GameRoutine_59f160(v108 + v109,
                                          *(unsigned __int16*)(v108 + 4), v107);
                v114 = *(unsigned __int8*)(v108 + 1);
                v115 = LayoutEx_58d820(a2, 6);
                if (v115 != 0) {
                  goto LABEL_139;
                }
              }
              if (++v106 >= (unsigned __int64)*(unsigned __int8*)(v16 + 4)) {
                goto LABEL_10;
              }
              continue;
            }
          }
          if (v17 == 1413696582) {
            if (*(_BYTE*)(v16 + 4) != 0) {
              v122 = 0;
              v123 = *(float*)(v129 + 32);
              do {
                v125 = v16 + *(unsigned int*)(v18 + 4 * v122);
                v126 = *(unsigned int*)(v125 + 8);
                if (*(_BYTE*)(v125 + 2) == 3) {
                  v127 = TextBox_59d920(a2, *(unsigned __int8*)(v125 + 1));
                  GameRoutine_59f2e0(v125 + v126, v123, *(float*)&v127);
                }
                else {
                  *(float*)&v124 = GameRoutine_59f160(
                      v125 + v126, *(unsigned __int16*)(v125 + 4), v123);
                }
                TextBox_59d8e0(a2, *(unsigned __int8*)(v125 + 1), v124);
                ++v122;
              } while (v122 < *(unsigned __int8*)(v16 + 4));
            }
          }
          else if (v17 == 1414351942 && *(_BYTE*)(v16 + 4) != 0) {
            v19 = 0;
            v20 = *(float*)(v129 + 32);
            while (1) {
              v21 = v16 + *(unsigned int*)(v18 + 4 * v19);
              v22 = *(unsigned int*)(v21 + 8);
              if (*(_BYTE*)(v21 + 2) == 3) {
                break;
              }
              v29 = GameRoutine_59f160(v21 + v22, *(unsigned __int16*)(v21 + 4),
                                       v20);
              v25 = *(unsigned __int8*)(v21 + 1);
              v27 = v29;
              v28 = LayoutEx_58d820(a2, 3);
              if (v28 != 0) {
                goto LABEL_23;
              }
            LABEL_18:
              if (++v19 >= (unsigned __int64)*(unsigned __int8*)(v16 + 4)) {
                goto LABEL_10;
              }
            }
            v23 = *(unsigned __int8*)(v21 + 1);
            v24 = LayoutEx_58d5b0(a2, 3) + 4 * v23;
            v18 = v16 + 8;
            GameRoutine_59f2e0(v21 + v22, v20, *(float*)(v24 + 24));
            v25 = *(unsigned __int8*)(v21 + 1);
            v27 = v26;
            v28 = LayoutEx_58d820(a2, 3);
            if (v28 == 0) {
              goto LABEL_18;
            }
          LABEL_23:
            *(float*)(v28 + 4 * v25 + 24) = v27;
            goto LABEL_18;
          }
        }
      LABEL_10:
        a3 = v130;
        v13 = v133 + 1;
      } while (v133 + 1 < (unsigned __int64)*(unsigned __int8*)(v130 + 28));
    }
  }
  else {
    v11 = 32;
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
