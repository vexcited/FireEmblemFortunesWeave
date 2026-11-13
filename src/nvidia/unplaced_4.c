#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 NvOsAlloc_plt(_QWORD);
__int64 NvOsBreakPoint_plt(_QWORD, _QWORD, _QWORD);
__int64 NvOsFree_plt(_QWORD);
__int64 NvOsGetCurrentAllocator_plt(void);
__int64 NvRmMemGetSize_plt(_QWORD);
__int64 NvRmMemHandleAllocAttr_plt(_QWORD, _QWORD, _QWORD);
__int64 NvRmMemQueryHeaps_plt(_QWORD, _QWORD);
__int64 SdkRoutine_628dc0(_QWORD, _QWORD);
__int64 SdkRoutine_629310(void);
__int64 SdkRoutine_629ca0(void);
__int64 SdkRoutine_629ca0_alt1(_QWORD) __asm__("SdkRoutine_629ca0");
__int64 abort_plt(_QWORD);
__int64 bsearch_plt(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 nvidia_623fe0(__int64*, unsigned __int64);
__int64 nvidia_624080(_QWORD*, unsigned __int64);
__int64 nvidia_624b80(__int64*, unsigned __int64);
__int64 nvidia_625f80(_QWORD, _QWORD, _QWORD);
__int64 nvidia_6261a0(_QWORD, _QWORD, _QWORD);
__int64 nvidia_6264c0(__int64*, unsigned __int64);
__int64 nvidia_626a60(__int64, unsigned int, unsigned __int16*, __int64, int,
                      __int64, _QWORD*, _QWORD*);
__int64 nvidia_627be0_alt1(_QWORD, _QWORD) __asm__("nvidia_627be0");
__int64 nvidia_6280e0(__int64*, unsigned __int64);
__int64 nvidia_628f50(_QWORD*);
__int64 nvidia_629980_alt1(_QWORD, _QWORD) __asm__("nvidia_629980");
__int64 nvidia_629c70_alt1(_QWORD, _QWORD) __asm__("nvidia_629c70");
__int64 nvidia_629e00_alt1(_QWORD) __asm__("nvidia_629e00");
__int64 nvidia_62a370_alt1(void) __asm__("nvidia_62a370");
__int64 nvidia_62a380_alt1() __asm__("nvidia_62a380");
__int64 nvidia_62ae40(_QWORD, _QWORD);
__int64 nvidia_62ae40_alt1(_QWORD*, unsigned __int64) __asm__("nvidia_62ae40");
__int64 nvidia_62b610_alt1(_QWORD) __asm__("nvidia_62b610");
__int64 nvidia_62b660_alt1(void) __asm__("nvidia_62b660");
__int64 nvidia_638de0(void);
__int64 nvidia_644970(_QWORD, _QWORD);
__int64 nvrm_gpu_lib_629420(__int64, int*);
__int64 nvstl_mutex_impl_nvos_644af0(_QWORD);
__int64 printf_plt(const char*, ...);
__int64 qsort_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 sscanf_plt(_QWORD, const char*, ...);
__int64 strcmp_plt(void* this_, const char*);
__int64 strerror_plt(_QWORD);
__int64 strlen_plt(_QWORD);
extern _UNKNOWN* SdkData_e74d40;
extern _UNKNOWN* SdkData_e74d48;
extern _UNKNOWN SdkData_e72d18;
extern _UNKNOWN SdkData_e73168;
extern _UNKNOWN SdkData_e731e0;
extern _UNKNOWN SdkData_e73230;
extern _UNKNOWN SdkData_e73288;
extern _UNKNOWN SdkData_e73340;
extern _UNKNOWN SdkData_e733a0;
extern _UNKNOWN SdkData_e734e0;
extern _UNKNOWN SdkData_e735f8;
extern __int64 (*SdkData_e73090)();
extern __int64 (*SdkData_e73650[])();
extern __int64 (*SdkData_e89908[2])();
extern __int64 (*SdkData_e89910)();
extern __int64 (*nn_os_detail_GetUserWaitNativeHandle_ptr[])();
extern __int64 SdkData_10406b0;
extern __int64* SdkData_e898f0;
extern __int64* SdkData_e89918[2];
extern __int64* SdkData_e89920;
extern __int64* SdkData_e89958[14];
extern __int64* SdkData_e89960[13];
extern __int64* SdkData_e899b8[2];
extern __int64* SdkData_e899c0;
extern char SdkData_ea44f8;
extern int SdkData_10406ac;
void __attribute__((noreturn))
nvidia_62a350_alt1(_QWORD, _QWORD, _QWORD, _QWORD,
                   _QWORD) __asm__("nvidia_62a350");
void nn_os_detail_RemoveNativeWaitHolder();
void nvidia_627100(__int64 a1, __int64* a2, _DWORD* a3);
__int64 nvidia_627b10(__int64 a1, __int64 a2, __int64 a3, _QWORD* a4);
__int64 nvidia_627be0(__int64* a1, unsigned __int64 a2);
__int64 nvidia_627cd0(const char** a1, unsigned int a2, unsigned __int16* a3,
                      __int64 a4, int a5, __int64 a6, _QWORD* a7);
__int64 nvidia_627de0(_QWORD* a1, __int64 a2, __int64* a3);
__int64 nvidia_628d40(__int64* a1, unsigned __int64 a2);
__int64 nvidia_628ea0(__int64* a1, unsigned __int64 a2);
__int64 nvidia_629010(_QWORD* a1);
__int64 nvidia_6290b0(__int64 a1, int a2, __int64 a3, int a4, unsigned int* a5,
                      __int64 a6);
__int64 nvidia_6292b0(__int64 a1, unsigned int a2, __int64* a3);
__int64 nvidia_629320(__int64 a1, _DWORD* a2);
__int64 nvidia_629330(_QWORD* a1);
__int64 nvidia_629360(__int64 a1, __int64 a2);
__int64 nvidia_6293d0(__int64 a1);
__int64 nvidia_629580(__int64* a1, _QWORD* a2);
__int64 nvidia_629610(__int64 a1);
__int64 NvRmGpuLibListDevices_0(__int64 a1, _QWORD* a2);
__int64 nvidia_6296c0(__int64 a1, int a2, __int64 a3, __int64 a4);
char* nvidia_6297f0();
__int64 nvidia_629800(__int64 a1, _BYTE* a2);
__int64 nvidia_629840(_QWORD* a1);
void nvidia_6298d0(_QWORD* a1);
__int64 nvidia_629980(__int64* a1, unsigned __int64 a2);
__int64 nvidia_629a80(__int64* a1, unsigned __int64 a2);
__int64 nvidia_629c30(_QWORD* a1, __int64 a2);
__int64 nvidia_629c70(__int64 result, __int64 a2);
__int64 nvidia_629c90(__int64 a1);
__int64 nvidia_629cc0(_QWORD* a1, __int64 a2);
__int64 nvidia_629d00(_QWORD* a1, __int64 a2);
__int64 nvidia_629d40(_QWORD* a1, __int64 a2);
__int64 nvidia_629d80(_QWORD* a1, __int64 a2);
__int64 nvidia_629dc0(_QWORD* a1, __int64 a2);
__int64 nvidia_629e00(__int64 a1);
__int64 nvidia_629e40(__int64* a1, __int64 a2, char a3);
__int64 nvidia_629f40(__int64* a1, __int64 a2, __int64 a3);
_QWORD* nvidia_62a2a0(_QWORD* result);
__int64 nvidia_62a2d0(_QWORD* a1, __int64 a2);
void __attribute__((noreturn)) nvidia_62a310(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, unsigned int a5);
void __attribute__((noreturn)) nvidia_62a350(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4);
__int64 (*nvidia_62a370())();
__int64 nvidia_62a380(__int64* a1);
void nvidia_62a500(_QWORD* a1);
__int64 nvidia_62aad0(__int64 a1, int* a2, _QWORD* a3);
__int64 nvidia_62ada0(__int64* a1, unsigned __int64 a2);
__int64 nvidia_62aed0(_QWORD* a1);
void nvidia_62af20(_QWORD* a1);
_QWORD* nvidia_62b190(_QWORD* result, _QWORD* a2);
__int64 nvidia_62b1c0(__int64* a1, unsigned __int64 a2);
_QWORD* nvidia_62b2e0(_QWORD* result, _QWORD* a2);
_QWORD* nvidia_62b3e0(_QWORD* result, _QWORD* a2);
_QWORD* nvidia_62b440(_QWORD* result, _QWORD* a2);
__int64 nvidia_62b490(__int64 a1);
void nvidia_62b4d0(__int64 a1, _QWORD* a2);
__int64 nvidia_62b610(bool* a1);
__int64 nvidia_62b660();
bool nvidia_62b670(int a1);
__int64 nvidia_62b680(_QWORD* a1);
__int64 nvidia_62b700(_QWORD* a1);
__int64 nvidia_62b780(__int64 a1);
__int64 nvidia_62b7b0();
bool nvidia_62b7f0(int a1);
__int64 nvidia_62b800(__int64 a1, _QWORD* a2, _QWORD* a3);
__int64 nvidia_62b820(_QWORD* a1);
void nvidia_62b870(__int64 a1, _QWORD* a2);
void nvidia_62b8b0(_QWORD* a1);

void nvidia_627100(__int64 a1, __int64* a2, _DWORD* a3)
{
  unsigned __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned int v7;
  unsigned int* v8;
  __int64 v9;
  __int64 v10;
  unsigned int v11;
  unsigned int v12;
  unsigned int v13;
  unsigned int v14;
  unsigned int v15;
  unsigned int v16;
  unsigned int v17;
  unsigned int v18;
  int v19;
  int v20;
  unsigned int* v21;
  unsigned int v22;
  unsigned int v23;
  int v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  unsigned int v29;
  unsigned int* v30;
  __int64 v31;
  __int64 v32;
  unsigned int v33;
  unsigned int v34;
  unsigned int v35;
  unsigned int v36;
  unsigned int v37;
  unsigned int v38;
  unsigned int v39;
  unsigned int v40;
  int v41;
  int v42;
  unsigned int* v43;
  unsigned int v44;
  unsigned int v45;
  int v46;
  unsigned __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  unsigned int v51;
  unsigned int* v52;
  __int64 v53;
  __int64 v54;
  unsigned int v55;
  unsigned int v56;
  unsigned int v57;
  unsigned int v58;
  unsigned int v59;
  unsigned int v60;
  unsigned int v61;
  unsigned int v62;
  int v63;
  int v64;
  unsigned int* v65;
  unsigned int v66;
  unsigned int v67;
  int v68;
  unsigned __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  unsigned int v73;
  unsigned int* v74;
  __int64 v75;
  __int64 v76;
  unsigned int v77;
  unsigned int v78;
  unsigned int v79;
  unsigned int v80;
  unsigned int v81;
  unsigned int v82;
  unsigned int v83;
  unsigned int v84;
  int v85;
  int v86;
  unsigned int* v87;
  unsigned int v88;
  unsigned int v89;
  int v90;
  unsigned __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  unsigned int v95;
  unsigned int* v96;
  __int64 v97;
  __int64 v98;
  unsigned int v99;
  unsigned int v100;
  unsigned int v101;
  unsigned int v102;
  unsigned int v103;
  unsigned int v104;
  unsigned int v105;
  unsigned int v106;
  int v107;
  int v108;
  unsigned int* v109;
  unsigned int v110;
  unsigned int v111;
  int v112;
  unsigned __int64 v113;
  __int64 v114;
  __int64 v115;
  __int64 v116;
  unsigned int v117;
  unsigned int* v118;
  __int64 v119;
  __int64 v120;
  unsigned int v121;
  unsigned int v122;
  unsigned int v123;
  unsigned int v124;
  unsigned int v125;
  unsigned int v126;
  unsigned int v127;
  unsigned int v128;
  int v129;
  int v130;
  unsigned int* v131;
  unsigned int v132;
  unsigned int v133;
  int v134;
  unsigned __int64 v135;
  __int64 v136;
  __int64 v137;
  __int64 v138;
  unsigned int v139;
  unsigned int* v140;
  __int64 v141;
  __int64 v142;
  unsigned int v143;
  unsigned int v144;
  unsigned int v145;
  unsigned int v146;
  unsigned int v147;
  unsigned int v148;
  unsigned int v149;
  unsigned int v150;
  int v151;
  int v152;
  unsigned int* v153;
  unsigned int v154;
  unsigned int v155;
  int v156;
  unsigned __int64 v157;
  __int64 v158;
  __int64 v159;
  __int64 v160;
  unsigned int v161;
  unsigned int* v162;
  __int64 v163;
  __int64 v164;
  unsigned int v165;
  unsigned int v166;
  unsigned int v167;
  unsigned int v168;
  unsigned int v169;
  unsigned int v170;
  unsigned int v171;
  unsigned int v172;
  int v173;
  int v174;
  unsigned int* v175;
  unsigned int v176;
  unsigned int v177;
  int v178;

  v3 = a2[1];
  if (v3 == 0) {
    v7 = 0;
    goto LABEL_47;
  }
  v4 = *a2;
  v5 = a2[1] & 7;
  if (v3 < 8) {
    v6 = 0;
    v7 = 0;
    if ((v3 & 7) == 0) {
      goto LABEL_47;
    }
    goto LABEL_41;
  }
  v8 = (unsigned int*)(v4 + 16);
  v9 = 0;
  v7 = 0;
  v10 = -(__int64)(v3 & 0xFFFFFFFFFFFFFFF8LL);
  do {
    v11 = *(v8 - 4);
    v12 = *(v8 - 3);
    v9 -= 8;
    if (v11 <= v7) {
      v11 = v7;
    }
    if ((unsigned __int8)*(v8 - 4) == 151) {
      v7 = v11;
    }
    if (v12 <= v7) {
      v12 = v7;
    }
    if ((unsigned __int8)*(v8 - 3) == 151) {
      v7 = v12;
    }
    v13 = *(v8 - 2);
    v14 = *(v8 - 1);
    if (v13 <= v7) {
      v13 = v7;
    }
    if ((unsigned __int8)*(v8 - 2) == 151) {
      v7 = v13;
    }
    if (v14 <= v7) {
      v14 = v7;
    }
    if ((unsigned __int8)*(v8 - 1) == 151) {
      v7 = v14;
    }
    v15 = *v8;
    v16 = v8[1];
    if (*v8 <= v7) {
      v15 = v7;
    }
    if ((unsigned __int8)*v8 == 151) {
      v7 = v15;
    }
    if (v16 <= v7) {
      v16 = v7;
    }
    if ((unsigned __int8)v8[1] == 151) {
      v7 = v16;
    }
    v17 = v8[2];
    v18 = v8[3];
    v8 += 8;
    v19 = (unsigned __int8)v17;
    if (v17 <= v7) {
      v17 = v7;
    }
    if (v19 == 151) {
      v7 = v17;
    }
    v20 = (unsigned __int8)v18;
    if (v18 <= v7) {
      v18 = v7;
    }
    if (v20 == 151) {
      v7 = v18;
    }
  } while (v10 != v9);
  v6 = -v9;
  if (v5 != 0) {
  LABEL_41:
    v21 = (unsigned int*)(v4 + 4 * v6);
    do {
      v23 = *v21++;
      v22 = v23;
      v24 = (unsigned __int8)v23;
      if (v23 <= v7) {
        v22 = v7;
      }
      if (v24 == 151) {
        v7 = v22;
      }
      --v5;
    } while (v5 != 0);
  }
LABEL_47:
  a3[153] = v7;
  v25 = a2[1];
  if (v25 == 0) {
    v29 = 0;
    goto LABEL_93;
  }
  v26 = *a2;
  v27 = a2[1] & 7;
  if (v25 < 8) {
    v28 = 0;
    v29 = 0;
    if ((v25 & 7) == 0) {
      goto LABEL_93;
    }
    goto LABEL_87;
  }
  v30 = (unsigned int*)(v26 + 16);
  v31 = 0;
  v29 = 0;
  v32 = -(__int64)(v25 & 0xFFFFFFFFFFFFFFF8LL);
  do {
    v33 = *(v30 - 4);
    v34 = *(v30 - 3);
    v31 -= 8;
    if (v33 <= v29) {
      v33 = v29;
    }
    if ((unsigned __int8)*(v30 - 4) == 45) {
      v29 = v33;
    }
    if (v34 <= v29) {
      v34 = v29;
    }
    if ((unsigned __int8)*(v30 - 3) == 45) {
      v29 = v34;
    }
    v35 = *(v30 - 2);
    v36 = *(v30 - 1);
    if (v35 <= v29) {
      v35 = v29;
    }
    if ((unsigned __int8)*(v30 - 2) == 45) {
      v29 = v35;
    }
    if (v36 <= v29) {
      v36 = v29;
    }
    if ((unsigned __int8)*(v30 - 1) == 45) {
      v29 = v36;
    }
    v37 = *v30;
    v38 = v30[1];
    if (*v30 <= v29) {
      v37 = v29;
    }
    if ((unsigned __int8)*v30 == 45) {
      v29 = v37;
    }
    if (v38 <= v29) {
      v38 = v29;
    }
    if ((unsigned __int8)v30[1] == 45) {
      v29 = v38;
    }
    v39 = v30[2];
    v40 = v30[3];
    v30 += 8;
    v41 = (unsigned __int8)v39;
    if (v39 <= v29) {
      v39 = v29;
    }
    if (v41 == 45) {
      v29 = v39;
    }
    v42 = (unsigned __int8)v40;
    if (v40 <= v29) {
      v40 = v29;
    }
    if (v42 == 45) {
      v29 = v40;
    }
  } while (v32 != v31);
  v28 = -v31;
  if (v27 != 0) {
  LABEL_87:
    v43 = (unsigned int*)(v26 + 4 * v28);
    do {
      v45 = *v43++;
      v44 = v45;
      v46 = (unsigned __int8)v45;
      if (v45 <= v29) {
        v44 = v29;
      }
      if (v46 == 45) {
        v29 = v44;
      }
      --v27;
    } while (v27 != 0);
  }
LABEL_93:
  a3[154] = v29;
  v47 = a2[1];
  if (v47 == 0) {
    v51 = 0;
    goto LABEL_139;
  }
  v48 = *a2;
  v49 = a2[1] & 7;
  if (v47 < 8) {
    v50 = 0;
    v51 = 0;
    if ((v47 & 7) == 0) {
      goto LABEL_139;
    }
    goto LABEL_133;
  }
  v52 = (unsigned int*)(v48 + 16);
  v53 = 0;
  v51 = 0;
  v54 = -(__int64)(v47 & 0xFFFFFFFFFFFFFFF8LL);
  do {
    v55 = *(v52 - 4);
    v56 = *(v52 - 3);
    v53 -= 8;
    if (v55 <= v51) {
      v55 = v51;
    }
    if ((unsigned __int8)*(v52 - 4) == 150) {
      v51 = v55;
    }
    if (v56 <= v51) {
      v56 = v51;
    }
    if ((unsigned __int8)*(v52 - 3) == 150) {
      v51 = v56;
    }
    v57 = *(v52 - 2);
    v58 = *(v52 - 1);
    if (v57 <= v51) {
      v57 = v51;
    }
    if ((unsigned __int8)*(v52 - 2) == 150) {
      v51 = v57;
    }
    if (v58 <= v51) {
      v58 = v51;
    }
    if ((unsigned __int8)*(v52 - 1) == 150) {
      v51 = v58;
    }
    v59 = *v52;
    v60 = v52[1];
    if (*v52 <= v51) {
      v59 = v51;
    }
    if ((unsigned __int8)*v52 == 150) {
      v51 = v59;
    }
    if (v60 <= v51) {
      v60 = v51;
    }
    if ((unsigned __int8)v52[1] == 150) {
      v51 = v60;
    }
    v61 = v52[2];
    v62 = v52[3];
    v52 += 8;
    v63 = (unsigned __int8)v61;
    if (v61 <= v51) {
      v61 = v51;
    }
    if (v63 == 150) {
      v51 = v61;
    }
    v64 = (unsigned __int8)v62;
    if (v62 <= v51) {
      v62 = v51;
    }
    if (v64 == 150) {
      v51 = v62;
    }
  } while (v54 != v53);
  v50 = -v53;
  if (v49 != 0) {
  LABEL_133:
    v65 = (unsigned int*)(v48 + 4 * v50);
    do {
      v67 = *v65++;
      v66 = v67;
      v68 = (unsigned __int8)v67;
      if (v67 <= v51) {
        v66 = v51;
      }
      if (v68 == 150) {
        v51 = v66;
      }
      --v49;
    } while (v49 != 0);
  }
LABEL_139:
  a3[160] = v51;
  v69 = a2[1];
  if (v69 == 0) {
    v73 = 0;
    goto LABEL_185;
  }
  v70 = *a2;
  v71 = a2[1] & 7;
  if (v69 < 8) {
    v72 = 0;
    v73 = 0;
    if ((v69 & 7) == 0) {
      goto LABEL_185;
    }
    goto LABEL_179;
  }
  v74 = (unsigned int*)(v70 + 16);
  v75 = 0;
  v73 = 0;
  v76 = -(__int64)(v69 & 0xFFFFFFFFFFFFFFF8LL);
  do {
    v77 = *(v74 - 4);
    v78 = *(v74 - 3);
    v75 -= 8;
    if (v77 <= v73) {
      v77 = v73;
    }
    if ((unsigned __int8)*(v74 - 4) == 192) {
      v73 = v77;
    }
    if (v78 <= v73) {
      v78 = v73;
    }
    if ((unsigned __int8)*(v74 - 3) == 192) {
      v73 = v78;
    }
    v79 = *(v74 - 2);
    v80 = *(v74 - 1);
    if (v79 <= v73) {
      v79 = v73;
    }
    if ((unsigned __int8)*(v74 - 2) == 192) {
      v73 = v79;
    }
    if (v80 <= v73) {
      v80 = v73;
    }
    if ((unsigned __int8)*(v74 - 1) == 192) {
      v73 = v80;
    }
    v81 = *v74;
    v82 = v74[1];
    if (*v74 <= v73) {
      v81 = v73;
    }
    if ((unsigned __int8)*v74 == 192) {
      v73 = v81;
    }
    if (v82 <= v73) {
      v82 = v73;
    }
    if ((unsigned __int8)v74[1] == 192) {
      v73 = v82;
    }
    v83 = v74[2];
    v84 = v74[3];
    v74 += 8;
    v85 = (unsigned __int8)v83;
    if (v83 <= v73) {
      v83 = v73;
    }
    if (v85 == 192) {
      v73 = v83;
    }
    v86 = (unsigned __int8)v84;
    if (v84 <= v73) {
      v84 = v73;
    }
    if (v86 == 192) {
      v73 = v84;
    }
  } while (v76 != v75);
  v72 = -v75;
  if (v71 != 0) {
  LABEL_179:
    v87 = (unsigned int*)(v70 + 4 * v72);
    do {
      v89 = *v87++;
      v88 = v89;
      v90 = (unsigned __int8)v89;
      if (v89 <= v73) {
        v88 = v73;
      }
      if (v90 == 192) {
        v73 = v88;
      }
      --v71;
    } while (v71 != 0);
  }
LABEL_185:
  a3[155] = v73;
  v91 = a2[1];
  if (v91 == 0) {
    v95 = 0;
    goto LABEL_231;
  }
  v92 = *a2;
  v93 = a2[1] & 7;
  if (v91 < 8) {
    v94 = 0;
    v95 = 0;
    if ((v91 & 7) == 0) {
      goto LABEL_231;
    }
    goto LABEL_225;
  }
  v96 = (unsigned int*)(v92 + 16);
  v97 = 0;
  v95 = 0;
  v98 = -(__int64)(v91 & 0xFFFFFFFFFFFFFFF8LL);
  do {
    v99 = *(v96 - 4);
    v100 = *(v96 - 3);
    v97 -= 8;
    if (v99 <= v95) {
      v99 = v95;
    }
    if ((unsigned __int8)*(v96 - 4) == 111) {
      v95 = v99;
    }
    if (v100 <= v95) {
      v100 = v95;
    }
    if ((unsigned __int8)*(v96 - 3) == 111) {
      v95 = v100;
    }
    v101 = *(v96 - 2);
    v102 = *(v96 - 1);
    if (v101 <= v95) {
      v101 = v95;
    }
    if ((unsigned __int8)*(v96 - 2) == 111) {
      v95 = v101;
    }
    if (v102 <= v95) {
      v102 = v95;
    }
    if ((unsigned __int8)*(v96 - 1) == 111) {
      v95 = v102;
    }
    v103 = *v96;
    v104 = v96[1];
    if (*v96 <= v95) {
      v103 = v95;
    }
    if ((unsigned __int8)*v96 == 111) {
      v95 = v103;
    }
    if (v104 <= v95) {
      v104 = v95;
    }
    if ((unsigned __int8)v96[1] == 111) {
      v95 = v104;
    }
    v105 = v96[2];
    v106 = v96[3];
    v96 += 8;
    v107 = (unsigned __int8)v105;
    if (v105 <= v95) {
      v105 = v95;
    }
    if (v107 == 111) {
      v95 = v105;
    }
    v108 = (unsigned __int8)v106;
    if (v106 <= v95) {
      v106 = v95;
    }
    if (v108 == 111) {
      v95 = v106;
    }
  } while (v98 != v97);
  v94 = -v97;
  if (v93 != 0) {
  LABEL_225:
    v109 = (unsigned int*)(v92 + 4 * v94);
    do {
      v111 = *v109++;
      v110 = v111;
      v112 = (unsigned __int8)v111;
      if (v111 <= v95) {
        v110 = v95;
      }
      if (v112 == 111) {
        v95 = v110;
      }
      --v93;
    } while (v93 != 0);
  }
LABEL_231:
  a3[156] = v95;
  v113 = a2[1];
  if (v113 == 0) {
    v117 = 0;
    goto LABEL_277;
  }
  v114 = *a2;
  v115 = a2[1] & 7;
  if (v113 < 8) {
    v116 = 0;
    v117 = 0;
    if ((v113 & 7) == 0) {
      goto LABEL_277;
    }
    goto LABEL_271;
  }
  v118 = (unsigned int*)(v114 + 16);
  v119 = 0;
  v117 = 0;
  v120 = -(__int64)(v113 & 0xFFFFFFFFFFFFFFF8LL);
  do {
    v121 = *(v118 - 4);
    v122 = *(v118 - 3);
    v119 -= 8;
    if (v121 <= v117) {
      v121 = v117;
    }
    if ((unsigned __int8)*(v118 - 4) == 108) {
      v117 = v121;
    }
    if (v122 <= v117) {
      v122 = v117;
    }
    if ((unsigned __int8)*(v118 - 3) == 108) {
      v117 = v122;
    }
    v123 = *(v118 - 2);
    v124 = *(v118 - 1);
    if (v123 <= v117) {
      v123 = v117;
    }
    if ((unsigned __int8)*(v118 - 2) == 108) {
      v117 = v123;
    }
    if (v124 <= v117) {
      v124 = v117;
    }
    if ((unsigned __int8)*(v118 - 1) == 108) {
      v117 = v124;
    }
    v125 = *v118;
    v126 = v118[1];
    if (*v118 <= v117) {
      v125 = v117;
    }
    if ((unsigned __int8)*v118 == 108) {
      v117 = v125;
    }
    if (v126 <= v117) {
      v126 = v117;
    }
    if ((unsigned __int8)v118[1] == 108) {
      v117 = v126;
    }
    v127 = v118[2];
    v128 = v118[3];
    v118 += 8;
    v129 = (unsigned __int8)v127;
    if (v127 <= v117) {
      v127 = v117;
    }
    if (v129 == 108) {
      v117 = v127;
    }
    v130 = (unsigned __int8)v128;
    if (v128 <= v117) {
      v128 = v117;
    }
    if (v130 == 108) {
      v117 = v128;
    }
  } while (v120 != v119);
  v116 = -v119;
  if (v115 != 0) {
  LABEL_271:
    v131 = (unsigned int*)(v114 + 4 * v116);
    do {
      v133 = *v131++;
      v132 = v133;
      v134 = (unsigned __int8)v133;
      if (v133 <= v117) {
        v132 = v117;
      }
      if (v134 == 108) {
        v117 = v132;
      }
      --v115;
    } while (v115 != 0);
  }
LABEL_277:
  a3[157] = v117;
  v135 = a2[1];
  if (v135 == 0) {
    v139 = 0;
    goto LABEL_323;
  }
  v136 = *a2;
  v137 = a2[1] & 7;
  if (v135 < 8) {
    v138 = 0;
    v139 = 0;
    if ((v135 & 7) == 0) {
      goto LABEL_323;
    }
    goto LABEL_317;
  }
  v140 = (unsigned int*)(v136 + 16);
  v141 = 0;
  v139 = 0;
  v142 = -(__int64)(v135 & 0xFFFFFFFFFFFFFFF8LL);
  do {
    v143 = *(v140 - 4);
    v144 = *(v140 - 3);
    v141 -= 8;
    if (v143 <= v139) {
      v143 = v139;
    }
    if ((unsigned __int8)*(v140 - 4) == 64) {
      v139 = v143;
    }
    if (v144 <= v139) {
      v144 = v139;
    }
    if ((unsigned __int8)*(v140 - 3) == 64) {
      v139 = v144;
    }
    v145 = *(v140 - 2);
    v146 = *(v140 - 1);
    if (v145 <= v139) {
      v145 = v139;
    }
    if ((unsigned __int8)*(v140 - 2) == 64) {
      v139 = v145;
    }
    if (v146 <= v139) {
      v146 = v139;
    }
    if ((unsigned __int8)*(v140 - 1) == 64) {
      v139 = v146;
    }
    v147 = *v140;
    v148 = v140[1];
    if (*v140 <= v139) {
      v147 = v139;
    }
    if ((unsigned __int8)*v140 == 64) {
      v139 = v147;
    }
    if (v148 <= v139) {
      v148 = v139;
    }
    if ((unsigned __int8)v140[1] == 64) {
      v139 = v148;
    }
    v149 = v140[2];
    v150 = v140[3];
    v140 += 8;
    v151 = (unsigned __int8)v149;
    if (v149 <= v139) {
      v149 = v139;
    }
    if (v151 == 64) {
      v139 = v149;
    }
    v152 = (unsigned __int8)v150;
    if (v150 <= v139) {
      v150 = v139;
    }
    if (v152 == 64) {
      v139 = v150;
    }
  } while (v142 != v141);
  v138 = -v141;
  if (v137 != 0) {
  LABEL_317:
    v153 = (unsigned int*)(v136 + 4 * v138);
    do {
      v155 = *v153++;
      v154 = v155;
      v156 = (unsigned __int8)v155;
      if (v155 <= v139) {
        v154 = v139;
      }
      if (v156 == 64) {
        v139 = v154;
      }
      --v137;
    } while (v137 != 0);
  }
LABEL_323:
  a3[158] = v139;
  v157 = a2[1];
  if (v157 == 0) {
    a3[159] = 0;
    return;
  }
  v158 = *a2;
  v159 = a2[1] & 7;
  if (v157 >= 8) {
    v162 = (unsigned int*)(v158 + 16);
    v163 = 0;
    v161 = 0;
    v164 = -(__int64)(v157 & 0xFFFFFFFFFFFFFFF8LL);
    do {
      v165 = *(v162 - 4);
      v166 = *(v162 - 3);
      v163 -= 8;
      if (v165 <= v161) {
        v165 = v161;
      }
      if ((unsigned __int8)*(v162 - 4) == 181) {
        v161 = v165;
      }
      if (v166 <= v161) {
        v166 = v161;
      }
      if ((unsigned __int8)*(v162 - 3) == 181) {
        v161 = v166;
      }
      v167 = *(v162 - 2);
      v168 = *(v162 - 1);
      if (v167 <= v161) {
        v167 = v161;
      }
      if ((unsigned __int8)*(v162 - 2) == 181) {
        v161 = v167;
      }
      if (v168 <= v161) {
        v168 = v161;
      }
      if ((unsigned __int8)*(v162 - 1) == 181) {
        v161 = v168;
      }
      v169 = *v162;
      v170 = v162[1];
      if (*v162 <= v161) {
        v169 = v161;
      }
      if ((unsigned __int8)*v162 == 181) {
        v161 = v169;
      }
      if (v170 <= v161) {
        v170 = v161;
      }
      if ((unsigned __int8)v162[1] == 181) {
        v161 = v170;
      }
      v171 = v162[2];
      v172 = v162[3];
      v162 += 8;
      v173 = (unsigned __int8)v171;
      if (v171 <= v161) {
        v171 = v161;
      }
      if (v173 == 181) {
        v161 = v171;
      }
      v174 = (unsigned __int8)v172;
      if (v172 <= v161) {
        v172 = v161;
      }
      if (v174 == 181) {
        v161 = v172;
      }
    } while (v164 != v163);
    v160 = -v163;
    if (v159 == 0) {
      goto LABEL_369;
    }
    goto LABEL_363;
  }
  v160 = 0;
  v161 = 0;
  if ((v157 & 7) != 0) {
  LABEL_363:
    v175 = (unsigned int*)(v158 + 4 * v160);
    do {
      v177 = *v175++;
      v176 = v177;
      v178 = (unsigned __int8)v177;
      if (v177 <= v161) {
        v176 = v161;
      }
      if (v178 == 181) {
        v161 = v176;
      }
      --v159;
    } while (v159 != 0);
  }
LABEL_369:
  a3[159] = v161;
}

__int64 nvidia_627b10(__int64 a1, __int64 a2, __int64 a3, _QWORD* a4)
{
  __int64 v5;
  unsigned int v9;
  unsigned int v10;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  v5 = *(_QWORD*)(a1 + 40);
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v9 = nvidia_627be0_alt1(&v14, v5);
  if (v9 != 0 || (v9 = nvidia_625f80(a1, a2, &v14)) != 0) {
    v10 = v9;
  }
  else {
    v12 = qsort_plt(v14, v15, 12, SdkData_e89908[0]);
    v10 = nvidia_6261a0(v12, a4, &v14);
    if (v10 == 0) {
      v13 = a4[1];
      *(_QWORD*)(a3 + 664) = *a4;
      *(_QWORD*)(a3 + 672) = v13;
    }
  }
  SdkRoutine_628dc0(&v14, 0);
  NvOsFree_plt(v14);
  return v10;
}

__int64 nvidia_627be0(__int64* a1, unsigned __int64 a2)
{
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;

  if (a1[2] >= a2) {
    return 0;
  }
  if (a2 > 0x1555555555555555LL) {
    return 6;
  }
  v5 = NvOsAlloc_plt(12 * a2);
  if (v5 == 0) {
    return 6;
  }
  v6 = v5;
  if (a1[1] != 0) {
    v7 = 0;
    v8 = 0;
    do {
      v9 = v5 + v7;
      ++v8;
      v10 = (__int64*)(*a1 + v7);
      v7 += 12;
      v11 = *v10;
      *(_DWORD*)(v9 + 8) = *((_DWORD*)v10 + 2);
      *(_QWORD*)v9 = v11;
    } while (v8 < a1[1]);
  }
  NvOsFree_plt(*a1);
  *a1 = v6;
  a1[2] = a2;
  return 0;
}

__int64 nvidia_627cd0(const char** a1, unsigned int a2, unsigned __int16* a3,
                      __int64 a4, int a5, __int64 a6, _QWORD* a7)
{
  unsigned __int16 v8;
  int v9;
  unsigned __int16* v10;
  const char** v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  const char* v15;
  const char* v16;
  const char* v17;
  _QWORD v19[3];

  if (a2 == 2) {
    v8 = *(_WORD*)(a4 + 6);
    v19[1] = 0;
    v19[2] = 0;
    v9 = a5;
    v10 = a3;
    v11 = a1;
    v12 = a4;
    v13 = a6;
    v19[0] = v8;
    v14 = bsearch_plt(v19, SdkData_e89918[0], *SdkData_e89920, 24,
                      SdkData_e89910);
    if (v14 != 0) {
      v16 = *(const char**)(v14 + 8);
      v15 = *(const char**)(v14 + 16);
      v17 = "Graphics Device";
      a6 = v13;
      a5 = v9;
      a4 = v12;
      a3 = v10;
      a2 = 2;
      a1 = v11;
      goto LABEL_6;
    }
    a6 = v13;
    a5 = v9;
    a4 = v12;
    a3 = v10;
    a2 = 2;
    a1 = v11;
  }
  v15 = *a1;
  v16 = a1[1];
  v17 = "Graphics Device";
LABEL_6:
  if (v15 != nullptr) {
    v17 = v15;
  }
  a7[29] = v17;
  a7[30] = v16;
  return nvidia_626a60((__int64)a1, a2, a3, a4, a5, a6, a7 + 61, a7 + 63);
}

__int64 nvidia_627de0(_QWORD* a1, __int64 a2, __int64* a3)
{
  __int64 v3;
  _DWORD* v6;
  __int64 v7;
  unsigned int v8;
  unsigned __int64 v9;
  unsigned int v10;
  unsigned int v11;
  __int64 result;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  _QWORD* v16;
  __int64 v17;
  _QWORD* v19;
  __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 i;
  __int64 v23;
  bool v24;
  __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 j;
  unsigned int v28;
  __int64 v30;
  __int64 v31;
  _QWORD* v32;

  v3 = *(_QWORD*)(a2 + 8);
  if (v3 != 0) {
    v6 = *(_DWORD**)a2;
    v7 = 32 * v3;
    v8 = 0;
    v9 = 0;
    while (1) {
      if (*v6 == 1 && (v6[6] & 0x80000000) == 0) {
        v10 = v6[1];
        if (v10 > 0x3F) {
          return 17;
        }
        v9 |= 1LL << v10;
        if (v10 + 1 > v8) {
          v8 = v10 + 1;
        }
      }
      v6 += 8;
      v7 -= 32;
      if (v7 == 0) {
        goto LABEL_10;
      }
    }
  }
  v9 = 0;
  v8 = 0;
LABEL_10:
  v11 = v8;
  result = nvidia_6280e0(a3, v8);
  if ((_DWORD)result == 0) {
    v13 = *a3;
    v14 = a3[1];
    if (v14 != 0) {
      v15 = 8 * v14 - 8;
      v16 = (_QWORD*)*a3;
      if ((~(_BYTE)v15 & 0x38) != 0) {
        v17 = -(__int64)(((unsigned __int8)((unsigned int)v15 >> 3) + 1) & 7);
        v16 = (_QWORD*)*a3;
        do {
          *v16++ = 0;
          __asm__ volatile("" : "+r"(v16));
        } while (!__CFADD__(v17++, 1));
      }
      if (v15 >= 0x38) {
        v19 = (_QWORD*)(v13 + 8 * v14);
        do {
          *v16 = 0;
          v16[1] = 0;
          v16[2] = 0;
          v16[3] = 0;
          v16[4] = 0;
          v16[5] = 0;
          v16[6] = 0;
          v16[7] = 0;
          v16 += 8;
          __asm__ volatile("" : "+r"(v16));
        } while (v16 != v19);
      }
    }
    v20 = a1[17];
    if (v20 != 0) {
      v21 = a1[18];
      if (v21 != 0) {
        for (i = 0; i < v21; ++i) {
          v23 = *(unsigned __int8*)(v20 + i);
          v24 = (_DWORD)v23 != 255 && v11 > (unsigned int)v23;
          if (v24 && ((v9 >> v23) & 1) != 0) {
            *(_QWORD*)(v13 + 8 * v23) |= 1LL << i;
            v21 = a1[18];
          }
        }
      }
      v25 = a1[19];
      if (v25 != 0) {
        v26 = a1[20];
        if (v26 != 0) {
          for (j = 0; j < v26; ++j) {
            v28 = *(unsigned __int8*)(v25 + j);
            if (v28 != 255 && v11 > v28) {
              *(_QWORD*)(v13 + 8 * j) =
                  *(_QWORD*)(v13 + 8LL * *(unsigned __int8*)(v25 + j));
              v26 = a1[20];
            }
          }
        }
      }
    }
    else if (v11 != 0) {
      v30 = v11 & 7;
      if (v11 >= 8) {
        v32 = (_QWORD*)(v13 + 32);
        v31 = 0;
        do {
          if (((1LL << v31) & v9) != 0) {
            *(v32 - 4) = 1LL << v31;
          }
          if (((2LL << v31) & v9) != 0) {
            *(v32 - 3) = 2LL << v31;
          }
          if (((4LL << v31) & v9) != 0) {
            *(v32 - 2) = 4LL << v31;
          }
          if (((8LL << v31) & v9) != 0) {
            *(v32 - 1) = 8LL << v31;
          }
          if (((16LL << v31) & v9) != 0) {
            *v32 = 16LL << v31;
          }
          if (((32LL << v31) & v9) != 0) {
            v32[1] = 32LL << v31;
          }
          if (((64LL << v31) & v9) != 0) {
            v32[2] = 64LL << v31;
          }
          if (((128LL << v31) & v9) != 0) {
            v32[3] = 128LL << v31;
          }
          v31 += 8;
          v32 += 8;
        } while ((v11 & 0xFFFFFFF8) != v31);
      }
      else {
        v31 = 0;
      }
      if ((v11 & 7) != 0) {
        do {
          if (((1LL << v31) & v9) != 0) {
            *(_QWORD*)(v13 + 8 * v31) = 1LL << v31;
          }
          ++v31;
          --v30;
        } while (v30 != 0);
      }
    }
    return 0;
  }
  return result;
}

__int64 nvidia_628d40(__int64* a1, unsigned __int64 a2)
{
  __int64 result;
  unsigned __int64 v5;
  _QWORD* v6;

  result = nvidia_6264c0(a1, a2);
  if ((_DWORD)result == 0) {
    v5 = a1[1];
    if (v5 <= a2) {
      for (; v5 < a2; a1[1] = v5) {
        v6 = (_QWORD*)(*a1 + 32 * v5);
        v6[2] = 0;
        v6[3] = 0;
        *v6 = 0;
        v6[1] = 0;
        v5 = a1[1] + 1;
      }
    }
    else {
      a1[1] = a2;
    }
  }
  return result;
}

__int64 nvidia_628ea0(__int64* a1, unsigned __int64 a2)
{
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;

  if (a1[2] >= a2) {
    return 0;
  }
  if (a2 >> 61 != 0) {
    return 6;
  }
  v5 = NvOsAlloc_plt(8 * a2);
  if (v5 == 0) {
    return 6;
  }
  v6 = v5;
  v7 = *a1;
  if (a1[1] != 0) {
    v8 = 0;
    do {
      *(_QWORD*)(v6 + 8 * v8) = *(_QWORD*)(v7 + 8 * v8);
      ++v8;
    } while (v8 < a1[1]);
  }
  NvOsFree_plt(v7);
  *a1 = v6;
  a1[2] = a2;
  return 0;
}

__int64 nvidia_629010(_QWORD* a1)
{
  *a1 = &SdkData_e72d18;
  return SdkRoutine_629ca0();
}

__int64 nvidia_6290b0(__int64 a1, int a2, __int64 a3, int a4, unsigned int* a5,
                      __int64 a6)
{
  __int64 v12;
  int v13;
  int v14;
  __int64 result;
  int v16;
  __int64 v17;
  unsigned int v18;
  unsigned int v19;
  unsigned int v20;
  __int64 v21;
  int v22;
  int v23;
  unsigned int v24;
  __int64 v25;
  int* v26;
  int v27;
  unsigned int v28;
  unsigned int v29;
  __int64 v30;
  int v31;
  char v32;
  __int64 v33;
  __int16 v34;
  int* v35;
  __int16 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  unsigned int v42;
  int v43;

  v12 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 40LL))(a1);
  v13 = a5[3] | a2;
  v14 = *(_DWORD*)(v12 + 220);
  result = 2;
  if (v14 != 0) {
    v16 = 2;
  }
  else {
    v16 = 3;
  }
  if ((v16 & v13) == 0) {
    return result;
  }
  v26 = nullptr;
  v27 = 0;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  v35 = nullptr;
  v36 = 0;
  v17 = NvOsGetCurrentAllocator_plt();
  v18 = *a5;
  v37 = v17;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  v30 = a3;
  v31 = a4;
  v41 = 0xFFFFFFFF00000003LL;
  v19 = *(_DWORD*)(v12 + 352);
  if (v19 <= v18) {
    v19 = v18;
  }
  v20 = a5[4];
  v28 = v19;
  v29 = v20;
  v21 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 24LL))(a1);
  if (*((_BYTE*)a5 + 7) != 1) {
    if (*((_BYTE*)a5 + 6) != 0) {
      v43 = 5;
    }
    else {
      v24 = a5[5];
      v25 = v21;
      result = 2;
      if (v24 == 1) {
        goto LABEL_18;
      }
      if (v24 != 2) {
        return result;
      }
      if ((*((_BYTE*)a5 + 5) & 1) != 0) {
      LABEL_18:
        v43 = 2;
        goto LABEL_19;
      }
      v43 = *(_DWORD*)((*(__int64 (**)(__int64))(*(_QWORD*)v25 + 32LL))(v25) +
                       36);
      if (v43 != 5) {
      LABEL_19:
        v26 = &v43;
        v27 = 1;
        LOBYTE(v34) = *((_BYTE*)a5 + 5);
        v22 = *(_DWORD*)(v12 + 220);
        if (v22 == 0) {
          goto LABEL_10;
        }
        goto LABEL_20;
      }
    }
    if ((*(_BYTE*)(v12 + 32) & 1) == 0) {
      return 2;
    }
    goto LABEL_19;
  }
  if ((*((_BYTE*)a5 + 6) & 1) != 0) {
    return 2;
  }
  v42 = a5[2];
  v43 = 7;
  v26 = &v43;
  v27 = 1;
  v35 = (int*)&v42;
  LOBYTE(v34) = *((_BYTE*)a5 + 5);
  v22 = *(_DWORD*)(v12 + 220);
  if (v22 == 0) {
  LABEL_10:
    v23 = 1;
  LABEL_22:
    HIDWORD(v40) = v23;
    goto LABEL_23;
  }
