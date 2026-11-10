#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 NvRmMemGetSize_plt(_QWORD);
__int64 SdkRoutine_4737c0(__int64, _QWORD*, __int64*, __int64);
__int64 SdkRoutine_4743e0(__int64, _QWORD*, __int64*, __int64);
__int64 memset_plt(void* this_, void*, int, unsigned __int64);
__int64 memset_plt_alt1(void* this_, void*, int) __asm__("memset_plt");
__int64 nn_diag_detail_AbortImpl_plt_856170(_QWORD);
__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 nn_gpu_466e20(_QWORD, _QWORD, _QWORD);
__int64 nn_gpu_sdk_GetGpuAddressSpaceCountMax_plt(_QWORD);
__int64 nn_gpu_sdk_GetQueryableGpuAddressMax_plt(_QWORD);
__int64 nn_gpu_sdk_GetQueryableGpuAddressMin_plt(_QWORD);
__int64 nn_gpu_sdk_GetSdkLibraryIndexMax_plt(void);
__int64 nn_gpu_sdk_GetSdkLibraryIndexMin_plt(_QWORD);
__int64 nn_gpu_sdk_QueryGpuAddressSpaceHandleList_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_gpu_sdk_QueryGpuPageInfo_plt(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                        _QWORD);
__int64 nn_gpu_sdk_QueryGpuSegmentInfo_plt(_QWORD, _QWORD, _QWORD, _QWORD,
                                           _QWORD, _QWORD);
__int64 nn_gpu_sdk_QuerySdkLibraryInfo_plt(_QWORD, _QWORD, _QWORD, _QWORD,
                                           _QWORD);
__int64 nn_gpu_sdk_util_detail_CreateNormalMapping(_QWORD*, _BYTE*, __int64,
                                                   __int64, __int64, char*,
                                                   unsigned int*, __int64*,
                                                   __int64);
__int64 nn_gpu_sdk_util_detail_CreateSparseMapping(_QWORD*, _BYTE*, __int64,
                                                   __int64, int*, unsigned int*,
                                                   _QWORD*, __int64);
__int64 nn_gpu_sdk_util_detail_InvalidateMappings(__int64 result, _QWORD*,
                                                  unsigned __int8,
                                                  unsigned __int64,
                                                  unsigned __int64, int,
                                                  _QWORD*);
__int64 nn_gpu_sdk_util_detail_InvalidateMappings_alt1(
    __int64 result, __int64, unsigned __int8, unsigned __int64,
    unsigned __int64, __int64,
    __int64) __asm__("nn_gpu_sdk_util_detail_InvalidateMappings");
__int64 nn_gpu_sdk_util_detail_PollForJobs(__int64, __int64);
__int64 nn_gpu_sdk_util_detail_WaitForJobs(__int64, __int64, __int64);
__int64 nn_os_CloseNativeHandle_plt(_QWORD);
__int64 nn_os_FinalizeEvent_plt(_QWORD);
__int64 nn_os_InitializeEvent_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_os_SdkConditionVariableType_Wait_plt(_QWORD, _QWORD);
__int64 nn_os_SdkMutexType_Lock_plt(_QWORD);
__int64 nn_os_SdkMutexType_Unlock_plt(_QWORD);
__int64 nn_os_SignalEvent_plt(_QWORD);
__int64 nn_syncpt_sdk_CreateSyncPointEvent_plt(_QWORD);
__int64 nn_syncpt_sdk_DestroySyncPointEvent_plt(_QWORD);
__int64 nn_util_IntrusiveRbTreeImpl_Remove(__int64*, __int64);
__int64 nn_util_IntrusiveRbTreeImpl_RemoveColor(_QWORD);
__int64 nn_util_IntrusiveRbTreeImpl_Remove_alt1(_QWORD, _QWORD) __asm__(
    "nn_util_IntrusiveRbTreeImpl_Remove");
__int64 nn_util_SNPrintf_plt(_QWORD, _QWORD, const char*, ...);
extern _UNKNOWN nn_gpu_impl_user_g_GpuAddressSpaceManager;
extern __int64 nn_gpu_impl_user_g_pGsvUserSession;
extern char SdkData_bc0f71[];
extern char SdkData_f38d58;
extern char SdkData_f38d59;
extern char SdkData_f38d5a;
extern char SdkData_f38d5b;
extern char SdkData_f38d5c;
extern char SdkData_f38d5d;
extern char SdkData_f38d5e;
extern char SdkData_f38d5f;
extern int SdkData_f38d38;
extern int SdkData_f38d60;
extern int SdkData_f38d64;
extern int SdkData_f38d68;
extern int SdkData_f38d6c;
extern int SdkData_f38d70;
extern int SdkData_f38d74;
extern int SdkData_f38d78;
extern int SdkData_f38d7c;
__int64 nn_gpu_impl_user_CreateUserlandDebuggerSession(_DWORD* a1);
__int64 nn_gpu_impl_user_QueryActiveGpuAddressSpaceHandleList(
    unsigned __int64* a1, _DWORD* a2, unsigned __int64 a3);
__int64 nn_gpu_sdk_DumpSdkLibraryList(void* this_, __int64 a2, __int64 a3,
                                      unsigned __int64 a4);
unsigned __int64 nn_gpu_sdk_DumpGpuSegmentList(void* this_);
unsigned __int64 nn_gpu_sdk_DumpGpuMemoryMap(__int64 a1, __int64 a2,
                                             __int64 SdkData_bc0f71,
                                             unsigned __int64 a4);
__int64 nn_gpu_472760(_QWORD* a1, _QWORD* a2, __int64 a3, unsigned int* a4);
__int64 nn_gpu_472ae0(__int64 a1, _QWORD* a2, unsigned __int8 a3,
                      unsigned __int64 a4, unsigned __int64 a5);
__int64 nn_gpu_475a40(__int64 result);

__int64 nn_gpu_impl_user_CreateUserlandDebuggerSession(_DWORD* a1)
{
  __int64 v2;
  int v3;
  __int64 result;
  char* v5;
  __int64 v6;

  v5 = (char*)&v6 + 4;
  v6 = (unsigned int)SdkData_f38d38;
  v2 = nn_gpu_466e20(nn_gpu_impl_user_g_pGsvUserSession, &v5, &v6);
  if ((_DWORD)v2 != 0) {
    nn_diag_detail_AbortImpl_plt_856170(v2);
    __udf(0);
  }
  v3 = HIDWORD(v6);
  result = (unsigned int)*a1;
  HIDWORD(v6) = 0;
  *a1 = v3;
  if ((_DWORD)result != 0) {
    nn_os_CloseNativeHandle_plt(result);
    result = HIDWORD(v6);
    if (HIDWORD(v6) != 0) {
      return nn_os_CloseNativeHandle_plt(HIDWORD(v6));
    }
  }
  return result;
}

__int64 nn_gpu_impl_user_QueryActiveGpuAddressSpaceHandleList(
    unsigned __int64* a1, _DWORD* a2, unsigned __int64 a3)
{
  unsigned __int64 v6;

  nn_os_SdkMutexType_Lock_plt(&nn_gpu_impl_user_g_GpuAddressSpaceManager);
  if (a3 != 0) {
    if (SdkData_f38d58 == 1 && SdkData_f38d60 != 0) {
      *a2 = SdkData_f38d60;
      v6 = 1;
      if (a3 <= 1) {
        goto LABEL_35;
      }
    }
    else {
      v6 = 0;
    }
    if (SdkData_f38d59 == 1 && SdkData_f38d64 != 0) {
      a2[v6++] = SdkData_f38d64;
    }
    if (v6 < a3) {
      if (SdkData_f38d5a == 1 && SdkData_f38d68 != 0) {
        a2[v6++] = SdkData_f38d68;
      }
      if (v6 < a3) {
        if (SdkData_f38d5b == 1 && SdkData_f38d6c != 0) {
          a2[v6++] = SdkData_f38d6c;
        }
        if (v6 < a3) {
          if (SdkData_f38d5c == 1 && SdkData_f38d70 != 0) {
            a2[v6++] = SdkData_f38d70;
          }
          if (v6 < a3) {
            if (SdkData_f38d5d == 1 && SdkData_f38d74 != 0) {
              a2[v6++] = SdkData_f38d74;
            }
            if (v6 < a3) {
              if (SdkData_f38d5e == 1 && SdkData_f38d78 != 0) {
                a2[v6++] = SdkData_f38d78;
              }
              if (v6 < a3 && (SdkData_f38d5f & 1) != 0 && SdkData_f38d7c != 0) {
                a2[v6++] = SdkData_f38d7c;
              }
            }
          }
        }
      }
    }
  }
  else {
    v6 = 0;
  }
LABEL_35:
  *a1 = v6;
  return nn_os_SdkMutexType_Unlock_plt(
      &nn_gpu_impl_user_g_GpuAddressSpaceManager);
}

