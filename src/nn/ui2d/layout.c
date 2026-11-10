#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 AnimTransformBasic_5714e0(_QWORD, _QWORD);
__int64 DrawInfo_5768c0(_QWORD, _QWORD);
__int64 GameRoutine_5768e0(_QWORD);
__int64 GameRoutine_57d4c0(_QWORD);
__int64 GameRoutine_5a0090(void);
__int64 GameRoutine_5fdcb0(_QWORD, _QWORD);
__int64 GameRoutine_5fdce0(_QWORD, _QWORD);
__int64 LayoutEx_578ac0(__int64 result, __int64, __int64);
__int64 LayoutEx_578d30(__int64 result, __int64);
__int64 LayoutEx_57b130();
__int64 LayoutEx_57ca20(void);
__int64 LayoutEx_58d200(void);
__int64 LayoutEx_594190(void);
__int64 LayoutPaneFactory_5814d0(_QWORD, _QWORD);
__int64 LayoutPaneFactory_59fb80(_QWORD, _QWORD);
__int64 Layout_57d2e0(_QWORD, _QWORD);
__int64 Pane_58f850(_QWORD);
__int64 Pane_58f850_alt1(void) __asm__("Pane_58f850");
__int64 VectorGraphicsTexture_5ad600(_QWORD, _QWORD);
__int64 VectorGraphicsTexture_5ad670(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_ui2d_Pane_GetRuntimeTypeInfoStatic(_QWORD, _QWORD);
__int64 qsort(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 strcmp(_QWORD, _QWORD);
extern _UNKNOWN GameData_22416d8;
extern _UNKNOWN* GameData_212dfd0;
extern _UNKNOWN* GameData_2130ea8;
extern _UNKNOWN* GameData_2136118;
extern _UNKNOWN** GameData_2130eb0[2];
extern _UNKNOWN** GameData_2130eb8;
extern __int64 GameData_22416d0;
extern __int64* GameData_212dfc8;
extern __int64* GameData_2136120[2];
extern __int64* GameData_2136210;
extern int* GameData_2136230[11];
__int64 Layout_57ac80(__int64 result, __int64 a2);
__int64* Layout_57b280(_QWORD* a1, __int64 a2, _QWORD* a3, __int64 a4,
                       __int64 a5, __int64 a6);
__int64 Layout_57c660(__int64 result, __int64 a2, __int64 a3, __int64 a4,
                      char a5);
__int64 Layout_57c870(__int64 a1, __int64 a2);
__int64* Layout_57ce20(__int64* result, __int64 a2);
__int64 Layout_57d240(__int64 result, __int64 a2);
__int64 Layout_57d420(__int64 result);
__int64 Layout_57d490(__int64 result);
__int64 Layout_57d4d0(__int64 a1, __int64 a2);
__int64 Layout_57d580(__int64 a1, __int64 a2);
__int64 Layout_57d640(__int64 a1, __int64 a2);
__int64 Layout_57d7e0(__int64 a1, _BYTE* a2, __int64 a3);
__int64 Layout_57d920(__int64 a1, __int64 a2);
__int64 Layout_57d9a0(__int64 a1, __int64 a2, __int64 a3, __int64 a4);
__int64 Layout_57da80(__int64 a1, __int64 a2);
__int64 Layout_57dd20(__int64 result, __int64 a2);
__int64 Layout_57dd50(_QWORD* a1, int a2);
__int64 Layout_57dd60(__int64 a1);
__int64* Layout_Destructor();
__int64 AnimTransformBasic_570f40(__int64);
__int64 GameRoutine_582390(__int64);
__int64 LayoutEx_578ca0(__int64 result);
__int64 LayoutEx_582980(__int64, __int64, __int64, __int64, char);
extern __int64* GameData_21360e8[2];
_BYTE* Layout_579280(_QWORD* a1, __int64 a2);
__int64 Layout_579900(__int64 a1, int a2);
__int64 Layout_57bb90(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5);
__int64* nn_ui2d_Pane_GetRuntimeTypeInfoStatic_alt1() __asm__(
    "nn_ui2d_Pane_GetRuntimeTypeInfoStatic");
__int64 __cxa_guard_release_alt1(_QWORD) __asm__("__cxa_guard_release");
extern _UNKNOWN* GameData_2136198;
extern _UNKNOWN GameData_21a38f8;
extern __int64* GameData_21361a0;
extern __int64 GameData_21a38f0;
__int64 Layout_579d80(__int64 result, __int64 a2);

_BYTE* Layout_579280(_QWORD* a1, __int64 a2)
{
  __int64 v3;
  void (**v5)(void);
  __int64* v6;
  __int64* i;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  _BYTE* result;
  void (***v12)(_QWORD);
  _QWORD* v13;
  _QWORD* v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;

  v3 = a1[11];
  v5 = (void (**)(void))GameData_2130eb8;
  v6 = GameData_2136210;
  if (v3 != 0) {
    if (*(_QWORD*)(v3 + 8) == 0 ||
        (((void (*)(_QWORD, _QWORD))*GameData_2130eb8)(*(_QWORD*)(v3 + 8),
                                                       *GameData_2136210),
         a1[11] != 0)) {
      (*v5)();
    }
    a1[11] = 0;
  }
  for (i = (__int64*)a1[10]; i != a1 + 9; i = (__int64*)a1[10]) {
    v8 = (__int64*)i[1];
    v9 = *v8;
    *(_QWORD*)(*i + 8) = v8;
    *v8 = *i;
    *(_QWORD*)(v9 + 8) = i;
    *i = v9;
  }
  v10 = a1[4];
  if (v10 != 0) {
    LayoutEx_578ca0(a1[4]);
    ((void (*)(__int64, __int64))*v5)(v10, *v6);
  }
  result = (_BYTE*)a1[3];
  a1[4] = 0;
  if (result != nullptr && (result[88] & 8) == 0) {
    result = (_BYTE*)(*(__int64 (**)(_BYTE*, __int64))(*(_QWORD*)result +
                                                       24LL))(result, a2);
    v12 = (void (***)(_QWORD))a1[3];
    if (v12 != nullptr) {
      (**v12)(a1[3]);
      result =
          (_BYTE*)((__int64 (*)(void (***)(_QWORD), __int64))*v5)(v12, *v6);
    }
    a1[3] = 0;
  }
  v13 = (_QWORD*)a1[2];
  if (v13 != a1 + 1) {
    do {
      v14 = (_QWORD*)v13[1];
      v15 = *v14;
      *(_QWORD*)(*v13 + 8LL) = v14;
      *v14 = *v13;
      *(_QWORD*)(v15 + 8) = v13;
      *v13 = v15;
      v17 = *(v13 - 1);
      v16 = v13 - 1;
      (*(void (**)(_QWORD*))(v17 + 8))(v16);
      result = (_BYTE*)((__int64 (*)(_QWORD*, __int64))*v5)(v16, *v6);
      v13 = v14;
    } while (v14 != a1 + 1);
  }
  a1[7] = 0;
  a1[8] = 0;
  a1[5] = 0;
  a1[6] = 0;
  return result;
}

__int64 Layout_579900(__int64 a1, int a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  int* v6;
  int v7;
  __int64 v8;

  v2 = *(_QWORD*)(a1 + 56);
  if (v2 == 0) {
    return *((unsigned int*)((_UNKNOWN**)0x8LL) + a2);
  }
  if (*(_BYTE*)(v2 + 22) != 3) {
    return *((unsigned int*)((_UNKNOWN**)0x8LL) + a2);
  }
  v3 = v2 + 12;
  v4 = *(unsigned int*)(v2 + 16);
  v5 = *(unsigned __int16*)(v3 + v4 + 2);
  if (*(_WORD*)(v3 + v4 + 2) == 0) {
    return *((unsigned int*)((_UNKNOWN**)0x8LL) + a2);
  }
  v6 = (int*)(v3 + v4 + 4);
  while (1) {
    v7 = *v6++;
    v8 = (unsigned int)(v7 + v4);
    if (*(_DWORD*)(v3 + v8) == 0) {
      break;
    }
    if (--v5 == 0) {
      return *((unsigned int*)((_UNKNOWN**)0x8LL) + a2);
    }
  }
  return v3 + v8 + *(unsigned int*)(v3 + v8 + 4LL * a2 + 8);
}

__int64 Layout_579d80(__int64 result, __int64 a2)
{
  int* v2;
  int v3;
  int v4;
  int v5;
  int v7;
  _DWORD* v9;
  char* v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64* v15;
  int v17;
  int v18;
  bool v19;
  int v20;
  __int64 v21;
  int v22;
  int v23;
  _QWORD* v24;
  __int64 v25;
  __int64 v26;

  v2 = *(int**)(result + 320);
  v3 = *(_DWORD*)(result + 312);
  v4 = *v2;
  *(_DWORD*)(result + 336) = *v2;
  if (v4 <= 829192307) {
    if (v4 > 828992608) {
      if (v4 <= 829187957) {
        if (v4 == 828992609) {
          goto LABEL_42;
        }
        if (v4 == 828993651) {
          *(_QWORD*)(result + 24) = v2;
        }
      }
      else {
        switch (v4) {
        case 829187958:
          *(_QWORD*)(result + 40) = v2;
          break;
        case 829189734:
          *(_QWORD*)(result + 8) = v2;
          break;
        case 829191267:
          *(_QWORD*)(result + 32) = v2;
          break;
        default:
          break;
        }
      }
    }
    else if (v4 <= 828665462) {
      if (v4 == 828598640 || v4 == 828665442) {
        goto LABEL_42;
      }
    }
    else {
      switch (v4) {
      case 828665463:
        goto LABEL_42;
      case 828727664:
        v18 = *(_DWORD*)(result + 288);
        v19 = __OFSUB__(v18, 1);
        v20 = v18 - 1;
        if (v20 < 0 == v19) {
          *(_DWORD*)(result + 288) = v20;
        }
        v21 = *(_QWORD*)(result + 216);
        *(_QWORD*)(result + 352) = v21;
        if (v21 != 0) {
          v21 = *(_QWORD*)(v21 + 24);
        }
        *(_QWORD*)(result + 216) = v21;
        break;
      case 828732007:
        --*(_DWORD*)(result + 360);
        break;
      default:
        break;
      }
    }
  }
  else {
    if (v4 > 829710700) {
      if (v4 > 829715055) {
        if (v4 != 829715056 && v4 != 829716596) {
          if (v4 != 829716844) {
            goto LABEL_46;
          }
          v7 = v3 + 1;
          *(_DWORD*)(result + 72) = v2[5];
          *(_DWORD*)(result + 76) = v2[6];
          if (v3 + 1 < *(unsigned __int16*)(a2 + 16)) {
          LABEL_43:
            v9 = (int*)((char*)v2 + (unsigned int)v2[1]);
            if (*v9 == 828666741) {
              v2 = (int*)((char*)v2 + (unsigned int)v2[1]);
              v3 = v7;
              *(_QWORD*)(result + 328) = v9;
              goto LABEL_46;
            }
          }
        LABEL_45:
          *(_QWORD*)(result + 328) = 0;
          goto LABEL_46;
        }
      LABEL_42:
        v7 = v3 + 1;
        if (v3 + 1 < *(unsigned __int16*)(a2 + 16)) {
          goto LABEL_43;
        }
        goto LABEL_45;
      }
      if (v4 == 829710701) {
        *(_QWORD*)(result + 16) = v2;
        goto LABEL_46;
      }
      if (v4 == 829714019) {
        goto LABEL_42;
      }
      v5 = 829714531;
    LABEL_32:
      if (v4 != v5) {
        goto LABEL_46;
      }
      goto LABEL_42;
    }
    if (v4 <= 829580146) {
      if (v4 == 829192308) {
        *(_QWORD*)result = v2;
        goto LABEL_46;
      }
      v5 = 829317488;
      goto LABEL_32;
    }
    switch (v4) {
    case 829580147:
      goto LABEL_42;
    case 829645168:
      v11 = *(_QWORD**)(result + 352);
      *(_QWORD*)(result + 216) = v11;
      if ((atomic_load_explicit((atomic_uchar* volatile)GameData_2136198,
                                memory_order_acquire) &
           1) == 0) {
        v26 = result;
        v24 = v11;
        v25 = a2;
        v22 = __cxa_guard_acquire(&GameData_21a38f8);
        v11 = v24;
        a2 = v25;
        v23 = v22;
        result = v26;
        if (v23 != 0) {
          GameData_21a38f0 =
              (__int64)nn_ui2d_Pane_GetRuntimeTypeInfoStatic_alt1();
          __cxa_guard_release_alt1(&GameData_21a38f8);
          v11 = v24;
          a2 = v25;
          result = v26;
        }
      }
      if (v11 == nullptr) {
        goto LABEL_69;
      }
      v12 = result;
      v13 = a2;
      v14 = (*(_QWORD * (**)(_QWORD * __return_ptr, _QWORD*))(*v11 + 16LL))(
          v11, v11);
      a2 = v13;
      v15 = v14;
      result = v12;
      if (v15 == GameData_21361a0) {
        goto LABEL_59;
      }
      do {
        v15 = (__int64*)*v15;
      } while (v15 != GameData_21361a0 && v15 != nullptr);
      if (v15 != nullptr) {
      LABEL_59:
        v17 = *(_DWORD*)(v12 + 288);
      }
      else {
      LABEL_69:
        v17 = *(_DWORD*)(result + 288);
        if (v17 < 1) {
          break;
        }
      }
      *(_DWORD*)(result + 288) = v17 + 1;
      break;
    case 829649511:
      ++*(_DWORD*)(result + 360);
      break;
    default:
      break;
    }
  }
LABEL_46:
  *(_DWORD*)(result + 340) = v3 + 1;
  if (v3 + 1 >= *(unsigned __int16*)(a2 + 16)) {
    v10 = nullptr;
  }
  else {
    v10 = (char*)v2 + (unsigned int)v2[1];
  }
  *(_QWORD*)(result + 344) = v10;
  return result;
}

__int64 Layout_57ac80(__int64 result, __int64 a2)
{
  __int64 v2;
  int v3;
  int v5;
  __int64 v6;
  __int64 v7;
  int v8;
  int v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int* v17;
  __int64 v18;
  int v19;
  __int64 v20;
  int v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned __int64 i;
  __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 j;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;

  if (a2 == 0) {
    return result;
  }
  v2 = *(unsigned int*)(a2 + 72);
  v3 = *(_DWORD*)(a2 + 96);
  v5 = v3 + v2;
  if (v3 + (_DWORD)v2 == 0) {
    return result;
  }
  v6 = result;
  v7 = *(_QWORD*)(result + 88);
  if (v7 != 0) {
    if (*(_QWORD*)(v7 + 8) != 0) {
      goto LABEL_5;
    }
  }
  else {
    v7 = (*(__int64 (**)(__int64, __int64, _QWORD))GameData_2130eb0[0])(
        16, 4, *GameData_2136210);
    if (v7 != 0) {
      *(_QWORD*)v7 = 0;
      *(_QWORD*)(v7 + 8) = 0;
    }
    *(_QWORD*)(v6 + 88) = v7;
    if (*(_QWORD*)(v7 + 8) != 0) {
    LABEL_5:
      v8 = *(_DWORD*)v7 + v2;
      v9 = *(_DWORD*)(v7 + 4) + v3;
      v10 = GameData_2136210;
      v11 = (*(__int64 (**)(__int64, __int64, _QWORD))GameData_2130eb0[0])(
          8LL * (v9 + v8), 4, *GameData_2136210);
      v15 = v11;
      if (v9 + v8 >= 1 && v11 != 0) {
        memset(v11, 0, 8LL * (unsigned int)(v9 + v8), v12, v13, v14);
      }
      memcpy(v15, *(_QWORD*)(*(_QWORD*)(v6 + 88) + 8LL),
             8LL * *(int*)(*(_QWORD*)(v6 + 88) + 4LL));
      memcpy(v15 + 8LL * v9,
             *(_QWORD*)(*(_QWORD*)(v6 + 88) + 8LL) +
                 8LL * *(int*)(*(_QWORD*)(v6 + 88) + 4LL),
             8LL * **(int**)(v6 + 88));
      v17 = *(int**)(v6 + 88);
      v18 = *((_QWORD*)v17 + 1);
      if (v18 != 0) {
        ((void (*)(__int64, __int64))*GameData_2130eb8)(v18, *v10);
        v17 = *(int**)(v6 + 88);
      }
      v19 = *v17;
      LODWORD(v20) = v17[1];
      *v17 = v8;
      v20 = (int)v20;
      v21 = v19 + v9;
      *(_DWORD*)(*(_QWORD*)(v6 + 88) + 4LL) = v9;
      *(_QWORD*)(*(_QWORD*)(v6 + 88) + 8LL) = v15;
      if ((int)v2 < 1) {
        goto LABEL_31;
      }
      goto LABEL_22;
    }
  }
  *(_DWORD*)v7 = v2;
  v21 = v3;
  *(_DWORD*)(*(_QWORD*)(v6 + 88) + 4LL) = v3;
  v22 = (*(__int64 (**)(__int64, __int64, _QWORD))GameData_2130eb0[0])(
      8LL * v5, 4, *GameData_2136210);
  v26 = v22;
  if (v5 >= 1 && v22 != 0) {
    memset(v22, 0, 8LL * (unsigned int)(v3 + v2), v23, v24, v25);
  }
  v20 = 0;
  *(_QWORD*)(*(_QWORD*)(v6 + 88) + 8LL) = v26;
  if ((int)v2 < 1) {
    goto LABEL_31;
  }
LABEL_22:
  for (i = 0; i != v2; ++i) {
    v29 = *(_QWORD*)(a2 + 64);
    if (i != 0) {
      if (i >= 8) {
        v30 = i & 0xFFFFFFFFFFFFFFF8LL;
        do {
          v30 -= 8LL;
          v29 = *(
              _QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v29 +
                                                                                                    8) +
                                                                                         8LL) +
                                                                              8LL) +
                                                                   8LL) +
                                                        8LL) +
                                             8LL) +
                                  8LL) +
                       8LL);
        } while (v30 != 0);
      }
      for (j = i & 7; j != 0; --j) {
        v29 = *(_QWORD*)(v29 + 8);
      }
    }
    v28 = *(_QWORD*)(*(_QWORD*)(v6 + 88) + 8LL) + 8 * i;
    *(_QWORD*)(v28 + 8LL * v21) = *(_QWORD*)(v29 - 32);
  }
