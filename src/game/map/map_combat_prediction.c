#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_19f2a10(__int64, __int64, __int64*);
__int64 GameRoutine_19f4d00(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_84edc0(_QWORD, _QWORD);
__int64 GameRoutine_a157e0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 GameData_21c99b0;
extern __int64 GameData_21c99b8;
__int64 MapCombatPrediction_Unknown4(__int64 result);
__int64 MapCombatPrediction_Unknown5(__int64 a1);

__int64 MapCombatPrediction_Unknown4(__int64 result)
{
  __int64 v1;
  __int64 v2;
  _QWORD* v3;
  _WORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  int v9;
  __int64 v10;
  __int64 v11;
  char* v12;
  char* v13;
  int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned int v18;
  unsigned int v19;
  _QWORD* v20;
  unsigned int v21;
  unsigned __int64 v22;
  unsigned __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64** v27;
  __int64* v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  _BYTE* v33;
  bool v34;
  unsigned __int8* v35;
  __int64 v36;
  _BYTE* v37;
  bool v38;
  unsigned __int8* v39;
  __int64 v40;
  unsigned __int8* v41;
  int v42;
  __int64 v43;
  __int64 v44;
  int v45;
  __int64 v46[2];
  int v47;

  v1 = *(_QWORD*)(result + 96);
  if (v1 == 0) {
    return result;
  }
  v2 = *(_QWORD*)(result + 120);
  v3 = (_QWORD*)result;
  if (v2 == 0) {
    return result;
  }
  v4 = *(_WORD**)(result + 80);
  if (v4 == nullptr) {
    return result;
  }
  if (*(_DWORD*)(result + 128) == 1) {
    v5 = *(_QWORD*)(result + 88);
    if (v5 != 0) {
      v6 = *(_WORD*)(v5 + 16) & 0xFFF;
      v7 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) + 8 * v6);
      v8 = *(unsigned __int8*)(v7 + 278);
      v9 = *(unsigned __int8*)(v7 + 279);
      if ((_DWORD)v6 == 0) {
        result = 0;
        goto LABEL_66;
      }
      v10 = v1 + 1744;
      v11 = *(_QWORD*)(v7 + 24) + 224LL;
    }
    else {
      v31 = (unsigned __int16)*v4;
      if (*v4 == 0) {
        v42 = 0;
        v47 = 0;
        do {
        LABEL_69:
          v43 = v3[10];
          v44 = v3[11];
          v46[0] = (__int64)&v47;
          result = GameRoutine_19f4d00(v3 + 17, &v47, v46);
          v45 = v47;
          *(_QWORD*)(result + 24) = v43;
          *(_QWORD*)(result + 32) = v44;
          v47 = v45 + 1;
        } while (v45 < v42);
        return result;
      }
      v32 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) + 8 * v31);
      v33 = *(_BYTE**)(v32 + 192);
      v34 = v33 == nullptr || *(unsigned __int8*)(v32 + 72) > 7u;
      if (v34 || v33[105] == 0) {
        v33 = nullptr;
      }
      else if (v33[104] == 2) {
        v33 = nullptr;
      }
      v35 = (unsigned __int8*)(v32 + 92);
      if (v33 != nullptr) {
        v35 = v33 + 278;
      }
      v8 = *v35;
      v36 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) + 8 * v31);
      v37 = *(_BYTE**)(v36 + 192);
      v38 = v37 == nullptr || *(unsigned __int8*)(v36 + 72) > 7u;
      if (v38 || v37[105] == 0) {
        v37 = nullptr;
      }
      else if (v37[104] == 2) {
        v37 = nullptr;
      }
      v39 = (unsigned __int8*)(v36 + 93);
      v40 = *(_QWORD*)(v36 + 24);
      v10 = v1 + 1744;
      if (v37 != nullptr) {
        v41 = v37 + 279;
      }
      else {
        v41 = v39;
      }
      v9 = *v41;
      v11 = v40 + 8;
    }
    result = GameRoutine_84edc0(v10, v11);
  LABEL_66:
    v42 = result + v9;
    v47 = v8;
    if (v42 < v8) {
      return result;
    }
    goto LABEL_69;
  }
  v12 = *(char**)(v2 + 24);
  v13 = *(char**)(v2 + 32);
  if (v12 == v13) {
    return result;
  }
  while (2) {
    v16 = v3[11];
    v15 = v3[12];
    v17 = v3[10];
    v18 = *v12;
    v19 = v12[1];
    v20 = (_QWORD*)v3[15];
    v46[0] = v17;
    v46[1] = v16;
    v21 = GameRoutine_19f2a10((__int64)v3, v15, v46);
    result = GameRoutine_a157e0(v20, v18, v19, v21, v16);
    if ((result & 1) == 0) {
      goto LABEL_12;
    }
    v22 = v20[18];
    if (v22 == 0 || v20[20] == 0) {
      goto LABEL_10;
    }
    v24 = v18 | (32 * v19);
    v25 = v22 - 1;
    if ((v22 & (v22 - 1)) != 0) {
      v26 = v18 | (32 * v19);
      if (v22 <= v24) {
        v26 = (unsigned int)v24 % (unsigned int)v22;
      }
    }
    else {
      v26 = ((_DWORD)v22 - 1) & (unsigned int)v24;
    }
    v27 = *(__int64***)(v20[17] + 8 * v26);
    if (v27 == nullptr || (v28 = *v27) == nullptr) {
    LABEL_10:
      v14 = -1;
      goto LABEL_11;
    }
    if ((v22 & v25) == 0) {
      while (1) {
        v30 = v28[1];
        if (v30 == v24) {
          if (*((_DWORD*)v28 + 4) == (_DWORD)v24) {
            goto LABEL_38;
          }
        }
        else if ((v30 & v25) != v26) {
          goto LABEL_10;
        }
        v28 = (__int64*)*v28;
        if (v28 == nullptr) {
          goto LABEL_10;
        }
      }
    }
    while (1) {
      v29 = v28[1];
      if (v29 == v24) {
        break;
      }
      if (v29 >= v22) {
        v29 %= v22;
      }
      if (v29 != v26) {
        goto LABEL_10;
      }
    LABEL_27:
      v28 = (__int64*)*v28;
      if (v28 == nullptr) {
        goto LABEL_10;
      }
    }
    if (*((_DWORD*)v28 + 4) != (_DWORD)v24) {
      goto LABEL_27;
    }
  LABEL_38:
    v14 = *((_DWORD*)v28 + 5);
  LABEL_11:
    v47 = v14;
    v46[0] = (__int64)&v47;
    result = GameRoutine_19f4d00(v3 + 17, &v47, v46);
    *(_QWORD*)(result + 24) = v17;
    *(_QWORD*)(result + 32) = v16;
  LABEL_12:
    v12 += 4;
    if (v12 != v13) {
      continue;
    }
    return result;
  }
}

