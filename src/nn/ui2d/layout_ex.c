#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_579200(_QWORD* result);
_QWORD* GameRoutine_584070(__int64, __int64);
__int64 AnimTransformBasic_56e6e0(void);
__int64 AnimTransformBasic_570de0(_QWORD, _QWORD);
__int64 AnimTransformBasic_570f40(_QWORD);
__int64 AnimTransformBasic_570f60(_QWORD);
__int64 AnimTransformBasic_570f80(_QWORD);
__int64 AnimTransformBasic_570fa0(_QWORD);
__int64 AnimTransformBasic_570fc0(_QWORD);
__int64 AnimTransformBasic_570fe0(_QWORD, _QWORD, _QWORD);
__int64 AnimTransformBasic_5710f0(_QWORD, _QWORD, _QWORD);
__int64 AnimTransformBasic_571340(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 AnimatorEx_584880(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 CaptureTexture_5815d0(void);
__int64 DrawInfo_5768c0(_QWORD, _QWORD);
__int64 GameRoutine_56e670(_QWORD);
__int64 GameRoutine_56e690(_QWORD, _QWORD);
__int64 GameRoutine_5714e0(_QWORD, _QWORD);
__int64 GameRoutine_5768e0(_QWORD);
__int64 GameRoutine_578d60(__int64, __int64);
__int64 GameRoutine_579180(__int64);
__int64 GameRoutine_57d260(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_57d420(void);
__int64 GameRoutine_57dd20(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_57dd40(_QWORD);
__int64 GameRoutine_57de00(_QWORD, _QWORD);
__int64 GameRoutine_57e010(_QWORD, _QWORD);
__int64 GameRoutine_57e180(_QWORD);
__int64 GameRoutine_581820(void);
__int64 GameRoutine_582390(_QWORD);
__int64 GameRoutine_5827d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_582840(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_5828b0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_584780(void);
__int64 GameRoutine_58d5b0(_QWORD, _QWORD);
__int64 GameRoutine_58d610(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_5940c0(_QWORD, _QWORD, _QWORD, float);
__int64 GameRoutine_594140(_QWORD, _QWORD, _QWORD, float);
__int64 GameRoutine_5998c0(_QWORD, _QWORD);
__int64 GameRoutine_599ae0(_QWORD);
__int64 GameRoutine_599b40(_QWORD, _QWORD, float, float);
__int64 GameRoutine_599b60(_QWORD, _QWORD);
__int64 GameRoutine_599bc0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_59ee00(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_59fe80(_QWORD, float, float);
__int64 LayoutEx_579410(__int64, __int64, __int64, __int64, __int64, __int64,
                        __int64, __int64, char);
__int64 LayoutEx_57a5a0(__int64, __int64, __int64, __int64, __int64, __int64,
                        __int64);
__int64 LayoutEx_57b280(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 LayoutEx_57b830(__int64, const char*);
__int64 Pane_58dee0(_QWORD, _QWORD);
__int64 Pane_58f850(_QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD, _QWORD);
__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_ui2d_Pane_GetRuntimeTypeInfoStatic(void);
__int64 nn_ui2d_detail_DynamicRenderingTexture_GetRuntimeTypeInfoStatic(void);
__int64 nn_util_SNPrintf(_QWORD, _QWORD, const char*, ...);
extern _UNKNOWN* GameData_2130ea8;
extern _UNKNOWN* GameData_21361a8;
extern _UNKNOWN** GameData_2130eb0[2];
extern _UNKNOWN** GameData_2130eb8;
extern __int64 GameData_21a38a8;
extern __int64 GameData_21a38b0;
extern __int64* GameData_2130ea0;
extern __int64* GameData_21360d8[4];
extern __int64* GameData_21360e0[3];
extern __int64* GameData_21361b0;
extern __int64* GameData_2136210;
extern __int64* GameData_2136238[10];
extern int* GameData_2136218[14];
extern int* GameData_2136220[13];
extern int* GameData_2136228[12];
extern int* GameData_2136230[11];
__int64 LayoutEx_579620(__int64 result, __int64 a2);
__int64 LayoutEx_5797d0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                        __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                        char a9);
__int64 LayoutEx_5798a0(__int64 a1);
_QWORD* LayoutEx_Unknown17(_QWORD* a1, __int64 a2, __int64 a3, __int64* a4,
                           int* a5, __int64 a6, __int64 a7, unsigned int a8);
__int64 LayoutEx_57a160(__int64 a1, __int64 a2, __int64 a3, int* a4);
__int64* LayoutEx_57a320(__int64 a1, __int64 a2, __int64 a3);
__int64 LayoutEx_57a480(__int64 a1, __int64 a2, float a3);
__int64 LayoutEx_57ac40(__int64 a1);
__int64 LayoutEx_Unknown25(__int64 result, __int64 a2);
__int64 LayoutEx_57b130(__int64 a1, __int64 a2);
__int64 LayoutEx_57b150(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                        __int64 a5, __int64 a6);
__int64 LayoutEx_57b5c0(__int64 a1);
__int64 LayoutEx_Unknown3(__int64 result, _QWORD* a2);
_QWORD* LayoutEx_57b6d0(__int64 a1, __int64 a2, const char* a3, __int64 a4,
                        char a5);
_QWORD* LayoutEx_57b8c0(__int64 a1, __int64 a2, const char* a3, __int64 a4,
                        char a5);
_QWORD* LayoutEx_57ba20(__int64 a1, __int64 a2, const char* a3, unsigned int a4,
                        char a5);
__int64 LayoutEx_57bca0(__int64 a1, __int64 a2, const char* a3,
                        unsigned int a4);
_QWORD* LayoutEx_Unknown19(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4,
                           char a5);
__int64 LayoutEx_Unknown4(__int64 result, __int64 a2);
__int64 LayoutEx_Unknown5(__int64 a1, __int64 a2);
__int64 LayoutEx_Unknown6(__int64 result, __int64 a2);
__int64 LayoutEx_Unknown7(__int64 result);
__int64 LayoutEx_Unknown8(__int64 a1, __int64 a2, __int64 a3);
__int64 LayoutEx_Unknown12(__int64 a1, __int64 a2, __int64 a3);
__int64 LayoutEx_Unknown13(__int64 a1, __int64 a2);
__int64* LayoutEx_57ca20(__int64* result, __int64 a2);
__int64 LayoutEx_Unknown14(__int64 result, __int64 a2, __int64 a3);
__int64 LayoutEx_Unknown9(__int64 result);
__int64 LayoutEx_Unknown10(__int64 result, float a2);
__int64 LayoutEx_Unknown11(__int64 result, float a2);
__int64 LayoutEx_57cf40(__int64 a1, __int64 a2);
__int64 LayoutEx_57cfc0(__int64 a1, __int64 a2);
__int64 LayoutEx_57d060(__int64 a1);
__int64 LayoutEx_Unknown21();
_QWORD* LayoutEx_57d100();
__int64 LayoutEx_Unknown16(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                           __int64 a5, __int64 a6, __int64 a7);
__int64 LayoutEx_Unknown18(__int64 a1);
__int64 LayoutEx_Unknown28(__int64 a1, __int64 a2);
__int64 LayoutEx_5842c0(__int64 result, char a2);
__int64 LayoutEx_Unknown27(__int64 result, __int64 a2);
_QWORD* LayoutEx_584420(_QWORD* a1, __int64 a2, const char* a3, char a4);
__int64 LayoutEx_Unknown26(__int64 result);

__int64 LayoutEx_579620(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  int v10;
  __int64 v11;
  int v12;
  __int64* v13;
  __int64 v14;
  float v15;
  __int64 v16;

  v2 = *(_QWORD*)(result + 16);
  v3 = *(_QWORD*)(v2 + 8);
  if (v3 != v2) {
    v5 = result;
    do {
      v6 = *(_QWORD*)(v3 + 8);
      if (*(int*)(v3 + 72) >= 1) {
        v7 = *(_QWORD*)(v3 + 16);
        v8 = v3 + 56;
        v9 = 1;
        v10 = 0;
        do {
          v11 = *(_QWORD*)(v3 + 64);
          if (v11 == v8) {
          LABEL_12:
            v13 = nullptr;
          }
          else {
            v12 = v9;
            while (--v12 != 0) {
              v11 = *(_QWORD*)(v11 + 8);
              if (v11 == v8) {
                goto LABEL_12;
              }
            }
            v13 = (__int64*)(v11 - 32);
          }
          v14 = (*(__int64 (**)(_QWORD, __int64, __int64))(
              **(_QWORD**)(v7 + 24) + 120LL))(*(_QWORD*)(v7 + 24), v13[3], 1);
          result = *v13;
          if (*(_QWORD*)(*v13 + 56) == 0) {
            if (v13[1] != 0) {
              result = CaptureTexture_5815d0();
              if (*(_BYTE*)(v3 + 101) == 1) {
                *(_WORD*)(*v13 + 104) &= ~4u;
                *(_WORD*)(*v13 + 104) &= ~2u;
              }
            }
            else if (v13[2] != 0) {
              result = GameRoutine_581820();
            }
          }
          if ((*(_BYTE*)(v14 + 98) & 2) != 0) {
            v15 = *(float*)(*v13 + 40);
            v16 = Pane_58f850(v14);
            result = GameRoutine_5940c0(v16, a2, v7, v15);
          }
          ++v10;
          ++v9;
        } while (v10 < *(_DWORD*)(v3 + 72));
        v2 = *(_QWORD*)(v5 + 16);
      }
      v3 = v6;
    } while (v6 != v2);
  }
  return result;
}

__int64 LayoutEx_5797d0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                        __int64 a5, __int64 a6, __int64 a7, __int64 a8, char a9)
{
  __int64 result;

  result = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)a4 + 80LL))(
      a4, 1651276148, a8);
  if (result != 0) {
    return LayoutEx_579410(a1, a2, a3, a4, a5, a6, result, a7, a9 & 1);
  }
  return result;
}

__int64 LayoutEx_5798a0(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int* v5;
  int v6;
  __int64 v7;

  v1 = *(_QWORD*)(a1 + 56);
  if (v1 == 0) {
    return 0;
  }
  if (*(_BYTE*)(v1 + 22) != 3) {
    return 0;
  }
  v2 = v1 + 12;
  v3 = *(unsigned int*)(v1 + 16);
  v4 = *(unsigned __int16*)(v2 + v3 + 2);
  if (*(_WORD*)(v2 + v3 + 2) == 0) {
    return 0;
  }
  v5 = (int*)(v2 + v3 + 4);
  while (1) {
    v6 = *v5++;
    v7 = (unsigned int)(v6 + v3);
    if (*(_DWORD*)(v2 + v7) == 0) {
      break;
    }
    if (--v4 == 0) {
      return 0;
    }
  }
  return *(unsigned int*)(v2 + v7 + 4);
}

_QWORD* LayoutEx_Unknown17(_QWORD* a1, __int64 a2, __int64 a3, __int64* a4,
                           int* a5, __int64 a6, __int64 a7, unsigned int a8)
{
  __int64 v15;
  __int64 v17;
  __int64 v18;
  __int64* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned __int8* v23;
  __int64 v24;
  _QWORD* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  int v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64* v37;
  __int64 v38;
  __int64 v39;
  _QWORD* v40;
  __int64 v41;
  int v42;
  unsigned __int8 explicit;
  __int64* v44;
  __int64* v45;
  __int64 v48;
  unsigned __int8* v49;
  int v50;
  __int64 v51;
  __int64 v52;
  unsigned __int8* v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  int v62;
  int v63;
  __int64 v64;

  *(_DWORD*)(a6 + 64) = 0;
  *(_WORD*)(a6 + 68) = 0;
  *(_QWORD*)(a6 + 72) = 0;
  *(_QWORD*)(a6 + 200) = 0;
  v15 = a1[3];
  if (a5 != nullptr) {
    if (v15 != 0) {
      if (*a5 < 1) {
        goto LABEL_28;
      }
      v17 = 0;
      v18 = 0;
      while ((GameRoutine_5714e0((char*)a4 + 12, *((_QWORD*)a5 + 1) + v17) &
              1) == 0) {
        ++v18;
        v17 += 40;
        if (v18 >= *a5) {
          goto LABEL_28;
        }
      }
      v26 = *((_QWORD*)a5 + 1);
      if (v26 == 0) {
      LABEL_28:
        v19 = nullptr;
        goto LABEL_29;
      }
      v27 = v26 + v17;
      v28 = *(unsigned int*)(v26 + v17 + 28);
      if ((_DWORD)v28 != 0) {
        v19 = (__int64*)(*((_QWORD*)a5 + 2) + v28);
      }
      else {
        v19 = nullptr;
      }
      *(_WORD*)(a6 + 64) = *(unsigned __int8*)(v26 + v17 + 24);
      *(_WORD*)(a6 + 66) = *(unsigned __int8*)(v27 + 25);
      *(_WORD*)(a6 + 68) = *(unsigned __int8*)(v27 + 26);
      v29 = *(unsigned int*)(v27 + 36);
      if ((_DWORD)v29 != 0) {
        v30 = *((_QWORD*)a5 + 2) + v29;
      }
      else {
        v30 = 0;
      }
      *(_QWORD*)(a6 + 72) = v30;
      v31 = *(unsigned int*)(v27 + 32);
      if ((_DWORD)v31 != 0) {
        if ((_DWORD)v31 == 1) {
          goto LABEL_24;
        }
        v32 = *(unsigned __int8*)(v26 + v17 + 27);
        if (v32 == 1) {
          goto LABEL_26;
        }
        if (v32 == 2) {
        LABEL_24:
          v33 = 0;
        }
        else {
          v33 = *((_QWORD*)a5 + 2) + v31;
        }
        *(_QWORD*)(a6 + 192) = v33;
      }
    LABEL_26:
      if (*(_BYTE*)(v27 + 27) != 0) {
        *(_QWORD*)(a6 + 200) = *((_QWORD*)a5 + 2) + *(unsigned int*)(v27 + 32);
      }
    LABEL_29:
      v25 = (_QWORD*)(*(__int64 (**)(_QWORD*, __int64, __int64, _QWORD,
                                     __int64*, __int64*, __int64))(
          *a1 + 168LL))(a1, a2, a3, a8, a4, v19, a6);
      if (v25 == nullptr) {
        return v25;
      }
      goto LABEL_30;
    }
    v25 = *((_QWORD**)a5 + 3);
    v19 = nullptr;
    if (v25 == nullptr) {
      goto LABEL_29;
    }
  }
  else {
    v19 = nullptr;
    if (v15 != 0 || (*(_BYTE*)(a6 + 208) & 1) == 0) {
      goto LABEL_29;
    }
    v20 = a4[9];
    v60 = a4[8];
    v61 = v20;
    v21 = a4[5];
    v56 = a4[4];
    v57 = v21;
    v22 = a4[7];
    v58 = a4[6];
    v59 = v22;
    v23 = (unsigned __int8*)a4[1];
    v52 = *a4;
    v53 = v23;
    v24 = a4[3];
    v54 = a4[2];
    v55 = v24;
    LODWORD(v52) = 829715056;
    v62 = *((_DWORD*)a4 + 20);
    v63 = 0;
    v64 = 0x3F8000003F800000LL;
    v25 = (_QWORD*)(*(__int64 (**)(_QWORD*, __int64, __int64, __int64, __int64*,
                                   _QWORD, __int64))(*a1 + 168LL))(
        a1, a2, a3, 829715056, &v52, 0, a6);
    v19 = nullptr;
    v25[29] = a1;
  }

LABEL_30:
  if (a1[3] == 0) {
    a1[3] = v25;
  }
  v34 = *(_QWORD*)(a6 + 152);
  if (v34 != 0) {
    Pane_58dee0(v34, v25);
  }
  if (a8 == 829715056) {
    v35 = *(_QWORD*)(a6 + 56);
    v56 = 0;
    v57 = 0;
    v54 = 0;
    v55 = 0;
    if (v19 != nullptr) {
      v36 = v35;
    }
    else {
      v36 = a7;
    }
    if (v19 != nullptr) {
      v37 = v19;
    }
    else {
      v37 = a4;
    }
    v52 = 0;
    v53 = nullptr;
    GameRoutine_57d260(&v52, v25, v37, v36, (char*)a4 + 76);
    if ((*(_DWORD*)(a6 + 148) & 0x80000000) != 0) {
      v48 = (unsigned int)v52;
      if ((int)v52 >= 1) {
        v49 = v53;
        while (1) {
          v50 = *v49;
          v49 += 40;
          if (v50 != 0) {
            break;
          }
          if (--v48 == 0) {
            goto LABEL_42;
          }
        }
        *(_DWORD*)(a6 + 148) = *(_DWORD*)(a6 + 144);
      }
    }
  LABEL_42:
    *(_QWORD*)(a6 + 8LL * (int)(*(_DWORD*)(a6 + 144))++ + 80) = v25 + 22;
    v38 = (*(__int64 (**)(_QWORD*, __int64, __int64, __int64*, __int64*,
                          __int64))(*a1 + 176LL))(
        a1, a2, a3, &v37[5 * *((unsigned int*)v37 + 21) + 12], &v52, a6);
    if (v38 != 0) {
      v39 = v25[27];
      v25[29] = v38;
      v41 = a1[9];
      v40 = a1 + 9;
      v25[27] = v41;
      *(_QWORD*)(v39 + 8) = v40;
      *(_QWORD*)(*v40 + 8LL) = v25 + 27;
      *v40 = v39;
    }
    v42 = *(_DWORD*)(a6 + 148);
    --*(_DWORD*)(a6 + 144);
    if (v42 == 0) {
      *(_DWORD*)(a6 + 148) = -1;
    }
  }
  if (*(_QWORD*)(a6 + 232) != 0) {
    explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_2130ea8,
                                    memory_order_acquire);
    v44 = GameData_2130ea0;
    if ((explicit & 1) == 0 &&
        (unsigned int)__cxa_guard_acquire(GameData_2130ea8) != 0) {
      *v44 = nn_ui2d_Pane_GetRuntimeTypeInfoStatic();
      __cxa_guard_release(GameData_2130ea8, v51);
    }
    v45 = (__int64*)(*(__int64 (**)(_QWORD*))(*v25 + 16LL))(v25);
    if (v45 == v44) {
      goto LABEL_55;
    }
    do {
      v45 = (__int64*)*v45;
    } while (v45 != v44 && v45 != nullptr);
    if (v45 != nullptr) {
    LABEL_55:
      (*(void (**)(_QWORD*, _QWORD))(a6 + 232))(v25, *(_QWORD*)(a6 + 240));
    }
  }
  return v25;
}

__int64 LayoutEx_57a160(__int64 a1, __int64 a2, __int64 a3, int* a4)
{
  __int64 result;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  _QWORD v18[2];
  _QWORD v19[2];

  result = GameRoutine_58d5b0(*(_QWORD*)(a1 + 24), 19);
  if (result == 0 || *(_QWORD*)(result + 8) == 0) {
    v9 = (*(__int64 (**)(__int64, __int64, _QWORD))GameData_2130eb0[0])(
        232, 4, *GameData_2136210);
    v10 = v9;
    if (v9 != 0) {
      *(_QWORD*)v9 = 0;
      *(_QWORD*)(v9 + 8) = 0;
      *(_QWORD*)(v9 + 32) = 0;
      *(_BYTE*)(v9 + 40) = 0;
      *(_DWORD*)(v9 + 112) = 0;
      *(_DWORD*)(v9 + 200) = 0;
      *(_BYTE*)(v9 + 224) = 0;
      *(_QWORD*)(v9 + 208) = 0;
      *(_QWORD*)(v9 + 216) = 0;
      *(_QWORD*)(v9 + 16) = v9 + 16;
      *(_QWORD*)(v9 + 24) = v9 + 16;
      *(_QWORD*)(v9 + 152) = v9 + 144;
      *(_QWORD*)(v9 + 160) = 0;
      *(_QWORD*)(v9 + 120) = 0;
      *(_QWORD*)(v9 + 128) = v9 + 128;
      *(_QWORD*)(v9 + 136) = v9 + 128;
      *(_QWORD*)(v9 + 144) = v9 + 144;
      *(_QWORD*)(v9 + 168) = 0;
      *(_QWORD*)(v9 + 176) = v9 + 176;
      *(_QWORD*)(v9 + 184) = v9 + 176;
      *(_QWORD*)(v9 + 192) = 0;
    }
    v11 = *(_QWORD*)(a2 + 320);
    v18[0] = a3;
    v18[1] = a1;
    LayoutEx_57a320(v18, v9, v11);
    v12 = *(_QWORD*)(a1 + 24);
    v19[0] = 19;
    v19[1] = v10;
    result = GameRoutine_58d610(v12, 19, v19, 16);
    if (a4 != nullptr) {
      v13 = *(_QWORD*)(v10 + 24);
      if (v13 != v10 + 16 && *a4 >= 1) {
      LABEL_8:
        v14 = *(_QWORD*)(v13 + 24);
        v15 = 0;
        v16 = 28;
        while (1) {
          result = GameRoutine_5714e0(v14, *((_QWORD*)a4 + 1) + v16 - 28);
          if ((result & 1) != 0) {
            break;
          }
          ++v15;
          v16 += 40;
          if (v15 >= *a4) {
            goto LABEL_14;
          }
        }
        v17 = *((_QWORD*)a4 + 1);
        if (v17 != 0) {
          result = LayoutEx_57a480(
              v10, v14,
              *(float*)(*((_QWORD*)a4 + 2) + *(unsigned int*)(v17 + v16)));
        }
      LABEL_14:
        while (1) {
          v13 = *(_QWORD*)(v13 + 8);
          if (v13 == v10 + 16) {
            break;
          }
          if (*a4 >= 1) {
            goto LABEL_8;
          }
        }
      }
    }
  }
  return result;
}

__int64* LayoutEx_57a320(__int64 a1, __int64 a2, __int64 a3)
{
  __int64* result;
  __int64* v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  int v13;

  GameRoutine_57de00(a1, a3);
  *(_QWORD*)a2 = *(_QWORD*)(a1 + 8);
  *(_QWORD*)(a2 + 8) = a3 + 8;
  GameRoutine_57e180(a2 + 120);
  *(_QWORD*)(a2 + 160) = a2;
  *(_QWORD*)(a2 + 168) = a2 + 120;
  result =
      (__int64*)(*(__int64 (**)(__int64, __int64, _QWORD))GameData_2130eb0[0])(
          16, 4, *GameData_2136210);
  if (result != nullptr) {
    *result = (__int64)(GameData_2136238[0] + 2);
    result[1] = a2;
  }
  *(_QWORD*)(a2 + 208) = result;
  if (*(_WORD*)(a3 + 64) != 0) {
    v7 = (__int64*)(a2 + 16);
    v8 = 0;
    v9 = 0;
    do {
      result = (__int64*)GameRoutine_57e010(a1, *(_QWORD*)(a3 + 40) + v8);
      v10 = *result;
      ++v9;
      v8 += 128;
      *result = *v7;
      *(_QWORD*)(v10 + 8) = v7;
      *(_QWORD*)(*v7 + 8) = result;
      *v7 = v10;
    } while (v9 < *(unsigned __int16*)(a3 + 64));
  }
  if (*(_WORD*)(a3 + 66) != 0) {
    v11 = 0;
    v12 = 0;
    do {
      result =
          (__int64*)GameRoutine_5998c0(a2 + 160, *(_QWORD*)(a3 + 48) + v11);
      ++v12;
      v11 += 72;
    } while (v12 < *(unsigned __int16*)(a3 + 66));
  }
  v13 = *(unsigned __int16*)(a3 + 68);
  *(_QWORD*)(a2 + 192) = *(_QWORD*)(a3 + 56);
  *(_DWORD*)(a2 + 200) = v13;
  return result;
}

__int64 LayoutEx_57a480(__int64 a1, __int64 a2, float a3)
{
  __int64 result;
  float v7;
  __int64 v8;
  float v9;
  __int64 v10;
  __int64 i;
  __int64 v12;
  float v13;

  result = GameRoutine_599ae0(a1 + 160);
  if (result != 0) {
    v7 = *(float*)(GameRoutine_599ae0(a1 + 160) + 64);
    v13 = a3;
    v8 = GameRoutine_599b60(a1 + 160, a2);
    result = GameRoutine_59fe80(&v13, *(float*)(v8 + 48), *(float*)(v8 + 52));
    v9 = *(float*)(v8 + 64);
    if (v13 != v9) {
      *(float*)(v8 + 64) = v13;
      GameRoutine_599bc0(a1 + 160, v8 + 16, v8);
      v10 = v8 + 80;
      for (i = *(_QWORD*)(v8 + 88); i != v10; i = *(_QWORD*)(i + 8)) {
        GameRoutine_599b40(a1 + 160, i, v9, v13);
      }
      v12 = GameRoutine_599ae0(a1 + 160);
      result = *(_QWORD*)(a1 + 216);
      if (result != 0) {
        return (*(__int64 (**)(__int64, _QWORD, __int64, float, float))(
            *(_QWORD*)result + 32LL))(result, *(_QWORD*)(a1 + 8), a2, v7,
                                      *(float*)(v12 + 64));
      }
    }
  }
  return result;
}

__int64 LayoutEx_57ac40(__int64 a1)
{
  __int64 v1;

  v1 = *(unsigned int*)(a1 + 8);
  if ((int)v1 >= 1 && (int)v1 <= *GameData_2136230[0]) {
    return *(_QWORD*)(*(_QWORD*)a1 + 8 * v1 - 8);
  }
  else {
    return 0;
  }
}

__int64 LayoutEx_Unknown25(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 i;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v2 = *(_QWORD*)(result + 80);
  v3 = result + 72;
  for (i = result; v2 != v3; v2 = *(_QWORD*)(v2 + 8)) {
    result = (*(__int64 (**)(_QWORD, __int64))(**(_QWORD**)(v2 + 16) + 200LL))(
        *(_QWORD*)(v2 + 16), a2);
  }
  v6 = *(_QWORD*)(i + 88);
  if (v6 != 0 && *(_QWORD*)(v6 + 8) != 0 && *(int*)(v6 + 4) >= 1) {
    v7 = 0;
    do {
      v8 = *(_QWORD*)(*(_QWORD*)(v6 + 8) + 8 * v7);
      result = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v8 + 48LL))(v8, a2);
      v6 = *(_QWORD*)(i + 88);
      ++v7;
    } while (v7 < *(int*)(v6 + 4));
  }
  return result;
}

