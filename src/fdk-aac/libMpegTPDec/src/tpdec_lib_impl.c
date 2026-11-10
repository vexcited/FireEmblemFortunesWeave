#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_codec_FDK_Feed_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_codec_FDK_InitBitBuffer_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_codec_FDK_getValidBits_plt(_QWORD);
__int64 nn_codec_FDK_pushBack_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_codec_FDK_put_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_codec_FDKsprintf_plt(_QWORD, const char*, ...);
extern char SdkData_bbbd5c;
__int64 nn_codec_transportDec_FillData(_DWORD* a1, __int64 a2, unsigned int a3,
                                       _DWORD* a4, int a5);
__int64 nn_codec_transportDec_GetLibInfo(_DWORD* a1);

__int64 nn_codec_transportDec_FillData(_DWORD* a1, __int64 a2, unsigned int a3,
                                       _DWORD* a4, int a5)
{
  __int64 result;
  unsigned int* v7;
  _DWORD* v9;
  unsigned int v10;
  __int64 v11;
  _DWORD* v12;
  int v13;
  unsigned int v14;
  __int64 v15;
  _DWORD* v16;

  result = 514;
  if (a1 != nullptr && a5 <= 1) {
    if (*a4 != 0) {
      v7 = &a1[14 * a5 + 14];
      if (*a1 > 0xCu || ((1 << *a1) & 0x10C1) == 0) {
        if ((int)a1[347] < 1) {
          goto LABEL_19;
        }
        v10 = a3;
        v11 = a2;
        v12 = a4;
        if (a1[14 * a5 + 26] != 0) {
          nn_codec_FDK_put_plt(&a1[14 * a5 + 16],
                               (unsigned int)a1[14 * a5 + 14],
                               (unsigned int)a1[14 * a5 + 15]);
        }
        else {
          nn_codec_FDK_pushBack_plt(&a1[14 * a5 + 16],
                                    (unsigned int)a1[14 * a5 + 15], 0);
        }
        *(_QWORD*)v7 = 0;
        v13 = nn_codec_FDK_getValidBits_plt(v7 + 2);
        a4 = v12;
        a2 = v11;
        a3 = v10;
        if (v13 != 0) {
          return 0;
        }
        else {
        LABEL_19:
          v14 = a3;
          v15 = a2;
          v16 = a4;
          if (v7[12] != 0) {
            nn_codec_FDK_put_plt(v7 + 2, *v7, v7[1]);
          }
          else {
            nn_codec_FDK_pushBack_plt(v7 + 2, v7[1], 0);
          }
          *(_QWORD*)v7 = 0;
          nn_codec_FDK_Feed_plt(v7 + 2, v15, v14, v16);
          return 0;
        }
      }
      else {
        if (a1[347] == 0) {
          v9 = a4;
          nn_codec_FDK_InitBitBuffer_plt(&a1[14 * a5 + 16], a2, 0x10000,
                                         (unsigned int)(8 * *a4));
          *(_QWORD*)v7 = 0;
          v7[12] = 0;
          *v9 = 0;
        }
        return 0;
      }
    }
    else {
      return 0;
    }
  }
  return result;
}

__int64 nn_codec_transportDec_GetLibInfo(_DWORD* a1)
{
  unsigned int v2;
  _DWORD* v3;

  if (a1 == nullptr) {
    return 513;
  }
  if (a1[6] != 0) {
    if (a1[24] != 0) {
      if (a1[42] != 0) {
        if (a1[60] != 0) {
          if (a1[78] != 0) {
            if (a1[96] != 0) {
              if (a1[114] != 0) {
                if (a1[132] != 0) {
                  if (a1[150] != 0) {
                    if (a1[168] != 0) {
                      if (a1[186] != 0) {
                        if (a1[204] != 0) {
                          if (a1[222] != 0) {
                            if (a1[240] != 0) {
                              if (a1[258] != 0) {
                                if (a1[276] != 0) {
                                  if (a1[294] != 0) {
                                    if (a1[312] != 0) {
                                      if (a1[330] != 0) {
                                        if (a1[348] != 0) {
                                          if (a1[366] != 0) {
                                            if (a1[384] != 0) {
                                              if (a1[402] != 0) {
                                                if (a1[420] != 0) {
                                                  if (a1[438] != 0) {
                                                    if (a1[456] != 0) {
                                                      if (a1[474] != 0) {
                                                        if (a1[492] != 0) {
                                                          if (a1[510] != 0) {
                                                            if (a1[528] != 0) {
                                                              if (a1[546] !=
                                                                  0) {
                                                                if (a1[564] !=
                                                                    0) {
                                                                  return 513;
                                                                }
                                                                v2 = 31;
                                                              }
                                                              else {
                                                                v2 = 30;
                                                              }
                                                            }
                                                            else {
                                                              v2 = 29;
                                                            }
                                                          }
                                                          else {
                                                            v2 = 28;
                                                          }
                                                        }
                                                        else {
                                                          v2 = 27;
                                                        }
                                                      }
                                                      else {
                                                        v2 = 26;
                                                      }
                                                    }
                                                    else {
                                                      v2 = 25;
                                                    }
                                                  }
                                                  else {
                                                    v2 = 24;
                                                  }
                                                }
                                                else {
                                                  v2 = 23;
                                                }
                                              }
                                              else {
                                                v2 = 22;
                                              }
                                            }
                                            else {
                                              v2 = 21;
                                            }
                                          }
                                          else {
                                            v2 = 20;
                                          }
                                        }
                                        else {
                                          v2 = 19;
                                        }
                                      }
                                      else {
                                        v2 = 18;
                                      }
                                    }
                                    else {
                                      v2 = 17;
                                    }
                                  }
                                  else {
                                    v2 = 16;
                                  }
                                }
                                else {
                                  v2 = 15;
                                }
                              }
                              else {
                                v2 = 14;
                              }
                            }
                            else {
                              v2 = 13;
                            }
                          }
                          else {
                            v2 = 12;
                          }
                        }
                        else {
                          v2 = 11;
                        }
                      }
                      else {
                        v2 = 10;
                      }
                    }
                    else {
                      v2 = 9;
                    }
                  }
                  else {
                    v2 = 8;
                  }
                }
                else {
                  v2 = 7;
                }
              }
              else {
                v2 = 6;
              }
            }
            else {
              v2 = 5;
            }
          }
          else {
            v2 = 4;
          }
        }
        else {
          v2 = 3;
        }
      }
      else {
        v2 = 2;
      }
    }
    else {
      v2 = 1;
    }
  }
  else {
    v2 = 0;
  }
  v3 = &a1[18 * v2];
  *((_QWORD*)v3 + 2) = &SdkData_bbbd5c;
  *((_QWORD*)v3 + 3) = 0x203070000000007LL;
  *(_QWORD*)v3 = "MPEG Transport";
  *((_QWORD*)v3 + 1) = &SdkData_bbbd5c;
  nn_codec_FDKsprintf_plt(v3 + 9, "%d.%d.%d", 2, 3, 7);
  v3[8] = 63;
  return 0;
}

#pragma GCC visibility pop