__int64 nn_gpu_sdk_DumpSdkLibraryList(void* this_, __int64 a2, __int64 a3,
                                      unsigned __int64 a4)
{
  __int64 v4;
  unsigned int v5;
  __int64 result;
  unsigned int v7;
  __int64 v8;
  _BYTE* v9;
  int v10;
  __int64 v11;
  unsigned __int64 v12;
  struct {
    _QWORD v13[2];
    __int64 v14;
    __int64 v15;
    __int64 v16;
    __int64 v17;
    __int64 v18;
    __int64 v19;
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
    _BYTE v44[8];
    __int64 v45;
    __int64 v46;
    char gap288_[8];
    __int64 v47;
    __int64 v48;
    __int64 v49;
    __int64 v50;
    char gap328_[8];
    __int64 v51;
    __int64 v52;
    char gap352_[8];
    __int64 v53;
    __int64 v54;
    __int64 v55;
    __int64 v56;
    char gap392_[8];
    __int64 v57;
    __int64 v58;
    char gap416_[8];
    __int64 v59;
    __int64 v60;
    __int64 v61;
    __int64 v62;
    char gap456_[8];
    __int64 v63;
    __int64 v64;
    char gap480_[8];
    __int64 v65;
    __int64 v66;
    __int64 v67;
    __int64 v68;
    char gap520_[8];
    __int64 v69;
    __int64 v70;
    char gap544_[8];
    __int64 v71;
    __int64 v72;
    __int64 v73;
    __int64 v74;
    char gap584_[8];
    __int64 v75;
    __int64 v76;
    char gap608_[8];
    __int64 v77;
    __int64 v78;
    __int64 v79;
    __int64 v80;
    char gap648_[8];
    __int64 v81;
    __int64 v82;
    char gap672_[8];
    __int64 v83;
    __int64 v84;
    __int64 v85;
    __int64 v86;
    char gap712_[8];
    __int64 v87;
    __int64 v88;
    char gap736_[8];
    __int64 v89;
    __int64 v90;
    __int64 v91;
    __int64 v92;
    char gap776_[8];
    __int64 v93;
    __int64 v94;
    char gap800_[8];
    __int64 v95;
    __int64 v96;
    __int64 v97;
    __int64 v98;
    char gap840_[8];
    __int64 v99;
    __int64 v100;
    char gap864_[8];
    __int64 v101;
    __int64 v102;
    __int64 v103;
    __int64 v104;
    char gap904_[8];
    __int64 v105;
    __int64 v106;
    char gap928_[8];
    __int64 v107;
    __int64 v108;
    __int64 v109;
    __int64 v110;
    char gap968_[8];
    __int64 v111;
    __int64 v112;
    char gap992_[8];
    __int64 v113;
    __int64 v114;
    __int64 v115;
    __int64 v116;
    char gap1032_[8];
    __int64 v117;
    __int64 v118;
    char gap1056_[8];
    __int64 v119;
    __int64 v120;
    __int64 v121;
    __int64 v122;
    char gap1096_[8];
    __int64 v123;
    __int64 v124;
    char gap1120_[8];
    __int64 v125;
    __int64 v126;
    __int64 v127;
    __int64 v128;
    char gap1160_[8];
    __int64 v129;
    __int64 v130;
    char gap1184_[8];
    __int64 v131;
    __int64 v132;
    __int64 v133;
    __int64 v134;
    char gap1224_[8];
    __int64 v135;
    __int64 v136;
    char gap1248_[8];
    __int64 v137;
    __int64 v138;
    __int64 v139;
    __int64 v140;
    char gap1288_[8];
    __int64 v141;
    __int64 v142;
    char gap1312_[8];
    __int64 v143;
    __int64 v144;
    __int64 v145;
    __int64 v146;
    char gap1352_[8];
    __int64 v147;
    __int64 v148;
    char gap1376_[8];
    __int64 v149;
    __int64 v150;
    __int64 v151;
    __int64 v152;
    char gap1416_[8];
    __int64 v153;
    __int64 v154;
    char gap1440_[8];
    __int64 v155;
    __int64 v156;
    __int64 v157;
    __int64 v158;
    char gap1480_[8];
    __int64 v159;
    __int64 v160;
    char gap1504_[8];
    __int64 v161;
    __int64 v162;
    __int64 v163;
    __int64 v164;
    char gap1544_[8];
    __int64 v165;
    __int64 v166;
    char gap1568_[8];
    __int64 v167;
    __int64 v168;
    __int64 v169;
    __int64 v170;
    char gap1608_[8];
    __int64 v171;
    __int64 v172;
    char gap1632_[8];
    __int64 v173;
    __int64 v174;
    __int64 v175;
    __int64 v176;
    char gap1672_[8];
    __int64 v177;
    __int64 v178;
    char gap1696_[8];
    __int64 v179;
    __int64 v180;
    __int64 v181;
    __int64 v182;
    char gap1736_[8];
    __int64 v183;
    __int64 v184;
    char gap1760_[8];
    __int64 v185;
    __int64 v186;
    __int64 v187;
    __int64 v188;
    char gap1800_[8];
    __int64 v189;
    __int64 v190;
    char gap1824_[8];
    __int64 v191;
    __int64 v192;
    __int64 v193;
    __int64 v194;
    char gap1864_[8];
    __int64 v195;
    __int64 v196;
    char gap1888_[8];
    __int64 v197;
    __int64 v198;
    __int64 v199;
    __int64 v200;
    char gap1928_[8];
    __int64 v201;
    __int64 v202;
    char gap1952_[8];
    __int64 v203;
    __int64 v204;
    __int64 v205;
    __int64 v206;
    char gap1992_[8];
    __int64 v207;
    __int64 v208;
    char gap2016_[8];
    __int64 v209;
    __int64 v210;
    __int64 v211;
    __int64 v212;
    char gap2056_[8];
    __int64 v213;
    __int64 v214;
    char gap2080_[8];
    __int64 v215;
    __int64 v216;
    __int64 v217;
    __int64 v218;
    char gap2120_[8];
    __int64 v219;
    __int64 v220;
    char gap2144_[8];
    __int64 v221;
    __int64 v222;
    __int64 v223;
    __int64 v224;
    char gap2184_[8];
    __int64 v225;
    __int64 v226;
    char gap2208_[8];
    __int64 v227;
    __int64 v228;
    __int64 v229;
    __int64 v230;
    char gap2248_[8];
    __int64 v231;
    __int64 v232;
    char gap2272_[8];
    __int64 v233;
    __int64 v234;
    __int64 v235;
    __int64 v236;
  } v13_;

  v4 = memset_plt((void*)v13_.v44, nullptr, 2048, a4);
  v13_.v45 = 0;
  v13_.v46 = 0;
  v13_.v47 = 0;
  v13_.v48 = 0;
  v13_.v49 = 0;
  v13_.v50 = 0;
  v13_.v51 = 0;
  v13_.v52 = 0;
  v13_.v53 = 0;
  v13_.v54 = 0;
  v13_.v55 = 0;
  v13_.v56 = 0;
  v13_.v57 = 0;
  v13_.v58 = 0;
  v13_.v61 = 0;
  v13_.v62 = 0;
  v13_.v59 = 0;
  v13_.v60 = 0;
  v13_.v63 = 0;
  v13_.v64 = 0;
  v13_.v65 = 0;
  v13_.v66 = 0;
  v13_.v67 = 0;
  v13_.v68 = 0;
  v13_.v69 = 0;
  v13_.v70 = 0;
  v13_.v71 = 0;
  v13_.v72 = 0;
  v13_.v73 = 0;
  v13_.v74 = 0;
  v13_.v75 = 0;
  v13_.v76 = 0;
  v13_.v77 = 0;
  v13_.v78 = 0;
  v13_.v79 = 0;
  v13_.v80 = 0;
  v13_.v82 = 0;
  v13_.v81 = 0;
  v13_.v86 = 0;
  v13_.v85 = 0;
  v13_.v84 = 0;
  v13_.v83 = 0;
  v13_.v88 = 0;
  v13_.v87 = 0;
  v13_.v92 = 0;
  v13_.v91 = 0;
  v13_.v90 = 0;
  v13_.v89 = 0;
  v13_.v94 = 0;
  v13_.v93 = 0;
  v13_.v98 = 0;
  v13_.v97 = 0;
  v13_.v96 = 0;
  v13_.v95 = 0;
  v13_.v100 = 0;
  v13_.v99 = 0;
  v13_.v104 = 0;
  v13_.v103 = 0;
  v13_.v102 = 0;
  v13_.v101 = 0;
  v13_.v106 = 0;
  v13_.v105 = 0;
  v13_.v110 = 0;
  v13_.v109 = 0;
  v13_.v108 = 0;
  v13_.v107 = 0;
  v13_.v112 = 0;
  v13_.v111 = 0;
  v13_.v116 = 0;
  v13_.v115 = 0;
  v13_.v114 = 0;
  v13_.v113 = 0;
  v13_.v118 = 0;
  v13_.v117 = 0;
  v13_.v122 = 0;
  v13_.v121 = 0;
  v13_.v120 = 0;
  v13_.v119 = 0;
  v13_.v124 = 0;
  v13_.v123 = 0;
  v13_.v128 = 0;
  v13_.v127 = 0;
  v13_.v126 = 0;
  v13_.v125 = 0;
  v13_.v130 = 0;
  v13_.v129 = 0;
  v13_.v134 = 0;
  v13_.v133 = 0;
  v13_.v132 = 0;
  v13_.v131 = 0;
  v13_.v136 = 0;
  v13_.v135 = 0;
  v13_.v140 = 0;
  v13_.v139 = 0;
  v13_.v138 = 0;
  v13_.v137 = 0;
  v13_.v142 = 0;
  v13_.v141 = 0;
  v13_.v146 = 0;
  v13_.v145 = 0;
  v13_.v144 = 0;
  v13_.v143 = 0;
  v13_.v148 = 0;
  v13_.v147 = 0;
  v13_.v152 = 0;
  v13_.v151 = 0;
  v13_.v150 = 0;
  v13_.v149 = 0;
  v13_.v154 = 0;
  v13_.v153 = 0;
  v13_.v158 = 0;
  v13_.v157 = 0;
  v13_.v156 = 0;
  v13_.v155 = 0;
  v13_.v160 = 0;
  v13_.v159 = 0;
  v13_.v164 = 0;
  v13_.v163 = 0;
  v13_.v162 = 0;
  v13_.v161 = 0;
  v13_.v166 = 0;
  v13_.v165 = 0;
  v13_.v170 = 0;
  v13_.v169 = 0;
  v13_.v168 = 0;
  v13_.v167 = 0;
  v13_.v172 = 0;
  v13_.v171 = 0;
  v13_.v176 = 0;
  v13_.v175 = 0;
  v13_.v174 = 0;
  v13_.v173 = 0;
  v13_.v178 = 0;
  v13_.v177 = 0;
  v13_.v182 = 0;
  v13_.v181 = 0;
  v13_.v180 = 0;
  v13_.v179 = 0;
  v13_.v184 = 0;
  v13_.v183 = 0;
  v13_.v188 = 0;
  v13_.v187 = 0;
  v13_.v186 = 0;
  v13_.v185 = 0;
  v13_.v190 = 0;
  v13_.v189 = 0;
  v13_.v194 = 0;
  v13_.v193 = 0;
  v13_.v192 = 0;
  v13_.v191 = 0;
  v13_.v196 = 0;
  v13_.v195 = 0;
  v13_.v200 = 0;
  v13_.v199 = 0;
  v13_.v198 = 0;
  v13_.v197 = 0;
  v13_.v202 = 0;
  v13_.v201 = 0;
  v13_.v206 = 0;
  v13_.v205 = 0;
  v13_.v204 = 0;
  v13_.v203 = 0;
  v13_.v208 = 0;
  v13_.v207 = 0;
  v13_.v212 = 0;
  v13_.v211 = 0;
  v13_.v210 = 0;
  v13_.v209 = 0;
  v13_.v214 = 0;
  v13_.v213 = 0;
  v13_.v218 = 0;
  v13_.v217 = 0;
  v13_.v216 = 0;
  v13_.v215 = 0;
  v13_.v220 = 0;
  v13_.v219 = 0;
  v13_.v224 = 0;
  v13_.v223 = 0;
  v13_.v222 = 0;
  v13_.v221 = 0;
  v13_.v226 = 0;
  v13_.v225 = 0;
  v13_.v230 = 0;
  v13_.v229 = 0;
  v13_.v228 = 0;
  v13_.v227 = 0;
  v13_.v232 = 0;
  v13_.v231 = 0;
  v13_.v236 = 0;
  v13_.v235 = 0;
  v13_.v234 = 0;
  v13_.v233 = 0;
  v13_.v42 = 0;
  v13_.v43 = 0;
  v13_.v40 = 0;
  v13_.v41 = 0;
  v13_.v38 = 0;
  v13_.v39 = 0;
  v13_.v36 = 0;
  v13_.v37 = 0;
  v13_.v34 = 0;
  v13_.v35 = 0;
  v13_.v32 = 0;
  v13_.v33 = 0;
  v13_.v30 = 0;
  v13_.v31 = 0;
  v13_.v28 = 0;
  v13_.v29 = 0;
  v13_.v26 = 0;
  v13_.v27 = 0;
  v13_.v24 = 0;
  v13_.v25 = 0;
  v13_.v22 = 0;
  v13_.v23 = 0;
  v13_.v20 = 0;
  v13_.v21 = 0;
  v13_.v18 = 0;
  v13_.v19 = 0;
  v13_.v16 = 0;
  v13_.v17 = 0;
  v13_.v14 = 0;
  v13_.v15 = 0;
  v13_.v13[0] = 0;
  v13_.v13[1] = 0;
  v5 = nn_gpu_sdk_GetSdkLibraryIndexMin_plt(v4);
  result = nn_gpu_sdk_GetSdkLibraryIndexMax_plt();
  if ((unsigned __int8)v5 <= (unsigned int)(unsigned __int8)result) {
    v7 = result;
    v12 = 0;
    result = nn_gpu_sdk_QuerySdkLibraryInfo_plt(&v12, v5, (unsigned int)result,
                                                v13_.v44, 32);
    if ((_DWORD)result == 0 && v12 != 0) {
      v8 = 0;
      while (1) {
        v9 = &v13_.v44[64 * v8];
        v13_.v42 = 0;
        v13_.v43 = 0;
        v13_.v40 = 0;
        v13_.v41 = 0;
        v13_.v38 = 0;
        v13_.v39 = 0;
        v10 = (unsigned __int8)v9[16];
        v13_.v36 = 0;
        v13_.v37 = 0;
        v13_.v34 = 0;
        v13_.v35 = 0;
        v13_.v32 = 0;
        v13_.v33 = 0;
        v13_.v30 = 0;
        v13_.v31 = 0;
        v13_.v28 = 0;
        v13_.v29 = 0;
        v13_.v26 = 0;
        v13_.v27 = 0;
        v13_.v24 = 0;
        v13_.v25 = 0;
        v13_.v22 = 0;
        v13_.v23 = 0;
        v13_.v20 = 0;
        v13_.v21 = 0;
        v13_.v18 = 0;
        v13_.v19 = 0;
        v13_.v16 = 0;
        v13_.v17 = 0;
        v13_.v14 = 0;
        v13_.v15 = 0;
        v13_.v13[0] = 0;
        v13_.v13[1] = 0;
        result =
            nn_util_SNPrintf_plt(v13_.v13, 256, "lib=%d: '%.*s'", v10, 8, v9);
        if ((unsigned int)result >= 0xFF) {
          v11 = 255;
        }
        else {
          v11 = (unsigned int)result;
        }
        if (v9[17] != 0) {
          if ((unsigned int)result <= 0xFE) {
            result = nn_util_SNPrintf_plt((char*)v13_.v13 + v11, 256 - v11,
                                          " (builtin)");
          }
        }
        else if ((unsigned int)result <= 0xFE) {
          result = nn_util_SNPrintf_plt((char*)v13_.v13 + v11, 256 - v11,
                                        " version=0x%llX sdkLabel=0x%llX",
                                        *((_QWORD*)v9 + 1), *((_QWORD*)v9 + 3));
        }
        if (++v8 >= v12) {
          if (v12 < 0x20) {
            break;
          }
          if ((unsigned __int8)v13_.v232 >= (unsigned int)(unsigned __int8)v7) {
            break;
          }
          v12 = 0;
          result = nn_gpu_sdk_QuerySdkLibraryInfo_plt(
              &v12, (unsigned int)(unsigned __int8)v13_.v232 + 1, v7, v13_.v44,
              32);
          if ((_DWORD)result != 0) {
            break;
          }
          v8 = 0;
          if (v12 == 0) {
            break;
          }
        }
      }
    }
  }
  return result;
}