LABEL_31:
  if (v3 >= 1) {
    v32 = a2 + 80;
    if (v3 == 1) {
      v33 = 0;
    }
    else {
      v37 = 1;
      v38 = 2;
      v33 = 0;
      do {
        v41 = *(_QWORD*)(a2 + 88);
        if (v41 == v32) {
        LABEL_47:
          v43 = 0;
        }
        else {
          v42 = v37;
          while (--v42 != 0) {
            v41 = *(_QWORD*)(v41 + 8);
            if (v41 == v32) {
              goto LABEL_47;
            }
          }
          v43 = *(_QWORD*)(v41 - 8);
        }
        *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v6 + 88) + 8LL) + 8 * v33 + 8 * v20) =
            v43;
        v44 = *(_QWORD*)(a2 + 88);
        if (v44 == v32) {
        LABEL_41:
          v39 = 0;
        }
        else {
          v45 = v38;
          while (--v45 != 0) {
            v44 = *(_QWORD*)(v44 + 8);
            if (v44 == v32) {
              goto LABEL_41;
            }
          }
          v39 = *(_QWORD*)(v44 - 8);
        }
        v40 = v33 | 1;
        v33 += 2;
        v37 += 2;
        v38 += 2;
        *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v6 + 88) + 8LL) + 8 * v40 + 8 * v20) =
            v39;
      } while (v33 != (v3 & 0x7FFFFFFE));
    }
    if ((v3 & 1) != 0) {
      v34 = *(_QWORD*)(a2 + 88);
      if (v34 == v32) {
      LABEL_39:
        v36 = 0;
      }
      else {
        v35 = v33 + 1;
        while (--v35 != 0) {
          v34 = *(_QWORD*)(v34 + 8);
          if (v34 == v32) {
            goto LABEL_39;
          }
        }
        v36 = *(_QWORD*)(v34 - 8);
      }
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v6 + 88) + 8LL) + 8 * v33 + 8 * v20) =
          v36;
    }
  }
  return qsort(*(_QWORD*)(*(_QWORD*)(v6 + 88) + 8LL) +
                   8LL * *(int*)(*(_QWORD*)(v6 + 88) + 4LL),
               **(int**)(v6 + 88), 8, LayoutEx_57b130);
}