__int64 LayoutEx_57b130(__int64 a1, __int64 a2)
{
  return *(unsigned __int8*)(*(_QWORD*)a1 + 24LL) -
         (unsigned int)*(unsigned __int8*)(*(_QWORD*)a2 + 24LL);
}

__int64 LayoutEx_57b150(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                        __int64 a5, __int64 a6)
{
  __int64 v11;
  _QWORD v13[2];
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;

  v11 = 48LL * *GameData_2136218[0] + 8LL * *GameData_2136230[0] +
        24LL * *GameData_2136220[0] + 104LL * *GameData_2136228[0];
  memset((char*)v13 - ((v11 + 79) & 0xFFFFFFFFFFFFFFF0LL), 0, v11 + 64, a4, a5,
         a6);
  v16 = 0;
  v17 = 0;
  v14 = 0;
  v15 = 0;
  v13[0] = 0;
  v13[1] = 0;
  GameRoutine_57dd20(v13, (char*)v13 - ((v11 + 79) & 0xFFFFFFFFFFFFFFF0LL),
                     v11 + 64);
  LayoutEx_57b280(a1, a2, a3, a4, a5, v13);
  if (v16 != 0) {
    LayoutEx_579620((__int64)v13, a2);
    if (v16 != 0) {
      GameRoutine_57d420();
      v16 = 0;
    }
    v14 = 0;
    v13[0] = 0;
    v17 = 0;
  }
  return GameRoutine_57dd40(v13);
}