LABEL_20:
  if (v22 == 1) {
    v23 = 2;
    goto LABEL_22;
  }
LABEL_23:
  if (v14 != 0 && *(_BYTE*)(v12 + 848) == 1) {
    HIDWORD(v41) = *(_DWORD*)(v12 + 852);
  }
  return NvRmMemHandleAllocAttr_plt(0, &v26, a6);
}

__int64 nvidia_6292b0(__int64 a1, unsigned int a2, __int64* a3)
{
  __int64 v4;
  __int64 v5;
  __int64 result;

  v4 = NvRmMemGetSize_plt(a2);
  if (v4 == 0) {
    return 196623;
  }
  v5 = v4;
  result = 0;
  *a3 = v5;
  a3[1] = 0;
  a3[2] = 0;
  a3[3] = 0;
  a3[4] = 0;
  a3[5] = 0;
  a3[6] = 0;
  return result;
}

__int64 nvidia_629320(__int64 a1, _DWORD* a2)
{
  *a2 = 0;
  return 0;
}

__int64 nvidia_629330(_QWORD* a1)
{
  *a1 = &SdkData_e73090;
  return nvidia_629e00_alt1(a1 + 1);
}

__int64 nvidia_629360(__int64 a1, __int64 a2)
{
  __int64 result;

  nvidia_629c70_alt1(a1, 0);
  *(_QWORD*)a1 = SdkData_e89960[0] + 2;
  result = nvidia_644970(a1 + 18, a2);
  *(_DWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_DWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  return result;
}

__int64 nvidia_6293d0(__int64 a1)
{
  nvidia_624080((_QWORD*)(a1 + 88), 0);
  nvidia_629980_alt1(a1 + 32, 0);
  nvidia_629980_alt1(a1 + 64, 0);
  return nvstl_mutex_impl_nvos_644af0(a1 + 18);
}

__int64 nvidia_629580(__int64* a1, _QWORD* a2)
{
  unsigned __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64* v5;
  unsigned __int64 v6;
  unsigned int v7;
  _QWORD* v9;
  __int64 v10;

  v3 = a1[1];
  v2 = a1[2];
  if (v2 < v3 + 1) {
    v4 = a2;
    v5 = a1;
    if (v2 >= 0x10) {
      v6 = 2 * v2;
    }
    else {
      v6 = 16;
    }
    v7 = nvidia_624b80(a1, v6);
    if (v7 != 0) {
      return v7;
    }
    v3 = v5[1];
    a1 = v5;
    a2 = v4;
  }
  v9 = (_QWORD*)(*a1 + 16 * v3);
  v10 = a2[1];
  *v9 = *a2;
  v9[1] = v10;
  ++a1[1];
  return 0;
}

__int64 nvidia_629610(__int64 a1)
{
  __int64 (*v2)(__int64);
  __int64 (*v3)(__int64);
  __int64 result;
  unsigned int v5;
  char v6;

  v5 = 0;
  v2 = (__int64 (*)(__int64))nvidia_62a370_alt1();
  v3 = (__int64 (*)(__int64))nvidia_638de0();
  nvidia_629980_alt1(a1 + 32, 0);
  *(_DWORD*)(a1 + 24) = 1000;
  result = v2(a1 + 32);
  if ((_DWORD)result == 0) {
    nvidia_629980_alt1(a1 + 64, 0);
    *(_DWORD*)(a1 + 56) = 2000;
    result = v3(a1 + 64);
    if ((_DWORD)result == 0) {
      v6 = 1;
      nvrm_gpu_lib_629420(a1, (int*)&v5);
      return v5;
    }
  }
  return result;
}

__int64 NvRmGpuLibListDevices_0(__int64 a1, _QWORD* a2)
{
  __int64 result;
  __int64 v3;

  v3 = a1 + 88;
  result = *(_QWORD*)(a1 + 88);
  *a2 = *(_QWORD*)(v3 + 8);
  return result;
}

__int64 nvidia_6296c0(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  int v7;
  bool v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  unsigned __int64 v13;

  if (a2 == -1 &&
      (*(_DWORD*)((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 32LL))(a1) + 28) ==
           0 ||
       (a2 = *(_DWORD*)((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 32LL))(a1) +
                        28)) == -1)) {
    if (*(_QWORD*)(a1 + 40) != 0) {
      v11 = 24;
    }
    else {
      if (*(_QWORD*)(a1 + 72) == 0) {
        return 11;
      }
      v11 = 56;
    }
    v10 = **(_QWORD**)(a1 + v11 + 8);
    if (v10 != 0) {
      return (*(__int64 (**)(__int64, __int64, __int64, __int64))(
          *(_QWORD*)v10 + 24LL))(v10, a1, a3, a4);
    }
  }
  else if ((a2 & 0x80000000) == 0) {
    v7 = *(_DWORD*)(a1 + 24);
    v8 = __OFSUB__(a2, v7);
    v9 = (unsigned int)(a2 - v7);
    if (((v9 & 0x80000000) != 0LL) != v8 || *(_QWORD*)(a1 + 40) <= v9) {
      v12 = *(_DWORD*)(a1 + 56);
      v8 = __OFSUB__(a2, v12);
      v13 = (unsigned int)(a2 - v12);
      if (((v13 & 0x80000000) != 0LL) == v8 && *(_QWORD*)(a1 + 72) > v13) {
        v10 = *(_QWORD*)(*(_QWORD*)(a1 + 64) + 8 * v13);
        if (v10 != 0) {
          return (*(__int64 (**)(__int64, __int64, __int64, __int64))(
              *(_QWORD*)v10 + 24LL))(v10, a1, a3, a4);
        }
      }
    }
    else {
      v10 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 8 * v9);
      if (v10 != 0) {
        return (*(__int64 (**)(__int64, __int64, __int64, __int64))(
            *(_QWORD*)v10 + 24LL))(v10, a1, a3, a4);
      }
    }
  }
  return 11;
}