__int64* Layout_57b280(_QWORD* a1, __int64 a2, _QWORD* a3, __int64 a4,
                       __int64 a5, __int64 a6)
{
  _QWORD** v6;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  int* v14;
  __int64 v15;
  _QWORD* v16;
  int* v17;
  int v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 (**v23)(__int64, __int64, __int64);
  __int64* v24;
  __int64* result;
  __int64 v26;
  __int64 i;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  _QWORD* v32;
  _QWORD* v34;
  __int64 v35;
  __int64 v36;
  __int64 v38;
  int v39;
  __int64 v40;
  __int64 v41;
  _QWORD* v42;
  int* v43;

  a1[3] = 0;
  a1[4] = 0;
  v6 = (_QWORD**)(a1 + 3);
  a1[5] = a3[5];
  a1[6] = a3[6];
  a1[7] = a3[7];
  v11 = a3[8];
  a1[11] = 0;
  a1[8] = v11;
  v12 = *(_QWORD**)(a6 + 32);
  if (a3[11] != 0) {
    if (v12 == nullptr) {
      v13 = *(_QWORD*)(a6 + 40);
      v14 = GameData_2136230[0];
      *(_QWORD*)a6 = v13;
      v15 = *v14;
      *(_DWORD*)(a6 + 12) = v15;
      v16 = (_QWORD*)(v13 + 8 * v15);
      memset(v13, 0, 8 * v15, a4, a5, a6);
      v12 = v16 + 2;
      *v16 = v16;
      v16[1] = v16;
      *(_QWORD*)(a6 + 16) = v16;
      Layout_57d2e0(v16 + 2, v16 + 8);
      *(_QWORD*)(a6 + 32) = v16 + 2;
    }
    v17 = (int*)(a6 + 8);
    ++*(_DWORD*)(a6 + 8);
    v42 = (_QWORD*)(a6 + 32);
  }
  else {
    v17 = (int*)(a6 + 8);
    ++*(_DWORD*)(a6 + 8);
    v42 = (_QWORD*)(a6 + 32);
    if (v12 == nullptr) {
      goto LABEL_7;
    }
  }
  v18 = *((_DWORD*)v12 + 10);
  v19 = v12[4] + 104LL * v18;
  *((_DWORD*)v12 + 10) = v18 + 1;
  ++*(_DWORD*)(a6 + 24);
  v20 = *(_QWORD*)(a6 + 32);
  *(_DWORD*)(v19 + 72) = 0;
  *(_DWORD*)(v19 + 96) = 0;
  *(_QWORD*)(v19 + 16) = a1;
  v21 = *(_QWORD*)v19;
  *(_QWORD*)(v19 + 40) = 0;
  *(_QWORD*)(v19 + 48) = v20;
  v22 = *(_QWORD*)(a6 + 16);
  *(_QWORD*)v19 = *(_QWORD*)v22;
  *(_QWORD*)(v21 + 8) = v22;
  *(_QWORD*)(*(_QWORD*)v22 + 8LL) = v19;
  *(_QWORD*)v22 = v21;
  *(_QWORD*)(*(_QWORD*)a6 + 8LL * *(int*)(a6 + 8) - 8) = v19;
LABEL_7:
  a1[3] = GameRoutine_5a0090();
  if (a5 != 0) {
    LayoutEx_58d200();
  }
  v43 = v17;
  v23 = (__int64 (**)(__int64, __int64, __int64))GameData_2130eb0[0];
  v24 = GameData_2136210;
  result =
      (__int64*)(*(__int64 (**)(__int64, __int64, _QWORD))GameData_2130eb0[0])(
          16, 4, *GameData_2136210);
  if (result != nullptr) {
    *result = (__int64)result;
    result[1] = (__int64)result;
  }
  a1[4] = result;
  v26 = a3[4];
  for (i = *(_QWORD*)(v26 + 8); i != v26; i = *(_QWORD*)(i + 8)) {
    v29 = a1[3];
    v28 = a1[4];
    v30 = (*v23)(56, 4, *v24);
    v31 = v30;
    if (v30 != 0) {
      LayoutEx_578ac0(v30, i - 8, v29);
    }
    result = (__int64*)LayoutEx_578d30(v28, v31);
  }
  if (a4 != 0) {
    v32 = *v6;
    if ((atomic_load_explicit((atomic_uchar* volatile)GameData_212dfd0,
                              memory_order_acquire) &
         1) == 0) {
      result = (__int64*)__cxa_guard_acquire(GameData_212dfd0);
      if ((_DWORD)result != 0) {
        *GameData_212dfc8 = nn_ui2d_Pane_GetRuntimeTypeInfoStatic(result, v40);
        result = (__int64*)__cxa_guard_release(GameData_212dfd0, v41);
      }
    }
    if (v32 != nullptr) {
      result = (__int64*)(*(__int64 (**)(_QWORD*))(*v32 + 16LL))(v32);
      if (result == GameData_212dfc8) {
        goto LABEL_26;
      }
      do {
        result = (__int64*)*result;
      } while (result != GameData_212dfc8 && result != nullptr);
      if (result != nullptr) {
      LABEL_26:
        v35 = v32[27];
        v34 = v32 + 27;
        *v34 = *(_QWORD*)(a4 + 72);
        *(_QWORD*)(v35 + 8) = a4 + 72;
        *(_QWORD*)(*(_QWORD*)(a4 + 72) + 8LL) = v34;
        *(_QWORD*)(a4 + 72) = v35;
      }
    }
  }
  if (*v42 != 0) {
    v36 = (unsigned int)*v43;
    if ((int)v36 >= 1 && (int)v36 <= *GameData_2136230[0]) {
      v38 = *(_QWORD*)(*(_QWORD*)a6 + 8 * v36 - 8);
    }
    else {
      v38 = 0;
    }
    result = (__int64*)Layout_57ac80((__int64)a1, v38);
  }
  v39 = *v43;
  if (*v43 <= 1) {
    v39 = 1;
  }
  *v43 = v39 - 1;
  return result;
}