__int64 LayoutEx_57b5c0(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  result = (*(__int64 (**)(__int64, __int64, _QWORD))GameData_2130eb0[0])(
      64, 4, *GameData_2136210);
  if (result != 0) {
    v3 = result;
    AnimTransformBasic_56e6e0();
    v4 = *(_QWORD*)(v3 + 8);
    v6 = *(_QWORD*)(a1 + 8);
    v5 = a1 + 8;
    *(_QWORD*)(v3 + 8) = v6;
    *(_QWORD*)(v4 + 8) = v5;
    *(_QWORD*)(*(_QWORD*)v5 + 8LL) = v3 + 8;
    *(_QWORD*)v5 = v4;
    return v3;
  }
  return result;
}

__int64 LayoutEx_Unknown3(__int64 result, _QWORD* a2)
{
  __int64* v3;
  __int64 v4;

  if (a2 == (_QWORD*)result) {
    if (a2 == nullptr) {
      return result;
    }
  }
  else {
    v3 = (__int64*)a2[2];
    v4 = *v3;
    *(_QWORD*)(a2[1] + 8LL) = v3;
    *v3 = a2[1];
    *(_QWORD*)(v4 + 8) = a2 + 1;
    a2[1] = v4;
  }
  (*(void (**)(_QWORD*))(*a2 + 8LL))(a2);
  return ((__int64 (*)(_QWORD*, __int64))*GameData_2130eb8)(a2,
                                                            GameData_21a38a8);
}

