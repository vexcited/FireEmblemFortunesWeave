#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64* GameHr_131ec0(__int64* result, unsigned __int64);
__int64* snd_130f60(__int64* result, unsigned __int64);
__int64 Actor_101c40(__int64 result, float);
__int64 Crc32List_11b1e0(__int64, __int64, __int64, __int64, __int64, __int64,
                         __int64, __int64, __int64);
__int64 Crc32List_11b2e0(__int64, __int64, __int64, __int64, __int64, __int64,
                         __int64, __int64, __int64);
__int64 Crc32List_11b3e0(__int64, __int64, __int64, __int64, __int64, __int64,
                         __int64, __int64, __int64, __int64);
__int64 Crc32List_11b4e0(__int64, __int64, __int64, __int64, __int64, __int64,
                         __int64, __int64, __int64, __int64);
__int64 Crc32List_11b5e0(__int64, __int64, __int64, __int64, __int64, __int64,
                         __int64, __int64, __int64);
__int64 Crc32List_11ed40(__int64, int*);
__int64 Data_f6c20(int*, _QWORD*);
__int64 Data_f6cc0(int*);
__int64 GameHr_11d450(__int64, __int64, __int64, __int64, __int64, __int64,
                      __int64, float, float, float);
__int64 GameHr_11d560(__int64, __int64, __int64, __int64, __int64, __int64,
                      __int64, float, float, float);
__int64 GameHr_11d670(__int64, __int64, __int64, __int64, __int64, float, float,
                      float, __int64, __int64, __int64);
__int64 GameHr_11d790(__int64, __int64, __int64, __int64, __int64, __int64,
                      __int64, __int64, float, float, float);
__int64 GameHr_1279a0(__int64*, int);
__int64 GameHr_127be0(__int64 result);
__int64 GameRoutine_107dc0(__int64 result, __int64*, __int64, __int64, char);
__int64 GameRoutine_112180(__int64, __int64);
__int64 GameRoutine_13ed60(__int64, _DWORD*);
__int64 GameRoutine_190240(__int64);
__int64 GameRoutine_6511d0(__int64);
__int64 GameRoutine_f0a40(__int64 result, __int64);
__int64 GameRoutine_f57c0(int*);
__int64 GameRoutine_f5850(int, _QWORD*, char);
__int64 GameRoutine_f63e0(int*);
__int64 SeqVoice_127a80(_QWORD*);
__int64 nn_os_LockMutex(__int64);
__int64 nn_os_UnlockMutex(__int64);
__int64 snd_FadeRandom_start(__int64 result, float, float, float, float);
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__int64 snd_Fade_Fade_10cd70(__int64, __int64);
__int64 snd_fnd_WeakHandle_get(__int64);
__int64 snd_fnd_WeakHandle_isValid(__int64*);
__int64 snd_fnd_WeakHandle_reset(__int64);
__int64 snd_fnd_WeakHandle_set(__int64, __int64);
bool snd_Voice_hasFeature22(__int64);
bool snd_Voice_hasFeature6(__int64);
const char* snd_fnd_calcCrc32Reverse(const char* result, int);
double Voice_1446e0(__int64);
extern __int16 GameData_2198f28;
extern __int64* GameData_21344d8[3];
extern __int64* GameData_21344e0[2];
extern __int64* snd_g_memory_ptr[2];
extern __int64 snd_g_frameCount_ptr;
extern __int64 snd_g_proxy_ptr[2];
unsigned __int8* snd_fnd_calcCrc32(unsigned __int8* result, int);
void snd_Fade_Fade_10c830(__int64, float);
__int64 snd_106cc0(__int64 a1, int* a2, int a3);
__attribute__((swiftcall)) void snd_119bb0(PSEUDO_X8 x8_, __int64 result,
                                           __int64 a2, __int64 a3, int* a4,
                                           __int64 a5, __int64 a6, __int64 a7,
                                           __int64 a8);
__attribute__((swiftcall)) void snd_11cdf0(PSEUDO_X8 x8_, __int64 result,
                                           __int64 a2, __int64 a3, int* a4,
                                           __int64 a5, __int64 a6, float a8,
                                           float a9, float a10);
__int64 snd_126f60(_QWORD* a1, __int64 a2);

__int64 snd_106cc0(__int64 a1, int* a2, int a3)
{
  __int64 v3;
  int* v4;
  __int64 v5;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  _QWORD* v10;
  __int64* v11;
  __int64 v12;
  __int64** v13;
  __int64 v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned int v20;
  int v21;
  int v22;
  int* v23;
  __int64 v24;
  __int64 v25;
  char v27;

  v3 = 0;
  if (a2 != nullptr && a3 != 0) {
    v4 = a2 + 1;
    v5 = 8;
    v7 = 0;
    v8 = 0;
    while (*(v4 - 1) != 0 || *v4 != 0) {
      v5 += 40;
      v4 += 3;
      --v8;
      v7 += 8;
    }
    v3 = (*(__int64 (**)(_QWORD, __int64, __int64))(
        **(_QWORD**)snd_g_memory_ptr[0] + 16LL))(*snd_g_memory_ptr[0], 32, 32);
    v9 = GameData_21344d8[0];
    *(_QWORD*)(v3 + 16) = 0;
    *(_QWORD*)v3 = v9 + 2;
    *(_QWORD*)(v3 + 8) = 0;
    *(_DWORD*)(v3 + 24) = -(int)v8;
    if ((_DWORD)v8 != 0) {
      v10 = (_QWORD*)GameRoutine_6511d0(v5);
      *v10 = -v8;
      v11 = GameData_21344e0[0];
      v12 = ((unsigned __int64)(v5 - 48) *
             (unsigned __int128)0xCCCCCCCCCCCCCCCDLL) >>
            64;
      v13 = (__int64**)(v10 + 1);
      if ((~((unsigned int)v12 >> 5) & 7LL) != 0) {
        v14 = ((unsigned __int8)((unsigned int)v12 >> 5) + 1) & 7;
        v13 = (__int64**)(v10 + 1);
        do {
          *v13 = v11 + 2;
          v13 += 5;
          --v14;
        } while (v14 != 0);
      }
      if ((unsigned __int64)(v5 - 48) >= 0x118) {
        v15 = v11 + 2;
        do {
          *v13 = v15;
          v13[5] = v15;
          v13[10] = v15;
          v13[15] = v15;
          v13[20] = v15;
          v13[25] = v15;
          v13[30] = v15;
          v13[35] = v15;
          v13 += 40;
        } while (&v10[(unsigned __int64)v5 / 8] != v13);
      }
      *(_QWORD*)(v3 + 8) = v10 + 1;
      v16 = GameRoutine_6511d0(v7);
      v17 = 0;
      v18 = 0;
      *(_QWORD*)(v3 + 16) = v16;
      do {
        v19 = *(_QWORD*)(v3 + 8) + v17;
        v17 += 40;
        *(_DWORD*)(v19 + 8) = 0;
        *(_QWORD*)(v19 + 16) = 0;
        *(_QWORD*)(v19 + 24) = 0;
        *(_QWORD*)(v19 + 32) = 0;
        *(_QWORD*)(*(_QWORD*)(v3 + 16) + 8 * v18++) = 0;
      } while (v18 < *(int*)(v3 + 24));
    }
    *(_DWORD*)(v3 + 28) = 0;
    v20 = 0;
    v21 = *a2;
    v22 = a2[1];
    if (*(_QWORD*)a2 != 0) {
      v23 = a2 + 2;
      v20 = 0;
      do {
        v24 = *(_QWORD*)(v3 + 8) + 40LL * (int)v20;
        *(_DWORD*)(v24 + 8) = v21;
        *(_DWORD*)(v24 + 12) = v22;
        *(_QWORD*)(v24 + 16) = v23;
        *(_QWORD*)(v24 + 24) = 0;
        *(_QWORD*)(v24 + 32) = 0;
        *(_QWORD*)(*(_QWORD*)(v3 + 16) + 8LL * *(int*)(v3 + 28)) =
            *(_QWORD*)(v3 + 8) + 40LL * *(int*)(v3 + 28);
        v20 = *(_DWORD*)(v3 + 28) + 1;
        *(_DWORD*)(v3 + 28) = v20;
        v21 = v23[1];
        v22 = v23[2];
        v23 += 3;
      } while ((v21 | v22) != 0);
    }
    v25 = *(_QWORD*)(v3 + 16);
    if (v25 != 0 && v20 != 0) {
      GameRoutine_107dc0(v25, (__int64*)(v25 + 8LL * v20), (__int64)&v27,
                         (2 * __clz((unsigned long long)(v20))) ^ 0x7E, 1);
    }
  }
  return v3;
}