char* nvidia_6297f0() { return &SdkData_ea44f8; }

__int64 nvidia_629800(__int64 a1, _BYTE* a2)
{
  __int64 result;

  result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 32LL))(a1);
  *a2 = *(_BYTE*)(result + 32);
  return result;
}

__int64 nvidia_629840(_QWORD* a1)
{
  *a1 = SdkData_e89960[0] + 2;
  nvidia_624080(a1 + 11, 0);
  NvOsFree_plt(a1[11]);
  a1[11] = 0;
  a1[13] = 0;
  nvidia_629980_alt1(a1 + 8, 0);
  NvOsFree_plt(a1[8]);
  a1[8] = 0;
  a1[10] = 0;
  nvidia_629980_alt1(a1 + 4, 0);
  NvOsFree_plt(a1[4]);
  a1[4] = 0;
  a1[6] = 0;
  nn_os_detail_RemoveNativeWaitHolder();
  return SdkRoutine_629ca0_alt1(a1);
}

void nvidia_6298d0(_QWORD* a1)
{
  *a1 = SdkData_e89960[0] + 2;
  nvidia_624080(a1 + 11, 0);
  NvOsFree_plt(a1[11]);
  a1[11] = 0;
  a1[13] = 0;
  nvidia_629980_alt1(a1 + 8, 0);
  NvOsFree_plt(a1[8]);
  a1[8] = 0;
  a1[10] = 0;
  nvidia_629980_alt1(a1 + 4, 0);
  NvOsFree_plt(a1[4]);
  a1[4] = 0;
  a1[6] = 0;
  nn_os_detail_RemoveNativeWaitHolder();
  SdkRoutine_629ca0_alt1(a1);
  nn_os_detail_RemoveNativeWaitHolder();
}