_QWORD* LayoutEx_57b6d0(__int64 a1, __int64 a2, const char* a3, __int64 a4,
                        char a5)
{
  const char* v6;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64* v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
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
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;

  v6 = *(const char**)(a1 + 48);
  v34 = 0;
  v35 = 0;
  v32 = 0;
  v33 = 0;
  v30 = 0;
  v31 = 0;
  v28 = 0;
  v29 = 0;
  v26 = 0;
  v27 = 0;
  v24 = 0;
  v25 = 0;
  v22 = 0;
  v23 = 0;
  v20 = 0;
  v21 = 0;
  v19 = 0;
  nn_util_SNPrintf(&v19, 136, "%s_%s.bflan", v6, a3);
  v10 = (*(__int64 (**)(_QWORD, __int64, __int64*))(
      **(_QWORD**)(a1 + 64) + 80LL))(*(_QWORD*)(a1 + 64), 1634625901, &v19);
  AnimTransformBasic_570de0(&v19, v10);
  v11 = v20;
  if (v20 != 0) {
    v12 = (*(__int64 (**)(__int64, __int64, _QWORD))GameData_2130eb0[0])(
        80, 4, *GameData_2136210);
    v13 = (_QWORD*)v12;
    if (v12 != 0) {
      GameRoutine_582390(v12);
      v14 = GameData_21360d8[0];
      v13[9] = 0;
      *v13 = v14 + 2;
      v15 = v13[1];
      v17 = *(_QWORD*)(a1 + 8);
      v16 = (_QWORD*)(a1 + 8);
      v13[1] = v17;
      *(_QWORD*)(v15 + 8) = v16;
      *(_QWORD*)(*v16 + 8LL) = v13 + 1;
      *v16 = v15;
      (*(void (**)(_QWORD*, __int64, _QWORD, __int64))(*v13 + 64LL))(
          v13, a2, v16[7], v11);
    }
  }
  else {
    v13 = nullptr;
  }
  GameRoutine_5827d0(v13, a4, a5 & 1);
  return v13;
}