unsigned __int64 nn_gpu_sdk_DumpGpuSegmentList(void* this_)
{
  unsigned __int64 result;
  __int64 v3;
  unsigned int v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  __int64* v9;
  unsigned __int64 i;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;
  const char* v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned int v19;
  unsigned __int64 v20;
  _QWORD v21[16];
  unsigned __int64 v22;
  struct {
    _QWORD v23[2];
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
    __int64 v52;
    __int64 v53;
    _DWORD v54[10];
    __int64 v55;
    char gap472_[1936];
    __int64 v56;
    __int64 v57;
  } v23_;

  memset(v21, 0, sizeof(v21));
  v20 = nn_gpu_sdk_GetGpuAddressSpaceCountMax_plt(this_);
  result = nn_gpu_sdk_QueryGpuAddressSpaceHandleList_plt(&v20, v21, 32);
  v23_.v54[0] = result;
  if ((_DWORD)result != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(v23_.v54);
  }
  if (v20 != 0) {
    v3 = 0;
    do {
      v18 = v3;
      v4 = *((_DWORD*)v21 + v3);
      memset_plt_alt1((void*)v23_.v54, nullptr, 2048);
      v5 = nn_gpu_sdk_GetQueryableGpuAddressMin_plt(v4);
      v19 = v4;
      result = nn_gpu_sdk_GetQueryableGpuAddressMax_plt(v4);
      if (v5 > result) {
        goto LABEL_4;
      }
      v6 = v5;
      v7 = result;
      v23_.v52 = 0;
      v23_.v53 = 0;
      v23_.v50 = 0;
      v23_.v51 = 0;
      v23_.v48 = 0;
      v23_.v49 = 0;
      v23_.v46 = 0;
      v23_.v47 = 0;
      v23_.v44 = 0;
      v23_.v45 = 0;
      v23_.v42 = 0;
      v23_.v43 = 0;
      v23_.v40 = 0;
      v23_.v41 = 0;
      v23_.v38 = 0;
      v23_.v39 = 0;
      v23_.v36 = 0;
      v23_.v37 = 0;
      v23_.v34 = 0;
      v23_.v35 = 0;
      v23_.v32 = 0;
      v23_.v33 = 0;
      v23_.v30 = 0;
      v23_.v31 = 0;
      v23_.v28 = 0;
      v23_.v29 = 0;
      v23_.v26 = 0;
      v23_.v27 = 0;
      v23_.v24 = 0;
      v23_.v25 = 0;
      v23_.v23[0] = 0;
      v23_.v23[1] = 0;
      while (1) {
        v22 = 0;
        v8 = v7;
        result =
            nn_gpu_sdk_QueryGpuSegmentInfo_plt(&v22, v19, v6, v7, v23_.v54, 32);
        if ((_DWORD)result != 0 || v22 == 0) {
          break;
        }
        v9 = &v23_.v55;
        for (i = 0; i < v22; ++i) {
          v11 = *(v9 - 5);
          v12 = *(v9 - 4);
          v23_.v52 = 0;
          v23_.v53 = 0;
          v23_.v50 = 0;
          v23_.v51 = 0;
          v23_.v48 = 0;
          v23_.v49 = 0;
          v23_.v46 = 0;
          v23_.v47 = 0;
          v23_.v44 = 0;
          v23_.v45 = 0;
          v23_.v42 = 0;
          v23_.v43 = 0;
          v23_.v40 = 0;
          v23_.v41 = 0;
          v23_.v38 = 0;
          v23_.v39 = 0;
          v23_.v36 = 0;
          v23_.v37 = 0;
          v23_.v34 = 0;
          v23_.v35 = 0;
          v23_.v32 = 0;
          v23_.v33 = 0;
          v23_.v30 = 0;
          v23_.v31 = 0;
          v23_.v28 = 0;
          v23_.v29 = 0;
          v23_.v26 = 0;
          v23_.v27 = 0;
          v23_.v24 = 0;
          v23_.v25 = 0;
          v23_.v23[0] = 0;
          v23_.v23[1] = 0;
          result = nn_util_SNPrintf_plt(v23_.v23, 256, "gpu=[% 10llX-% 10llX]",
                                        v11, v11 + v12 - 1);
          v13 = *((unsigned __int8*)v9 - 24);
          if ((unsigned int)result >= 0xFF) {
            v14 = 255;
          }
          else {
            v14 = (unsigned int)result;
          }
          if (*((unsigned __int8*)v9 - 24) > 0x10u) {
            if (v13 == 17) {
              v15 = " sparse64K";
              if ((unsigned int)result > 0xFE) {
                goto LABEL_10;
              }
              goto LABEL_28;
            }
            if (v13 != 128) {
              goto LABEL_23;
            }
            v15 = " system";
            if ((unsigned int)result > 0xFE) {
              goto LABEL_10;
            }
          }
          else {
            if (*((_BYTE*)v9 - 24) == 0) {
              v15 = " empty";
              if ((unsigned int)result > 0xFE) {
                goto LABEL_10;
              }
              goto LABEL_28;
            }
            if (v13 != 16) {
            LABEL_23:
              v15 = " unknown";
              if ((unsigned int)result > 0xFE) {
                goto LABEL_10;
              }
              goto LABEL_28;
            }
            v15 = " normal";
            if ((unsigned int)result > 0xFE) {
              goto LABEL_10;
            }
          }
        LABEL_28:
          result = nn_util_SNPrintf_plt((char*)v23_.v23 + v14, 256 - v14, v15);
          v16 = (int)result;
          if ((v14 ^ 0xFFuLL) < (int)result) {
            v16 = v14 ^ 0xFF;
          }
          v17 = v16 + v14;
          if (v17 <= 0xFE) {
            result = nn_util_SNPrintf_plt(
                (char*)v23_.v23 + v17, 256 - v17,
                " lib=%d sL=0x%llX uL=(0x%llX,0x%llX)",
                *((unsigned __int8*)v9 - 23), *v9, v9[1], v9[2]);
          }
        LABEL_10:
          v9 += 8;
        }
        if (v22 >= 0x20 && v23_.v57 != 0 && !__CFADD__(v23_.v57, v23_.v56)) {
          v6 = v23_.v56 + v23_.v57;
          v7 = v8;
          if (v23_.v56 + v23_.v57 <= v8) {
            continue;
          }
        }
        break;
      }
    LABEL_4:
      v3 = v18 + 1;
    } while (v18 + 1 < v20);
  }
  return result;
}

