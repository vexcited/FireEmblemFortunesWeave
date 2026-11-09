#include "decomp/pseudo_helpers.h"
#pragma GCC visibility push(hidden)
struct PseudoSret {
  _QWORD words[3];
};

extern _DWORD SdkData_c77c90[5];
extern _DWORD SdkData_c77cf4[5];
extern __int64 (*SdkData_e76690[])();
extern __int64 SdkData_e88a90;
extern __int64 SdkData_e88ab0;
extern __int64* SdkData_e89a68[5];
extern _UNKNOWN* SdkData_e89ba0;
extern __int64 SdkData_f65e38;
void __attribute__((noreturn)) SdkRoutine_2b2f80(void);
__int64 SdkRoutine_5e7d80(_QWORD, _QWORD, _QWORD, _QWORD);
struct PseudoSret SdkRoutine_61cee0(void);
__int64 SdkRoutine_624080(_QWORD, _QWORD);
__int64 SdkRoutine_6321d0(__int64, _DWORD*, __int64);
__int64 SdkRoutine_644cf0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_644da0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_6496b0(_QWORD, _QWORD);
__int64 SdkRoutine_6496c0(_QWORD);
__int64 SdkRoutine_6496d0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_649720(_QWORD, _QWORD);
_QWORD* SdkRoutine_64b0b0(_QWORD* result, __int64, __int64, __int64);
__int64 SdkRoutine_64b2a0(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_64b3b0(_QWORD);
__int64 SdkRoutine_64b750(__int64 result, __int64, __int64);
__int64 SdkRoutine_64d350(__int64 result, __int64*, __int64*, int, int, int,
                          int, int, int);
__int64 SdkRoutine_65a950(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD);
__int64 SdkRoutine_65d380(_QWORD);
__int64 SdkRoutine_65f400(__int64, int, int, char, char);
__int64 SdkRoutine_664890(_QWORD);
__int64 SdkRoutine_666b40(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_66a6d0(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_66eaa0(_QWORD);
__int64 SdkRoutine_856130(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_858d40(_QWORD);
__int64 SdkRoutine_858d50(_QWORD);
__int64 SdkRoutine_858db0(_QWORD);
__int64 SdkRoutine_86d7a0(_QWORD, _QWORD);
__int64 SdkRoutine_86d7f0(_QWORD, _QWORD);
__int64 SdkRoutine_86d850(_QWORD);
__int64 SdkRoutine_86d900(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_86d9f0(_QWORD);
__int64 SdkRoutine_86da00(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_86da20(_QWORD);
__int64 SdkRoutine_86da90(_QWORD, _QWORD);
__int64 SdkRoutine_86dab0(_QWORD);
__int64 SdkRoutine_86dba0(_QWORD, _QWORD);
__int64 SdkRoutine_86dd70(_QWORD, _QWORD);
struct PseudoSret SdkRoutine_86dde0(_QWORD);
__int64 SdkRoutine_86de40(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_86de60(_QWORD, _QWORD);
__int64 SdkRoutine_86de90(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_86e140(_QWORD);
__int64 SdkRoutine_86e160(_QWORD, _QWORD);
__int64 SdkRoutine_86e190(_QWORD, _QWORD);
__int64 SdkRoutine_86e1b0(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_86e490(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_86e620(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_86e860(_QWORD);
__int64 SdkRoutine_86ea50(_QWORD, _QWORD);
__int64 SdkRoutine_86f160(_QWORD);
__int64 SdkRoutine_86f290(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_86f390(_QWORD);
__int64 SdkRoutine_870190(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_8702b0(void);
__int64 SdkRoutine_8702c0(_QWORD);
__int64 SdkRoutine_8702d0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_8702e0(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_8702f0(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_870300(_QWORD, _QWORD);
__int64 SdkRoutine_870310(_QWORD);
struct PseudoSret SdkRoutine_8704e0(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_870640(_QWORD, _QWORD);
__int64 SdkRoutine_870760(_QWORD);
__int64 SdkRoutine_870780(_QWORD, _QWORD);
__int64 SdkRoutine_870790(_QWORD);
__int64 SdkRoutine_8707a0(_QWORD, _QWORD);
__int64 SdkRoutine_8707b0(_QWORD, _QWORD);
struct PseudoSret SdkRoutine_8707c0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_8707d0(_QWORD);
__int64 SdkRoutine_874b90(_QWORD);
__int64 SdkRoutine_874d30(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_874dd0(_QWORD);
__int64 SdkRoutine_874e00(_QWORD);
struct PseudoSret SdkRoutine_874f70(_QWORD);
__int64 SdkRoutine_875b00(_QWORD);
__int64 SdkRoutine_875b30(_QWORD);

__int64* SdkHr_4ecaf0(__int64* a1)
{
  __int64 v1;
  __int64 v3;
  __int64* result;
  __int64 v5;
  __int64 v6;

  v1 = *a1;
  *a1 = 0;
  if (v1 != 0) {
    v3 = a1[6];
    v6 = v1;
    if (v3 == 0) {
      SdkRoutine_2b2f80();
    }
    (*(void (**)(__int64, __int64*))(*(_QWORD*)v3 + 48LL))(v3, &v6);
  }
  result = (__int64*)a1[6];
  if (result == a1 + 2) {
    v5 = 32;
  }
  else {
    if (result == nullptr) {
      return result;
    }
    v5 = 40;
  }
  return (__int64*)(*(__int64 (**)(__int64))(*result + v5))((__int64)result);
}

__int64 SdkHr_522a60(__int64 a1, _QWORD* a2)
{
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  int v8;
  int v9;
  int v10;
  __int64 v11;
  char v12;
  int v13;
  char v14;
  int v15;
  __int64 v16;
  char v17;
  int v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  int v22;
  __int64 v23;
  __int64 v24;
  unsigned __int64 i;
  __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  unsigned __int64* v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  __int64* v34;
  __int64 v35;
  int v36;
  int v37;
  __int64 v38;
  int v40;
  __int64 v41;
  _QWORD v42[3];
  __int64 v43;
  __int64 v44;
  _QWORD v45[2];
  __int64 v46;
  _QWORD v47[3];
  __int64 v48;
  __int64 v49;
  unsigned __int64 v50;
  _QWORD v51[3];

  memset(v47, 0, sizeof(v47));
  SdkRoutine_86d9f0(v47);
  SdkRoutine_86da00(*a2, "uri", v47);
  SdkRoutine_86dba0(&v48, v47);
  v51[0] = 0;
  v4 = SdkRoutine_86e190(a1 + 592, &v48);
  if (v51[0] != 0) {
    SdkRoutine_86d7a0(v51[0], v51);
  }
  SdkRoutine_86da20(&v48);
  if ((v4 & 0x8000000000000000LL) == 0) {
    SdkRoutine_86dd70(
        *(_QWORD*)(a1 + 584),
        *(unsigned int*)(*(_QWORD*)(*(_QWORD*)(a1 + 600) + 48 * v4 + 24) +
                         16LL));
    SdkRoutine_86e1b0(a1 + 592, v4, 1);
    v5 = *a2;
    v6 = (_QWORD*)(a1 + 536);
    SdkRoutine_86de90(v5, "playlist", a1 + 536);
    if (*(_QWORD*)(a1 + 536) != 0) {
      if ((SdkRoutine_8702b0() & 1) != 0) {
        v51[0] = 0;
        v51[1] = 0;
        v49 = 0;
        v50 = 0;
        v48 = 0;
        SdkRoutine_86e620(&v48, 32, 0);
        v7 = *v6;
        v48 = SdkData_e88a90 + 16;
        if (SdkRoutine_8702c0(v7) != 0) {
          v8 = 0;
          v9 = 0;
          v10 = 0;
          v11 = 0;
          while (1) {
            v46 = 0;
            v45[0] = 0;
            v43 = 0;
            v44 = v11;
            memset(v42, 0, sizeof(v42));
            v45[1] = -1;
            SdkRoutine_86d9f0(v42);
            SdkRoutine_8702d0(*v6, v11, v42, &v43);
            SdkRoutine_86d900(v43, "bandwidth", v45);
            v41 = 0;
            v12 = SdkRoutine_86d900(v43, "width", (char*)&v41 + 4);
            v13 = HIDWORD(v41);
            if (v8 > SHIDWORD(v41)) {
              v13 = v8;
            }
            if ((v12 & 1) != 0) {
              v8 = v13;
            }
            v14 = SdkRoutine_86d900(v43, "height", &v41);
            if (v9 <= (int)v41) {
              v15 = v41;
            }
            else {
              v15 = v9;
            }
            if ((v14 & 1) != 0) {
              v9 = v15;
            }
            v46 = SHIDWORD(v41) * (__int64)(int)v41;
            SdkRoutine_86ea50(a1 + 464, &v44);
            if ((SdkRoutine_8702e0(*v6, v11, "video") & 1) != 0) {
              SdkRoutine_86ea50(&v48, &v44);
              if ((SdkRoutine_8702f0(*v6, v11, "audio") & 1) == 0) {
              LABEL_20:
                SdkRoutine_86da20(v42);
                v16 = v43;
                if (v43 == 0) {
                  goto LABEL_8;
                }
                goto LABEL_28;
              }
            }
            else if ((SdkRoutine_8702f0(*v6, v11, "audio") & 1) == 0) {
              goto LABEL_20;
            }
            v40 = 0;
            v17 = SdkRoutine_86d900(v43, "aac-profile", &v40);
            v18 = v40;
            if (v40 <= v10) {
              v18 = v10;
            }
            if ((v17 & 1) != 0) {
              v10 = v18;
            }
            SdkRoutine_86da20(v42);
            v16 = v43;
            if (v43 != 0) {
            LABEL_28:
              SdkRoutine_86d7a0(v16, &v43);
            }
          LABEL_8:
            if (++v11 >= (unsigned __int64)SdkRoutine_8702c0(*v6)) {
              goto LABEL_33;
            }
          }
        }
        v10 = 0;
        v9 = 0;
        v8 = 0;
      LABEL_33:
        if (v50 != 0 && v50 < *(_QWORD*)(a1 + 480)) {
          SdkRoutine_86e140(a1 + 464);
          if (v50 != 0) {
            v24 = 0;
            for (i = 0; i < v50; ++i) {
              SdkRoutine_86ea50(a1 + 464, v49 + v24);
              v24 += 32;
            }
          }
        }
        v26 = *(_QWORD*)(*(_QWORD*)(a1 + 472) + 8LL);
        SdkRoutine_870300(a1 + 464, SdkData_e88ab0);
        v27 = *(_QWORD*)(a1 + 480);
        if (v27 != 0) {
          v28 = *(_QWORD*)(a1 + 568);
          v29 = *(_QWORD*)(a1 + 472);
          if (v28 != 0) {
            v30 = (unsigned __int64*)(v29 + 24);
            v23 = -1;
            do {
              v31 = *v30;
              v30 += 4;
              v32 = v23 + 2;
              ++v23;
            } while (v31 < v28 && v32 < v27);
          }
          else {
            v34 = (__int64*)(v29 + 8);
            v23 = 0;
            while (1) {
              v35 = *v34;
              v34 += 4;
              if (v35 == v26) {
                break;
              }
              if (v27 == ++v23) {
                goto LABEL_50;
              }
            }
          }
        }
        else {
        LABEL_50:
          v23 = 0;
        }
        v48 = SdkData_e88a90 + 16;
        SdkRoutine_86d850(&v48);
        SdkRoutine_86e860(&v48);
        v36 = *(_DWORD*)(a1 + 544);
        if (v8 > 0) {
          v36 = v8;
        }
        *(_DWORD*)(a1 + 544) = v36;
        v37 = *(_DWORD*)(a1 + 548);
        if (v9 > 0) {
          v37 = v9;
        }
        *(_DWORD*)(a1 + 548) = v37;
        v22 = *(_DWORD*)(a1 + 552);
        if (v10 > 0) {
          v22 = v10;
        }
      }
      else {
        v50 = 0;
        v51[0] = 0;
        v48 = 0;
        v49 = 0;
        SdkRoutine_86ea50(a1 + 464, &v48);
        v22 = *(_DWORD*)(a1 + 552);
        v23 = 0;
      }
      v38 = *(_QWORD*)(a1 + 536);
      *(_DWORD*)(a1 + 552) = v22;
      SdkRoutine_870310(v38);
      SdkRoutine_870190(a1, 0, v23, 0);
    }
    else {
      v19 = *(_QWORD*)(a1 + 360);
      v48 = 0;
      *(struct PseudoSret*)(&v48) = SdkRoutine_86dde0(v19);
      v20 = v48;
      ++*(_DWORD*)(a1 + 388);
      *(_DWORD*)(a1 + 392) = -1;
      SdkRoutine_86de40(v20, "what", 3);
      SdkRoutine_86de40(v48, "err", 4294966292LL);
      SdkRoutine_86de60(v48, 0);
      v21 = v48;
      *(_BYTE*)(a1 + 385) = 0;
      if (v21 != 0) {
        SdkRoutine_86d7a0(v21, &v48);
      }
    }
  }
  return SdkRoutine_86da20(v47);
}

bool SdkHr_529d20(__int64 a1, unsigned __int64 a2, int* a3, __int64 a4,
                  __int64 a5)
{
  unsigned __int64 v5;
  __int64 v10;
  int* v11;
  int v12;
  int v13;
  int v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v19;
  __int64 v20;

  v5 = *(_QWORD*)(a1 + 208);
  if (a2 < v5) {
    v10 = *(_QWORD*)(*(_QWORD*)(a1 + 200) + 32 * a2 + 24);
    v20 = v10;
    if (v10 != 0) {
      v11 = a3;
      SdkRoutine_86d7f0(v10, &v20);
      a3 = v11;
    }
    if (a3 != nullptr) {
      v12 = *(_DWORD*)(v20 + 40);
      if (v12 != 0) {
        if (v12 == 2) {
          v13 = 4;
        }
        else {
          v13 = 0;
        }
        if (v12 == 1) {
          v14 = 1;
        }
        else {
          v14 = v13;
        }
      }
      else {
        v14 = 2;
      }
      *a3 = v14;
    }
    if (a4 != 0) {
      SdkRoutine_86f390(a4);
      SdkRoutine_86e160(a4, v20 + 16);
    }
    if (a5 != 0) {
      SdkRoutine_86e140(a5);
      SdkRoutine_870640(a5, *(_QWORD*)(v20 + 64));
      v15 = v20;
      if (*(_QWORD*)(v20 + 64) != 0) {
        v16 = 0;
        do {
          v17 = SdkRoutine_86dab0(a1 + 40);
          *(struct PseudoSret*)(&v19) = SdkRoutine_8704e0(v15, v16, v17);
          SdkRoutine_86e490(a5, &v19, *(_QWORD*)(a5 + 16), 1);
          if (v19 != 0) {
            SdkRoutine_86d7a0(v19, &v19);
          }
          v15 = v20;
          ++v16;
        } while (v16 < *(_QWORD*)(v20 + 64));
      }
      goto LABEL_23;
    }
    v15 = v20;
    if (v20 != 0) {
    LABEL_23:
      SdkRoutine_86d7a0(v15, &v20);
    }
  }
  return a2 < v5;
}

bool SdkHr_529ea0(__int64 a1, __int64 a2, int* a3, __int64 a4)
{
  __int64 v7;
  __int64 v8;
  int v9;
  int v10;
  int v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  _QWORD v16[3];
  _QWORD v17[3];
  __int64 v18;

  SdkRoutine_86da90(v16, a2);
  SdkRoutine_86dba0(v17, v16);
  v18 = 0;
  v7 = SdkRoutine_86e190(a1 + 192, v17);
  if (v18 != 0) {
    SdkRoutine_86d7a0(v18, &v18);
  }
  SdkRoutine_86da20(v17);
  SdkRoutine_86da20(v16);
  if ((v7 & 0x8000000000000000LL) == 0) {
    v8 = *(_QWORD*)(*(_QWORD*)(a1 + 200) + 32 * v7 + 24);
    v17[0] = v8;
    if (v8 != 0) {
      SdkRoutine_86d7f0(v8, v17);
    }
    if (a3 != nullptr) {
      v9 = *(_DWORD*)(v17[0] + 40LL);
      if (v9 != 0) {
        if (v9 == 2) {
          v10 = 4;
        }
        else {
          v10 = 0;
        }
        if (v9 == 1) {
          v11 = 1;
        }
        else {
          v11 = v10;
        }
      }
      else {
        v11 = 2;
      }
      *a3 = v11;
    }
    if (a4 != 0) {
      SdkRoutine_86e140(a4);
      SdkRoutine_870640(a4, *(_QWORD*)(v17[0] + 64LL));
      v12 = v17[0];
      if (*(_QWORD*)(v17[0] + 64LL) != 0) {
        v13 = 0;
        do {
          v14 = SdkRoutine_86dab0(a1 + 40);
          *(struct PseudoSret*)(v16) = SdkRoutine_8704e0(v12, v13, v14);
          SdkRoutine_86e490(a4, v16, *(_QWORD*)(a4 + 16), 1);
          if (v16[0] != 0) {
            SdkRoutine_86d7a0(v16[0], v16);
          }
          v12 = v17[0];
          ++v13;
        } while (v13 < *(_QWORD*)(v17[0] + 64LL));
      }
      goto LABEL_23;
    }
    v12 = v17[0];
    if (v17[0] != 0) {
    LABEL_23:
      SdkRoutine_86d7a0(v12, v17);
    }
  }
  return v7 >= 0;
}

__int64 SdkHr_52fd90(__int64 a1, _QWORD* a2)
{
  __int64 result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  const char* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  char v18[4];
  __int64 v19;

  result = SdkRoutine_86f160(*a2);
  if ((int)result > 1885435250) {
    if ((int)result > 1937010543) {
      if ((_DWORD)result == 1937010544) {
        SdkRoutine_8707b0(a1, a2);
        v11 = *(_QWORD*)(a1 + 88);
        v19 = 0;
        *(struct PseudoSret*)(&v19) = SdkRoutine_86dde0(v11);
        v7 = v19;
        v8 = "what";
        v9 = 2;
      }
      else {
        if ((_DWORD)result != 1937011316) {
          return result;
        }
        SdkRoutine_8707a0(a1, a2);
        v6 = *(_QWORD*)(a1 + 88);
        v19 = 0;
        *(struct PseudoSret*)(&v19) = SdkRoutine_86dde0(v6);
        SdkRoutine_86de40(v19, "what", 0);
        v7 = v19;
        v8 = "err";
        v9 = 0;
      }
    }
    else {
      if ((_DWORD)result != 1885435251) {
        if ((_DWORD)result == 1920167269) {
          return SdkRoutine_870780(a1, a2);
        }
        return result;
      }
      ++*(_DWORD*)(a1 + 344);
      *(_DWORD*)(a1 + 352) = *(_DWORD*)(a1 + 172);
      SdkRoutine_858d40(a1 + 464);
      *(_DWORD*)(a1 + 496) = -1082130432;
      SdkRoutine_858d50(a1 + 464);
      SdkRoutine_870760(*(_QWORD*)(a1 + 104));
      v10 = *(_QWORD*)(a1 + 88);
      v19 = 0;
      *(struct PseudoSret*)(&v19) = SdkRoutine_86dde0(v10);
      SdkRoutine_86de40(v19, "what", 1);
      v7 = v19;
      v8 = "seekMode";
      if (*(_BYTE*)(*(_QWORD*)(a1 + 504) + 16LL) != 0) {
        v9 = 1;
      }
      else {
        v9 = 2;
      }
    }
    SdkRoutine_86de40(v7, v8, v9);
    SdkRoutine_86de60(v19, 0);
    goto LABEL_21;
  }
  if ((_DWORD)result != 1684827768) {
    if ((_DWORD)result == 1718383476) {
      v12 = *(_QWORD*)(a1 + 104);
      v18[0] = 0;
      v19 = 0;
      v13 = SdkRoutine_86dab0(a1 + 120);
      *(struct PseudoSret*)(&v19) = SdkRoutine_8707c0(v12, v13, 0, v18);
      v14 = *(_QWORD*)(a1 + 88);
      v17 = 0;
      *(struct PseudoSret*)(&v17) = SdkRoutine_86dde0(v14);
      SdkRoutine_86de40(v17, "what", 10);
      v15 = v17;
      v16 = v19;
      if (v19 != 0) {
        SdkRoutine_86d7f0(v19, &v16);
      }
      SdkRoutine_86f290(v15, "playlist", &v16);
      if (v16 != 0) {
        SdkRoutine_86d7a0(v16, &v16);
      }
      SdkRoutine_86de60(v17, 0);
      if (v17 != 0) {
        SdkRoutine_86d7a0(v17, &v17);
      }
    LABEL_21:
      result = v19;
      if (v19 != 0) {
        return SdkRoutine_86d7a0(v19, &v19);
      }
      return result;
    }
    if ((_DWORD)result != 1836019305) {
      return result;
    }
  }
  v5 = *a2;
  LODWORD(v19) = 0;
  result = SdkRoutine_86d900(v5, "generation", &v19);
  if ((_DWORD)v19 == *(_DWORD*)(a1 + 344)) {
    if ((unsigned int)SdkRoutine_86f160(*a2) == 1836019305) {
      return SdkRoutine_870790(a1);
    }
    else {
      return SdkRoutine_8707d0(a1);
    }
  }
  return result;
}

__int64 SdkHr_5a2c40(_DWORD* a1)
{
  __int64 result;
  int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  int v15;
  unsigned __int8 v16;

  v14 = 0;
  v12 = 0;
  v13 = 0;
  v10 = 0;
  v11 = 0;
  v8 = 0;
  v9 = 0;
  v6 = 0;
  v7 = 0;
  v4 = 0;
  v5 = 0;
  v16 = 0;
  v15 = 0;
  v3 = (*(__int64 (**)(__int64))(*(_QWORD*)SdkData_f65e38 + 40LL))(
      (__int64)SdkData_f65e38);
  if (v3 != 0) {
    SdkRoutine_858db0(&v3);
    __udf(0);
  }
  result = v16;
  if (v16 == 1) {
    *a1 = v15;
  }
  return result;
}

__int64 SdkHr_5d84c0(__int64 a1, __int64 a2, __int64* a3)
{
  int v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  __int64 v12;
  _QWORD v13[3];
  __int64 v14;

  if (*(_BYTE*)(SdkRoutine_874e00(a1) + 205) != 0 &&
      *(_OWORD*)(a1 + 424) != 0) {
    v14 = 0;
    *(struct PseudoSret*)(v13) = SdkRoutine_874f70(a2);
    if ((unsigned int)SdkRoutine_874d30(&v14, v13, a1 + 416) == 0 && v14 > 0) {
      SdkRoutine_856130(a1, a2, 208);
      return 2;
    }
    *(_QWORD*)(a1 + 424) = 0;
    *(_QWORD*)(a1 + 432) = 0;
    *(_QWORD*)(a1 + 416) = 0;
  }
  v7 = *(unsigned __int8*)(SdkRoutine_874e00(a1) + 205);
  v8 = SdkRoutine_874dd0(a2);
  v9 = *a3;
  v13[0] = v8;
  v10 = (*(__int64 (**)(__int64*, _QWORD*))(v9 + 24))(a3, v13);
  if (v7 == 0 || (*(_BYTE*)(a1 + 440) & 1) != 0) {
    if ((v10 & 1) == 0) {
      return 1;
    }
  }
  else {
    v13[0] = SdkRoutine_874dd0(a1 + 208);
    v11 = SdkRoutine_874dd0(a2);
    v12 = *a3;
    v14 = v11;
    if ((v10 &
         ~(*(unsigned int (**)(__int64*, _QWORD*, __int64*))(v12 + 16))(a3, v13,
                                                                        &v14) &
         1) == 0) {
      return 1;
    }
  }
  SdkRoutine_856130(a1, a2, 208);
  SdkRoutine_856130(a1 + 208, a2, 208);
  *(_BYTE*)(a1 + 440) = 0;
  return 0;
}

__int64 SdkHr_5e75d0(__int64 a1, _DWORD* a2, __int64* a3)
{
  __int64 v3;
  __int64 v5;
  __int64 result;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD v15[2];
  __int64 v16;

  v3 = *(_QWORD*)(a1 + 16);
  if (*(_DWORD*)(v3 + 24) != 0) {
    return 5234;
  }
  v5 = *(_QWORD*)(a1 + 8);
  v16 = 0;
  result = SdkRoutine_5e7d80(v3, &v16, v5, 1);
  if ((_DWORD)result == 0) {
    v8 = *(unsigned int*)(v3 + 656);
    if ((_DWORD)v8 == *(_DWORD*)(v3 + 660)) {
      *(_QWORD*)(v3 + 168) &= ~v16;
      return 3698;
    }
    else {
      v9 = *(unsigned int*)(v3 + 4 * v8 + 664);
      *(_DWORD*)(v3 + 656) = ((_BYTE)v8 + 1) & 0xF;
      v10 = v3 + 32 * v9;
      v11 = *(_QWORD*)(v10 + 200);
      v15[0] = *(_QWORD*)(v10 + 192);
      v15[1] = v11;
      v12 = v16;
      *(_BYTE*)(v10 + 176) = 2;
      *(_QWORD*)(v10 + 184) = v12;
      v13 = SdkRoutine_874b90(v15);
      *a2 = v9;
      *a3 = v13;
      a3[1] = v14;
      return 0;
    }
  }
  return result;
}

__int64 SdkHr_61b980(__int64 a1, __int64 a2)
{
  char v3;
  char v4;
  __int64 result;
  unsigned int v6;
  __int64 v7;
  char v8;
  int v9;
  char v10;

  *(struct PseudoSret*)(&v7) = SdkRoutine_61cee0();
  if ((v7 & 1) == 0) {
    return HIDWORD(v7);
  }
  v4 = BYTE4(v7);
  v3 = v8;
  result = 0;
  v6 = *(_DWORD*)(a2 + 48) & 0xFFFFFF00;
  *(_QWORD*)(a2 + 52) = 0;
  *(_DWORD*)(a2 + 48) = v6 & 0xF000FF00 | v3 & 3 | (4 * (v4 & 3)) & 0xF |
                        (16 * (v10 & 3)) & 0x3F | ((v9 & 3) << 6);
  return result;
}

__int64 SdkHr_633b30(__int64 a1, __int64 a2)
{
  unsigned __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  char v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 result;
  int v12;
  int v13;
  __int64 v14;
  __int64 v15;
  int v16;
  unsigned int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  char v26;
  int v27;
  int v28;
  int v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  _DWORD v35[2];
  __int64 v36;
  __int64 v37;
  __int64 v38;

  if (*(_DWORD*)a2 == 1) {
    v9 = *(_QWORD*)(a2 + 8);
    v4 = *(_QWORD*)(a2 + 16);
    if (v4 == 0) {
      LODWORD(v4) = (unsigned int)v9 >> 2;
    }
    if (v9 < 4 || (v9 & (v9 - 1)) != 0) {
      return 11;
    }
  }
  else {
    if (*(_DWORD*)a2 != 0) {
      return 11;
    }
    v3 = *(_QWORD*)(a2 + 8);
    v4 = *(_QWORD*)(a2 + 16);
    v5 = v3 - 1;
    v6 = v3 >> 2;
    v7 = __clz(v5);
    if (v4 == 0) {
      LODWORD(v4) = v6;
    }
    v8 = 1LL << -v7;
    if ((unsigned int)v8 <= 4) {
      LODWORD(v9) = 4;
    }
    else {
      LODWORD(v9) = v8;
    }
  }
  v12 = v9 - 3;
  *(_DWORD*)(a1 + 216) = v9;
  *(_DWORD*)(a1 + 220) = v4;
  v13 = *(unsigned __int8*)(a1 + 92);
  *(_DWORD*)(a1 + 224) = v12;
  if (v13 != 1) {
    v16 = 0;
    v17 = *(_DWORD*)(*(_QWORD*)(a1 + 8) + 320LL);
    if (v17 >= 0x1A) {
      goto LABEL_22;
    }
    goto LABEL_41;
  }
  v14 = *(_QWORD*)(a1 + 8);
  v15 = *(_QWORD*)(v14 + 360);
  if (*(_BYTE*)(*(_QWORD*)(v14 + 352) + 169LL) != 1) {
    if ((v15 & 0x8000000) != 0) {
      goto LABEL_40;
    }
  }
  else if ((v15 & 0x8000000) != 0 &&
           ((*(__int64 (**)(_QWORD))(**(_QWORD**)(v14 + 296) + 56LL))(
                *(_QWORD*)(v14 + 296)) &
            1) != 0) {
  LABEL_40:
    v16 = 1;
    v17 = *(_DWORD*)(*(_QWORD*)(a1 + 8) + 320LL);
    if (v17 < 0x1A) {
      goto LABEL_41;
    }
  LABEL_22:
    v18 = *(unsigned __int8*)(a1 + 93);
    v19 = *(unsigned __int8*)(a1 + 128);
    v20 = *(_DWORD*)(a1 + 216);
    v21 = *(_DWORD*)(a1 + 220);
    v37 = 0;
    v38 = 0;
    v36 = 0;
    if ((v18 | v16) != 0) {
      if (v16 != 0) {
        v22 = 3;
      }
      else {
        v22 = 2;
      }
      if (v18 == 0) {
        v22 = 1;
      }
      LODWORD(v36) = v22;
    }
    v35[0] = v20;
    v35[1] = v21;
    if (v19 != 0) {
      v23 = 0;
      result = (unsigned int)(2 * v19);
      v24 = -1;
      if ((_DWORD)result != 0) {
        return result;
      }
      goto LABEL_55;
    }
    if (*(_DWORD*)(*(_QWORD*)(a1 + 56) + 40LL) < 0x1Au) {
      return 2;
    }
    LODWORD(result) =
        SdkRoutine_644da0(*(unsigned int*)(a1 + 48), 3223341082LL, v35, 32);
    if ((_DWORD)result != 0) {
      result = (unsigned int)result;
    }
    else {
      result = 0;
    }
    v24 = HIDWORD(v36);
    v23 = v37;
    if ((_DWORD)result == 0) {
    LABEL_55:
      *(_DWORD*)(a1 + 152) = v24;
      *(_DWORD*)(a1 + 156) = v23;
      goto LABEL_56;
    }
    return result;
  }
  if ((*(unsigned int (**)(_QWORD))(**(_QWORD**)(v14 + 296) + 72LL))(
          *(_QWORD*)(v14 + 296)) != 2) {
    goto LABEL_40;
  }
  v16 = ((*(unsigned __int8 (**)(_QWORD))(**(_QWORD**)(v14 + 296) + 56LL))(
             *(_QWORD*)(v14 + 296)) ^
         1) &
        1;
  v17 = *(_DWORD*)(*(_QWORD*)(a1 + 8) + 320LL);
  if (v17 >= 0x1A) {
    goto LABEL_22;
  }
LABEL_41:
  if (v17 >= 0x18) {
    v25 = *(unsigned __int8*)(a1 + 93);
    v26 = *(_BYTE*)(a1 + 128);
    v27 = *(_DWORD*)(a1 + 216);
    v28 = *(_DWORD*)(a1 + 220);
    v37 = 0;
    v38 = 0;
    v36 = 0;
    if ((v25 | v16) != 0) {
      if (v16 != 0) {
        v29 = 3;
      }
      else {
        v29 = 2;
      }
      if (v25 == 0) {
        v29 = 1;
      }
      LODWORD(v36) = v29;
    }
    if ((v26 & 1) == 0) {
      v30 = *(_QWORD*)(a1 + 56);
      v35[0] = v27;
      v35[1] = v28;
      if (*(_DWORD*)(v30 + 40) >= 0x18u) {
        result =
            SdkRoutine_644da0(*(unsigned int*)(a1 + 48), 1075857432, v35, 32);
        if ((_DWORD)result != 0) {
          return result;
        }
      LABEL_56:
        v31 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 56LL))(
            *(_QWORD*)(a1 + 8));
        v32 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v31 + 24LL))(
            v31, *(unsigned int*)(a1 + 216));
        v33 = *(_QWORD*)(a1 + 208);
        if (v33 != 0) {
          SdkRoutine_875b30(v33);
          *(_QWORD*)(a1 + 208) = 0;
        }
        if (v32 != 0 && (v34 = SdkRoutine_875b00(v32),
                         *(_QWORD*)(a1 + 208) = v34, v34 == 0)) {
          return 6;
        }
        else {
          return 0;
        }
      }
    }
  }
  return 2;
}

__int64 SdkHr_634da0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result;
  __int64* v7;
  char v8;
  __int64 v9;
  int v10;
  __int64 v11;

  result = SdkRoutine_6321d0(a1, (_DWORD*)a2, a3);
  v7 = SdkData_e89a68[0];
  *(_QWORD*)(a1 + 196) = 0;
  *(_DWORD*)(a1 + 248) = 0;
  *(_QWORD*)a1 = v7 + 2;
  v8 = -(__int64)__clz(*(_QWORD*)(a3 + 8) - 1LL);
  v9 = 1LL << v8;
  if ((unsigned __int64)(1LL << v8) <= 2) {
    LODWORD(v9) = 2;
  }
  if ((v8 & 0x20) != 0) {
    v10 = 0;
  }
  else {
    v10 = v9;
  }
  *(_DWORD*)(a1 + 208) = v10;
  v11 = *(_QWORD*)(a2 + 1928);
  *(_QWORD*)(a1 + 232) = 0;
  *(_QWORD*)(a1 + 240) = 0;
  *(_QWORD*)(a1 + 216) = v11;
  *(_QWORD*)(a1 + 224) = 0;
  return result;
}

__int64 SdkHr_639ad0(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v5;
  char v6;
  char v7;
  __int64* v8;
  __int64 v9;
  __int64 result;
  __int64 v11;
  __int64 v13;
  int v14;
  char v15;
  char v16;
  unsigned int v17;
  __int64 v18;

  v2 = *(_QWORD*)(a1 + 8);
  v5 = (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 56LL))(v2);
  v6 = *(_BYTE*)(a1 + 72);
  v7 = *(_BYTE*)(a1 + 73);
  v8 = (__int64*)v5;
  v9 = *(unsigned int*)(v2 + 380);
  result = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 288LL))(v5);
  v11 = result;
  if (*(_BYTE*)(v2 + 427) != 1 ||
      (*(_QWORD*)(v2 + 360) & 0x10000000000000LL) == 0) {
    v14 = 0;
    LOBYTE(v17) = 0;
    v15 = 0;
    v16 = 0;
  }
  else {
    v13 = *v8;
    v18 = 0;
    result = (*(__int64 (**)(__int64*, __int64*))(v13 + 296))(v8, &v18);
    v14 = HIDWORD(v18);
    v15 = v18;
    v16 = BYTE1(v18);
    v17 = __clz(HIDWORD(v18)) + BYTE2(v18) - 31;
  }
  *(_BYTE*)a2 = v6;
  *(_BYTE*)(a2 + 1) = v7;
  *(_DWORD*)(a2 + 2) = 0;
  *(_WORD*)(a2 + 6) = 0;
  *(_QWORD*)(a2 + 24) = v9;
  *(_DWORD*)(a2 + 32) = v14;
  *(_QWORD*)(a2 + 8) = 0xFFFFFFFFLL;
  *(_QWORD*)(a2 + 16) = v11;
  *(_BYTE*)(a2 + 36) = v17;
  *(_BYTE*)(a2 + 37) = v15;
  *(_BYTE*)(a2 + 38) = v16;
  *(_BYTE*)(a2 + 39) = 0;
  return result;
}

__int64 SdkHr_63a960(__int64 a1, int a2, __int64 a3, unsigned __int64 a4)
{
  __int64* v8;
  __int64 v9;
  int v10;
  unsigned int v11;
  char v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned int v19;
  __int64 v22;
  __int64 v23;
  __int64 v25;
  unsigned int v26;
  __int64 v29;
  __int64 v30;
  __int64 v33;
  __int64 v34;
  int v37;
  __int64 v39;
  _BYTE* v40;
  char v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  char v46;
  unsigned __int64 v47;
  unsigned __int64 v48;
  __int64 v49;
  _BYTE* v50;
  __int64 v51;
  unsigned __int64 v52;
  unsigned __int64 v53;
  __int64 v55;
  __int64 v56;
  unsigned __int64 v57;
  unsigned __int64 v58;
  unsigned __int64 v60;
  unsigned __int64 v61;
  unsigned __int64 v63;
  unsigned __int64 v64;
  unsigned __int64 v66;
  unsigned __int64 v67;
  unsigned int v69;
  _QWORD v70[2];
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  _QWORD v75[4];

  v8 = (__int64*)(*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 56LL))(
      *(_QWORD*)(a1 + 8));
  v9 = *v8;
  v74 = 0;
  (*(void (**)(__int64*, __int64*))(v9 + 296))(v8, &v74);
  if (a4 != HIDWORD(v74)) {
    return 11;
  }
  v71 = 0;
  v72 = 0;
  v73 = 0;
  v70[0] = 0;
  v70[1] = 0;
  v10 = SdkRoutine_624080(&v71, a4);
  if (v10 != 0) {
    goto LABEL_139;
  }
  if (a4 != 0) {
    v11 = (unsigned __int8)v74;
    v12 = BYTE2(v74) + __clz(HIDWORD(v74)) - 31;
    v13 = -1LL << ((unsigned __int8)v74 + v12);
    v14 = v13;
    if (a4 == 1) {
      v33 = 0;
      v10 = 0;
    }
    else {
      v15 = a3 + 16;
      v16 = 0;
      v17 = 0;
      v10 = 0;
      do {
        v19 = v11;
        if (*(_BYTE*)(v15 - 8) != 0) {
          v19 = *(unsigned __int8*)(v15 - 8);
        }
        if ((v19 > BYTE1(v74) || v19 < (unsigned __int8)v74) && v10 == 0) {
          v10 = 11;
        }
        v22 = v13;
        v23 = v13;
        if (*(_BYTE*)(v15 - 8) != 0) {
          v23 = *(_QWORD*)(v15 - 16);
          v22 = v23 & (-1LL << (*(_BYTE*)(v15 - 8) + v12));
        }
        if (v10 == 0 && v23 != v22) {
          v10 = 11;
        }
        v25 = v71 + v16;
        *(_BYTE*)(v25 + 8) = v19;
        *(_QWORD*)v25 = v22;
        v26 = v11;
        if (*(_BYTE*)(v15 + 8) != 0) {
          v26 = *(unsigned __int8*)(v15 + 8);
        }
        if ((v26 > BYTE1(v74) || v26 < (unsigned __int8)v74) && v10 == 0) {
          v10 = 11;
        }
        v29 = v13;
        v30 = v13;
        if (*(_BYTE*)(v15 + 8) != 0) {
          v30 = *(_QWORD*)v15;
          v29 = *(_QWORD*)v15 & (-1LL << (*(_BYTE*)(v15 + 8) + v12));
        }
        if (v10 == 0 && v30 != v29) {
          v10 = 11;
        }
        v17 -= 2;
        v15 += 32;
        v18 = v71 + v16;
        v16 += 32;
        *(_QWORD*)(v18 + 16) = v29;
        *(_BYTE*)(v18 + 24) = v26;
      } while (-(__int64)(a4 & 0xFFFFFFFFFFFFFFFELL) != v17);
      v33 = -v17;
      if ((a4 & 1) == 0) {
      LABEL_67:
        v40 = (_BYTE*)(a3 + 24);
        v41 = a4 + 3;
        v42 = 0;
        do {
          v44 = a3 + 16 * v42;
          v45 = v41 & 3;
          v46 = *(_BYTE*)(v44 + 8);
          if (v46 != 0) {
            v43 = v42 + 1;
            if (v42 + 1 < a4) {
              v47 = *(_QWORD*)v44;
              v48 = v47 + (1LL << v46);
              if (((a4 - 1 - v42) & 3) != 0) {
                v49 = v45;
                v50 = v40;
                v51 = v42 + 1;
                do {
                  if (*v50 != 0) {
                    v52 = *((_QWORD*)v50 - 1);
                    v53 = v52 + (1LL << *v50);
                    if (v47 > v52) {
                      v52 = v47;
                    }
                    if (v53 >= v48) {
                      v53 = v48;
                    }
                    if (v10 == 0 && v52 < v53) {
                      v10 = 11;
                    }
                  }
                  ++v51;
                  v50 += 16;
                  --v49;
                } while (v49 != 0);
              }
              else {
                v51 = v42 + 1;
              }
              if (a4 - 2 - v42 >= 3) {
                v55 = a3 + 32 + 16 * v51;
                v56 = a4 - v51;
                do {
                  if (*(_BYTE*)(v55 - 24) != 0) {
                    v57 = *(_QWORD*)(v55 - 32);
                    v58 = v57 + (1LL << *(_BYTE*)(v55 - 24));
                    if (v47 > v57) {
                      v57 = v47;
                    }
                    if (v58 >= v48) {
                      v58 = v48;
                    }
                    if (v10 == 0 && v57 < v58) {
                      v10 = 11;
                    }
                  }
                  if (*(_BYTE*)(v55 - 8) != 0) {
                    v60 = *(_QWORD*)(v55 - 16);
                    v61 = v60 + (1LL << *(_BYTE*)(v55 - 8));
                    if (v47 > v60) {
                      v60 = v47;
                    }
                    if (v61 >= v48) {
                      v61 = v48;
                    }
                    if (v10 == 0 && v60 < v61) {
                      v10 = 11;
                    }
                  }
                  if (*(_BYTE*)(v55 + 8) != 0) {
                    v63 = *(_QWORD*)v55;
                    v64 = *(_QWORD*)v55 + (1LL << *(_BYTE*)(v55 + 8));
                    if (v47 > *(_QWORD*)v55) {
                      v63 = v47;
                    }
                    if (v64 >= v48) {
                      v64 = v48;
                    }
                    if (v10 == 0 && v63 < v64) {
                      v10 = 11;
                    }
                  }
                  if (*(_BYTE*)(v55 + 24) != 0) {
                    v66 = *(_QWORD*)(v55 + 16);
                    v67 = v66 + (1LL << *(_BYTE*)(v55 + 24));
                    if (v47 > v66) {
                      v66 = v47;
                    }
                    if (v67 >= v48) {
                      v67 = v48;
                    }
                    if (v10 == 0 && v66 < v67) {
                      v10 = 11;
                    }
                  }
                  v55 += 64;
                  v56 -= 4;
                } while (v56 != 0);
              }
            }
          }
          else {
            v43 = v42 + 1;
          }
          ++v42;
          v40 += 16;
          v41 = v45 + 3;
        } while (v43 != a4);
        if (v10 != 0) {
          goto LABEL_139;
        }
        goto LABEL_130;
      }
    }
    v34 = a3 + 16 * v33;
    if (*(_BYTE*)(v34 + 8) != 0) {
      v11 = *(unsigned __int8*)(v34 + 8);
    }
    if ((v11 > BYTE1(v74) || v11 < (unsigned __int8)v74) && v10 == 0) {
      v37 = 11;
    }
    else {
      v37 = v10;
    }
    if (*(_BYTE*)(v34 + 8) != 0) {
      v13 = *(_QWORD*)v34;
      v14 = *(_QWORD*)v34 & (-1LL << (*(_BYTE*)(v34 + 8) + v12));
    }
    if (v37 != 0 || v13 == v14) {
      v10 = v37;
    }
    else {
      v10 = 11;
    }
    v39 = v71 + 16 * v33;
    *(_QWORD*)v39 = v14;
    *(_BYTE*)(v39 + 8) = v11;
    goto LABEL_67;
  }
LABEL_130:
  if (a2 != 0) {
    if (a2 == 1) {
      LOBYTE(v70[0]) = 2;
      if (HIDWORD(a4) == 0) {
        goto LABEL_133;
      }
    }
  }
  else {
    LOBYTE(v70[0]) = 1;
    if (HIDWORD(a4) == 0) {
    LABEL_133:
      HIDWORD(v70[0]) = a4;
      v75[0] = v70;
      v75[1] = 16;
      v75[2] = v71;
      v75[3] = 16 * v72;
      if (*(_DWORD*)(*(_QWORD*)(a1 + 32) + 56LL) <= 0xAu) {
        v10 = 2;
      }
      else {
        v10 = SdkRoutine_644cf0(*(unsigned int*)(a1 + 24), 1074810891, v75, 2,
                                0, 0);
        if (v10 == 0) {
          v10 = 0;
        }
      }
      goto LABEL_139;
    }
  }
  v10 = 11;
LABEL_139:
  v69 = v10;
  SdkRoutine_624080(&v71, 0);
  SdkRoutine_875b30(v71);
  return v69;
}

__int64 SdkHr_64e500(__int64 a1, __int64 a2, __int64* a3, unsigned int* a4,
                     __int64 a5, char a6)
{
  unsigned int v6;
  __int64 v7;
  __int64 v9;
  __int64 v10;
  unsigned int v11;
  unsigned int v12;
  char* v13;
  __int64 result;
  unsigned int v15;
  bool v16;
  int v17;
  unsigned int v18;
  unsigned int v19;
  unsigned int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  _DWORD* v28;
  __int64 v29;
  __int64 v30;
  int v31;
  __int64 v32;
  int v33;
  __int64 v34;
  int v35;
  int v36;
  __int64 v37;
  __int64 v38;
  unsigned int v39;
  unsigned int v40;
  int v41;
  char* v42;
  __int64 v43;
  unsigned int v44;
  unsigned int v45;
  unsigned int v46;
  unsigned int v47;
  __int64 v48;
  __int128 v49;
  __int128 v50;
  __int128 v51;
  __int128 v52;
  __int128 v53;
  _QWORD v54[3];

  v6 = a4[2];
  v7 = a2;
  if (a3 != nullptr && (*((_BYTE*)a3 + 7) & 4) != 0) {
    LODWORD(v10) = *((_DWORD*)a3 + 2);
    v9 = *(_QWORD*)(a2 + 40);
  }
  else {
    v9 = *(_QWORD*)(a2 + 40);
    v10 = v9 << 39 >> 55;
  }
  v11 = *a4;
  v12 = a4[3];
  v13 = (char*)SdkData_e89ba0 + 48 * (int)v10;
  result = (unsigned __int8)v13[8];
  v42 = v13;
  v15 = (unsigned __int8)v13[9];
  v16 = (v9 & 0xFE000000) == 100663296;
  v17 = *(unsigned __int8*)(a2 + 84);
  if (v16) {
    v18 = 1;
  }
  else {
    v18 = a4[4];
  }
  if (v16) {
    v19 = a4[4];
  }
  else {
    v19 = a4[5];
  }
  if (v16) {
    LOWORD(v6) = a4[1];
  }
  if (v16) {
    v20 = 0;
  }
  else {
    v20 = a4[1];
  }
  if ((unsigned int)result >= 2) {
    v11 = (v11 + (unsigned int)result - 1) / (unsigned int)result;
    v20 = (v15 - 1 + v20) / v15;
    v18 = (v15 - 1 + v18) / v15;
    v12 = (v12 + (unsigned int)result - 1) / (unsigned int)result;
  }
  v21 = *(_DWORD*)(a1 + 144);
  v22 = *(_DWORD*)(a1 + 148);
  v23 = v12 * v17;
  v54[1] = 0;
  if (v21 != 0) {
    v23 = v21;
  }
  if (v22 != 0) {
    v24 = v22;
  }
  else {
    v24 = v23 * v18;
  }
  v25 = 0x300000000000000LL;
  if (a3 != nullptr) {
    if ((*a3 & 0x100000000000000LL) != 0) {
      v25 = *a3 & 0xFF00000000LL | 0x300000000000000LL;
    }
    v26 = *a3;
    if ((*a3 & 0x200000000000000LL) == 0) {
      LOWORD(v26) = 0;
    }
  }
  else {
    LOWORD(v26) = 0;
  }
  v48 = a5;
  v54[0] = v25 | 0x10000010000LL | (unsigned __int16)(v26 + v6);
  v53 = 0u;
  v49 = 0u;
  v50 = 0u;
  v52 = 0u;
  v51 = 0u;
  LODWORD(v49) = v23;
  LODWORD(v53) = v17;
  LODWORD(v50) = 1;
  if ((a6 & 0x18) != 0) {
    if ((a6 & 8) != 0) {
      a5 += v23 * (v18 - 1);
      v48 = a5;
      LODWORD(v49) = -v23;
    }
    if ((a6 & 0x10) != 0) {
      v27 = v24 * (v19 - 1);
      v24 = -v24;
      a5 += v27;
      v48 = a5;
    }
  }
  v28 = *(_DWORD**)a1;
  v40 = result;
  if ((unsigned __int64)(*(_QWORD*)a1 + 4LL) > *(_QWORD*)(a1 + 8)) {
    v29 = v7;
    v30 = a5;
    v31 = v24;
    SdkRoutine_64b750(a1, (__int64)v28,
                      4LL * (unsigned int)(*(_DWORD*)(a1 + 104) + 1));
    result = v40;
    v28 = *(_DWORD**)a1;
    v24 = v31;
    a5 = v30;
    v7 = v29;
  }
  v32 = *(unsigned int*)(a1 + 24);
  if ((unsigned int)v32 <= 4) {
    *v28++ = SdkData_c77c90[v32];
  }
  *(_QWORD*)a1 = v28;
  if (v19 != 0) {
    v39 = v15;
    v33 = v15 - 1;
    v34 = v24;
    v41 = v20;
    v35 = v18;
    v36 = result - 1;
    v37 = a5 + v24;
    do {
      SdkRoutine_66a6d0(v7, &v43, v54);
      if ((unsigned __int8)v42[8] >= 2u) {
        v44 = (v36 + v44) / v40;
        v45 = (v33 + v45) / v39;
        v46 = (v36 + v46) / v40;
        v47 = (v33 + v47) / v39;
      }
      result = SdkRoutine_64d350(a1, &v43, &v48, v11, v41, 0, 0, v12, v35);
      v48 = v37;
      --v19;
      v37 += v34;
      ++LOWORD(v54[0]);
    } while (v19 != 0);
    v28 = *(_DWORD**)a1;
  }
  if ((unsigned __int64)(v28 + 1) > *(_QWORD*)(a1 + 8)) {
    result = SdkRoutine_64b750(a1, (__int64)v28,
                               4LL * (unsigned int)(*(_DWORD*)(a1 + 104) + 1));
    v28 = *(_DWORD**)a1;
  }
  v38 = *(unsigned int*)(a1 + 24);
  if ((unsigned int)v38 <= 4) {
    *v28++ = SdkData_c77cf4[v38];
  }
  *(_QWORD*)a1 = v28;
  return result;
}

__int64 SdkHr_64f5d0(__int64 a1, __int64 a2, int a3, __int64 a4, int a5, int a6,
                     int a7, int a8, int a9, int a10, int a11, int a12, int a13,
                     char a14, char a15, char a16, char a17)
{
  _DWORD* v18;
  char* v25;
  __int64 result;
  char* v27;
  unsigned int v28;
  _DWORD* v29;
  int v30;
  int v31;
  int v32;
  int v33;
  __int64 v34;
  int v35;
  __int64 v36;
  __int64 v37;
  _DWORD* v38;
  int v39;
  _DWORD* v40;
  char* v41;
  __int64 v42;
  __int64 v43;
  unsigned int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  __int64 v49;
  int v50;
  __int64 v51;
  _DWORD* v52;
  _DWORD* v53;
  char* v54;
  bool v55;
  int v56;
  int v57;
  _DWORD* v58;

  v18 = *(_DWORD**)a1;
  if ((unsigned __int64)(*(_QWORD*)a1 + 196LL) > *(_QWORD*)(a1 + 8)) {
    SdkRoutine_64b750(a1, (__int64)v18,
                      4LL * (unsigned int)(*(_DWORD*)(a1 + 104) + 49));
    v18 = *(_DWORD**)a1;
  }
  v25 = (char*)SdkData_e89ba0;
  result = 536961157;
  if ((a17 & 1) != 0) {
    v27 = (char*)SdkData_e89ba0 + 48 * a3;
    if (*(_DWORD*)(a2 + 24) == 2) {
      *v18 = 537157772;
      v18[1] = *((_DWORD*)v27 + 7);
      v18[2] = 0;
      v18[3] = (unsigned __int8)(16 * (*(_DWORD*)(a2 + 48) & 7)) |
               ((*(_DWORD*)(a2 + 52) & 7) << 8);
      v28 = *(_DWORD*)(a2 + 40);
      if (v28 >= 1 << *(_DWORD*)(a2 + 52)) {
        v28 = 1 << *(_DWORD*)(a2 + 52);
      }
      v18[5] = 537026706;
      v29 = v18 + 5;
      *(v29 - 1) = v28;
      v30 = 64 / *(_DWORD*)(a2 + 72);
      v31 = *(_DWORD*)(a2 + 56);
      v32 = *(_DWORD*)(a2 + 32) + v31 * v30;
      v33 = -(v31 * v30);
      v34 = 3;
      v35 = (v32 - 1) & v33;
      v36 = 36;
      v29[1] = v35;
      v37 = 2;
    }
    else {
      v36 = 8;
      *v18 = 537026700;
      v18[1] = *((_DWORD*)v27 + 7);
      *((_QWORD*)v18 + 1) = 0x2002609200000001LL;
      v18[4] = *(_DWORD*)(a2 + 12);
      v39 = *(_DWORD*)(a2 + 16);
      v18[6] = 536961169;
      v29 = v18 + 6;
      v34 = 2;
      *(v29 - 1) = v39;
      v37 = 1;
    }
    v29[v37] = *(_DWORD*)(a2 + v36);
    v40 = &v29[v34];
    *v40 = 537026708;
    v40[1] = *(_DWORD*)(a2 + 4);
    v40[2] = *(_QWORD*)a2;
    v41 = &v25[48 * a5];
    if (*(_DWORD*)(a4 + 24) == 2) {
      v42 = 3;
      v43 = 10;
      v40[3] = 537223296;
      v40[4] = *((_DWORD*)v41 + 7);
      v40[5] = 0;
      v40[6] = (unsigned __int8)(16 * (*(_DWORD*)(a4 + 48) & 7)) |
               ((*(_DWORD*)(a4 + 52) & 7) << 8);
      v44 = *(_DWORD*)(a4 + 40);
      if (v44 >= 1 << *(_DWORD*)(a4 + 52)) {
        v44 = 1 << *(_DWORD*)(a4 + 52);
      }
      v40[7] = v44;
      *((_QWORD*)v40 + 4) = 0x2002608600000000LL;
      v45 = 64 / *(_DWORD*)(a4 + 72);
      v46 = *(_DWORD*)(a4 + 56);
      v47 = *(_DWORD*)(a4 + 32) + v46 * v45;
      v48 = -(v46 * v45);
      v49 = 36;
      v50 = (v47 - 1) & v48;
      v51 = 2;
    }
    else {
      v43 = 9;
      v42 = 2;
      v40[3] = 537026688;
      v50 = 536961157;
      v40[4] = *((_DWORD*)v41 + 7);
      *(_QWORD*)(v40 + 5) = 0x2002608600000001LL;
      v40[7] = *(_DWORD*)(a4 + 12);
      v51 = 1;
      v40[8] = *(_DWORD*)(a4 + 16);
      v49 = 8;
    }
    v40[v43] = v50;
    v52 = v40 + 9;
    v52[v51] = *(_DWORD*)(a4 + v49);
    v53 = &v52[v42];
    *v53 = 537026696;
    v38 = v53 + 4;
    v53[1] = *(_DWORD*)(a4 + 4);
    v53[2] = *(_QWORD*)a4;
    v53[3] = -2147393355;
  }
  else {
    *v18 = 537026708;
    v18[1] = *(_DWORD*)(a2 + 4);
    v18[2] = *(_QWORD*)a2;
    v18[3] = 537026696;
    v18[4] = *(_DWORD*)(a4 + 4);
    v18[5] = *(_QWORD*)a4;
    v38 = v18 + 6;
  }
  if ((unsigned __int64)(v38 + 49) > *(_QWORD*)(a1 + 8)) {
    SdkRoutine_64b750(a1, (__int64)v38,
                      4LL * (unsigned int)(*(_DWORD*)(a1 + 104) + 49));
    v38 = *(_DWORD**)a1;
    result = 536961157;
  }
  v54 = &v25[48 * a5];
  v55 = v54[14] != 0 || v54[15] != 0;
  v56 = *(_DWORD*)(a4 + 24) != 1 && v55;
  if (v56 == 1) {
    *v38++ = -2147393362;
  }
  v38[4] = a9;
  v38[5] = a10;
  *v38 = 536961571;
  if ((a16 & 1) != 0) {
    v57 = 16;
  }
  else {
    v57 = 0;
  }
  v38[6] = a11;
  v38[7] = 537158192;
  v38[1] = v57 & 0xFFFFFFFE | a15 & 1;
  v38[2] = 537158188;
  v38[3] = a8;
  v38[8] = a12 << -a14;
  v38[9] = a12 >> a14;
  v38[10] = a13 << -a14;
  v38[11] = a13 >> a14;
  v38[12] = 537158196;
  v38[13] = a6 << 28;
  v38[14] = a6 >> 4;
  v38[15] = a7 << 28;
  v38[16] = a7 >> 4;
  if (v56 != 0) {
    v38[17] = -2147458898;
    v58 = v38 + 18;
  }
  else {
    v58 = v38 + 17;
  }
  *(_QWORD*)a1 = v58;
  return result;
}

__int64 SdkHr_6587a0(__int64 a1, _DWORD* a2, unsigned __int64* a3)
{
  __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v8;
  unsigned __int64 v9;
  bool v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned int* v14;
  unsigned int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  char v23;
  _BYTE v25[40];

  v3 = *(_QWORD*)(a1 + 32);
  v4 = *(_QWORD*)(a1 + 40);
  v8 = (v3 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  v9 = v8 - v3 + 360;
  v10 = v4 >= v9;
  v11 = v4 - v9;
  if (v10) {
    *(_QWORD*)(a1 + 32) = v8 + 360;
    *(_QWORD*)(a1 + 40) = v11;
  }
  else {
    v8 = 0;
  }
  v12 = *(int*)(a1 + 80);
  if ((int)v12 < *(_DWORD*)(a1 + 64) && (v13 = *(_QWORD*)(a1 + 72)) != 0) {
    v14 = (unsigned int*)(v13 + 16 * v12);
    v15 = *v14;
    v16 = *((_QWORD*)v14 + 1);
    *(_DWORD*)(a1 + 80) = v12 + 1;
  }
  else {
    v15 = 0;
    v16 = 0;
  }
  *(_QWORD*)(v8 + 352) = a1;
  *(_BYTE*)(v8 + 8) = 1;
  *(_QWORD*)v8 = SdkData_e76690;
  *(_OWORD*)(v8 + 9) = 0u;
  *(_OWORD*)(v8 + 25) = 0u;
  SdkRoutine_6496c0(v25);
  SdkRoutine_6496b0(v25, *(_QWORD*)(a1 + 24));
  v17 = (*a2 + 4095) & 0xFFFFF000;
  v18 = *(_QWORD*)(a1 + 32);
  v19 = *(_QWORD*)(a1 + 40);
  v20 = (v18 + 4095) & 0xFFFFFFFFFFFFF000LL;
  v21 = v20 - v18 + v17;
  v10 = v19 >= v21;
  v22 = v19 - v21;
  if (v10) {
    *(_QWORD*)(a1 + 32) = v20 + v17;
    *(_QWORD*)(a1 + 40) = v22;
  }
  else {
    v20 = 0;
  }
  v23 = SdkRoutine_65a950(v8 + 48, *(_QWORD*)(a1 + 24), (unsigned int)a2[6],
                          v17, v20, v15, v16);
  *(_BYTE*)(v8 + 8) = v23 & 1;
  if ((v23 & 1) != 0) {
    SdkRoutine_6496d0(v25, v8 + 48, 0, v17);
    if ((unsigned __int8)SdkRoutine_649720(v8 + 304, v25) != 0) {
      if ((*(_BYTE*)(v8 + 8) & 1) != 0) {
        ++*(_DWORD*)(a1 + 60);
        *a3 = v8;
        return 1;
      }
    }
    else {
      SdkRoutine_65d380(v8 + 48);
      *(_BYTE*)(v8 + 8) = 0;
    }
  }
  (**(void (***)(unsigned __int64))v8)(v8);
  return 0;
}

void SdkHr_6642b0(__int64 a1, int a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v4;
  __int64 v6;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  bool v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  unsigned __int64* v33;
  unsigned __int64 v35;
  char v36;

  v4 = a4 + 0x2000;
  if (a2 == 1) {
    v33 = *(unsigned __int64**)(a4 + 11320);
    if (*(_QWORD*)(a4 + 11240) != *(_QWORD*)(a4 + 11312) ||
        *(_QWORD*)(a4 + 11280) != (_QWORD)v33) {
      v35 = *v33;
      *(_BYTE*)(a4 + 11448) = 1;
      *(_QWORD*)a4 += 8 * HIDWORD(v35);
      v36 = SdkRoutine_66eaa0(a4 + 40);
      SdkRoutine_64b2a0(a4 + 11240, a4 + 9648, 512);
      *(_QWORD*)(a4 + 11320) = *(_QWORD*)(a4 + 11280);
      if ((v36 & 1) != 0) {
        SdkRoutine_664890(a4);
      }
    }
  }
  else if (a2 == 0) {
    v6 = *(_QWORD*)(a4 + 8408);
    v8 = SdkRoutine_64b3b0(*(_QWORD*)(a4 + 8392));
    v9 = *(_QWORD*)(a4 + 8416);
    v10 = v8 + v6 - v9;
    v11 = v8 + v6 >= v9 ? 0LL : *(_QWORD*)(a4 + 8304);
    if (v10 + 2 * a3 + v11 < *(_QWORD*)(a4 + 9536) ||
        (SdkRoutine_664890(a4), a3 > *(_QWORD*)(a4 + 9528))) {
      v12 = *(_QWORD*)(a4 + 11416) + SdkRoutine_64b3b0(a4 + 11240);
      v13 = *(_QWORD*)(a4 + 8392);
      *(_QWORD*)(a4 + 11416) = v12;
      v14 = SdkRoutine_64b3b0(v13);
      v15 = *(_QWORD*)(a4 + 8408);
      v16 = *(_QWORD*)(a4 + 8336);
      v17 = *(_QWORD*)(a4 + 8304);
      v18 = v15 + v14;
      v19 = *(_QWORD*)(a4 + 8392);
      *(_BYTE*)(v4 + 152) = 0;
      if (v18 >= v16) {
        v20 = v17;
      }
      else {
        v20 = 0;
      }
      v21 = v18 - v20;
      *(_QWORD*)(a4 + 8328) = v21;
      *(_QWORD*)(a4 + 8352) = v21;
      v22 = SdkRoutine_64b3b0(v19);
      v23 = *(_QWORD*)(a4 + 8416);
      v24 = *(_QWORD*)(a4 + 8424);
      v25 = v22 + v15 >= v23;
      v26 = v22 + v15 - v23;
      v27 = *(_QWORD*)(a4 + 8304);
      if (v25) {
        v27 = 0;
      }
      v28 = v27 + v26;
      v29 = v28 + a3;
      v30 = v24 - v28;
      if (v29 >= v24) {
        v31 = a3;
      }
      else {
        v31 = v30;
      }
      v32 = SdkRoutine_666b40(a4 + 8280, a4 + 8408, a3, v31);
      SdkRoutine_64b0b0(*(_QWORD**)(a4 + 8392), *(_QWORD*)(a4 + 8400),
                        *(_QWORD*)(a4 + 8408), v32);
    }
  }
}

__int64 SdkHr_669cf0(__int64 a1)
{
  int v1;
  int v2;
  __int64 v3;
  int v5;
  int v6;
  unsigned __int8* v7;
  char v8;
  int v10;

  v1 = *(_DWORD*)(a1 + 32);
  v2 = *(_DWORD*)(a1 + 36);
  v3 = *(_QWORD*)(a1 + 8);
  if (v2 != 10 && (*(_DWORD*)(a1 + 32) & 0x50) == 0) {
    v6 = *(_DWORD*)(a1 + 56);
    if ((v1 & 8) != 0 && *(_BYTE*)(v3 + 7580) == 1) {
      v7 = (unsigned __int8*)SdkData_e89ba0 + 48 * v6;
      if (v7[14] != 0 || v7[15] != 0) {
        v8 = *(_DWORD*)(v3 + 7284) != 1981175382;
      LABEL_14:
        LOBYTE(v5) = SdkRoutine_65f400(v3 + 2520, v6, *(_DWORD*)(a1 + 60), v8,
                                       (*(_DWORD*)(a1 + 32) & 0x1000) != 0);
        v3 = *(_QWORD*)(a1 + 8);
        v1 = *(_DWORD*)(a1 + 32);
        v2 = *(_DWORD*)(a1 + 36);
        goto LABEL_15;
      }
      if (v7[8] <= 1u && *(_DWORD*)(v3 + 7280) != 1981175382) {
        v8 = 1;
        goto LABEL_14;
      }
    }
    v8 = 0;
    goto LABEL_14;
  }
  v5 = *(_DWORD*)(v3 + 7576);
LABEL_15:
  if ((*(_BYTE*)(v3 + 10) & 1) != 0) {
    v10 = v1 & 0x50;
    if (v2 != 10 && v10 == 0) {
      return (unsigned __int8)v5 | 0x300u;
    }
  }
  if (*(_DWORD*)(v3 + 7576) == (unsigned __int8)v5) {
    return 256;
  }
  return (unsigned __int8)v5 | 0x100u;
}

__int64 SdkHr_67aa40(__int64 result, int a2, unsigned int a3,
                     unsigned __int64 a4)
{
  unsigned int* v5;
  unsigned int v6;
  unsigned int** v7;
  unsigned int v8;
  unsigned __int64 v9;
  float* v10;
  bool v11;
  __int64 v12;
  const double* v13;
  float* v14;
  __int64 v15;
  const double* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  int v20;
  __int64 v21;
  __int64 v22;
  int v23;
  float64x2x2_t v24;
  float64x2x2_t v25;
  float32x4x4_t v26;

  if (a3 != 0) {
    v5 = *(unsigned int**)result;
    v6 = (4 * a3) | 2;
    if (*(_QWORD*)result + 4 * (unsigned __int64)v6 > *(_QWORD*)(result + 8)) {
      v7 = (unsigned int**)result;
      v8 = a3;
      v9 = a4;
      SdkRoutine_64b750(result, (__int64)v5,
                        4LL * (*(_DWORD*)(result + 104) + v6));
      v5 = *v7;
      a3 = v8;
      a4 = v9;
      result = (__int64)v7;
    }
    v10 = (float*)(v5 + 2);
    *v5 = ((a3 & 0x7FF) << 18) | 0xA0010E98;
    v5[1] = ((a3 << 16) - 0x10000) | a2;
    if ((int)a3 < 1) {
      v14 = (float*)(v5 + 2);
    }
    else {
      if (a3 < 4 || ((unsigned __int64)v10 < a4 + 16LL * a3
                         ? (v11 = a4 >= (unsigned __int64)&v5[4 * a3 + 2])
                         : (v11 = true),
                     !v11)) {
        v12 = 0;
        v14 = (float*)(v5 + 2);
        v17 = a3 & 3;
        if (v17 == 0) {
          goto LABEL_19;
        }
        goto LABEL_15;
      }
      v12 = a3 & 0x7FFFFFFC;
      v13 = (const double*)a4;
      v14 = &v10[4 * v12];
      v15 = v12;
      do {
        v24 = vld2q_f64(v13);
        v16 = v13 + 4;
        v15 -= 4;
        v13 += 8;
        v25 = vld2q_f64(v16);
        v26.val[1] = vuzp2q_s32(v24.val[0], v25.val[0]);
        v26.val[0] = vuzp1q_s32(v24.val[0], v25.val[0]);
        v26.val[3] = vuzp2q_s32(v24.val[1], v25.val[1]);
        v26.val[2] = vuzp1q_s32(v24.val[1], v25.val[1]);
        vst4q_f32(v10, v26);
        v10 += 16;
      } while (v15 != 0);
      if (v12 != a3) {
        v17 = a3 & 3;
        if (v17 == 0) {
        LABEL_19:
          v19 = v12;
          goto LABEL_20;
        }
      LABEL_15:
        v18 = a4 + 16 * v12 + 8;
        v19 = v12 + v17;
        do {
          --v17;
          *(_DWORD*)v14 = *(_QWORD*)(v18 - 8);
          v14[1] = *(float*)(v18 - 4);
          *((_DWORD*)v14 + 2) = *(_QWORD*)v18;
          v20 = *(_DWORD*)(v18 + 4);
          v18 += 16;
          *((_DWORD*)v14 + 3) = v20;
          v14 += 4;
        } while (v17 != 0);
      LABEL_20:
        if (v12 - (unsigned __int64)a3 <= 0xFFFFFFFFFFFFFFFCLL) {
          v21 = a3 - v19;
          v22 = a4 + 16 * v19 + 32;
          do {
            v21 -= 4;
            *(_DWORD*)v14 = *(_QWORD*)(v22 - 32);
            v14[1] = *(float*)(v22 - 28);
            *((_DWORD*)v14 + 2) = *(_QWORD*)(v22 - 24);
            v14[3] = *(float*)(v22 - 20);
            *((_DWORD*)v14 + 4) = *(_QWORD*)(v22 - 16);
            v14[5] = *(float*)(v22 - 12);
            *((_DWORD*)v14 + 6) = *(_QWORD*)(v22 - 8);
            v14[7] = *(float*)(v22 - 4);
            *((_DWORD*)v14 + 8) = *(_QWORD*)v22;
            v14[9] = *(float*)(v22 + 4);
            *((_DWORD*)v14 + 10) = *(_QWORD*)(v22 + 8);
            v14[11] = *(float*)(v22 + 12);
            *((_DWORD*)v14 + 12) = *(_QWORD*)(v22 + 16);
            v14[13] = *(float*)(v22 + 20);
            *((_DWORD*)v14 + 14) = *(_QWORD*)(v22 + 24);
            v23 = *(_DWORD*)(v22 + 28);
            v22 += 64;
            *((_DWORD*)v14 + 15) = v23;
            v14 += 16;
          } while (v21 != 0);
        }
      }
    }
    *(_QWORD*)result = v14;
  }
  return result;
}

__int64 SdkHr_6953c0(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  int v4;
  int32x4_t v6;
  int32x4_t v7;
  __int64 v8;
  int32x4_t* v9;
  int32x4_t v10;
  int32x4_t v11;
  __int64 v12;
  __int64 v13;
  int* v14;
  int v15;
  int v16;

  v1 = *(unsigned int*)(a1 + 76);
  if ((_DWORD)v1 == 0) {
    return 0xFFFFFFFFLL;
  }
  v2 = *(unsigned int*)(a1 + 72);
  if ((unsigned int)v1 < 8) {
    v3 = 0;
    v4 = -1;
    goto LABEL_8;
  }
  ((uint64_t*)&v6)[0] = -1;
  ((uint64_t*)&v6)[1] = -1;
  ((uint64_t*)&v7)[0] = -1;
  ((uint64_t*)&v7)[1] = -1;
  v3 = (unsigned int)v1 & 0xFFFFFFF8;
  v8 = v3;
  v9 = (int32x4_t*)(v2 + 4 * v1 + a1 + 16);
  do {
    v10 = v9[-1];
    v11 = *v9;
    v8 -= 8;
    v9 += 2;
    v6 = vmaxq_s32(v6, v10);
    v7 = vmaxq_s32(v7, v11);
  } while (v8 != 0);
  v4 = vmaxvq_s32(vmaxq_s32(v6, v7));
  if (v3 != v1) {
  LABEL_8:
    v12 = 4 * v3 + 4 * v1;
    v13 = v1 - v3;
    v14 = (int*)(a1 + v2 + v12);
    do {
      v16 = *v14++;
      v15 = v16;
      if (v4 <= v16) {
        v4 = v15;
      }
      --v13;
    } while (v13 != 0);
  }
  return (unsigned int)v4;
}

__int64 SdkHr_69dc00(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 result;
  int v7;
  int v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  _BOOL4 v19;
  __int64 v20;
  __int64 v21;
  _BOOL4 v22;
  __int64 v23;
  __int64 v24;
  _BOOL4 v25;
  __int64 v26;
  __int64 v27;
  _BOOL4 v28;
  __int64 v29;
  __int64 v30;
  _BOOL4 v31;
  __int64 v32;
  __int64 v33;
  _BOOL4 v34;
  __int64 v35;
  bool v36;
  int v37;
  int v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  int v43;
  __int64 v44;
  __int64 v45;
  int v46;
  int32x2_t v47;
  _DWORD v48[8];

  result = 0;
  if (a2 == 0 || a1 == 0 || a3 == 0) {
    return result;
  }
  SdkRoutine_858d40(a1 + 2440);
  v7 = *(_DWORD*)(a1 + 2424);
  if (v7 == 0) {
    goto LABEL_51;
  }
  v8 = 0;
  while (1) {
    v9 = *(_QWORD*)(*(_QWORD*)(a1 + 2416) + 8LL * v8);
    v10 = *(_QWORD*)(v9 + 24);
    v11 = *(_QWORD*)(v9 + 56);
    v12 = a2 - v10;
    if (a2 >= v10 && a2 < v11 + v10) {
      break;
    }
    if (v7 == ++v8) {
      goto LABEL_51;
    }
  }
  if (*(_DWORD*)v9 == 0 && (*(_BYTE*)(v9 + 16) & 1) != 0 ||
      (v14 = *(_QWORD*)(v9 + 48)) == 0) {
  LABEL_51:
    SdkRoutine_858d50(a1 + 2440);
    return 0;
  }
  SdkRoutine_858d50(a1 + 2440);
  v15 = (_QWORD*)((v12 + v14) & 0xFFFFFFFFFFFFFF00LL);
  if ((unsigned __int64)v15 >= v11 + v14) {
    return 0;
  }
  v16 = v14 - v10 - (_QWORD)v15 - 128;
  while (*v15 != 0x1234567800FF7802LL || v15[1] != 0xFC00000000F00LL) {
    v15 += 16;
    v16 -= 128;
    if ((unsigned __int64)v15 >= v11 + v14) {
      return 0;
    }
  }
  v48[0] = 305419896;
  if ((v15[2] & 0x1FFLL) != 2) {
    goto LABEL_54;
  }
  v17 = v15[2] & 0xFFFFFE02LL;
  v18 = HIDWORD(v15[2]);
  v19 = v17 == 16742402 && v15[3] == 0xFC00000000F00LL;
  if (v17 != 16742402 || v15[3] != 0xFC00000000F00LL) {
    LODWORD(v18) = 0;
  }
  v48[1] = v18;
  if (v19) {
    if ((v15[4] & 0x1FFLL) != 2) {
      goto LABEL_60;
    }
    v20 = v15[4] & 0xFFFFFE02LL;
    v21 = HIDWORD(v15[4]);
    v22 = v20 == 16742402 && v15[5] == 0xFC00000000F00LL;
    if (v20 != 16742402 || v15[5] != 0xFC00000000F00LL) {
      LODWORD(v21) = 0;
    }
    v48[2] = v21;
    if (v22) {
      if ((v15[6] & 0x1FFLL) != 2) {
        goto LABEL_61;
      }
      v23 = v15[6] & 0xFFFFFE02LL;
      v24 = HIDWORD(v15[6]);
      v25 = v23 == 16742402 && v15[7] == 0xFC00000000F00LL;
      if (v23 != 16742402 || v15[7] != 0xFC00000000F00LL) {
        LODWORD(v24) = 0;
      }
      v48[3] = v24;
      if (v25) {
        if ((v15[8] & 0x1FFLL) != 2) {
          goto LABEL_62;
        }
        v26 = v15[8] & 0xFFFFFE02LL;
        v27 = HIDWORD(v15[8]);
        v28 = v26 == 16742402 && v15[9] == 0xFC00000000F00LL;
        if (v26 != 16742402 || v15[9] != 0xFC00000000F00LL) {
          LODWORD(v27) = 0;
        }
        v48[4] = v27;
        if (v28) {
          if ((v15[10] & 0x1FFLL) != 2) {
            goto LABEL_63;
          }
          v29 = v15[10] & 0xFFFFFE02LL;
          v30 = HIDWORD(v15[10]);
          v31 = v29 == 16742402 && v15[11] == 0xFC00000000F00LL;
          if (v29 != 16742402 || v15[11] != 0xFC00000000F00LL) {
            LODWORD(v30) = 0;
          }
          v48[5] = v30;
          if (v31) {
            if ((v15[12] & 0x1FFLL) != 2) {
              goto LABEL_64;
            }
            v32 = v15[12] & 0xFFFFFE02LL;
            v33 = HIDWORD(v15[12]);
            v34 = v32 == 16742402 && v15[13] == 0xFC00000000F00LL;
            if (v32 != 16742402 || v15[13] != 0xFC00000000F00LL) {
              LODWORD(v33) = 0;
            }
            v48[6] = v33;
            if (v34) {
              if ((v15[14] & 0x1FFLL) == 2) {
                v35 = HIDWORD(v15[14]);
                v37 = (v15[14] & 0xFFFFFE02LL) == 16742402 &&
                      v15[15] == 0xFC00000000F00LL;
                v36 = v37 == 0;
                if (v37 == 0) {
                  LODWORD(v35) = 0;
                }
                v48[7] = v35;
                v38 = v37 << 31 >> 31;
                v39 = v36 ? 28LL : 32LL;
              }
              else {
                LOBYTE(v38) = 0;
                v39 = 28;
              }
            }
            else {
            LABEL_64:
              LOBYTE(v38) = 0;
              v39 = 24;
            }
          }
          else {
          LABEL_63:
            LOBYTE(v38) = 0;
            v39 = 20;
          }
        }
        else {
        LABEL_62:
          LOBYTE(v38) = 0;
          v39 = 16;
        }
      }
      else {
      LABEL_61:
        LOBYTE(v38) = 0;
        v39 = 12;
      }
    }
    else {
    LABEL_60:
      LOBYTE(v38) = 0;
      v39 = 8;
    }
  }
  else {
  LABEL_54:
    LOBYTE(v38) = 0;
    v39 = 4;
  }
  if ((v38 & 1) == 0) {
    return 0;
  }
  SdkRoutine_856130(&v44, v48, v39);
  v40 = HIDWORD(v44);
  if (v16 + HIDWORD(v44) == 0) {
    return 0;
  }
  v41 = v45;
  *(_DWORD*)(a3 + 12) = 0;
  *(_DWORD*)(a3 + 16) = v40;
  v42 = -v16 - v40;
  v43 = v46;
  *(_QWORD*)a3 = v42;
  *(_QWORD*)(a3 + 36) = v41;
  *(_DWORD*)(a3 + 8) = v43;
  if (v43 == 8) {
    *(int32x2_t*)(a3 + 12) = vrev64_s32(v47);
  }
  return 1;
}

#pragma GCC visibility pop