__attribute__((swiftcall)) void snd_119bb0(PSEUDO_X8 x8_, __int64 result,
                                           __int64 a2, __int64 a3, int* a4,
                                           __int64 a5, __int64 a6, __int64 a7,
                                           __int64 a8)
{
  __int64 a9 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v17;
  int v18;
  int v19;
  int v20;
  __int64 v21;
  __int64 v22;
  int v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  unsigned int* v31;
  __int64 v32;
  __int64 v33;
  int v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  int v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  int v52;
  __int64 v53;
  __int64 v54;
  int v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  _DWORD* v63;
  unsigned int v64;
  __int64 v65;
  __int64 v66;
  int v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  int v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  int v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  unsigned __int8* v94;
  struct {
    _BYTE v95[200];
    __int64 v96;
    __int64 v97;
    __int64 v98;
    __int64 v99;
    __int64 v100;
  } v95_;
  _DWORD v101[2];
  struct {
    _BYTE v102[200];
    __int64 v103;
    __int64 v104;
    __int64 v105;
    __int64 v106;
    __int64 v107;
  } v102_;
  _DWORD v108[2];
  _QWORD v109[30];
  _DWORD v110[2];
  struct {
    unsigned int v111;
    unsigned int v112;
    char gap784_[192];
    __int64 v113;
    __int64 v114;
    __int64 v115;
    __int64 v116;
    __int64 v117;
  } v111_;
  struct {
    _BYTE v118[200];
    __int64 v119;
    __int64 v120;
    __int64 v121;
    __int64 v122;
    __int64 v123;
  } v118_;
  _DWORD v124[2];
  __int64 v125;
  __int64 v126;
  struct {
    _BYTE v127[200];
    __int64 v128;
    __int64 v129;
    __int64 v130;
    __int64 v131;
    __int64 v132;
  } v127_;
  _DWORD v133[2];
  struct {
    _BYTE v134[200];
    __int64 v135;
    __int64 v136;
    __int64 v137;
    __int64 v138;
    __int64 v139;
  } v134_;
  _DWORD v140[2];
  struct {
    _BYTE v141[200];
    __int64 v142;
    __int64 v143;
    __int64 v144;
    __int64 v145;
    __int64 v146;
  } v141_;
  _DWORD v147[4];

  if (*(_BYTE*)(result + 8) == 1) {
    *(_QWORD*)a9 = 0;
    *(_DWORD*)(a9 + 8) = 0x2000;
    {
      result;
      return;
    }
  }
  v17 = result;
  v18 = GameRoutine_f63e0(a4);
  if (v18 == -1) {
    v20 = GameRoutine_f57c0(a4);
    if (v20 == -1) {
      v52 = GameRoutine_13ed60(*(_QWORD*)(v17 + 2184), a4);
      if (v52 == -1) {
        v52 = Data_f6cc0(a4);
      }
      v19 = v52 | 0x8000000;
      if (v19 == -1) {
        goto LABEL_41;
      }
    }
    else {
      v19 = v20 | 0x1000000;
      if (v19 == -1) {
      LABEL_41:
        v53 = snd_fnd_WeakHandle_get(a2);
        if (v53 != 0) {
          v54 = v53 - 5592;
        }
        else {
          v54 = 0;
        }
        v55 = a4[1];
        v147[0] = *a4;
        v147[1] = v55;
        v56 = snd_fnd_WeakHandle_get(a6);
        if (v56 != 0) {
          v57 = v56 - 5592;
        }
        else {
          v57 = 0;
        }
        snd_Fade_Fade_10cd70((__int64)v141_.v141, a7);
        v58 = *(_QWORD*)(a7 + 224);
        v141_.v144 = *(_QWORD*)(a7 + 216);
        v141_.v145 = v58;
        v141_.v146 = *(_QWORD*)(a7 + 232);
        v59 = *(_QWORD*)(a7 + 208);
        v141_.v142 = *(_QWORD*)(a7 + 200);
        v141_.v143 = v59;
        v60 = snd_fnd_WeakHandle_get(a8);
        v61 = v60 - 5592;
        if (v60 == 0) {
          v61 = 0;
        }
        v30 = Crc32List_11b1e0(v17 + 2440, v17, v54, a3, (__int64)v147, a5, v57,
                               (__int64)v141_.v141, v61);
        v31 = (unsigned int*)v141_.v141;
        goto LABEL_50;
      }
    }
  }
  else {
    v19 = v18 | 0x2000000;
    if (v19 == -1) {
      goto LABEL_41;
    }
  }
  if ((v19 & 0x2000000) != 0) {
    v32 = snd_fnd_WeakHandle_get(a2);
    if (v32 != 0) {
      v33 = v32 - 5592;
    }
    else {
      v33 = 0;
    }
    v34 = a4[1];
    v140[0] = *a4;
    v140[1] = v34;
    v35 = snd_fnd_WeakHandle_get(a6);
    if (v35 != 0) {
      v36 = v35 - 5592;
    }
    else {
      v36 = 0;
    }
    snd_Fade_Fade_10cd70((__int64)v134_.v134, a7);
    v37 = *(_QWORD*)(a7 + 224);
    v134_.v137 = *(_QWORD*)(a7 + 216);
    v38 = *(_QWORD*)(a7 + 232);
    v134_.v138 = v37;
    v134_.v139 = v38;
    v39 = *(_QWORD*)(a7 + 200);
    v134_.v136 = *(_QWORD*)(a7 + 208);
    v134_.v135 = v39;
    v40 = snd_fnd_WeakHandle_get(a8);
    v41 = v40 - 5592;
    if (v40 == 0) {
      v41 = 0;
    }
    v30 = Crc32List_11b2e0(v17 + 2520, v17, v33, a3, (__int64)v140, a5, v36,
                           (__int64)v134_.v134, v41);
    v31 = (unsigned int*)v134_.v134;
  }
  else if ((v19 & 0x8000000) != 0) {
    v42 = snd_fnd_WeakHandle_get(a2);
    if (v42 != 0) {
      v43 = v42 - 5592;
    }
    else {
      v43 = 0;
    }
    v44 = a4[1];
    v133[0] = *a4;
    v133[1] = v44;
    v45 = snd_fnd_WeakHandle_get(a6);
    if (v45 != 0) {
      v46 = v45 - 5592;
    }
    else {
      v46 = 0;
    }
    snd_Fade_Fade_10cd70((__int64)v127_.v127, a7);
    v47 = *(_QWORD*)(a7 + 224);
    v127_.v130 = *(_QWORD*)(a7 + 216);
    v48 = *(_QWORD*)(a7 + 232);
    v127_.v131 = v47;
    v127_.v132 = v48;
    v49 = *(_QWORD*)(a7 + 200);
    v127_.v129 = *(_QWORD*)(a7 + 208);
    v127_.v128 = v49;
    v50 = snd_fnd_WeakHandle_get(a8);
    v51 = v50 - 5592;
    if (v50 == 0) {
      v51 = 0;
    }
    v30 = Crc32List_11b3e0(v17 + 2760, v17, v43, a3, (__int64)v133, 0, a5, v46,
                           (__int64)v127_.v127, v51);
    v31 = (unsigned int*)v127_.v127;
  }
  else if ((v19 & 0x1000000) != 0) {
    v62 = GameRoutine_f5850(v19, &v126, 0);
    v63 = (_DWORD*)v62;
    if (*(_DWORD*)(v62 + 132) != 0) {
      GameRoutine_f0a40(a5, v62);
      v64 = v63[9];
      v111_.v111 = v63[8];
      v111_.v112 = v64;
      {
        X8CALL_X0(__int64, snd_119bb0((void*)(a9), v17, a2, a3,
                                      (int*)&v111_.v111, a5, a6, a7, a8));
        return;
      }
    }
    v94 = *(unsigned __int8**)(v62 + 24);
    v111_.v111 = (unsigned int)snd_fnd_calcCrc32(v94, 0);
    v111_.v112 = (unsigned int)snd_fnd_calcCrc32Reverse((const char*)v94, 0);
    if (Data_f6c20((int*)&v111_.v111, &v125) != 0) {
      v65 = snd_fnd_WeakHandle_get(a2);
      if (v65 != 0) {
        v66 = v65 - 5592;
      }
      else {
        v66 = 0;
      }
      v67 = v63[9];
      v124[0] = v63[8];
      v124[1] = v67;
      v68 = snd_fnd_WeakHandle_get(a6);
      if (v68 != 0) {
        v69 = v68 - 5592;
      }
      else {
        v69 = 0;
      }
      snd_Fade_Fade_10cd70((__int64)v118_.v118, a7);
      v70 = *(_QWORD*)(a7 + 224);
      v118_.v121 = *(_QWORD*)(a7 + 216);
      v71 = *(_QWORD*)(a7 + 232);
      v118_.v122 = v70;
      v118_.v123 = v71;
      v72 = *(_QWORD*)(a7 + 200);
      v118_.v120 = *(_QWORD*)(a7 + 208);
      v118_.v119 = v72;
      v73 = snd_fnd_WeakHandle_get(a8);
      if (v73 != 0) {
        v74 = v73 - 5592;
      }
      else {
        v74 = 0;
      }
      v30 = Crc32List_11b4e0(v17 + 2760, v17, v66, a3, (__int64)v124,
                             (__int64)v63, a5, v69, (__int64)v118_.v118, v74);
      v31 = (unsigned int*)v118_.v118;
    }
    else if ((int)v63[120] < 1) {
      v85 = snd_fnd_WeakHandle_get(a2);
      if (v85 != 0) {
        v86 = v85 - 5592;
      }
      else {
        v86 = 0;
      }
      v87 = a4[1];
      v108[0] = *a4;
      v108[1] = v87;
      v88 = snd_fnd_WeakHandle_get(a6);
      if (v88 != 0) {
        v89 = v88 - 5592;
      }
      else {
        v89 = 0;
      }
      snd_Fade_Fade_10cd70((__int64)v102_.v102, a7);
      v90 = *(_QWORD*)(a7 + 224);
      v102_.v105 = *(_QWORD*)(a7 + 216);
      v102_.v106 = v90;
      v102_.v107 = *(_QWORD*)(a7 + 232);
      v91 = *(_QWORD*)(a7 + 208);
      v102_.v103 = *(_QWORD*)(a7 + 200);
      v102_.v104 = v91;
      v92 = snd_fnd_WeakHandle_get(a8);
      v93 = v92 - 5592;
      if (v92 == 0) {
        v93 = 0;
      }
      v30 = Crc32List_11b1e0(v17 + 2440, v17, v86, a3, (__int64)v108, a5, v89,
                             (__int64)v102_.v102, v93);
      v31 = (unsigned int*)v102_.v102;
    }
    else {
      snd_Fade_Fade_10cd70((__int64)&v111_.v111, a7);
      v75 = *(_QWORD*)(a7 + 216);
      v111_.v116 = *(_QWORD*)(a7 + 224);
      v76 = *(_QWORD*)(a7 + 232);
      v111_.v115 = v75;
      v111_.v117 = v76;
      v77 = *(_QWORD*)(a7 + 200);
      v111_.v114 = *(_QWORD*)(a7 + 208);
      v111_.v113 = v77;
      BYTE2(v111_.v116) = 1;
      v78 = snd_fnd_WeakHandle_get(a2);
      if (v78 != 0) {
        v79 = v78 - 5592;
      }
      else {
        v79 = 0;
      }
      v80 = a4[1];
      v110[0] = *a4;
      v110[1] = v80;
      v81 = snd_fnd_WeakHandle_get(a6);
      if (v81 != 0) {
        v82 = v81 - 5592;
      }
      else {
        v82 = 0;
      }
      snd_Fade_Fade_10cd70((__int64)v109, (__int64)&v111_.v111);
      v109[27] = v111_.v115;
      v109[28] = v111_.v116;
      v109[29] = v111_.v117;
      v109[25] = v111_.v113;
      v109[26] = v111_.v114;
      v83 = snd_fnd_WeakHandle_get(a8);
      v84 = v83 - 5592;
      if (v83 == 0) {
        v84 = 0;
      }
      v30 = Crc32List_11b5e0(v17 + 2600, v17, v79, a3, (__int64)v110, a5, v82,
                             (__int64)v109, v84);
      snd_Fade_Destroy_Fade(v109);
      v31 = &v111_.v111;
    }
  }
  else {
    v21 = snd_fnd_WeakHandle_get(a2);
    if (v21 != 0) {
      v22 = v21 - 5592;
    }
    else {
      v22 = 0;
    }
    v23 = a4[1];
    v101[0] = *a4;
    v101[1] = v23;
    v24 = snd_fnd_WeakHandle_get(a6);
    if (v24 != 0) {
      v25 = v24 - 5592;
    }
    else {
      v25 = 0;
    }
    snd_Fade_Fade_10cd70((__int64)v95_.v95, a7);
    v26 = *(_QWORD*)(a7 + 224);
    v95_.v98 = *(_QWORD*)(a7 + 216);
    v95_.v99 = v26;
    v95_.v100 = *(_QWORD*)(a7 + 232);
    v27 = *(_QWORD*)(a7 + 208);
    v95_.v96 = *(_QWORD*)(a7 + 200);
    v95_.v97 = v27;
    v28 = snd_fnd_WeakHandle_get(a8);
    v29 = v28 - 5592;
    if (v28 == 0) {
      v29 = 0;
    }
    v30 = Crc32List_11b1e0(v17 + 2440, v17, v22, a3, (__int64)v101, a5, v25,
                           (__int64)v95_.v95, v29);
    v31 = (unsigned int*)v95_.v95;
  }
LABEL_50:
  snd_Fade_Destroy_Fade(v31);
  if (*(_BYTE*)(a7 + 223) == 1) {
    (*(void (**)(__int64))(*(_QWORD*)v30 + 200LL))(v30);
  }
  nn_os_LockMutex((__int64)&GameData_2198f28);
  (*(void (**)(__int64))(*(_QWORD*)v30 + 760LL))(v30);
  nn_os_UnlockMutex((__int64)&GameData_2198f28);
  *(_QWORD*)a9 = 0;
  *(_DWORD*)(a9 + 8) = 0x2000;
  {
    snd_fnd_WeakHandle_set(a9, v30 + 5592);
    return;
  }
}

