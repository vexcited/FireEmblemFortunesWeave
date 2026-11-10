#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_14d4b0();
__int64 __errno_location_plt(_QWORD);
__int64 at_quick_exit_plt(_QWORD);
__int64 fw_rtld_RegisterCrtDestructor();
__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_nlibsdk_detail_JoinAndFreePosixThread(__int64, _QWORD*);
__int64 nn_os_SdkConditionVariableType_Wait_plt(_QWORD, _QWORD);
__int64 nn_os_SdkMutexType_Lock_plt(_QWORD);
__int64 nnmem_nlib_memcplen_plt(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nnmem_nlib_memutf8_to_utf32char_plt(_QWORD, _QWORD, _QWORD, _QWORD,
                                            long double);
__int64 nnmem_nlib_threadpool_notify_plt(_QWORD, _QWORD);
__int64 pthread_cond_broadcast_plt(_QWORD);
__int64 pthread_mutex_lock_plt(_QWORD);
__int64 pthread_mutex_unlock_plt(_QWORD);
__int64 std___1___libcpp_verbose_abort_plt(const char*, ...);
__int64 strtod_plt(_QWORD, _QWORD);
extern _UNKNOWN SdkData_ea1978;
extern _UNKNOWN SdkData_ea1980;
extern _UNKNOWN SdkData_ea1988;
extern _UNKNOWN SdkData_eb7e94;
extern _UNKNOWN SdkData_eb7e98;
extern __int128 SdkData_bb1200;
extern __int128 SdkData_bb3810;
extern __int128 SdkData_bb4340;
extern __int64 SdkData_e86e38;
extern __int64 SdkData_eb7ea8;
extern __int64 SdkData_eb7eb0;
extern char SdkData_eb4d08;
int8x16_t SdkRoutine_151fd0(__int64, uint8x16_t, int8x16_t, int8x16_t,
                            int8x16_t, int8x16_t, int8x16_t);
__int64 nnmem_nlib_double_from_chars(double* a1, unsigned __int8** a2,
                                     unsigned __int8* a3, unsigned __int8* a4);
__int64 nn_nlibsdk_146ed0();
__int64 nn_nlibsdk_146f40();
__int64 nn_nlibsdk_14d4a0();
__int64 nnmem_nlib_memcplen(__int64* a1, _QWORD* a2, _QWORD* a3, int8x16_t* a4,
                            unsigned __int64 a5);
__int64 nnmem_nlib_sanitize_utf8(_QWORD* a1, unsigned __int64* a2,
                                 int8x16_t* a3, __int64 a4, __int64 a5,
                                 unsigned __int64 a6, int a7);
__int64 nn_nlibsdk_151f00(__int64 a1, __int64 a2, char* a3, __int64 a4);
int8x16_t nn_nlibsdk_152150(int8x16_t* a1, int8x16_t a2, int8x16_t a3,
                            int16x8_t a4);
void __attribute__((noreturn)) nn_nlibsdk_173980();
void __attribute__((noreturn)) nn_nlibsdk_173a00();
__int64 nn_nlibsdk_173a20();

__int64 nnmem_nlib_double_from_chars(double* a1, unsigned __int8** a2,
                                     unsigned __int8* a3, unsigned __int8* a4)
{
  double v4;
  int v6;
  unsigned __int8* v7;
  int v8;
  unsigned __int8* v9;
  int v10;
  int v11;
  double v12;
  unsigned __int8* v13;
  unsigned __int8* v14;
  int v15;
  int v16;
  unsigned int v17;
  int v18;
  int v19;
  unsigned __int8* v20;
  int v21;
  unsigned __int8* v22;
  int v23;
  int v24;
  unsigned __int8* v25;
  int v26;
  unsigned int v27;
  int v28;
  int v29;
  double v30;
  bool v31;
  double v32;
  __int64 v33;
  __int64 v34;
  _DWORD* v37;
  __int64 v38;
  unsigned __int8* v39;
  int v40;
  int v41;
  int v42;
  int v43;
  unsigned int v44;
  _QWORD v45[16];
  _BYTE* v46;

  v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(double, "d0", "=w"));
  v4 = 0x0.0p+0;
  if (a3 == a4) {
    v16 = 0;
    v17 = 22;
    v13 = a4;
    if (a2 == nullptr) {
      goto LABEL_107;
    }
    goto LABEL_106;
  }
  v6 = *a3;
  v7 = a3;
  v8 = v6;
  if (v6 == 45) {
    v7 = a3 + 1;
    if (a3 + 1 == a4) {
      goto LABEL_26;
    }
    v8 = *v7;
  }
  if (v8 != 48) {
    if ((unsigned __int8)(v8 - 58) >= 0xF6u) {
      v12 = 0x0.0p+0;
      v20 = v7 + 1;
      v10 = 0;
      v11 = 0;
      do {
        if (v10 > 17) {
          --v11;
          if (v20 == a4) {
            goto LABEL_33;
          }
        }
        else {
          ++v10;
          v12 = (double)(unsigned __int8)v8 + v12 * 0x1.4000000000000p+3 +
                -0x1.8000000000000p+5;
          if (v20 == a4) {
            goto LABEL_33;
          }
        }
        v21 = *v20++;
        v8 = v21;
      } while ((unsigned int)(v21 - 48) < 0xA);
      v9 = v20 - 1;
      if (v8 == 46) {
        goto LABEL_8;
      }
    LABEL_38:
      v13 = v9;
      if (v10 <= 17) {
        goto LABEL_20;
      }
      goto LABEL_39;
    }
  LABEL_26:
    v16 = 0;
    v17 = 22;
    v13 = a3;
    if (a2 == nullptr) {
      goto LABEL_107;
    }
    goto LABEL_106;
  }
  v9 = v7 + 1;
  if (v7 + 1 == a4) {
    v17 = 0;
    v16 = 1;
    v13 = a4;
    if (a2 == nullptr) {
      goto LABEL_107;
    }
    goto LABEL_106;
  }
  v8 = *v9;
  v10 = 0;
  v11 = 0;
  v12 = 0x0.0p+0;
  if (v8 != 46) {
    goto LABEL_38;
  }
LABEL_8:
  v13 = v9 + 1;
  if (v9 + 1 == a4) {
    v8 = 0;
    if (v10 <= 17) {
      goto LABEL_20;
    }
  }
  else {
    v8 = *v13;
    if ((unsigned int)(v8 - 48) > 9) {
      if (v10 <= 17) {
        goto LABEL_20;
      }
    }
    else {
      v14 = v9 + 2;
      while (1) {
        if (v10 <= 17) {
          ++v10;
          ++v11;
          v12 = (double)(unsigned __int8)v8 + v12 * 0x1.4000000000000p+3 +
                -0x1.8000000000000p+5;
        }
        if (v14 == a4) {
          break;
        }
        v15 = *v14++;
        v8 = v15;
        if ((unsigned int)(v15 - 48) >= 0xA) {
          v13 = v14 - 1;
          if (v10 > 17) {
            goto LABEL_39;
          }
          goto LABEL_20;
        }
      }
    LABEL_33:
      v8 = 0;
      v13 = a4;
      if (v10 <= 17) {
      LABEL_20:
        v18 = (2 - (_BYTE)v10) & 7;
        if (((2 - (_BYTE)v10) & 7) != 0) {
          v19 = v10;
          do {
            v12 = v12 * 0x1.4000000000000p+3;
            ++v19;
            --v18;
          } while (v18 != 0);
          if ((unsigned int)(v10 - 11) < 7) {
          LABEL_56:
            v11 = v11 - v10 + 18;
            if ((v8 & 0xFFFFFFDF) != 0x45) {
              goto LABEL_57;
            }
            goto LABEL_40;
          }
        }
        else {
          v19 = v10;
          if ((unsigned int)(v10 - 11) < 7) {
            goto LABEL_56;
          }
        }
        v29 = v19 - 18;
        do {
          v29 += 8;
          v12 = v12 * 0x1.4000000000000p+3 * 0x1.4000000000000p+3 *
                0x1.4000000000000p+3 * 0x1.4000000000000p+3 *
                0x1.4000000000000p+3 * 0x1.4000000000000p+3 *
                0x1.4000000000000p+3 * 0x1.4000000000000p+3;
        } while (v29 != 0);
        goto LABEL_56;
      }
    }
  }
LABEL_39:
  if ((v8 & 0xFFFFFFDF) != 0x45) {
  LABEL_57:
    v25 = nullptr;
    goto LABEL_58;
  }
LABEL_40:
  v22 = v13 + 1;
  if (v13 + 1 != a4) {
    v23 = *v22;
    if (v23 == 45 || (v24 = *v22, v23 == 43)) {
      v22 = v13 + 2;
      if (v13 + 2 == a4) {
        goto LABEL_46;
      }
      v24 = *v22;
    }
    if ((unsigned int)(v24 - 58) >= 0xFFFFFFF6) {
      v39 = v22 + 1;
      v40 = 0;
      while (1) {
        if (v40 - v11 >= 1000) {
          do {
            if (v39 == a4) {
              v16 = 0;
              v17 = 34;
              v13 = a4;
              if (a2 != nullptr) {
                goto LABEL_106;
              }
              goto LABEL_107;
            }
            v42 = *v39++;
          } while ((unsigned int)(v42 - 48) < 0xA);
          v13 = v39 - 1;
          v17 = 34;
          v16 = 0;
          if (a2 != nullptr) {
            goto LABEL_106;
          }
          goto LABEL_107;
        }
        v40 = v24 + 10 * v40 - 48;
        if (v39 == a4) {
          break;
        }
        v41 = *v39++;
        v24 = v41;
        if ((unsigned int)(v41 - 48) >= 0xA) {
          v13 = v39 - 1;
          goto LABEL_130;
        }
      }
      v13 = a4;
    LABEL_130:
      v43 = v11 + v40;
      v44 = v40 - v11;
      v25 = nullptr;
      if (v23 == 45) {
        v27 = -v43;
      }
      else {
        v27 = v44;
      }
      if ((v27 & 0x80000000) == 0) {
        goto LABEL_59;
      }
      goto LABEL_49;
    }
  }
LABEL_46:
  v25 = v22 - 1;
  v26 = *(v22 - 1);
  v13 = v22;
  if (v26 != 45 && v26 != 43) {
  LABEL_58:
    v27 = -v11;
    if ((-v11 & 0x80000000) == 0) {
      goto LABEL_59;
    }
    goto LABEL_49;
  }
  v25 = v22 - 2;
  v27 = -v11;
  if ((-v11 & 0x80000000) == 0) {
  LABEL_59:
    if (v27 < 0x123) {
      if (v27 >= 0x100) {
        v12 = v12 * 0x1.54fdd7f73bf3cp+850;
      }
    }
    else {
      v17 = 34;
      v16 = 0;
      if (v27 != 291 || v12 > 0x1.3f559e7bee6c1p+57) {
        goto LABEL_105;
      }
      v12 = v12 * 0x1.54fdd7f73bf3cp+850;
    }
    if ((v27 & 0x80) != 0) {
      v12 = v12 * 0x1.27748f9301d32p+425;
    }
    if ((v27 & 0x40) != 0) {
      v12 = v12 * 0x1.84f03e93ff9f5p+212;
    }
    if ((v27 & 0x20) != 0) {
      v12 = v12 * 0x1.3b8b5b5056e17p+106;
    }
    if ((v27 & 0x10) != 0) {
      v12 = v12 * 0x1.1c37937e08000p+53;
    }
    if ((v27 & 8) != 0) {
      v12 = v12 * 0x1.7d78400000000p+26;
    }
    if ((v27 & 4) != 0) {
      v12 = v12 * 0x1.3880000000000p+13;
    }
    if ((v27 & 2) != 0) {
      v12 = v12 * 0x1.9000000000000p+6;
    }
    v30 = 0x1.4000000000000p+3;
    v31 = (v27 & 1) == 0;
    goto LABEL_98;
  }
LABEL_49:
  if (v27 > 0xFFFFFEBB) {
    v28 = -v27;
  }
  else {
    v17 = 34;
    v16 = 0;
    if (v27 != -325 || v12 < 0x1.8b40a4eec437cp+57) {
      goto LABEL_105;
    }
    LOWORD(v28) = 325;
  }
  if ((v28 & 0x100) != 0) {
    v12 = v12 * 0x1.8062864ac6f43p-851;
  }
  if ((v28 & 0x80) != 0) {
    v12 = v12 * 0x1.bba08cf8c979dp-426;
  }
  if ((v28 & 0x40) != 0) {
    v12 = v12 * 0x1.50ffd44f4a73dp-213;
  }
  if ((v28 & 0x20) != 0) {
    v12 = v12 * 0x1.9f623d5a8a733p-107;
  }
  if ((v28 & 0x10) != 0) {
    v12 = v12 * 0x1.cd2b297d889bcp-54;
  }
  if ((v28 & 8) != 0) {
    v12 = v12 * 0x1.5798ee2308c3ap-27;
  }
  if ((v28 & 4) != 0) {
    v12 = v12 * 0x1.a36e2eb1c432dp-14;
  }
  if ((v28 & 2) != 0) {
    v12 = v12 * 0x1.47ae147ae147bp-7;
  }
  v30 = 0x1.999999999999ap-4;
  v31 = (v28 & 1) == 0;
LABEL_98:
  v32 = v12 * v30;
  if (!v31) {
    v12 = v32;
  }
  v17 = 0;
  v16 = 1;
  if (v6 == 45) {
    v4 = -v12;
  }
  else {
    v4 = v12;
  }
  if (v25 != nullptr) {
    v13 = v25;
  }
LABEL_105:
  if (a2 != nullptr) {
  LABEL_106:
    *a2 = v13;
  }
LABEL_107:
  if (v16 != 0) {
    memset(&v45[8], 0, 64);
    v33 = (unsigned __int64)(a4 - a3) >= 0x7F ? 127LL : a4 - a3;
    memset(v45, 0, 64);
    v34 = memcpy_plt(v45, a3, v33),
    v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(double, "d0", "=w"));
    *((_BYTE*)v45 + v33) = 0;
    if (LOBYTE(v45[0]) <= 0x20u &&
        ((1LL << SLOBYTE(v45[0])) & 0x100000601LL) != 0) {
      goto LABEL_113;
    }
    v46 = nullptr;
    v37 = (_DWORD*)__errno_location_plt(v34),
    v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(double, "d0", "=w"));
    *v37 = 0;
    strtod_plt(v45, &v46),
        v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(double, "d0", "=w"));
    if (*v46 != 0 || (*(_QWORD*)a1 = v38, *v37 != 0)) {
    LABEL_113:
      *a1 = v4;
    }
  }
  return v17;
}

