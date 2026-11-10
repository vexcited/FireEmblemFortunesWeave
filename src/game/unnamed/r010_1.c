#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern _UNKNOWN GameData_1ae2029;

extern __int64 GameData_212bf68;

extern __int64* GameData_212c018[2];

extern __int64* GameData_212c598[2];

extern __int64 GameData_212c638;

extern __int64 GameData_212c6c0[2];

extern __int64* GameData_212cce0[43];

extern __int64* GameData_212ced0[3];

extern __int64 GameData_212cf60;

extern __int64* GameData_212dcd0;

extern __int64 GameData_212dd20[2];

extern __int64* GameData_2132470[2];

extern __int64 GameData_21c9e10;

extern __int64 GameData_21ee260;

extern __int64 GameData_21f3d10;

extern __int64 GameData_21f61c0;

extern __int64 GameData_21f8020;

extern _UNKNOWN GameData_21f8028;

extern __int64 GameData_220b680;

__attribute__((swiftcall)) void GameRoutine_16d1510(PSEUDO_X8, _QWORD, _QWORD);

__int64 GameRoutine_18ae960(_QWORD*, char);

void __attribute__((noreturn)) GameRoutine_18d2c80(_QWORD);

__attribute__((swiftcall)) void GameRoutine_18d7c60(PSEUDO_X8, _QWORD, _QWORD,
                                                    _QWORD);

__int64 GameRoutine_19551d0(_QWORD, _QWORD);

__int64 GameRoutine_1965ec0(void);

__int64 GameRoutine_196ee00(_QWORD, _QWORD);

void __attribute__((noreturn)) GameRoutine_197feb0(_QWORD);