__int64 Layout_57bb90(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v5;
  unsigned __int16 v10;
  __int64 result;
  __int64 v12;
  __int64* v13;
  __int64* v14;
  void (*v15)(__int64, __int64, __int64, __int64);
  __int64 v16;
  __int64* v17;
  __int64 v18;

  v5 = *(_QWORD*)(a4 + 8);
  if (v5 == 0) {
    return 0;
  }
  v10 = AnimTransformBasic_570f40(a4);
  result = (*(__int64 (**)(__int64, __int64, _QWORD))GameData_2130eb0[0])(
      8LL * v10 + 88, 4, *GameData_2136210);
  if (result != 0) {
    v12 = result;
    GameRoutine_582390(result);
    v13 = GameData_21360e8[0];
    *(_QWORD*)(v12 + 72) = 0;
    *(_DWORD*)(v12 + 80) = 0;
    v14 = v13 + 2;
    v15 = *(void (**)(__int64, __int64, __int64, __int64))(
        (char*)((_UNKNOWN*)0x50LL) + (_QWORD)v13);
    *(_QWORD*)v12 = v14;
    v15(v12, a2, *(_QWORD*)(a1 + 64), v5);
    v16 = *(_QWORD*)(v12 + 8);
    v18 = *(_QWORD*)(a1 + 8);
    v17 = (__int64*)(a1 + 8);
    *(_QWORD*)(v12 + 8) = v18;
    *(_QWORD*)(v16 + 8) = v17;
    *(_QWORD*)(*v17 + 8) = v12 + 8;
    *v17 = v16;
    LayoutEx_582980(v12, a4, v17[3], v12 + 88, a5 & 1);
    return v12;
  }
  return result;
}

