#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 memset_plt(void* this_, void*, int);
__int64 nerd_gillette_internal_otete_jaimev2_DecodeFullFrameShapeROK_plt(
    _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nerd_gillette_internal_otete_jaimev2_DecodeHandROK_plt(_QWORD, _QWORD,
                                                               _QWORD, _QWORD,
                                                               _QWORD);
__int64 nerd_gillette_internal_otete_jaimev2_DecodeHasFullFrameShapeROK_plt(
    _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nerd_gillette_internal_otete_jaimev2_DecodeHasNextHandROK_plt(_QWORD,
                                                                      _QWORD,
                                                                      _QWORD,
                                                                      _QWORD);
__int64 nerd_gillette_internal_otete_jaimev2_DecodeHasNextShapeROK_plt(_QWORD,
                                                                       _QWORD,
                                                                       _QWORD,
                                                                       _QWORD);
__int64 nerd_gillette_internal_otete_jaimev2_DecodeIntensityROK_plt(_QWORD,
                                                                    _QWORD,
                                                                    _QWORD,
                                                                    _QWORD);
__int64 nerd_gillette_internal_otete_jaimev2_DecodePacketModeROK_plt(_QWORD,
                                                                     _QWORD,
                                                                     _QWORD,
                                                                     _QWORD);
__int64 nerd_gillette_internal_otete_jaimev2_DecodeShapeAndSilhouetteROK_plt(
    _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_lmem_FreeToExpHeap_plt(_QWORD, _QWORD);
__int64 nn_os_LockMutex_plt(_QWORD);
__int64 nn_os_UnlockMutex_plt(_QWORD);
__int64 nn_sf_hipc_CloseClientSessionHandle_plt(_QWORD);
__int64 nn_sf_hipc_GetMessageBufferOnTls_plt(_QWORD);
__int64 nn_sf_hipc_SendSyncRequest_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_sf_impl_detail_ServiceObjectImplBase2_ReleaseImpl_plt(_QWORD);
extern __int64 (*nn_os_detail_RemoveNativeWaitHolder_ptr[])();
extern void (*SdkData_e89200[20])();
_QWORD* nn_irsensor_73e550(_QWORD* result, _QWORD* a2);
bool nn_irsensor_73e580(__int64 a1, _QWORD* a2);
__int64 nn_irsensor_7424e0(__int64 a1, __int64 a2, __int64* a3, __int64 a4,
                           __int64 a5);
__int64 nn_irsensor_743270(__int64 a1);

_QWORD* nn_irsensor_73e550(_QWORD* result, _QWORD* a2)
{
  __int64 v2;
  __int64 v3;

  *a2 = nn_os_detail_RemoveNativeWaitHolder_ptr;
  v2 = result[1];
  v3 = result[3];
  a2[2] = result[2];
  a2[3] = v3;
  a2[1] = v2;
  return result;
}

bool nn_irsensor_73e580(__int64 a1, _QWORD* a2)
{
  char* v3;
  int v5;
  unsigned int v6;
  int v8;
  __int64 v9;

  v3 = (char*)a2 + 20;
  v9 = 0;
  v8 = 0;
  nerd_gillette_internal_otete_jaimev2_DecodePacketModeROK_plt(
      &v8, (char*)a2 + 20, 300, &v9);
  v5 = **(_DWORD**)(a1 + 24);
  if (v5 < 1) {
    return (signed __int64)*a2 >= (signed __int64)**(_QWORD**)(a1 + 8);
  }
  v6 = 0;
  while (((((unsigned __int8)v3[(unsigned __int64)v6 >> 3] >> (v6 & 7)) ^
           (**(_DWORD**)(a1 + 16) >> v6)) &
          1) == 0) {
    if (v5 == ++v6) {
      return (signed __int64)*a2 >= (signed __int64)**(_QWORD**)(a1 + 8);
    }
  }
  return false;
}

__int64 nn_irsensor_7424e0(__int64 a1, __int64 a2, __int64* a3, __int64 a4,
                           __int64 a5)
{
  __int64 v5;
  unsigned int v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  float v16;
  int v17;
  __int64 v18;
  int v19;
  __int64 v20;
  int v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  _DWORD* v25;
  _DWORD* v26;
  __int64 v27;
  __int64 v28;
  _DWORD* v29;
  int v30;
  int v31;
  int v32;
  __int64 v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  __int64 v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  char v46;
  int v47;
  int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  int v53;
  bool v54;
  int v55;
  int v56;
  float v57;
  int v58;
  int v59;
  float v60;
  float v61;
  int v63;
  _DWORD* v64;
  int v65;
  int v66;
  __int64 v67;
  __int64 v69;
  int v70;
  int v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  _BYTE* v75;
  int v76;
  __int64 v77;
  int v78;
  __int64 v79;
  __int64 v80;
  char v81;
  int v82;
  int v83;
  __int64 v84;
  _QWORD* v85;
  int v86;
  int v87;
  int v88;
  int v89;
  int v90;
  __int64 v91;
  struct {
    _BYTE v92[12];
    int v93;
  } v92_;
  __int64 v94;
  struct {
    __int64 v95;
    int v96;
  } v95_;
  _BYTE v97[12];
  __int64 v98;

  v5 = *a3;
  v98 = 0;
  v10 = 564429;
  *(_QWORD*)a1 = v5;
  *(_DWORD*)(a1 + 8) = *((_DWORD*)a3 + 4);
  if ((nerd_gillette_internal_otete_jaimev2_DecodePacketModeROK_plt(
           (char*)&v98 + 4, a5, 300, a4) &
       1) != 0 &&
      (nerd_gillette_internal_otete_jaimev2_DecodeIntensityROK_plt(&v98, a5,
                                                                   300, a4) &
       1) != 0) {
    if (HIDWORD(v98) != 1) {
      return 563917;
    }
    v91 = a2;
    *(_DWORD*)(a1 + 4432) = 0;
    v92_.v92[0] = 0;
    if ((nerd_gillette_internal_otete_jaimev2_DecodeHasNextHandROK_plt(
             v92_.v92, a5, 300, a4) &
         1) != 0) {
      v11 = 4444;
      v12 = a1 + 12;
      v13 = 0;
      v14 = a1 + 4436;
      v15 = a1 + 4444;
      do {
        if (v92_.v92[0] != 1) {
          *(_DWORD*)(a1 + 4108) = 0;
          LOBYTE(v94) = 0;
          if ((nerd_gillette_internal_otete_jaimev2_DecodeHasNextShapeROK_plt(
                   &v94, a5, 300, a4) &
               1) == 0) {
            return v10;
          }
          v63 = 0;
          v64 = (_DWORD*)(a1 + 4128);
          while ((unsigned __int8)v94 == 1) {
            memset(v92_.v92, 0, sizeof(v92_.v92));
            v95_.v95 = 0;
            if ((nerd_gillette_internal_otete_jaimev2_DecodeShapeAndSilhouetteROK_plt(
                     v92_.v92, v12 + 8LL * v63, &v95_.v95, 512 - v63, a5, 300,
                     a4, &v98) &
                 1) != 0) {
              v65 = *(_DWORD*)&v92_.v92[8];
              v66 = v95_.v95;
              v67 = *(_QWORD*)v92_.v92;
              LOBYTE(v94) = 0;
              *(v64 - 4) = v63;
              *(v64 - 3) = v66;
              *((_QWORD*)v64 - 1) = v67;
              v63 += v66;
              *v64 = v65;
              v64 += 5;
              ++*(_DWORD*)(a1 + 4108);
              if ((nerd_gillette_internal_otete_jaimev2_DecodeHasNextShapeROK_plt(
                       &v94, a5, 300, a4) &
                   1) != 0) {
                continue;
              }
            }
            return v10;
          }
          v97[0] = 0;
          if ((nerd_gillette_internal_otete_jaimev2_DecodeHasFullFrameShapeROK_plt(
                   v97, a5, 300, a4) &
               1) == 0) {
            return v10;
          }
          if (v97[0] == 1) {
            v95_.v96 = 0;
            v94 = 0;
            v95_.v95 = 0;
            memset_plt((void*)v92_.v92, nullptr, 528);
            if ((nerd_gillette_internal_otete_jaimev2_DecodeFullFrameShapeROK_plt(
                     &v95_.v95, v12 + 8LL * v63, &v94, 512 - v63, v92_.v92, a5,
                     300, a4, &v98) &
                 1) != 0) {
              v69 = v95_.v95;
              v70 = v94;
              v71 = v95_.v96;
              v72 = v14;
              *(_DWORD*)(a1 + 4112) = v63;
              v63 += v70;
              *(_QWORD*)(a1 + 4120) = v69;
              LODWORD(v69) = *(_DWORD*)(a1 + 4108);
              *(_DWORD*)(a1 + 4116) = v70;
              *(_DWORD*)(a1 + 4128) = v71;
              *(_DWORD*)(a1 + 4108) = v69 + 1;
              if (v91 != 0) {
                *(_BYTE*)v91 = 1;
                v73 = 80;
                *(_DWORD*)(v91 + 4) = 100 * *(_DWORD*)v92_.v92;
                *(_QWORD*)(v91 + 8) = *(_QWORD*)&v92_.v92[4];
                *(_DWORD*)(v91 + 16) = v92_.v93;
                v74 = v91 + 40;
                do {
                  v75 = &v92_.v92[v73];
                  v73 += 64;
                  v76 = *((_DWORD*)v75 - 14);
                  *(_QWORD*)(v74 - 20) = *((_QWORD*)v75 - 8);
                  v77 = *(_QWORD*)(v75 - 52);
                  *(_DWORD*)(v74 - 12) = v76;
                  v78 = *((_DWORD*)v75 - 11);
                  *(_QWORD*)(v74 - 8) = v77;
                  *(_DWORD*)v74 = v78;
                  v79 = *((_QWORD*)v75 - 4);
                  *(_QWORD*)(v74 + 4) = *((_QWORD*)v75 - 5);
                  *(_QWORD*)(v74 + 12) = v79;
                  LODWORD(v79) = *((_DWORD*)v75 - 5);
                  *(_DWORD*)(v74 + 20) = *((_DWORD*)v75 - 6);
                  *(_DWORD*)(v74 + 24) = v79;
                  LODWORD(v79) = *((_DWORD*)v75 - 3);
                  *(_DWORD*)(v74 + 28) = *((_DWORD*)v75 - 4);
                  *(_DWORD*)(v74 + 32) = v79;
                  LODWORD(v77) = *((_DWORD*)v75 - 2);
                  LODWORD(v75) = *((_DWORD*)v75 - 1);
                  *(_DWORD*)(v74 + 36) = v77;
                  *(_DWORD*)(v74 + 40) = (_DWORD)v75;
                  v74 += 64;
                } while (v73 != 592);
              }
              goto LABEL_57;
            }
            return v10;
          }
          v72 = v14;
          if (v91 != 0) {
            *(_BYTE*)v91 = 0;
            memset_plt((void*)(v91 + 4), nullptr, 528);
          }
        LABEL_57:
          if (*(int*)(a1 + 4432) < 1) {
            return 0;
          }
          v80 = 0;
          v81 = 0;
          while (2) {
            v83 = *(_DWORD*)(a1 + 4108);
            if ((signed __int32)*(_DWORD*)v72 > v83) {
              if ((v81 & 1) != 0) {
                goto LABEL_66;
              }
              if (v83 > 15) {
                v81 = 0;
              }
              else {
                v84 = 20LL * v83;
                v85 = (_QWORD*)(a1 + 4116 + v84);
                *v85 = 0;
                v85[1] = 0;
                *(_DWORD*)(a1 + 4112 + v84) = v63;
                v83 = *(_DWORD*)(a1 + 4108);
              LABEL_66:
                v81 = 1;
                if (v83 < 16) {
                LABEL_70:
                  *(_DWORD*)v72 = v83;
                  goto LABEL_71;
                }
              }
              --v83;
              goto LABEL_70;
            }
          LABEL_71:
            if (*(_BYTE*)(v72 + 76) == 1) {
              v86 = *(_DWORD*)(v72 + 4);
              if ((signed __int32)*(_DWORD*)(v72 + 100) >= v86) {
                if (v86 > 7 || (*(_QWORD*)(v72 + 8LL * v86 + 8) = 0, v81 = 1,
                                (v86 = *(_DWORD*)(v72 + 4)) >= 8)) {
                  --v86;
                }
                *(_DWORD*)(v72 + 100) = v86;
              }
            }
            if (*(_BYTE*)(v72 + 104) == 1) {
              v87 = *(_DWORD*)(v72 + 4);
              if ((signed __int32)*(_DWORD*)(v72 + 128) >= v87) {
                if (v87 > 7 || (*(_QWORD*)(v72 + 8LL * v87 + 8) = 0, v81 = 1,
                                (v87 = *(_DWORD*)(v72 + 4)) >= 8)) {
                  --v87;
                }
                *(_DWORD*)(v72 + 128) = v87;
              }
            }
            if (*(_BYTE*)(v72 + 132) == 1) {
              v88 = *(_DWORD*)(v72 + 4);
              if ((signed __int32)*(_DWORD*)(v72 + 156) >= v88) {
                if (v88 > 7 || (*(_QWORD*)(v72 + 8LL * v88 + 8) = 0, v81 = 1,
                                (v88 = *(_DWORD*)(v72 + 4)) >= 8)) {
                  --v88;
                }
                *(_DWORD*)(v72 + 156) = v88;
              }
            }
            if (*(_BYTE*)(v72 + 160) == 1) {
              v89 = *(_DWORD*)(v72 + 4);
              if ((signed __int32)*(_DWORD*)(v72 + 184) >= v89) {
                if (v89 > 7 || (*(_QWORD*)(v72 + 8LL * v89 + 8) = 0, v81 = 1,
                                (v89 = *(_DWORD*)(v72 + 4)) >= 8)) {
                  --v89;
                }
                *(_DWORD*)(v72 + 184) = v89;
              }
            }
            if (*(_BYTE*)(v72 + 188) == 1) {
              v90 = *(_DWORD*)(v72 + 4);
              if ((signed __int32)*(_DWORD*)(v72 + 212) >= v90) {
                if (v90 > 7 || (*(_QWORD*)(v72 + 8LL * v90 + 8) = 0, v81 = 1,
                                (v90 = *(_DWORD*)(v72 + 4)) >= 8)) {
                  --v90;
                }
                *(_DWORD*)(v72 + 212) = v90;
              }
            }
            if (*(_BYTE*)(v72 + 236) == 1) {
              v82 = *(_DWORD*)(v72 + 4);
              if ((signed __int32)*(_DWORD*)(v72 + 256) >= v82) {
                if (v82 > 7 || (*(_QWORD*)(v72 + 8LL * v82 + 8) = 0, v81 = 1,
                                (v82 = *(_DWORD*)(v72 + 4)) >= 8)) {
                  --v82;
                }
                *(_DWORD*)(v72 + 256) = v82;
              }
            }
            ++v80;
            v72 += 260;
            if (v80 >= *(int*)(a1 + 4432)) {
              return 0;
            }
            continue;
          }
        }
        if ((nerd_gillette_internal_otete_jaimev2_DecodeHandROK_plt(
                 a1 + 12, a5, 300, a4, &v98) &
             1) == 0 ||
            v13 > 1) {
          return v10;
        }
        v18 = v14;
        v19 = *(_DWORD*)(a1 + 12);
        ++*(_DWORD*)(a1 + 4432);
        v20 = v14 + 260 * v13;
        if (*(_BYTE*)(a1 + 16) != 0) {
          v21 = 2;
        }
        else {
          v21 = 1;
        }
        *(_DWORD*)(v20 + 72) = v21;
        v22 = *(unsigned int*)(a1 + 36);
        *(_DWORD*)v20 = v19;
        *(_DWORD*)(v20 + 4) = v22;
        if ((int)v22 >= 1) {
          if ((unsigned int)v22 >= 8) {
            v24 = 0;
            v23 = 0;
            do {
              v25 = (_DWORD*)(a1 + v24);
              v26 = (_DWORD*)(v15 + v24);
              v23 += 8;
              v24 += 64;
              *v26 = v25[10];
              v26[1] = v25[11];
              v26[2] = v25[12];
              v26[3] = v25[13];
              v26[4] = v25[14];
              v26[5] = v25[15];
              v26[6] = v25[16];
              v26[7] = v25[17];
              v26[8] = v25[18];
              v26[9] = v25[19];
              v26[10] = v25[20];
              v26[11] = v25[21];
              v26[12] = v25[22];
              v26[13] = v25[23];
              v26[14] = v25[24];
              v26[15] = v25[25];
            } while (((8 * v22) & 0x3FFFFFFC0LL) != v24);
          }
          else {
            v23 = 0;
          }
          v27 = v22 & 7;
          if (v27 != 0) {
            v28 = a1 + 8 * v23;
            do {
              v29 = (_DWORD*)(v28 + v11);
              --v27;
              *v29 = *(_DWORD*)(v28 + 40);
              v30 = *(_DWORD*)(v28 + 44);
              v28 += 8;
              v29[1] = v30;
            } while (v27 != 0);
          }
        }
        v31 = *(_DWORD*)(a1 + 108);
        v32 = *(_DWORD*)(a1 + 112);
        v33 = *(_QWORD*)(a1 + 100);
        v34 = *(unsigned __int8*)(a1 + 152);
        v35 = *(_DWORD*)(a1 + 172);
        v36 = *(unsigned __int8*)(a1 + 180);
        v37 = *(unsigned __int8*)(a1 + 208);
        v38 = *(_DWORD*)(a1 + 228);
        *(_BYTE*)(v20 + 76) = *(_BYTE*)(a1 + 96);
        v39 = *(_DWORD*)(a1 + 116);
        *(_QWORD*)(v20 + 80) = v33;
        v40 = *(_QWORD*)(a1 + 184);
        *(_BYTE*)(v20 + 132) = v34;
        *(_DWORD*)(v20 + 156) = v35;
        *(_BYTE*)(v20 + 160) = v36;
        *(_BYTE*)(v20 + 188) = v37;
        *(_DWORD*)(v20 + 212) = v38;
        *(_DWORD*)(v20 + 92) = v31;
        *(_DWORD*)(v20 + 96) = v32;
        v41 = *(_DWORD*)(a1 + 120);
        *(_DWORD*)(v20 + 100) = v39;
        LOBYTE(v39) = *(_BYTE*)(a1 + 124);
        *(_QWORD*)(v20 + 164) = v40;
        v42 = *(_DWORD*)(a1 + 200);
        *(_DWORD*)(v20 + 88) = v41;
        v43 = *(_DWORD*)(a1 + 128);
        v44 = *(_DWORD*)(a1 + 132);
        *(_BYTE*)(v20 + 104) = v39;
        v45 = *(_DWORD*)(a1 + 144);
        *(_DWORD*)(v20 + 184) = v42;
        v46 = *(_BYTE*)(v20 + 104);
        *(_DWORD*)(v20 + 108) = v43;
        *(_DWORD*)(v20 + 112) = v44;
        v47 = *(_DWORD*)(a1 + 136);
        v48 = *(_DWORD*)(a1 + 140);
        *(_DWORD*)(v20 + 128) = v45;
        *(_DWORD*)(v20 + 120) = v47;
        *(_DWORD*)(v20 + 124) = v48;
        *(_DWORD*)(v20 + 116) = *(_DWORD*)(a1 + 148);
        v49 = *(_DWORD*)(a1 + 160);
        *(_DWORD*)(v20 + 136) = *(_DWORD*)(a1 + 156);
        *(_DWORD*)(v20 + 140) = v49;
        v50 = *(_DWORD*)(a1 + 168);
        *(_DWORD*)(v20 + 148) = *(_DWORD*)(a1 + 164);
        *(_DWORD*)(v20 + 152) = v50;
        *(_DWORD*)(v20 + 144) = *(_DWORD*)(a1 + 176);
        v51 = *(_DWORD*)(a1 + 196);
        *(_DWORD*)(v20 + 176) = *(_DWORD*)(a1 + 192);
        *(_DWORD*)(v20 + 180) = v51;
        *(_DWORD*)(v20 + 172) = *(_DWORD*)(a1 + 204);
        v52 = *(_DWORD*)(a1 + 216);
        *(_DWORD*)(v20 + 192) = *(_DWORD*)(a1 + 212);
        *(_DWORD*)(v20 + 196) = v52;
        v53 = *(_DWORD*)(a1 + 224);
        *(_DWORD*)(v20 + 204) = *(_DWORD*)(a1 + 220);
        *(_DWORD*)(v20 + 208) = v53;
        *(_DWORD*)(v20 + 200) = *(_DWORD*)(a1 + 232);
        if ((v46 & 1) != 0) {
          if ((v34 & 1) == 0) {
            *(_BYTE*)(v20 + 216) = 0;
          LABEL_30:
            *(_BYTE*)(v20 + 217) = 0;
            if ((v36 & v37) != 0) {
              goto LABEL_31;
            }
            goto LABEL_28;
          }
          *(_BYTE*)(v20 + 216) = v45 == v35;
        }
        else {
          *(_BYTE*)(v20 + 216) = 0;
          if (v34 == 0) {
            goto LABEL_30;
          }
        }
        if ((v36 & 1) == 0) {
          v54 = false;
          *(_BYTE*)(v20 + 217) = 0;
          goto LABEL_33;
        }
        *(_BYTE*)(v20 + 217) = v35 == v42;
        if ((v37 & 1) != 0) {
        LABEL_31:
          v54 = v42 == v38;
          goto LABEL_33;
        }
      LABEL_28:
        v54 = false;
      LABEL_33:
        v55 = *(_DWORD*)(a1 + 20);
        v56 = *(_DWORD*)(a1 + 24);
        *(_BYTE*)(v20 + 218) = v54;
        *(_DWORD*)(v20 + 220) = v55;
        *(_DWORD*)(v20 + 224) = v56;
        v57 = sqrtf(*(float*)(a1 + 28));
        v58 = *(_DWORD*)(a1 + 32);
        *(_BYTE*)(v20 + 236) = *(_BYTE*)(a1 + 236);
        *(float*)(v20 + 228) = v57 * 0x1.921cac0000000p+1f;
        *(_DWORD*)(v20 + 232) = v58;
        v59 = *(_DWORD*)(a1 + 244);
        *(_DWORD*)(v20 + 240) = *(_DWORD*)(a1 + 240);
        *(_DWORD*)(v20 + 244) = v59;
        v60 = *(float*)(a1 + 248);
        v61 = fabsf(v60);
        if (v60 >= 0x0.0p+0f) {
          v16 = 0x1.0000000000000p+0f;
        }
        else {
          v16 = -0x1.0000000000000p+0f;
        }
        if (v61 < 0x1.0000000000000p-2f) {
          v16 = v60 * 0x1.0000000000000p+2f;
          *(_DWORD*)(v20 + 248) = 1065353216;
        }
        else if (v61 >= 0x1.8000000000000p-1f) {
          *(_DWORD*)(v20 + 248) = -1082130432;
          v16 = (float)(v16 - v60) * 0x1.0000000000000p+2f;
        }
        else {
          *(float*)(v20 + 248) =
              (float)(v61 * -0x1.0000000000000p+2f) + 0x1.0000000000000p+1f;
        }
        v17 = *(_DWORD*)(a1 + 252);
        *(float*)(v20 + 252) = v16;
        ++v13;
        v92_.v92[0] = 0;
        *(_DWORD*)(v20 + 256) = v17;
        v15 += 260;
        v11 += 260;
        v14 = v18;
      } while ((nerd_gillette_internal_otete_jaimev2_DecodeHasNextHandROK_plt(
                    v92_.v92, a5, 300, a4) &
                1) != 0);
    }
  }
  return v10;
}

__int64 nn_irsensor_743270(__int64 a1)
{
  __int64 result;
  __int64 v3;
  _QWORD* v4;
  void(__attribute__((noreturn)) * v5)();

  result = nn_sf_impl_detail_ServiceObjectImplBase2_ReleaseImpl_plt(a1 + 24);
  if ((result & 1) != 0) {
    if (*(_BYTE*)(a1 + 8) == 1) {
      v3 = *(unsigned int*)(a1 + 12);
      v4 = (_QWORD*)nn_sf_hipc_GetMessageBufferOnTls_plt(result);
      *v4 = 2;
      nn_sf_hipc_SendSyncRequest_plt(v3, v4, 256);
      nn_sf_hipc_CloseClientSessionHandle_plt(v3);
    }
    v5 = SdkData_e89200[0];
    nn_os_LockMutex_plt((char*)SdkData_e89200[0] + 8);
    nn_lmem_FreeToExpHeap_plt(*(_QWORD*)v5, a1);
    return nn_os_UnlockMutex_plt((char*)v5 + 8);
  }
  return result;
}

#pragma GCC visibility pop