__int64 nvidia_629980(__int64* a1, unsigned __int64 a2)
{
  unsigned int v4;
  __int64 v5;
  unsigned __int64 v6;
  void (***v7)(_QWORD);
  unsigned __int64 v8;
  __int64 v9;
  __int64 i;
  unsigned __int64 v11;
  _QWORD* v12;

  v4 = nvidia_629a80(a1, a2);
  if (v4 == 0) {
  LABEL_6:
    v6 = a1[1];
    while (v6 > a2) {
      v5 = *a1;
      a1[1] = --v6;
      v7 = *(void (****)(_QWORD))(v5 + 8 * v6);
      if (v7 != nullptr) {
        (**v7)(v7);
        NvOsFree_plt(*(_QWORD*)(v5 + 8 * v6));
        *(_QWORD*)(v5 + 8 * v6) = 0;
        goto LABEL_6;
      }
    }
    v8 = v6 - a2;
    if (v6 < a2) {
      v9 = *a1;
      for (i = ((_BYTE)a2 - (_BYTE)v6) & 7; i != 0; --i) {
        *(_QWORD*)(v9 + 8 * v6++) = 0;
      }
      if (v8 <= 0xFFFFFFFFFFFFFFF8LL) {
        v11 = a2 - v6;
        v12 = (_QWORD*)(v9 + 8 * v6 + 32);
        do {
          *(v12 - 4) = 0;
          *(v12 - 3) = 0;
          *(v12 - 2) = 0;
          *(v12 - 1) = 0;
          v11 -= 8LL;
          *v12 = 0;
          v12[1] = 0;
          v12[2] = 0;
          v12[3] = 0;
          v12 += 8;
        } while (v11 != 0);
      }
      a1[1] = a2;
    }
  }
  return v4;
}