__int64 Layout_57c660(__int64 result, __int64 a2, __int64 a3, __int64 a4,
                      char a5)
{
  __int64 v9;
  __int64 i;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  __int64 j;
  __int64 v16;
  __int64 v17;
  unsigned __int8* v18;
  int v19;
  __int64 k;
  unsigned __int8* v21;
  int v22;

  if (*(_QWORD*)(result + 24) != 0) {
    v9 = result;
    LayoutEx_57ca20();
    DrawInfo_5768c0(a3, v9);
    *(_BYTE*)(a3 + 404) |= 0x10u;
    for (i = *(_QWORD*)(v9 + 80); i != v9 + 72; i = *(_QWORD*)(i + 8)) {
      Layout_57c660(*(_QWORD*)(i + 16), a2, a3, a4, 0);
    }
    v11 = *(_QWORD*)(v9 + 88);
    if (v11 != 0) {
      v12 = *(_QWORD*)(v11 + 8);
      if (v12 != 0) {
        v13 = (unsigned int)(*(_DWORD*)(v11 + 4) + *(_DWORD*)v11);
        if ((int)v13 >= 1) {
          v14 = *(unsigned __int8*)(*(_QWORD*)v12 + 24LL);
          if ((a5 & 1) != 0) {
            for (j = 0; j != v13; ++j) {
              v16 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v9 + 88) + 8LL) + 8 * j);
              v17 = (*(__int64 (**)(__int64))(*(_QWORD*)v16 + 64LL))(v16);
              if (v17 == 0 || Pane_58f850(v17) == 0 ||
                  (LayoutEx_594190() & 1) == 0) {
                v18 =
                    *(unsigned __int8**)(*(_QWORD*)(*(_QWORD*)(v9 + 88) + 8LL) +
                                         8 * j);
                v19 = v18[24];
                if (v14 != v19) {
                  GameRoutine_5fdcb0(a4, 128);
                  GameRoutine_5fdce0(a4, 32);
                  v18 = *(
                      unsigned __int8**)(*(_QWORD*)(*(_QWORD*)(v9 + 88) + 8LL) +
                                         8 * j);
                }
                (*(void (**)(unsigned __int8*, __int64, __int64, __int64))(
                    *(_QWORD*)v18 + 56LL))(v18, a2, a3, a4);
                v14 = v19;
              }
            }
          }
          else {
            for (k = 0; k != v13; ++k) {
              v21 = *(unsigned __int8**)(*(_QWORD*)(*(_QWORD*)(v9 + 88) + 8LL) +
                                         8 * k);
              v22 = v21[24];
              if (v14 != v22) {
                GameRoutine_5fdcb0(a4, 128);
                GameRoutine_5fdce0(a4, 32);
                v21 =
                    *(unsigned __int8**)(*(_QWORD*)(*(_QWORD*)(v9 + 88) + 8LL) +
                                         8 * k);
              }
              (*(void (**)(unsigned __int8*, __int64, __int64, __int64))(
                  *(_QWORD*)v21 + 56LL))(v21, a2, a3, a4);
              v14 = v22;
            }
          }
        }
        GameRoutine_5fdcb0(a4, 128);
        GameRoutine_5fdce0(a4, 32);
      }
    }
    *(_BYTE*)(a3 + 404) &= ~0x10u;
    return GameRoutine_5768e0(a3);
  }
  return result;
}