__int64 nn_nlibsdk_146ed0()
{
  nnmem_nlib_threadpool_notify_plt(1, 1);
  pthread_mutex_lock_plt(&SdkData_ea1978);
  nnmem_nlib_threadpool_notify_plt(1, 0);
  SdkData_eb4d08 = 1;
  pthread_mutex_unlock_plt(&SdkData_ea1978);
  pthread_cond_broadcast_plt(&SdkData_ea1980);
  return pthread_cond_broadcast_plt(&SdkData_ea1988);
}

__int64 nn_nlibsdk_146f40() { return at_quick_exit_plt(nn_nlibsdk_146ed0); }

__int64 nn_nlibsdk_14d4a0() { return at_quick_exit_plt(SdkRoutine_14d4b0); }

__int64 nnmem_nlib_memcplen(__int64* a1, _QWORD* a2, _QWORD* a3, int8x16_t* a4,
                            unsigned __int64 a5)
{
  int8x16_t v10;
  int8x16_t v11;
  int8x16_t v12;
  int8x16_t v13;
  int8x16_t v14;
  int8x16_t v15;
  int8x16_t v16;
  int8x16_t v17;
  int8x16_t v18;
  int8x16_t v19;
  int8x16_t v20;
  int8x16_t v21;
  int8x16_t v22;
  int8x16_t v23;
  int8x16_t v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  int8x16_t v28;
  int8x16_t v29;
  int8x16_t v30;
  unsigned __int64 v31;
  int8x16_t v32;
  int8x16_t v33;
  int8x16_t v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  int8x16_t v37;
  int8x16_t v38;
  int8x16_t v39;
  int8x16_t v40;
  int8x16_t v41;
  int8x16_t v42;
  int8x16_t v43;
  int8x16_t v44;
  int8x16_t v45;
  __int64 v46;
  int8x16_t v47;
  int8x16_t v48;
  int8x16_t v49;
  int8x16_t v50;
  int8x16_t v51;
  int8x16_t v52;
  int8x16_t v53;
  int8x16_t v54;
  int8x16_t v55;
  int8x16_t v56;
  __int64 v57;
  __int64 result;
  int8x8_t v59;
  unsigned __int64 v60;
  unsigned __int64 v61;
  unsigned __int8 v62;
  unsigned __int32 v63;
  __int64 v64;
  __int64 v65;
  unsigned __int64 v66;
  int8x8_t v67;
  unsigned __int8 v68;
  int8x16_t v69;
  uint32x4_t v70;
  int16x8_t v71;
  int8x16_t v72;
  uint8x16_t v73[2];
  struct {
    int8x16_t v74;
    int8x16_t v75;
    int8x16_t v76;
    int8x16_t v77;
    int8x16_t v78;
  } v74_;

  v74_.v78 = (__typeof__(v74_.v78)){0};
  v74_.v77 = (__typeof__(v74_.v77)){0};
  v74_.v76 = (__typeof__(v74_.v76)){0};
  v74_.v75 = (__typeof__(v74_.v75)){0};
  v74_.v74 = (__typeof__(v74_.v74)){0};
  if (a5 < 0x10) {
    v26 = 0;
    v25 = 0;
    if (a5 != 0) {
      v27 = 0;
      memset(v73, 0, 17);
      v71 = (__typeof__(v71)){0};
      v72 = (__typeof__(v72)){0};
      v70 = (__typeof__(v70)){0};
      goto LABEL_36;
    }
    v16 = (__typeof__(v16)){0};
    if (vmaxvq_u32(COERCE_AS(uint32x4_t, 0)) == 0) {
      goto LABEL_49;
    }
  LABEL_55:
    LANES64(v59).n64_u64[0] = LANES64_OF(vshrn_n_s16(v16, 4u)).n64_u64[0];
    v60 = a5 + (int)~((unsigned int)__clz(LANES64(v59).n64_u64[0]) >> 2);
    *a3 = v60;
    if (a1 != nullptr) {
      *a1 = v25 - 1;
    }
    v61 = LANES128(*(a4)).n128_u8[v60];
    if (a2 != nullptr) {
      *a2 = v26 - ((unsigned int)v61 > 0xEF);
    }
    v62 = *((_BYTE*)&SdkData_bb3810 + (v61 & 0xF)) &
          *((_BYTE*)&SdkData_bb1200 + (v61 >> 4));
    if ((v62 & 0x21) == 0) {
      if (LANES64(v59).n64_u64[0] >> 60 == 0) {
        if ((*((_BYTE*)&SdkData_bb4340 +
               ((unsigned __int64)LANES128(*(a4)).n128_u8[v60 + 1] >> 4)) &
             v62) != 0) {
          return 84;
        }
        else {
          return 0;
        }
      }
      return 0;
    }
    return 84;
  }
  v10 = *a4;
  v11 = vcltzq_s8(*a4);
  if (vmaxvq_u32(v11) != 0) {
    LANES128(v12).n128_u64[0] = 0x4040404040404040LL;
    LANES128(v12).n128_u64[1] = 0x4040404040404040LL;
    LANES128(v13).n128_u64[0] = 0x2020202020202020LL;
    LANES128(v13).n128_u64[1] = 0x2020202020202020LL;
    LANES128(v14).n128_u64[0] = 0x1010101010101010LL;
    LANES128(v14).n128_u64[1] = 0x1010101010101010LL;
    v15 = vextq_s8(COERCE_AS(int8x16_t, 0LL), v10, 0xFu);
    v16 = vbicq_s8(v11, vceqzq_s8(vandq_s8(v10, v12)));
    v17 = vbicq_s8(v16, vceqzq_s8(vandq_s8(v10, v13)));
    v18 = veorq_s8(v16, v11);
    v19 = vbicq_s8(v17, vceqzq_s8(vandq_s8(v10, v14)));
    v20 = vorrq_s8(vorrq_s8(vextq_s8(COERCE_AS(int8x16_t, 0LL), v17, 0xEu),
                            vextq_s8(COERCE_AS(int8x16_t, 0LL), v16, 0xFu)),
                   vextq_s8(COERCE_AS(int8x16_t, 0LL), v19, 0xDu));
    if (vminvq_u32(vceqq_s8(v18, v20)) == -1) {
      LANES128(v21).n128_u64[0] = 0xF0F0F0F0F0F0F0FLL;
      LANES128(v21).n128_u64[1] = 0xF0F0F0F0F0F0F0FLL;
      v22 = vtstq_s8(vandq_s8(vqtbl1q_s8(COERCE_AS(int8x16_t, SdkData_bb3810),
                                         vandq_s8(v15, v21)),
                              vqtbl1q_s8(COERCE_AS(int8x16_t, SdkData_bb1200),
                                         vshrq_n_u8(v15, 4u))),
                     vqtbl1q_s8(COERCE_AS(int8x16_t, SdkData_bb4340),
                                vshrq_n_u8(v10, 4u)));
      if (vmaxvq_u32(v22) == 0) {
        v23 = vorrq_s8(vorrq_s8(vextq_s8(v17, COERCE_AS(int8x16_t, 0), 0xEu),
                                vextq_s8(v16, COERCE_AS(int8x16_t, 0), 0xFu)),
                       vextq_s8(v19, COERCE_AS(int8x16_t, 0), 0xDu));
        v24 = v23;
        v74_.v75 = v23;
        if (a1 != nullptr) {
          goto LABEL_6;
        }
      LABEL_16:
        v25 = 0;
        if (a2 != nullptr) {
          goto LABEL_9;
        }
      LABEL_17:
        v26 = 0;
        v27 = 16;
        if (a5 < 0x20) {
        LABEL_10:
          v74_.v76 = v18;
          v74_.v77 = v19;
          v74_.v78 = v16;
          if (a5 > 0x10) {
            goto LABEL_34;
          }
          goto LABEL_48;
        }
        goto LABEL_18;
      }
      nn_nlibsdk_152150(&v74_.v74, v18, v19, v22);
    }
    else {
      SdkRoutine_151fd0((__int64)&v74_.v74, v10, v15, v18, v20, v16, v19);
    }
    v26 = 0;
    v25 = 0;
    v27 = 0;
    goto LABEL_67;
  }
  if (vmaxvq_u32(COERCE_AS(uint32x4_t, 0LL)) != 0) {
    v26 = 0;
    v25 = 0;
    v64 = -17;
    goto LABEL_73;
  }
  v24 = (__typeof__(v24)){0};
  v23 = (__typeof__(v23)){0};
  v74_.v77 = (__typeof__(v74_.v77)){0};
  v74_.v76 = (__typeof__(v74_.v76)){0};
  v16 = (__typeof__(v16)){0};
  v19 = (__typeof__(v19)){0};
  v18 = (__typeof__(v18)){0};
  if (a1 == nullptr) {
    goto LABEL_16;
  }
LABEL_6:
  v25 = 16;
  if (vmaxvq_u32(v18) != 0) {
    v25 = 16 - vaddvq_s8(vnegq_s8(v18));
  }
  if (a2 == nullptr) {
    goto LABEL_17;
  }
LABEL_9:
  v26 = vaddvq_s8(vnegq_s8(v19));
  v27 = 16;
  if (a5 < 0x20) {
    goto LABEL_10;
  }
LABEL_18:
  v28 = v74_.v75;
  LANES128(v29).n128_u64[0] = 0x4040404040404040LL;
  LANES128(v29).n128_u64[1] = 0x4040404040404040LL;
  LANES128(v30).n128_u64[0] = 0x2020202020202020LL;
  LANES128(v30).n128_u64[1] = 0x2020202020202020LL;
  v31 = 0;
  LANES128(v32).n128_u64[0] = 0x1010101010101010LL;
  LANES128(v32).n128_u64[1] = 0x1010101010101010LL;
  v33 = v24;
  LANES128(v34).n128_u64[0] = 0xF0F0F0F0F0F0F0FLL;
  LANES128(v34).n128_u64[1] = 0xF0F0F0F0F0F0F0FLL;
  do {
    v37 = a4[v31 / 0x10 + 1];
    v38 = vcltzq_s8(v37);
    if (vmaxvq_u32(v38) != 0) {
      v39 = *(int8x16_t*)((char*)&a4[v31 / 0x10] + 15);
      v40 = vbicq_s8(v38, vceqzq_s8(vandq_s8(v37, v29)));
      v41 = vbicq_s8(v40, vceqzq_s8(vandq_s8(v37, v30)));
      v42 = veorq_s8(v40, v38);
      v43 = vbicq_s8(v41, vceqzq_s8(vandq_s8(v37, v32)));
      v44 = vorrq_s8(
          vorrq_s8(vorrq_s8(vextq_s8(COERCE_AS(int8x16_t, 0LL), v41, 0xEu),
                            vextq_s8(COERCE_AS(int8x16_t, 0LL), v40, 0xFu)),
                   vextq_s8(COERCE_AS(int8x16_t, 0LL), v43, 0xDu)),
          v33);
      if (vminvq_u32(vceqq_s8(v42, v44)) == -1) {
        v45 = vtstq_s8(vandq_s8(vqtbl1q_s8(COERCE_AS(int8x16_t, SdkData_bb3810),
                                           vandq_s8(v39, v34)),
                                vqtbl1q_s8(COERCE_AS(int8x16_t, SdkData_bb1200),
                                           vshrq_n_u8(v39, 4u))),
                       vqtbl1q_s8(COERCE_AS(int8x16_t, SdkData_bb4340),
                                  vshrq_n_u8(v37, 4u)));
        if (vmaxvq_u32(v45) == 0) {
          v16 = v40;
          v18 = v42;
          v19 = v43;
          v28 =
              vorrq_s8(vorrq_s8(vextq_s8(v41, COERCE_AS(int8x16_t, 0LL), 0xEu),
                                vextq_s8(v40, COERCE_AS(int8x16_t, 0LL), 0xFu)),
                       vextq_s8(v43, COERCE_AS(int8x16_t, 0LL), 0xDu));
          v23 = v28;
          v24 = v28;
          v33 = v28;
          if (a1 == nullptr) {
            goto LABEL_31;
          }
          goto LABEL_27;
        }
        v74_.v76 = v18;
        v74_.v77 = v19;
        v74_.v75 = v28;
        nn_nlibsdk_152150(&v74_.v74, v42, v43, v45);
      }
      else {
        v74_.v75 = v28;
        v74_.v76 = v18;
        v74_.v77 = v19;
        v74_.v78 = v16;
        SdkRoutine_151fd0((__int64)&v74_.v74, v37, v39, v42, v44, v40, v43);
      }
      v27 = v31 + 16;
      goto LABEL_67;
    }
    if (vmaxvq_u32(v23) != 0) {
      v74_.v75 = v28;
      v64 =
          v31 +
          -((unsigned int)__clz(LANES64_OF(vshrn_n_s16(v16, 4u)).n64_u64[0]) >>
            2) +
          15;
    LABEL_73:
      *a3 = v64;
      goto LABEL_74;
    }
    v18 = (__typeof__(v18)){0};
    v33 = v23;
    v19 = (__typeof__(v19)){0};
    if (a1 != nullptr) {
    LABEL_27:
      if (vmaxvq_u32(v18) != 0) {
        v46 = 16 - vaddvq_s8(vnegq_s8(v18));
      }
      else {
        v46 = 16;
      }
      v25 += v46;
    }
  LABEL_31:
    if (a2 != nullptr) {
      v26 += vaddvq_s8(vnegq_s8(v19));
    }
    v35 = v31 + 16;
    v36 = v31 + 48;
    v31 += 16LL;
  } while (v36 <= a5);
  v27 = v35 + 16;
  v74_.v75 = v28;
  v74_.v76 = v18;
  v74_.v77 = v19;
  v74_.v78 = v16;
  if (v35 + 16 >= a5) {
    goto LABEL_48;
  }
LABEL_34:
  memset(v73, 0, 17);
  v70 = v23;
  v71 = v16;
  v72 = v24;
  if (v27 != 0) {
    LANES128(v73[0]).n128_u8[0] = LANES128(*(a4)).n128_u8[v27 - 1];
  }
LABEL_36:
  memcpy_plt((char*)LANES128(v73[0]).n128_u64 + 1, (char*)a4 + v27, a5 - v27);
  v47 = vcltzq_s8(*(uint8x16_t*)((char*)v73 + 1));
  if (vmaxvq_u32(v47) == 0) {
    v23 = v70;
    v53 = (__typeof__(v53)){0};
    if (vmaxvq_u32(v70) == 0) {
      v16 = v71;
      v52 = (__typeof__(v52)){0};
      if (a1 != nullptr) {
        goto LABEL_43;
      }
      goto LABEL_46;
    }
    LANES128(v69).n128_u64[0] = -1;
    LANES128(v69).n128_u64[1] = -1;
    LANES128(v74_.v74).n128_u8[4] = 1;
    v74_.v76 = v69;
    LANES128(v74_.v74).n128_u32[0] = ~(
        (unsigned int)__clz(LANES64_OF(vshrn_n_s16(v71, 4u)).n64_u64[0]) >> 2);
  LABEL_67:
    v63 = LANES128(v74_.v74).n128_u32[0];
    v64 = v27 + LANES128(v74_.v74).n128_i32[0];
    *a3 = v64;
    if ((v63 & 0x80000000) == 0) {
      if (a1 != nullptr) {
        if (vmaxvq_u32(v74_.v76) != 0) {
          if ((LANES128(v74_.v74).n128_u8[4] & 1) != 0) {
            v65 = -1;
          }
          else {
            v65 = 16 - vaddvq_s8(vnegq_s8(v74_.v76));
          }
        }
        else {
          v65 = 16;
        }
        *a1 = v65 + v25;
      }
      if (a2 != nullptr) {
        *a2 = v26 + vaddvq_s8(vnegq_s8(v74_.v77));
      }
      v66 = LANES128(*(a4)).n128_u8[v64];
      if (v66 >= 0xC0) {
        LANES64(v67).n64_u64[0] =
            LANES64_OF(vcnt_s8(COERCE_AS(int8x8_t, (v66 >> 4)))).n64_u64[0];
        PSEUDO_LOW_LANE64(v67, n64_u8, vaddv_s8(v67));
        if (v64 + (unsigned __int64)LANES64(v67).n64_u32[0] > a5) {
          v68 = *((_BYTE*)&SdkData_bb3810 + (v66 & 0xF)) &
                *((_BYTE*)&SdkData_bb1200 + (v66 >> 4));
          if ((v68 & 0x21) == 0 &&
              (v64 == a5 - 1 ||
               (*((_BYTE*)&SdkData_bb4340 +
                  ((unsigned __int64)LANES128(*(a4)).n128_u8[v64 + 1] >> 4)) &
                v68) == 0)) {
            return 0;
          }
        }
      }
      return 84;
    }
  LABEL_74:
    if (a1 != nullptr) {
      *a1 = v25 - 1;
    }
    if (a2 != nullptr) {
      *a2 = v26 - (LANES128(*(a4)).n128_u8[v64] > 0xEFu);
    }
    return 84;
  }
  LANES128(v48).n128_u64[0] = 0x4040404040404040LL;
  LANES128(v48).n128_u64[1] = 0x4040404040404040LL;
  LANES128(v49).n128_u64[0] = 0x2020202020202020LL;
  LANES128(v49).n128_u64[1] = 0x2020202020202020LL;
  LANES128(v50).n128_u64[0] = 0x1010101010101010LL;
  LANES128(v50).n128_u64[1] = 0x1010101010101010LL;
  v16 = vbicq_s8(v47, vceqzq_s8(vandq_s8(*(uint8x16_t*)((char*)v73 + 1), v48)));
  v51 = vbicq_s8(v16, vceqzq_s8(vandq_s8(*(uint8x16_t*)((char*)v73 + 1), v49)));
  v52 = veorq_s8(v16, v47);
  v53 = vbicq_s8(v51, vceqzq_s8(vandq_s8(*(uint8x16_t*)((char*)v73 + 1), v50)));
  v54 =
      vorrq_s8(vorrq_s8(vorrq_s8(vextq_s8(COERCE_AS(int8x16_t, 0), v51, 0xEu),
                                 vextq_s8(COERCE_AS(int8x16_t, 0), v16, 0xFu)),
                        vextq_s8(COERCE_AS(int8x16_t, 0), v53, 0xDu)),
               v72);
  if (vminvq_u32(vceqq_s8(v52, v54)) != -1) {
    SdkRoutine_151fd0((__int64)&v74_.v74, *(uint8x16_t*)((char*)v73 + 1),
                      v73[0], v52, v54, v16, v53);
    goto LABEL_67;
  }
  LANES128(v55).n128_u64[0] = 0xF0F0F0F0F0F0F0FLL;
  LANES128(v55).n128_u64[1] = 0xF0F0F0F0F0F0F0FLL;
  v56 = vtstq_s8(vandq_s8(vqtbl1q_s8(COERCE_AS(int8x16_t, SdkData_bb3810),
                                     vandq_s8(v73[0], v55)),
                          vqtbl1q_s8(COERCE_AS(int8x16_t, SdkData_bb1200),
                                     vshrq_n_u8(v73[0], 4u))),
                 vqtbl1q_s8(COERCE_AS(int8x16_t, SdkData_bb4340),
                            vshrq_n_u8(*(uint8x16_t*)((char*)v73 + 1), 4u)));
  if (vmaxvq_u32(v56) != 0) {
    nn_nlibsdk_152150(&v74_.v74, v52, v53, v56);
    goto LABEL_67;
  }
  v23 = vorrq_s8(vorrq_s8(vextq_s8(v51, COERCE_AS(int8x16_t, 0), 0xEu),
                          vextq_s8(v16, COERCE_AS(int8x16_t, 0), 0xFu)),
                 vextq_s8(v53, COERCE_AS(int8x16_t, 0), 0xDu));
  if (a1 != nullptr) {
  LABEL_43:
    v57 = 16;
    if (vmaxvq_u32(v52) != 0) {
      v57 = 16 - vaddvq_s8(vnegq_s8(v52));
    }
    v25 += (a5 | 0xFFFFFFFFFFFFFFF0LL) + v57;
  }
LABEL_46:
  if (a2 != nullptr) {
    v26 += vaddvq_s8(vnegq_s8(v53));
  }
LABEL_48:
  if (vmaxvq_u32(v23) != 0) {
    goto LABEL_55;
  }
LABEL_49:
  *a3 = a5;
  if (a1 != nullptr) {
    *a1 = v25;
  }
  result = 0;
  if (a2 != nullptr) {
    *a2 = v26;
  }
  return result;
}