__int64 GameRoutine_1997280(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_1997540(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                            _QWORD, _QWORD);

__int64 GameRoutine_1a09bc0(_QWORD);

__int64 GameRoutine_1a09c50(_QWORD);

__int64 GameRoutine_1a09c70(_QWORD);

__int64 GameRoutine_1a09fd0(_QWORD);

__int64 GameRoutine_1a09fe0(_QWORD);

__int64 GameRoutine_1a0a0c0(_QWORD);

__int64 GameRoutine_1a0a4e0(_QWORD);

__int64 GameRoutine_1a0b390(_QWORD);

__int64 GameRoutine_1a0b3b0(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_1a0b530(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_1a0b540(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_1a0b550(_QWORD, _QWORD);

__int64 GameRoutine_1a0b560(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_1a0b570(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_1a0b580(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_1a0b590(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_1a0b5a0(_QWORD, _QWORD);

__int64 GameRoutine_1a0b6a0(_QWORD);

__int64 GameRoutine_1a0b6d0(_QWORD);

__int64 GameRoutine_1a0b6e0(_QWORD);

__int64 GameRoutine_1a0b6f0(_QWORD);

__int64 GameRoutine_1a0b950(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_540(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_60a020(_QWORD, _QWORD);

void __attribute__((noreturn)) GameRoutine_60a1d0(_QWORD);

void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);

__int64 GameRoutine_60a270(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_6360e0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_64dde0(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_64df20(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);

void __attribute__((noreturn)) GameRoutine_6e5c60(_QWORD);

__attribute__((swiftcall)) void GameRoutine_70ea50(PSEUDO_X8, _QWORD, _QWORD);

__int64 GameRoutine_7a86e0(_QWORD);

__int64 GameRoutine_92aca0(_QWORD, _QWORD);

__attribute__((swiftcall)) void GameRoutine_9a6660(PSEUDO_X8, _QWORD, _QWORD,
                                                   _QWORD, _QWORD);

__int64 GameRoutine_9b11a0(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_9b9250(void);

__int64 GameRoutine_a539c0(_QWORD);

__int64 GameRoutine_b86bc0(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_c6a240(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_c8b000(_QWORD, _QWORD, _QWORD);

__int64* GameHr_18af120(_QWORD* a1, __int64* a2)
{
  __int64* result;
  __int64 v5;
  __int64* v6;
  __int64* v7;
  __int64* v8;
  __int64 v9;
  __int64* v10;
  __int64* i;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  __int64 v22;
  __int64* v23;
  __int64 v24;
  __int64* v25;

  result = (__int64*)a2[1];
  if (result != nullptr) {
    result = (__int64*)GameRoutine_1a0a0c0(result);
    if (result != nullptr) {
      v5 = *a2;
      v6 = result;
      if (v5 != 0) {
        v8 = (__int64*)a1[21];
        v7 = (__int64*)a1[22];
        if (v8 != v7) {
          while (1) {
            result = (__int64*)v8[1];
            if (result != nullptr) {
              result = (__int64*)GameRoutine_1a0a0c0(result);
              if (result != nullptr) {
                v9 = *v8;
                if (atomic_fetch_add((atomic_ullong* volatile)(result + 1),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  v10 = result;
                  (*(void (**)(__int64*))(*result + 16))(result);
                  result = (__int64*)GameRoutine_1a09c50(v10);
                }
                if (v5 == v9) {
                  break;
                }
              }
            }
            v8 += 2;
            if (v8 == v7) {
              v8 = v7;
              goto LABEL_25;
            }
          }
        }
        if (v8 != v7) {
          for (i = v8 + 2; i != v7; i += 2) {
            v12 = i[1];
            if (v12 != 0) {
              result = (__int64*)GameRoutine_1a0a0c0(v12);
              if (result != nullptr) {
                v13 = *i;
                if (atomic_fetch_add((atomic_ullong* volatile)(result + 1),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  v14 = result;
                  (*(void (**)(__int64*))(*result + 16))(result);
                  result = (__int64*)GameRoutine_1a09c50(v14);
                }
                if (v5 == v13) {
                  continue;
                }
              }
            }
            v15 = *i;
            v16 = i[1];
            *i = 0;
            i[1] = 0;
            result = (__int64*)v8[1];
            *v8 = v15;
            v8[1] = v16;
            if (result != nullptr) {
              result = (__int64*)GameRoutine_1a09c50(result);
            }
            v8 += 2;
          }
        }
      LABEL_25:
        if (v8 != (__int64*)a1[22]) {
          result = (__int64*)a1[28];
          if (result != nullptr) {
            result = (__int64*)GameRoutine_1a0a0c0(result);
            if (result != nullptr) {
              v17 = a1[27];
              v18 = result;
              if (v17 != 0) {
                v19 = *(_QWORD*)(v17 + 8);
                if (v19 != 0) {
                  v20 = *(_QWORD*)(v19 + 24);
                }
                else {
                  v20 = 0;
                }
                if ((atomic_load_explicit(
                         (atomic_uchar* volatile)&GameData_21f8028,
                         memory_order_acquire) &
                     1) == 0) {
                  result = (__int64*)GameRoutine_1a09fd0(&GameData_21f8028);
                  if ((_DWORD)result != 0) {
                    GameData_21f8020 = GameRoutine_9b9250();
                    result = (__int64*)GameRoutine_1a09fe0(&GameData_21f8028);
                  }
                }
                if (v20 != 0) {
                  result = (__int64*)(*(__int64 (**)(__int64))(*(_QWORD*)v20 +
                                                               16LL))(v20);
                  if (result == &GameData_21f8020) {
                    goto LABEL_62;
                  }
                  do {
                    result = (__int64*)*result;
                  } while (result != &GameData_21f8020 && result != nullptr);
                  if (result != nullptr) {
                  LABEL_62:
                    GameRoutine_16d1510((void*)&v24, v5, v20);
                    result = v25;
                    if (v25 != nullptr) {
                      v22 = v25[1];
                      result = (__int64*)GameRoutine_1a09c50(v25);
                      if (v22 != -1) {
                        v24 = 0;
                        v25 = nullptr;
                        GameRoutine_c8b000(GameData_220b680, &v24, 0);
                        result = v25;
                        if (v25 != nullptr) {
                          result = (__int64*)GameRoutine_1a09c50(v25);
                        }
                      }
                    }
                  }
                }
              }
              if (atomic_fetch_add((atomic_ullong* volatile)(v18 + 1),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64*))(*v18 + 16))(v18);
                result = (__int64*)GameRoutine_1a09c50(v18);
              }
            }
          }
          v23 = (__int64*)a1[22];
          if (v8 != v23) {
            do {
              result = (__int64*)*(v23 - 1);
              if (result != nullptr) {
                result = (__int64*)GameRoutine_1a09c50(result);
              }
              v23 -= 2;
            } while (v23 != v8);
            a1[22] = v8;
          }
          if ((__int64*)a1[21] != v8) {
            result = (__int64*)GameRoutine_18ae960(a1, 0);
          }
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 1),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64*))(*v6 + 16))(v6);
        return (__int64*)GameRoutine_1a09c50(v6);
      }
    }
  }
  return result;
}

__int64 GameHr_18d25a0(__int64 a1)
{
  __int64 v1;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  char* v6;
  char* v7;
  unsigned __int64 v8;
  char* v9;
  int v10;
  char v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  char v15;
  int v16;
  __int64 v17;
  _QWORD* v18;
  char* v19;
  unsigned __int64 v20;
  __int64 v21;
  char* v22;
  __int64 v23;
  unsigned __int64 v24;
  bool v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  int* v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  unsigned int v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  char* v38;
  __int64 v39;
  int v40;
  unsigned __int64 v41;
  __int64 v42;
  char* v43;
  bool v44;
  __int64 v45;
  char* v46;
  char* v47;
  unsigned __int64 v48;
  __int64 v49;
  int v50;
  __int64 v51;
  __int64* v52;
  _QWORD* v53;
  _QWORD v54[3];
  _QWORD v55[3];
  int v56;
  __int64 v57;
  int v58;
  __int16 v59;
  __int64 v60;
  unsigned __int64 v61;
  char* v62;
  _BYTE v63[16];
  _QWORD v64[194];

  v1 = *(_QWORD*)(a1 + 48);
  v3 = GameData_212c598[0];
  if (*(int*)(*GameData_212c598[0] + 184) >= 1) {
    do {
      GameRoutine_1a09bc0(33000000);
    } while (*(int*)(*v3 + 184) > 0);
  }
  if ((*(_BYTE*)(a1 + 56) & 1) != 0) {
    GameRoutine_60a270(v55, *(_QWORD*)(a1 + 72), *(_QWORD*)(a1 + 64));
  }
  else {
    v4 = *(_QWORD*)(a1 + 64);
    v5 = *(_QWORD*)(a1 + 72);
    v55[0] = *(_QWORD*)(a1 + 56);
    v55[1] = v4;
    v55[2] = v5;
  }
  v6 = (char*)v55 + 1;
  if ((v55[0] & 1) != 0) {
    v7 = (char*)v55[2];
  }
  else {
    v7 = (char*)v55 + 1;
  }
  v8 = (unsigned __int64)LOBYTE(v55[0]) >> 1;
  if ((v55[0] & 1) != 0) {
    v8 = v55[1];
  }
  v9 = v7 - 1;
  while (v8 != 0) {
    v10 = (unsigned __int8)v9[v8--];
    if (v10 == 58) {
      if (v8 != -1) {
        if (v8 == -3) {
          if ((v55[0] & 1) != 0) {
            v55[1] = 0;
            *(_BYTE*)v55[2] = 0;
          }
          else {
            LOWORD(v55[0]) = 0;
          }
        }
        else {
          GameRoutine_a539c0(v55);
        }
      }
      break;
    }
  }
  v11 = v55[0];
  if ((v55[0] & 1) != 0) {
    v6 = (char*)v55[2];
  }
  if (v6 != nullptr) {
    v12 = GameData_212c018[0];
    v13 = *GameData_212c018[0];
    v14 = GameRoutine_1a09c70(v6);
    v15 = GameRoutine_6360e0(v13, v6, v14, 0, 2);
    v11 = v55[0];
    if ((v15 & 1) != 0) {
      if ((v55[0] & 1) != 0) {
        GameRoutine_60a270(v54, v55[2], v55[1]);
      }
      else {
        qmemcpy(v54, v55, sizeof(v54));
      }
      v17 = *(_QWORD*)(*v12 + 4752);
      v18 = (_QWORD*)GameData_212bf68;
      if (v17 != 0) {
        if ((v54[0] & 1) != 0) {
          v19 = (char*)v54[2];
        }
        else {
          v19 = (char*)v54 + 1;
        }
        if ((v54[0] & 1) != 0) {
          v20 = v54[1];
        }
        else {
          v20 = (unsigned __int64)LOBYTE(v54[0]) >> 1;
        }
        GameRoutine_18d7c60((void*)v64, v17, v19, v20);
        if ((v54[0] & 1) != 0 && v54[2] != 0) {
          v21 = 128;
          if (*(_QWORD*)(*v18 + 200LL) == 0) {
            v21 = 56;
          }
          GameRoutine_1a0a4e0(*v18 + v21);
        }
        qmemcpy(v54, v64, sizeof(v54));
      }
      if ((v54[0] & 1) != 0) {
        v22 = (char*)v54[2];
      }
      else {
        v22 = (char*)v54 + 1;
      }
      v23 = GameRoutine_651b90(*v18, 0x2000000, 4096, 0);
      *(_QWORD*)(v1 + 3944) = v23;
      if (v23 == 0) {
        v16 = 17;
        if ((v54[0] & 1) == 0) {
          goto LABEL_62;
        }
        goto LABEL_58;
      }
      if ((unsigned int)GameRoutine_1a0b530(v1 + 3968, v23, 0x2000000,
                                            10485760) != 0 ||
          ((GameRoutine_60a020(v1 + 4792, v22),
            v24 = *(unsigned __int8*)(v1 + 4792), v25 = (v24 & 1) == 0,
            v26 = v24 >> 1, !v25)
               ? (v27 = *(_QWORD*)(v1 + 4808))
               : (v27 = v1 + 4793),
           !v25 ? (v28 = *(unsigned int*)(v1 + 4800))
                : (v28 = (unsigned int)v26),
           (unsigned int)GameRoutine_1a0b540(v1 + 3968, v27, v28) != 0 ||
               (v29 = (int*)(v1 + 3952), (unsigned int)GameRoutine_1a0b550(
                                             v1 + 3968, v1 + 3952) != 0))) {
      LABEL_55:
        v16 = 15;
        if ((v54[0] & 1) != 0) {
        LABEL_58:
          if (v54[2] != 0) {
            v30 = 128;
            if (*(_QWORD*)(*v18 + 200LL) == 0) {
              v30 = 56;
            }
            GameRoutine_1a0a4e0(*v18 + v30);
          }
        }
      LABEL_62:
        if ((v55[0] & 1) == 0) {
          goto LABEL_67;
        }
        goto LABEL_63;
      }
      GameRoutine_1a0b390(v64);
      if (*v29 < 1) {
      LABEL_130:
        v50 = *(_DWORD*)(v1 + 3928);
        *(_QWORD*)(v1 + 4880) = *(_QWORD*)(v1 + 4872);
        if (v50 < 0 ||
            (unsigned int)GameRoutine_1a0b5a0(v1 + 3968, v1 + 824) == 0 &&
                (v51 = *(unsigned int*)(v1 + 3928), *(_DWORD*)(v1 + 4848) = v51,
                 (unsigned int)GameRoutine_1a0b560(v1 + 3968, v1 + 832, v51) ==
                     0)) {
          v16 = 0;
          *(_DWORD*)(v1 + 4892) = 1;
          if ((v54[0] & 1) == 0) {
            goto LABEL_62;
          }
          goto LABEL_58;
        }
        goto LABEL_55;
      }
      v35 = 0;
      v52 = (__int64*)(v1 + 4824);
      v53 = (_QWORD*)(v1 + 3960);
      while (1) {
        if ((unsigned int)GameRoutine_1a0b560(v1 + 3968, v64, v35) != 0) {
          goto LABEL_55;
        }
        if ((GameRoutine_1a0b570(v64, v63, 16, "mime") & 1) != 0) {
          break;
        }
      LABEL_72:
        if ((int)++v35 >= *v29) {
          goto LABEL_130;
        }
      }
      v36 = GameRoutine_1a09c70(v63);
      if (v36 >= 0xFFFFFFFFFFFFFFF7LL) {
        GameRoutine_60a1d0(v36);
      }
      v37 = v36;
      if (v36 >= 0x17) {
        if ((v36 | 7) == 0x17) {
          v39 = 26;
        }
        else {
          v39 = (v36 | 7) + 1;
        }
        v38 = (char*)GameRoutine_651b90(*v18, v39, 16, 0);
        v61 = v37;
        v62 = v38;
        v60 = v39 | 1;
      }
      else {
        v38 = (char*)&v60 + 1;
        LOBYTE(v60) = 2 * v36;
        if (v36 == 0) {
          goto LABEL_84;
        }
      }
      GameRoutine_1a0b950(v38, v63, v37);
    LABEL_84:
      v38[v37] = 0;
      v40 = v60 & 1;
      if (v40 != 0) {
        v41 = v61;
      }
      else {
        v41 = (unsigned __int8)v60 >> 1;
      }
      if (v41 != 0) {
        v42 = v41 >= 6 ? 6LL : v41;
        v43 = v40 != 0 ? v62 : (char*)&v60 + 1;
        GameRoutine_1a0b950(&v58, v43, v42);
        *((_BYTE*)&v58 + v42) = 0;
        if (v41 >= 6) {
          v44 = v58 == 1701079414 && v59 == 12143;
          if (v44 && *(_DWORD*)(v1 + 3928) == -1) {
            *(_DWORD*)(v1 + 3928) = v35;
            GameRoutine_1a0b580(v64, v1 + 3920, "width");
            GameRoutine_1a0b580(v64, v1 + 3924, "height");
            if ((GameRoutine_1a0b3b0(v64, v53, "max-input-size") & 1) == 0 ||
                *(_QWORD*)(v1 + 3960) >> 16 == 0) {
              *v53 = 0x10000;
            }
            *(_DWORD*)(v1 + 4852) = *(_DWORD*)(v1 + 3920);
            *(_DWORD*)(v1 + 4856) = *(_DWORD*)(v1 + 3924);
            if (v52 != &v60) {
              if ((*(_BYTE*)v52 & 1) != 0) {
                if ((v60 & 1) != 0) {
                  v47 = v62;
                }
                else {
                  v47 = (char*)&v60 + 1;
                }
                if ((v60 & 1) != 0) {
                  v48 = v61;
                }
                else {
                  v48 = (unsigned __int64)(unsigned __int8)v60 >> 1;
                }
                GameRoutine_64dde0(v52, v47, v48);
              }
              else if ((v60 & 1) != 0) {
                GameRoutine_64df20(v52, v62, v61);
              }
              else {
                v45 = v60;
                v46 = v62;
                *(_QWORD*)(v1 + 4832) = v61;
                *(_QWORD*)(v1 + 4840) = v46;
                *v52 = v45;
              }
            }
            if ((GameRoutine_1a0b590(v64, v1 + 4872, "duration-us") & 1) == 0) {
              *(_QWORD*)(v1 + 4872) = 0;
            }
            v57 = 0;
            v56 = 0;
            if ((GameRoutine_1a0b580(v64, (char*)&v57 + 4, "color-standard") &
                 1) != 0) {
              *(_DWORD*)(v1 + 2376) = HIDWORD(v57);
            }
            if ((GameRoutine_1a0b580(v64, &v57, "color-range") & 1) != 0) {
              *(_DWORD*)(v1 + 2380) = v57;
            }
            if ((GameRoutine_1a0b580(v64, &v56, "color-transfer") & 1) != 0) {
              *(_DWORD*)(v1 + 2384) = v56;
            }
            v40 = v60 & 1;
          }
        }
      }
      if (v40 != 0 && v62 != nullptr) {
        v49 = 128;
        if (*(_QWORD*)(*v18 + 200LL) == 0) {
          v49 = 56;
        }
        GameRoutine_1a0a4e0(*v18 + v49);
      }
      goto LABEL_72;
    }
  }
  v16 = 23;
  if ((v11 & 1) != 0) {
  LABEL_63:
    if (v55[2] != 0) {
      v31 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v31 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v31);
    }
  }
LABEL_67:
  v32 = GameRoutine_1a0b6e0(a1 + 24);
  if ((*(_BYTE*)(a1 + 40) & 1) != 0 ||
      (v33 = *(_QWORD*)(a1 + 16), v64[0] = 0, v32 = GameRoutine_1a0b6a0(v64),
       v33 != 0)) {
    GameRoutine_18d2c80(v32);
  }
  *(_DWORD*)(a1 + 40) |= 5u;
  *(_DWORD*)(a1 + 44) = v16;
  GameRoutine_1a0b6d0(a1 + 32);
  return GameRoutine_1a0b6f0(a1 + 24);
}

__int64* GameHr_194cb90(__int64* result, __int64* a2, __int64* a3, __int64* a4,
                        __int64* a5, __int64 a6)
{
  __int64 v6;
  float v7;
  float v8;
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

  v6 = **(_QWORD**)(a6 + 8);
  v7 = *(float*)((char*)a2 + v6);
  v8 = *(float*)((char*)a3 + v6);
  if (v7 >= *(float*)((char*)result + v6)) {
    if (v8 < v7) {
      v10 = *a2;
      *a2 = *a3;
      *a3 = v10;
      if (*(float*)((char*)a2 + **(_QWORD**)(a6 + 8)) <
          *(float*)((char*)result + **(_QWORD**)(a6 + 8))) {
        v11 = *result;
        *result = *a2;
        *a2 = v11;
      }
    }
  }
  else {
    v9 = *result;
    if (v8 < v7) {
      *result = *a3;
    LABEL_9:
      *a3 = v9;
      goto LABEL_10;
    }
    *result = *a2;
    *a2 = v9;
    if (*(float*)((char*)a3 + **(_QWORD**)(a6 + 8)) <
        *(float*)((char*)a2 + **(_QWORD**)(a6 + 8))) {
      *a2 = *a3;
      goto LABEL_9;
    }
  }
LABEL_10:
  v12 = **(_QWORD**)(a6 + 8);
  if (*(float*)((char*)a4 + v12) < *(float*)((char*)a3 + v12)) {
    v13 = *a3;
    *a3 = *a4;
    *a4 = v13;
    v12 = **(_QWORD**)(a6 + 8);
    if (*(float*)((char*)a3 + v12) < *(float*)((char*)a2 + v12)) {
      v14 = *a2;
      *a2 = *a3;
      *a3 = v14;
      v12 = **(_QWORD**)(a6 + 8);
      if (*(float*)((char*)a2 + v12) < *(float*)((char*)result + v12)) {
        v15 = *result;
        *result = *a2;
        *a2 = v15;
        v12 = **(_QWORD**)(a6 + 8);
      }
    }
  }
  if (*(float*)((char*)a5 + v12) < *(float*)((char*)a4 + v12)) {
    v16 = *a4;
    *a4 = *a5;
    *a5 = v16;
    if (*(float*)((char*)a4 + **(_QWORD**)(a6 + 8)) <
        *(float*)((char*)a3 + **(_QWORD**)(a6 + 8))) {
      v17 = *a3;
      *a3 = *a4;
      *a4 = v17;
      if (*(float*)((char*)a3 + **(_QWORD**)(a6 + 8)) <
          *(float*)((char*)a2 + **(_QWORD**)(a6 + 8))) {
        v18 = *a2;
        *a2 = *a3;
        *a3 = v18;
        if (*(float*)((char*)a2 + **(_QWORD**)(a6 + 8)) <
            *(float*)((char*)result + **(_QWORD**)(a6 + 8))) {
          v19 = *result;
          *result = *a2;
          *a2 = v19;
        }
      }
    }
  }
  return result;
}

__int64 GameHr_1954c90()
{
  __int64 v0;
  __int64 result;
  __int64 v2;
  char v3;
  _BYTE v4[15];
  __int64 v5;

  LOBYTE(v5) = 0;
  v0 = *GameData_2132470[0];
  v3 = 30;
  *(_QWORD*)v4 = 0x83E3A183E3AB82E3LL;
  *(_QWORD*)&v4[7] = 0x9AAEE5ADA8E8A983LL;
  result = GameRoutine_19551d0(v0, &v3);
  if ((v3 & 1) != 0 && v5 != 0) {
    v2 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v2 = 56;
    }
    return GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v2);
  }
  return result;
}

__int64 GameHr_1954e30()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 result;
  __int64 v4;
  _QWORD v5[2];
  __int64 v6;

  v0 = *GameData_2132470[0];
  v1 = GameData_212bf68;
  v2 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 40, 16, 0);
  *(_BYTE*)(v2 + 37) = 0;
  v5[0] = 41;
  v5[1] = 37;
  v6 = v2;
  *(_QWORD*)(v2 + 16) = 0x82E39CBFE58D8FE5LL;
  *(_QWORD*)(v2 + 24) = 0xE3A782E39583E3A8LL;
  *(_QWORD*)(v2 + 29) = 0x8883E3AF82E3A782LL;
  *(_QWORD*)v2 = 0xE45F8E88E8A98EE5LL;
  *(_QWORD*)(v2 + 8) = 0xA989E78A82E397B9LL;
  result = GameRoutine_19551d0(v0, v5);
  if ((v5[0] & 1) != 0 && v6 != 0) {
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)v1 + 200LL) == 0) {
      v4 = 56;
    }
    return GameRoutine_1a0a4e0(*(_QWORD*)v1 + v4);
  }
  return result;
}

__int64 GameHr_1964440()
{
  if (GameData_21f3d10 != 0) {
    *(_DWORD*)(GameData_21f3d10 + 232) &= ~0x20u;
  }
  return GameRoutine_1965ec0();
}

__int64 GameHr_196b6c0()
{
  __int64 v0;
  __int64 result;
  __int64 v2;
  char v3;
  unsigned __int64 v4;
  _BYTE v5[15];

  v3 = 36;
  v5[10] = 0;
  *(_WORD*)&v5[8] = -32103;
  v0 = *(_QWORD*)GameData_212dd20[0];
  v4 = 0x82E3AE92E6A989E7LL;
  *(_QWORD*)v5 = 0xE68BA7E58B96E98ALL;
  result = GameRoutine_92aca0(v0, &v3);
  if ((v3 & 1) != 0 && *(_QWORD*)&v5[7] != 0) {
    v2 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v2 = 56;
    }
    return GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v2);
  }
  return result;
}

__int64 GameHr_196b750()
{
  __int64 v0;
  __int64 v1;
  unsigned int v2;

  v0 = GameData_212c638;
  GameRoutine_c6a240(
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c638 +
                                                  32LL) -
                                       8LL) +
                            40LL) +
                 392LL),
      "Map/Hub/Hub_000/Outdoors_3_Hub_000_Evt1", 39);
  v1 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)v0 + 32LL) - 8LL) + 40LL);
  v2 = GameRoutine_540(0, "Evt1", 4);
  return GameRoutine_b86bc0(v1, v2, 1, 0);
}