__int64 Layout_57c870(__int64 a1, __int64 a2)
{
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  result = (*(__int64 (**)(__int64))(*(_QWORD*)a2 + 64LL))(a2);
  if (result != 0) {
    result = Pane_58f850_alt1();
    if (result != 0) {
      v4 = *(_QWORD*)(result + 8);
      if (v4 != 0 && (*(_BYTE*)(result + 552) & 4) == 0 &&
          (*(_BYTE*)(v4 + 4) & 2) != 0) {
        v5 = result;
        (*(void (**)(__int64))(*(_QWORD*)a2 + 72LL))(a2);
        v6 = *(_QWORD*)(v5 + 8);
        result = v5;
        if (v6 != 0 && (*(_BYTE*)(v5 + 552) & 4) == 0 &&
            (*(_BYTE*)(v6 + 4) & 2) != 0) {
          *(_BYTE*)(v5 + 84) = 0;
        }
      }
      v7 = *(_QWORD*)(result + 88);
      if (v7 != 0 && (*(_BYTE*)(result + 552) & 4) == 0 &&
          (*(_BYTE*)(v7 + 8) & 0x20) != 0) {
        v8 = result;
        (*(void (**)(__int64))(*(_QWORD*)a2 + 72LL))(a2);
        v9 = *(_QWORD*)(v8 + 88);
        result = v8;
        if (v9 != 0 && (*(_BYTE*)(v8 + 552) & 4) == 0 &&
            (*(_BYTE*)(v9 + 8) & 0x20) != 0) {
          *(_BYTE*)(v8 + 152) = 0;
        }
      }
      *(_BYTE*)(result + 552) = *(_BYTE*)(result + 552) & 0xEF | 0x10;
    }
  }
  return result;
}

__int64* Layout_57ce20(__int64* result, __int64 a2)
{
  __int64* v3;
  bool v5;
  __int16 v6;
  __int64* v7;
  __int64 i;
  __int64 v9;
  __int64 v10;

  v3 = result;
  if ((atomic_load_explicit((atomic_uchar* volatile)GameData_2130ea8,
                            memory_order_acquire) &
       1) == 0) {
    result = (__int64*)__cxa_guard_acquire(&GameData_22416d8);
    if ((_DWORD)result != 0) {
      GameData_22416d0 = nn_ui2d_Pane_GetRuntimeTypeInfoStatic(result, v9);
      result = (__int64*)__cxa_guard_release(&GameData_22416d8, v10);
    }
  }
  if (v3 != nullptr) {
    result = (__int64*)(*(__int64 (**)(__int64*))(*v3 + 16))(v3);
    if (result == &GameData_22416d0) {
      goto LABEL_10;
    }
    do {
      result = (__int64*)*result;
    } while (result != &GameData_22416d0 && result != nullptr);
    if (result != nullptr) {
    LABEL_10:
      v5 = v3[33] == a2;
      if (v3[33] == a2) {
        v6 = *((_WORD*)v3 + 138) & 4;
      }
      else {
        v6 = 4;
      }
      *((_WORD*)v3 + 138) = v6 | *((_WORD*)v3 + 138) & 0xFFFB;
      if (!v5) {
        v3[33] = a2;
      }
    }
  }
  v7 = v3 + 4;
  for (i = v3[5]; (__int64*)i != v7; i = *(_QWORD*)(i + 8)) {
    result = (__int64*)Layout_57ce20(i - 8, a2);
  }
  return result;
}

__int64 Layout_57d240(__int64 result, __int64 a2)
{
  *(_DWORD*)result = *(_DWORD*)(a2 + 84);
  *(_QWORD*)(result + 8) = a2 + 96;
  *(_QWORD*)(result + 16) = a2;
  return result;
}

__int64 Layout_57d420(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;

  v1 = result;
  if (*(int*)(result + 28) >= 1) {
    v2 = 0;
    v3 = 0;
    do {
      result = GameRoutine_57d4c0(*(_QWORD*)(v1 + 32) + v2);
      ++v3;
      v2 += 104;
    } while (v3 < *(int*)(v1 + 28));
  }
  *(_QWORD*)v1 = 0;
  *(_QWORD*)(v1 + 16) = 0;
  *(_QWORD*)(v1 + 32) = 0;
  return result;
}

__int64 Layout_57d490(__int64 result)
{
  *(_QWORD*)result = result;
  *(_QWORD*)(result + 8) = result;
  *(_QWORD*)(result + 16) = 0;
  *(_QWORD*)(result + 24) = 0;
  *(_QWORD*)(result + 32) = 0;
  *(_QWORD*)(result + 40) = 0;
  *(_DWORD*)(result + 72) = 0;
  *(_DWORD*)(result + 96) = 0;
  *(_WORD*)(result + 100) = 0;
  *(_QWORD*)(result + 48) = 0;
  *(_QWORD*)(result + 56) = result + 56;
  *(_QWORD*)(result + 64) = result + 56;
  *(_QWORD*)(result + 80) = result + 80;
  *(_QWORD*)(result + 88) = result + 80;
  return result;
}

