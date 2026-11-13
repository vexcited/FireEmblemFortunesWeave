#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nandroid_AMessage_countEntries_plt(__int64);
__int64 nandroid_AMessage_findBuffer_plt(__int64, const char*, __int64);
__int64 nandroid_AMessage_findFloat_plt(__int64, const char*, __int64);
__int64 nandroid_AMessage_findInt32_plt(__int64, const char*, __int64);
__int64 nandroid_AMessage_findInt64_plt(__int64, const char*, __int64);
__int64 nandroid_AMessage_findString_plt(__int64, const char*, __int64);
__int64 nandroid_AMessage_getEntryNameAt_plt(__int64, unsigned __int64,
                                             __int64);
__int64 nandroid_AString_AString_plt_86d9f0(__int64);
__int64 nandroid_AString_AString_plt_86da90(__int64, const char*);
__int64 nandroid_AString_Destroy_AString_plt(__int64);
__int64 nandroid_AString_append_plt_86db20(_QWORD, _QWORD);
__int64 nandroid_AString_c_str_plt(__int64);
__int64 nandroid_AString_size_plt(__int64);
__int64 nandroid_RefBase_decStrong_plt(__int64, __int64);
__int64 nn_movie_MediaProperty_GetFloat_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_movie_MediaProperty_GetInt32_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_movie_MediaProperty_GetInt64_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_movie_MediaProperty_SetBinaryData_plt(_QWORD, _QWORD, _QWORD,
                                                 _QWORD);
__int64 nn_movie_MediaProperty_SetFloat_plt(_QWORD, _QWORD, float);
__int64 nn_movie_MediaProperty_SetInt32_plt(__int64, const char*, int);
__int64 nn_movie_MediaProperty_SetInt64_plt(__int64, const char*, __int64);
__int64 nn_movie_MediaProperty_SetString_plt(__int64, const char*, const char*,
                                             int);
__int64 nn_movie_MediaProperty_SetUint32_plt(_QWORD, _QWORD, _QWORD);
extern void (*SdkData_e88428[463])();
extern void (*SdkData_e88430[462])();
extern void (*SdkData_e88438[461])();
extern void (*SdkData_e88440[460])();
extern void (*SdkData_e88448[459])();
extern void (*SdkData_e88450[458])();
extern void (*SdkData_e88458[457])();
extern void (*SdkData_e88460[456])();
extern void (*SdkData_e88468[455])();
extern void (*SdkData_e88470[454])();
extern void (*SdkData_e88478[453])();
extern void (*SdkData_e88480[452])();
extern void (*SdkData_e88488[451])();
extern void (*SdkData_e88490[450])();
extern void (*SdkData_e88498[449])();
extern void (*SdkData_e884a0[448])();
extern void (*SdkData_e884a8[447])();
extern void (*SdkData_e884b0[446])();
extern void (*SdkData_e884b8[445])();
extern void (*SdkData_e884c0[444])();
extern void (*SdkData_e884c8[443])();
extern void (*SdkData_e884d0[442])();
extern void (*SdkData_e884d8[441])();
extern void (*SdkData_e884e0[440])();
extern void (*SdkData_e884e8[439])();
extern void (*SdkData_e884f0[438])();
extern void (*SdkData_e884f8[437])();
extern void (*SdkData_e88500[436])();
extern void (*SdkData_e88508[435])();
int strcmp_plt(const char*, const char*);
__int64 nandroid_libstagefright_mpeg2ts_4d0060(__int64* a1, __int64 a2,
                                               char a3);