__int64 nnmem_nlib_sanitize_utf8(_QWORD* a1, unsigned __int64* a2,
                                 int8x16_t* a3, __int64 a4, __int64 a5,
                                 unsigned __int64 a6, int a7)
{

#pragma clang fp contract(off)
  unsigned __int64 v9;
  int8x16_t* v12;
  int8x16_t v13;
  int8x16_t v14;
  __int64 v15;
  int8x16_t v16;
  unsigned __int64 v17;
  int8x16_t v18;
  int8x16_t v19;
  int8x16_t v20;
  int8x16_t v21;
  int8x16_t v22;
  int8x16_t v23;
  unsigned __int64 v24;
  char* v25;
  int8x16_t v26;
  int8x16_t v27;
  int8x16_t v28;
  int8x16_t v29;
  int8x16_t v30;
  int8x16_t v31;
  int8x16_t v32;
  int8x16_t v33;
  int8x16_t v34;
  int8x16_t v35;
  int8x16_t v36;
  int8x16_t v37;
  int8x16_t v38;
  int8x16_t v39;
  int8x16_t v40;
  int8x16_t v41;
  int8x16_t v42;
  int8x16_t v43;
  int8x16_t v44;
  int8x16_t v45;
  int8x16_t v46;
  long double v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  int8x16_t v51;
  __int64 v52;
  __int64 v53;
  int8x16_t* v54;
  __int64 v55;
  int v56;
  unsigned __int64 v57;
  int v58;
  unsigned int v59;
  __int64 v61;
  _QWORD* v62;
  __int64 v63;
  char* v64;
  __int64 v65;
  unsigned __int64 v66;
  char* v67;
  __int64 v68;
  __int64 v69;
  char* v70;
  __int64 v71;
  __int64 v72;
  unsigned __int64 v73;
  __int64 v74;
  int8x16_t v75;
  int8x16_t v76;
  int8x16_t v77;
  _QWORD* v78;
  int v79;
  uint8x16_t v80[2];
  struct {
    int8x16_t v81;
    int8x16_t v82;
    int8x16_t v83;
    int8x16_t v84;
    int16x8_t v85;
  } v81_;

  if (a7 == 0) {
    return nnmem_nlib_memcplen_plt(0, 0, a2, a5, a6);
  }
  v9 = (unsigned __int64)LANES128(*(a3)).n128_u64 + a4;
  v81_.v85 = (__typeof__(v81_.v85)){0};
  v81_.v84 = (__typeof__(v81_.v84)){0};
  v12 = a3;
  v81_.v83 = (__typeof__(v81_.v83)){0};
  v81_.v82 = (__typeof__(v81_.v82)){0};
  v81_.v81 = (__typeof__(v81_.v81)){0};
  if (a6 == 0) {
  LABEL_65:
    v59 = vmaxvq_u32(v81_.v82);
    if (v59 != 0) {
      v65 = (int)~((unsigned int)__clz(
                       LANES64_OF(vshrn_n_s16(v81_.v85, 4u)).n64_u64[0]) >>
                   2);
      v66 = a6 + v65;
      v67 = (char*)v12 + v65;
      if ((*((_BYTE*)&SdkData_bb1200 +
             ((unsigned __int64)*(unsigned __int8*)(a5 + a6 + v65) >> 4)) &
           *((_BYTE*)&SdkData_bb3810 + (*(_BYTE*)(a5 + a6 + v65) & 0xF)) &
           0x21) != 0) {
        if (a7 == 1) {
          if (a3 != nullptr) {
            if ((unsigned __int64)(v67 + 3) > v9) {
              *a2 = v66;
              *a1 = v67 - (char*)a3;
              return 34;
            }
            *(_WORD*)v67 = -16401;
            v67[2] = -67;
          }
          v67 += 3;
        }
        v59 = 0;
        *a2 = a6;
      }
      else {
        v59 = 0;
        *a2 = v66;
      }
      v64 = (char*)(v67 - (char*)a3);
    }
    else {
      *a2 = a6;
      v64 = (char*)((char*)v12 - (char*)a3);
    }
    *a1 = v64;
    return v59;
  }
  LANES128(v13).n128_u64[0] = -1;
  LANES128(v13).n128_u64[1] = -1;
  LANES128(v14).n128_u64[0] = 0x4040404040404040LL;
  LANES128(v14).n128_u64[1] = 0x4040404040404040LL;
  v15 = a5 - 1;
  LANES128(v16).n128_u64[0] = 0x2020202020202020LL;
  LANES128(v16).n128_u64[1] = 0x2020202020202020LL;
  v17 = 0;
  v12 = a3;
  v18 = COERCE_AS(int8x16_t, SdkData_bb1200);
  LANES128(v19).n128_u64[0] = 0x1010101010101010LL;
  LANES128(v19).n128_u64[1] = 0x1010101010101010LL;
  v20 = COERCE_AS(int8x16_t, SdkData_bb3810);
  v21 = (__typeof__(v21)){0};
  LANES128(v22).n128_u64[0] = 0xF0F0F0F0F0F0F0FLL;
  LANES128(v22).n128_u64[1] = 0xF0F0F0F0F0F0F0FLL;
  v23 = COERCE_AS(int8x16_t, SdkData_bb4340);
  while (1) {
    while (1) {
      v24 = v17 + 16;
      if (v17 + 16 > a6) {
        break;
      }
      v25 = (char*)(a5 + v17);
      v26 = *(int8x16_t*)(a5 + v17);
      if (v17 != 0) {
        v27 = *(int8x16_t*)(v25 - 1);
        v28 = vcltzq_s8(v26);
        if (vmaxvq_u32(v28) != 0) {
          goto LABEL_10;
        }
      }
      else {
        v27 = vextq_s8(v21, v26, 0xFu);
        v28 = vcltzq_s8(v26);
        if (vmaxvq_u32(v28) != 0) {
        LABEL_10:
          v29 = vbicq_s8(v28, vceqzq_s8(vandq_s8(v26, v14)));
          v30 = vbicq_s8(v29, vceqzq_s8(vandq_s8(v26, v16)));
          v31 = veorq_s8(v29, v28);
          v32 = vbicq_s8(v30, vceqzq_s8(vandq_s8(v26, v19)));
          v33 = vorrq_s8(vorrq_s8(vorrq_s8(vextq_s8(v21, v30, 0xEu),
                                           vextq_s8(v21, v29, 0xFu)),
                                  vextq_s8(v21, v32, 0xDu)),
                         v81_.v82);
          if (vminvq_u32(vceqq_s8(v31, v33)) == -1) {
            v34 = vtstq_s8(vandq_s8(vqtbl1q_s8(v20, vandq_s8(v27, v22)),
                                    vqtbl1q_s8(v18, vshrq_n_u8(v27, 4u))),
                           vqtbl1q_s8(v23, vshrq_n_u8(v26, 4u)));
            if (vmaxvq_u32(v34) == 0) {
              v81_.v84 = v32;
              v81_.v85 = v29;
              v81_.v82 = vorrq_s8(
                  vorrq_s8(vextq_s8(v30, v21, 0xEu), vextq_s8(v29, v21, 0xFu)),
                  vextq_s8(v32, v21, 0xDu));
              v81_.v83 = v31;
              if (a3 == nullptr) {
                goto LABEL_6;
              }
              goto LABEL_4;
            }
            v78 = a1;
            v77 = v18;
            v74 = v15;
            v75 = v23;
            v76 = v20;
            v50 = a5;
            *(int8x16_t*)&v47 = nn_nlibsdk_152150(&v81_.v81, v31, v32, v34);
            a5 = v50;
            v48 = LANES128(v81_.v81).n128_u32[0];
            if (a3 == nullptr) {
              goto LABEL_36;
            }
          }
          else {
            v78 = a1;
            v75 = v23;
            v76 = v20;
            v77 = v18;
            v74 = v15;
            v49 = a5;
            *(int8x16_t*)&v47 = SdkRoutine_151fd0((__int64)&v81_.v81, v26, v27,
                                                  v31, v33, v29, v32);
            a5 = v49;
            v48 = LANES128(v81_.v81).n128_u32[0];
            if (a3 == nullptr) {
              goto LABEL_36;
            }
          }
          goto LABEL_33;
        }
      }
      if (vmaxvq_u32(v81_.v82) != 0) {
        *((_QWORD*)&v47 + 1) = LANES128(v81_.v85).n128_u64[1];
        v75 = v23;
        v76 = v20;
        *(int8x8_t*)&v47 = vshrn_n_s16(v81_.v85, 4u);
        v77 = v18;
        v74 = v15;
        v78 = a1;
        v81_.v83 = v13;
        LANES128(v81_.v81).n128_u8[4] = 1;
        LANES128(v81_.v81).n128_u32[0] =
            ~((unsigned int)__clz(*(unsigned __int64*)&v47) >> 2);
        v48 = LANES128(v81_.v81).n128_u32[0];
        if (a3 == nullptr) {
          goto LABEL_36;
        }
        goto LABEL_33;
      }
      v81_.v84 = (__typeof__(v81_.v84)){0};
      v81_.v83 = (__typeof__(v81_.v83)){0};
      if (a3 != nullptr) {
      LABEL_4:
        if ((unsigned __int64)LANES128(v12[1]).n128_u64 > v9) {
          v61 = a5 + a6;
          v62 = a1;
          v63 = nn_nlibsdk_151f00((__int64)v12, v9, v25, v61);
          *a2 = v63 + v17;
          *v62 = (char*)v12 + v63 - (char*)a3;
          return 34;
        }
        *v12 = v26;
      }
    LABEL_6:
      ++v12;
      v17 += 16LL;
      if (v24 >= a6) {
        goto LABEL_65;
      }
    }
    v75 = v23;
    v76 = v20;
    v77 = v18;
    v78 = a1;
    memset(v80, 0, 17);
    if (v17 != 0) {
      LANES128(v80[0]).n128_u8[0] = *(_BYTE*)(v15 + v17);
    }
    v72 = a5;
    v73 = a6 - v17;
    memcpy_plt((char*)LANES128(v80[0]).n128_u64 + 1, a5 + v17, a6 - v17);
    v35 = vcltzq_s8(*(uint8x16_t*)((char*)v80 + 1));
    if (vmaxvq_u32(v35) != 0) {
      LANES128(v36).n128_u64[0] = 0x4040404040404040LL;
      LANES128(v36).n128_u64[1] = 0x4040404040404040LL;
      LANES128(v37).n128_u64[0] = 0x2020202020202020LL;
      LANES128(v37).n128_u64[1] = 0x2020202020202020LL;
      LANES128(v38).n128_u64[0] = 0xF0F0F0F0F0F0F0FLL;
      LANES128(v38).n128_u64[1] = 0xF0F0F0F0F0F0F0FLL;
      v39 = vandq_s8(*(uint8x16_t*)((char*)v80 + 1), v37);
      LANES128(v37).n128_u64[0] = 0x1010101010101010LL;
      LANES128(v37).n128_u64[1] = 0x1010101010101010LL;
      v40 = vandq_s8(*(uint8x16_t*)((char*)v80 + 1), v37);
      v41 = vbicq_s8(v35,
                     vceqzq_s8(vandq_s8(*(uint8x16_t*)((char*)v80 + 1), v36)));
      v42 = vbicq_s8(v41, vceqzq_s8(v39));
      v43 = veorq_s8(v41, v35);
      v44 = vbicq_s8(v42, vceqzq_s8(v40));
      v45 = vorrq_s8(
          vorrq_s8(vorrq_s8(vextq_s8(COERCE_AS(int8x16_t, 0), v42, 0xEu),
                            vextq_s8(COERCE_AS(int8x16_t, 0), v41, 0xFu)),
                   vextq_s8(COERCE_AS(int8x16_t, 0), v44, 0xDu)),
          v81_.v82);
      if (vminvq_u32(vceqq_s8(v43, v45)) != -1) {
        v74 = v15;
        *(int8x16_t*)&v47 = SdkRoutine_151fd0((__int64)&v81_.v81,
                                              *(uint8x16_t*)((char*)v80 + 1),
                                              v80[0], v43, v45, v41, v44);
        a5 = v72;
        v48 = LANES128(v81_.v81).n128_u32[0];
        if (a3 == nullptr) {
          goto LABEL_36;
        }
        goto LABEL_33;
      }
      a1 = v78;
      a5 = v72;
      v46 = vtstq_s8(
          vandq_s8(vqtbl1q_s8(v76, vandq_s8(v80[0], v38)),
                   vqtbl1q_s8(v77, vshrq_n_u8(v80[0], 4u))),
          vqtbl1q_s8(v75, vshrq_n_u8(*(uint8x16_t*)((char*)v80 + 1), 4u)));
      if (vmaxvq_u32(v46) == 0) {
        v81_.v84 = v44;
        v81_.v85 = v41;
        v81_.v82 =
            vorrq_s8(vorrq_s8(vextq_s8(v42, COERCE_AS(int8x16_t, 0), 0xEu),
                              vextq_s8(v41, COERCE_AS(int8x16_t, 0), 0xFu)),
                     vextq_s8(v44, COERCE_AS(int8x16_t, 0), 0xDu));
        v81_.v83 = v43;
        goto LABEL_61;
      }
      v74 = v15;
      *(int8x16_t*)&v47 = nn_nlibsdk_152150(&v81_.v81, v43, v44, v46);
      a5 = v72;
      v48 = LANES128(v81_.v81).n128_u32[0];
      if (a3 == nullptr) {
        goto LABEL_36;
      }
    }
    else {
      if (vmaxvq_u32(v81_.v82) == 0) {
        a1 = v78;
        a5 = v72;
        v81_.v84 = (__typeof__(v81_.v84)){0};
        v81_.v83 = (__typeof__(v81_.v83)){0};
      LABEL_61:
        if (a3 != nullptr) {
          if ((unsigned __int64)LANES128(*(v12)).n128_u64 + a6 - v17 > v9) {
            v70 = (char*)(a5 + v17);
            v68 = a5 + a6;
            v69 = (__int64)v12;
            goto LABEL_83;
          }
          memcpy_plt(v12, a5 + v17, v73);
          a5 = v72;
          a1 = v78;
        }
        v12 = (int8x16_t*)((char*)v12 + v73);
        goto LABEL_65;
      }
      LANES128(v51).n128_u64[0] = -1;
      LANES128(v51).n128_u64[1] = -1;
      a5 = v72;
      v74 = v15;
      LANES128(v81_.v81).n128_u8[4] = 1;
      v81_.v83 = v51;
      *((_QWORD*)&v47 + 1) = LANES128(v81_.v85).n128_u64[1];
      *(int8x8_t*)&v47 = vshrn_n_s16(v81_.v85, 4u);
      LANES128(v81_.v81).n128_u32[0] =
          ~((unsigned int)__clz(*(unsigned __int64*)&v47) >> 2);
      v48 = LANES128(v81_.v81).n128_u32[0];
      if (a3 == nullptr) {
        goto LABEL_36;
      }
    }
  LABEL_33:
    if ((int)v48 >= 1) {
      v52 = a5 + v17;
      if ((unsigned __int64)LANES128(*(v12)).n128_u64 + v48 > v9) {
        v68 = v52 + v48;
        v69 = (__int64)v12;
        v70 = (char*)(a5 + v17);
      LABEL_83:
        v71 = nn_nlibsdk_151f00(v69, v9, v70, v68);
        *a2 = v71 + v17;
        *v78 = (char*)v12 + v71 - (char*)a3;
        return 34;
      }
      v53 = a5;
      memcpy_plt(v12, v52, v48);
      LODWORD(v48) = LANES128(v81_.v81).n128_u32[0];
      a5 = v53;
    }
  LABEL_36:
    v12 = (int8x16_t*)((char*)v12 + (int)v48);
    v17 += (int)v48;
    if (v17 < a6) {
      break;
    }
  LABEL_49:
    v20 = v76;
    v18 = v77;
    v23 = v75;
    LANES128(v13).n128_u64[0] = -1;
    LANES128(v13).n128_u64[1] = -1;
    LANES128(v14).n128_u64[0] = 0x4040404040404040LL;
    LANES128(v14).n128_u64[1] = 0x4040404040404040LL;
    LANES128(v16).n128_u64[0] = 0x2020202020202020LL;
    LANES128(v16).n128_u64[1] = 0x2020202020202020LL;
    a1 = v78;
    v15 = v74;
    LANES128(v19).n128_u64[0] = 0x1010101010101010LL;
    LANES128(v19).n128_u64[1] = 0x1010101010101010LL;
    v81_.v85 = (__typeof__(v81_.v85)){0};
    v81_.v84 = (__typeof__(v81_.v84)){0};
    v21 = (__typeof__(v21)){0};
    v81_.v83 = (__typeof__(v81_.v83)){0};
    LANES128(v22).n128_u64[0] = 0xF0F0F0F0F0F0F0FLL;
    LANES128(v22).n128_u64[1] = 0xF0F0F0F0F0F0F0FLL;
    v81_.v82 = (__typeof__(v81_.v82)){0};
    v81_.v81 = (__typeof__(v81_.v81)){0};
    if (v17 >= a6) {
      goto LABEL_65;
    }
  }
  if (a7 == 1) {
    if (a3 != nullptr) {
      v54 = v12;
      while (1) {
        LANES128(v80[0]).n128_u64[0] = 0;
        v79 = 0;
        v55 = a5;
        v56 = nnmem_nlib_memutf8_to_utf32char_plt(v80, &v79, a5 + v17, a6 - v17,
                                                  v47);
        if (v56 != 84) {
          break;
        }
        v12 = (int8x16_t*)((char*)&LANES128(*(v54)).n128_u16[1] + 1);
        if ((unsigned __int64)LANES128(*(v54)).n128_u64 + 3 > v9) {
          v59 = 34;
          goto LABEL_80;
        }
        LANES128(*(v54)).n128_u16[0] = -16401;
        v57 = LANES128(v80[0]).n128_u64[0];
        LANES128(*(v54)).n128_u8[2] = -67;
        v54 = (int8x16_t*)((char*)v54 + 3);
        a5 = v55;
        v17 += v57;
        if (v17 >= a6) {
          goto LABEL_49;
        }
      }
      v59 = 0;
      if (v56 != 0) {
        goto LABEL_80;
      }
      goto LABEL_54;
    }
    while (1) {
      LANES128(v80[0]).n128_u64[0] = 0;
      v79 = 0;
      v55 = a5;
      v58 = nnmem_nlib_memutf8_to_utf32char_plt(v80, &v79, a5 + v17, a6 - v17,
                                                v47);
      if (v58 != 84) {
        break;
      }
      v12 = (int8x16_t*)((char*)v12 + 3);
      a5 = v55;
      v17 += LANES128(v80[0]).n128_u64[0];
      if (v17 >= a6) {
        goto LABEL_49;
      }
    }
  }
  else {
    while (1) {
      LANES128(v80[0]).n128_u64[0] = 0;
      v79 = 0;
      v55 = a5;
      v58 = nnmem_nlib_memutf8_to_utf32char_plt(v80, &v79, a5 + v17, a6 - v17,
                                                v47);
      if (v58 != 84) {
        break;
      }
      a5 = v55;
      v17 += LANES128(v80[0]).n128_u64[0];
      if (v17 >= a6) {
        goto LABEL_49;
      }
    }
  }
  if (v58 == 0) {
    v54 = v12;
  LABEL_54:
    v12 = v54;
    a5 = v55;
    goto LABEL_49;
  }
  v59 = 0;
  v54 = v12;
LABEL_80:
  *a2 = v17;
  *v78 = (char*)v54 - (char*)a3;
  return v59;
}