__int64 nvidia_629a80(__int64* a1, unsigned __int64 a2)
{
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64* v22;
  _QWORD* v23;
  __int64 v24;
  unsigned __int64 i;
  __int64 v26;
  void (***v27)(_QWORD);

  if (a1[2] >= a2) {
    return 0;
  }
  if (a2 >> 61 != 0) {
    return 6;
  }
  v5 = NvOsAlloc_plt(8 * a2);
  if (v5 == 0) {
    return 6;
  }
  v6 = a1[1];
  v7 = v5;
  if (v6 != 0) {
    v8 = *a1;
    v9 = a1[1] & 7;
    if (v6 >= 8) {
      v11 = (__int64*)(v8 + 32);
      v12 = (_QWORD*)(v5 + 32);
      v13 = 0;
      do {
        *(v12 - 4) = 0;
        v13 -= 8;
        v14 = *(v11 - 4);
        *(v11 - 4) = 0;
        *(v12 - 4) = v14;
        *(v12 - 3) = 0;
        v15 = *(v11 - 3);
        *(v11 - 3) = 0;
        *(v12 - 3) = v15;
        *(v12 - 2) = 0;
        v16 = *(v11 - 2);
        *(v11 - 2) = 0;
        *(v12 - 2) = v16;
        *(v12 - 1) = 0;
        v17 = *(v11 - 1);
        *(v11 - 1) = 0;
        *(v12 - 1) = v17;
        *v12 = 0;
        v18 = *v11;
        *v11 = 0;
        *v12 = v18;
        v12[1] = 0;
        v19 = v11[1];
        v11[1] = 0;
        v12[1] = v19;
        v12[2] = 0;
        v20 = v11[2];
        v11[2] = 0;
        v12[2] = v20;
        v12[3] = 0;
        v21 = v11[3];
        v11[3] = 0;
        v11 += 8;
        v12[3] = v21;
        v12 += 8;
      } while (-(__int64)(v6 & 0xFFFFFFFFFFFFFFF8LL) != v13);
      v10 = -v13;
    }
    else {
      v10 = 0;
    }
    if ((v6 & 7) != 0) {
      v22 = (__int64*)(v8 + 8 * v10);
      v23 = (_QWORD*)(v5 + 8 * v10);
      do {
        *v23 = 0;
        --v9;
        v24 = *v22;
        *v22++ = 0;
        *v23++ = v24;
      } while (v9 != 0);
    }
    for (i = 0; i < v6; ++i) {
      v26 = *a1;
      v27 = *(void (****)(_QWORD))(*a1 + 8 * i);
      if (v27 != nullptr) {
        (**v27)(v27);
        NvOsFree_plt(*(_QWORD*)(v26 + 8 * i));
        v6 = a1[1];
        *(_QWORD*)(v26 + 8 * i) = 0;
      }
    }
  }
  NvOsFree_plt(*a1);
  *a1 = v7;
  a1[2] = a2;
  return 0;
}

