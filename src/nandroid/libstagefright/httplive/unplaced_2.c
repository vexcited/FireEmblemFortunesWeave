#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_4c3860(__int64, __int64, _QWORD**);
__int64 SdkRoutine_86f350(__int64, __int64);
__int64 nandroid_AMessage_AMessage_plt_86ddc0(__int64, unsigned int, __int64);
__int64 nandroid_AMessage_post_plt(__int64, __int64);
__int64 nandroid_AMessage_setInt32_plt(__int64, const char*, int);
__int64 nandroid_AMessage_setInt64_plt(__int64, const char*, __int64);
__int64 nandroid_AMessage_setString_plt_86de10(__int64, const char*,
                                               const char*, __int64);
__int64 nandroid_AString_AString_plt_86d9f0(__int64);
__int64 nandroid_AString_AString_plt_86da90(__int64, const char*);
__int64 nandroid_AString_Destroy_AString_plt(__int64);
__int64 nandroid_AString_append_plt_86db20(_QWORD, _QWORD);
__int64 nandroid_AString_c_str_plt(__int64);
__int64 nandroid_LiveSession_cancelBandwidthSwitch_plt(__int64, bool);
__int64 nandroid_M3UParser_getTypeURI_plt(__int64, unsigned __int64,
                                          const char*, __int64);
__int64 nandroid_PlaylistFetcher_pauseAsync_plt(long double);
__int64 nandroid_PlaylistFetcher_stopAsync_plt(__int64, bool);
__int64 nandroid_RefBase_decStrong_plt(__int64, __int64);
__int64 nandroid_RefBase_incStrong_plt(__int64, __int64);
__int64 nandroid_VectorImpl_editItemLocation_plt(__int64, unsigned __int64);
__int64 nn_os_GetTlsValue_plt(unsigned int);
__int64 nn_os_LockMutex_plt(__int64);
__int64 nn_os_UnlockMutex_plt(__int64);
extern __int64 SdkData_e88330;
extern void (*SdkData_e88338[493])();
int __cxa_guard_acquire_plt(__int64);
void __cxa_guard_release_plt(__int64);
void nandroid_sp_report_race_plt(__int64);
__int64 nandroid_libstagefright_httplive_524680(void* this_, __int64 a2,
                                                __int64 a3, char a4);