__int64 nn_nlibsdk_151f00(__int64 a1, __int64 a2, char* a3, __int64 a4)
{
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v8;
  int v9;

  v4 = a4 - (_QWORD)a3;
  if (a2 - a1 >= a4 - (__int64)a3) {
    v5 = a4 - (_QWORD)a3;
  }
  else {
    do {
      if (v4 < 1) {
        v5 = v4;
      }
      else {
        do {
          v5 = v4 - 1;
          if ((unsigned __int64)v4 < 2) {
            break;
          }
          v6 = a3[--v4];
        } while (v6 < -64);
      }
      v4 = v5;
    } while (a2 - a1 < v5);
  }
  if (v5 >= 1) {
    memcpy_plt(a1, a3, v5);
    return v5;
  }
  if (*a3 <= -65) {
    v8 = v5;
    do {
      v9 = *(char*)(a1 - 1 + v8);
      v5 = --v8;
    } while (v9 < -64);
    return v5;
  }
  return 0;
}

int8x16_t nn_nlibsdk_152150(int8x16_t* a1, int8x16_t a2, int8x16_t a3,
                            int16x8_t a4)
{
  unsigned __int64 v4;
  unsigned int v5;
  int8x16_t result;
  int8x16_t v7;

  v4 = __clz(__rbit64(LANES64_OF(vshrn_n_s16(a4, 4u)).n64_u64[0]));
  v5 = ((unsigned int)v4 >> 2) - 1;
  LANES128(*(a1)).n128_u32[0] = v5;
  if (v4 > 3) {
    v7 = *(int8x16_t*)(SdkData_e86e38 - v5 + 16);
    result = vornq_s8(a2, v7);
    a1[2] = result;
    a1[3] = vandq_s8(v7, a3);
  }
  else {
    LANES128(result).n128_u64[0] = -1;
    LANES128(result).n128_u64[1] = -1;
    LANES128(*(a1)).n128_u8[4] = 1;
    a1[2] = result;
  }
  return result;
}

void __attribute__((noreturn)) nn_nlibsdk_173980()
{
  __int64* v0;
  __int64 v1;
  __int64 v2;

  nn_os_SdkMutexType_Lock_plt(&SdkData_eb7e94);
  while (1) {
    nn_os_SdkConditionVariableType_Wait_plt(&SdkData_eb7e98, &SdkData_eb7e94);
    v0 = (__int64*)SdkData_eb7ea8;
    v1 = SdkData_eb7eb0;
    if (SdkData_eb7ea8 != SdkData_eb7eb0) {
      do {
        v2 = *v0++;
        nn_nlibsdk_detail_JoinAndFreePosixThread(v2, nullptr);
      } while (v0 != (__int64*)v1);
      v0 = (__int64*)SdkData_eb7ea8;
    }
    SdkData_eb7eb0 = (__int64)v0;
  }
}

void __attribute__((noreturn)) nn_nlibsdk_173a00()
{
  std___1___libcpp_verbose_abort_plt(
      "bad_array_new_length was thrown in -fno-exceptions mode");
  __udf(0);
}

__int64 nn_nlibsdk_173a20() { return fw_rtld_RegisterCrtDestructor(); }

#pragma GCC visibility pop
