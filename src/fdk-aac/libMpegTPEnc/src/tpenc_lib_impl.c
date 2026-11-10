#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_codec_FDKsprintf_plt(_QWORD, const char*, ...);
extern char SdkData_bbbd5c;
__int64 nn_codec_transportEnc_GetLibInfo(_DWORD* a1);

__int64 nn_codec_transportEnc_GetLibInfo(_DWORD* a1)
{
  unsigned int v2;
  _DWORD* v3;

  if (a1 == nullptr) {
    return 2;
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
                                                                  return 1;
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
  *((_QWORD*)v3 + 3) = 0x203060000000008LL;
  nn_codec_FDKsprintf_plt(v3 + 9, "%d.%d.%d", 2, 3, 6);
  *((_QWORD*)v3 + 1) = &SdkData_bbbd5c;
  *((_QWORD*)v3 + 2) = &SdkData_bbbd5c;
  *(_QWORD*)v3 = "MPEG Transport";
  v3[8] = 31;
  return 0;
}

#pragma GCC visibility pop