__int64 nandroid_libstagefright_httplive_524680(void* this_, __int64 a2,
                                                __int64 a3, char a4)
{
  __int64 v7;
  __int64 v8;
  __int64 v9;
  char v10;
  int v11;
  unsigned int v12;
  int v13;
  int v14;
  __int64 v15;
  unsigned __int64 v16;
  int v17;
  __int64 v18;
  __int64 v19;
  long double v20;
  int v21;
  __int64 v22;
  int v23;
  char v24;
  __int64 v25;
  __int64 v26;
  unsigned __int8 explicit;
  unsigned int* v28;
  _QWORD** v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  char v34;
  _QWORD* v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  char* v41;
  __int64 v42;
  char* v43;
  char* v44;
  char* v45;
  __int64 v46;
  char* v47;
  char* v48;
  char* v49;
  __int64 v50;
  char* v51;
  char* v52;
  _QWORD** v53;
  void(__attribute__((noreturn)) * v54)();
  struct {
    void* v56;
    __int64 v57;
    __int64 v58;
  } v56_;
  _QWORD v59[3];
  _QWORD v60[3];
  _QWORD v61[3];
  __int64 v62;

  nandroid_LiveSession_cancelBandwidthSwitch_plt((__int64)this_, false);
  *((_BYTE*)this_ + 848) = 1;
  v7 = *((_QWORD*)this_ + 63);
  if (a3 < 0) {
    a3 = *((_QWORD*)this_ + 63);
  }
  else {
    *((_QWORD*)this_ + 63) = a3;
    *((_QWORD*)this_ + 64) = v7;
  }
  v8 = *((_QWORD*)this_ + 59);
  memset(v61, 0, sizeof(v61));
  memset(v60, 0, sizeof(v60));
  memset(v59, 0, sizeof(v59));
  nandroid_AString_AString_plt_86d9f0((__int64)v59);
  nandroid_AString_AString_plt_86d9f0((__int64)v60);
  nandroid_AString_AString_plt_86d9f0((__int64)v61);
  v9 = 32 * a3;
  v10 = nandroid_M3UParser_getTypeURI_plt(
      *((_QWORD*)this_ + 67), *(_QWORD*)(v8 + 32 * a3),
      *((const char**)this_ + 12), (__int64)v59);
  if ((nandroid_M3UParser_getTypeURI_plt(
           *((_QWORD*)this_ + 67), *(_QWORD*)(v8 + v9),
           *((const char**)this_ + 23), (__int64)v60) &
       1) != 0) {
    v11 = 2;
  }
  else {
    v11 = 0;
  }
  v12 = v11 & 0xFFFFFFFE | v10 & 1;
  if ((nandroid_M3UParser_getTypeURI_plt(
           *((_QWORD*)this_ + 67), *(_QWORD*)(v8 + v9),
           *((const char**)this_ + 34), (__int64)v61) &
       1) != 0) {
    v13 = 4;
  }
  else {
    v13 = 0;
  }
  v14 = v13 | v12;
  nn_os_LockMutex_plt((__int64)this_ + 728);
  if (*((_QWORD*)this_ + 76) != 0) {
    v15 = 0;
    v16 = 0;
    v17 = 0;
    while (1) {
      v18 = *((_QWORD*)this_ + 75) + v15;
      if ((*(_BYTE*)(v18 + 40) & 1) != 0) {
        goto LABEL_13;
      }
      v19 = nandroid_VectorImpl_editItemLocation_plt((__int64)this_ + 592, v16);
      if ((v14 & 1) != 0 && (SdkRoutine_86f350(v18, (__int64)v59) & 1) != 0) {
        v17 |= 1u;
        v14 &= ~1u;
        v21 = 0;
        if ((v14 & 2) != 0) {
          goto LABEL_20;
        }
      }
      else {
        v21 = 1;
        if ((v14 & 2) != 0) {
        LABEL_20:
          if ((SdkRoutine_86f350(v18, (__int64)v60) & 1) != 0) {
            v17 |= 2u;
            v14 &= ~2u;
            v21 = 0;
          }
        }
      }
      if ((v14 & 4) != 0 && (SdkRoutine_86f350(v18, (__int64)v61) & 1) != 0) {
        v17 |= 4u;
        v14 &= ~4u;
        *(_QWORD*)&v20 = 0;
      LABEL_41:
        nandroid_PlaylistFetcher_pauseAsync_plt(v20);
        goto LABEL_13;
      }
      v22 = *(_QWORD*)(v19 + 24);
      if (a2 < 0) {
        v23 = v21;
      }
      else {
        v23 = 0;
      }
      if ((a4 & 1) != 0 || v23 == 0) {
        *(_QWORD*)&v20 = 0;
        if (v21 == 0) {
          goto LABEL_41;
        }
      }
      else {
        if ((*(_DWORD*)(v22 + 148) & v14) != 0) {
          v24 = 0;
        }
        else {
          v24 = v21;
        }
        if ((v24 & 1) == 0) {
          *(_QWORD*)&v20 = 0;
          if ((*(_DWORD*)(v22 + 148) & v14) != 0) {
            v25 = *((_QWORD*)this_ + 64);
            if (v25 < 1 || (v26 = *((_QWORD*)this_ + 63)) >= v25 ||
                *((_BYTE*)this_ + 524) == 1 &&
                    (*(float*)& v20 =
                         (float)*(unsigned __int64*)(*((_QWORD*)this_ + 59) +
                                                     32 * v26 + 8) /
                         (float)((float)((float)*(
                                             unsigned __int64*)(*((_QWORD*)
                                                                      this_ +
                                                                  59) +
                                                                32 * v26 + 8) +
                                         (float)*(
                                             unsigned __int64*)(*((_QWORD*)
                                                                      this_ +
                                                                  59) +
                                                                32 * v25 + 8)) +
                                 (float)((float)*((int*)this_ + 130) *
                                         -0x1.0000000000000p-1f)),
                     *(float*)&v20 < 0x0.0p+0f)) {
              {
                __typeof__(v20) z_ = (__typeof__(v20)){0};
                LODWORD(z_) =
                    COERCE_UNSIGNED_INT((float)(-0x1.0000000000000p+0f));
                v20 = z_;
              }
            }
          }
          goto LABEL_41;
        }
      }
      nandroid_PlaylistFetcher_stopAsync_plt(v22, true);
    LABEL_13:
      ++v16;
      v15 += 48;
      if (v16 >= *((_QWORD*)this_ + 76)) {
        goto LABEL_44;
      }
    }
  }
  v17 = 0;
LABEL_44:
  nn_os_UnlockMutex_plt((__int64)this_ + 728);
  v62 = 0;
  explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                  memory_order_acquire);
  if (a2 < 0) {
    if ((explicit & 1) == 0 && __cxa_guard_acquire_plt(SdkData_e88330) != 0) {
      v54 = SdkData_e88338[0];
      *(_DWORD*)SdkData_e88338[0] = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v54) = 1;
      __cxa_guard_release_plt(SdkData_e88330);
    }
    v53 = (_QWORD**)nn_os_GetTlsValue_plt(*(_DWORD*)SdkData_e88338[0]);
    v30 = SdkRoutine_4c3860(16, 1344, v53);
    v56_.v56 = this_;
    nandroid_RefBase_incStrong_plt((__int64)this_, (__int64)&v56_.v56);
    nandroid_AMessage_AMessage_plt_86ddc0(v30, 0x63684333u, (__int64)&v56_.v56);
    v31 = v62;
    v32 = nandroid_RefBase_incStrong_plt(v30, (__int64)&v62);
    if (v31 != 0) {
      goto LABEL_47;
    }
  }
  else {
    v28 = (unsigned int*)SdkData_e88338[0];
    if ((explicit & 1) == 0 && __cxa_guard_acquire_plt(SdkData_e88330) != 0) {
      *v28 = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v28) = 1;
      __cxa_guard_release_plt(SdkData_e88330);
    }
    v29 = (_QWORD**)nn_os_GetTlsValue_plt(*v28);
    v30 = SdkRoutine_4c3860(16, 1344, v29);
    v56_.v56 = this_;
    nandroid_RefBase_incStrong_plt((__int64)this_, (__int64)&v56_.v56);
    nandroid_AMessage_AMessage_plt_86ddc0(v30, 0x63684332u, (__int64)&v56_.v56);
    v31 = v62;
    v32 = nandroid_RefBase_incStrong_plt(v30, (__int64)&v62);
    if (v31 != 0) {
    LABEL_47:
      v32 = nandroid_RefBase_decStrong_plt(v31, (__int64)&v62);
    }
  }
  if (v31 != v62) {
    nandroid_sp_report_race_plt(v32);
  }
  v62 = v30;
  if (v56_.v56 != nullptr) {
    nandroid_RefBase_decStrong_plt((__int64)v56_.v56, (__int64)&v56_.v56);
  }
  nandroid_AMessage_setInt32_plt(v62, "streamMask", v14);
  nandroid_AMessage_setInt32_plt(v62, "resumeMask", v17);
  nandroid_AMessage_setInt32_plt(v62, "pickTrack", a4 & 1);
  v33 = nandroid_AMessage_setInt64_plt(v62, "timeUs", a2);
  v34 = v17 | v14;
  if ((v34 & 1) != 0) {
    v41 = *((const char**)this_ + 12);
    v42 = v62;
    v56_.v57 = 0;
    v56_.v58 = 0;
    v56_.v56 = nullptr;
    nandroid_AString_AString_plt_86da90((__int64)&v56_.v56, v41);
    nandroid_AString_append_plt_86db20(&v56_.v56, "URI");
    v43 = (const char*)nandroid_AString_c_str_plt((__int64)&v56_.v56);
    v44 = (const char*)nandroid_AString_c_str_plt((__int64)v59);
    nandroid_AMessage_setString_plt_86de10(v42, v43, v44, -1);
    v33 = nandroid_AString_Destroy_AString_plt((__int64)&v56_.v56);
    if ((v34 & 2) == 0) {
    LABEL_54:
      if ((v34 & 4) == 0) {
        goto LABEL_55;
      }
      goto LABEL_68;
    }
  }
  else if ((v34 & 2) == 0) {
    goto LABEL_54;
  }
  v45 = *((const char**)this_ + 23);
  v46 = v62;
  v56_.v57 = 0;
  v56_.v58 = 0;
  v56_.v56 = nullptr;
  nandroid_AString_AString_plt_86da90((__int64)&v56_.v56, v45);
  nandroid_AString_append_plt_86db20(&v56_.v56, "URI");
  v47 = (const char*)nandroid_AString_c_str_plt((__int64)&v56_.v56);
  v48 = (const char*)nandroid_AString_c_str_plt((__int64)v60);
  nandroid_AMessage_setString_plt_86de10(v46, v47, v48, -1);
  v33 = nandroid_AString_Destroy_AString_plt((__int64)&v56_.v56);
  if ((v34 & 4) == 0) {
  LABEL_55:
    v35 = (_QWORD*)((char*)this_ + 816);
    *((_QWORD*)this_ + 101) = *((_QWORD*)this_ + 76);
    v36 = *((_QWORD*)this_ + 102);
    v37 = v62;
    if (v62 == 0) {
      goto LABEL_57;
    }
    goto LABEL_56;
  }