unsigned __int64 nn_gpu_sdk_DumpGpuMemoryMap(__int64 a1, __int64 a2,
                                             __int64 SdkData_bc0f71,
                                             unsigned __int64 a4)
{
  __int64 v4;
  unsigned __int64 result;
  __int64 v6;
  unsigned int v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  int* v10;
  unsigned __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  char* v17;
  const char* v18;
  const char* v19;
  const char* v20;
  const char* v21;
  const char* v22;
  const char* v23;
  __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  char* v30;
  const char* v31;
  const char* v32;
  const char* v33;
  const char* v34;
  const char* v35;
  const char* v36;
  __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  __int64 v43;
  char* v44;
  const char* v45;
  const char* v46;
  const char* v47;
  const char* v48;
  const char* v49;
  const char* v50;
  __int64 v51;
  unsigned __int64 v52;
  __int64 v53;
  __int64 v54;
  char* v55;
  const char* v56;
  const char* v57;
  const char* v58;
  const char* v59;
  const char* v60;
  const char* v61;
  __int64 v62;
  unsigned __int64 v63;
  __int64 v64;
  __int64 v65;
  char* v66;
  const char* v67;
  const char* v68;
  const char* v69;
  const char* v70;
  const char* v71;
  const char* v72;
  __int64 v73;
  unsigned __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  unsigned __int64 v78;
  __int64 v79;
  __int64 v80;
  unsigned __int64 v81;
  unsigned int v82;
  struct {
    _QWORD v83[2];
    __int64 v84;
    __int64 v85;
    __int64 v86;
    __int64 v87;
    __int64 v88;
    __int64 v89;
    __int64 v90;
    __int64 v91;
    __int64 v92;
    __int64 v93;
    __int64 v94;
    __int64 v95;
    __int64 v96;
    __int64 v97;
    __int64 v98;
    __int64 v99;
    __int64 v100;
    __int64 v101;
    __int64 v102;
    __int64 v103;
    __int64 v104;
    __int64 v105;
    __int64 v106;
    __int64 v107;
    __int64 v108;
    __int64 v109;
    __int64 v110;
    __int64 v111;
    __int64 v112;
    __int64 v113;
    _BYTE v114[20];
    int v115;
    char gap336_[1960];
    __int64 v116;
    __int64 v117;
    char gap2312_[48];
    unsigned __int64 v118;
    _QWORD v119[16];
    _QWORD v120[2];
  } v83_;

  v4 = memset_plt((void*)v83_.v114, nullptr, 2048, a4);
  v83_.v112 = 0;
  v83_.v113 = 0;
  v83_.v110 = 0;
  v83_.v111 = 0;
  v83_.v108 = 0;
  v83_.v109 = 0;
  v83_.v106 = 0;
  v83_.v107 = 0;
  v83_.v104 = 0;
  v83_.v105 = 0;
  v83_.v102 = 0;
  v83_.v103 = 0;
  v83_.v100 = 0;
  v83_.v101 = 0;
  v83_.v98 = 0;
  v83_.v99 = 0;
  v83_.v96 = 0;
  v83_.v97 = 0;
  v83_.v94 = 0;
  v83_.v95 = 0;
  v83_.v92 = 0;
  v83_.v93 = 0;
  v83_.v90 = 0;
  v83_.v91 = 0;
  v83_.v88 = 0;
  v83_.v89 = 0;
  v83_.v86 = 0;
  v83_.v87 = 0;
  v83_.v84 = 0;
  v83_.v85 = 0;
  v83_.v83[0] = 0;
  v83_.v83[1] = 0;
  memset(v83_.v119, 0, sizeof(v83_.v119));
  v83_.v118 = nn_gpu_sdk_GetGpuAddressSpaceCountMax_plt(v4);
  result =
      nn_gpu_sdk_QueryGpuAddressSpaceHandleList_plt(&v83_.v118, v83_.v119, 32);
  LODWORD(v83_.v120[0]) = result;
  if ((_DWORD)result != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(v83_.v120);
  }
  if (v83_.v118 != 0) {
    v6 = 0;
    do {
      v80 = v6;
      v7 = *((_DWORD*)v83_.v119 + v6);
      v8 = nn_gpu_sdk_GetQueryableGpuAddressMin_plt(v7);
      v82 = v7;
      result = nn_gpu_sdk_GetQueryableGpuAddressMax_plt(v7);
      if (v8 > result) {
        goto LABEL_4;
      }
      v9 = result;
      v81 = result;
      while (1) {
        v83_.v120[0] = 0;
        result = nn_gpu_sdk_QueryGpuPageInfo_plt(v83_.v120, v82, v8, v9,
                                                 v83_.v114, 32);
        if ((_DWORD)result != 0 || v83_.v120[0] == 0) {
          break;
        }
        v10 = &v83_.v115;
        v11 = 0;
        do {
          v12 = *(_QWORD*)(v10 - 5);
          v13 = *((unsigned __int8*)v10 + 12);
          v14 = v12 + *(_QWORD*)(v10 - 3);
          v83_.v112 = 0;
          v83_.v113 = 0;
          v83_.v110 = 0;
          v83_.v111 = 0;
          v83_.v108 = 0;
          v83_.v109 = 0;
          v83_.v106 = 0;
          v83_.v107 = 0;
          v83_.v104 = 0;
          v83_.v105 = 0;
          v83_.v102 = 0;
          v83_.v103 = 0;
          v83_.v100 = 0;
          v83_.v101 = 0;
          v83_.v98 = 0;
          v83_.v99 = 0;
          v83_.v96 = 0;
          v83_.v97 = 0;
          v83_.v94 = 0;
          v83_.v95 = 0;
          v83_.v92 = 0;
          v83_.v93 = 0;
          v83_.v90 = 0;
          v83_.v91 = 0;
          v83_.v88 = 0;
          v83_.v89 = 0;
          v83_.v86 = 0;
          v83_.v87 = 0;
          v83_.v84 = 0;
          v83_.v85 = 0;
          v83_.v83[0] = 0;
          v83_.v83[1] = 0;
          result = nn_util_SNPrintf_plt(v83_.v83, 256, "gpu[% 10llX-% 10llX]",
                                        v12, v14 - 1);
          if (v13 > 79) {
            switch (v13) {
            case 80:
              if ((unsigned int)result <= 0xFE) {
                v42 = (unsigned int)result;
                v43 = 256LL - (unsigned int)result;
                v44 = (char*)v83_.v83 + (unsigned int)result;
                v45 = "P";
                if (*((_BYTE*)v10 + 2) == 0) {
                  v45 = "_";
                }
                if (*((_BYTE*)v10 + 1) != 0) {
                  v46 = "T";
                }
                else {
                  v46 = "X";
                }
                if (*(_BYTE*)v10 != 0) {
                  v47 = "C";
                }
                else {
                  v47 = "_";
                }
                if (*((_BYTE*)v10 - 2) != 0) {
                  v48 = "3";
                }
                else {
                  v48 = "_";
                }
                if (*((_BYTE*)v10 - 3) != 0) {
                  v49 = "C";
                }
                else {
                  v49 = "U";
                }
                if (*((_BYTE*)v10 - 4) != 0) {
                  v50 = "R-";
                }
                else {
                  v50 = "RW";
                }
                LODWORD(v79) = *((unsigned __int8*)v10 - 1);
                result =
                    nn_util_SNPrintf_plt(v44, v43, "%s%s%s%s%s%s kind=%X", v50,
                                         v49, v48, v47, v46, v45, v79);
                v51 = (int)result;
                if (255 - v42 < (unsigned __int64)(int)result) {
                  v51 = 255 - v42;
                }
                v52 = v51 + v42;
                if (v52 <= 0xFE) {
                  result = nn_util_SNPrintf_plt(
                      (char*)v83_.v83 + v52, 256 - v52,
                      " syncptId=%d offset=[%llX-%llX]", v10[4],
                      *(_QWORD*)(v10 + 5),
                      *(_QWORD*)(v10 + 5) + *(_QWORD*)(v10 - 3) - 1LL);
                }
              }
              break;
            case 128:
              if ((unsigned int)result <= 0xFE) {
                v76 = (unsigned int)result;
                result = nn_util_SNPrintf_plt(
                    (char*)v83_.v83 + (unsigned int)result,
                    256LL - (unsigned int)result, "------- ------");
                v77 = (int)result;
                if (255 - v76 < (unsigned __int64)(int)result) {
                  v77 = 255 - v76;
                }
                v78 = v77 + v76;
                if (v78 <= 0xFE) {
                  result = nn_util_SNPrintf_plt(
                      (char*)v83_.v83 + v78, 256 - v78, " no-mapping(sparse)");
                }
              }
              break;
            case 254:
              if ((unsigned int)result <= 0xFE) {
                v28 = (unsigned int)result;
                v29 = 256LL - (unsigned int)result;
                v30 = (char*)v83_.v83 + (unsigned int)result;
                v31 = "P";
                if (*((_BYTE*)v10 + 2) == 0) {
                  v31 = "_";
                }
                if (*((_BYTE*)v10 + 1) != 0) {
                  v32 = "T";
                }
                else {
                  v32 = "X";
                }
                if (*(_BYTE*)v10 != 0) {
                  v33 = "C";
                }
                else {
                  v33 = "_";
                }
                if (*((_BYTE*)v10 - 2) != 0) {
                  v34 = "3";
                }
                else {
                  v34 = "_";
                }
                if (*((_BYTE*)v10 - 3) != 0) {
                  v35 = "C";
                }
                else {
                  v35 = "U";
                }
                if (*((_BYTE*)v10 - 4) != 0) {
                  v36 = "R-";
                }
                else {
                  v36 = "RW";
                }
                LODWORD(v79) = *((unsigned __int8*)v10 - 1);
                result =
                    nn_util_SNPrintf_plt(v30, v29, "%s%s%s%s%s%s kind=%X", v36,
                                         v35, v34, v33, v32, v31, v79);
                v37 = (int)result;
                if (255 - v28 < (unsigned __int64)(int)result) {
                  v37 = 255 - v28;
                }
                v38 = v37 + v28;
                if (v38 <= 0xFE) {
                  result = nn_util_SNPrintf_plt(
                      (char*)v83_.v83 + v38, 256 - v38, " pa[% 9llX-% 9llX]",
                      *(_QWORD*)(v10 + 5),
                      *(_QWORD*)(v10 + 5) + *(_QWORD*)(v10 - 3) - 1LL);
                }
              }
              break;
            default:
              goto LABEL_94;
            }
          }
          else if (v13 != 0) {
            if (v13 != 1) {
              if (v13 == 2) {
                if ((unsigned int)result > 0xFE) {
                  goto LABEL_10;
                }
                v15 = (unsigned int)result;
                v16 = 256LL - (unsigned int)result;
                v17 = (char*)v83_.v83 + (unsigned int)result;
                v18 = "P";
                if (*((_BYTE*)v10 + 2) == 0) {
                  v18 = "_";
                }
                if (*((_BYTE*)v10 + 1) != 0) {
                  v19 = "T";
                }
                else {
                  v19 = "X";
                }
                if (*(_BYTE*)v10 != 0) {
                  v20 = "C";
                }
                else {
                  v20 = "_";
                }
                if (*((_BYTE*)v10 - 2) != 0) {
                  v21 = "3";
                }
                else {
                  v21 = "_";
                }
                if (*((_BYTE*)v10 - 3) != 0) {
                  v22 = "C";
                }
                else {
                  v22 = "U";
                }
                if (*((_BYTE*)v10 - 4) != 0) {
                  v23 = "R-";
                }
                else {
                  v23 = "RW";
                }
                LODWORD(v79) = *((unsigned __int8*)v10 - 1);
                result =
                    nn_util_SNPrintf_plt(v17, v16, "%s%s%s%s%s%s kind=%X", v23,
                                         v22, v21, v20, v19, v18, v79);
                v24 = (int)result;
                if (255 - v15 < (unsigned __int64)(int)result) {
                  v24 = 255 - v15;
                }
                v25 = v24 + v15;
                if (v25 <= 0xFE) {
                  result = nn_util_SNPrintf_plt((char*)v83_.v83 + v25,
                                                256 - v25, " external-memory");
                  v26 = (int)result;
                  if (255 - v25 < (int)result) {
                    v26 = 255 - v25;
                  }
                  v25 += v26;
                }
                v27 = (unsigned int)v10[4];
                if ((_DWORD)v27 != 0) {
                  if (v25 <= 0xFE) {
                    result = nn_util_SNPrintf_plt(
                        (char*)v83_.v83 + v25, 256 - v25,
                        " hMem=0x%llX offset=[%llX-%llX]", v27,
                        *(_QWORD*)(v10 + 5),
                        *(_QWORD*)(v10 + 5) + *(_QWORD*)(v10 - 3) - 1LL);
                  }
                  goto LABEL_10;
                }
              LABEL_148:
                if (v25 <= 0xFE) {
                  result = nn_util_SNPrintf_plt((char*)v83_.v83 + v25,
                                                256 - v25, " hMem=n/a");
                }
                goto LABEL_10;
              }
            LABEL_94:
              if ((unsigned int)result <= 0xFE) {
                v53 = (unsigned int)result;
                v54 = 256LL - (unsigned int)result;
                v55 = (char*)v83_.v83 + (unsigned int)result;
                v56 = "P";
                if (*((_BYTE*)v10 + 2) == 0) {
                  v56 = "_";
                }
                if (*((_BYTE*)v10 + 1) != 0) {
                  v57 = "T";
                }
                else {
                  v57 = "X";
                }
                if (*(_BYTE*)v10 != 0) {
                  v58 = "C";
                }
                else {
                  v58 = "_";
                }
                if (*((_BYTE*)v10 - 2) != 0) {
                  v59 = "3";
                }
                else {
                  v59 = "_";
                }
                if (*((_BYTE*)v10 - 3) != 0) {
                  v60 = "C";
                }
                else {
                  v60 = "U";
                }
                if (*((_BYTE*)v10 - 4) != 0) {
                  v61 = "R-";
                }
                else {
                  v61 = "RW";
                }
                LODWORD(v79) = *((unsigned __int8*)v10 - 1);
                result =
                    nn_util_SNPrintf_plt(v55, v54, "%s%s%s%s%s%s kind=%X", v61,
                                         v60, v59, v58, v57, v56, v79);
                v62 = (int)result;
                if (255 - v53 < (unsigned __int64)(int)result) {
                  v62 = 255 - v53;
                }
                v63 = v62 + v53;
                if (v63 <= 0xFE) {
                  result = nn_util_SNPrintf_plt((char*)v83_.v83 + v63,
                                                256 - v63, " unknown memory");
                }
              }
              goto LABEL_10;
            }
            if ((unsigned int)result > 0xFE) {
              goto LABEL_10;
            }
            v64 = (unsigned int)result;
            v65 = 256LL - (unsigned int)result;
            v66 = (char*)v83_.v83 + (unsigned int)result;
            v67 = "P";
            if (*((_BYTE*)v10 + 2) == 0) {
              v67 = "_";
            }
            if (*((_BYTE*)v10 + 1) != 0) {
              v68 = "T";
            }
            else {
              v68 = "X";
            }
            if (*(_BYTE*)v10 != 0) {
              v69 = "C";
            }
            else {
              v69 = "_";
            }
            if (*((_BYTE*)v10 - 2) != 0) {
              v70 = "3";
            }
            else {
              v70 = "_";
            }
            if (*((_BYTE*)v10 - 3) != 0) {
              v71 = "C";
            }
            else {
              v71 = "U";
            }
            if (*((_BYTE*)v10 - 4) != 0) {
              v72 = "R-";
            }
            else {
              v72 = "RW";
            }
            LODWORD(v79) = *((unsigned __int8*)v10 - 1);
            result = nn_util_SNPrintf_plt(v66, v65, "%s%s%s%s%s%s kind=%X", v72,
                                          v71, v70, v69, v68, v67, v79);
            v73 = (int)result;
            if (255 - v64 < (unsigned __int64)(int)result) {
              v73 = 255 - v64;
            }
            v25 = v73 + v64;
            if (v25 <= 0xFE) {
              result = nn_util_SNPrintf_plt(
                  (char*)v83_.v83 + v25, 256 - v25, " cpu=[%llX-%llX]",
                  *(_QWORD*)(v10 + 5),
                  *(_QWORD*)(v10 + 5) + *(_QWORD*)(v10 - 3) - 1LL);
              v74 = (int)result;
              if (255 - v25 < (int)result) {
                v74 = 255 - v25;
              }
              v25 += v74;
            }
            v75 = (unsigned int)v10[4];
            if ((_DWORD)v75 == 0) {
              goto LABEL_148;
            }
            if (v25 <= 0xFE) {
              result = nn_util_SNPrintf_plt((char*)v83_.v83 + v25, 256 - v25,
                                            " hMem=0x%llX", v75);
            }
          }
          else if ((unsigned int)result <= 0xFE) {
            v39 = (unsigned int)result;
            result = nn_util_SNPrintf_plt(
                (char*)v83_.v83 + (unsigned int)result,
                256LL - (unsigned int)result, "------- ------");
            v40 = (int)result;
            if (255 - v39 < (unsigned __int64)(int)result) {
              v40 = 255 - v39;
            }
            v41 = v40 + v39;
            if (v41 <= 0xFE) {
              result = nn_util_SNPrintf_plt((char*)v83_.v83 + v41, 256 - v41,
                                            " no-mapping");
            }
          }
        LABEL_10:
          ++v11;
          v10 += 16;
        } while (v11 < v83_.v120[0]);
        if (v83_.v120[0] >= 0x20u && v83_.v117 != 0 &&
            !__CFADD__(v83_.v117, v83_.v116)) {
          v8 = v83_.v116 + v83_.v117;
          v9 = v81;
          if (v83_.v116 + v83_.v117 <= v81) {
            continue;
          }
        }
        break;
      }
    LABEL_4:
      v6 = v80 + 1;
    } while (v80 + 1 < v83_.v118);
  }
  return result;
}