_QWORD* LayoutEx_57b8c0(__int64 a1, __int64 a2, const char* a3, __int64 a4,
                        char a5)
{
  const char* v6;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64* v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
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
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;

  v6 = *(const char**)(a1 + 48);
  v34 = 0;
  v35 = 0;
  v32 = 0;
  v33 = 0;
  v30 = 0;
  v31 = 0;
  v28 = 0;
  v29 = 0;
  v26 = 0;
  v27 = 0;
  v24 = 0;
  v25 = 0;
  v22 = 0;
  v23 = 0;
  v20 = 0;
  v21 = 0;
  v19 = 0;
  nn_util_SNPrintf(&v19, 136, "%s_%s.bflan", v6, a3);
  v10 = (*(__int64 (**)(_QWORD, __int64, __int64*))(
      **(_QWORD**)(a1 + 64) + 80LL))(*(_QWORD*)(a1 + 64), 1634625901, &v19);
  AnimTransformBasic_570de0(&v19, v10);
  v11 = v20;
  if (v20 != 0) {
    v12 = (*(__int64 (**)(__int64, __int64, _QWORD))GameData_2130eb0[0])(
        80, 4, *GameData_2136210);
    v13 = (_QWORD*)v12;
    if (v12 != 0) {
      GameRoutine_582390(v12);
      v14 = GameData_21360e0[0];
      v13[9] = 0;
      *v13 = v14 + 2;
      v15 = v13[1];
      v17 = *(_QWORD*)(a1 + 8);
      v16 = (_QWORD*)(a1 + 8);
      v13[1] = v17;
      *(_QWORD*)(v15 + 8) = v16;
      *(_QWORD*)(*v16 + 8LL) = v13 + 1;
      *v16 = v15;
      (*(void (**)(_QWORD*, __int64, _QWORD, __int64))(*v13 + 64LL))(
          v13, a2, v16[7], v11);
    }
  }
  else {
    v13 = nullptr;
  }
  GameRoutine_582840(v13, a4, a5 & 1);
  return v13;
}

_QWORD* LayoutEx_57ba20(__int64 a1, __int64 a2, const char* a3, unsigned int a4,
                        char a5)
{
  const char* v6;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64* v14;
  __int64 v15;
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
  __int64 v31;
  __int64 v32;
  __int64 v33;

  v6 = *(const char**)(a1 + 48);
  v32 = 0;
  v33 = 0;
  v30 = 0;
  v31 = 0;
  v28 = 0;
  v29 = 0;
  v26 = 0;
  v27 = 0;
  v24 = 0;
  v25 = 0;
  v22 = 0;
  v23 = 0;
  v20 = 0;
  v21 = 0;
  v18 = 0;
  v19 = 0;
  v17 = 0;
  nn_util_SNPrintf(&v17, 136, "%s_%s.bflan", v6, a3);
  v10 = (*(__int64 (**)(_QWORD, __int64, __int64*))(
      **(_QWORD**)(a1 + 64) + 80LL))(*(_QWORD*)(a1 + 64), 1634625901, &v17);
  v19 = 0;
  v20 = 0;
  v17 = 0;
  v18 = 0;
  AnimTransformBasic_570de0(&v17, v10);
  v11 = v18;
  if (v18 != 0) {
    v12 = (*(__int64 (**)(__int64, __int64, _QWORD))GameData_2130eb0[0])(
        80, 4, *GameData_2136210);
    v13 = (_QWORD*)v12;
    if (v12 != 0) {
      GameRoutine_582390(v12);
      v14 = GameData_21360e0[0];
      v13[9] = 0;
      *v13 = v14 + 2;
      v15 = v13[1];
      v13[1] = *(_QWORD*)(a1 + 8);
      *(_QWORD*)(v15 + 8) = a1 + 8;
      *(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) = v13 + 1;
      *(_QWORD*)(a1 + 8) = v15;
      (*(void (**)(_QWORD*, __int64, _QWORD, __int64))(*v13 + 64LL))(
          v13, a2, *(_QWORD*)(a1 + 64), v11);
    }
  }
  else {
    v13 = nullptr;
  }
  GameRoutine_5828b0(v13, &v17, *(_QWORD*)(a1 + 32), a4, a5 & 1);
  return v13;
}

__int64 LayoutEx_57bca0(__int64 a1, __int64 a2, const char* a3, unsigned int a4)
{
  const char* v5;
  __int64 v9;
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
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;

  v5 = *(const char**)(a1 + 48);
  v26 = 0;
  v27 = 0;
  v24 = 0;
  v25 = 0;
  v22 = 0;
  v23 = 0;
  v20 = 0;
  v21 = 0;
  v18 = 0;
  v19 = 0;
  v16 = 0;
  v17 = 0;
  v14 = 0;
  v15 = 0;
  v12 = 0;
  v13 = 0;
  v11 = 0;
  nn_util_SNPrintf(&v11, 136, "%s_%s.bflan", v5, a3);
  v9 = (*(__int64 (**)(_QWORD, __int64, __int64*))(
      **(_QWORD**)(a1 + 64) + 80LL))(*(_QWORD*)(a1 + 64), 1634625901, &v11);
  v13 = 0;
  v14 = 0;
  v11 = 0;
  v12 = 0;
  AnimTransformBasic_570de0(&v11, v9);
  return (*(__int64 (**)(__int64, __int64, const char*, __int64*, _QWORD))(
      *(_QWORD*)a1 + 160LL))(a1, a2, a3, &v11, a4);
}

_QWORD* LayoutEx_Unknown19(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4,
                           char a5)
{
  __int64 v5;
  __int64 v10;
  _QWORD* v11;
  __int64* v12;
  __int64 v13;

  v5 = *(_QWORD*)(a4 + 8);
  if (v5 != 0) {
    v10 = (*(__int64 (**)(__int64, __int64, _QWORD))GameData_2130eb0[0])(
        80, 4, *GameData_2136210);
    v11 = (_QWORD*)v10;
    if (v10 != 0) {
      GameRoutine_582390(v10);
      v12 = GameData_21360e0[0];
      v11[9] = 0;
      *v11 = v12 + 2;
      v13 = v11[1];
      v11[1] = a1[1];
      *(_QWORD*)(v13 + 8) = a1 + 1;
      *(_QWORD*)(a1[1] + 8LL) = v11 + 1;
      a1[1] = v13;
      (*(void (**)(_QWORD*, __int64, _QWORD, __int64))(*v11 + 64LL))(v11, a2,
                                                                     a1[8], v5);
    }
  }
  else {
    v11 = nullptr;
  }
  GameRoutine_5828b0(v11, a4, a1[4], 0, a5 & 1);
  return v11;
}

__int64 LayoutEx_Unknown4(__int64 result, __int64 a2)
{
  __int64 v2;

  v2 = *(_QWORD*)(result + 24);
  if (v2 != 0) {
    return (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)a2 + 80LL))(
        a2, v2, 1);
  }
  return result;
}

__int64 LayoutEx_Unknown5(__int64 a1, __int64 a2)
{
  return (*(__int64 (**)(__int64))(*(_QWORD*)a2 + 136LL))(a2);
}

__int64 LayoutEx_Unknown6(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 i;
  __int64 v5;
  __int64 v6;

  v2 = *(_QWORD*)(result + 16);
  for (i = result + 8; v2 != i; v2 = *(_QWORD*)(v5 + 16)) {
    v6 = *(_QWORD*)(v2 - 8);
    v5 = v2 - 8;
    result = (*(__int64 (**)(__int64, __int64))(v6 + 112))(v5, a2);
  }
  return result;
}

__int64 LayoutEx_Unknown7(__int64 result)
{
  __int64 v1;
  __int64 i;
  __int64 v3;
  __int64 v4;

  v1 = *(_QWORD*)(result + 16);
  for (i = result + 8; v1 != i; v1 = *(_QWORD*)(v3 + 16)) {
    v4 = *(_QWORD*)(v1 - 8);
    v3 = v1 - 8;
    result = (*(__int64 (**)(__int64))(v4 + 136))(v3);
  }
  return result;
}