LABEL_68:
  v49 = *((const char**)this_ + 34);
  v50 = v62;
  v56_.v57 = 0;
  v56_.v58 = 0;
  v56_.v56 = nullptr;
  nandroid_AString_AString_plt_86da90((__int64)&v56_.v56, v49);
  nandroid_AString_append_plt_86db20(&v56_.v56, "URI");
  v51 = (const char*)nandroid_AString_c_str_plt((__int64)&v56_.v56);
  v52 = (const char*)nandroid_AString_c_str_plt((__int64)v61);
  nandroid_AMessage_setString_plt_86de10(v50, v51, v52, -1);
  v33 = nandroid_AString_Destroy_AString_plt((__int64)&v56_.v56);
  v35 = (_QWORD*)((char*)this_ + 816);
  *((_QWORD*)this_ + 101) = *((_QWORD*)this_ + 76);
  v36 = *((_QWORD*)this_ + 102);
  v37 = v62;
  if (v62 != 0) {
  LABEL_56:
    v33 = nandroid_RefBase_incStrong_plt(v37, (__int64)v35);
  }
LABEL_57:
  if (v36 != 0) {
    v33 = nandroid_RefBase_decStrong_plt(v36, (__int64)v35);
  }
  if (v36 != *v35) {
    nandroid_sp_report_race_plt(v33);
  }
  v38 = *((_QWORD*)this_ + 101);
  v39 = v62;
  *((_QWORD*)this_ + 102) = v37;
  if (v38 == 0) {
    nandroid_AMessage_post_plt(v39, 0);
    v39 = v62;
  }
  if (v39 != 0) {
    nandroid_RefBase_decStrong_plt(v39, (__int64)&v62);
  }
  nandroid_AString_Destroy_AString_plt((__int64)v61);
  nandroid_AString_Destroy_AString_plt((__int64)v60);
  return nandroid_AString_Destroy_AString_plt((__int64)v59);
}

#pragma GCC visibility pop