__int64 nn_gpu_472760(_QWORD* a1, _QWORD* a2, __int64 a3, unsigned int* a4)
{
  __int64 v4;
  __int64 v5;
  __int64 result;
  __int64* v11;
  _QWORD* v12;
  _QWORD* v13;
  __int64 v14;
  __int64* v15;
  __int64 v16;
  _QWORD* v17;
  char v18;
  unsigned __int64 v19;
  __int64 v20;
  int v21;
  unsigned int v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64* v26;
  __int64 v27;
  _BYTE v28[4];
  __int64 v29;
  __int64* v30;
  struct {
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
  } v31_;

  v4 = a1[1];
  v5 = *(_QWORD*)(a3 + 24);
  if (v5 == 0) {
    v5 = NvRmMemGetSize_plt(*a4);
    if (v5 == 0) {
      return 10;
    }
  }
  if ((v5 & 0xFFF) != 0) {
    return 10;
  }
  v11 = *(__int64**)(a3 + 32);
  v29 = 0;
  nn_os_SdkMutexType_Lock_plt(a1 + 25);
  v12 = (_QWORD*)a1[26];
  v31_.v33 = 0;
  v31_.v34 = 0;
  v31_.v31 = 0;
  v31_.v32 = 0;
  v30 = v11;
  if (v12 == nullptr) {
    goto LABEL_18;
  }
  v13 = nullptr;
  do {
    while (1) {
      v14 = (__int64)(v12 - 1);
      v15 = (__int64*)*(v12 - 1);
      if (v30 >= v15) {
        break;
      }
      v13 = v12;
      v12 = (_QWORD*)*v12;
      if (v12 == nullptr) {
        goto LABEL_11;
      }
    }
    if (v30 == v15) {
      goto LABEL_13;
    }
    v12 = (_QWORD*)v12[1];
  } while (v12 != nullptr);
LABEL_11:
  if (v13 == nullptr) {
    goto LABEL_18;
  }
  v14 = (__int64)(v13 - 1);
LABEL_13:
  if ((unsigned __int64)v11 < *(_QWORD*)(v14 + 40) ||
      *(_BYTE*)(v14 + 49) != 1) {
  LABEL_18:
    nn_os_SdkMutexType_Unlock_plt(a1 + 25);
    if ((*(_BYTE*)a3 & 1) == 0) {
      goto LABEL_19;
    }
    v18 = 0;
  LABEL_21:
    v19 = *(_QWORD*)(a3 + 32);
    v31_.v35 = 0;
    v31_.v36 = 0;
    v31_.v33 = 0;
    v31_.v34 = 0;
    v31_.v31 = 0;
    v31_.v32 = 0;
    v30 = nullptr;
    nn_os_InitializeEvent_plt(&v31_.v31, 1, 0);
    nn_gpu_sdk_util_detail_InvalidateMappings((__int64)(a1 + 2), a1 + 6, 1u,
                                              v19, v5 + v19 - 1, 0, &v30);
    nn_gpu_sdk_util_detail_InvalidateMappings((__int64)(a1 + 2), a1 + 6, 2u,
                                              v19, v5 + v19 - 1, 0, &v30);
    nn_os_FinalizeEvent_plt(&v31_.v31);
    v28[0] = 0;
    if ((v18 & 1) != 0) {
      v31_.v44 = 0;
      v31_.v45 = 0;
      v31_.v42 = 0;
      v31_.v43 = 0;
      v31_.v40 = 0;
      v31_.v41 = 0;
      v31_.v38 = 0;
      v31_.v39 = 0;
      v31_.v36 = 0;
      v31_.v37 = 0;
      v31_.v34 = 0;
      v31_.v35 = 0;
      v31_.v32 = 0;
      v31_.v33 = 0;
      v30 = nullptr;
      v31_.v31 = 0;
      if ((unsigned int)nn_syncpt_sdk_CreateSyncPointEvent_plt(&v30) != 0) {
        nn_gpu_sdk_util_detail_PollForJobs((__int64)(a1 + 2),
                                           (__int64)(a1 + 6));
      }
      else {
        nn_gpu_sdk_util_detail_WaitForJobs((__int64)(a1 + 2), (__int64)(a1 + 6),
                                           (__int64)&v30);
        nn_syncpt_sdk_DestroySyncPointEvent_plt(&v30);
      }
      v30 = nullptr;
      result = nn_gpu_sdk_util_detail_CreateSparseMapping(
          &v30, v28, (__int64)(a1 + 2), v4, (int*)a3, a4, &v29, v5);
      if ((_DWORD)result != 0) {
        goto LABEL_32;
      }
      v20 = *(__int64*)((char*)((__int64*)0x48LL) + (_QWORD)v30);
      SdkRoutine_4743e0((__int64)(a1 + 6), nullptr, v30 + 4, (__int64)a1);
      v21 = v28[0];
      if (v28[0] == *(unsigned __int8*)(a3 + 4)) {
      LABEL_27:
        if (v21 != *(unsigned __int8*)(a3 + 6)) {
          *(_WORD*)(a3 + 6) = -1;
        }
        result = 0;
        *a2 = v20;
      LABEL_32:
        v17 = (_QWORD*)v29;
        if (v29 == 0) {
          return result;
        }
        goto LABEL_33;
      }
    LABEL_26:
      *(_WORD*)(a3 + 4) = -1;
      goto LABEL_27;
    }
  LABEL_24:
    v30 = nullptr;
    result = nn_gpu_sdk_util_detail_CreateNormalMapping(
        &v30, v28, (__int64)(a1 + 2), v4, (__int64)(a1 + 10), (char*)a3, a4,
        &v29, v5);
    if ((_DWORD)result != 0) {
      goto LABEL_32;
    }
    v20 = *(__int64*)((char*)((__int64*)0x50LL) + (_QWORD)v30);
    SdkRoutine_4737c0((__int64)(a1 + 6), nullptr, v30 + 5, (__int64)a1);
    v21 = v28[0];
    if (v28[0] == *(unsigned __int8*)(a3 + 4)) {
      goto LABEL_27;
    }
    goto LABEL_26;
  }
  v16 = *(_QWORD*)(v14 + 56);
  v29 = v14;
  *(_QWORD*)(v14 + 56) = v16 + 1;
  nn_os_SdkMutexType_Unlock_plt(a1 + 25);
  v17 = (_QWORD*)v29;
  v18 = *(_BYTE*)(v29 + 48);
  if ((*(_BYTE*)a3 & 1) != 0) {
    goto LABEL_21;
  }
  if ((*(_BYTE*)(v29 + 48) & 1) == 0) {
  LABEL_19:
    v28[0] = 0;
    goto LABEL_24;
  }
  LODWORD(result) = 9;
LABEL_33:
  v22 = result;
  v23 = nn_os_SdkMutexType_Lock_plt(a1 + 25);
  v24 = v17[7];
  if (v24 == 0) {
    nn_diag_detail_AbortImpl_plt_856170(v23);
  }
  v25 = v24 - 1;
  v17[7] = v25;
  if (v25 == 0) {
    nn_util_IntrusiveRbTreeImpl_Remove(a1 + 26, (__int64)(v17 + 1));
    v26 = (__int64*)v17[8];
    v27 = v17[9];
    v30 = v26;
    v31_.v31 = v27;
    if (v26 != nullptr) {
      ((void (*)(__int64*, _QWORD*))v26)(&v31_.v31, v17);
    }
  }
  nn_os_SdkMutexType_Unlock_plt(a1 + 25);
  return v22;
}