__int64 Layout_57d4d0(__int64 a1, __int64 a2)
{
  __int64 result;
  __int64 v5;
  __int64 v6;
  int v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  _DWORD* v11;
  __int64 v12;

  result = (*(__int64 (**)(__int64, __int64, _QWORD))GameData_2130eb0[0])(
      112, 16, *GameData_2136210);
  if (result != 0) {
    v5 = result;
    LayoutPaneFactory_5814d0(result, a2);
    result = v5;
  }
  v6 = *(_QWORD*)(a1 + 48);
  v7 = *(_DWORD*)(v6 + 8);
  v8 = (__int64*)(*(_QWORD*)v6 + 48LL * v7);
  *(_DWORD*)(v6 + 8) = v7 + 1;
  *v8 = result;
  v8[1] = 0;
  v8[2] = 0;
  v8[3] = 0;
  v10 = v8[4];
  v8 += 4;
  v9 = v10;
  v12 = *(_QWORD*)(a1 + 56);
  v11 = (_DWORD*)(a1 + 56);
  *v8 = v12;
  *(_QWORD*)(v9 + 8) = v11;
  *(_QWORD*)(*(_QWORD*)v11 + 8LL) = v8;
  *(_QWORD*)v11 = v9;
  ++v11[4];
  return result;
}

__int64 Layout_57d580(__int64 a1, __int64 a2)
{
  __int64 result;
  __int64 v5;
  __int64 v6;
  int v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  _DWORD* v11;
  __int64 v12;

  result = (*(__int64 (**)(__int64, __int64, _QWORD))GameData_2130eb0[0])(
      464, 16, *GameData_2136210);
  if (result != 0) {
    v5 = result;
    VectorGraphicsTexture_5ad600(result, a2);
    result = v5;
  }
  v6 = *(_QWORD*)(a1 + 48);
  v7 = *(_DWORD*)(v6 + 24);
  v8 = (__int64*)(*(_QWORD*)(v6 + 16) + 24LL * v7);
  *(_DWORD*)(v6 + 24) = v7 + 1;
  *v8 = result;
  v10 = v8[1];
  ++v8;
  v9 = v10;
  v12 = *(_QWORD*)(a1 + 80);
  v11 = (_DWORD*)(a1 + 80);
  *v8 = v12;
  *(_QWORD*)(v9 + 8) = v11;
  *(_QWORD*)(*(_QWORD*)v11 + 8LL) = v8;
  *(_QWORD*)v11 = v9;
  ++v11[4];
  return result;
}

__int64 Layout_57d640(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _DWORD* v17;
  __int64 v18;
  __int64 v19;
  __int64 result;
  int* v22;
  int v23;

  v4 = (*(__int64 (**)(__int64, __int64, _QWORD))GameData_2130eb0[0])(
      112, 16, *GameData_2136210);
  v5 = v4;
  if (v4 != 0) {
    LayoutPaneFactory_5814d0(v4, a2);
  }
  v6 = *(_QWORD*)(a1 + 48);
  v7 = *(_DWORD*)(v6 + 8);
  v8 = (__int64*)(*(_QWORD*)v6 + 48LL * v7);
  *(_DWORD*)(v6 + 8) = v7 + 1;
  *v8 = v5;
  v8[1] = 0;
  v8[2] = 0;
  v8[3] = 0;
  v9 = v8[4];
  v8[4] = *(_QWORD*)(a1 + 56);
  *(_QWORD*)(v9 + 8) = a1 + 56;
  *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8LL) = v8 + 4;
  *(_QWORD*)(a1 + 56) = v9;
  v10 = *(_QWORD*)(a1 + 24);
  ++*(_DWORD*)(a1 + 72);
  v11 = LayoutPaneFactory_59fb80(v10, *(_QWORD*)(*v8 + 16));
  v12 = *(int**)(a1 + 40);
  v13 = v11;
  v14 = *(_QWORD*)(a1 + 24) + *(unsigned int*)(v11 + 4);
  if (v12 == nullptr || *v12 < 1) {
    goto LABEL_15;
  }
  v15 = 7;
  v16 = 0;
  while ((AnimTransformBasic_5714e0(v14, *((_QWORD*)v12 + 1) + v15 * 4 - 28) &
          1) == 0) {
    ++v16;
    v15 += 10;
    if (v16 >= *v12) {
      goto LABEL_15;
    }
  }
  v17 = *((_DWORD**)v12 + 1);
  if (v17 != nullptr) {
    v18 = (unsigned int)v17[v15];
    v19 = *(_QWORD*)(*(_QWORD*)(a1 + 40) + 16LL);
    if ((_DWORD)v18 != 0 && v19 != 0) {
      v22 = (int*)(v19 + v18);
      v23 = *v22;
      v17 = v22 + 21;
      if (v23 != 829714531) {
        v17 = nullptr;
      }
      goto LABEL_16;
    }
  LABEL_15:
    v17 = nullptr;
  }
LABEL_16:
  v8[3] = v14;
  result = v5;
  if (v17 == nullptr) {
    v17 = (_DWORD*)v13;
  }
  v8[1] = (__int64)v17;
  return result;
}

__int64 Layout_57d7e0(__int64 a1, _BYTE* a2, __int64 a3)
{
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  _DWORD* v18;
  __int64 v19;

  if (a2 != nullptr) {
    *a2 = 0;
  }
  v6 = *(_QWORD*)(a3 + 16);
  if (*(_DWORD*)(a1 + 72) != 0) {
    v7 = a1 + 56;
    v8 = (__int64*)(a1 + 64);
    while (1) {
      v9 = *v8;
      if (*v8 == v7) {
        break;
      }
      v10 = *(_QWORD*)(v9 - 32);
      v8 = (__int64*)(v9 + 8);
      if ((unsigned int)strcmp(v6, *(_QWORD*)(v10 + 16)) == 0) {
        return v10;
      }
    }
  }
  v11 = (*(__int64 (**)(__int64, __int64, _QWORD))GameData_2130eb0[0])(
      112, 16, *GameData_2136210);
  v10 = v11;
  if (v11 != 0) {
    LayoutPaneFactory_5814d0(v11, v6);
  }
  v12 = (*(__int64 (**)(__int64))(*(_QWORD*)a3 + 64LL))(a3);
  v13 = *(_QWORD*)(a1 + 48);
  v14 = *(_DWORD*)(v13 + 8);
  v15 = (__int64*)(*(_QWORD*)v13 + 48LL * v14);
  *(_DWORD*)(v13 + 8) = v14 + 1;
  *v15 = v10;
  v15[1] = 0;
  v15[2] = a3;
  v15[3] = v12 + 176;
  v17 = v15[4];
  v15 += 4;
  v16 = v17;
  v19 = *(_QWORD*)(a1 + 56);
  v18 = (_DWORD*)(a1 + 56);
  *v15 = v19;
  *(_QWORD*)(v16 + 8) = v18;
  *(_QWORD*)(*(_QWORD*)v18 + 8LL) = v15;
  *(_QWORD*)v18 = v16;
  ++v18[4];
  *(_BYTE*)(v10 + 24) = *(_BYTE*)(a3 + 24);
  if (a2 != nullptr) {
    *a2 = 1;
  }
  return v10;
}