__int64 nvidia_629c30(_QWORD* a1, __int64 a2)
{
  __int64 result;

  result = nvidia_629c70_alt1(a1, a2);
  *a1 = &SdkData_e73168;
  return result;
}

__int64 nvidia_629c70(__int64 result, __int64 a2)
{
  *(_WORD*)(result + 16) = 0;
  *(_QWORD*)result = &SdkData_e731e0;
  *(_QWORD*)(result + 8) = a2;
  return result;
}

__int64 nvidia_629c90(__int64 a1)
{
  return (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 24LL))(
      *(_QWORD*)(a1 + 8));
}

__int64 nvidia_629cc0(_QWORD* a1, __int64 a2)
{
  __int64 result;

  result = nvidia_629c70((__int64)a1, a2);
  *a1 = &SdkData_e73230;
  return result;
}

__int64 nvidia_629d00(_QWORD* a1, __int64 a2)
{
  __int64 result;

  result = nvidia_629c70((__int64)a1, a2);
  *a1 = &SdkData_e73288;
  return result;
}

__int64 nvidia_629d40(_QWORD* a1, __int64 a2)
{
  __int64 result;

  result = nvidia_629c70((__int64)a1, a2);
  *a1 = &SdkData_e73340;
  return result;
}

__int64 nvidia_629d80(_QWORD* a1, __int64 a2)
{
  __int64 result;

  result = nvidia_629c70((__int64)a1, a2);
  *a1 = &SdkData_e733a0;
  return result;
}