__int64 nn_gpu_472ae0(__int64 a1, _QWORD* a2, unsigned __int8 a3,
                      unsigned __int64 a4, unsigned __int64 a5)
{
  __int64 v10;
  __int128 v11;
  _QWORD* v12;
  _QWORD* v13;
  unsigned __int64 v14;
  _QWORD* v15;
  unsigned __int64 v16;
  unsigned int v18;
  int v20;

  v10 = nn_os_SdkMutexType_Lock_plt(a1);
  if (a4 <= a5 && *(_QWORD*)(a1 + 16) != 0) {
    do {
      *((_QWORD*)&v11 + 1) = a3;
      *(_QWORD*)&v11 = a4;
      v12 = nullptr;
      v13 = *(_QWORD**)(a1 + 16);
      v14 = v11 >> 12;
      do {
        while (1) {
          v15 = v13 - 1;
          v16 = *(v13 - 1);
          if (v14 >= v16) {
            break;
          }
          v12 = v13;
          v13 = (_QWORD*)*v13;
          if (v13 == nullptr) {
            goto LABEL_8;
          }
        }
        if (v14 == v16) {
          goto LABEL_10;
        }
        v13 = (_QWORD*)v13[1];
      } while (v13 != nullptr);
    LABEL_8:
      if (v12 == nullptr) {
        break;
      }
      v14 = *(v12 - 1);
      v15 = v12 - 1;
    LABEL_10:
      if (a3 != (unsigned __int8)(v14 >> 52) || v15[5] > a5) {
        break;
      }
      if ((v15[7] & 1) != 0) {
        v20 = *((_DWORD*)v15 + 15);
        *((_DWORD*)v15 + 15) = v20 + 1;
        if (v20 == -1) {
          nn_diag_detail_AbortImpl_plt_856170(v10);
          __udf(0);
        }
        *a2 = v15;
        v18 = 1;
        goto LABEL_19;
      }
      a4 = (*v15 << 12) + 4096LL;
    } while (((*v15 << 12) | 0xFFFuLL) < a5 && a4 <= a5);
  }
  v18 = 0;
LABEL_19:
  nn_os_SdkMutexType_Unlock_plt(a1);
  return v18;
}