__int64 LayoutEx_Unknown8(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  unsigned __int16 v8;
  unsigned __int16 v9;
  __int64 v10;
  int v11;
  __int64 v12;
  unsigned int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  char v18;
  int v19;
  __int64 v20;
  unsigned __int16 v22;
  unsigned __int16 v23;
  __int64 v24;
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
  char v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 i;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  int v52;
  __int64 v53;
  unsigned __int16 v54;
  __int64 v55;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;

  if (*(_QWORD*)(a1 + 24) != 0 && *(_QWORD*)(a3 + 8) != 0 &&
      (v5 = (*(__int64 (**)(__int64, __int64, _QWORD))GameData_2130eb0[0])(
           64, 4, *GameData_2136210)) != 0) {
    v6 = (_QWORD*)v5;
    AnimTransformBasic_56e6e0();
    v7 = v6[1];
    v6[1] = *(_QWORD*)(a1 + 8);
    *(_QWORD*)(v7 + 8) = a1 + 8;
    *(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) = v6 + 1;
    *(_QWORD*)(a1 + 8) = v7;
    v8 = AnimTransformBasic_570f40(a3);
    v9 = v8;
    if (v8 != 0) {
      v54 = v8;
      v10 = v8;
      v11 = 1;
      v12 = AnimTransformBasic_570f60(a3);
      v13 = 0;
      v14 = v12;
      v15 = v10;
      do {
        while (1) {
          v16 = GameRoutine_578d60(*(_QWORD*)(a1 + 32), v14);
          if (v16 != 0) {
            break;
          }
          v11 = 0;
          v14 += 36;
          if (--v15 == 0) {
            goto LABEL_9;
          }
        }
        v17 = v16;
        v18 = AnimTransformBasic_570f80(a3);
        v13 += AnimTransformBasic_570fe0(a3, v17, v18 & 1);
        v14 += 36;
        --v15;
      } while (v15 != 0);
    LABEL_9:
      (*(void (**)(_QWORD*, __int64, _QWORD, _QWORD, _QWORD))(*v6 + 72LL))(
          v6, a2, *(_QWORD*)(a1 + 64), *(_QWORD*)(a3 + 8), v13);
      v19 = v11;
      v9 = v54;
      do {
        v20 = GameRoutine_578d60(*(_QWORD*)(a1 + 32), v12);
        if (v20 != 0) {
          GameRoutine_59ee00(v6, v20, 0);
        }
        v12 += 36;
        --v10;
      } while (v10 != 0);
    }
    else {
      (*(void (**)(_QWORD*, __int64, _QWORD, _QWORD, _QWORD))(*v6 + 72LL))(
          v6, a2, *(_QWORD*)(a1 + 64), *(_QWORD*)(a3 + 8),
          *(unsigned __int16*)(*(_QWORD*)(a3 + 8) + 14LL));
      v19 = 1;
      (*(void (**)(_QWORD, _QWORD*, __int64, _QWORD))(
          **(_QWORD**)(a1 + 24) + 152LL))(*(_QWORD*)(a1 + 24), v6, 1, 0);
    }
    v22 = AnimTransformBasic_570fa0(a3);
    if (v22 != 0) {
      v23 = v22;
      v24 = AnimTransformBasic_570fc0(a3);
      v25 = v23;
      v26 = v24;
      v53 = v23;
      if (v9 != 0) {
        v27 = 0;
        v51 = v24;
        v55 = v9;
        while (1) {
          v28 = (*(__int64 (**)(_QWORD, __int64, __int64))(
              **(_QWORD**)(a1 + 24) + 120LL))(*(_QWORD*)(a1 + 24),
                                              v26 + 52 * v27, 1);
          if (v28 != 0) {
            v29 = v28;
            v70 = 0;
            v71 = 0;
            v68 = 0;
            v69 = 0;
            v66 = 0;
            v67 = 0;
            v64 = 0;
            v65 = 0;
            v62 = 0;
            v63 = 0;
            v60 = 0;
            v61 = 0;
            v58 = 0;
            v59 = 0;
            v57 = 0;
            AnimTransformBasic_5710f0(&v57, v28, a3);
            if ((_WORD)v71 == 0) {
              goto LABEL_20;
            }
            v30 = GameRoutine_578d60(*(_QWORD*)(a1 + 32), v26 + 52 * v27 + 25);
            if (v30 != 0) {
              v31 = *(_QWORD*)(v30 + 32);
              v32 = v30 + 24;
              if (v31 != v30 + 24) {
                v52 = v19;
                do {
                  if (*(_QWORD*)(v31 + 16) != v29) {
                    v33 = *(_QWORD*)(a1 + 32);
                    v34 = AnimTransformBasic_570f60(a3);
                    v35 = AnimTransformBasic_570f80(a3);
                    v36 = *(_QWORD*)(v31 + 16);
                    v37 = 0;
                    if ((v35 & 1) != 0) {
                      while (1) {
                        v38 = GameRoutine_578d60(v33, v34 + 36 * v37);
                        v39 = *(_QWORD*)(v38 + 32);
                        if (v39 != v38 + 24) {
                          break;
                        }
                      LABEL_37:
                        if (++v37 == v55) {
                          goto LABEL_27;
                        }
                      }
                      while (1) {
                        v40 = *(_QWORD*)(v39 + 16);
                        if (v40 == v36) {
                          break;
                        }
                        v41 = v36;
                        while (1) {
                          v41 = *(_QWORD*)(v41 + 24);
                          if (v41 == 0) {
                            break;
                          }
                          if (v40 == v41) {
                            goto LABEL_26;
                          }
                        }
                        v39 = *(_QWORD*)(v39 + 8);
                        if (v39 == v38 + 24) {
                          goto LABEL_37;
                        }
                      }
                    }
                    else {
                      while (1) {
                        v42 = GameRoutine_578d60(v33, v34 + 36 * v37);
                        v43 = *(_QWORD*)(v42 + 32);
                        if (v43 != v42 + 24) {
                          break;
                        }
                      LABEL_42:
                        if (++v37 == v55) {
                          goto LABEL_27;
                        }
                      }
                      while (*(_QWORD*)(v43 + 16) != v36) {
                        v43 = *(_QWORD*)(v43 + 8);
                        if (v43 == v42 + 24) {
                          goto LABEL_42;
                        }
                      }
                    }
                  LABEL_26:
                    AnimTransformBasic_571340(&v57, a2, a1,
                                              *(_QWORD*)(v31 + 16),
                                              *(_QWORD*)(a1 + 64));
                  }
                LABEL_27:
                  v31 = *(_QWORD*)(v31 + 8);
                } while (v31 != v32);
                v19 = v52;
                v26 = v51;
                v25 = v53;
              }
              goto LABEL_20;
            }
          }
          v19 = 0;
        LABEL_20:
          if (++v27 == v25) {
            return v19 & 1;
          }
        }
      }
      for (i = 0; i != v25; ++i) {
        v45 = (*(__int64 (**)(_QWORD, __int64, __int64))(
            **(_QWORD**)(a1 + 24) + 120LL))(*(_QWORD*)(a1 + 24), v26 + 52 * i,
                                            1);
        if (v45 != 0) {
          v46 = v45;
          v70 = 0;
          v71 = 0;
          v68 = 0;
          v69 = 0;
          v66 = 0;
          v67 = 0;
          v64 = 0;
          v65 = 0;
          v62 = 0;
          v63 = 0;
          v60 = 0;
          v61 = 0;
          v58 = 0;
          v59 = 0;
          v57 = 0;
          AnimTransformBasic_5710f0(&v57, v45, a3);
          if ((_WORD)v71 == 0) {
            continue;
          }
          v47 = GameRoutine_578d60(*(_QWORD*)(a1 + 32), v26 + 52 * i + 25);
          if (v47 != 0) {
            v48 = *(_QWORD*)(v47 + 32);
            v49 = v47 + 24;
            while (v48 != v49) {
              v50 = *(_QWORD*)(v48 + 16);
              if (v50 != v46) {
                AnimTransformBasic_571340(&v57, a2, a1, v50,
                                          *(_QWORD*)(a1 + 64));
              }
              v48 = *(_QWORD*)(v48 + 8);
            }
            v25 = v53;
            continue;
          }
        }
        LOBYTE(v19) = 0;
      }
    }
  }
  else {
    LOBYTE(v19) = 0;
  }
  return v19 & 1;
}