__int64 GameHr_196b970()
{
  __int64 v0;
  __int64 v1;
  unsigned int v2;
  __int64 v3;
  unsigned int v4;

  v0 = GameData_212c638;
  GameRoutine_c6a240(
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c638 +
                                                  32LL) -
                                       8LL) +
                            40LL) +
                 392LL),
      "Map/Hub/Hub_000/Outdoors_3_Hub_000_Evt2", 39);
  v1 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)v0 + 32LL) - 8LL) + 40LL);
  v2 = GameRoutine_540(0, "Evt1", 4);
  GameRoutine_b86bc0(v1, v2, 0, 0);
  v3 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)v0 + 32LL) - 8LL) + 40LL);
  v4 = GameRoutine_540(0, "Evt2", 4);
  return GameRoutine_b86bc0(v3, v4, 1, 0);
}

_QWORD* GameHr_197f580(_QWORD* a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v5;
  __int64* v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  _QWORD* v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  char* v23;
  __int64* v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  char* v31;
  _QWORD* v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  char* v37;
  __int64* v38;
  char* v39;
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
  int v50;
  __int64 v51;
  int v52;
  __int64 v53;
  __int64 v54;
  __int16 v55;
  int v56;
  int v57;
  _QWORD* result;
  __int16 v59;
  char v60;
  char v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  int v65;
  _QWORD v66[2];
  __int64 v67;
  int v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;

  v1 = *GameData_212dcd0;
  v2 = *(_QWORD*)(*GameData_212dcd0 + 48);
  v3 = *(_QWORD*)(*GameData_212dcd0 + 56);
  if ((int)((unsigned __int64)(v3 - v2) >> 3) >= 1) {
    v5 = 0;
    v6 = GameData_212cce0[0];
    v7 = (_QWORD*)GameData_212bf68;
    do {
      v8 = *(_QWORD*)(*(_QWORD*)(*v6 + 64) +
                      8LL * *(int*)(*(_QWORD*)(v1 + 72) + 4 * v5));
      if (*(_WORD*)(v8 + 16) != 0) {
        if ((int)v5 >= (unsigned __int64)((v3 - v2) >> 3)) {
          v9 = 0;
        }
        else {
          v9 = *(_QWORD*)(v2 + 8LL * (int)v5);
        }
        v10 = *(_DWORD*)(v1 + 16);
        if (v10 <= 1) {
          v11 = 1;
        }
        else {
          v11 = (unsigned int)v10;
        }
        v12 = X8CALL_X0(_QWORD*, GameRoutine_9a6660((void*)v66, v8, v9, v11,
                                                    GameData_212ced0[0] + 2));
        v14 = a1[28];
        v13 = a1[29];
        if (v14 >= v13) {
          v24 = (__int64*)a1[27];
          v25 = v14 - (_QWORD)v24;
          v26 = 1 - 0x71C71C71C71C71C7LL * ((__int64)(v14 - (_QWORD)v24) >> 3);
          if (v26 > 0x38E38E38E38E38ELL) {
            GameRoutine_197feb0(v12);
          }
          v27 = 0x8E38E38E38E38E39LL * ((__int64)(v13 - (_QWORD)v24) >> 3);
          if (2 * v27 > v26) {
            v26 = 2 * v27;
          }
          if (v27 >= 0x1C71C71C71C71C7LL) {
            v28 = 0x38E38E38E38E38ELL;
          }
          else {
            v28 = v26;
          }
          if (v28 > 0x38E38E38E38E38ELL) {
            GameRoutine_60a210(v12);
          }
          v62 = 9 * v28;
          v12 = (_QWORD*)GameRoutine_651b90(*v7, 72 * v28, 16, 0);
          v29 = v66[0];
          v30 = v66[1];
          v31 = (char*)v12 + v25;
          v32 = v12;
          *((_QWORD*)v31 + 4) = 0;
          *((_QWORD*)v31 + 5) = 0;
          *((_QWORD*)v31 + 6) = 0;
          *(_QWORD*)v31 = v29;
          *((_QWORD*)v31 + 1) = v30;
          *((_QWORD*)v31 + 2) = v67;
          *((_DWORD*)v31 + 6) = v68;
          v33 = v70 - v69;
          v63 = v69;
          if (v70 != v69) {
            if (v33 < 0) {
            LABEL_58:
              GameRoutine_6e5c60(v12);
            }
            v34 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, v70 - v69, 16,
                                     0);
            v35 = v34 + v33;
            *((_QWORD*)v31 + 4) = v34;
            *((_QWORD*)v31 + 6) = v34 + v33;
            GameRoutine_1a0b950(v34, v63, v33);
            *((_QWORD*)v31 + 5) = v35;
          }
          v36 = v72;
          v37 = &v31[-v25];
          *((_QWORD*)v31 + 7) = v71;
          *((_QWORD*)v31 + 8) = v36;
          if (v24 != (__int64*)v14) {
            v38 = v24;
            v39 = v37;
            do {
              v40 = *v38;
              v41 = v38[1];
              v42 = v38[2];
              *((_DWORD*)v39 + 6) = *((_DWORD*)v38 + 6);
              *((_QWORD*)v39 + 1) = v41;
              *((_QWORD*)v39 + 2) = v42;
              *(_QWORD*)v39 = v40;
              *((_QWORD*)v39 + 4) = v38[4];
              *((_QWORD*)v39 + 5) = v38[5];
              *((_QWORD*)v39 + 6) = v38[6];
              v38[5] = 0;
              v38[6] = 0;
              v38[4] = 0;
              v43 = v38[7];
              v44 = v38[8];
              v38 += 9;
              *((_QWORD*)v39 + 7) = v43;
              *((_QWORD*)v39 + 8) = v44;
              v39 += 72;
            } while (v38 != (__int64*)v14);
            v45 = GameData_212bf68;
            do {
              v46 = v24[4];
              if (v46 != 0) {
                v24[5] = v46;
                v47 = 128;
                if (*(_QWORD*)(*(_QWORD*)v45 + 200LL) == 0) {
                  v47 = 56;
                }
                GameRoutine_1a0a4e0(*(_QWORD*)v45 + v47);
              }
              v24 += 9;
            } while (v24 != (__int64*)v14);
            v24 = (__int64*)a1[27];
          }
          v23 = v31 + 72;
          a1[27] = v37;
          a1[28] = v31 + 72;
          a1[29] = &v32[v62];
          if (v24 != nullptr) {
            v48 = 128;
            if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
              v48 = 56;
            }
            GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v48);
          }
          v6 = GameData_212cce0[0];
          v17 = v63;
        }
        else {
          v15 = v66[0];
          v16 = v66[1];
          *(_QWORD*)(v14 + 32) = 0;
          *(_QWORD*)(v14 + 40) = 0;
          *(_QWORD*)(v14 + 48) = 0;
          *(_QWORD*)v14 = v15;
          *(_QWORD*)(v14 + 8) = v16;
          *(_QWORD*)(v14 + 16) = v67;
          *(_DWORD*)(v14 + 24) = v68;
          v17 = v69;
          v18 = v70 - v69;
          if (v70 != v69) {
            if (v18 < 0) {
              goto LABEL_58;
            }
            v19 = v69;
            v20 = GameRoutine_651b90(*v7, v70 - v69, 16, 0);
            v21 = v20 + v18;
            *(_QWORD*)(v14 + 32) = v20;
            *(_QWORD*)(v14 + 40) = v20;
            *(_QWORD*)(v14 + 48) = v20 + v18;
            GameRoutine_1a0b950(v20, v19, v18);
            *(_QWORD*)(v14 + 40) = v21;
            v17 = v19;
          }
          v22 = v72;
          v23 = (char*)(v14 + 72);
          *(_QWORD*)(v14 + 56) = v71;
          *(_QWORD*)(v14 + 64) = v22;
        }
        a1[28] = v23;
        v7 = (_QWORD*)GameData_212bf68;
        if (v17 != 0) {
          v49 = 128;
          if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
            v49 = 56;
          }
          GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v49);
        }
        v1 = *GameData_212dcd0;
      }
      v2 = *(_QWORD*)(v1 + 48);
      v3 = *(_QWORD*)(v1 + 56);
      ++v5;
    } while (v5 < (int)((unsigned __int64)(v3 - v2) >> 3));
  }
  v50 = *(_DWORD*)(v1 + 16);
  v51 = *(_QWORD*)GameData_212c6c0[0];
  if (v50 <= 1) {
    v52 = 1;
  }
  else {
    v52 = v50;
  }
  if (GameData_21ee260 != 0) {
    v53 = GameData_21ee260 + 8;
  }
  else {
    v53 = GameData_212cf60;
  }
  if (GameData_21ee260 != 0) {
    v54 = GameData_21ee260 + 20;
  }
  else {
    v54 = GameData_212cf60;
  }
  v55 = *(_WORD*)v53;
  WORD1(v64) = *(_WORD*)(v53 + 2);
  v56 = *(_DWORD*)(v53 + 4);
  v57 = *(_DWORD*)(v53 + 8);
  LOWORD(v64) = v55;
  HIDWORD(v64) = v56;
  v65 = v57;
  do {
    result = X8CALL_X0(_QWORD*, GameRoutine_70ea50((void*)v66, &v64, v54));
    --v52;
    v64 = v66[0];
    v65 = v66[1];
  } while (v52 != 0);
  *(_WORD*)(v51 + 212) = v55;
  v59 = v64;
  v60 = BYTE2(v64);
  *(_BYTE*)(v51 + 214) = *(_BYTE*)(v53 + 2);
  v61 = *(_BYTE*)(v53 + 4);
  *(_WORD*)(v51 + 216) = v59;
  LOBYTE(v59) = BYTE4(v64);
  *(_BYTE*)(v51 + 218) = v60;
  *(_BYTE*)(v51 + 215) = v61;
  *(_BYTE*)(v51 + 219) = v59;
  return result;
}