__int64 MapCombatPrediction_Unknown5(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  unsigned int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  unsigned int v16;
  _QWORD* v18;
  unsigned __int64 v19;
  unsigned __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  int v24;
  int v25;
  unsigned __int64 v26;
  __int64 v27;
  unsigned __int64 v29;
  __int64 v30;
  __int64** v31;
  __int64* v32;
  unsigned __int64 v33;
  __int64 v34;
  __int64** v35;
  __int64* v36;
  unsigned __int64 v37;
  __int64 v38;
  int v39;
  unsigned __int64 v40;
  __int64 v41;
  unsigned __int64 v43;
  unsigned __int64 v44;
  __int64** v45;
  __int64* v46;
  unsigned __int64 v47;
  __int64 v48;
  unsigned int v49;
  unsigned int* v50;

  v1 = *(_QWORD*)(a1 + 96);
  if (v1 == 0) {
    return 0;
  }
  v2 = *(_QWORD*)(a1 + 112);
  if (v2 == 0) {
    return 0;
  }
  if (*(_DWORD*)(a1 + 128) == 1) {
    v3 = *(char*)(v2 + 1);
    v4 = *(char*)(v2 + 2);
    v5 = *(_DWORD*)(v1 + 592);
    v6 = *(char*)(v1 + 584);
    v7 = *(char*)(v1 + 585);
    if ((unsigned int)(v5 * v5) < 2) {
      v24 = v3 - v6;
      if (v3 - v6 < 0) {
        v24 = v6 - v3;
      }
      v25 = v4 - v7;
      if (v25 < 0) {
        v25 = -v25;
      }
      v11 = v25 + v24;
    }
    else if (v5 < 1) {
      v11 = 10000;
    }
    else {
      v8 = v5 + v7;
      v9 = v5 + v6;
      v10 = v3 - v6;
      v11 = 10000;
      do {
        v12 = v4 - v7;
        v13 = v10;
        v14 = v6;
        if (v4 - v7 < 0) {
          v12 = v7 - v4;
        }
        do {
          ++v14;
          if (v13 >= 0) {
            v15 = v13;
          }
          else {
            v15 = -v13;
          }
          --v13;
          v16 = v15 + v12;
          if (v16 < v11) {
            v11 = v16;
          }
        } while (v14 < v9);
        ++v7;
      } while (v7 < v8);
    }
    v26 = *(_QWORD*)(a1 + 144);
    v27 = *(_QWORD*)(a1 + 160);
    v49 = v11;
    if (v26 != 0 && v27 != 0) {
      v29 = v26 - 1;
      if ((v26 & (v26 - 1)) != 0) {
        v30 = v11;
        if (v26 <= v11) {
          v30 = v11 % (unsigned int)v26;
        }
      }
      else {
        v30 = ((_DWORD)v26 + 0x7FFFFFFF) & v11;
      }
      v31 = *(__int64***)(*(_QWORD*)(a1 + 136) + 8 * v30);
      if (v31 != nullptr) {
        v32 = *v31;
        if (v32 != nullptr) {
          if ((v26 & v29) == 0) {
            while (1) {
              v34 = v32[1];
              if (v34 == v11) {
                if (*((_DWORD*)v32 + 4) == v11) {
                  goto LABEL_98;
                }
              }
              else if ((v34 & v29) != v30) {
                return 0;
              }
              v32 = (__int64*)*v32;
              if (v32 == nullptr) {
                return 0;
              }
            }
          }
          while (1) {
            v33 = v32[1];
            if (v33 == v11) {
              if (*((_DWORD*)v32 + 4) == v11) {
                goto LABEL_98;
              }
            }
            else {
              if (v33 >= v26) {
                v33 %= v26;
              }
              if (v33 != v30) {
                return 0;
              }
            }
            v32 = (__int64*)*v32;
            if (v32 == nullptr) {
              return 0;
            }
          }
        }
      }
    }
    return 0;
  }
  v18 = *(_QWORD**)(a1 + 120);
  if (v18 != nullptr) {
    v19 = v18[18];
    if (v19 == 0 || v18[20] == 0) {
      goto LABEL_72;
    }
    v21 = v19 - 1;
    v22 = *(char*)(v2 + 1) | (unsigned int)(32 * *(char*)(v2 + 2));
    if ((v19 & (v19 - 1)) != 0) {
      v23 = v22;
      if (v19 <= v22) {
        v23 = (unsigned int)v22 % (unsigned int)v19;
      }
    }
    else {
      v23 = ((_DWORD)v19 - 1) & (unsigned int)v22;
    }
    v35 = *(__int64***)(v18[17] + 8 * v23);
    if (v35 == nullptr || (v36 = *v35) == nullptr) {
    LABEL_72:
      v39 = -1;
      goto LABEL_73;
    }
    if ((v19 & v21) == 0) {
      while (1) {
        v38 = v36[1];
        if (v38 == v22) {
          if (*((_DWORD*)v36 + 4) == (_DWORD)v22) {
            goto LABEL_99;
          }
        }
        else if ((v38 & v21) != v23) {
          goto LABEL_72;
        }
        v36 = (__int64*)*v36;
        if (v36 == nullptr) {
          goto LABEL_72;
        }
      }
    }
    while (1) {
      v37 = v36[1];
      if (v37 == v22) {
        if (*((_DWORD*)v36 + 4) == (_DWORD)v22) {
        LABEL_99:
          v39 = *((_DWORD*)v36 + 5);
        LABEL_73:
          v40 = *(_QWORD*)(a1 + 144);
          v41 = *(_QWORD*)(a1 + 160);
          v49 = v39;
          if (v40 != 0 && v41 != 0) {
            v43 = v40 - 1;
            if ((v40 & (v40 - 1)) != 0) {
              v44 = v39;
              if (v40 <= v39) {
                v44 = v39 % v40;
              }
            }
            else {
              v44 = v43 & v39;
            }
            v45 = *(__int64***)(*(_QWORD*)(a1 + 136) + 8 * v44);
            if (v45 != nullptr) {
              v46 = *v45;
              if (v46 != nullptr) {
                if ((v40 & v43) == 0) {
                  while (1) {
                    v48 = v46[1];
                    if (v48 == v39) {
                      if (*((_DWORD*)v46 + 4) == v39) {
                        goto LABEL_98;
                      }
                    }
                    else if ((v48 & v43) != v44) {
                      return 0;
                    }
                    v46 = (__int64*)*v46;
                    if (v46 == nullptr) {
                      return 0;
                    }
                  }
                }
                while (1) {
                  v47 = v46[1];
                  if (v47 == v39) {
                    if (*((_DWORD*)v46 + 4) == v39) {
                    LABEL_98:
                      v50 = &v49;
                      return *(
                          _QWORD*)(GameRoutine_19f4d00(a1 + 136, &v49, &v50) +
                                   24);
                    }
                  }
                  else {
                    if (v47 >= v40) {
                      v47 %= v40;
                    }
                    if (v47 != v44) {
                      return 0;
                    }
                  }
                  v46 = (__int64*)*v46;
                  if (v46 == nullptr) {
                    return 0;
                  }
                }
              }
            }
          }
          return 0;
        }
      }
      else {
        if (v37 >= v19) {
          v37 %= v19;
        }
        if (v37 != v23) {
          goto LABEL_72;
        }
      }
      v36 = (__int64*)*v36;
      if (v36 == nullptr) {
        goto LABEL_72;
      }
    }
  }
  return 0;
}

#pragma GCC visibility pop