__int64 nandroid_libstagefright_mpeg2ts_4d0060(__int64* a1, __int64 a2, char a3)
{

#pragma clang fp contract(off)
  __int64 result;
  __int64 v7;
  unsigned __int64 v8;
  char** v9;
  char* v10;
  char* v11;
  __int64 v12;
  __int64 v13;
  char* v14;
  __int64 v15;
  __int64 v16;
  char* v17;
  __int64 v18;
  char v19;
  __int64 v20;
  __int64 v21;
  char* v22;
  __int64 v23;
  char* v24;
  char* v25;
  int v26;
  char* v27;
  char* v28;
  char* v29;
  char* v30;
  int v31;
  char* v32;
  int v33;
  __int64 v34;
  __int64 v35;
  struct {
    __int64 v36;
    __int64 v37;
    __int64 v38;
  } v36_;
  __int64 v39;
  struct {
    __int64 v40;
    __int64 v41;
    __int64 v42;
    char gap56_[4];
    int v43;
  } v40_;

  result = nandroid_AMessage_countEntries_plt(*a1);
  v40_.v43 = 0;
  if (result != 0) {
    v7 = result;
    v8 = 0;
    {
      v9 = (const char**)SdkData_e88440[0];
      __asm__ volatile("" ::"r"(v9));
    }
    while (1) {
      result =
          nandroid_AMessage_getEntryNameAt_plt(*a1, v8, (__int64)&v40_.v43);
      if (result == 0) {
        goto LABEL_5;
      }
      v11 = (const char*)result;
      if (v40_.v43 <= 2) {
        break;
      }
      if (v40_.v43 != 10) {
        if (v40_.v43 != 6) {
          if (v40_.v43 != 3) {
            goto LABEL_5;
          }
          {
            v12 = *a1;
            __asm__ volatile("" ::"r"(v12));
          }
          LODWORD(v36_.v36) = 0;
          result =
              nandroid_AMessage_findFloat_plt(v12, v11, (__int64)&v36_.v36);
          if ((result & 1) == 0) {
            goto LABEL_5;
          }
          result = strcmp_plt(v11, *v9);
          if ((_DWORD)result != 0) {
            goto LABEL_5;
          }
          LODWORD(v39) = 0;
          if ((a3 & 1) == 0) {
            if ((nn_movie_MediaProperty_GetInt32_plt(a2, &v39, "frame-rate") &
                 1) == 0) {
              nn_movie_MediaProperty_SetInt32_plt(a2, "frame-rate",
                                                  (int)*(float*)&v36_.v36);
            }
            result = nn_movie_MediaProperty_SetFloat_plt(a2, "frame-rate",
                                                         *(float*)&v36_.v36);
            goto LABEL_5;
          }
          v40_.v41 = 0;
          v40_.v42 = 0;
          v40_.v40 = 0;
          nandroid_AString_AString_plt_86da90((__int64)&v40_.v40, "container-");
          nandroid_AString_append_plt_86db20(&v40_.v40, "frame-rate");
          v13 = nandroid_AString_c_str_plt((__int64)&v40_.v40);
          if ((nn_movie_MediaProperty_GetInt32_plt(a2, &v39, v13) & 1) == 0) {
            v14 = (const char*)nandroid_AString_c_str_plt((__int64)&v40_.v40);
            nn_movie_MediaProperty_SetInt32_plt(a2, v14,
                                                (int)*(float*)&v36_.v36);
          }
          nandroid_AString_Destroy_AString_plt((__int64)&v40_.v40);
          v40_.v41 = 0;
          v40_.v42 = 0;
          v40_.v40 = 0;
          nandroid_AString_AString_plt_86da90((__int64)&v40_.v40, "container-");
          nandroid_AString_append_plt_86db20(&v40_.v40, "frame-rate");
          v15 = nandroid_AString_c_str_plt((__int64)&v40_.v40);
          nn_movie_MediaProperty_SetFloat_plt(a2, v15, *(float*)&v36_.v36);
          goto LABEL_4;
        }
        v40_.v41 = 0;
        v40_.v42 = 0;
        v40_.v40 = 0;
        nandroid_AString_AString_plt_86d9f0((__int64)&v40_.v40);
        if ((nandroid_AMessage_findString_plt(*a1, v11, (__int64)&v40_.v40) &
             1) == 0) {
          goto LABEL_4;
        }
        if (strcmp_plt(v11, *(const char**)SdkData_e88438[0]) == 0) {
          v22 = "mime";
          if (strcmp_plt("mime", "mime") == 0) {
            goto LABEL_72;
          }
          goto LABEL_63;
        }
        if (strcmp_plt(v11, *(const char**)SdkData_e88458[0]) != 0) {
          goto LABEL_4;
        }
        v22 = "language";
        if (strcmp_plt("mime", "language") != 0) {
          goto LABEL_63;
        }
      LABEL_72:
        if (strcmp_plt(v11, "audio/mp4a-latm") != 0) {
          if (strcmp_plt(v11, "audio/aac-adts") != 0) {
            if (strcmp_plt(v11, "audio/opus") != 0) {
              if (strcmp_plt(v11, "audio/raw") != 0) {
                if (strcmp_plt(v11, "audio/vorbis") != 0) {
                  if (strcmp_plt(v11, "text/cea-608") != 0) {
                    if (strcmp_plt(v11, "text/vtt") != 0) {
                      if (strcmp_plt(v11, "video/av1") != 0) {
                        if (strcmp_plt(v11, "video/avc") != 0) {
                          if (strcmp_plt(v11, "video/raw") != 0) {
                            if (strcmp_plt(v11, "video/x-vnd.on2.vp8") != 0) {
                              if (strcmp_plt(v11, "video/x-vnd.on2.vp9") == 0) {
                                v26 = 1;
                                goto LABEL_114;
                              }
                            LABEL_63:
                              if ((a3 & 1) == 0) {
                              LABEL_118:
                                v32 = (const char*)nandroid_AString_c_str_plt(
                                    (__int64)&v40_.v40);
                                v33 = nandroid_AString_size_plt(
                                    (__int64)&v40_.v40);
                                nn_movie_MediaProperty_SetString_plt(a2, v22,
                                                                     v32, v33);
                                goto LABEL_4;
                              }
                            LABEL_116:
                              v36_.v37 = 0;
                              v36_.v38 = 0;
                              v36_.v36 = 0;
                              nandroid_AString_AString_plt_86da90(
                                  (__int64)&v36_.v36, "container-");
                              nandroid_AString_append_plt_86db20(&v36_.v36,
                                                                 v22);
                              v29 = (const char*)nandroid_AString_c_str_plt(
                                  (__int64)&v36_.v36);
                              v30 = (const char*)nandroid_AString_c_str_plt(
                                  (__int64)&v40_.v40);
                              v31 =
                                  nandroid_AString_size_plt((__int64)&v40_.v40);
                              nn_movie_MediaProperty_SetString_plt(a2, v29, v30,
                                                                   v31);
                              nandroid_AString_Destroy_AString_plt(
                                  (__int64)&v36_.v36);
                            LABEL_4:
                              result = nandroid_AString_Destroy_AString_plt(
                                  (__int64)&v40_.v40);
                              goto LABEL_5;
                            }
                            v26 = 4;
                          }
                          else {
                            v26 = 2;
                          }
                        }
                        else {
                          v26 = 0;
                        }
                      }
                      else {
                        v26 = 3;
                      }
                    }
                    else {
                      v26 = 130;
                    }
                  }
                  else {
                    v26 = 129;
                  }
                }
                else {
                  v26 = 66;
                }
              }
              else {
                v26 = 68;
              }
            }
            else {
              v26 = 67;
            }
          }
          else {
            v26 = 69;
          }
        }
        else {
          v26 = 65;
        }
      LABEL_114:
        if ((a3 & 1) == 0) {
          nn_movie_MediaProperty_SetInt32_plt(a2, v22, v26);
          goto LABEL_118;
        }
        v36_.v37 = 0;
        v36_.v38 = 0;
        v36_.v36 = 0;
        nandroid_AString_AString_plt_86da90((__int64)&v36_.v36, "container-");
        nandroid_AString_append_plt_86db20(&v36_.v36, v22);
        v28 = (const char*)nandroid_AString_c_str_plt((__int64)&v36_.v36);
        nn_movie_MediaProperty_SetInt32_plt(a2, v28, v26);
        nandroid_AString_Destroy_AString_plt((__int64)&v36_.v36);
        goto LABEL_116;
      }
      {
        v18 = *a1;
        __asm__ volatile("" ::"r"(v18));
      }
      v40_.v40 = 0;
      v19 = nandroid_AMessage_findBuffer_plt(v18, "hdr-static-info",
                                             (__int64)&v40_.v40);
      result = v40_.v40;
      if ((v19 & 1) != 0) {
        {
          v20 = *(__int64*)((char*)(*(void*(*)[1])0x18LL) + v40_.v40);
          __asm__ volatile("" ::"r"(v20));
        }
        if (v20 == 0 ||
            *(__int64*)((char*)((__int64*)0x30LL) + v40_.v40) != 25) {
        LABEL_30:
          result = nandroid_RefBase_decStrong_plt(result, (__int64)&v40_.v40);
          goto LABEL_5;
        }
        {
          v21 = v20 + *(__int64*)((char*)((__int64*)0x28LL) + v40_.v40);
          __asm__ volatile("" ::"r"(v21));
        }
        nn_movie_MediaProperty_SetUint32_plt(a2, "hdr-type", 1);
        nn_movie_MediaProperty_SetBinaryData_plt(a2, "hdr-static-meta", v21 + 1,
                                                 24);
        result = v40_.v40;
      }
      if (result != 0) {
        goto LABEL_30;
      }
    LABEL_5:
      if (v7 == ++v8) {
        return result;
      }
    }
    if (v40_.v43 == 0) {
      {
        v23 = *a1;
        __asm__ volatile("" ::"r"(v23));
      }
      LODWORD(v36_.v36) = 0;
      result = nandroid_AMessage_findInt32_plt(v23, v11, (__int64)&v36_.v36);
      if ((result & 1) == 0) {
        goto LABEL_5;
      }
      if (strcmp_plt(v11, *(const char**)SdkData_e88428[0]) != 0) {
        if (strcmp_plt(v11, *(const char**)SdkData_e88460[0]) != 0) {
          if (strcmp_plt(v11, *(const char**)SdkData_e88468[0]) != 0) {
            if (strcmp_plt(v11, *(const char**)SdkData_e88470[0]) != 0) {
              if (strcmp_plt(v11, *(const char**)SdkData_e88478[0]) != 0) {
                if (strcmp_plt(v11, *(const char**)SdkData_e88480[0]) != 0) {
                  if (strcmp_plt(v11, *(const char**)SdkData_e88488[0]) != 0) {
                    if (strcmp_plt(v11, *(const char**)SdkData_e88490[0]) !=
                        0) {
                      if (strcmp_plt(v11, *(const char**)SdkData_e88498[0]) !=
                          0) {
                        if (strcmp_plt(v11, *(const char**)SdkData_e884a0[0]) !=
                            0) {
                          if (strcmp_plt(
                                  v11, *(const char**)SdkData_e884a8[0]) != 0) {
                            if (strcmp_plt(v11,
                                           *(const char**)SdkData_e884b0[0]) !=
                                0) {
                              if (strcmp_plt(v11, *v9) != 0) {
                                if (strcmp_plt(
                                        v11,
                                        *(const char**)SdkData_e884b8[0]) !=
                                    0) {
                                  if (strcmp_plt(
                                          v11,
                                          *(const char**)SdkData_e884c0[0]) !=
                                      0) {
                                    if (strcmp_plt(
                                            v11,
                                            *(const char**)SdkData_e884c8[0]) !=
                                        0) {
                                      if (strcmp_plt(v11,
                                                     *(const char**)
                                                         SdkData_e884d0[0]) !=
                                          0) {
                                        if (strcmp_plt(v11,
                                                       *(const char**)
                                                           SdkData_e884d8[0]) !=
                                            0) {
                                          if (strcmp_plt(
                                                  v11, *(const char**)
                                                           SdkData_e884e0[0]) !=
                                              0) {
                                            if (strcmp_plt(
                                                    v11,
                                                    *(const char**)
                                                        SdkData_e884e8[0]) !=
                                                0) {
                                              if (strcmp_plt(
                                                      v11,
                                                      *(const char**)
                                                          SdkData_e884f0[0]) !=
                                                  0) {
                                                if (strcmp_plt(
                                                        v11, *(const char**)
                                                                 SdkData_e884f8
                                                                     [0]) !=
                                                    0) {
                                                  if (strcmp_plt(
                                                          v11,
                                                          *(const char**)
                                                              SdkData_e88500
                                                                  [0]) != 0) {
                                                    result = strcmp_plt(
                                                        v11,
                                                        *(const char**)
                                                            SdkData_e88508[0]);
                                                    if ((_DWORD)result != 0) {
                                                      goto LABEL_5;
                                                    }
                                                    v24 = "bit-depth";
                                                  }
                                                  else {
                                                    v24 = "color-standard";
                                                  }
                                                }
                                                else {
                                                  v24 = "color-transfer";
                                                }
                                              }
                                              else {
                                                v24 = "color-range";
                                              }
                                            }
                                            else {
                                              v24 = "crop-width";
                                            }
                                          }
                                          else {
                                            v24 = "crop-height";
                                          }
                                        }
                                        else {
                                          v24 = "sar-width";
                                        }
                                      }
                                      else {
                                        v24 = "sar-height";
                                      }
                                    }
                                    else {
                                      v24 = "rot-degree";
                                    }
                                  }
                                  else {
                                    v24 = "width";
                                  }
                                }
                                else {
                                  v24 = "height";
                                }
                              }
                              else {
                                v24 = "frame-rate";
                              }
                            }
                            else {
                              v24 = "if-interval";
                            }
                          }
                          else {
                            v24 = "encoder-padding";
                          }
                        }
                        else {
                          v24 = "encoder-delay";
                        }
                      }
                      else {
                        v24 = "sample-rate";
                      }
                    }
                    else {
                      v24 = "channel-count";
                    }
                  }
                  else {
                    v24 = "level";
                  }
                }
                else {
                  v24 = "profile";
                }
              }
              else {
                v24 = "max-input-size";
              }
            }
            else {
              v24 = "is-sync-frame";
            }
          }
          else {
            v24 = "peak-bitrate";
          }
        }
        else {
          v24 = "bitrate-mode";
        }
      }
      else {
        v24 = "bitrate";
      }
      if (strcmp_plt(v11, *v9) == 0) {
        LODWORD(v39) = 0;
        if ((a3 & 1) != 0) {
          v40_.v41 = 0;
          v40_.v42 = 0;
          v40_.v40 = 0;
          nandroid_AString_AString_plt_86da90((__int64)&v40_.v40, "container-");
          nandroid_AString_append_plt_86db20(&v40_.v40, v24);
          v34 = nandroid_AString_c_str_plt((__int64)&v40_.v40);
          if ((nn_movie_MediaProperty_GetFloat_plt(a2, &v39, v34) & 1) == 0) {
            v35 = nandroid_AString_c_str_plt((__int64)&v40_.v40);
            nn_movie_MediaProperty_SetFloat_plt(a2, v35, (float)(int)v36_.v36);
          }
          nandroid_AString_Destroy_AString_plt((__int64)&v40_.v40);
        }
        else if ((nn_movie_MediaProperty_GetFloat_plt(a2, &v39, v24) & 1) ==
                 0) {
          nn_movie_MediaProperty_SetFloat_plt(a2, v24, (float)(int)v36_.v36);
        }
      }
      if ((a3 & 1) == 0) {
        result = nn_movie_MediaProperty_SetInt32_plt(a2, v24, v36_.v36);
        goto LABEL_5;
      }
      v40_.v41 = 0;
      v40_.v42 = 0;
      v40_.v40 = 0;
      nandroid_AString_AString_plt_86da90((__int64)&v40_.v40, "container-");
      nandroid_AString_append_plt_86db20(&v40_.v40, v24);
      v10 = (const char*)nandroid_AString_c_str_plt((__int64)&v40_.v40);
      nn_movie_MediaProperty_SetInt32_plt(a2, v10, v36_.v36);
      goto LABEL_4;
    }
    if (v40_.v43 != 1) {
      goto LABEL_5;
    }
    {
      v16 = *a1;
      __asm__ volatile("" ::"r"(v16));
    }
    v36_.v36 = 0;
    result = nandroid_AMessage_findInt64_plt(v16, v11, (__int64)&v36_.v36);
    if ((result & 1) == 0) {
      goto LABEL_5;
    }
    if (strcmp_plt(v11, *(const char**)SdkData_e88448[0]) != 0) {
      if (strcmp_plt(v11, *(const char**)SdkData_e88450[0]) != 0) {
        result = strcmp_plt(v11, *(const char**)SdkData_e88430[0]);
        if ((_DWORD)result != 0) {
          goto LABEL_5;
        }
        v17 = "duration-us";
        if ((a3 & 1) == 0) {
          goto LABEL_71;
        }
      }
      else {
        v17 = "decode-ts-us";
        if ((a3 & 1) == 0) {
          goto LABEL_71;
        }
      }
      goto LABEL_91;
    }
    v39 = -1;
    if ((nn_movie_MediaProperty_GetInt64_plt(a2, &v39,
                                             *(_QWORD*)SdkData_e88450[0]) &
         1) == 0) {
      if ((a3 & 1) != 0) {
        v40_.v41 = 0;
        v40_.v42 = 0;
        v40_.v40 = 0;
        nandroid_AString_AString_plt_86da90((__int64)&v40_.v40, "container-");
        nandroid_AString_append_plt_86db20(&v40_.v40, "decode-ts-us");
        v25 = (const char*)nandroid_AString_c_str_plt((__int64)&v40_.v40);
        nn_movie_MediaProperty_SetInt64_plt(a2, v25, v36_.v36);
        nandroid_AString_Destroy_AString_plt((__int64)&v40_.v40);
        v17 = "presentation-ts-us";
      LABEL_91:
        v40_.v41 = 0;
        v40_.v42 = 0;
        v40_.v40 = 0;
        nandroid_AString_AString_plt_86da90((__int64)&v40_.v40, "container-");
        nandroid_AString_append_plt_86db20(&v40_.v40, v17);
        v27 = (const char*)nandroid_AString_c_str_plt((__int64)&v40_.v40);
        nn_movie_MediaProperty_SetInt64_plt(a2, v27, v36_.v36);
        goto LABEL_4;
      }
      nn_movie_MediaProperty_SetInt64_plt(a2, "decode-ts-us", v36_.v36);
    }
    v17 = "presentation-ts-us";
    if ((a3 & 1) == 0) {
    LABEL_71:
      result = nn_movie_MediaProperty_SetInt64_plt(a2, v17, v36_.v36);
      goto LABEL_5;
    }
    goto LABEL_91;
  }
  return result;
}

#pragma GCC visibility pop
