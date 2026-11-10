#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_863c20(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD, _QWORD, float, float, float, float, float,
                          float, float, float, _DWORD, _DWORD);
__int64 SdkRoutine_863c30(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 memset_plt(void* this_, void*, int, unsigned __int64);
__int64
    nn_audio_capture_detail_SystemAudioCaptureServerImplBase_ProcessSystemAudioMonitorServiceForInputStream_plt(
        _QWORD);
__int64
    nn_audio_capture_detail_SystemAudioCaptureServerImplBase_ProcessSystemAudioMonitorServiceForOutputRecorder_plt(
        _QWORD);
__int64
    nn_audio_capture_detail_SystemAudioCaptureServerImplBase_WaitForServiceTypeMessage_plt(
        _QWORD);
__int64 nn_os_SleepThread_plt(_QWORD);
__int64 nn_util_InitializeOscMessageParser_plt(_QWORD, _QWORD);
__int64 strlen_plt(_QWORD);
extern __int64 SdkData_e876b8;
__int64
nn_audio_capture_detail_SystemAudioCaptureServerImplBase_SystemAudioCaptureServerImplBase(
    __int64 this_);
__int64
nn_audio_capture_detail_SystemAudioCaptureServerImplBase_Run(void* this_);
__int64
nn_audio_capture_detail_SystemAudioCaptureServerImplBase_ProcessSystemAudioMonitorService(
    void* this_);
_BYTE*
nn_audio_capture_detail_SystemAudioCaptureServerImplBase_CopyCaptureTypeName(
    _BYTE* this_, char* a2, const char* a3);
__int64 nn_audio_capture_detail_SystemAudioCaptureServerImplBase_RecvOscPacket(
    void* this_, void* a2, unsigned __int64 a3, unsigned __int64* a4);
__int64 nn_audio_capture_detail_SystemAudioCaptureServerImplBase_SendOscPacket(
    void* this_, const void* a2, __int64 a3);
__int64
nn_audio_capture_detail_SystemAudioCaptureServerImplBase_SendWaveformResponse(
    __int64* a1, __int64 a2, __int64 a3, __int64 a4);
__int64
nn_util_CreateOscMessageByteArray_nn_util_OscBlob_long_float_float_float_float_int_bool_int_float_float_float_float_float(
    void* a1, unsigned __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5,
    unsigned __int64 a6, int a7, char a8, float a9, float a10, float a11,
    float a12, float a13, float a14, float a15, float a16, char a17, char a18);
bool nn_audio_capture_detail_SystemAudioCaptureServerImplBase_SendWaveformHandshakingMessage(
    void* this_);
__int64

nn_audio_capture_detail_SystemAudioCaptureServerImplBase_SystemAudioCaptureServerImplBase(
    __int64 this_)
{
  *(_QWORD*)this_ = SdkData_e876b8 + 16;
  *(_DWORD*)(this_ + 57344) = 0;
  *(_DWORD*)(this_ + 84484) = 0;
  return this_;
}

__int64

nn_audio_capture_detail_SystemAudioCaptureServerImplBase_Run(void* this_)
{
  __int64 result;

  result = (*(__int64 (**)(void*))(*(_QWORD*)this_ + 16LL))(this_);
  if ((result & 1) != 0) {
    if (((*(__int64 (**)(void*))(*(_QWORD*)this_ + 24LL))(this_) & 1) != 0) {
      goto LABEL_4;
    }
    while (1) {
      do {
        nn_os_SleepThread_plt(1000000000);
      } while (((*(__int64 (**)(void*))(*(_QWORD*)this_ + 24LL))(this_) & 1) ==
               0);
      do {
      LABEL_4:
        if ((unsigned int)
                nn_audio_capture_detail_SystemAudioCaptureServerImplBase_WaitForServiceTypeMessage_plt(
                    this_) != 0) {
          if ((unsigned int)(*((_DWORD*)this_ + 14336) - 5) > 2) {
            nn_audio_capture_detail_SystemAudioCaptureServerImplBase_ProcessSystemAudioMonitorServiceForOutputRecorder_plt(
                this_);
          }
          else {
            nn_audio_capture_detail_SystemAudioCaptureServerImplBase_ProcessSystemAudioMonitorServiceForInputStream_plt(
                this_);
          }
        }
        (*(void (**)(void*))(*(_QWORD*)this_ + 32LL))(this_);
      } while (((*(__int64 (**)(void*))(*(_QWORD*)this_ + 24LL))(this_) & 1) !=
               0);
    }
  }
  return result;
}

__int64

nn_audio_capture_detail_SystemAudioCaptureServerImplBase_ProcessSystemAudioMonitorService(
    void* this_)
{
  if ((unsigned int)(*((_DWORD*)this_ + 14336) - 5) > 2) {
    return nn_audio_capture_detail_SystemAudioCaptureServerImplBase_ProcessSystemAudioMonitorServiceForOutputRecorder_plt(
        this_);
  }
  else {
    return nn_audio_capture_detail_SystemAudioCaptureServerImplBase_ProcessSystemAudioMonitorServiceForInputStream_plt(
        this_);
  }
}

_BYTE*

nn_audio_capture_detail_SystemAudioCaptureServerImplBase_CopyCaptureTypeName(
    _BYTE* this_, char* a2, const char* a3)
{
  if (*a2 == 0) {
    goto LABEL_33;
  }
  *this_ = *a2;
  if (a2[1] != 0) {
    *(this_ + 1) = a2[1];
    if (a2[2] != 0) {
      *(this_ + 2) = a2[2];
      if (a2[3] != 0) {
        *(this_ + 3) = a2[3];
        if (a2[4] != 0) {
          *(this_ + 4) = a2[4];
          if (a2[5] != 0) {
            *(this_ + 5) = a2[5];
            if (a2[6] != 0) {
              *(this_ + 6) = a2[6];
              if (a2[7] != 0) {
                *(this_ + 7) = a2[7];
                if (a2[8] != 0) {
                  *(this_ + 8) = a2[8];
                  if (a2[9] != 0) {
                    *(this_ + 9) = a2[9];
                    if (a2[10] != 0) {
                      *(this_ + 10) = a2[10];
                      if (a2[11] != 0) {
                        *(this_ + 11) = a2[11];
                        if (a2[12] != 0) {
                          *(this_ + 12) = a2[12];
                          if (a2[13] != 0) {
                            *(this_ + 13) = a2[13];
                            if (a2[14] != 0) {
                              *(this_ + 14) = a2[14];
                              if (a2[15] != 0) {
                                *(this_ + 15) = a2[15];
                                if (a2[16] != 0) {
                                  *(this_ + 16) = a2[16];
                                  if (a2[17] != 0) {
                                    *(this_ + 17) = a2[17];
                                    if (a2[18] != 0) {
                                      *(this_ + 18) = a2[18];
                                      if (a2[19] != 0) {
                                        *(this_ + 19) = a2[19];
                                        if (a2[20] != 0) {
                                          *(this_ + 20) = a2[20];
                                          if (a2[21] != 0) {
                                            *(this_ + 21) = a2[21];
                                            if (a2[22] != 0) {
                                              *(this_ + 22) = a2[22];
                                              if (a2[23] != 0) {
                                                *(this_ + 23) = a2[23];
                                                if (a2[24] != 0) {
                                                  *(this_ + 24) = a2[24];
                                                  if (a2[25] != 0) {
                                                    *(this_ + 25) = a2[25];
                                                    if (a2[26] != 0) {
                                                      *(this_ + 26) = a2[26];
                                                      if (a2[27] != 0) {
                                                        *(this_ + 27) = a2[27];
                                                        if (a2[28] != 0) {
                                                          *(this_ + 28) =
                                                              a2[28];
                                                          if (a2[29] != 0) {
                                                            *(this_ + 29) =
                                                                a2[29];
                                                            if (a2[30] != 0) {
                                                              *(this_ + 30) =
                                                                  a2[30];
                                                              this_ += 31;
                                                            LABEL_33:
                                                              *this_ = 0;
                                                              return this_;
                                                            }
                                                            *(this_ + 30) = 0;
                                                            this_ += 30;
                                                          }
                                                          else {
                                                            *(this_ + 29) = 0;
                                                            this_ += 29;
                                                          }
                                                        }
                                                        else {
                                                          *(this_ + 28) = 0;
                                                          this_ += 28;
                                                        }
                                                      }
                                                      else {
                                                        *(this_ + 27) = 0;
                                                        this_ += 27;
                                                      }
                                                    }
                                                    else {
                                                      *(this_ + 26) = 0;
                                                      this_ += 26;
                                                    }
                                                  }
                                                  else {
                                                    *(this_ + 25) = 0;
                                                    this_ += 25;
                                                  }
                                                }
                                                else {
                                                  *(this_ + 24) = 0;
                                                  this_ += 24;
                                                }
                                              }
                                              else {
                                                *(this_ + 23) = 0;
                                                this_ += 23;
                                              }
                                            }
                                            else {
                                              *(this_ + 22) = 0;
                                              this_ += 22;
                                            }
                                          }
                                          else {
                                            *(this_ + 21) = 0;
                                            this_ += 21;
                                          }
                                        }
                                        else {
                                          *(this_ + 20) = 0;
                                          this_ += 20;
                                        }
                                      }
                                      else {
                                        *(this_ + 19) = 0;
                                        this_ += 19;
                                      }
                                    }
                                    else {
                                      *(this_ + 18) = 0;
                                      this_ += 18;
                                    }
                                  }
                                  else {
                                    *(this_ + 17) = 0;
                                    this_ += 17;
                                  }
                                }
                                else {
                                  *(this_ + 16) = 0;
                                  this_ += 16;
                                }
                              }
                              else {
                                *(this_ + 15) = 0;
                                this_ += 15;
                              }
                            }
                            else {
                              *(this_ + 14) = 0;
                              this_ += 14;
                            }
                          }
                          else {
                            *(this_ + 13) = 0;
                            this_ += 13;
                          }
                        }
                        else {
                          *(this_ + 12) = 0;
                          this_ += 12;
                        }
                      }
                      else {
                        *(this_ + 11) = 0;
                        this_ += 11;
                      }
                    }
                    else {
                      *(this_ + 10) = 0;
                      this_ += 10;
                    }
                  }
                  else {
                    *(this_ + 9) = 0;
                    this_ += 9;
                  }
                }
                else {
                  *(this_ + 8) = 0;
                  this_ += 8;
                }
              }
              else {
                *(this_ + 7) = 0;
                this_ += 7;
              }
            }
            else {
              *(this_ + 6) = 0;
              this_ += 6;
            }
          }
          else {
            *(this_ + 5) = 0;
            this_ += 5;
          }
        }
        else {
          *(this_ + 4) = 0;
          this_ += 4;
        }
      }
      else {
        *(this_ + 3) = 0;
        this_ += 3;
      }
    }
    else {
      *(this_ + 2) = 0;
      this_ += 2;
    }
  }
  else {
    *(this_ + 1) = 0;
  }
  return this_;
}

__int64 nn_audio_capture_detail_SystemAudioCaptureServerImplBase_RecvOscPacket(
    void* this_, void* a2, unsigned __int64 a3, unsigned __int64* a4)
{
  __int64 v4;
  unsigned __int64 v10;
  int v11;

  v4 = *(_QWORD*)this_;
  v11 = 0;
  v10 = 0;
  if (((*(__int64 (**)(void*, int*, __int64, unsigned __int64*))(v4 + 64))(
           this_, &v11, 4, &v10) &
       1) == 0 ||
      a3 < v11 ||
      ((*(__int64 (**)(void*, void*))(*(_QWORD*)this_ + 64LL))(this_, a2) &
       1) == 0 ||
      v11 != (_DWORD)v10) {
    return 0;
  }
  if (a4 != nullptr) {
    *a4 = v10;
  }
  return 1;
}

__int64 nn_audio_capture_detail_SystemAudioCaptureServerImplBase_SendOscPacket(
    void* this_, const void* a2, __int64 a3)
{
  __int64 v3;
  int v8;

  v3 = *(_QWORD*)this_;
  v8 = a3;
  if (((*(__int64 (**)(void*, int*, __int64))(v3 + 72))(this_, &v8, 4) & 1) !=
      0) {
    return (*(__int64 (**)(void*, const void*, __int64))(*(_QWORD*)this_ +
                                                         72LL))(this_, a2, a3) &
           1;
  }
  else {
    return 0;
  }
}

__int64

nn_audio_capture_detail_SystemAudioCaptureServerImplBase_SendWaveformResponse(
    __int64* a1, __int64 a2, __int64 a3, __int64 a4)
{

#pragma clang fp contract(off)
  __int64 v4;
  unsigned int (*v9)(__int64*, __int64*);
  unsigned int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  char v14;
  struct {
    __int64 v16;
    __int64 v17;
    __int64 v18;
  } v16_;
  char v19[40];
  struct {
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
    __int64 v46;
    __int64 v47;
    __int64 v48;
    __int64 v49;
    __int64 v50;
    __int64 v51;
  } v20_;
  int v52;

  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v4 = *a1;
  v20_.v50 = 0;
  v20_.v51 = 0;
  v20_.v48 = 0;
  v20_.v49 = 0;
  v20_.v46 = 0;
  v20_.v47 = 0;
  v20_.v44 = 0;
  v20_.v45 = 0;
  v20_.v42 = 0;
  v20_.v43 = 0;
  v20_.v40 = 0;
  v20_.v41 = 0;
  v20_.v38 = 0;
  v20_.v39 = 0;
  v20_.v36 = 0;
  v20_.v37 = 0;
  v20_.v34 = 0;
  v20_.v35 = 0;
  v20_.v32 = 0;
  v20_.v33 = 0;
  v20_.v30 = 0;
  v20_.v31 = 0;
  v20_.v28 = 0;
  v20_.v29 = 0;
  v20_.v26 = 0;
  v20_.v27 = 0;
  v9 = *(unsigned int (**)(__int64*, __int64*))(v4 + 48),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v20_.v24 = 0;
  v20_.v25 = 0;
  v20_.v22 = 0;
  v20_.v23 = 0;
  v20_.v20 = 0;
  v20_.v21 = 0;
  if (v9(a1, &v20_.v20) != 0) {
    goto LABEL_4;
  }
  v16_.v17 = 0;
  v16_.v18 = 0;
  v16_.v16 = 0;
  strcpy(v19, "/SystemAudioCapture/Response/Waveform");
  (*(void (**)(__int64*, __int64*))(*a1 + 56))(a1, &v16_.v16),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v11 = SdkRoutine_863c20(
      (char*)a1 + 57348, 15616, v19, a2, a3, a4, v10, (unsigned __int8)v16_.v16,
      *(float*)&v20_.v20, *((float*)&v20_.v20 + 1), *(float*)&v20_.v21,
      *((float*)&v20_.v21 + 1), *((float*)&v16_.v16 + 1), *(float*)&v16_.v17,
      *((float*)&v16_.v17 + 1), *(float*)&v16_.v18, BYTE1(v16_.v16),
      HIDWORD(v16_.v18)),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v12 = *a1;
  v13 = v11;
  v52 = v11;
  if (((*(__int64 (**)(__int64*, int*, __int64))(v12 + 72))(a1, &v52, 4) & 1) ==
      0) {
  LABEL_4:
    v14 = 0;
  }
  else {
    v14 = (*(__int64 (**)(__int64*, __int64, __int64))(*a1 + 72))(
        a1, (__int64)a1 + 57348, v13),
    v10 = COERCE_AS(__typeof__(v10),
                    PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  return v14 & 1;
}

__int64

nn_util_CreateOscMessageByteArray_nn_util_OscBlob_long_float_float_float_float_int_bool_int_float_float_float_float_float(
    void* a1, unsigned __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5,
    unsigned __int64 a6, int a7, char a8, float a9, float a10, float a11,
    float a12, float a13, float a14, float a15, float a16, char a17, char a18)
{

#pragma clang fp contract(off)
  __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  _BYTE* v31;
  char v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  _DWORD* v38;
  _DWORD* v39;
  __int64 v41;
  float v42;
  float v43;
  float v44;
  float v45;
  char v46[4];
  int v47;
  float v48;

  v48 = a12;
  v47 = a7;
  v46[0] = a8;
  v44 = a14;
  v45 = a13;
  v43 = a15;
  v42 = a16;
  memset_plt(a1, nullptr, a2, a4);
  v28 = strlen_plt(a3);
  if (a2 < v28 + 1) {
    return 0;
  }
  memcpy_plt(a1, a3, v28);
  v29 = strlen_plt(a3) & 0xFFFFFFFFFFFFFFFCLL;
  if (a2 <= v29 + 4) {
    return 0;
  }
  *((_BYTE*)a1 + v29 + 4) = 44;
  v30 = a2 - (v29 + 5);
  if (a2 == v29 + 5) {
    return 0;
  }
  v31 = (char*)a1 + v29 + 5;
  *v31 = 98;
  if (v30 == 1) {
    return 0;
  }
  v31[1] = 104;
  if (v30 == 2) {
    return 0;
  }
  v31[2] = 102;
  if (v30 == 3) {
    return 0;
  }
  v31[3] = 102;
  if (v30 == 4) {
    return 0;
  }
  v31[4] = 102;
  if (v30 == 5) {
    return 0;
  }
  v31[5] = 102;
  if (v30 == 6) {
    return 0;
  }
  v31[6] = 105;
  if (v30 == 7) {
    return 0;
  }
  v32 = (a8 & 1) != 0 ? 84 : 70;
  v31[7] = v32;
  if (v30 == 8) {
    return 0;
  }
  v31[8] = 105;
  if (v30 == 9) {
    return 0;
  }
  v31[9] = 102;
  if (v30 == 10) {
    return 0;
  }
  v31[10] = 102;
  if (v30 == 11) {
    return 0;
  }
  v33 = v30 - 12;
  v31[11] = 102;
  if (v33 == 0) {
    return 0;
  }
  v31[12] = 102;
  if (v33 == 1) {
    return 0;
  }
  v31[13] = 102;
  v34 = ((v29 + 19) & 0xFFFFFFFFFFFFFFFCLL) + 4;
  v35 = a2 - v34;
  if (a2 < v34) {
    return 0;
  }
  v36 = (a5 + 7) & 0xFFFFFFFFFFFFFFFCLL;
  v37 = v35 - v36;
  if (v35 < v36) {
    return 0;
  }
  v38 = (_DWORD*)((char*)a1 + v34);
  *v38 = bswap32(a5);
  memcpy_plt(v38 + 1, a4, a5);
  if (v37 < 8) {
    return 0;
  }
  v39 = (_DWORD*)((char*)v38 + v36);
  *(_QWORD*)((char*)v38 + v36) = bswap64(a6);
  if ((v37 & 0xFFFFFFFFFFFFFFFCLL) == 8) {
    return 0;
  }
  v39[2] = bswap32(LODWORD(a9));
  if (v37 - 12 < 4) {
    return 0;
  }
  v39[3] = bswap32(LODWORD(a10));
  if (((v37 - 12) & 0xFFFFFFFFFFFFFFFCLL) == 4) {
    return 0;
  }
  v41 = v34 + v36 + 20;
  v39[4] = bswap32(LODWORD(a11));
  if ((SdkRoutine_863c30(&v41, v39 + 5, v37 - 20, &v48, &v47, v46, &a17, &v45,
                         &v44, &v43, &v42, &a18) &
       1) != 0) {
    return v41;
  }
  else {
    return 0;
  }
}

bool nn_audio_capture_detail_SystemAudioCaptureServerImplBase_SendWaveformHandshakingMessage(
    void* this_)
{
  __int64 v1;
  _QWORD v8[3];
  unsigned int v9;

  v1 = *(_QWORD*)this_;
  v9 = 0;
  v8[0] = 0;
  if (((*(__int64 (**)(void*, unsigned int*, __int64, _QWORD*))(v1 + 64))(
           this_, &v9, 4, v8) &
       1) == 0 ||
      v9 > 0x3D00 ||
      ((*(__int64 (**)(void*, char*))(*(_QWORD*)this_ + 64LL))(
           this_, (char*)this_ + 57348) &
       1) == 0 ||
      v9 != LODWORD(v8[0])) {
    return false;
  }
  memset(v8, 0, sizeof(v8));
  nn_util_InitializeOscMessageParser_plt(v8, (char*)this_ + 57348);
  return *(_QWORD*)v8[0] == 0x416D65747379532FLL &&
         *(_QWORD*)(v8[0] + 8LL) == 0x747061436F696475LL &&
         *(__int64*)((char*)((__int64*)0xCLL) + v8[0] + 4) ==
             0x757165522F657275LL &&
         *(__int64*)((char*)((__int64*)0xCLL) + v8[0] + 12) ==
             0x657661572F747365LL &&
         *(_DWORD*)&(*(_BYTE(*)[4])0x20LL)[v8[0]] == 1836216166;
}

#pragma GCC visibility pop
