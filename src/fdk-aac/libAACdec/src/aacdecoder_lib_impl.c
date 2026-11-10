#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_codec_FDK_toolsGetLibInfo_plt(_QWORD);
__int64 nn_codec_FDKsprintf_plt(_QWORD, const char*, ...);
__int64 nn_codec_pcmDmx_GetLibInfo_plt(_QWORD);
__int64 nn_codec_sbrDecoder_GetLibInfo_plt(void);
__int64 nn_codec_transportDec_GetLibInfo_plt(_QWORD);
extern char SdkData_bbbd5c;
__int64 nn_codec_aacDecoder_GetLibInfo(_DWORD* a1);

__int64 nn_codec_aacDecoder_GetLibInfo(_DWORD* a1)
{
  unsigned int v3;
  _DWORD* v4;

  if (a1 == nullptr) {
    return 0xFFFFFFFFLL;
  }
  nn_codec_sbrDecoder_GetLibInfo_plt();
  nn_codec_transportDec_GetLibInfo_plt(a1);
  nn_codec_FDK_toolsGetLibInfo_plt(a1);
  nn_codec_pcmDmx_GetLibInfo_plt(a1);
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
                                                                  return 0xFFFFFFFFLL;
                                                                }
                                                                v3 = 31;
                                                              }
                                                              else {
                                                                v3 = 30;
                                                              }
                                                            }
                                                            else {
                                                              v3 = 29;
                                                            }
                                                          }
                                                          else {
                                                            v3 = 28;
                                                          }
                                                        }
                                                        else {
                                                          v3 = 27;
                                                        }
                                                      }
                                                      else {
                                                        v3 = 26;
                                                      }
                                                    }
                                                    else {
                                                      v3 = 25;
                                                    }
                                                  }
                                                  else {
                                                    v3 = 24;
                                                  }
                                                }
                                                else {
                                                  v3 = 23;
                                                }
                                              }
                                              else {
                                                v3 = 22;
                                              }
                                            }
                                            else {
                                              v3 = 21;
                                            }
                                          }
                                          else {
                                            v3 = 20;
                                          }
                                        }
                                        else {
                                          v3 = 19;
                                        }
                                      }
                                      else {
                                        v3 = 18;
                                      }
                                    }
                                    else {
                                      v3 = 17;
                                    }
                                  }
                                  else {
                                    v3 = 16;
                                  }
                                }
                                else {
                                  v3 = 15;
                                }
                              }
                              else {
                                v3 = 14;
                              }
                            }
                            else {
                              v3 = 13;
                            }
                          }
                          else {
                            v3 = 12;
                          }
                        }
                        else {
                          v3 = 11;
                        }
                      }
                      else {
                        v3 = 10;
                      }
                    }
                    else {
                      v3 = 9;
                    }
                  }
                  else {
                    v3 = 8;
                  }
                }
                else {
                  v3 = 7;
                }
              }
              else {
                v3 = 6;
              }
            }
            else {
              v3 = 5;
            }
          }
          else {
            v3 = 4;
          }
        }
        else {
          v3 = 3;
        }
      }
      else {
        v3 = 2;
      }
    }
    else {
      v3 = 1;
    }
  }
  else {
    v3 = 0;
  }
  v4 = &a1[18 * v3];
  *((_QWORD*)v4 + 3) = 0x205110000000003LL;
  nn_codec_FDKsprintf_plt(v4 + 9, "%d.%d.%d", 2, 5, 17);
  *((_QWORD*)v4 + 1) = &SdkData_bbbd5c;
  *((_QWORD*)v4 + 2) = &SdkData_bbbd5c;
  *(_QWORD*)v4 = "AAC Decoder Lib";
  v4[8] = 65527;
  return 0;
}

#pragma GCC visibility pop