__int64 LayoutEx_Unknown12(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result;
  _DWORD* v7;
  __int64 v8;
  __int64 i;
  __int64 v10;

  result = *(_QWORD*)(a1 + 24);
  if (result != 0) {
    result = (*(__int64 (**)(__int64, __int64, __int64))(
        *(_QWORD*)result + 176LL))(result, a2, a3);
  }
  v7 = *(_DWORD**)(a1 + 88);
  if (v7 != nullptr) {
    v8 = (unsigned int)(v7[1] + *v7);
    if ((int)v8 >= 1) {
      for (i = 0; i != v8; ++i) {
        v10 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 88) + 8LL) + 8 * i);
        result = (*(__int64 (**)(__int64, __int64, __int64))(
            *(_QWORD*)v10 + 32LL))(v10, a2, a3);
      }
    }
  }
  return result;
}

__int64 LayoutEx_Unknown13(__int64 a1, __int64 a2)
{
  __int64 result;
  _DWORD* v5;
  __int64 v6;
  __int64 i;
  __int64 v8;

  result = *(_QWORD*)(a1 + 24);
  if (result != 0) {
    result = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)result + 192LL))(
        result, a2);
  }
  v5 = *(_DWORD**)(a1 + 88);
  if (v5 != nullptr) {
    v6 = (unsigned int)(v5[1] + *v5);
    if ((int)v6 >= 1) {
      for (i = 0; i != v6; ++i) {
        v8 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 88) + 8LL) + 8 * i);
        result =
            (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v8 + 40LL))(v8, a2);
      }
    }
  }
  return result;
}

__int64* LayoutEx_57ca20(__int64* result, __int64 a2)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64* i;
  unsigned int* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  atomic_uchar* v10;
  __int64* v11;
  float* v12;
  __int64 v14;

  if (result[3] != 0) {
    v2 = (_QWORD*)result[10];
    v3 = result + 9;
    for (i = result; v2 != v3; v2 = (_QWORD*)v2[1]) {
      result = (__int64*)LayoutEx_57ca20(v2[2], a2);
    }
    v6 = (unsigned int*)i[11];
    if (v6 != nullptr) {
      v7 = *v6;
      if ((int)v7 >= 1) {
        v8 = (int)v6[1];
        v9 = 0;
        v10 = (atomic_uchar*)GameData_21361a8;
        v11 = GameData_21361b0;
        do {
          v12 = *(float**)(*(_QWORD*)(i[11] + 8) + 8 * v9 + 8 * v8);
          if ((atomic_load_explicit(v10, memory_order_acquire) & 1) == 0) {
            result = (__int64*)__cxa_guard_acquire(v10);
            if ((_DWORD)result != 0) {
              *v11 =
                  nn_ui2d_detail_DynamicRenderingTexture_GetRuntimeTypeInfoStatic();
              result = (__int64*)__cxa_guard_release(v10, v14);
            }
          }
          if (v12 != nullptr) {
            result = (__int64*)(**(__int64 (***)(float*))v12)(v12);
            if (result == v11) {
              goto LABEL_17;
            }
            do {
              result = (__int64*)*result;
            } while (result != v11 && result != nullptr);
            if (result != nullptr) {
            LABEL_17:
              result = (__int64*)(*(__int64 (**)(float*))(*(_QWORD*)v12 +
                                                          64LL))(v12);
              if (result != nullptr) {
                result = (__int64*)Pane_58f850(result);
                if (result != nullptr) {
                  result = (__int64*)GameRoutine_594140(result, a2, i, v12[10]);
                }
              }
            }
          }
          ++v9;
        } while (v9 != v7);
      }
    }
  }
  return result;
}

__int64 LayoutEx_Unknown14(__int64 result, __int64 a2, __int64 a3)
{
  __int64 v4;

  if (*(_QWORD*)(result + 24) != 0) {
    v4 = result;
    DrawInfo_5768c0(a2, result);
    (*(void (**)(_QWORD, __int64, __int64))(**(_QWORD**)(v4 + 24) + 216LL))(
        *(_QWORD*)(v4 + 24), a2, a3);
    return GameRoutine_5768e0(a2);
  }
  return result;
}

__int64 LayoutEx_Unknown9(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 i;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 j;

  v1 = *(_QWORD*)(result + 16);
  v2 = result + 8;
  for (i = result; v1 != v2; v1 = *(_QWORD*)(v4 + 16)) {
    v5 = *(_QWORD*)(v1 - 8);
    v4 = v1 - 8;
    result = (*(__int64 (**)(__int64))(v5 + 40))(v4);
  }
  v6 = i + 72;
  for (j = *(_QWORD*)(i + 80); j != v6; j = *(_QWORD*)(j + 8)) {
    result = (*(__int64 (**)(_QWORD))(**(_QWORD**)(j + 16) + 72LL))(
        *(_QWORD*)(j + 16));
  }
  return result;
}

__int64 LayoutEx_Unknown10(__int64 result, float a2)
{
  __int64 v2;
  __int64 v4;
  __int64 i;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 j;

  v2 = *(_QWORD*)(result + 16);
  v4 = result + 8;
  for (i = result; v2 != v4; v2 = *(_QWORD*)(v6 + 16)) {
    v7 = *(_QWORD*)(v2 - 8);
    v6 = v2 - 8;
    result = (*(__int64 (**)(__int64, float))(v7 + 24))(v6, a2);
  }
  v8 = i + 72;
  for (j = *(_QWORD*)(i + 80); j != v8; j = *(_QWORD*)(j + 8)) {
    result = (*(__int64 (**)(_QWORD, float))(**(_QWORD**)(j + 16) + 80LL))(
        *(_QWORD*)(j + 16), a2);
  }
  return result;
}

__int64 LayoutEx_Unknown11(__int64 result, float a2)
{
  __int64 v2;
  __int64 v4;
  __int64 i;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 j;

  v2 = *(_QWORD*)(result + 16);
  v4 = result + 8;
  for (i = result; v2 != v4; v2 = v6[2]) {
    v7 = *(_QWORD*)(v2 - 8);
    v6 = (_QWORD*)(v2 - 8);
    (*(void (**)(_QWORD*))(v7 + 40))(v6);
    result = (*(__int64 (**)(_QWORD*, float))(*v6 + 24LL))(v6, a2);
  }
  v8 = i + 72;
  for (j = *(_QWORD*)(i + 80); j != v8; j = *(_QWORD*)(j + 8)) {
    result = (*(__int64 (**)(_QWORD, float))(**(_QWORD**)(j + 16) + 88LL))(
        *(_QWORD*)(j + 16), a2);
  }
  return result;
}

__int64 LayoutEx_57cf40(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;

  v2 = *(_QWORD*)(a1 + 80);
  v3 = a1 + 72;
  if (v2 == a1 + 72) {
    return 0;
  }
  while ((GameRoutine_5714e0(a2, v2 - 40) & 1) == 0) {
    v2 = *(_QWORD*)(v2 + 8);
    if (v2 == v3) {
      return 0;
    }
  }
  return v2 - 216;
}

__int64 LayoutEx_57cfc0(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;

  v2 = *(_QWORD*)(a1 + 80);
  v3 = a1 + 72;
  if (v2 == a1 + 72) {
    return 0;
  }
  while ((GameRoutine_5714e0(a2, v2 - 40) & 1) == 0) {
    v2 = *(_QWORD*)(v2 + 8);
    if (v2 == v3) {
      return 0;
    }
  }
  return v2 - 216;
}

__int64 LayoutEx_57d060(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  int v4;
  int v5;
  _DWORD* v6;

  v1 = *(_QWORD*)(a1 + 80);
  v2 = a1 + 72;
  if (v1 == a1 + 72) {
    v4 = 0;
    v6 = *(_DWORD**)(a1 + 88);
    if (v6 == nullptr) {
      return (unsigned int)((_DWORD)v6 + v4);
    }
    goto LABEL_5;
  }
  v4 = 0;
  do {
    v5 = LayoutEx_57d060(*(_QWORD*)(v1 + 16));
    v1 = *(_QWORD*)(v1 + 8);
    v4 += v5;
  } while (v1 != v2);
  v6 = *(_DWORD**)(a1 + 88);
  if (v6 != nullptr) {
  LABEL_5:
    LODWORD(v6) = *v6;
  }
  return (unsigned int)((_DWORD)v6 + v4);
}