__int64 nvidia_629dc0(_QWORD* a1, __int64 a2)
{
  __int64 result;

  result = nvidia_629c70((__int64)a1, a2);
  *a1 = &SdkData_e734e0;
  return result;
}

__int64 nvidia_629e00(__int64 a1)
{
  __int64 result;

  result = *(_QWORD*)a1;
  if (result != 0 && (*(_BYTE*)(a1 + 8) & 1) != 0) {
    result = NvOsFree_plt(result);
  }
  *(_QWORD*)a1 = 0;
  *(_BYTE*)(a1 + 8) = 0;
  return result;
}

__int64 nvidia_629e40(__int64* a1, __int64 a2, char a3)
{
  __int64 v4;
  unsigned __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  char v11;
  __int64 v12;
  __int64 v13;

  v4 = *a1;
  if (v4 != 0 && (a1[1] & 1) != 0) {
    NvOsFree_plt(v4);
  }
  *a1 = 0;
  *((_BYTE*)a1 + 8) = 0;
  if (a2 == 0) {
    return 0;
  }
  if ((a3 & 1) != 0) {
    v7 = strlen_plt(a2);
    v8 = v7;
    if (v7 >= 0xFFFFFFFFFFFFFFFFLL) {
      v9 = -1;
    }
    else {
      v9 = v7 + 1;
    }
    v10 = NvOsAlloc_plt(v9);
    if (v10 != 0) {
      v11 = a3 & 1;
      if (v8 >= 0xFFFFFFFFFFFFFFFELL) {
        v12 = -2;
      }
      else {
        v12 = v8;
      }
      v13 = v10;
      memcpy_plt(v10, a2, v12);
      *(_BYTE*)(v13 + v12) = 0;
      *a1 = v13;
      *((_BYTE*)a1 + 8) = v11;
      return 0;
    }
    else {
      return 6;
    }
  }
  else {
    *a1 = a2;
    return 0;
  }
}

__int64 nvidia_629f40(__int64* a1, __int64 a2, __int64 a3)
{
  __int64 v4;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  v4 = *a1;
  if (v4 != 0 && (a1[1] & 1) != 0) {
    NvOsFree_plt(v4);
  }
  *a1 = 0;
  *((_BYTE*)a1 + 8) = 0;
  v7 = strlen_plt(a2);
  v8 = strlen_plt(a3);
  v9 = v7 + v8;
  if (__CFADD__(v7, v8) || v9 == -1) {
    return 17;
  }
  v11 = v8;
  v12 = NvOsAlloc_plt(v9 + 1);
  if (v12 == 0) {
    return 6;
  }
  v13 = v12;
  memcpy_plt(v12, a2, v7);
  memcpy_plt(v13 + v7, a3, v11);
  *(_BYTE*)(v13 + v9) = 0;
  *a1 = v13;
  *((_BYTE*)a1 + 8) = 1;
  return 0;
}

_QWORD* nvidia_62a2a0(_QWORD* result)
{
  _QWORD* v1;
  _QWORD* v2;

  v1 = (_QWORD*)*result;
  if ((_QWORD*)*result != result) {
    do {
      v2 = (_QWORD*)*v1;
      *v1 = 0;
      v1[1] = 0;
      v1 = v2;
    } while (v2 != result);
  }
  *result = result;
  result[1] = result;
  return result;
}

__int64 nvidia_62a2d0(_QWORD* a1, __int64 a2)
{
  __int64 result;

  result = nvidia_629c70((__int64)a1, a2);
  *a1 = &SdkData_e735f8;
  return result;
}

void __attribute__((noreturn)) nvidia_62a310(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, unsigned int a5)
{
  __int64 v6;
  unsigned int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  if (a5 != 0) {
    v6 = a1;
    v7 = a2;
    strerror_plt(a5);
    a1 = v6;
    a2 = v7;
  }
  v8 = NvOsBreakPoint_plt(a1, a2, a4);
  v9 = abort_plt(v8);
  nvidia_62a350_alt1(v9, v10, v11, v12, v13);
}

void __attribute__((noreturn)) nvidia_62a350(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4)
{
  __int64 v4;

  v4 = NvOsBreakPoint_plt(a1, a2, a4);
  abort_plt(v4);
  __udf(0);
}

__int64 (*nvidia_62a370())() { return nvidia_62a380_alt1; }

__int64 nvidia_62a380(__int64* a1)
{
  void* v1;
  void* v4;
  void** v5;
  void* v6;
  _QWORD* v8;
  void (***v9)(_QWORD);
  unsigned int v10;
  unsigned int v11;
  _QWORD* v12;
  int v13;

  v13 = -1;
  v1 = (void*)SdkData_10406b0;
  if (SdkData_10406b0 == 0) {
    return 0;
  }
  sscanf_plt(SdkData_10406b0, "%x", (unsigned int)&v13);
  v4 = SdkData_e74d40;
  if (SdkData_e74d40 == nullptr) {
  LABEL_7:
    if ((unsigned int)strcmp_plt(v1, "") != 0) {
      printf_plt("Bad value for %s\n", "NVRM_GPU_DUMMY");
    }
    return 0;
  }
  v5 = (void**)&SdkData_e74d48;
  while (v13 != *((_DWORD*)v4 + 4) &&
         (unsigned int)strcmp_plt(v1, *((const char**)v4 + 1)) != 0) {
    v6 = *v5++;
    v4 = v6;
    if (v6 == nullptr) {
      goto LABEL_7;
    }
  }
  v8 = (_QWORD*)NvOsAlloc_plt(32);
  if (v8 != nullptr) {
    v8[2] = 0;
    v8[3] = v4;
    v9 = (void (***)(_QWORD))v8;
    *v8 = SdkData_e73650;
    v8[1] = 0;
    v10 = SdkRoutine_629310();
    if (v10 != 0 || (v10 = nvidia_629980(a1, 1u)) != 0) {
      v11 = v10;
      (**v9)(v9);
      NvOsFree_plt(v9);
      return v11;
    }
    v12 = (_QWORD*)*a1;
    if (*v12 != 0) {
      (**(void (***)(_QWORD))*v12)(*v12);
      NvOsFree_plt(*v12);
    }
    *v12 = v9;
    return 0;
  }
  return 6;
}

void nvidia_62a500(_QWORD* a1)
{
  *a1 = SdkData_e89958[0] + 2;
  nvidia_629e00((__int64)(a1 + 1));
  nn_os_detail_RemoveNativeWaitHolder();
}