__int64 GameHr_197fc90()
{
  unsigned int v0;
  _QWORD v2[2];

  v2[1] = &GameData_1ae2029;
  if (*(int*)(*GameData_212dcd0 + 16) <= 1) {
    v0 = 1;
  }
  else {
    v0 = *(_DWORD*)(*GameData_212dcd0 + 16);
  }
  v2[0] = GameRoutine_7a86e0(&GameData_1ae2029);
  return GameRoutine_9b11a0(&GameData_21f61c0, v2, v0);
}

__int64 GameHr_1980740(__int64 result)
{
  __int64 v1;
  __int64* v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;

  v1 = result;
  if (*(_BYTE*)(result + 176) != 1 ||
      (v2 = *(__int64**)(GameData_21c9e10 + 64),
       v3 = *(__int64**)(GameData_21c9e10 + 72), v2 == v3)) {
  LABEL_5:
    v4 = 0;
  }
  else {
    while (1) {
      v5 = *v2++;
      v4 = v5;
      result = GameRoutine_196ee00(v5, v1 + 152);
      if ((result & 1) != 0) {
        break;
      }
      if (v2 == v3) {
        goto LABEL_5;
      }
    }
  }
  *(_QWORD*)(v1 + 184) = v4;
  return result;
}

int* GameHr_1996fc0(int* result, int* a2, __int64 a3, unsigned __int64 a4,
                    int* a5, signed __int64 a6)
{
  int v6;
  int v7;
  __int64 v8;
  int* v9;
  __int64 v10;
  int* v11;
  int* v12;
  int v13;
  int v14;
  int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v21;
  int* v22;
  int* v26;
  int* v29;
  int* v30;
  int* v31;
  int* v32;
  int v33;
  __int64 v34;
  int v35;
  int v36;
  __int64 v37;
  __int64 v38;
  int v39;
  int v40;

  if (a4 >= 2) {
    if (a4 == 2) {
      v6 = *(a2 - 1);
      v7 = *result;
      v8 = *(_QWORD*)(*(_QWORD*)a3 + 18736LL);
      if (*(_DWORD*)(v8 + 1440LL * v6 + 36) +
              *(_DWORD*)(v8 + 1440LL * v6 + 32) <
          *(_DWORD*)(v8 + 1440LL * v7 + 36) +
              *(_DWORD*)(v8 + 1440LL * v7 + 32)) {
        *result = v6;
        *(a2 - 1) = v7;
      }
    }
    else if ((__int64)a4 > 128) {
      v19 = a4 >> 1;
      v21 = a4 - (a4 >> 1);
      if ((__int64)a4 <= a6) {
        v26 = result;
        v29 = a5;
        ((void (*)(void))GameRoutine_1997280)();
        v30 = &v29[v19];
        result = (int*)GameRoutine_1997280(&v26[v19], a2, a3, v21, v30);
        v31 = &v29[a4];
        v32 = v30;
        while (v32 != v31) {
          v33 = *v32;
          v34 = *(_QWORD*)(*(_QWORD*)a3 + 18736LL);
          v35 = *(_DWORD*)(v34 + 1440LL * v33 + 36) +
                *(_DWORD*)(v34 + 1440LL * v33 + 32);
          v36 = *(_DWORD*)(v34 + 1440LL * *v29 + 36) +
                *(_DWORD*)(v34 + 1440LL * *v29 + 32);
          if (v35 < v36) {
            v37 = 0;
          }
          else {
            v33 = *v29;
            v37 = 4;
          }
          v29 = (int*)((char*)v29 + v37);
          if (v35 >= v36) {
            v38 = 0;
          }
          else {
            v38 = 4;
          }
          *v26++ = v33;
          v32 = (int*)((char*)v32 + v38);
          if (v29 == v30) {
            while (v32 != v31) {
              v40 = *v32++;
              *v26++ = v40;
            }
            return result;
          }
        }
        while (v29 != v30) {
          v39 = *v29++;
          *v26++ = v39;
        }
      }
      else {
        v22 = result;
        GameHr_1996fc0(result, &result[v19], a3, a4 >> 1, a5, a6);
        GameHr_1996fc0(&v22[v19], a2, a3, v21, a5, a6);
        return (int*)GameRoutine_1997540(v22, &v22[v19], a2, a3, v19, v21, a5,
                                         a6);
      }
    }
    else if (result != a2) {
      v9 = result + 1;
      if (result + 1 != a2) {
        v10 = 0;
        v11 = result;
        do {
          v14 = *v11;
          v13 = v11[1];
          v11 = v9;
          v15 = v14;
          v16 = *(_QWORD*)(*(_QWORD*)a3 + 18736LL);
          if (*(_DWORD*)(v16 + 1440LL * v13 + 36) +
                  *(_DWORD*)(v16 + 1440LL * v13 + 32) <
              *(_DWORD*)(v16 + 1440LL * v15 + 36) +
                  *(_DWORD*)(v16 + 1440LL * v15 + 32)) {
            v17 = v10;
            do {
              *(int*)((char*)result + v17 + 4) = v15;
              if (v17 == 0) {
                v12 = result;
                goto LABEL_11;
              }
              v15 = *(int*)((char*)result + v17 - 4);
              v17 -= 4;
              v18 = *(_QWORD*)(*(_QWORD*)a3 + 18736LL);
            } while (*(_DWORD*)(v18 + 1440LL * v13 + 36) +
                         *(_DWORD*)(v18 + 1440LL * v13 + 32) <
                     *(_DWORD*)(v18 + 1440LL * v15 + 36) +
                         *(_DWORD*)(v18 + 1440LL * v15 + 32));
            v12 = (int*)((char*)result + v17 + 4);
          LABEL_11:
            *v12 = v13;
          }
          v9 = v11 + 1;
          v10 += 4;
        } while (v11 + 1 != a2);
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