__int64 Layout_57d920(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64* v3;
  __int64 v5;
  __int64 v6;

  if (*(_DWORD*)(a1 + 72) != 0) {
    v2 = a1 + 56;
    v3 = (__int64*)(a1 + 64);
    while (1) {
      v5 = *v3;
      if (*v3 == v2) {
        break;
      }
      v6 = *(_QWORD*)(v5 - 32);
      v3 = (__int64*)(v5 + 8);
      if ((unsigned int)strcmp(a2, *(_QWORD*)(v6 + 16)) == 0) {
        return v6;
      }
    }
  }
  return 0;
}

__int64 Layout_57d9a0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result;
  __int64 v9;
  __int64 v10;
  int v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  _DWORD* v15;
  __int64 v16;

  result = (*(__int64 (**)(__int64, __int64, _QWORD))GameData_2130eb0[0])(
      464, 16, *GameData_2136210);
  if (result != 0) {
    v9 = result;
    VectorGraphicsTexture_5ad670(result, a4, a2, a3);
    result = v9;
  }
  v10 = *(_QWORD*)(a1 + 48);
  v11 = *(_DWORD*)(v10 + 24);
  v12 = (__int64*)(*(_QWORD*)(v10 + 16) + 24LL * v11);
  *(_DWORD*)(v10 + 24) = v11 + 1;
  *v12 = result;
  v14 = v12[1];
  ++v12;
  v13 = v14;
  v16 = *(_QWORD*)(a1 + 80);
  v15 = (_DWORD*)(a1 + 80);
  *v12 = v16;
  *(_QWORD*)(v13 + 8) = v15;
  *(_QWORD*)(*(_QWORD*)v15 + 8LL) = v12;
  *(_QWORD*)v15 = v13;
  ++v15[4];
  return result;
}

__int64 Layout_57da80(__int64 a1, __int64 a2)
{
  __int64 v3;
  __int64* v4;
  __int64 v6;
  _QWORD* v7;
  __int64 result;
  int* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _DWORD* v14;
  __int64 v15;
  __int64 v16;
  int* v18;
  int v19;

  if (*(_DWORD*)(a1 + 72) != 0) {
    v3 = a1 + 56;
    v4 = (__int64*)(a1 + 64);
    while (1) {
      v6 = *v4;
      if (*v4 == v3) {
        break;
      }
      v4 = (__int64*)(v6 + 8);
      if ((unsigned int)strcmp(a2, *(_QWORD*)(*(_QWORD*)(v6 - 32) + 16LL)) ==
          0) {
        v7 = (_QWORD*)(v6 - 32);
        goto LABEL_7;
      }
    }
  }
  v7 = nullptr;
LABEL_7:
  result =
      LayoutPaneFactory_59fb80(*(_QWORD*)(a1 + 24), *(_QWORD*)(*v7 + 16LL));
  v9 = *(int**)(a1 + 40);
  v10 = result;
  v11 = *(_QWORD*)(a1 + 24) + *(unsigned int*)(result + 4);
  if (v9 == nullptr || *v9 < 1) {
    goto LABEL_19;
  }
  v12 = 7;
  v13 = 0;
  while (1) {
    result = AnimTransformBasic_5714e0(v11, *((_QWORD*)v9 + 1) + v12 * 4 - 28);
    if ((result & 1) != 0) {
      break;
    }
    ++v13;
    v12 += 10;
    if (v13 >= *v9) {
      goto LABEL_19;
    }
  }
  v14 = *((_DWORD**)v9 + 1);
  if (v14 != nullptr) {
    v15 = (unsigned int)v14[v12];
    v16 = *(_QWORD*)(*(_QWORD*)(a1 + 40) + 16LL);
    if ((_DWORD)v15 != 0 && v16 != 0) {
      v18 = (int*)(v16 + v15);
      v19 = *v18;
      v14 = v18 + 21;
      if (v19 != 829714531) {
        v14 = nullptr;
      }
      goto LABEL_20;
    }
  LABEL_19:
    v14 = nullptr;
  }
LABEL_20:
  v7[3] = v11;
  if (v14 == nullptr) {
    v14 = (_DWORD*)v10;
  }
  v7[1] = v14;
  return result;
}

__int64 Layout_57dd20(__int64 result, __int64 a2)
{
  *(_QWORD*)result = 0;
  *(_QWORD*)(result + 8) = 0;
  *(_QWORD*)(result + 16) = 0;
  *(_DWORD*)(result + 24) = 0;
  *(_QWORD*)(result + 32) = 0;
  *(_QWORD*)(result + 40) = a2;
  return result;
}

__int64 Layout_57dd50(_QWORD* a1, int a2) { return *(_QWORD*)(*a1 + 8LL * a2); }

__int64 Layout_57dd60(__int64 a1)
{
  return (unsigned int)(*(_DWORD*)(a1 + 8) - 1);
}

__int64* Layout_Destructor()
{
  __int64 v1;

  if ((atomic_load_explicit((atomic_uchar* volatile)GameData_2136118,
                            memory_order_acquire) &
       1) != 0) {
    return GameData_2136120[0];
  }
  if ((unsigned int)__cxa_guard_acquire(GameData_2136118) != 0) {
    *GameData_2136120[0] = 0;
    __cxa_guard_release(GameData_2136118, v1);
  }
  return GameData_2136120[0];
}

#pragma GCC visibility pop