__int64 nn_gpu_475a40(__int64 result)
{
  unsigned __int64 v1;
  unsigned __int64 v2;
  _QWORD* v3;
  __int64 v4;
  _QWORD* v5;
  _QWORD** v6;
  __int64 v7;
  __int128 v8;
  _QWORD* v9;
  _QWORD* v10;
  unsigned __int64 v11;
  void (*v12)(_QWORD, _QWORD);
  _QWORD* v13;
  int v14;
  _QWORD* v15;
  __int64 v16;
  int v17;
  __int64 v18;
  int v19;
  int v20;
  _QWORD* v21;
  _QWORD* v22;
  _QWORD* v23;
  __int64 v24;
  _QWORD* v25;
  int v26;
  _QWORD* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  _QWORD* v31;
  __int64 v32;
  _QWORD* v33;
  _QWORD* v34;
  _QWORD* v35;
  _QWORD* v36;
  void (*v37)(_QWORD*, _QWORD*);
  __int64 v38;
  _QWORD* v39;
  __int64 v40;
  __int64* v41;
  __int64* v42;
  __int64 v43;
  unsigned __int64 v44;
  _QWORD v45[2];
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;

  v1 = *(_QWORD*)(result + 88);
  v2 = *(_QWORD*)(result + 96);
  v3 = (_QWORD*)result;
  if (v1 <= v2) {
    v4 = nn_os_SdkMutexType_Lock_plt(result + 48);
    v5 = (_QWORD*)v3[8];
    if (v5 != nullptr) {
      v6 = (_QWORD**)(v3 + 9);
      while (1) {
        v7 = v1;
        while (1) {
          *((_QWORD*)&v8 + 1) = 1;
          *(_QWORD*)&v8 = v7;
          v9 = nullptr;
          v46 = 0;
          v47 = 0;
          v45[0] = 0;
          v45[1] = 0;
          v10 = v5;
          v44 = v8 >> 12;
          v11 = v44;
          do {
            while (1) {
              v13 = v10 - 1;
              v12 = (void (*)(_QWORD, _QWORD)) * (v10 - 1);
              if (v44 >= (unsigned __int64)v12) {
                break;
              }
              v9 = v10;
              v10 = (_QWORD*)*v10;
              if (v10 == nullptr) {
                goto LABEL_10;
              }
            }
            if ((void (*)(_QWORD, _QWORD))v44 == v12) {
              goto LABEL_12;
            }
            v10 = (_QWORD*)v10[1];
          } while (v10 != nullptr);
        LABEL_10:
          if (v9 == nullptr) {
            goto LABEL_66;
          }
          v11 = *(v9 - 1);
          v13 = v9 - 1;
        LABEL_12:
          if ((v11 & 0xFF0000000000000LL) != 0x10000000000000LL ||
              v13[5] > v2) {
            goto LABEL_66;
          }
          if ((v13[7] & 1) != 0) {
            break;
          }
          v7 = (*v13 << 12) + 4096LL;
          if (((*v13 << 12) | 0xFFFuLL) >= v2) {
            goto LABEL_66;
          }
        }
        v14 = *((_DWORD*)v13 + 15);
        *((_DWORD*)v13 + 15) = v14 + 1;
        if (v14 == -1) {
          goto LABEL_71;
        }
        nn_os_SdkMutexType_Unlock_plt(v3 + 6);
        nn_os_SdkMutexType_Lock_plt(v3 + 6);
        v15 = (_QWORD*)v3[7];
        if (v15 != nullptr && *((_BYTE*)v13 + 56) == 1) {
          while (v15[6] != 0) {
            nn_os_SdkConditionVariableType_Wait_plt(v15 + 3, v3 + 6);
          }
          v16 = v15[5] - 1LL;
          ++v15[4];
          v15[5] = v16;
        }
        v17 = *((_DWORD*)v13 + 15);
        *((_BYTE*)v13 + 56) = 0;
        *((_DWORD*)v13 + 15) = v17 - 1;
        nn_os_SdkMutexType_Unlock_plt(v3 + 6);
        v18 = nn_os_SdkMutexType_Lock_plt(v3 + 6);
        v19 = *((_DWORD*)v13 + 15);
        if (v19 == 0) {
          v4 = nn_diag_detail_AbortImpl_plt_856170(v18);
        LABEL_71:
          nn_diag_detail_AbortImpl_plt_856170(v4);
          __udf(0);
        }
        v20 = v19 - 1;
        *((_DWORD*)v13 + 15) = v20;
        if (v20 == 0 && v13[8] == 0) {
          break;
        }
      LABEL_65:
        nn_os_SdkMutexType_Unlock_plt(v3 + 6);
        v4 = nn_os_SdkMutexType_Lock_plt(v3 + 6);
        v5 = (_QWORD*)v3[8];
        if (v5 == nullptr) {
          goto LABEL_66;
        }
      }
      v21 = (_QWORD*)v13[2];
      v22 = v13 + 1;
      if (v13[1] != 0) {
        if (v21 != nullptr) {
          do {
            v23 = v21;
            v21 = (_QWORD*)*v21;
          } while (v21 != nullptr);
          v24 = v23[1];
          v25 = (_QWORD*)v23[2];
          v26 = *((_DWORD*)v23 + 6);
          if (v24 != 0) {
            *(_QWORD*)(v24 + 16) = v25;
          }
          if (v25 != nullptr) {
            if ((_QWORD*)*v25 == v23) {
              *v25 = v24;
            }
            else {
              v25[1] = v24;
            }
          }
          else {
            v3[8] = v24;
          }
          v28 = v13[2];
          v29 = v13[3];
          v30 = v13[4];
          *v23 = *v22;
          v23[1] = v28;
          v23[2] = v29;
          v23[3] = v30;
          v31 = (_QWORD*)v13[3];
          if (v31 != nullptr) {
            if ((_QWORD*)*v31 == v22) {
              *v31 = v23;
            }
            else {
              v31[1] = v23;
            }
          }
          else {
            v3[8] = v23;
          }
          *(_QWORD*)(v13[1] + 16LL) = v23;
          v32 = v13[2];
          if (v32 != 0) {
            *(_QWORD*)(v32 + 16) = v23;
          }
          goto LABEL_52;
        }
        v27 = (_QWORD*)v13[3];
        v26 = *((_DWORD*)v13 + 8);
        v21 = (_QWORD*)v13[1];
      }
      else {
        v27 = (_QWORD*)v13[3];
        v26 = *((_DWORD*)v13 + 8);
        if (v21 == nullptr) {
        LABEL_38:
          if (v27 != nullptr) {
            if ((_QWORD*)*v27 == v22) {
              *v27 = v21;
            }
            else {
              v27[1] = v21;
            }
          }
          else {
            v3[8] = v21;
          }
        LABEL_52:
          if (v26 == 0) {
            nn_util_IntrusiveRbTreeImpl_RemoveColor(v3 + 8);
          }
          v33 = *v6;
          if (*v6 != nullptr) {
            v34 = nullptr;
            v35 = v3 + 9;
            do {
              while (1) {
                v36 = (_QWORD*)v33[6];
                if ((_QWORD*)*v33 == v13) {
                  break;
                }
                v35 = v33 + 6;
                v33 = (_QWORD*)v33[6];
                if (v36 == nullptr) {
                  goto LABEL_61;
                }
              }
              *v35 = v36;
              v33[6] = v34;
              v34 = v33;
              v33 = v36;
            } while (v36 != nullptr);
          }
          else {
            v34 = nullptr;
          }
        LABEL_61:
          v37 = (void (*)(_QWORD*, _QWORD*))v13[9];
          v38 = v13[10];
          v44 = (unsigned __int64)v37;
          v45[0] = v38;
          if (v37 != nullptr) {
            v37(v45, v13);
          }
          if (v34 != nullptr) {
            do {
              v39 = (_QWORD*)v34[6];
              v34[6] = 0;
              *v34 = 0;
              nn_os_SignalEvent_plt(v34 + 1);
              v34 = v39;
            } while (v39 != nullptr);
          }
          goto LABEL_65;
        }
      }
      v21[2] = v27;
      goto LABEL_38;
    }
  LABEL_66:
    nn_os_SdkMutexType_Unlock_plt(v3 + 6);
    v48 = 0;
    v49 = 0;
    v46 = 0;
    v47 = 0;
    v45[0] = 0;
    v45[1] = 0;
    v44 = 0;
    nn_os_InitializeEvent_plt(v45, 1, 0);
    nn_gpu_sdk_util_detail_InvalidateMappings_alt1(
        (__int64)(v3 + 2), (__int64)(v3 + 6), 1u, v1, v2, 0, (__int64)&v44);
    nn_gpu_sdk_util_detail_InvalidateMappings_alt1(
        (__int64)(v3 + 2), (__int64)(v3 + 6), 2u, v1, v2, 0, (__int64)&v44);
    result = nn_os_FinalizeEvent_plt(v45);
    v1 = v3[11];
    v2 = v3[12];
  }
  if (v1 <= v2) {
    result = nn_util_IntrusiveRbTreeImpl_Remove_alt1(v3 + 24, v3 + 18);
    v40 = v3[16];
    v41 = (__int64*)v3[17];
    v42 = v3 + 16;
    v43 = *v41;
    *(_QWORD*)(v40 + 8) = v41;
    *v41 = *v42;
    *(_QWORD*)(v43 + 8) = v42;
    *(v42 - 1) = 0;
    *v42 = v43;
    *(v42 - 3) = -1;
    *(v42 - 2) = 0;
    *(v42 - 5) = -1;
    *(v42 - 4) = 0;
  }
  return result;
}

#pragma GCC visibility pop