__int64 LayoutEx_Unknown21()
{
  return (*(__int64 (**)(__int64))(*(_QWORD*)GameData_21a38b0 + 16LL))(
      GameData_21a38b0);
}

_QWORD* LayoutEx_57d100()
{
  _QWORD* result;
  _QWORD* v1;

  result =
      (_QWORD*)(*(__int64 (**)(__int64, __int64, _QWORD))GameData_2130eb0[0])(
          96, 4, *GameData_2136210);
  if (result != nullptr) {
    v1 = result;
    GameRoutine_579200(result);
    return v1;
  }
  return result;
}

__int64 LayoutEx_Unknown16(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                           __int64 a5, __int64 a6, __int64 a7)
{
  char v9;

  v9 = LayoutEx_57a5a0(a1, a2, a3, a4, a5, a6, a7);
  if ((v9 & 1) != 0) {
    (*(void (**)(__int64, __int64))(*(_QWORD*)a1 + 224LL))(a1, a3);
  }
  return v9 & 1;
}

__int64 LayoutEx_Unknown18(__int64 a1)
{
  __int64 v1;
  __int64 result;
  __int64 v3;

  v1 = *(_QWORD*)(a1 + 96);
  result = GameRoutine_579180(136);
  if (result != 0) {
    v3 = result;
    GameRoutine_584070(result, v1);
    return v3;
  }
  return result;
}

__int64 LayoutEx_Unknown28(__int64 a1, __int64 a2)
{
  __int64 result;

  if (LayoutEx_57b830(a1, "In") != 0) {
    *(_QWORD*)(a1 + 104) = LayoutEx_584420(a1, a2, "In", 0);
    *(_DWORD*)(a1 + 128) = 0;
  }
  if (LayoutEx_57b830(a1, "Out") != 0) {
    *(_QWORD*)(a1 + 112) = LayoutEx_584420(a1, a2, "Out", 0);
  }
  result = LayoutEx_57b830(a1, "Loop");
  if (result != 0) {
    result = LayoutEx_584420(a1, a2, "Loop", 0);
    *(_QWORD*)(a1 + 120) = result;
  }
  return result;
}

__int64 LayoutEx_5842c0(__int64 result, char a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 i;

  v2 = *(_QWORD*)(result + 120);
  v4 = result;
  if (v2 != 0) {
    result = GameRoutine_56e690(*(_QWORD*)(result + 120), 0);
    *(_DWORD*)(v2 + 60) = 0;
  }
  if ((a2 & 1) != 0) {
    v5 = v4 + 72;
    for (i = *(_QWORD*)(v4 + 80); i != v5; i = *(_QWORD*)(i + 8)) {
      result = LayoutEx_5842c0(*(_QWORD*)(i + 16), 1);
    }
  }
  return result;
}

__int64 LayoutEx_Unknown27(__int64 result, __int64 a2)
{
  __int64 v3;
  float v4;
  float v5;
  int v6;

  v3 = result;
  if (a2 == *(_QWORD*)(result + 112)) {
    v4 = *(float*)(a2 + 32);
    result = GameRoutine_56e670(a2);
    if (v4 == (float)(unsigned __int16)result) {
      goto LABEL_7;
    }
  }
  if (a2 != *(_QWORD*)(v3 + 104)) {
    return result;
  }
  v5 = *(float*)(a2 + 32);
  if (v5 == 0.0) {
  LABEL_7:
    v6 = *(_DWORD*)(v3 + 128);
    if (v6 == 0) {
      return LayoutEx_5842c0(v3, *(_QWORD*)(*(_QWORD*)(v3 + 24) + 24LL) != 0);
    }
    if (v6 == 3) {
      *(_DWORD*)(v3 + 128) = 0;
      return LayoutEx_5842c0(v3, *(_QWORD*)(*(_QWORD*)(v3 + 24) + 24LL) != 0);
    }
  }
  else {
    result = GameRoutine_56e670(a2);
    if (v5 == (float)(unsigned __int16)result && *(_DWORD*)(v3 + 128) == 1) {
      *(_DWORD*)(v3 + 128) = 2;
    }
  }
  return result;
}

_QWORD* LayoutEx_584420(_QWORD* a1, __int64 a2, const char* a3, char a4)
{
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;

  v7 = LayoutEx_57b830((__int64)a1, a3);
  if (v7 == 0) {
    return nullptr;
  }
  v14 = 0;
  v15 = 0;
  v12 = 0;
  v13 = 0;
  AnimTransformBasic_570de0(&v12, v7);
  v8 = v13;
  v9 = (_QWORD*)GameRoutine_579180(112);
  GameRoutine_584780();
  v10 = v9[1];
  v9[1] = a1[1];
  *(_QWORD*)(v10 + 8) = a1 + 1;
  *(_QWORD*)(a1[1] + 8LL) = v9 + 1;
  a1[1] = v10;
  (*(void (**)(_QWORD*, __int64, _QWORD, __int64))(*v9 + 64LL))(v9, a2, a1[8],
                                                                v8);
  AnimatorEx_584880(v9, &v12, a1, a1[4], a4 & 1);
  return v9;
}

__int64 LayoutEx_Unknown26(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  float v5;
  float v6;
  float v7;
  float v8;
  float v9;
  float v10;

  v1 = *(_QWORD*)(result + 104);
  v2 = result;
  if (*(float*)(v1 + 60) != 0.0) {
    goto LABEL_2;
  }
  if (v1 != *(_QWORD*)(result + 112)) {
    goto LABEL_6;
  }
  v8 = *(float*)(v1 + 32);
  result = GameRoutine_56e670(*(_QWORD*)(result + 104));
  if (v8 != (float)(unsigned __int16)result) {
    if (v1 != *(_QWORD*)(v2 + 104)) {
      goto LABEL_2;
    }
  LABEL_6:
    v5 = *(float*)(v1 + 32);
    result = GameRoutine_56e670(v1);
    if (v5 == (float)(unsigned __int16)result && *(_DWORD*)(v2 + 128) == 1) {
      *(_DWORD*)(v2 + 128) = 2;
    }
    goto LABEL_2;
  }
  if (*(_DWORD*)(v2 + 128) == 3) {
    *(_DWORD*)(v2 + 128) = 0;
  }

LABEL_2:
  v3 = *(_QWORD*)(v2 + 112);
  if (*(float*)(v3 + 60) == 0.0) {
    v6 = *(float*)(v3 + 32);
    result = GameRoutine_56e670(*(_QWORD*)(v2 + 112));
    if (v6 == (float)(unsigned __int16)result) {
      if (*(_DWORD*)(v2 + 128) == 3) {
        *(_DWORD*)(v2 + 128) = 0;
      }
    }
    else if (v3 == *(_QWORD*)(v2 + 104)) {
      v9 = *(float*)(v3 + 32);
      result = GameRoutine_56e670(v3);
      if (v9 == (float)(unsigned __int16)result && *(_DWORD*)(v2 + 128) == 1) {
        *(_DWORD*)(v2 + 128) = 2;
      }
    }
  }
  v4 = *(_QWORD*)(v2 + 120);
  if (*(float*)(v4 + 60) == 0.0) {
    if (v4 == *(_QWORD*)(v2 + 112) &&
        (v10 = *(float*)(v4 + 32),
         result = GameRoutine_56e670(*(_QWORD*)(v2 + 120)),
         v10 == (float)(unsigned __int16)result)) {
      if (*(_DWORD*)(v2 + 128) == 3) {
        *(_DWORD*)(v2 + 128) = 0;
      }
    }
    else if (v4 == *(_QWORD*)(v2 + 104)) {
      v7 = *(float*)(v4 + 32);
      result = GameRoutine_56e670(v4);
      if (v7 == (float)(unsigned __int16)result && *(_DWORD*)(v2 + 128) == 1) {
        *(_DWORD*)(v2 + 128) = 2;
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