__attribute__((swiftcall)) void snd_11cdf0(PSEUDO_X8 x8_, __int64 result,
                                           __int64 a2, __int64 a3, int* a4,
                                           __int64 a5, __int64 a6, float a8,
                                           float a9, float a10)
{

#pragma clang fp contract(off)
  __int64 a7 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v16;
  int v20;
  int v21;
  int v22;
  __int64 v23;
  __int64 v24;
  int v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  int v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  int v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  int v41;
  __int64 v42;
  __int64 v43;
  int v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  int v50;
  unsigned __int8* v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  int v55;
  _BYTE* v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  int v61;
  int v62;
  __int64 v63;
  __int64 v64;
  _QWORD v65[30];
  _DWORD v66[2];
  struct {
    _BYTE v67[200];
    __int64 v68;
    __int64 v69;
    __int64 v70;
    __int64 v71;
    __int64 v72;
  } v67_;
  _DWORD v73[2];
  struct {
    _BYTE v74[200];
    __int64 v75;
    __int64 v76;
    __int64 v77;
    __int64 v78;
    __int64 v79;
  } v74_;
  _DWORD v80[2];
  int v81[2];
  __int64 v82;
  __int64 v83;
  _QWORD v84[30];
  _DWORD v85[2];
  _QWORD v86[30];
  _DWORD v87[2];
  _QWORD v88[30];
  _DWORD v89[2];

  if (*(_BYTE*)(result + 8) == 1) {
    *(_QWORD*)a7 = 0;
    *(_DWORD*)(a7 + 8) = 0x2000;
    {
      result;
      return;
    }
  }
  v16 = result;
  v20 = GameRoutine_f63e0(a4);
  if (v20 == -1) {
    v22 = GameRoutine_f57c0(a4);
    if (v22 == -1) {
      v41 = GameRoutine_13ed60(*(_QWORD*)(v16 + 2184), a4);
      if (v41 == -1) {
        v41 = Data_f6cc0(a4);
      }
      v21 = v41 | 0x8000000;
      if (v21 == -1) {
      LABEL_29:
        v42 = snd_fnd_WeakHandle_get(a2);
        if (v42 != 0) {
          v43 = v42 - 5592;
        }
        else {
          v43 = 0;
        }
        v44 = a4[1];
        v89[0] = *a4;
        v89[1] = v44;
        snd_Fade_Fade_10cd70((__int64)v88, a6);
        v45 = *(_QWORD*)(a6 + 224);
        v88[27] = *(_QWORD*)(a6 + 216);
        v46 = *(_QWORD*)(a6 + 232);
        v88[28] = v45;
        v88[29] = v46;
        v47 = *(_QWORD*)(a6 + 200);
        v88[26] = *(_QWORD*)(a6 + 208);
        v88[25] = v47;
        v28 = GameHr_11d450(v16 + 2440, v16, v43, a3, (__int64)v89, a5,
                            (__int64)v88, a8, a9, a10);
        snd_Fade_Destroy_Fade(v88);
        if (*(_BYTE*)(a6 + 223) != 1) {
          goto LABEL_34;
        }
        goto LABEL_33;
      }
    }
    else {
      v21 = v22 | 0x1000000;
      if (v21 == -1) {
        goto LABEL_29;
      }
    }
  }
  else {
    v21 = v20 | 0x2000000;
    if (v21 == -1) {
      goto LABEL_29;
    }
  }
  if ((v21 & 0x2000000) != 0) {
    v29 = snd_fnd_WeakHandle_get(a2);
    if (v29 != 0) {
      v30 = v29 - 5592;
    }
    else {
      v30 = 0;
    }
    v31 = a4[1];
    v87[0] = *a4;
    v87[1] = v31;
    snd_Fade_Fade_10cd70((__int64)v86, a6);
    v32 = *(_QWORD*)(a6 + 224);
    v86[27] = *(_QWORD*)(a6 + 216);
    v33 = *(_QWORD*)(a6 + 232);
    v86[28] = v32;
    v86[29] = v33;
    v34 = *(_QWORD*)(a6 + 200);
    v86[26] = *(_QWORD*)(a6 + 208);
    v86[25] = v34;
    v28 = GameHr_11d560(v16 + 2520, v16, v30, a3, (__int64)v87, a5,
                        (__int64)v86, a8, a9, a10);
    snd_Fade_Destroy_Fade(v86);
    if (*(_BYTE*)(a6 + 223) == 1) {
    LABEL_33:
      (*(void (**)(__int64))(*(_QWORD*)v28 + 200LL))(v28);
    }
  LABEL_34:
    nn_os_LockMutex((__int64)&GameData_2198f28);
    (*(void (**)(__int64))(*(_QWORD*)v28 + 760LL))(v28);
    nn_os_UnlockMutex((__int64)&GameData_2198f28);
    *(_QWORD*)a7 = 0;
    *(_DWORD*)(a7 + 8) = 0x2000;
    {
      snd_fnd_WeakHandle_set(a7, v28 + 5592);
      return;
    }
  }
  if ((v21 & 0x8000000) != 0) {
    v35 = snd_fnd_WeakHandle_get(a2);
    if (v35 != 0) {
      v36 = v35 - 5592;
    }
    else {
      v36 = 0;
    }
    v37 = a4[1];
    v85[0] = *a4;
    v85[1] = v37;
    snd_Fade_Fade_10cd70((__int64)v84, a6);
    v38 = *(_QWORD*)(a6 + 224);
    v84[27] = *(_QWORD*)(a6 + 216);
    v39 = *(_QWORD*)(a6 + 232);
    v84[28] = v38;
    v84[29] = v39;
    v40 = *(_QWORD*)(a6 + 200);
    v84[26] = *(_QWORD*)(a6 + 208);
    v84[25] = v40;
    v28 = GameHr_11d670(v16 + 2760, v16, v36, a3, (__int64)v85, a8, a9, a10, 0,
                        a5, (__int64)v84);
    snd_Fade_Destroy_Fade(v84);
    if (*(_BYTE*)(a6 + 223) != 1) {
      goto LABEL_34;
    }
    goto LABEL_33;
  }
  if ((v21 & 0x1000000) == 0) {
    v23 = snd_fnd_WeakHandle_get(a2);
    if (v23 != 0) {
      v24 = v23 - 5592;
    }
    else {
      v24 = 0;
    }
    v25 = a4[1];
    v66[0] = *a4;
    v66[1] = v25;
    snd_Fade_Fade_10cd70((__int64)v65, a6);
    v26 = *(_QWORD*)(a6 + 224);
    v65[27] = *(_QWORD*)(a6 + 216);
    v65[28] = v26;
    v65[29] = *(_QWORD*)(a6 + 232);
    v27 = *(_QWORD*)(a6 + 208);
    v65[25] = *(_QWORD*)(a6 + 200);
    v65[26] = v27;
    v28 = GameHr_11d450(v16 + 2440, v16, v24, a3, (__int64)v66, a5,
                        (__int64)v65, a8, a9, a10);
    snd_Fade_Destroy_Fade(v65);
    if (*(_BYTE*)(a6 + 223) != 1) {
      goto LABEL_34;
    }
    goto LABEL_33;
  }
  v48 = GameRoutine_f5850(v21, &v83, 0);
  v49 = v48;
  if (*(_DWORD*)(v48 + 132) == 0) {
    v51 = *(unsigned __int8**)(v48 + 24);
    v81[0] = (unsigned int)snd_fnd_calcCrc32(v51, 0);
    v81[1] = (unsigned int)snd_fnd_calcCrc32Reverse((const char*)v51, 0);
    v52 = Data_f6c20(v81, &v82);
    v53 = snd_fnd_WeakHandle_get(a2);
    if (v53 != 0) {
      v54 = v53 - 5592;
    }
    else {
      v54 = 0;
    }
    if (v52 != 0) {
      v55 = *(_DWORD*)(v49 + 36);
      v56 = v74_.v74;
      v80[0] = *(_DWORD*)(v49 + 32);
      v80[1] = v55;
      snd_Fade_Fade_10cd70((__int64)v74_.v74, a6);
      v57 = *(_QWORD*)(a6 + 224);
      v74_.v77 = *(_QWORD*)(a6 + 216);
      v58 = *(_QWORD*)(a6 + 232);
      v74_.v78 = v57;
      v74_.v79 = v58;
      v59 = *(_QWORD*)(a6 + 200);
      v74_.v76 = *(_QWORD*)(a6 + 208);
      v74_.v75 = v59;
      v60 = GameHr_11d790(v16 + 2760, v16, v54, a3, (__int64)v80, v49, a5,
                          (__int64)v74_.v74, a8, a9, a10);
    }
    else {
      v61 = *a4;
      v62 = a4[1];
      v56 = v67_.v67;
      v73[0] = v61;
      v73[1] = v62;
      snd_Fade_Fade_10cd70((__int64)v67_.v67, a6);
      v63 = *(_QWORD*)(a6 + 224);
      v67_.v70 = *(_QWORD*)(a6 + 216);
      v67_.v71 = v63;
      v67_.v72 = *(_QWORD*)(a6 + 232);
      v64 = *(_QWORD*)(a6 + 208);
      v67_.v68 = *(_QWORD*)(a6 + 200);
      v67_.v69 = v64;
      v60 = GameHr_11d450(v16 + 2440, v16, v54, a3, (__int64)v73, a5,
                          (__int64)v67_.v67, a8, a9, a10);
    }
    v28 = v60;
    snd_Fade_Destroy_Fade(v56);
    if (*(_BYTE*)(a6 + 223) != 1) {
      goto LABEL_34;
    }
    goto LABEL_33;
  }
  GameRoutine_f0a40(a5, v48);
  v50 = *(_DWORD*)(v49 + 36);
  LODWORD(v82) = *(_DWORD*)(v49 + 32);
  HIDWORD(v82) = v50;
  {
    X8CALL_X0(__int64, snd_11cdf0((void*)(a7), v16, a2, a3, (int*)&v82, a5, a6,
                                  a8, a9, a10));
    return;
  }
}