__int64 nvidia_62aad0(__int64 a1, int* a2, _QWORD* a3)
{
  int v3;
  __int64 result;
  __int64 v5;
  _QWORD* v8;
  _QWORD* v9;
  int v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  int v14;

  v3 = *a2;
  if (*a2 != 0 && v3 != 0x20000 && v3 != 0x10000) {
    return 4;
  }
  if (*a3 != 0) {
    return 8;
  }
  v5 = *(_QWORD*)(a1 + 1136);
  v8 = (_QWORD*)NvOsAlloc_plt(104);
  v9 = v8;
  if (v8 != nullptr) {
    nvidia_628f50(v8);
    v9[5] = 0;
    v9[6] = 0;
    v9[7] = 0;
    v9[8] = 0;
    v9[9] = 0;
    v9[11] = 0;
    v9[12] = 0;
    v9[10] = 0;
    *v9 = nn_os_detail_GetUserWaitNativeHandle_ptr;
    v9[3] = 0x20000;
    v9[4] = 0;
    v10 = *a2;
    if (*a2 == 0) {
      v10 = 0x10000;
    }
    *((_DWORD*)v9 + 12) = 4096;
    *((_DWORD*)v9 + 13) = v10;
    nvidia_62ae40(v9 + 10, 2);
    v11 = v9[10];
    v12 = *((unsigned int*)v9 + 13);
    *((_DWORD*)v9 + 17) = 2;
    *((_DWORD*)v9 + 15) = 2;
    *(_QWORD*)(v11 + 16) = 0x7FFFFFFFFFFFFLL;
    *(_QWORD*)(v11 + 24) = v12;
    *(_DWORD*)(v11 + 8) = 4096;
    *(_QWORD*)v11 = 4096;
    *(_DWORD*)(v11 + 32) = v12;
    *(_QWORD*)(v11 + 40) = 0x8000000000000000LL / v12 - 1;
    v13 = v9[11];
    v9[4] = v11;
    v9[5] = v13;
    *((_BYTE*)v9 + 66) = 1;
    v14 = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 96LL))(v5);
    result = 0;
    *((_DWORD*)v9 + 19) = v14;
  }
  else {
    result = 6;
  }
  *a3 = v9;
  return result;
}

__int64 nvidia_62ada0(__int64* a1, unsigned __int64 a2)
{
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;

  if (a1[2] >= a2) {
    return 0;
  }
  v4 = NvOsAlloc_plt(a2);
  if (v4 == 0) {
    return 6;
  }
  v5 = v4;
  if (a1[1] != 0) {
    v6 = 0;
    do {
      *(_BYTE*)(v4 + v6) = *(_BYTE*)(*a1 + v6);
      ++v6;
    } while (v6 < a1[1]);
  }
  NvOsFree_plt(*a1);
  *a1 = v5;
  a1[2] = a2;
  return 0;
}

__int64 nvidia_62aed0(_QWORD* a1)
{
  *a1 = nn_os_detail_GetUserWaitNativeHandle_ptr;
  nvidia_62ae40_alt1(a1 + 10, 0);
  NvOsFree_plt(a1[10]);
  a1[10] = 0;
  a1[12] = 0;
  return SdkRoutine_629ca0_alt1(a1);
}

void nvidia_62af20(_QWORD* a1)
{
  *a1 = nn_os_detail_GetUserWaitNativeHandle_ptr;
  nvidia_62ae40_alt1(a1 + 10, 0);
  NvOsFree_plt(a1[10]);
  a1[10] = 0;
  a1[12] = 0;
  SdkRoutine_629ca0_alt1(a1);
  nn_os_detail_RemoveNativeWaitHolder();
}

_QWORD* nvidia_62b190(_QWORD* result, _QWORD* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v2 = result[5];
  *a2 = result[4];
  a2[1] = v2;
  v3 = result[6];
  v4 = result[7];
  v5 = result[9];
  a2[4] = result[8];
  a2[5] = v5;
  a2[2] = v3;
  a2[3] = v4;
  return result;
}

__int64 nvidia_62b1c0(__int64* a1, unsigned __int64 a2)
{
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  _QWORD* v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  if (a1[2] >= a2) {
    return 0;
  }
  if (a2 > 0xAAAAAAAAAAAAAAALL) {
    return 6;
  }
  v5 = NvOsAlloc_plt(24 * a2);
  if (v5 == 0) {
    return 6;
  }
  v6 = v5;
  if (a1[1] != 0) {
    v7 = 0;
    v8 = 0;
    do {
      v9 = (_QWORD*)(v5 + v7);
      ++v8;
      v10 = (__int64*)(*a1 + v7);
      v7 += 24;
      v11 = *v10;
      v12 = v10[1];
      v13 = v10[2];
      v9[1] = v12;
      v9[2] = v13;
      *v9 = v11;
    } while (v8 < a1[1]);
  }
  NvOsFree_plt(*a1);
  *a1 = v6;
  a1[2] = a2;
  return 0;
}

_QWORD* nvidia_62b2e0(_QWORD* result, _QWORD* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;

  v2 = result[3];
  v3 = result[4];
  v4 = result[6];
  a2[2] = result[5];
  a2[3] = v4;
  *a2 = v2;
  a2[1] = v3;
  return result;
}

_QWORD* nvidia_62b3e0(_QWORD* result, _QWORD* a2)
{
  __int64 v2;
  __int64 v3;

  v2 = result[3];
  v3 = result[5];
  a2[1] = result[4];
  a2[2] = v3;
  *a2 = v2;
  return result;
}

_QWORD* nvidia_62b440(_QWORD* result, _QWORD* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  v2 = result[5];
  v3 = result[6];
  v4 = result[8];
  a2[2] = result[7];
  a2[3] = v4;
  *a2 = v2;
  a2[1] = v3;
  v5 = result[9];
  v6 = result[10];
  v7 = result[12];
  a2[6] = result[11];
  a2[7] = v7;
  a2[4] = v5;
  a2[5] = v6;
  v8 = result[13];
  v9 = result[14];
  v10 = result[16];
  a2[10] = result[15];
  a2[11] = v10;
  a2[8] = v8;
  a2[9] = v9;
  v11 = result[17];
  v12 = result[18];
  v13 = result[20];
  a2[14] = result[19];
  a2[15] = v13;
  a2[12] = v11;
  a2[13] = v12;
  return result;
}

__int64 nvidia_62b490(__int64 a1)
{
  *(_DWORD*)(a1 + 12) = nvidia_62b660_alt1();
  return nvidia_62b610_alt1(a1 + 8);
}

void nvidia_62b4d0(__int64 a1, _QWORD* a2)
{
  a2[2] = 0;
  a2[3] = 0;
  *a2 = 0;
  a2[1] = 0;
}

__int64 nvidia_62b610(bool* a1)
{
  __int64 result;
  bool v4;
  int v5;
  int v6;

  v5 = 0;
  v6 = 5;
  LODWORD(result) = NvRmMemQueryHeaps_plt(&v6, &v5);
  v4 = (_DWORD)result == 0 && v5 != 0;
  *a1 = v4;
  if ((_DWORD)result == 2) {
    return 0;
  }
  else {
    return (unsigned int)result;
  }
}

__int64 nvidia_62b660() { return (unsigned int)SdkData_10406ac; }

bool nvidia_62b670(int a1) { return a1 == 33 || a1 == 24; }

__int64 nvidia_62b680(_QWORD* a1)
{
  void (***v2)(_QWORD);
  _QWORD* v3;

  v2 = (void (***)(_QWORD))*a1;
  if (v2 != nullptr) {
    (**v2)(v2);
    NvOsFree_plt(*a1);
  }
  *a1 = 0;
  v3 = (_QWORD*)NvOsAlloc_plt(16);
  if (v3 != nullptr) {
    *v3 = SdkData_e899b8[0] + 2;
    v3[1] = 0;
    *a1 = v3;
    return 0;
  }
  else {
    *a1 = 0;
    return 6;
  }
}

__int64 nvidia_62b700(_QWORD* a1)
{
  void (***v2)(_QWORD);
  _QWORD* v3;

  v2 = (void (***)(_QWORD))*a1;
  if (v2 != nullptr) {
    (**v2)(v2);
    NvOsFree_plt(*a1);
  }
  *a1 = 0;
  v3 = (_QWORD*)NvOsAlloc_plt(16);
  if (v3 != nullptr) {
    *v3 = SdkData_e899c0 + 2;
    v3[1] = 0;
    *a1 = v3;
    return 0;
  }
  else {
    *a1 = 0;
    return 6;
  }
}

__int64 nvidia_62b780(__int64 a1)
{
  *(_DWORD*)(a1 + 12) = nvidia_62b660_alt1();
  return 0;
}

__int64 nvidia_62b7b0()
{
  int v0;
  unsigned __int8 v2;

  v0 = nvidia_62b610((bool*)&v2);
  return (v0 == 0) & v2;
}

bool nvidia_62b7f0(int a1) { return a1 == 35; }

__int64 nvidia_62b800(__int64 a1, _QWORD* a2, _QWORD* a3)
{
  *a2 = 0;
  *a3 = 0;
  return 0;
}

__int64 nvidia_62b820(_QWORD* a1)
{
  __int64 result;

  *a1 = SdkData_e898f0 + 2;
  nvidia_623fe0(a1 + 4, 0);
  result = NvOsFree_plt(a1[4]);
  a1[4] = 0;
  a1[6] = 0;
  return result;
}

void nvidia_62b870(__int64 a1, _QWORD* a2) { *a2 = 0x8000D1F10LL; }

void nvidia_62b8b0(_QWORD* a1)
{
  *a1 = SdkData_e898f0 + 2;
  nvidia_623fe0(a1 + 4, 0);
  NvOsFree_plt(a1[4]);
  a1[4] = 0;
  a1[6] = 0;
  nn_os_detail_RemoveNativeWaitHolder();
}

#pragma GCC visibility pop