__int64 snd_126f60(_QWORD* a1, __int64 a2)
{

#pragma clang fp contract(off)
  _BYTE* v3;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  float* v8;
  double v9;
  _QWORD* v10;
  float v11;
  float v12;
  float v13;
  int v14;
  bool v15;
  long double v16;
  __int64 v17;
  _QWORD* v18;
  unsigned int v19;
  unsigned int v20;
  __int64 v21;
  int* v22;
  int v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  int* v30;
  int v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  unsigned int v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 result;
  _QWORD* v42;
  __int64* v43;
  __int64* v44;
  __int64 v45;
  unsigned __int64 v46;
  unsigned __int64 v47;
  __int64* v48;
  __int64* v49;
  __int64 v50;
  unsigned __int64 v51;
  unsigned __int64 v52;
  __int64* v53;
  __int64 v54;
  _QWORD* v55;
  _QWORD* v56;
  _QWORD* v57;
  __int64 v58;
  unsigned __int64 v59;
  __int64 v60;
  unsigned __int64 v61;
  _QWORD* v62;
  __int64* v63;
  __int64* v64;
  __int64 v65;
  unsigned __int64 v66;
  unsigned __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  unsigned __int64 v72;
  __int64 v73;
  __int64 v74;
  unsigned __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  struct {
    __int64 v81;
    int v82;
  } v81_;

  v3 = a1 + 512;
  v5 = (_QWORD*)snd_g_proxy_ptr[0];
  v6 = *(_QWORD*)snd_g_proxy_ptr[0];
  v7 = GameRoutine_190240((__int64)(a1 + 710));
  (*(void (**)(__int64, _QWORD*, __int64))(*(_QWORD*)v6 + 432LL))(v6, a1, v7);
  v8 = (float*)a1[706];
  if (v8[107] > 0x0.0p+0f) {
    v9 = Voice_1446e0((__int64)a1);
    v8 = (float*)a1[706];
    *((_DWORD*)a1 + 1447) = LODWORD(v9);
  }
  v10 = a1 + 5;
  (*(void (**)(_QWORD*, float, float))(a1[5] + 360LL))(a1 + 5, v8[70], v8[71]);
  (*(void (**)(_QWORD*, float, float))(a1[5] + 368LL))(
      a1 + 5, *(float*)(a1[706] + 296LL), *(float*)(a1[706] + 300LL));
  (*(void (**)(_QWORD*, float, float))(a1[5] + 376LL))(
      a1 + 5, *(float*)(a1[706] + 304LL), *(float*)(a1[706] + 308LL));
  (*(void (**)(_QWORD*, float, float))(a1[5] + 384LL))(
      a1 + 5, *(float*)(a1[706] + 288LL), *(float*)(a1[706] + 292LL));
  (*(void (**)(_QWORD*, float, float))(a1[5] + 392LL))(
      a1 + 5, *(float*)(a1[706] + 312LL), *(float*)(a1[706] + 316LL));
  snd_FadeRandom_start((__int64)(a1 + 368), *(float*)(a1[706] + 320LL),
                       *(float*)(a1[706] + 324LL), *(float*)(a1[706] + 328LL),
                       *(float*)(a1[706] + 332LL));
  snd_FadeRandom_start((__int64)(a1 + 395), *(float*)(a1[706] + 336LL),
                       *(float*)(a1[706] + 340LL), *(float*)(a1[706] + 344LL),
                       *(float*)(a1[706] + 348LL));
  snd_FadeRandom_start((__int64)(a1 + 422), *(float*)(a1[706] + 352LL),
                       *(float*)(a1[706] + 356LL), *(float*)(a1[706] + 360LL),
                       *(float*)(a1[706] + 364LL));
  v3[1793] = 1;
  snd_Fade_Fade_10c830((__int64)&v81_.v81, 0x0.0p+0f);
  (*(void (**)(_QWORD*, __int64*, double))(a1[5] + 160LL))(a1 + 5, &v81_.v81,
                                                           0x0.0p+0);
  snd_Fade_Destroy_Fade(&v81_.v81);
  (*(void (**)(_QWORD*, float))(a1[5] + 48LL))(a1 + 5, *(float*)(a2 + 204) +
                                                           *((float*)a1 + 731));
  (*(void (**)(_QWORD*, __int64, float))(a1[5] + 160LL))(a1 + 5, a2,
                                                         0x1.0000000000000p+0f);
  v11 = *((float*)a1 + 732);
  snd_Fade_Fade_10c830((__int64)&v81_.v81, 0x0.0p+0f);
  (*(void (**)(_QWORD*, __int64*, float))(a1[5] + 224LL))(a1 + 5, &v81_.v81,
                                                          v11);
  snd_Fade_Destroy_Fade(&v81_.v81);
  v12 = *((float*)a1 + 733) + 0x0.0p+0f;
  snd_Fade_Fade_10c830((__int64)&v81_.v81, 0x0.0p+0f);
  (*(void (**)(_QWORD*, __int64*, float))(a1[5] + 240LL))(a1 + 5, &v81_.v81,
                                                          v12);
  snd_Fade_Destroy_Fade(&v81_.v81);
  v13 = *((float*)a1 + 734);
  snd_Fade_Fade_10c830((__int64)&v81_.v81, 0x0.0p+0f);
  (*(void (**)(_QWORD*, __int64*, float))(a1[5] + 256LL))(a1 + 5, &v81_.v81,
                                                          v13);
  snd_Fade_Destroy_Fade(&v81_.v81);
  (*(void (**)(_QWORD*, float))(a1[5] + 336LL))(
      a1 + 5, (float)(*(float*)(a2 + 200) + *(float*)(a1[706] + 244LL)) +
                  *((float*)a1 + 735));
  (*(void (**)(_QWORD*, _QWORD))(a1[5] + 352LL))(
      a1 + 5, *(unsigned int*)(a1[706] + 188LL));
  v14 = *(_DWORD*)(a1[706] + 260LL);
  v15 = !snd_Voice_hasFeature22((__int64)a1);
  LODWORD(v16) = v14;
  if (v15) {
    v17 = 0;
  }
  else {
    v17 = 2;
  }
  (*(void (**)(_QWORD*, __int64, long double, float, float, float, float))(
      *v10 + 408LL))(a1 + 5, v17, v16, *(float*)(a1[706] + 264LL),
                     *(float*)(a1[706] + 268LL), *(float*)(a1[706] + 272LL),
                     *(float*)(a1[706] + 276LL));
  switch (*(_DWORD*)(a1[761] + 8LL)) {
  case 1:
  case 2:
  case 3:
  case 5:
  case 8:
    v18 = (_QWORD*)(*(__int64 (**)(_QWORD, __int64, __int64))(
        **(_QWORD**)snd_g_memory_ptr[0] + 16LL))(*snd_g_memory_ptr[0], 16, 32);
    *v18 = 0;
    v18[1] = 0;
    *((_DWORD*)v18 + 2) = 0x2000;
    a1[763] = v18;
    snd_fnd_WeakHandle_reset((__int64)v18);
    break;
  case 4:
    v53 = (__int64*)(*(__int64 (**)(_QWORD, __int64, __int64))(
        **(_QWORD**)snd_g_memory_ptr[0] + 16LL))(*snd_g_memory_ptr[0], 72, 32);
    *v53 = 0;
    v53[1] = 0;
    v53[2] = 0;
    v53[3] = 0;
    v53[4] = 0;
    v53[5] = 0;
    v53[6] = 0;
    v53[7] = 0;
    v53[8] = 0;
    v54 = a1[761];
    a1[763] = v53;
    GameHr_1279a0(v53, *(_DWORD*)(v54 + 704));
    break;
  case 6:
    v55 = (_QWORD*)(*(__int64 (**)(_QWORD, __int64, __int64))(
        **(_QWORD**)snd_g_memory_ptr[0] + 16LL))(*snd_g_memory_ptr[0], 24, 32);
    *v55 = 0;
    v55[1] = 0;
    v55[2] = 0;
    *((_DWORD*)v55 + 2) = 0x2000;
    a1[763] = v55;
    snd_fnd_WeakHandle_reset((__int64)v55);
    *((_DWORD*)v55 + 4) = 0;
    break;
  case 7:
    v48 = (__int64*)(*(__int64 (**)(_QWORD, __int64, __int64))(
        **(_QWORD**)snd_g_memory_ptr[0] + 16LL))(*snd_g_memory_ptr[0], 24, 32);
    *v48 = 0;
    v48[1] = 0;
    v48[2] = 0;
    v49 = v48;
    v50 = a1[761];
    a1[763] = v48;
    v51 = *(int*)(v50 + 704);
    v52 = (v48[1] - *v48) >> 4;
    if (v51 <= v52) {
      if (v51 < v52) {
        v48[1] = *v48 + 16 * v51;
      }
    }
    else {
      snd_130f60(v48, v51 - v52);
    }
    if ((int)v51 >= 1) {
      v70 = 16 * v51;
      v71 = 0;
      do {
        snd_fnd_WeakHandle_reset(*v49 + v71);
        v71 += 16;
      } while (v70 != v71);
    }
    break;
  case 9:
    v63 = (__int64*)(*(__int64 (**)(_QWORD, __int64, __int64))(
        **(_QWORD**)snd_g_memory_ptr[0] + 16LL))(*snd_g_memory_ptr[0], 48, 32);
    *v63 = 0;
    v63[1] = 0;
    v63[2] = 0;
    v63[3] = 0;
    v64 = v63;
    v63[4] = 0;
    v63[5] = 0;
    v65 = a1[761];
    a1[763] = v63;
    v66 = *(int*)(v65 + 704);
    v67 = (v63[1] - *v63) >> 4;
    if (v66 <= v67) {
      if (v66 < v67) {
        v63[1] = *v63 + 16 * v66;
      }
    }
    else {
      snd_130f60(v63, v66 - v67);
    }
    v74 = v64[3];
    v75 = (v64[4] - v74) >> 2;
    if (v66 <= v75) {
      if (v66 < v75) {
        v64[4] = v74 + 4 * v66;
      }
    }
    else {
      GameHr_131ec0(v64 + 3, v66 - v75);
    }
    if ((int)v66 >= 1) {
      v76 = 16 * v66;
      v77 = 0;
      v78 = 0;
      do {
        snd_fnd_WeakHandle_reset(*v64 + v78);
        v78 += 16;
        *(_DWORD*)(v64[3] + v77) = 1065353216;
        v77 += 4;
      } while (v76 != v78);
    }
    break;
  case 0xA:
    v43 = (__int64*)(*(__int64 (**)(_QWORD, __int64, __int64))(
        **(_QWORD**)snd_g_memory_ptr[0] + 16LL))(*snd_g_memory_ptr[0], 24, 32);
    *v43 = 0;
    v43[1] = 0;
    v43[2] = 0;
    v44 = v43;
    v45 = a1[761];
    a1[763] = v43;
    v46 = *(int*)(v45 + 704);
    v47 = (v43[1] - *v43) >> 4;
    if (v46 <= v47) {
      if (v46 < v47) {
        v43[1] = *v43 + 16 * v46;
      }
    }
    else {
      snd_130f60(v43, v46 - v47);
    }
    if ((int)v46 >= 1) {
      v68 = 16 * v46;
      v69 = 0;
      do {
        snd_fnd_WeakHandle_reset(*v44 + v69);
        v69 += 16;
      } while (v68 != v69);
    }
    break;
  case 0xB:
    v56 = (_QWORD*)(*(__int64 (**)(_QWORD, __int64, __int64))(
        **(_QWORD**)snd_g_memory_ptr[0] + 16LL))(*snd_g_memory_ptr[0], 40, 32);
    *v56 = 0;
    v56[1] = 0;
    v56[2] = 0;
    v57 = v56 + 2;
    v56[3] = 0;
    v56[4] = 0;
    *((_DWORD*)v56 + 2) = 0x2000;
    v58 = a1[761];
    a1[763] = v56;
    v59 = *(int*)(v58 + 704);
    v60 = v56[2];
    v61 = (v56[3] - v60) >> 2;
    if (v59 <= v61) {
      if (v59 < v61) {
        v56[3] = v60 + 4 * v59;
      }
    }
    else {
      v62 = v56;
      GameHr_131ec0(v56 + 2, v59 - v61);
      v56 = v62;
    }
    snd_fnd_WeakHandle_reset((__int64)v56);
    if ((int)v59 >= 1) {
      v72 = v59 & 7;
      if ((unsigned int)v59 >= 8) {
        v73 = 0;
        do {
          *(_DWORD*)(*v57 + 4 * v73) = 1065353216;
          *(_DWORD*)(*v57 + 4 * v73 + 4) = 1065353216;
          *(_DWORD*)(*v57 + 4 * v73 + 8) = 1065353216;
          *(_DWORD*)(*v57 + 4 * v73 + 12) = 1065353216;
          *(_DWORD*)(*v57 + 4 * v73 + 16) = 1065353216;
          *(_DWORD*)(*v57 + 4 * v73 + 20) = 1065353216;
          *(_DWORD*)(*v57 + 4 * v73 + 24) = 1065353216;
          v79 = *v57 + 4 * v73;
          v73 += 8;
          *(_DWORD*)(v79 + 28) = 1065353216;
        } while ((v59 & 0x7FFFFFF8) != v73);
      }
      else {
        v73 = 0;
      }
      if ((v59 & 7) != 0) {
        v80 = 4 * v73;
        do {
          --v72;
          *(_DWORD*)(*v57 + v80) = 1065353216;
          v80 += 4;
        } while (v72 != 0);
      }
    }
    break;
  case 0xC:
    v42 = (_QWORD*)(*(__int64 (**)(_QWORD, __int64, __int64))(
        **(_QWORD**)snd_g_memory_ptr[0] + 16LL))(*snd_g_memory_ptr[0], 24, 32);
    *v42 = 0;
    v42[1] = 0;
    v42[2] = 0;
    *((_DWORD*)v42 + 2) = 0x2000;
    a1[763] = v42;
    snd_fnd_WeakHandle_reset((__int64)v42);
    *((_DWORD*)v42 + 4) = -1;
    break;
  default:
    break;
  }
  v19 = (*(__int64 (**)(_QWORD*))(*a1 + 640LL))(a1);
  v20 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*v5 + 272LL))(*v5);
  (*(void (**)(_QWORD*, _QWORD))(*a1 + 632LL))(a1, v20);
  (*(void (**)(_QWORD*, _QWORD))(*a1 + 648LL))(a1, v19);
  if ((snd_fnd_WeakHandle_isValid(a1 + 725) & 1) != 0) {
    v3[2018] = 1;
  }
  if ((snd_fnd_WeakHandle_isValid(a1 + 725) & 1) == 0) {
    v21 = a1[706];
    v23 = *(_DWORD*)(v21 + 64);
    v22 = (int*)(v21 + 64);
    if (v23 != 0) {
      v24 = Crc32List_11ed40(a1[4], v22);
      v81_.v81 = 0;
      v81_.v82 = 0x2000;
      if (v24 != 0) {
        v25 = v24 + 5592;
      }
      else {
        v25 = 0;
      }
      snd_fnd_WeakHandle_set((__int64)&v81_.v81, v25);
      GameRoutine_112180((__int64)(a1 + 725), (__int64)&v81_.v81);
    }
  }
  if ((snd_fnd_WeakHandle_isValid(a1 + 725) & 1) == 0) {
    v26 = a1[4];
    v81_.v81 = 0;
    v81_.v82 = 0x2000;
    GameRoutine_112180((__int64)&v81_.v81, v26 + 3112);
    GameRoutine_112180((__int64)(a1 + 725), (__int64)&v81_.v81);
  }
  v27 = a1[706];
  if (*(_DWORD*)(v27 + 68) != 0) {
    v28 = Crc32List_11ed40(a1[4], (int*)(v27 + 68));
    v81_.v81 = 0;
    v81_.v82 = 0x2000;
    if (v28 != 0) {
      v29 = v28 + 5592;
    }
    else {
      v29 = 0;
    }
    snd_fnd_WeakHandle_set((__int64)&v81_.v81, v29);
    GameRoutine_112180((__int64)(a1 + 727), (__int64)&v81_.v81);
    v27 = a1[706];
  }
  v31 = *(_DWORD*)(v27 + 72);
  v30 = (int*)(v27 + 72);
  if (v31 != 0) {
    v32 = Crc32List_11ed40(a1[4], v30);
    v81_.v81 = 0;
    v81_.v82 = 0x2000;
    if (v32 != 0) {
      v33 = v32 + 5592;
    }
    else {
      v33 = 0;
    }
    snd_fnd_WeakHandle_set((__int64)&v81_.v81, v33);
    GameRoutine_112180((__int64)(a1 + 729), (__int64)&v81_.v81);
  }
  v34 = snd_fnd_WeakHandle_get((__int64)(a1 + 731));
  if (v34 != 0) {
    v35 = v34;
    v36 =
        (*(__int64 (**)(__int64))(*(_QWORD*)(v34 - 5592) + 128LL))(v34 - 5592);
    (*(void (**)(_QWORD*, _QWORD))(*a1 + 632LL))(a1, v36);
    if (v3[1790] == 1) {
      (*(void (**)(__int64))(*(_QWORD*)(v35 - 5592) + 48LL))(v35 - 5592);
      Actor_101c40(v35 - 5592, 0x1.0aac080000000p+4f);
    }
  }
  v37 = *(_QWORD*)snd_g_frameCount_ptr + 1LL;
  *(_QWORD*)snd_g_frameCount_ptr = v37;
  a1[701] = v37;
  v3[1807] = 1;
  *((_DWORD*)a1 + 1448) = 5;
  if ((*(float (**)(_QWORD*))(a1[5] + 328LL))(a1 + 5) <= 0x0.0p+0f) {
    v38 = a1[708];
    if (v38 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v38 + 160LL))(v38);
    }
    *((_DWORD*)a1 + 1448) = 6;
  }
  v39 = snd_fnd_WeakHandle_get((__int64)(a1 + 731));
  if (v39 != 0 && (v3[1790] & 1) != 0 && (*(_BYTE*)(v39 + 68) & 1) == 0) {
    v40 = v39;
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(
        *v10 + 1048LL))((void*)(&v81_.v81), a1 + 5);
    (*(void (**)(__int64, __int64*))(*(_QWORD*)(v40 - 5592) + 80LL))(v40 - 5592,
                                                                     &v81_.v81);
  }
  result = ((__int64 (*)(__int64))snd_Voice_hasFeature6)((__int64)a1);
  if ((result & 1) != 0) {
    result = SeqVoice_127a80(a1);
    if ((result & 1) != 0) {
      return GameHr_127be0((__int64)a1);
    }
  }
  return result;
}

#pragma GCC visibility pop
