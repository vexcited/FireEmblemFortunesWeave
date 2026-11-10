#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_c46f00(_QWORD* result, unsigned __int64);
__int64 GameRoutine_5fc1f0(_QWORD);
__int64 GameRoutine_634d80(_QWORD, _QWORD);
__int64 GameRoutine_a934d0(_QWORD, _QWORD);
__int64 GameRoutine_b86ad0(_QWORD);
__int64 GameRoutine_bdff40(_QWORD, _QWORD);
__int64 GameRoutine_c3f7a0(_QWORD);
__int64 GameRoutine_c4a5a0(_QWORD);
__int64 Manager_c47290(_QWORD);
__int64 Manager_c473c0(_QWORD, _QWORD);
__int64 Manager_c475a0(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 (*GameData_1fbf780[])();
extern __int64 (*GameData_1fd20c0[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_g_frame_clock;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_c47250(_QWORD);
void __attribute__((noreturn)) GameRoutine_c47270(_QWORD);
void __attribute__((noreturn)) GameRoutine_c47790(_QWORD);
__int64 wld_GfxLoader_loadFile(__int64 a1, unsigned __int8* a2, unsigned int a3,
                               __int64 a4, char a5);
__int64 GfxLoader_c46500(__int64 a1, __int64 a2);
__int64 wld_GfxLoader_loadSunPrecomputeData_lambda0_Invoke(__int64 result,
                                                           __int64 a2);
__int64 wld_GfxLoader_loadCloudTexture_lambda0_Invoke(__int64 result,
                                                      __int64* a2);
__int64 wld_GfxLoader_loadFogTexture_lambda0_Invoke(__int64 result,
                                                    __int64* a2);
_QWORD* wld_GfxLoader_loadFile_lambda0_Clone(__int64 a1);
__int64 wld_GfxLoader_loadFile_lambda0_Invoke(__int64 a1, __int64* a2);
_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
__attribute__((swiftcall)) void GameRoutine_b34420(PSEUDO_X8, _QWORD*, __int64,
                                                   unsigned __int64, __int64,
                                                   unsigned __int64, __int64);
__int64* GameRoutine_6b87d0(__int64* result, unsigned __int64);
__int64* GameRoutine_c4a480(__int64* result, __int64*);
__int64* SpineModel_64dde0(__int64*, __int64, unsigned __int64);
__int64 GameRoutine_1a09ce0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0a680(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_2020(unsigned __int16*, _WORD*);
__int64 GameRoutine_21c0(unsigned int*, unsigned int*);
__int64 GameRoutine_2360(unsigned __int64*, unsigned __int64*);
__int64 GameRoutine_5fc1f0_alt1(__int64) __asm__("GameRoutine_5fc1f0");
__int64 GameRoutine_b87160(__int64 result, char, unsigned int);
__int64 GameRoutine_c49860(__int64, __int64);
__int64 GameRoutine_c51760(__int64 result);
__int64 GameRoutine_dbf0(unsigned __int8);
__int64 GameStringReads_c05cc0(__int64**, __int64);
__int64 GfxLoader_c44b50(__int64, __int64, unsigned __int64);
__int64 Manager_c445f0(__int64 result, __int64, unsigned __int64, __int64,
                       unsigned __int64);
__int64 Manager_c45700(__int64*, __int64, __int64, __int64, __int64, __int64,
                       unsigned __int64, __int64, __int64, unsigned __int64,
                       __int64, unsigned __int64, __int64, unsigned __int64);
__int64 Manager_c46910(__int64 result);
__int64 Manager_c47290_alt1(__int64 result) __asm__("Manager_c47290");
__int64 Value_2500(__int64*, __int64, __int64);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 memset_alt1(_QWORD, _QWORD, _QWORD) __asm__("memset");
__int64 strlen(_QWORD);
bool GameRoutine_c49640(__int64**, __int64);
char* GameRoutine_60a060(char*, __int64, unsigned __int64);
extern _UNKNOWN* GameData_212ce38;
extern _UNKNOWN GameData_1fd2d60;
extern __int128 GameData_1a82c50;
extern __int64 (*GameData_1fd1ec0[])();
extern __int64 (*GameData_1fd1f40[])();
extern __int64 (*GameData_1fd1fc0[])();
extern __int64 (*GameData_1fd2040[])();
extern __int64* game_g_frame_clock_ptr[3];
extern __int64 fw_memory_g_heap_manager;
extern char GameData_1a9f09e;
unsigned int* game_6b7f00(unsigned int*, unsigned __int64, unsigned int*,
                          __int64, _QWORD*);
void GameRoutine_c47a00(_QWORD*, __int64*);
void __attribute__((noreturn)) GameRoutine_8123d0();
void __attribute__((noreturn)) String_60a1d0();
__int64 GfxLoader_c3f420(__int64** a1, unsigned __int64* a2);
__int64 GfxLoader_c3f900(__int64 a1, __int64 a2);
__int64 wld_GfxLoader_loadFogTexture(__int64 result, __int64 a2, __int64 a3,
                                     __int64 a4, __int64 a5, char a6);
char* wld_GfxLoader_loadSunPrecomputeData(__int64 a1, __int64 a2,
                                          unsigned __int64 a3);
char* wld_GfxLoader_loadDomeLightTexture(__int64 a1, __int64 a2,
                                         unsigned __int64 a3);
char* wld_GfxLoader_loadCloudTexture(__int64 a1, __int64 a2,
                                     unsigned __int64 a3);
__int64* GfxLoader_c45e30(_QWORD* a1, __int64 a2, unsigned __int64 a3,
                          __int64 a4, unsigned __int64 a5);
__int64 GfxLoader_c48320(__int64 result, __int64* a2);
float GfxLoader_c48550(_QWORD* a1, __int64* a2);
__int64 wld_GfxLoader_loadDomeLightTexture_lambda0_Invoke(__int64 a1,
                                                          __int64* a2);
__int64 GfxLoader_c49a80(__int64** a1, __int64* a2);
__int64 GfxLoader_c49e60(__int64** a1, __int64* a2);
_QWORD* GfxLoader_c4a6e0(__int64 a1, _QWORD* a2, _QWORD* a3);
__int64 GfxLoader_c4c940(__int64 a1, char a2);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD, long double) __asm__(
    "nn_mem_StandardAllocator_Free");
void __attribute__((noreturn)) GameRoutine_c47230(void);
_QWORD* GfxLoader_c46f00(_QWORD* result, unsigned __int64 a2);

__int64 GfxLoader_c3f420(__int64** a1, unsigned __int64* a2)
{
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v14;
  unsigned __int64 v15;
  int v16;
  char v17;
  char* v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  char* v22;
  unsigned __int64 v23;
  __int64 result;
  _BOOL4 v26;
  __int64 v27;
  __int64 v28;
  __int64* v29;
  _QWORD* v34;
  __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  char v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  __int64 v47;
  struct {
    unsigned __int64 v48;
    unsigned __int64 v49;
    unsigned __int64 v50;
    __int64 v51;
  } v48_;
  struct {
    unsigned __int64 v52;
    unsigned __int64 v53;
    unsigned __int64 v54;
  } v52_;

  if ((*(_BYTE*)a2 & 1) != 0) {
    fw_text_String_CopyTerminated((__int64*)&v48_.v48, a2[2], a2[1]);
  }
  else {
    v4 = a2[1];
    v48_.v48 = *a2;
    v48_.v49 = v4;
    v48_.v50 = a2[2];
  }
  if ((v48_.v48 & 1) != 0) {
    v5 = v48_.v49;
  }
  else {
    v5 = (unsigned __int64)(unsigned __int8)v48_.v48 >> 1;
  }
  if ((v48_.v48 & 1) != 0 && v48_.v50 != 0) {
    v6 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v6 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v6);
  }
  if (v5 == 0) {
    goto LABEL_50;
  }
  v7 = *a1;
  v48_.v49 = 0;
  v48_.v50 = 0;
  v48_.v48 = 0;
  LOWORD(v52_.v52) = 0;
  GameRoutine_2020((unsigned __int16*)v7, &v52_.v52);
  v8 = (__int16)v52_.v52;
  v9 = fw_memory_g_heap_manager_ptr;
  v10 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, (__int16)v52_.v52, 16, 0);
  memset_alt1(v10, 0, v8);
  Value_2500(*a1, v10, v8);
  GameRoutine_60a060((char*)&v48_.v48, v10, (__int16)v52_.v52);
  v14 = 128;
  if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
    v14 = 56;
  }
  nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v14);
  if ((*(_BYTE*)a2 & 1) != 0) {
    fw_text_String_CopyTerminated((__int64*)&v52_.v52, a2[2], a2[1]);
  }
  else {
    v15 = a2[1];
    v52_.v52 = *a2;
    v52_.v53 = v15;
    v52_.v54 = a2[2];
  }
  v16 = v48_.v48 & 1;
  v17 = v52_.v52;
  if (v16 != 0) {
    v18 = (char*)v48_.v50;
  }
  else {
    v18 = (char*)&v48_.v48 + 1;
  }
  v19 = v52_.v54;
  if ((v48_.v48 & 1) != 0) {
    v20 = v48_.v49;
  }
  else {
    v20 = (unsigned __int64)(unsigned __int8)v48_.v48 >> 1;
  }
  if ((v52_.v52 & 1) != 0) {
    v21 = v52_.v53;
  }
  else {
    v21 = (unsigned __int64)(unsigned __int8)v52_.v52 >> 1;
  }
  if ((v52_.v52 & 1) != 0) {
    v22 = (char*)v52_.v54;
  }
  else {
    v22 = (char*)&v52_.v52 + 1;
  }
  if (v20 >= v21) {
    v23 = v21;
  }
  else {
    v23 = v20;
  }
  result = memcmp(v22, v18, v23);
  v26 = (_DWORD)result == 0 && v21 == v20;
  if ((v17 & 1) != 0 && v19 != 0) {
    v27 = 128;
    if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
      v27 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v27);
    v16 = v48_.v48 & 1;
  }
  if (v16 != 0 && v48_.v50 != 0) {
    v28 = 128;
    if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
      v28 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v28);
  }
  if (v26) {
  LABEL_50:
    v29 = *a1;
    v52_.v52 = 0;
    result = GameRoutine_2360((unsigned __int64*)v29, &v52_.v52);
    v34 = (_QWORD*)a2[3];
    v35 = v34[1];
    v36 = 0xAAAAAAAAAAAAAAABLL * ((v35 - *v34) >> 3);
    if (v52_.v52 <= v36) {
      if (v52_.v52 < v36) {
        v37 = *v34 + 24 * v52_.v52;
        if (v37 != v35) {
          v38 = v34[1];
          v39 = fw_memory_g_heap_manager_ptr;
          do {
            v40 = *(_BYTE*)(v38 - 24);
            v38 -= 24;
            if ((v40 & 1) != 0 && *(_QWORD*)(v35 - 8) != 0) {
              if (*(_QWORD*)(*(_QWORD*)v39 + 200LL) != 0) {
                v41 = 128;
              }
              else {
                v41 = 56;
              }
              result = nn_mem_StandardAllocator_Free(*(_QWORD*)v39 + v41);
            }
            v35 = v38;
          } while (v38 != v37);
        }
        v34[1] = v37;
      }
    }
    else {
      result = (__int64)GameRoutine_6b87d0((__int64*)a2[3], v52_.v52 - v36);
    }
    v42 = *(_QWORD*)(a2[3] + 8) - *(_QWORD*)a2[3];
    if (v42 != 0) {
      v43 = 0;
      v44 = fw_memory_g_heap_manager_ptr;
      v45 = 0xAAAAAAAAAAAAAAABLL * (v42 >> 3);
      do {
        v46 = *(_QWORD*)a2[3];
        LOWORD(v48_.v48) = 0;
        v48_.v51 = v46 + v43;
        result = GameStringReads_c05cc0(a1, (__int64)&v48_.v48);
        if ((v48_.v48 & 1) != 0 && v48_.v50 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v44 + 200LL) != 0) {
            v47 = 128;
          }
          else {
            v47 = 56;
          }
          result = nn_mem_StandardAllocator_Free(*(_QWORD*)v44 + v47);
        }
        --v45;
        v43 += 24;
      } while (v45 != 0);
    }
  }
  return result;
}

__int64 GfxLoader_c3f900(__int64 a1, __int64 a2)
{
  __int64 v3;
  __int64 v10;
  _BYTE* v11;
  int v12;
  struct {
    _QWORD v14[2];
    int v15;
  } v14_;

  *(_WORD*)(a1 + 48) = 0;
  *(_WORD*)(a1 + 72) = 0;
  *(_BYTE*)(a1 + 96) = 0;
  *(_BYTE*)(a1 + 120) = 0;
  *(_QWORD*)a1 = a2;
  *(_QWORD*)(a1 + 8) = 0;
  *(_QWORD*)(a1 + 16) = 0;
  *(_WORD*)(a1 + 24) = 0;
  v3 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 1640, 16, 0);
  memset_alt1(v3, 0, 1640);
  *(_QWORD*)(a1 + 128) = v3;
  *(_BYTE*)(a1 + 136) = 0;
  *(_BYTE*)(a1 + 160) = 0;
  *(_BYTE*)(a1 + 168) = 0;
  *(_BYTE*)(a1 + 192) = 0;
  *(_BYTE*)(a1 + 200) = 0;
  *(_BYTE*)(a1 + 224) = 0;
  *(_BYTE*)(a1 + 232) = 0;
  *(_BYTE*)(a1 + 256) = 0;
  *(_BYTE*)(a1 + 264) = 0;
  *(_BYTE*)(a1 + 288) = 0;
  *(_BYTE*)(a1 + 296) = 0;
  *(_BYTE*)(a1 + 320) = 0;
  *(_BYTE*)(a1 + 328) = 0;
  *(_BYTE*)(a1 + 352) = 0;
  *(_BYTE*)(a1 + 360) = 0;
  *(_BYTE*)(a1 + 384) = 0;
  *(_BYTE*)(a1 + 392) = 0;
  *(_BYTE*)(a1 + 416) = 0;
  *(_BYTE*)(a1 + 424) = 0;
  *(_BYTE*)(a1 + 448) = 0;
  *(_QWORD*)(a1 + 496) = 0;
  *(_QWORD*)(a1 + 504) = 0;
  *(_QWORD*)(a1 + 480) = 0;
  *(_QWORD*)(a1 + 488) = 0;
  *(_QWORD*)(a1 + 464) = 0;
  *(_QWORD*)(a1 + 472) = 0;
  *(_QWORD*)(a1 + 456) = 0;
  memset_alt1(a1 + 536, 0, 456);
  *(_DWORD*)(a1 + 1000) = 0;
  *(_DWORD*)(a1 + 992) = -1;
  GameRoutine_b34420((void*)((__int64)v14_.v14),
                     *(_QWORD**)(*game_g_frame_clock_ptr[0] + 13424),
                     (__int64)"Graphics/Textures/common_default", 0x20u,
                     (__int64)"Fog_Ramp", 8u, 0);
  v10 = v14_.v14[1];
  v11 = *(_BYTE**)(a1 + 128);
  *(_QWORD*)(a1 + 984) = v14_.v14[0];
  v12 = v14_.v15;
  *(_QWORD*)(a1 + 992) = v10;
  *(_DWORD*)(a1 + 1000) = v12;
  GameRoutine_c51760((__int64)v11);
  if (v11[640] == 1) {
    Manager_c46910((__int64)(v11 + 320));
    v11[640] = 0;
  }
  if (v11[968] == 1) {
    Manager_c46910((__int64)(v11 + 648));
    v11[968] = 0;
  }
  if (v11[1296] == 1) {
    Manager_c46910((__int64)(v11 + 976));
    v11[1296] = 0;
  }
  v11[1632] = 0;
  wld_GfxLoader_loadFogTexture(a1, (__int64)&GameData_1a9f09e, 0,
                               (__int64)&GameData_1a9f09e, 0, 0);
  *(_BYTE*)(*(_QWORD*)(a1 + 128) + 1632LL) = 0;
  return GameRoutine_b87160(
      *(_QWORD*)a1, (*(_BYTE*)(*(_QWORD*)(a1 + 128) + 1632LL) & 1) == 0, 1u);
}

__int64 wld_GfxLoader_loadFogTexture(__int64 result, __int64 a2, __int64 a3,
                                     __int64 a4, __int64 a5, char a6)
{
  __int64 v6;
  __int64 v12;
  _BYTE* v13;
  unsigned __int8** v14;
  unsigned __int8* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  char* v21;
  _QWORD* v22;
  unsigned int v23;
  __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  char* v28;
  unsigned __int8* v29;
  unsigned __int64 v30;
  const char* v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;
  unsigned __int8* v35;
  unsigned __int64 v36;
  const char* v37;
  unsigned __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  const char* v41;
  unsigned __int64 v42;
  const char* v43;
  __int64 v44;
  bool v45;
  unsigned __int64 v46;
  const char* v47;
  unsigned __int64 v48;
  __int64 v49;
  unsigned __int64 v50;
  const char* v51;
  unsigned __int64 v52;
  const char* v53;
  __int64 v54;
  bool v55;
  unsigned __int64 v56;
  const char* v57;
  unsigned __int64 v58;
  unsigned __int64 v59;
  char* v60;
  __int64 v61;
  unsigned __int64 v62;
  unsigned __int64 v63;
  char* v64;
  __int64 v65;
  bool v66;
  char* v67;
  unsigned __int64 v68;
  unsigned __int64 v69;
  __int64 v70;
  __int64 v71;
  char* v72;
  unsigned int v73;
  __int64 v74;
  __int64 v75;
  char* v76;
  __int64 v77;
  __int64* v78;
  char* v79;
  unsigned __int64 v80;
  __int64 v81;
  __int64 v82;
  bool v83;
  unsigned __int64 v84;
  unsigned __int64 v85;
  char* v86;
  int v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  _BYTE* v91;
  __int64 v92;
  __int64 v93;
  unsigned __int64 v94;
  __int64 v95;
  unsigned __int64 v96;
  const char* v97;
  __int64 v98;
  const char* v99;
  __int64 v100;
  bool v101;
  __int64 v102;
  const char* v103;
  __int64 v104;
  __int64 v105;
  unsigned __int64 v106;
  const char* v107;
  unsigned __int64 v108;
  const char* v109;
  __int64 v110;
  bool v111;
  unsigned __int64 v112;
  const char* v113;
  unsigned __int64 v114;
  __int64 v115;
  unsigned __int64 v116;
  char* v117;
  unsigned __int64 v118;
  char* v119;
  __int64 v120;
  bool v121;
  unsigned __int64 v122;
  char* v123;
  unsigned __int64 v124;
  unsigned __int64 v125;
  unsigned __int64 v126;
  char* v127;
  char* v128;
  unsigned __int64 v129;
  unsigned __int64 v130;
  unsigned __int64 v131;
  char* v132;
  unsigned __int64 v133;
  char* v134;
  unsigned __int64 v135;
  bool v136;
  unsigned __int64 v137;
  char* v138;
  unsigned __int64 v139;
  unsigned __int64 v140;
  bool v141;
  unsigned __int64 v142;
  unsigned __int64 v143;
  __int64 v144;
  unsigned __int64 v145;
  char* v146;
  char* v147;
  unsigned __int64 v148;
  __int64 v149;
  __int64 v150;
  __int64 v151;
  __int64 v152;
  unsigned __int64 v153;
  bool v154;
  unsigned __int64 v155;
  __int64 v156;
  unsigned __int64 v157;
  __int64 v158;
  __int64 v159;
  char* v160;
  __int64 v161;
  unsigned __int64 v162;
  char* v163;
  __int64 v164;
  __int64 v165;
  bool v166;
  __int64 v167;
  __int64 v168;
  char* v169;
  __int64 v170;
  int v171;
  unsigned __int64 v172;
  char* v173;
  char* v174;
  unsigned __int64 v175;
  unsigned __int64 v176;
  __int64 v177;
  __int64 v178;
  char v179;
  __int64 v180;
  __int64 v181;
  __int64 v182;
  char* v183;
  __int64 v184;
  char* v185;
  unsigned __int64 v186;
  __int64 v187;
  __int64 v188;
  unsigned __int64 v189;
  char* v190;
  __int64 v191;
  __int64 v192;
  __int64 v193;
  unsigned __int64 v194;
  __int64 v195;
  __int64 v196;
  __int64 v197;
  struct {
    __int64 (**v198)();
    __int64 v199;
    char* v200;
    char gap120_[8];
    __int64 (***v201)();
  } v198_;
  struct {
    __int64 v202;
    unsigned __int64 v203;
    char* v204;
  } v202_;
  struct {
    __int64 v205;
    __int64 v206;
    char* v207;
  } v205_;

  v159 = COERCE_AS(__typeof__(v159),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v71 = COERCE_AS(__typeof__(v71),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v6 = *(int*)(result + 16);
  v12 = result;
  if ((_DWORD)v6 != 0) {
    if (*(_QWORD*)(result + 8 * v6 + 456) != 0) {
      *(_QWORD*)(result + 528) = 0;
      *(_QWORD*)(result + 520) = 0;
      *(_QWORD*)(result + 512) = 0;
      if ((_DWORD)v6 != 1) {
        goto LABEL_47;
      }
      v13 = *(_BYTE**)(result + 128);
      v14 = (unsigned __int8**)(result + 512);
      *(_QWORD*)(result + 528) = v13;
      if (v13[640] == 1) {
        v15 = v13 + 320;
        *v14 = v13 + 320;
        v16 = *(_QWORD*)(result + 464);
        if (v16 == 0) {
          goto LABEL_32;
        }
      }
      else {
        v15 = nullptr;
        v16 = *(_QWORD*)(result + 464);
        if (v16 == 0) {
          goto LABEL_32;
        }
      }
      goto LABEL_31;
    }
    v20 = result + 24LL * (int)v6;
    v21 = *(char**)(v20 + 800);
    if (v21 == nullptr) {
      v22 = (_QWORD*)(v20 + 800);
      if ((_DWORD)v6 == 1) {
        Manager_c445f0((__int64)&v198_.v198, (__int64)"Preset/Hades", 0xCu,
                       (__int64)&GameData_1a9f09e, 0),
            v159 = COERCE_AS(__typeof__(v159),
                             PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
            v71 = COERCE_AS(__typeof__(v71),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        v23 = (unsigned __int8)v198_.v198;
        v20 = v198_.v199;
        v21 = v198_.v200;
      }
      else {
        v23 = 0;
        LOWORD(v198_.v198) = 0;
      }
      v166 = (v23 & 1) == 0;
      v167 = v23 >> 1;
      v205_.v205 = 0;
      v205_.v206 = 0;
      if (v166) {
        v168 = v167;
      }
      else {
        v168 = v20;
      }
      if (v166) {
        v169 = (char*)&v198_.v198 + 1;
      }
      else {
        v169 = v21;
      }
      *v22 = (*(__int64 (**)(_QWORD, char*, __int64, __int64*, __int64))(
          **(_QWORD**)(*game_g_frame_clock_ptr[0] + 13432) + 16LL))(
          *(_QWORD*)(*game_g_frame_clock_ptr[0] + 13432), v169, v168,
          &v205_.v205, 255),
      v159 = COERCE_AS(__typeof__(v159),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v71 = COERCE_AS(__typeof__(v71),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      result = v205_.v206;
      if (v205_.v206 != 0) {
        result = std___1___shared_weak_count___release_weak(v205_.v206),
        v159 = COERCE_AS(__typeof__(v159),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v71 = COERCE_AS(__typeof__(v71),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      }
      if (((unsigned __int8)v198_.v198 & 1) != 0 && v198_.v200 != nullptr) {
        v170 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v170 = 56;
        }
        result = nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v170),
        v159 = COERCE_AS(__typeof__(v159),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v71 = COERCE_AS(__typeof__(v71),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      }
    }
    v171 = 2;
  LABEL_342:
    *(_DWORD*)(v12 + 8) = v171;
    return result;
  }
  v17 = *(int*)(result + 20);
  if ((_DWORD)v17 == 0) {
    v15 = *(unsigned __int8**)(result + 128);
    v13 = nullptr;
    v16 = 0;
    v14 = (unsigned __int8**)(result + 512);
    *(_QWORD*)(result + 528) = 0;
    *(_QWORD*)(result + 520) = 0;
    *(_QWORD*)(result + 512) = v15;
    goto LABEL_32;
  }
  v18 = result + 472;
  if (*(_QWORD*)(result + 472 + 8 * v17) == 0) {
    v24 = result + 24LL * (int)v17;
    if (*(_QWORD*)(v24 + 848) != 0) {
    LABEL_341:
      v171 = 3;
      goto LABEL_342;
    }
    v25 = *((_QWORD*)&GameData_1fd2d60 + v17);
    v26 = strlen(v25),
    v159 = COERCE_AS(__typeof__(v159),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v71 = COERCE_AS(__typeof__(v71),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    if (v26 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_344;
    }
    v27 = v26;
    if (v26 >= 0x17) {
      if ((v26 | 7) == 0x17) {
        v181 = 26;
      }
      else {
        v181 = (v26 | 7) + 1;
      }
      v28 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                       v181, 16, 0),
      v159 = COERCE_AS(__typeof__(v159),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v71 = COERCE_AS(__typeof__(v71),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      v205_.v206 = v27;
      v205_.v207 = v28;
      v205_.v205 = v181 | 1;
    }
    else {
      LOBYTE(v205_.v205) = 2 * v26;
      v28 = (char*)&v205_.v205 + 1;
      if (v26 == 0) {
        goto LABEL_312;
      }
    }
    memmove(v28, v25, v27),
        v159 = COERCE_AS(__typeof__(v159),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v71 = COERCE_AS(__typeof__(v71),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  LABEL_312:
    v28[v27] = 0;
    v182 = GameRoutine_1a0a680(&v205_.v205, 0, "Preset/", 7),
    v159 = COERCE_AS(__typeof__(v159),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v71 = COERCE_AS(__typeof__(v71),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v184 = *(_QWORD*)(v182 + 8);
    v183 = *(char**)(v182 + 16);
    v198_.v198 = *(__int64 (***)(void))v182,
    v159 = COERCE_AS(__typeof__(v159),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v71 = COERCE_AS(__typeof__(v71),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v198_.v199 = v184;
    v198_.v200 = v183;
    *(_QWORD*)(v182 + 8) = 0;
    *(_QWORD*)(v182 + 16) = 0;
    *(_QWORD*)v182 = 0;
    if (((unsigned __int8)v198_.v198 & 1) != 0) {
      v185 = v198_.v200;
    }
    else {
      v185 = (char*)&v198_.v198 + 1;
    }
    if (((unsigned __int8)v198_.v198 & 1) != 0) {
      v186 = v198_.v199;
    }
    else {
      v186 = (unsigned __int64)(unsigned __int8)v198_.v198 >> 1;
    }
    Manager_c445f0((__int64)&v202_.v202, (__int64)v185, v186,
                   (__int64)&GameData_1a9f09e, 0),
        v159 = COERCE_AS(__typeof__(v159),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v71 = COERCE_AS(__typeof__(v71),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    if (((unsigned __int8)v198_.v198 & 1) != 0 && v198_.v200 != nullptr) {
      v187 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v187 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v187),
          v159 = COERCE_AS(__typeof__(v159),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v71 = COERCE_AS(__typeof__(v71),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    }
    if ((v205_.v205 & 1) != 0 && v205_.v207 != nullptr) {
      v188 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v188 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v188),
          v159 = COERCE_AS(__typeof__(v159),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v71 = COERCE_AS(__typeof__(v71),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    }
    v198_.v198 = nullptr;
    v198_.v199 = 0;
    if ((v202_.v202 & 1) != 0) {
      v189 = v202_.v203;
    }
    else {
      v189 = (unsigned __int64)(unsigned __int8)v202_.v202 >> 1;
    }
    if ((v202_.v202 & 1) != 0) {
      v190 = v202_.v204;
    }
    else {
      v190 = (char*)&v202_.v202 + 1;
    }
    *(_QWORD*)(v24 +
               848) = (*(__int64 (**)(_QWORD, char*, unsigned __int64,
                                      __int64 (***)(void), __int64))(
        **(_QWORD**)(*game_g_frame_clock_ptr[0] + 13432) + 16LL))(
        *(_QWORD*)(*game_g_frame_clock_ptr[0] + 13432), v190, v189, &v198_.v198,
        255),
               v159 =
                   COERCE_AS(__typeof__(v159),
                             PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
               v71 = COERCE_AS(__typeof__(v71),
                               PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    result = v198_.v199;
    if (v198_.v199 != 0) {
      result = std___1___shared_weak_count___release_weak(v198_.v199),
      v159 = COERCE_AS(__typeof__(v159),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v71 = COERCE_AS(__typeof__(v71),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    }
    if ((v202_.v202 & 1) != 0 && v202_.v204 != nullptr) {
      v191 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v191 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v191),
      v159 = COERCE_AS(__typeof__(v159),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v71 = COERCE_AS(__typeof__(v71),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    }
    goto LABEL_341;
  }
  v13 = *(_BYTE**)(result + 128);
  v14 = (unsigned __int8**)(result + 512);
  *(_QWORD*)(result + 520) = 0;
  *(_QWORD*)(result + 512) = 0;
  *(_QWORD*)(result + 528) = v13;
  if ((_DWORD)v17 == 4) {
    if ((v13[1624] & 1) != 0) {
      v19 = 1304;
      goto LABEL_28;
    }
  }
  else {
    if ((_DWORD)v17 == 1) {
      if ((v13[968] & 1) != 0) {
        v19 = 648;
        goto LABEL_28;
      }
      goto LABEL_30;
    }
    if (v13[1296] == 1) {
      v19 = 976;
    LABEL_28:
      v15 = &v13[v19];
      *v14 = v15;
      v16 = *(_QWORD*)(v18 + 8 * v17);
      if (v16 == 0) {
        goto LABEL_32;
      }
      goto LABEL_31;
    }
  }
LABEL_30:
  v15 = nullptr;
  v16 = *(_QWORD*)(v18 + 8 * v17);
  if (v16 != 0) {
  LABEL_31:
    *(_QWORD*)(result + 520) = v16;
  }
LABEL_32:
  if (v15 == nullptr || (v15[24] & 1) == 0) {
    if (v16 != 0 && (*(_BYTE*)(v16 + 24) & 1) != 0) {
      v14 = (unsigned __int8**)(result + 520);
    }
    else {
      if (v13 == nullptr || v13[24] != 1) {
        goto LABEL_47;
      }
      v14 = (unsigned __int8**)(result + 528);
    }
  }
  v29 = *v14;
  if (v29[24] != 1) {
  LABEL_47:
    v31 = "Default";
    v32 = 7;
    goto LABEL_48;
  }
  v30 = *v29;
  if ((v30 & 1) != 0) {
    v31 = *((const char**)v29 + 2);
  }
  else {
    v31 = (const char*)(v29 + 1);
  }
  if ((v30 & 1) != 0) {
    v32 = *((_QWORD*)v29 + 1);
  }
  else {
    v32 = v30 >> 1;
  }
LABEL_48:
  wld_GfxLoader_loadSunPrecomputeData(result, (__int64)v31, v32),
      v159 = COERCE_AS(__typeof__(v159),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v71 = COERCE_AS(__typeof__(v71),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v33 = *(_QWORD*)(v12 + 512);
  if (v33 != 0) {
    if ((*(_BYTE*)(v33 + 56) & 1) != 0) {
      goto LABEL_56;
    }
    if ((*(_BYTE*)(v33 + 24) & 1) != 0) {
      goto LABEL_58;
    }
  }
  v33 = *(_QWORD*)(v12 + 520);
  if (v33 != 0) {
    if ((*(_BYTE*)(v33 + 56) & 1) == 0) {
      if ((*(_BYTE*)(v33 + 24) & 1) != 0) {
        goto LABEL_58;
      }
      goto LABEL_54;
    }
  LABEL_56:
    v34 = 1;
    goto LABEL_59;
  }
LABEL_54:
  v33 = *(_QWORD*)(v12 + 528);
  if (v33 == 0) {
    goto LABEL_66;
  }
  if ((*(_BYTE*)(v33 + 56) & 1) != 0) {
    goto LABEL_56;
  }
  if (*(_BYTE*)(v33 + 24) == 1) {
  LABEL_58:
    v34 = 0;
  LABEL_59:
    v35 = (unsigned __int8*)(v33 + 32 * v34);
    if (v35[24] == 1) {
      v36 = *v35;
      if ((v36 & 1) != 0) {
        v37 = *((const char**)v35 + 2);
      }
      else {
        v37 = (const char*)(v35 + 1);
      }
      if ((v36 & 1) != 0) {
        v38 = *((_QWORD*)v35 + 1);
      }
      else {
        v38 = v36 >> 1;
      }
      goto LABEL_67;
    }
  }
LABEL_66:
  v37 = "Default";
  v38 = 7;
LABEL_67:
  GfxLoader_c44b50(v12, (__int64)v37, v38),
      v159 = COERCE_AS(__typeof__(v159),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v71 = COERCE_AS(__typeof__(v71),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v39 = *(_QWORD*)(v12 + 512);
  if (v39 != 0 && (*(_BYTE*)(v39 + 120) & 1) != 0 ||
      (v39 = *(_QWORD*)(v12 + 520)) != 0 && (*(_BYTE*)(v39 + 120) & 1) != 0 ||
      (v39 = *(_QWORD*)(v12 + 528)) != 0 && *(_BYTE*)(v39 + 120) == 1) {
    v40 = *(unsigned __int8*)(v39 + 96);
    v41 = (const char*)(v39 + 97);
    v44 = v39 + 104;
    v42 = *(_QWORD*)(v39 + 104);
    v43 = *(const char**)(v44 + 8);
    v45 = (v40 & 1) == 0;
    v46 = v40 >> 1;
    if (v45) {
      v47 = v41;
    }
    else {
      v47 = v43;
    }
    if (v45) {
      v48 = v46;
    }
    else {
      v48 = v42;
    }
  }
  else {
    v47 = "Outdoors";
    v48 = 8;
  }
  wld_GfxLoader_loadDomeLightTexture(v12, (__int64)v47, v48),
      v159 = COERCE_AS(__typeof__(v159),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v71 = COERCE_AS(__typeof__(v71),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v49 = *(_QWORD*)(v12 + 512);
  if (v49 != 0 && (*(_BYTE*)(v49 + 152) & 1) != 0 ||
      (v49 = *(_QWORD*)(v12 + 520)) != 0 && (*(_BYTE*)(v49 + 152) & 1) != 0 ||
      (v49 = *(_QWORD*)(v12 + 528)) != 0 && *(_BYTE*)(v49 + 152) == 1) {
    v50 = *(unsigned __int8*)(v49 + 128);
    v51 = (const char*)(v49 + 129);
    v54 = v49 + 136;
    v52 = *(_QWORD*)(v49 + 136);
    v53 = *(const char**)(v54 + 8);
    v55 = (v50 & 1) == 0;
    v56 = v50 >> 1;
    if (v55) {
      v57 = v51;
    }
    else {
      v57 = v53;
    }
    if (v55) {
      v58 = v56;
    }
    else {
      v58 = v52;
    }
  }
  else {
    v57 = "Default";
    v58 = 7;
  }
  wld_GfxLoader_loadCloudTexture(v12, (__int64)v57, v58),
      v159 = COERCE_AS(__typeof__(v159),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v71 = COERCE_AS(__typeof__(v71),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v61 = *(_QWORD*)(v12 + 512);
  if (v61 != 0 && ((v59 = *(unsigned __int8*)(v61 + 184)) & 1) != 0 ||
      (v61 = *(_QWORD*)(v12 + 520)) != 0 &&
          ((v59 = *(unsigned __int8*)(v61 + 184)) & 1) != 0 ||
      (v61 = *(_QWORD*)(v12 + 528)) != 0 &&
          (_DWORD)(v59 = *(unsigned __int8*)(v61 + 184)) == 1) {
    v62 = *(unsigned __int8*)(v61 + 160);
    v60 = (char*)(v61 + 161);
    v65 = v61 + 168;
    v63 = *(_QWORD*)(v61 + 168);
    v64 = *(char**)(v65 + 8);
    v66 = (v62 & 1) == 0;
    v59 = v62 >> 1;
    if (v66) {
      v67 = v60;
    }
    else {
      v67 = v64;
    }
    if (v66) {
      v68 = v59;
    }
    else {
      v68 = v63;
    }
  }
  else {
    v68 = 0;
    v67 = &GameData_1a9f09e;
  }
  if (*(_BYTE*)(v12 + 320) == 1) {
    v69 = *(unsigned __int8*)(v12 + 296);
    v59 = *(_QWORD*)(v12 + 304);
    v60 = (char*)(v69 >> 1);
    if ((v69 & 1) == 0) {
      v59 = v69 >> 1;
    }
    if (v59 == v68) {
      v70 = (v69 & 1) != 0 ? *(_QWORD*)(v12 + 312) : v12 + 297;
      result = memcmp(v70, v67, v68),
      v159 = COERCE_AS(__typeof__(v159),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v71 = COERCE_AS(__typeof__(v71),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      if ((_DWORD)result == 0) {
      LABEL_168:
        if (a3 != 0 && (a6 & 1) == 0) {
          v94 = *(_QWORD*)(v12 + 512);
          if (*(_BYTE*)(v12 + 120) == 1) {
            if (v94 != 0 && (v95 = *(_QWORD*)(v12 + 512),
                             (*(_BYTE*)(v94 + 88) & 1) != 0) ||
                (v95 = *(_QWORD*)(v12 + 520)) != 0 &&
                    (*(_BYTE*)(v95 + 88) & 1) != 0 ||
                (v95 = *(_QWORD*)(v12 + 528)) != 0 &&
                    *(_BYTE*)(v95 + 88) == 1) {
              v96 = *(unsigned __int8*)(v95 + 64);
              v97 = (const char*)(v95 + 65);
              v100 = v95 + 72;
              v98 = *(_QWORD*)(v95 + 72);
              v99 = *(const char**)(v100 + 8);
              v101 = (v96 & 1) == 0;
              v102 = v96 >> 1;
              if (v101) {
                v103 = v97;
              }
              else {
                v103 = v99;
              }
              if (v101) {
                v104 = v102;
              }
              else {
                v104 = v98;
              }
            }
            else {
              v103 = "Outdoors_1";
              v104 = 10;
            }
            v196 = a4;
            v197 = a5;
            v195 = a3;
            if (v94 != 0 && (v115 = *(_QWORD*)(v12 + 512),
                             (*(_BYTE*)(v94 + 216) & 1) != 0) ||
                (v115 = *(_QWORD*)(v12 + 520)) != 0 &&
                    (*(_BYTE*)(v115 + 216) & 1) != 0 ||
                (v115 = *(_QWORD*)(v12 + 528)) != 0 &&
                    *(_BYTE*)(v115 + 216) == 1) {
              v116 = *(unsigned __int8*)(v115 + 192);
              v117 = (char*)(v115 + 193);
              v120 = v115 + 200;
              v118 = *(_QWORD*)(v115 + 200);
              v119 = *(char**)(v120 + 8);
              v121 = (v116 & 1) == 0;
              v122 = v116 >> 1;
              if (v121) {
                v123 = v117;
              }
              else {
                v123 = v119;
              }
              if (v121) {
                v124 = v122;
              }
              else {
                v124 = v118;
              }
              if (v94 == 0) {
              LABEL_225:
                v94 = *(_QWORD*)(v12 + 520);
                if (v94 == 0 || (*(_BYTE*)(v94 + 248) & 1) == 0) {
                  v94 = *(_QWORD*)(v12 + 528);
                  if (v94 == 0 || *(_BYTE*)(v94 + 248) != 1) {
                    v139 = 0;
                    v138 = &GameData_1a9f09e;
                    goto LABEL_236;
                  }
                }
              LABEL_229:
                v131 = *(unsigned __int8*)(v94 + 224);
                v132 = (char*)(v94 + 225);
                v135 = v94 + 232;
                v133 = *(_QWORD*)(v94 + 232);
                v134 = *(char**)(v135 + 8);
                v136 = (v131 & 1) == 0;
                v137 = v131 >> 1;
                if (v136) {
                  v138 = v132;
                }
                else {
                  v138 = v134;
                }
                if (v136) {
                  v139 = v137;
                }
                else {
                  v139 = v133;
                }
              LABEL_236:
                v140 = *(unsigned __int8*)(v12 + 24);
                v141 = (v140 & 1) == 0;
                v142 = v140 >> 1;
                if (v141) {
                  v143 = v142;
                }
                else {
                  v143 = *(_QWORD*)(v12 + 32);
                }
                if (v141) {
                  v144 = v12 + 25;
                }
                else {
                  v144 = *(_QWORD*)(v12 + 40);
                }
                v145 = v143 + 1;
                if (v143 + 1 < 0xFFFFFFFFFFFFFFF7LL) {
                  v193 = (__int64)v103;
                  v194 = v104;
                  v192 = (__int64)v138;
                  if (v145 >= 0x17) {
                    v147 = v123;
                    v148 = v124;
                    v149 = a2;
                    if ((v145 | 7) == 0x17) {
                      v150 = 26;
                    }
                    else {
                      v150 = (v145 | 7) + 1;
                    }
                    v151 = fw_memory_HeapManager_Allocate_alt1(
                        fw_memory_g_heap_manager, v150, 16, 0),
                    v159 = COERCE_AS(
                        __typeof__(v159),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                    v71 = COERCE_AS(
                        __typeof__(v71),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
                    v152 = v150 | 1;
                    v146 = (char*)v151;
                    a2 = v149;
                    v124 = v148;
                    v123 = v147;
                    v205_.v206 = v143 + 1;
                    v205_.v207 = (char*)v151;
                    v205_.v205 = v152;
                  }
                  else {
                    v205_.v206 = 0;
                    v205_.v207 = nullptr;
                    v205_.v205 = (unsigned __int8)(2 * v145);
                    v146 = (char*)&v205_.v205 + 1;
                    if (v143 == 0) {
                      goto LABEL_251;
                    }
                  }
                  memmove(v146, v144, v143),
                      v159 = COERCE_AS(
                          __typeof__(v159),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                      v71 = COERCE_AS(
                          __typeof__(v71),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
                LABEL_251:
                  *(_WORD*)&v146[v143] = 95;
                  if ((*(_BYTE*)(v12 + 120) & 1) == 0) {
                    GameRoutine_8123d0(),
                        v159 = COERCE_AS(
                            __typeof__(v159),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                        v71 = COERCE_AS(
                            __typeof__(v71),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
                  }
                  v153 = *(unsigned __int8*)(v12 + 96);
                  v154 = (v153 & 1) == 0;
                  v155 = v153 >> 1;
                  if (v154) {
                    v156 = v12 + 97;
                  }
                  else {
                    v156 = *(_QWORD*)(v12 + 112);
                  }
                  if (v154) {
                    v157 = v155;
                  }
                  else {
                    v157 = *(_QWORD*)(v12 + 104);
                  }
                  v158 = GameRoutine_1a09ce0(&v205_.v205, v156, v157),
                  v159 = COERCE_AS(
                      __typeof__(v159),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                  v71 = COERCE_AS(
                      __typeof__(v71),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
                  v161 = *(_QWORD*)(v158 + 8);
                  v160 = *(char**)(v158 + 16);
                  v198_.v198 = *(__int64 (***)(void))v158,
                  v159 = COERCE_AS(
                      __typeof__(v159),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                  v71 = COERCE_AS(
                      __typeof__(v71),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
                  v198_.v199 = v161;
                  v198_.v200 = v160;
                  *(_QWORD*)(v158 + 8) = 0;
                  *(_QWORD*)(v158 + 16) = 0;
                  *(_QWORD*)v158 = 0;
                  v162 = (unsigned __int64)(unsigned __int8)v198_.v198 >> 1;
                  if (((unsigned __int8)v198_.v198 & 1) != 0) {
                    v163 = v198_.v200;
                  }
                  else {
                    v163 = (char*)&v198_.v198 + 1;
                  }
                  if (((unsigned __int8)v198_.v198 & 1) != 0) {
                    v162 = v198_.v199;
                  }
                  result = Manager_c45700((__int64*)v12, a2, v195, v196, v197,
                                          v193, v194, v159, (__int64)v123, v124,
                                          v192, v139, (__int64)v163, v162),
                  v159 = COERCE_AS(
                      __typeof__(v159),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                  v71 = COERCE_AS(
                      __typeof__(v71),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
                  if (((unsigned __int8)v198_.v198 & 1) != 0 &&
                      v198_.v200 != nullptr) {
                    v164 = 128;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) == 0) {
                      v164 = 56;
                    }
                    result = nn_mem_StandardAllocator_Free(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v164),
                    v159 = COERCE_AS(
                        __typeof__(v159),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                    v71 = COERCE_AS(
                        __typeof__(v71),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
                  }
                  if ((v205_.v205 & 1) != 0 && v205_.v207 != nullptr) {
                    v165 = 128;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) == 0) {
                      v165 = 56;
                    }
                    result = nn_mem_StandardAllocator_Free(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v165),
                    v159 = COERCE_AS(
                        __typeof__(v159),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                    v71 = COERCE_AS(
                        __typeof__(v71),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
                  }
                  goto LABEL_301;
                }
              LABEL_344:
                String_60a1d0(),
                    v159 = COERCE_AS(
                        __typeof__(v159),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
                    v71 = COERCE_AS(
                        __typeof__(v71),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
              }
            }
            else {
              v124 = 0;
              v123 = &GameData_1a9f09e;
              if (v94 == 0) {
                goto LABEL_225;
              }
            }
            if ((*(_BYTE*)(v94 + 248) & 1) != 0) {
              goto LABEL_229;
            }
            goto LABEL_225;
          }
          if (v94 != 0 && (v105 = *(_QWORD*)(v12 + 512),
                           (*(_BYTE*)(v94 + 88) & 1) != 0) ||
              (v105 = *(_QWORD*)(v12 + 520)) != 0 &&
                  (*(_BYTE*)(v105 + 88) & 1) != 0 ||
              (v105 = *(_QWORD*)(v12 + 528)) != 0 &&
                  *(_BYTE*)(v105 + 88) == 1) {
            v106 = *(unsigned __int8*)(v105 + 64);
            v107 = (const char*)(v105 + 65);
            v110 = v105 + 72;
            v108 = *(_QWORD*)(v105 + 72);
            v109 = *(const char**)(v110 + 8);
            v111 = (v106 & 1) == 0;
            v112 = v106 >> 1;
            if (v111) {
              v113 = v107;
            }
            else {
              v113 = v109;
            }
            if (v111) {
              v114 = v112;
            }
            else {
              v114 = v108;
            }
            if (v94 == 0) {
              goto LABEL_214;
            }
          }
          else {
            v113 = "Outdoors_1";
            v114 = 10;
            if (v94 == 0) {
              goto LABEL_214;
            }
          }
          v125 = *(_QWORD*)(v12 + 512);
          if ((*(_BYTE*)(v94 + 216) & 1) != 0) {
            goto LABEL_218;
          }
        LABEL_214:
          v125 = *(_QWORD*)(v12 + 520);
          if (v125 != 0 && (*(_BYTE*)(v125 + 216) & 1) != 0) {
            goto LABEL_218;
          }
          v125 = *(_QWORD*)(v12 + 528);
          if (v125 != 0) {
            if (*(_BYTE*)(v125 + 216) == 1) {
            LABEL_218:
              v126 = *(unsigned __int8*)(v125 + 192);
              v127 = (char*)(v125 + 193);
              v129 = v125 + 200;
              v125 = *(_QWORD*)(v125 + 200);
              v128 = *(char**)(v129 + 8);
              v45 = (v126 & 1) == 0;
              v130 = v126 >> 1;
              if (v45) {
                v125 = v130;
              }
              else {
                v127 = v128;
              }
              if (v94 == 0) {
                goto LABEL_291;
              }
              goto LABEL_290;
            }
            v125 = 0;
          }
          v127 = &GameData_1a9f09e;
          if (v94 != 0) {
          LABEL_290:
            if ((*(_BYTE*)(v94 + 248) & 1) != 0) {
              goto LABEL_295;
            }
          }
        LABEL_291:
          v94 = *(_QWORD*)(v12 + 520);
          if (v94 != 0 && (*(_BYTE*)(v94 + 248) & 1) != 0) {
            goto LABEL_295;
          }
          v94 = *(_QWORD*)(v12 + 528);
          if (v94 != 0) {
            if (*(_BYTE*)(v94 + 248) == 1) {
            LABEL_295:
              v172 = *(unsigned __int8*)(v94 + 224);
              v173 = (char*)(v94 + 225);
              v175 = v94 + 232;
              v94 = *(_QWORD*)(v94 + 232);
              v174 = *(char**)(v175 + 8);
              v45 = (v172 & 1) == 0;
              v176 = v172 >> 1;
              if (v45) {
                v94 = v176;
              }
              else {
                v173 = v174;
              }
              goto LABEL_300;
            }
            v94 = 0;
          }
          v173 = &GameData_1a9f09e;
        LABEL_300:
          result = Manager_c45700((__int64*)v12, a2, a3, a4, a5, (__int64)v113,
                                  v114, v71, (__int64)v127, v125, (__int64)v173,
                                  v94, (__int64)&GameData_1a9f09e, 0),
          v159 = COERCE_AS(__typeof__(v159),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v71 = COERCE_AS(__typeof__(v71),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        }
      LABEL_301:
        v177 = *(_QWORD*)v12;
        if (*(_DWORD*)(v12 + 16) == 1) {
          v178 = *(_QWORD*)(v177 + 272);
          v179 = *(_BYTE*)(v177 + 344);
          *(_QWORD*)(v177 + 312) = *(_QWORD*)(v177 + 264);
          *(_QWORD*)(v177 + 320) = v178;
          *(_QWORD*)(v177 + 328) = *(_QWORD*)(v177 + 280);
          v180 = *(_QWORD*)(v177 + 256);
          *(_QWORD*)(v177 + 296) = *(_QWORD*)(v177 + 248);
          *(_QWORD*)(v177 + 304) = v180;
          if ((v179 & 1) == 0) {
            *(_BYTE*)(v177 + 344) = 1;
          }
          *(_DWORD*)(v177 + 340) = 0;
          *(_QWORD*)(v177 + 332) = 0x1E0000000ELL;
        }
        else if (*(_BYTE*)(v177 + 344) == 1) {
          *(_BYTE*)(v177 + 344) = 0;
        }
        return result;
      }
    }
  }
  if (v68 != 0) {
    if (v68 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_344;
    }
    if (v68 >= 0x17) {
      if ((v68 | 7) == 0x17) {
        v74 = 26;
      }
      else {
        v74 = (v68 | 7) + 1;
      }
      v72 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                       v74, 16, 0),
      v159 = COERCE_AS(__typeof__(v159),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v71 = COERCE_AS(__typeof__(v71),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      v205_.v206 = v68;
      v205_.v207 = v72;
      v205_.v205 = v74 | 1;
    }
    else {
      LOBYTE(v205_.v205) = 2 * v68;
      v72 = (char*)&v205_.v205 + 1;
    }
    memmove(v72, v67, v68),
        v159 = COERCE_AS(__typeof__(v159),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v71 = COERCE_AS(__typeof__(v71),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v72[v68] = 0;
    v75 = GameRoutine_1a0a680(&v205_.v205, 0,
                              "Contents:/Graphics/Textures/Fog/", 32),
    v159 = COERCE_AS(__typeof__(v159),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v71 = COERCE_AS(__typeof__(v71),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v77 = *(_QWORD*)(v75 + 8);
    v76 = *(char**)(v75 + 16);
    v198_.v198 = *(__int64 (***)(void))v75,
    v159 = COERCE_AS(__typeof__(v159),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v71 = COERCE_AS(__typeof__(v71),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v198_.v199 = v77;
    v198_.v200 = v76;
    *(_QWORD*)(v75 + 8) = 0;
    *(_QWORD*)(v75 + 16) = 0;
    *(_QWORD*)v75 = 0;
    v78 = (__int64*)GameRoutine_1a09ce0(&v198_.v198, "_Ramp.bntx", 10),
    v159 = COERCE_AS(__typeof__(v159),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v71 = COERCE_AS(__typeof__(v71),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v80 = v78[1];
    v79 = (char*)v78[2];
    v202_.v202 = *v78;
    v202_.v203 = v80;
    v202_.v204 = v79;
    v78[1] = 0;
    v78[2] = 0;
    *v78 = 0;
    if (((unsigned __int8)v198_.v198 & 1) != 0 && v198_.v200 != nullptr) {
      v81 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v81 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v81),
          v159 = COERCE_AS(__typeof__(v159),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v71 = COERCE_AS(__typeof__(v71),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    }
    if ((v205_.v205 & 1) != 0 && v205_.v207 != nullptr) {
      v82 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v82 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v82),
          v159 = COERCE_AS(__typeof__(v159),
                           PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
          v71 = COERCE_AS(__typeof__(v71),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    }
    v73 = (unsigned __int8)v202_.v202;
    v59 = v202_.v203;
    v60 = v202_.v204;
  }
  else {
    v73 = 0;
    LOWORD(v202_.v202) = 0;
  }
  v83 = (v73 & 1) == 0;
  v84 = v73 >> 1;
  if (v83) {
    v85 = v84;
  }
  else {
    v85 = v59;
  }
  if (v83) {
    v86 = (char*)&v202_.v202 + 1;
  }
  else {
    v86 = v60;
  }
  result = (*(__int64 (**)(_QWORD, char*, unsigned __int64, __int64))(
      **(_QWORD**)(*game_g_frame_clock_ptr[0] + 13432) + 96LL))(
      *(_QWORD*)(*game_g_frame_clock_ptr[0] + 13432), v86, v85, 255),
  v159 = COERCE_AS(__typeof__(v159),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v71 = COERCE_AS(__typeof__(v71),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v87 = *(_DWORD*)(v12 + 992);
  v88 = *(_QWORD*)v12;
  *(_QWORD*)(v88 + 400) = *(_QWORD*)(v12 + 984);
  *(_DWORD*)(v88 + 408) = v87;
  if ((result & 1) == 0) {
    if (*(_BYTE*)(v12 + 320) == 1) {
      if ((*(_BYTE*)(v12 + 296) & 1) != 0) {
        v91 = *(_BYTE**)(v12 + 312);
        *(_QWORD*)(v12 + 304) = 0;
        *v91 = 0;
      }
      else {
        *(_BYTE*)(v12 + 296) = 0;
        *(_BYTE*)(v12 + 297) = 0;
      }
    LABEL_163:
      if ((v202_.v202 & 1) != 0 && v202_.v204 != nullptr) {
        v93 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v93 = 56;
        }
        result = nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v93),
        v159 = COERCE_AS(__typeof__(v159),
                         PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v71 = COERCE_AS(__typeof__(v71),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      }
      goto LABEL_168;
    }
    *(_WORD*)(v12 + 296) = 0;
  LABEL_162:
    *(_BYTE*)(v12 + 320) = 1;
    goto LABEL_163;
  }
  v198_.v198 = GameData_1fd2040;
  v198_.v199 = v12;
  v198_.v201 = &v198_.v198;
  wld_GfxLoader_loadFile(v12, (unsigned __int8*)&v202_.v202, 5u,
                         (__int64)&v198_.v198, 1),
      v159 = COERCE_AS(__typeof__(v159),
                       PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v71 = COERCE_AS(__typeof__(v71),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  result = (__int64)v198_.v201;
  if (v198_.v201 == &v198_.v198) {
    v89 = 4;
  }
  else {
    if (v198_.v201 == nullptr) {
      goto LABEL_150;
    }
    v89 = 5;
  }
  result = ((__int64 (*)(__int64))(*v198_.v201)[v89])((__int64)v198_.v201),
  v159 = COERCE_AS(__typeof__(v159),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v71 = COERCE_AS(__typeof__(v71),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
LABEL_150:
  if (*(_BYTE*)(v12 + 320) == 1) {
    result = (__int64)GameRoutine_60a060((char*)(v12 + 296), (__int64)v67, v68),
    v159 = COERCE_AS(__typeof__(v159),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v71 = COERCE_AS(__typeof__(v71),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    goto LABEL_163;
  }
  if (v68 >= 0x17) {
    if ((v68 | 7) == 0x17) {
      v92 = 26;
    }
    else {
      v92 = (v68 | 7) + 1;
    }
    v90 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager, v92, 16,
                                              0),
    v159 = COERCE_AS(__typeof__(v159),
                     PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
    v71 = COERCE_AS(__typeof__(v71),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    *(_QWORD*)(v12 + 304) = v68;
    *(_QWORD*)(v12 + 312) = v90;
    *(_QWORD*)(v12 + 296) = v92 | 1;
  }
  else {
    v90 = v12 + 297;
    *(_BYTE*)(v12 + 296) = 2 * v68;
    if (v68 == 0) {
      goto LABEL_161;
    }
  }
  result = memmove(v90, v67, v68),
  v159 = COERCE_AS(__typeof__(v159),
                   PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v71 = COERCE_AS(__typeof__(v71),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
LABEL_161:
  *(_BYTE*)(v90 + v68) = 0;
  goto LABEL_162;
}

char* wld_GfxLoader_loadSunPrecomputeData(__int64 a1, __int64 a2,
                                          unsigned __int64 a3)
{
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  char* result;
  unsigned __int64 v10;
  char* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  struct {
    _QWORD v16[4];
    _QWORD* v17;
  } v16_;
  struct {
    _QWORD v18[2];
    char* v19;
  } v18_;

  if (*(_BYTE*)(a1 + 160) == 1) {
    v6 = *(unsigned __int8*)(a1 + 136);
    v7 = *(_QWORD*)(a1 + 144);
    if ((v6 & 1) == 0) {
      v7 = v6 >> 1;
    }
    if (v7 == a3) {
      v8 = (v6 & 1) != 0 ? *(_QWORD*)(a1 + 152) : a1 + 137;
      result = (char*)memcmp(v8, a2, a3);
      if ((_DWORD)result == 0) {
        return result;
      }
    }
  }
  if (a3 != 0) {
    GfxLoader_c45e30(v18_.v18, a2, a3, (__int64)".sun", 4u);
    if ((v18_.v18[0] & 1) != 0) {
      v10 = v18_.v18[1];
    }
    else {
      v10 = (unsigned __int64)LOBYTE(v18_.v18[0]) >> 1;
    }
    if ((v18_.v18[0] & 1) != 0) {
      v11 = v18_.v19;
    }
    else {
      v11 = (char*)v18_.v18 + 1;
    }
    if (((*(__int64 (**)(_QWORD, char*, unsigned __int64, __int64))(
             **(_QWORD**)(*game_g_frame_clock_ptr[0] + 13432) + 96LL))(
             *(_QWORD*)(*game_g_frame_clock_ptr[0] + 13432), v11, v10, 255) &
         1) != 0) {
      v16_.v16[0] = GameData_1fd1ec0;
      v16_.v16[1] = a1;
      v16_.v17 = v16_.v16;
      wld_GfxLoader_loadFile(a1, (unsigned __int8*)v18_.v18, 0,
                             (__int64)v16_.v16, 0);
      if (v16_.v17 == v16_.v16) {
        v12 = 32;
      }
      else {
        if (v16_.v17 == nullptr) {
          goto LABEL_30;
        }
        v12 = 40;
      }
      (*(void (**)(__int64))(*v16_.v17 + v12))((__int64)v16_.v17);
    LABEL_30:
      if (*(_BYTE*)(a1 + 160) == 1) {
        result = GameRoutine_60a060((char*)(a1 + 136), a2, a3);
      }
      else {
        if (a3 >= 0xFFFFFFFFFFFFFFF7LL) {
          String_60a1d0();
        }
        if (a3 >= 0x17) {
          if ((a3 | 7) == 0x17) {
            v15 = 26;
          }
          else {
            v15 = (a3 | 7) + 1;
          }
          v14 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                    v15, 16, 0);
          *(_QWORD*)(a1 + 144) = a3;
          *(_QWORD*)(a1 + 152) = v14;
          *(_QWORD*)(a1 + 136) = v15 | 1;
        }
        else {
          v14 = a1 + 137;
          *(_BYTE*)(a1 + 136) = 2 * a3;
        }
        result = (char*)memmove(v14, a2, a3);
        *(_BYTE*)(v14 + a3) = 0;
        *(_BYTE*)(a1 + 160) = 1;
      }
      goto LABEL_22;
    }
  }
  else {
    LOWORD(v18_.v18[0]) = 0;
  }
  result = wld_GfxLoader_loadSunPrecomputeData(a1, (__int64)"Default", 7u);
LABEL_22:
  if ((v18_.v18[0] & 1) != 0 && v18_.v19 != nullptr) {
    v13 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v13 = 56;
    }
    return (char*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v13);
  }
  return result;
}

char* wld_GfxLoader_loadDomeLightTexture(__int64 a1, __int64 a2,
                                         unsigned __int64 a3)
{
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  char* result;
  char* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  char* v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  char* v21;
  __int64 v22;
  __int64 v23;
  __int64 (**v24)();
  int v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  struct {
    __int64 (**v33)();
    __int64 v34;
    __int64 v35;
    char gap24_[8];
    char* v36;
  } v33_;
  struct {
    __int64 v37;
    unsigned __int64 v38;
    char* v39;
  } v37_;
  struct {
    _QWORD v40[2];
    char* v41;
  } v40_;

  if (*(_BYTE*)(a1 + 256) == 1) {
    v6 = *(unsigned __int8*)(a1 + 232);
    v7 = *(_QWORD*)(a1 + 240);
    if ((v6 & 1) == 0) {
      v7 = v6 >> 1;
    }
    if (v7 == a3) {
      v8 = (v6 & 1) != 0 ? *(_QWORD*)(a1 + 248) : a1 + 233;
      result = (char*)memcmp(v8, a2, a3);
      if ((_DWORD)result == 0) {
        return result;
      }
    }
  }
  if (a3 != 0) {
    if (a3 >= 0xFFFFFFFFFFFFFFF7LL) {
      String_60a1d0();
    }
    if (a3 >= 0x17) {
      if ((a3 | 7) == 0x17) {
        v11 = 26;
      }
      else {
        v11 = (a3 | 7) + 1;
      }
      v10 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                       v11, 16, 0);
      v40_.v40[1] = a3;
      v40_.v41 = v10;
      v40_.v40[0] = v11 | 1;
    }
    else {
      LOBYTE(v40_.v40[0]) = 2 * a3;
      v10 = (char*)v40_.v40 + 1;
    }
    memmove(v10, a2, a3);
    v10[a3] = 0;
    v12 = GameRoutine_1a0a680(v40_.v40, 0, "Contents:/Graphics/Textures/Light/",
                              34);
    v14 = *(_QWORD*)(v12 + 8);
    v13 = *(_QWORD*)(v12 + 16);
    v33_.v33 = *(__int64 (***)(void))v12;
    v33_.v34 = v14;
    v33_.v35 = v13;
    *(_QWORD*)(v12 + 8) = 0;
    *(_QWORD*)(v12 + 16) = 0;
    *(_QWORD*)v12 = 0;
    v15 = (__int64*)GameRoutine_1a09ce0(&v33_.v33, "_DomeLight_IBL.bntx", 19);
    v17 = v15[1];
    v16 = (char*)v15[2];
    v37_.v37 = *v15;
    v37_.v38 = v17;
    v37_.v39 = v16;
    v15[1] = 0;
    v15[2] = 0;
    *v15 = 0;
    if (((unsigned __int8)v33_.v33 & 1) != 0 && v33_.v35 != 0) {
      v18 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v18 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v18);
    }
    if ((v40_.v40[0] & 1) != 0 && v40_.v41 != nullptr) {
      v19 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v19 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v19);
    }
    if ((v37_.v37 & 1) != 0) {
      v20 = v37_.v38;
    }
    else {
      v20 = (unsigned __int64)(unsigned __int8)v37_.v37 >> 1;
    }
    if ((v37_.v37 & 1) != 0) {
      v21 = v37_.v39;
    }
    else {
      v21 = (char*)&v37_.v37 + 1;
    }
    if (((*(__int64 (**)(_QWORD, char*, unsigned __int64, __int64))(
             **(_QWORD**)(game_g_frame_clock + 13432) + 96LL))(
             *(_QWORD*)(game_g_frame_clock + 13432), v21, v20, 255) &
         1) == 0) {
      result = wld_GfxLoader_loadDomeLightTexture(a1, (__int64)"Outdoors", 8u);
      if ((v37_.v37 & 1) == 0) {
        return result;
      }
    LABEL_60:
      if (v37_.v39 != nullptr) {
        v32 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v32 = 56;
        }
        return (char*)nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v32);
      }
      return result;
    }
  }
  else {
    LOWORD(v37_.v37) = 0;
  }
  GameRoutine_b34420((void*)((__int64)&v33_.v33),
                     *(_QWORD**)(game_g_frame_clock + 13424),
                     (__int64)"Graphics/Textures/common_default", 0x20u,
                     (__int64)"Cmn_Default_LSPV_BC", 0x13u, 0);
  v22 = *(_QWORD*)(*(_QWORD*)a1 + 24LL);
  if (v22 != 0) {
    v23 = *(_QWORD*)(*(_QWORD*)a1 + 16LL);
    v24 = v33_.v33;
    v25 = v33_.v34;
    v26 = *(_QWORD*)(*(_QWORD*)a1 + 24LL);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v22 + 16), 1u,
                              memory_order_relaxed);
    v27 = std___1___shared_weak_count_lock(v26);
    std___1___shared_weak_count___release_weak(v22);
    if (v27 != 0) {
      if (v23 != 0) {
        v28 = *(_QWORD*)(v23 + 288);
        *(_QWORD*)(v28 + 1008) = v24;
        *(_DWORD*)(v28 + 1016) = v25;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v27 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
        std___1___shared_weak_count___release_weak(v27);
      }
    }
  }
  v33_.v36 = (char*)&v33_.v33;
  v33_.v33 = GameData_1fd1f40;
  v33_.v34 = a1;
  wld_GfxLoader_loadFile(a1, (unsigned __int8*)&v37_.v37, 3u,
                         (__int64)&v33_.v33, 1);
  result = v33_.v36;
  if (v33_.v36 == (char*)&v33_.v33) {
    v29 = 32;
  }
  else {
    if (v33_.v36 == nullptr) {
      goto LABEL_48;
    }
    v29 = 40;
  }
  result = (char*)(*(__int64 (**)(__int64))(*(_QWORD*)v33_.v36 + v29))(
      (__int64)v33_.v36);
LABEL_48:
  if (*(_BYTE*)(a1 + 256) == 1) {
    result = GameRoutine_60a060((char*)(a1 + 232), a2, a3);
    if ((v37_.v37 & 1) == 0) {
      return result;
    }
    goto LABEL_60;
  }
  if (a3 >= 0x17) {
    if ((a3 | 7) == 0x17) {
      v31 = 26;
    }
    else {
      v31 = (a3 | 7) + 1;
    }
    v30 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager, v31, 16,
                                              0);
    *(_QWORD*)(a1 + 240) = a3;
    *(_QWORD*)(a1 + 248) = v30;
    *(_QWORD*)(a1 + 232) = v31 | 1;
  }
  else {
    v30 = a1 + 233;
    *(_BYTE*)(a1 + 232) = 2 * a3;
    if (a3 == 0) {
    LABEL_59:
      *(_BYTE*)(v30 + a3) = 0;
      *(_BYTE*)(a1 + 256) = 1;
      if ((v37_.v37 & 1) == 0) {
        return result;
      }
      goto LABEL_60;
    }
  }
  result = (char*)memmove(v30, a2, a3);
  goto LABEL_59;
}

char* wld_GfxLoader_loadCloudTexture(__int64 a1, __int64 a2,
                                     unsigned __int64 a3)
{
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  char* result;
  char* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  char* v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  char* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  struct {
    __int64 (**v31)();
    __int64 v32;
    __int64 v33;
    char gap24_[8];
    char* v34;
  } v31_;
  struct {
    __int64 v35;
    unsigned __int64 v36;
    char* v37;
  } v35_;
  struct {
    _QWORD v38[2];
    char* v39;
  } v38_;

  if (*(_BYTE*)(a1 + 288) == 1) {
    v6 = *(unsigned __int8*)(a1 + 264);
    v7 = *(_QWORD*)(a1 + 272);
    if ((v6 & 1) == 0) {
      v7 = v6 >> 1;
    }
    if (v7 == a3) {
      v8 = (v6 & 1) != 0 ? *(_QWORD*)(a1 + 280) : a1 + 265;
      result = (char*)memcmp(v8, a2, a3);
      if ((_DWORD)result == 0) {
        return result;
      }
    }
  }
  if (a3 != 0) {
    if (a3 >= 0xFFFFFFFFFFFFFFF7LL) {
      String_60a1d0();
    }
    if (a3 >= 0x17) {
      if ((a3 | 7) == 0x17) {
        v11 = 26;
      }
      else {
        v11 = (a3 | 7) + 1;
      }
      v10 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                       v11, 16, 0);
      v38_.v38[1] = a3;
      v38_.v39 = v10;
      v38_.v38[0] = v11 | 1;
    }
    else {
      LOBYTE(v38_.v38[0]) = 2 * a3;
      v10 = (char*)v38_.v38 + 1;
    }
    memmove(v10, a2, a3);
    v10[a3] = 0;
    v12 = GameRoutine_1a0a680(v38_.v38, 0, "Contents:/Graphics/Textures/Cloud/",
                              34);
    v14 = *(_QWORD*)(v12 + 8);
    v13 = *(_QWORD*)(v12 + 16);
    v31_.v31 = *(__int64 (***)(void))v12;
    v31_.v32 = v14;
    v31_.v33 = v13;
    *(_QWORD*)(v12 + 8) = 0;
    *(_QWORD*)(v12 + 16) = 0;
    *(_QWORD*)v12 = 0;
    v15 = (__int64*)GameRoutine_1a09ce0(&v31_.v31, "_CLD.bntx", 9);
    v17 = v15[1];
    v16 = (char*)v15[2];
    v35_.v35 = *v15;
    v35_.v36 = v17;
    v35_.v37 = v16;
    v15[1] = 0;
    v15[2] = 0;
    *v15 = 0;
    if (((unsigned __int8)v31_.v31 & 1) != 0 && v31_.v33 != 0) {
      v18 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v18 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v18);
    }
    if ((v38_.v38[0] & 1) != 0 && v38_.v39 != nullptr) {
      v19 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v19 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v19);
    }
    if ((v35_.v35 & 1) != 0) {
      v20 = v35_.v36;
    }
    else {
      v20 = (unsigned __int64)(unsigned __int8)v35_.v35 >> 1;
    }
    if ((v35_.v35 & 1) != 0) {
      v21 = v35_.v37;
    }
    else {
      v21 = (char*)&v35_.v35 + 1;
    }
    if (((*(__int64 (**)(_QWORD, char*, unsigned __int64, __int64))(
             **(_QWORD**)(*game_g_frame_clock_ptr[0] + 13432) + 96LL))(
             *(_QWORD*)(*game_g_frame_clock_ptr[0] + 13432), v21, v20, 255) &
         1) == 0) {
      result = wld_GfxLoader_loadCloudTexture(a1, (__int64)"Default", 7u);
      if ((v35_.v35 & 1) == 0) {
        return result;
      }
    LABEL_60:
      if (v35_.v37 != nullptr) {
        v30 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v30 = 56;
        }
        return (char*)nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v30);
      }
      return result;
    }
  }
  else {
    LOWORD(v35_.v35) = 0;
  }
  v22 = *(_QWORD*)(*(_QWORD*)a1 + 24LL);
  if (v22 != 0) {
    v23 = *(_QWORD*)(*(_QWORD*)a1 + 16LL);
    v24 = *(_QWORD*)(*(_QWORD*)a1 + 24LL);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v22 + 16), 1u,
                              memory_order_relaxed);
    v25 = std___1___shared_weak_count_lock(v24);
    std___1___shared_weak_count___release_weak(v22);
    if (v25 != 0) {
      if (v23 != 0) {
        v26 = *(_QWORD*)(v23 + 288);
        *(_QWORD*)(v26 + 528) = 0;
        *(_DWORD*)(v26 + 536) = -1;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
        std___1___shared_weak_count___release_weak(v25);
      }
    }
  }
  v31_.v31 = GameData_1fd1fc0;
  v31_.v32 = a1;
  v31_.v34 = (char*)&v31_.v31;
  wld_GfxLoader_loadFile(a1, (unsigned __int8*)&v35_.v35, 4u,
                         (__int64)&v31_.v31, 1);
  result = v31_.v34;
  if (v31_.v34 == (char*)&v31_.v31) {
    v27 = 32;
  }
  else {
    if (v31_.v34 == nullptr) {
      goto LABEL_48;
    }
    v27 = 40;
  }
  result = (char*)(*(__int64 (**)(__int64))(*(_QWORD*)v31_.v34 + v27))(
      (__int64)v31_.v34);
LABEL_48:
  if (*(_BYTE*)(a1 + 288) == 1) {
    result = GameRoutine_60a060((char*)(a1 + 264), a2, a3);
    if ((v35_.v35 & 1) == 0) {
      return result;
    }
    goto LABEL_60;
  }
  if (a3 >= 0x17) {
    if ((a3 | 7) == 0x17) {
      v29 = 26;
    }
    else {
      v29 = (a3 | 7) + 1;
    }
    v28 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager, v29, 16,
                                              0);
    *(_QWORD*)(a1 + 272) = a3;
    *(_QWORD*)(a1 + 280) = v28;
    *(_QWORD*)(a1 + 264) = v29 | 1;
  }
  else {
    v28 = a1 + 265;
    *(_BYTE*)(a1 + 264) = 2 * a3;
    if (a3 == 0) {
    LABEL_59:
      *(_BYTE*)(v28 + a3) = 0;
      *(_BYTE*)(a1 + 288) = 1;
      if ((v35_.v35 & 1) == 0) {
        return result;
      }
      goto LABEL_60;
    }
  }
  result = (char*)memmove(v28, a2, a3);
  goto LABEL_59;
}

__int64* GfxLoader_c45e30(_QWORD* a1, __int64 a2, unsigned __int64 a3,
                          __int64 a4, unsigned __int64 a5)
{
  char* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  char* v16;
  __int64 v17;
  char* v18;
  unsigned __int64 v19;
  __int64* result;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  struct {
    __int64 v27;
    unsigned __int64 v28;
    char* v29;
  } v27_;
  struct {
    _QWORD v30[2];
    __int64 v31;
  } v30_;
  struct {
    _QWORD v32[2];
    __int64 v33;
  } v32_;

  if (a3 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_41:
    String_60a1d0();
  }
  if (a3 >= 0x17) {
    v10 = a2;
    if ((a3 | 7) == 0x17) {
      v11 = 26;
    }
    else {
      v11 = (a3 | 7) + 1;
    }
    v12 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager, v11, 16,
                                              0);
    a2 = v10;
    v9 = (char*)v12;
    v30_.v30[1] = a3;
    v30_.v31 = v12;
    v30_.v30[0] = v11 | 1;
    goto LABEL_9;
  }
  LOBYTE(v30_.v30[0]) = 2 * a3;
  v9 = (char*)v30_.v30 + 1;
  if (a3 != 0) {
  LABEL_9:
    memmove(v9, a2, a3);
  }
  v9[a3] = 0;
  v13 = (_QWORD*)GameRoutine_1a0a680(v30_.v30, 0,
                                     "Contents:/Graphics/Settings/Preset/", 35);
  v15 = v13[1];
  v14 = v13[2];
  v32_.v32[0] = *v13;
  v32_.v32[1] = v15;
  v32_.v33 = v14;
  v13[1] = 0;
  v13[2] = 0;
  *v13 = 0;
  if (a5 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_41;
  }
  if (a5 >= 0x17) {
    if ((a5 | 7) == 0x17) {
      v17 = 26;
    }
    else {
      v17 = (a5 | 7) + 1;
    }
    v16 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                     v17, 16, 0);
    v27_.v28 = a5;
    v27_.v29 = v16;
    v27_.v27 = v17 | 1;
    goto LABEL_18;
  }
  LOBYTE(v27_.v27) = 2 * a5;
  v16 = (char*)&v27_.v27 + 1;
  if (a5 != 0) {
  LABEL_18:
    memmove(v16, a4, a5);
  }
  v16[a5] = 0;
  if ((v27_.v27 & 1) != 0) {
    v18 = v27_.v29;
  }
  else {
    v18 = (char*)&v27_.v27 + 1;
  }
  if ((v27_.v27 & 1) != 0) {
    v19 = v27_.v28;
  }
  else {
    v19 = (unsigned __int64)(unsigned __int8)v27_.v27 >> 1;
  }
  result = (__int64*)GameRoutine_1a09ce0(v32_.v32, v18, v19);
  v21 = *result;
  v22 = result[1];
  *result = 0;
  result[1] = 0;
  *a1 = v21;
  a1[1] = v22;
  v23 = result[2];
  result[2] = 0;
  a1[2] = v23;
  if ((v27_.v27 & 1) != 0 && v27_.v29 != nullptr) {
    v24 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v24 = 56;
    }
    result = (__int64*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v24);
  }
  if ((v32_.v32[0] & 1) != 0 && v32_.v33 != 0) {
    v25 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v25 = 56;
    }
    result = (__int64*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v25);
  }
  if ((v30_.v30[0] & 1) != 0 && v30_.v31 != 0) {
    v26 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v26 = 56;
    }
    return (__int64*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v26);
  }
  return result;
}

__int64 wld_GfxLoader_loadFile(__int64 a1, unsigned __int8* a2, unsigned int a3,
                               __int64 a4, char a5)
{
  _QWORD* v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 result;
  unsigned __int64 v12;
  _QWORD* v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  _BYTE* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  bool v22;
  unsigned __int64 v23;
  unsigned __int8* v24;
  unsigned __int64 v25;
  __int64 v26;
  _QWORD* v27;
  _BYTE* v28;
  _QWORD* v29;
  _QWORD* v30;
  __int64 v31;
  _QWORD* v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  bool v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  unsigned __int8* v41;
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
  _BYTE v52[32];
  _BYTE* v53;
  _BYTE v54[32];
  _BYTE* v55;
  _QWORD v56[4];
  _QWORD* v57;

  v8 = (_QWORD*)(a1 + 24LL * a3 + 536);
  if (*v8 != 0) {
    v9 = *(_QWORD*)(a1 + 24LL * a3 + 552);
    *(_QWORD*)(a1 + 24LL * a3 + 544) = 0;
    *(_QWORD*)(a1 + 24LL * a3 + 552) = 0;
    if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
      std___1___shared_weak_count___release_weak(v9);
    }
    GameRoutine_634d80(*(_QWORD*)(*v8 + 8LL), *v8);
    *v8 = 0;
  }
  v10 = *a2;
  result = *(_QWORD*)(a4 + 32);
  if ((v10 & 1) != 0) {
    v12 = *((_QWORD*)a2 + 1);
  }
  else {
    v12 = v10 >> 1;
  }
  if (v12 == 0) {
    if (result != 0) {
      v56[0] = 0;
      return (*(__int64 (**)(__int64, _QWORD*))(*(_QWORD*)result + 48LL))(
          result, v56);
    }
    return result;
  }
  if (result == 0) {
    v19 = v8[2];
    v8[1] = 0;
    v8[2] = 0;
    if (v19 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
      std___1___shared_weak_count___release_weak(v19);
    }
    v20 = *(_QWORD*)(game_g_frame_clock + 13432);
    v21 = *a2;
    v22 = (v21 & 1) == 0;
    v23 = v21 >> 1;
    if (v22) {
      v24 = a2 + 1;
    }
    else {
      v24 = *((unsigned __int8**)a2 + 2);
    }
    if (v22) {
      v25 = v23;
    }
    else {
      v25 = *((_QWORD*)a2 + 1);
    }
    if ((a5 & 1) != 0) {
      v44 = 0;
      v45 = 0;
      *v8 = (*(__int64 (**)(__int64, unsigned __int8*, unsigned __int64,
                            __int64*))(*(_QWORD*)v20 + 40LL))(v20, v24, v25,
                                                              &v44);
      result = v45;
      if (v45 == 0) {
        return result;
      }
    }
    else {
      v46 = 0;
      v47 = 0;
      *v8 = (*(__int64 (**)(__int64, unsigned __int8*, unsigned __int64,
                            __int64*, __int64))(*(_QWORD*)v20 + 16LL))(
          v20, v24, v25, &v46, 255);
      result = v47;
      if (v47 == 0) {
        return result;
      }
    }
    return std___1___shared_weak_count___release_weak(result);
  }
  v13 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v14 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 80, 16, 0);
  v14[2] = 0;
  v15 = v8[2];
  v14[8] = 0;
  *v14 = GameData_1fbf780;
  v14[1] = 0;
  v8[1] = v14 + 4;
  v8[2] = v14;
  if (v15 == 0 || atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) != 0) {
    v16 = *(_QWORD*)(a4 + 32);
    if (v16 != 0) {
      goto LABEL_14;
    }
  LABEL_34:
    v18 = v8[1];
    v53 = nullptr;
    goto LABEL_35;
  }
  (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
  std___1___shared_weak_count___release_weak(v15);
  v16 = *(_QWORD*)(a4 + 32);
  if (v16 == 0) {
    goto LABEL_34;
  }
LABEL_14:
  if (v16 == a4) {
    v53 = v52;
    (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v16 + 24LL))(v16, v52);
    v17 = v53;
    v18 = v8[1];
    if (v53 != nullptr) {
      goto LABEL_37;
    }
  LABEL_35:
    v26 = *v13;
    v55 = nullptr;
    v27 = (_QWORD*)fw_memory_HeapManager_Allocate(v26, 64, 16, 0);
    v27[6] = 0;
    *v27 = GameData_1fd20c0;
    goto LABEL_45;
  }
  v17 = (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
  v53 = v17;
  v18 = v8[1];
  if (v17 == nullptr) {
    goto LABEL_35;
  }
LABEL_37:
  if (v17 == v52) {
    v55 = v54;
    (*(void (**)(_BYTE*, _BYTE*))(*(_QWORD*)v17 + 24LL))(v17, v54);
    v28 = v55;
  }
  else {
    v28 = (_BYTE*)(*(__int64 (**)(_BYTE*))(*(_QWORD*)v17 + 16LL))(v17);
    v55 = v28;
  }
  v27 = (_QWORD*)fw_memory_HeapManager_Allocate(*v13, 64, 16, 0);
  *v27 = GameData_1fd20c0;
  v29 = v27 + 2;
  if (v28 != nullptr) {
    if (v28 == v54) {
      v27[6] = v29;
      v32 = v27;
      (*(void (**)(_BYTE*))(*(_QWORD*)v28 + 24LL))(v28);
      v27 = v32;
    }
    else {
      v30 = v27;
      v31 = (*(__int64 (**)(_BYTE*, _QWORD*))(*(_QWORD*)v28 + 16LL))(v28, v29);
      v27 = v30;
      v30[6] = v31;
    }
  }
  else {
    v27[6] = 0;
  }
LABEL_45:
  v57 = v27;
  GameRoutine_a934d0(v56, v18);
  if (v57 == v56) {
    v33 = 32;
  }
  else {
    if (v57 == nullptr) {
      goto LABEL_50;
    }
    v33 = 40;
  }
  (*(void (**)(__int64))(*v57 + v33))((__int64)v57);
LABEL_50:
  if (v55 == v54) {
    v34 = 32;
  }
  else {
    if (v55 == nullptr) {
      goto LABEL_55;
    }
    v34 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)v55 + v34))((__int64)v55);
LABEL_55:
  if (v53 == v52) {
    v35 = 32;
    goto LABEL_59;
  }
  if (v53 != nullptr) {
    v35 = 40;
  LABEL_59:
    (*(void (**)(__int64))(*(_QWORD*)v53 + v35))((__int64)v53);
  }
  v36 = *(_QWORD*)(game_g_frame_clock + 13432);
  v37 = *a2;
  v38 = (v37 & 1) == 0;
  v39 = v37 >> 1;
  if (v38) {
    v40 = v39;
  }
  else {
    v40 = *((_QWORD*)a2 + 1);
  }
  if (v38) {
    v41 = a2 + 1;
  }
  else {
    v41 = *((unsigned __int8**)a2 + 2);
  }
  if ((a5 & 1) != 0) {
    v42 = v8[2];
    v48 = v8[1];
    v49 = v42;
    if (v42 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v42 + 16), 1u,
                                memory_order_relaxed);
    }
    *v8 =
        (*(__int64 (**)(__int64, unsigned __int8*, unsigned __int64, __int64*))(
            *(_QWORD*)v36 + 40LL))(v36, v41, v40, &v48);
    result = v49;
    if (v49 == 0) {
      return result;
    }
    return std___1___shared_weak_count___release_weak(result);
  }
  v43 = v8[2];
  v50 = v8[1];
  v51 = v43;
  if (v43 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v43 + 16), 1u,
                              memory_order_relaxed);
  }
  *v8 = (*(__int64 (**)(__int64, unsigned __int8*, unsigned __int64, __int64*,
                        __int64))(*(_QWORD*)v36 + 16LL))(v36, v41, v40, &v50,
                                                         255);
  result = v51;
  if (v51 != 0) {
    return std___1___shared_weak_count___release_weak(result);
  }
  return result;
}

__int64 GfxLoader_c46500(__int64 a1, __int64 a2)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned int v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  int v17;
  __int64 v18;
  char v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  char v23;
  __int64 v24;
  __int64 v25;
  char v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  char v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 i;
  __int64 v47;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  unsigned __int64 v53;
  _QWORD* v54;

  v2 = (__int64*)a1;
  *(_BYTE*)(*(_QWORD*)(a2 + 360) + 168LL) = *(_BYTE*)(a1 + 96);
  if (*(_BYTE*)(a1 + 136) == 1 &&
      (v3 = *(_QWORD*)(a2 + 360), v4 = *(_QWORD*)(a1 + 100),
       *(_DWORD*)(v3 + 172) = v4, *(_BYTE*)(v3 + 176) = BYTE4(v4),
       (*(_BYTE*)(a1 + 136) & 1) != 0)) {
    v5 = 120;
  }
  else {
    v5 = 144;
  }
  v6 = (__int64*)(*(_QWORD*)(a2 + 360) + v5);
  v7 = *v6;
  v8 = v6[1];
  if (*v6 != v8) {
    do {
      v8 -= 232;
      a1 = Manager_c47290(v8);
    } while (v8 != v7);
  }
  v6[1] = v7;
  v9 = *v2;
  if (v2[1] != *v2) {
    v10 = 0;
    v11 = 0;
    do {
      v13 = v9 + 232 * v10;
      if (*(_BYTE*)(v13 + 176) == 1) {
        *(_BYTE*)(v13 + 176) = 0;
      }
      if (*(_BYTE*)(v13 + 224) == 1) {
        *(_BYTE*)(v13 + 224) = 0;
      }
      if (*(_BYTE*)(v13 + 200) == 1) {
        *(_BYTE*)(v13 + 200) = 0;
      }
      v14 = v2[3];
      v15 = *(_QWORD*)(v14 + 8 * v10);
      if (v15 == 0) {
        goto LABEL_29;
      }
      a1 = *(_QWORD*)(v15 + 592);
      if (a1 == 0) {
        goto LABEL_29;
      }
      a1 = GameRoutine_5fc1f0(a1);
      if (a1 == 0) {
        goto LABEL_29;
      }
      a1 = GameRoutine_5fc1f0(*(_QWORD*)(*(_QWORD*)(v14 + 8 * v10) + 592LL));
      v16 = **(_QWORD**)(a1 + 40);
      v17 = *(_DWORD*)(v16 + 144);
      v18 = *(_QWORD*)(*(_QWORD*)(v16 + 128) + 8LL);
      if ((*(_BYTE*)(v13 + 176) & 1) == 0) {
        *(_BYTE*)(v13 + 176) = 1;
      }
      *(_QWORD*)(v13 + 160) = v18;
      *(_DWORD*)(v13 + 168) = v17;
      if (*(_QWORD*)(v2[6] + 8 * v10) != 0 ||
          *(int*)(*(_QWORD*)(a1 + 56) + 4LL) < 2) {
        if (*(_BYTE*)(v13 + 224) != 1) {
          goto LABEL_29;
        }
        v23 = 0;
      }
      else {
        v19 = *(_BYTE*)(v13 + 224);
        v20 = *(_QWORD*)(*(_QWORD*)(a1 + 40) + 8LL);
        v21 = *(_QWORD*)(v20 + 144);
        v22 = *(_QWORD*)(*(_QWORD*)(v20 + 128) + 8LL);
        *(_DWORD*)(v13 + 216) = v21;
        *(_QWORD*)(v13 + 208) = v22;
        if ((v19 & 1) != 0) {
          goto LABEL_29;
        }
        v23 = 1;
      }
      *(_BYTE*)(v13 + 224) = v23;
    LABEL_29:
      v24 = v2[6];
      v25 = *(_QWORD*)(v24 + 8 * v10);
      if (v25 != 0) {
        a1 = *(_QWORD*)(v25 + 592);
        if (a1 != 0) {
          a1 = GameRoutine_5fc1f0(a1);
          if (a1 != 0) {
            a1 = GameRoutine_5fc1f0(
                *(_QWORD*)(*(_QWORD*)(v24 + 8 * v10) + 592LL));
            v26 = *(_BYTE*)(v13 + 224);
            v27 = *(_QWORD*)(*(_QWORD*)(a1 + 40) +
                             8LL * (*(_DWORD*)(*(_QWORD*)(a1 + 56) + 4LL) > 1));
            v28 = *(_QWORD*)(v27 + 144);
            v29 = *(_QWORD*)(*(_QWORD*)(v27 + 128) + 8LL);
            *(_DWORD*)(v13 + 216) = v28;
            *(_QWORD*)(v13 + 208) = v29;
            if ((v26 & 1) == 0) {
              *(_BYTE*)(v13 + 224) = 1;
            }
          }
        }
      }
      v30 = v2[9];
      v31 = *(_QWORD*)(v30 + 8 * v10);
      if (v31 != 0) {
        a1 = *(_QWORD*)(v31 + 592);
        if (a1 != 0) {
          a1 = GameRoutine_5fc1f0(a1);
          if (a1 != 0) {
            a1 = GameRoutine_5fc1f0(
                *(_QWORD*)(*(_QWORD*)(v30 + 8 * v10) + 592LL));
            v32 = *(_BYTE*)(v13 + 200);
            v33 = **(_QWORD**)(a1 + 40);
            v34 = *(_QWORD*)(v33 + 144);
            v35 = *(_QWORD*)(*(_QWORD*)(v33 + 128) + 8LL);
            *(_DWORD*)(v13 + 192) = v34;
            *(_QWORD*)(v13 + 184) = v35;
            if ((v32 & 1) == 0) {
              *(_BYTE*)(v13 + 200) = 1;
            }
          }
        }
      }
      v37 = v6[1];
      v36 = v6[2];
      if (v37 < v36) {
        a1 = Manager_c473c0(v6[1], v13);
        v12 = v37 + 232;
      }
      else {
        v38 = *v6;
        v39 = v37 - *v6;
        v40 = 0x34F72C234F72C235LL * (v39 >> 3) + 1;
        if (v40 > 0x11A7B9611A7B961LL) {
          GameRoutine_c47790(a1);
        }
        v54 = v6 + 2;
        v41 = 0x34F72C234F72C235LL * ((__int64)(v36 - v38) >> 3);
        if (2 * v41 > v40) {
          v40 = 2 * v41;
        }
        if (v41 >= 0x8D3DCB08D3DCB0LL) {
          v42 = 0x11A7B9611A7B961LL;
        }
        else {
          v42 = v40;
        }
        if (v42 != 0) {
          if (v42 > 0x11A7B9611A7B961LL) {
            GameRoutine_60a210(a1);
          }
          v43 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 232 * v42, 16, 0);
        }
        else {
          v43 = 0;
        }
        v44 = v43 + v39;
        v50 = v43;
        v51 = v44;
        v53 = v43 + 232 * v42;
        Manager_c473c0(v44, v13);
        v52 = v44 + 232;
        a1 = Manager_c475a0(v6, &v50);
        v12 = v6[1];
        v45 = v51;
        for (i = v52; i != v45; a1 = Manager_c47290(i)) {
          i -= 232;
        }
        if (v50 != 0) {
          v47 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v47 = 56;
          }
          a1 = nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v47);
        }
      }
      v6[1] = v12;
      v9 = *v2;
      v10 = ++v11;
    } while (0x34F72C234F72C235LL * ((v2[1] - *v2) >> 3) >
             (unsigned __int64)v11);
  }
  return GameRoutine_b86ad0(a2);
}

_QWORD* GfxLoader_c46f00(_QWORD* result, unsigned __int64 a2)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  bool v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  long double v25;
  __int64 v26;

  v2 = result[1];
  v3 = result[2];
  v4 = result;
  if (0x4EC4EC4EC4EC4EC5LL * ((v3 - v2) >> 2) >= a2) {
    if (a2 != 0) {
      v12 = v2 + 52 * a2;
      v13 = 52 * a2 - 52;
      if ((~(v13 / 0x34) & 3) != 0) {
        v14 = -(__int64)(((unsigned __int8)(v13 / 0x34) + 1) & 3);
        do {
          *(_QWORD*)v2 = 0;
          *(_QWORD*)(v2 + 8) = 0;
          *(_QWORD*)(v2 + 16) = 0x3F8000003F800000LL;
          *(_QWORD*)(v2 + 24) = 0x3F8000003F800000LL;
          v15 = __CFADD__(v14++, 1);
          *(_QWORD*)(v2 + 32) = 0x3F8000003F800000LL;
          *(_QWORD*)(v2 + 40) = 0x3F8000003F800000LL;
          *(_DWORD*)(v2 + 48) = 1065353216;
          v2 += 52;
        } while (!v15);
      }
      if (v13 >= 0x9C) {
        do {
          *(_QWORD*)v2 = 0;
          *(_QWORD*)(v2 + 8) = 0;
          *(_QWORD*)(v2 + 16) = 0x3F8000003F800000LL;
          *(_QWORD*)(v2 + 24) = 0x3F8000003F800000LL;
          *(_QWORD*)(v2 + 32) = 0x3F8000003F800000LL;
          *(_QWORD*)(v2 + 40) = 0x3F8000003F800000LL;
          *(_DWORD*)(v2 + 48) = 1065353216;
          *(_QWORD*)(v2 + 52) = 0;
          *(_QWORD*)(v2 + 60) = 0;
          *(_QWORD*)(v2 + 68) = 0x3F8000003F800000LL;
          *(_QWORD*)(v2 + 76) = 0x3F8000003F800000LL;
          *(_QWORD*)(v2 + 84) = 0x3F8000003F800000LL;
          *(_QWORD*)(v2 + 92) = 0x3F8000003F800000LL;
          *(_DWORD*)(v2 + 100) = 1065353216;
          *(_QWORD*)(v2 + 104) = 0;
          *(_QWORD*)(v2 + 112) = 0;
          *(_QWORD*)(v2 + 120) = 0x3F8000003F800000LL;
          *(_QWORD*)(v2 + 128) = 0x3F8000003F800000LL;
          *(_QWORD*)(v2 + 136) = 0x3F8000003F800000LL;
          *(_QWORD*)(v2 + 144) = 0x3F8000003F800000LL;
          *(_DWORD*)(v2 + 152) = 1065353216;
          *(_QWORD*)(v2 + 164) = 0;
          *(_QWORD*)(v2 + 156) = 0;
          *(_QWORD*)(v2 + 172) = 0x3F8000003F800000LL;
          *(_QWORD*)(v2 + 180) = 0x3F8000003F800000LL;
          *(_QWORD*)(v2 + 188) = 0x3F8000003F800000LL;
          *(_QWORD*)(v2 + 196) = 0x3F8000003F800000LL;
          *(_DWORD*)(v2 + 204) = 1065353216;
          v2 += 208;
        } while (v2 != v12);
      }
      v2 = v12;
    }
    result[1] = v2;
  }
  else {
    v5 = v2 - *result;
    v6 = a2 + 0x4EC4EC4EC4EC4EC5LL * (v5 >> 2);
    if (v6 > 0x4EC4EC4EC4EC4ECLL) {
      GameRoutine_c47230();
    }
    v7 = fw_memory_g_heap_manager_ptr;
    v8 = 0x4EC4EC4EC4EC4EC5LL * ((v3 - *result) >> 2);
    if (2 * v8 > v6) {
      v6 = 2 * v8;
    }
    if (v8 >= 0x276276276276276LL) {
      v9 = 0x4EC4EC4EC4EC4ECLL;
    }
    else {
      v9 = v6;
    }
    if (v9 != 0) {
      if (v9 > 0x4EC4EC4EC4EC4ECLL) {
        GameRoutine_60a210(result);
      }
      v10 = a2;
      v11 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 52 * v9, 16, 0);
      a2 = v10;
    }
    else {
      v11 = 0;
    }
    v16 = v11 + v5;
    v17 = 52 * a2 - 52;
    v18 = v11 + v5 + 52 * a2;
    if ((~(v17 / 0x34) & 3) != 0) {
      v20 = -(__int64)(((unsigned __int8)(v17 / 0x34) + 1) & 3);
      v19 = v16;
      do {
        *(_QWORD*)v19 = 0;
        *(_QWORD*)(v19 + 8) = 0;
        *(_QWORD*)(v19 + 16) = 0x3F8000003F800000LL;
        *(_QWORD*)(v19 + 24) = 0x3F8000003F800000LL;
        v15 = __CFADD__(v20++, 1);
        *(_QWORD*)(v19 + 32) = 0x3F8000003F800000LL;
        *(_QWORD*)(v19 + 40) = 0x3F8000003F800000LL;
        *(_DWORD*)(v19 + 48) = 1065353216;
        v19 += 52;
      } while (!v15);
    }
    else {
      v19 = v16;
    }
    if (v17 >= 0x9C) {
      do {
        *(_QWORD*)v19 = 0;
        *(_QWORD*)(v19 + 8) = 0;
        *(_QWORD*)(v19 + 16) = 0x3F8000003F800000LL;
        *(_QWORD*)(v19 + 24) = 0x3F8000003F800000LL;
        *(_QWORD*)(v19 + 32) = 0x3F8000003F800000LL;
        *(_QWORD*)(v19 + 40) = 0x3F8000003F800000LL;
        *(_DWORD*)(v19 + 48) = 1065353216;
        *(_QWORD*)(v19 + 52) = 0;
        *(_QWORD*)(v19 + 60) = 0;
        *(_QWORD*)(v19 + 68) = 0x3F8000003F800000LL;
        *(_QWORD*)(v19 + 76) = 0x3F8000003F800000LL;
        *(_QWORD*)(v19 + 84) = 0x3F8000003F800000LL;
        *(_QWORD*)(v19 + 92) = 0x3F8000003F800000LL;
        *(_DWORD*)(v19 + 100) = 1065353216;
        *(_QWORD*)(v19 + 104) = 0;
        *(_QWORD*)(v19 + 112) = 0;
        *(_QWORD*)(v19 + 120) = 0x3F8000003F800000LL;
        *(_QWORD*)(v19 + 128) = 0x3F8000003F800000LL;
        *(_QWORD*)(v19 + 136) = 0x3F8000003F800000LL;
        *(_QWORD*)(v19 + 144) = 0x3F8000003F800000LL;
        *(_DWORD*)(v19 + 152) = 1065353216;
        *(_QWORD*)(v19 + 164) = 0;
        *(_QWORD*)(v19 + 156) = 0;
        *(_QWORD*)(v19 + 172) = 0x3F8000003F800000LL;
        *(_QWORD*)(v19 + 180) = 0x3F8000003F800000LL;
        *(_QWORD*)(v19 + 188) = 0x3F8000003F800000LL;
        *(_QWORD*)(v19 + 196) = 0x3F8000003F800000LL;
        *(_DWORD*)(v19 + 204) = 1065353216;
        v19 += 208;
      } while (v19 != v18);
    }
    v21 = v11 + 52 * v9;
    v22 = *v4;
    v23 = v4[1] - *v4;
    v24 = v16 - v23;
    result = (_QWORD*)memcpy(v16 - v23, *v4, v23);
    *v4 = v24;
    v4[1] = v18;
    v4[2] = v21;
    if (v22 != 0) {
      v26 = 128;
      if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) == 0) {
        v26 = 56;
      }
      return (_QWORD*)nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v7 + v26,
                                                         v25);
    }
  }
  return result;
}

__int64 GfxLoader_c48320(__int64 result, __int64* a2)
{
  unsigned __int64 v2;
  unsigned __int8* v3;
  _QWORD* v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  char* v12;
  __int64 v13;
  unsigned int* v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  int v18;
  __int64 v19;
  __int64 v20;
  bool* v21;
  struct {
    __int64 v22;
    unsigned __int64 v23;
    char* v24;
  } v22_;
  _QWORD v25[2];

  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v2 = *(_QWORD*)(result + 56) + *(_QWORD*)(result + 48) - 1LL;
  v3 =
      *(unsigned __int8**)(*(_QWORD*)(*(_QWORD*)(result + 24) + 8 * (v2 >> 9)) +
                           8 * (v2 & 0x1FF));
  if (v3 != nullptr) {
    v5 = (_QWORD*)result;
    if ((*(_BYTE*)a2 & 1) != 0) {
      result = fw_text_String_CopyTerminated(&v22_.v22, a2[2], a2[1]),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    else {
      v6 = a2[1];
      v22_.v22 = *a2;
      v22_.v23 = v6;
      v22_.v24 = (char*)a2[2];
    }
    if ((v22_.v22 & 1) != 0) {
      v7 = v22_.v23;
    }
    else {
      v7 = (unsigned __int64)(unsigned __int8)v22_.v22 >> 1;
    }
    if ((v22_.v22 & 1) != 0 && v22_.v24 != nullptr) {
      v8 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v8 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v8),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    if (v7 == 0) {
    LABEL_33:
      v21 = (bool*)a2[3];
      result = GameRoutine_dbf0(*v3),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      *v21 = (result & 0x100000000LL) != 0;
      return result;
    }
    v9 = v5[7] + v5[6] - 1LL;
    v10 = *(_QWORD*)(*(_QWORD*)(v5[3] + 8 * (v9 >> 9)) + 8 * (v9 & 0x1FF));
    if ((*(_BYTE*)a2 & 1) != 0) {
      result = fw_text_String_CopyTerminated(&v22_.v22, a2[2], a2[1]),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    else {
      v11 = a2[1];
      v22_.v22 = *a2;
      v22_.v23 = v11;
      v22_.v24 = (char*)a2[2];
    }
    if ((*(_BYTE*)v10 & 0x7F) == 8 &&
        ((v22_.v22 & 1) == 0 ? (v12 = (char*)&v22_.v22 + 1) : (v12 = v22_.v24),
         v13 = strlen(v12), v14 = *(unsigned int**)(v10 + 1), v25[0] = v12,
         v25[1] = v13, result = (__int64)game_6b7f00(v14, 0, v14, v14[1], v25),
         v15 != v14[1])) {
      v16 = *(unsigned int*)result;
      if (v15 >= v16) {
        v18 = v15 - v16;
        v19 = __clz(v18 + 16);
        v17 = *(_QWORD*)(*(_QWORD*)(result + 16) + 8 * (27 - v19) + 8) +
              32LL *
                  (unsigned int)(v18 - *((_DWORD*)GameData_212ce38 + 28 - v19));
      }
      else {
        v17 = *(_QWORD*)(result + 8) + 32 * v15;
      }
      v3 = (unsigned __int8*)(v17 + 16);
      if ((v22_.v22 & 1) == 0) {
        goto LABEL_32;
      }
    }
    else {
      v3 = nullptr;
      if ((v22_.v22 & 1) == 0) {
        goto LABEL_32;
      }
    }
    if (v22_.v24 != nullptr) {
      v20 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v20 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v20),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  LABEL_32:
    if (v3 == nullptr) {
      return result;
    }
    goto LABEL_33;
  }
  return result;
}

float GfxLoader_c48550(_QWORD* a1, __int64* a2)
{

#pragma clang fp contract(off)
  unsigned __int64 v3;
  unsigned __int64 v5;
  float result;
  unsigned __int64 v7;
  __int64 v8;
  char v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  char* v13;
  __int64 v14;
  unsigned int* v15;
  __int64 v16;
  bool v17;
  __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  struct {
    __int64 v24;
    unsigned __int64 v25;
    __int64 v26;
  } v24_;
  struct {
    __int64 v27;
    unsigned __int64 v28;
    __int64 v29;
    float* v30;
  } v27_;
  float v31;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w")),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v3 = a1[7] + a1[6] - 1LL;
  if (*(_QWORD*)(*(_QWORD*)(a1[3] + 8 * (v3 >> 9)) + 8 * (v3 & 0x1FF)) == 0) {
    goto LABEL_27;
  }
  if ((*(_BYTE*)a2 & 1) != 0) {
    fw_text_String_CopyTerminated(&v27_.v27, a2[2], a2[1]),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w")),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  else {
    v5 = a2[1];
    v27_.v27 = *a2;
    v27_.v28 = v5;
    v27_.v29 = a2[2];
  }
  if ((v27_.v27 & 1) != 0) {
    v7 = v27_.v28;
  }
  else {
    v7 = (unsigned __int64)(unsigned __int8)v27_.v27 >> 1;
  }
  if ((v27_.v27 & 1) != 0 && v27_.v29 != 0) {
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v8),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w")),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v9 = *(_BYTE*)a2;
  if (v7 == 0) {
    goto LABEL_30;
  }
  v10 = a1[7] + a1[6] - 1LL;
  v11 = *(_QWORD*)(*(_QWORD*)(a1[3] + 8 * (v10 >> 9)) + 8 * (v10 & 0x1FF));
  if ((*(_BYTE*)a2 & 1) != 0) {
    fw_text_String_CopyTerminated(&v27_.v27, a2[2], a2[1]),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w")),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  else {
    v12 = a2[1];
    v27_.v27 = *a2;
    v27_.v28 = v12;
    v27_.v29 = a2[2];
  }
  if ((*(_BYTE*)v11 & 0x7F) == 8) {
    if ((v27_.v27 & 1) != 0) {
      v13 = (char*)v27_.v29;
    }
    else {
      v13 = (char*)&v27_.v27 + 1;
    }
    v14 = strlen(v13),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w")),
    v16 = COERCE_AS(__typeof__(v16),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v15 = *(unsigned int**)(v11 + 1);
    v24_.v24 = (__int64)v13;
    v24_.v25 = v14;
    game_6b7f00(v15, 0, v15, v15[1], &v24_.v24),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w")),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v17 = v16 == v15[1];
    if ((v27_.v27 & 1) != 0) {
    LABEL_22:
      if (v27_.v29 != 0) {
        v18 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v18 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                      v18),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(float, "s0", "=w")),
            v16 = COERCE_AS(__typeof__(v16),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
    }
  }
  else {
    v17 = true;
    if ((v27_.v27 & 1) != 0) {
      goto LABEL_22;
    }
  }
  if (v17) {
  LABEL_27:
    v19 = a2[3];
    if (*(_BYTE*)(v19 + 4) == 1) {
      *(_BYTE*)(v19 + 4) = 0;
    }
    return result;
  }
  v9 = *(_BYTE*)a2;
LABEL_30:
  if ((v9 & 1) != 0) {
    fw_text_String_CopyTerminated(&v24_.v24, a2[2], a2[1]),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w")),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if ((v24_.v24 & 1) != 0) {
      goto LABEL_32;
    }
  }
  else {
    v20 = a2[1];
    v24_.v24 = *a2;
    v24_.v25 = v20;
    v24_.v26 = a2[2];
    if ((v24_.v24 & 1) != 0) {
    LABEL_32:
      fw_text_String_CopyTerminated(&v27_.v27, v24_.v26, v24_.v25),
          result =
              COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w")),
          v16 = COERCE_AS(__typeof__(v16),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      goto LABEL_35;
    }
  }
  v27_.v27 = v24_.v24;
  v27_.v28 = v24_.v25;
  v27_.v29 = v24_.v26;
LABEL_35:
  v27_.v30 = &v31;
  GameRoutine_c47a00(a1, &v27_.v27),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w")),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((v27_.v27 & 1) != 0 && v27_.v29 != 0) {
    v21 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v21 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v21),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w")),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  if ((v24_.v24 & 1) != 0 && v24_.v26 != 0) {
    v22 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v22 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v22),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w")),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  result = v31;
  v23 = a2[3];
  *(_BYTE*)(v23 + 4) = 1;
  *(float*)v23 = result;
  return result;
}

__int64 wld_GfxLoader_loadSunPrecomputeData_lambda0_Invoke(__int64 result,
                                                           __int64 a2)
{
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  double v9;
  double v10;
  int v11;
  float v12;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  unsigned __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  unsigned __int64 v47;
  unsigned __int64 v48;
  __int64 v49;
  __int64 v50;
  unsigned __int64 v51;
  __int64 v52;
  __int64 v53;
  unsigned __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;

  v2 = *(_QWORD*)(result + 8);
  v3 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  if (*(_QWORD*)a2 != 0) {
    v4 = *(_QWORD*)(*(_QWORD*)a2 + 592LL);
    if (v4 != 0) {
      v8 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 248, 16, 0);
      *(_QWORD*)(v8 + 96) = 0;
      *(_QWORD*)(v8 + 112) = 0;
      *(_QWORD*)(v8 + 120) = 0;
      *(_QWORD*)(v8 + 128) = 0;
      *(_QWORD*)(v8 + 136) = 0;
      *(_QWORD*)(v8 + 16) = 0x4022000000000000LL;
      *(_QWORD*)(v8 + 24) = 0x100000000LL;
      *(_QWORD*)(v8 + 32) = 1;
      *(_QWORD*)(v8 + 40) = 0;
      *(_QWORD*)(v8 + 64) = 0x4022000000000000LL;
      *(_QWORD*)(v8 + 72) = 0x100000000LL;
      *(_QWORD*)(v8 + 80) = 1;
      *(_QWORD*)(v8 + 88) = 0;
      *(_QWORD*)(v8 + 144) = 0;
      *(_QWORD*)(v8 + 152) = 0;
      *(_QWORD*)(v8 + 160) = 0;
      *(_QWORD*)(v8 + 168) = 0;
      *(_QWORD*)(v8 + 176) = 0;
      *(_QWORD*)(v8 + 184) = 0;
      *(_QWORD*)(v8 + 192) = 0;
      *(_QWORD*)(v8 + 200) = 0;
      *(_QWORD*)(v8 + 208) = 0;
      *(_QWORD*)(v8 + 216) = 0;
      *(_QWORD*)(v8 + 224) = 0;
      *(_QWORD*)(v8 + 232) = 0;
      *(_QWORD*)(v8 + 240) = 0;
      *(_QWORD*)v8 = 0x40417E353F7CED91LL;
      *(_QWORD*)(v8 + 8) = 0x4060F8474538EF35LL;
      *(_QWORD*)(v8 + 48) = 0x40417E353F7CED91LL;
      *(_QWORD*)(v8 + 56) = 0x4060F8474538EF35LL;
      *(_QWORD*)(v8 + 104) = 0;
      result = v8 + 104;
      if (*(_DWORD*)v4 != 4) {
        goto LABEL_57;
      }
      *(double*)v8 = *(float*)(v4 + 16);
      v9 = *(float*)(v4 + 20);
      *(double*)(v8 + 8) = v9;
      v10 = *(float*)(v4 + 24);
      *(double*)(v8 + 16) = v10;
      v11 = *(_DWORD*)(v4 + 32);
      *(_DWORD*)(v8 + 24) = v11;
      *(_DWORD*)(v8 + 28) = *(_DWORD*)(v4 + 36);
      *(_DWORD*)(v8 + 32) = *(_DWORD*)(v4 + 40);
      v12 = *(float*)(v4 + 28);
      *(double*)(v8 + 64) = v10;
      *(_DWORD*)(v8 + 72) = v11;
      *(double*)(v8 + 48) = v12;
      *(double*)(v8 + 56) = v9;
      *(_DWORD*)(v8 + 76) = *(_DWORD*)(v4 + 44);
      *(_DWORD*)(v8 + 80) = *(_DWORD*)(v4 + 48);
      LODWORD(v10) = *(_DWORD*)(v4 + 56);
      *(_DWORD*)(v8 + 96) = *(_DWORD*)(v4 + 52);
      *(_DWORD*)(v8 + 100) = LODWORD(v10);
      if (*(_DWORD*)(v4 + 4) != 0) {
        GameRoutine_c3f7a0(result);
        v13 = *(_QWORD*)(v8 + 128);
        v14 = *(int*)(v4 + 4);
        v15 = 0x4EC4EC4EC4EC4EC5LL * ((*(_QWORD*)(v8 + 136) - v13) >> 2);
        if (v14 <= v15) {
          if (v14 < v15) {
            *(_QWORD*)(v8 + 136) = v13 + 52LL * (int)v14;
          }
        }
        else {
          GameRoutine_c46f00((_QWORD*)(v8 + 128), v14 - v15);
        }
      }
      v20 = *(_QWORD*)(v8 + 152);
      v19 = (_QWORD*)(v8 + 152);
      v21 = *(int*)(v4 + 8);
      v22 = 0x4EC4EC4EC4EC4EC5LL * ((*(_QWORD*)(v8 + 160) - v20) >> 2);
      if (v21 <= v22) {
        if (v21 < v22) {
          *(_QWORD*)(v8 + 160) = v20 + 52LL * (int)v21;
        }
      }
      else {
        v19 = GameRoutine_c46f00(v19, v21 - v22);
        v21 = *(int*)(v4 + 8);
      }
      v23 = *(_QWORD*)(v8 + 176);
      v24 = *(_QWORD*)(v8 + 184);
      v25 = v24 - v23;
      v26 = (v24 - v23) >> 4;
      v27 = v21 - v26;
      if (v21 <= v26) {
        if (v21 >= v26) {
          goto LABEL_34;
        }
        v40 = v23 + 16 * v21;
      }
      else {
        v28 = *(_QWORD*)(v8 + 192);
        if (v27 > (v28 - v24) >> 4) {
          if (v21 >> 60 != 0) {
            GameRoutine_c47250(v19);
          }
          v29 = v28 - v23;
          if (v29 >> 3 > v21) {
            v21 = v29 >> 3;
          }
          if ((unsigned __int64)v29 >= 0x7FFFFFFFFFFFFFF0LL) {
            v30 = 0xFFFFFFFFFFFFFFFLL;
          }
          else {
            v30 = v21;
          }
          if (v30 >> 60 != 0) {
            goto LABEL_59;
          }
          v31 = fw_memory_HeapManager_Allocate(*v3, 16 * v30, 16, 0);
          v32 = v31 + v25;
          v33 = v31 + 16 * v30;
          memset(v31 + v25, 0, 16 * v27, v34, v35, v36);
          v37 = v32 + 16 * v27;
          v38 = v32 - 16 * v26;
          memcpy(v38, v23, v25);
          *(_QWORD*)(v8 + 176) = v38;
          *(_QWORD*)(v8 + 184) = v37;
          *(_QWORD*)(v8 + 192) = v33;
          if (v23 != 0) {
            v39 = 128;
            if (*(_QWORD*)(*v3 + 200LL) == 0) {
              v39 = 56;
            }
            nn_mem_StandardAllocator_Free(*v3 + v39);
          }
        LABEL_34:
          v41 = *(_QWORD*)(v8 + 200);
          v19 = (_QWORD*)(v8 + 200);
          v42 = *(int*)(v4 + 12);
          v43 = (*(_QWORD*)(v8 + 208) - v41) >> 2;
          if (v42 <= v43) {
            if (v42 < v43) {
              *(_QWORD*)(v8 + 208) = v41 + 4 * v42;
            }
          }
          else {
            v19 = (_QWORD*)GameRoutine_bdff40(v19, v42 - v43);
            v42 = *(int*)(v4 + 12);
          }
          v44 = *(_QWORD*)(v8 + 224);
          v45 = *(_QWORD*)(v8 + 232);
          v46 = v45 - v44;
          v47 = (v45 - v44) >> 3;
          v48 = v42 - v47;
          if (v42 <= v47) {
            if (v42 >= v47) {
              goto LABEL_55;
            }
            v61 = v44 + 8 * v42;
          }
          else {
            v49 = *(_QWORD*)(v8 + 240);
            if (v48 > (v49 - v45) >> 3) {
              if (v42 >> 61 != 0) {
                GameRoutine_c47270(v19);
              }
              v50 = v49 - v44;
              if (v50 >> 2 > v42) {
                v42 = v50 >> 2;
              }
              if ((unsigned __int64)v50 >= 0x7FFFFFFFFFFFFFF8LL) {
                v51 = 0x1FFFFFFFFFFFFFFFLL;
              }
              else {
                v51 = v42;
              }
              if (v51 >> 61 == 0) {
                v52 = fw_memory_HeapManager_Allocate(*v3, 8 * v51, 16, 0);
                v53 = v52 + v46;
                v54 = v52 + 8 * v51;
                memset(v52 + v46, 0, 8 * v48, v55, v56, v57);
                v58 = v53 + 8 * v48;
                v59 = v53 - 8 * v47;
                memcpy(v59, v44, v46);
                *(_QWORD*)(v8 + 224) = v59;
                *(_QWORD*)(v8 + 232) = v58;
                *(_QWORD*)(v8 + 240) = v54;
                if (v44 != 0) {
                  v60 = 128;
                  if (*(_QWORD*)(*v3 + 200LL) == 0) {
                    v60 = 56;
                  }
                  nn_mem_StandardAllocator_Free(*v3 + v60);
                }
                goto LABEL_55;
              }
            LABEL_59:
              GameRoutine_60a210(v19);
            }
            memset(*(_QWORD*)(v8 + 232), 0, 8 * v48, v5, v6, v7);
            v61 = v45 + 8 * v48;
          }
          *(_QWORD*)(v8 + 232) = v61;
        LABEL_55:
          memcpy(*(_QWORD*)(v8 + 104), v4 + 64, 4LL * *(int*)(v4 + 4));
          v62 = *(int*)(v4 + 4);
          v63 = v4 + 64 + 4 * v62;
          memcpy(*(_QWORD*)(v8 + 128), v63, 52LL * (int)v62);
          v64 = v63 + 52LL * *(int*)(v4 + 4);
          memcpy(*(_QWORD*)(v8 + 152), v64, 52LL * *(int*)(v4 + 8));
          v65 = *(int*)(v4 + 8);
          v66 = v64 + 52LL * (int)v65;
          result = memcpy(*(_QWORD*)(v8 + 176), v66, 16 * v65);
          v67 = *(unsigned int*)(v4 + 12);
          if ((int)v67 >= 1) {
            v68 = v66 + 16LL * *(int*)(v4 + 8);
            memcpy(*(_QWORD*)(v8 + 200), v68, 4 * v67);
            result = memcpy(*(_QWORD*)(v8 + 224), v68 + 4LL * *(int*)(v4 + 12),
                            8LL * *(int*)(v4 + 12));
          }
        LABEL_57:
          v69 = *(_QWORD*)(*(_QWORD*)v2 + 360LL);
          v17 = *(_QWORD*)(v69 + 184);
          *(_QWORD*)(v69 + 184) = v8;
          if (v17 == 0) {
            return result;
          }
          goto LABEL_8;
        }
        memset(*(_QWORD*)(v8 + 184), 0, 16 * v27, v5, v6, v7);
        v40 = v24 + 16 * v27;
      }
      *(_QWORD*)(v8 + 184) = v40;
      goto LABEL_34;
    }
  }
  v16 = *(_QWORD*)(*(_QWORD*)v2 + 360LL);
  v17 = *(_QWORD*)(v16 + 184);
  *(_QWORD*)(v16 + 184) = 0;
  if (v17 == 0) {
    return result;
  }
LABEL_8:
  GameRoutine_c4a5a0(v17);
  v18 = 128;
  if (*(_QWORD*)(*v3 + 200LL) == 0) {
    v18 = 56;
  }
  return nn_mem_StandardAllocator_Free(*v3 + v18);
}

__int64 wld_GfxLoader_loadDomeLightTexture_lambda0_Invoke(__int64 a1,
                                                          __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 result;
  __int64 v6;
  int v7;
  __int64 v8;
  bool v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  struct {
    __int64 v15;
    int v16;
  } v15_;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *a2;
  if (*a2 == 0 || (v4 = *(_QWORD*)(v3 + 592)) == 0 ||
      GameRoutine_5fc1f0_alt1(v4) == 0 ||
      ((result = GameRoutine_5fc1f0_alt1(*(_QWORD*)(v3 + 592)),
        v6 = **(_QWORD**)(result + 40), v7 = *(_DWORD*)(v6 + 144),
        (v8 = *(_QWORD*)(*(_QWORD*)(v6 + 128) + 8LL)) != 0)
           ? (v9 = v7 == -1)
           : (v9 = true),
       v9)) {
    result = (__int64)X8CALL_X0(
        _QWORD*,
        GameRoutine_b34420((void*)((__int64)&v15_.v15),
                           *(_QWORD**)(*game_g_frame_clock_ptr[0] + 13424),
                           (__int64)"Graphics/Textures/common_default", 0x20u,
                           (__int64)"Cmn_Default_LSPV_BC", 0x13u, 0));
    v8 = v15_.v15;
    v7 = v15_.v16;
  }
  v10 = *(_QWORD*)(*(_QWORD*)v2 + 24LL);
  if (v10 != 0) {
    v11 = *(_QWORD*)(*(_QWORD*)v2 + 16LL);
    v12 = *(_QWORD*)(*(_QWORD*)v2 + 24LL);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 16), 1u,
                              memory_order_relaxed);
    v13 = std___1___shared_weak_count_lock(v12);
    result = std___1___shared_weak_count___release_weak(v10);
    if (v13 != 0) {
      if (v11 != 0) {
        v14 = *(_QWORD*)(v11 + 288);
        *(_QWORD*)(v14 + 1008) = v8;
        *(_DWORD*)(v14 + 1016) = v7;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
        return std___1___shared_weak_count___release_weak(v13);
      }
    }
  }
  return result;
}

__int64 wld_GfxLoader_loadCloudTexture_lambda0_Invoke(__int64 result,
                                                      __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  v2 = *(_QWORD*)(result + 8);
  v3 = *a2;
  if (*a2 != 0 && (result = *(_QWORD*)(v3 + 592)) != 0 &&
      (result = GameRoutine_5fc1f0(result)) != 0) {
    result = GameRoutine_5fc1f0(*(_QWORD*)(v3 + 592));
    v4 = **(_QWORD**)(result + 40);
    v5 = *(_DWORD*)(v4 + 144);
    v6 = *(_QWORD*)(*(_QWORD*)(v4 + 128) + 8LL);
  }
  else {
    v6 = 0;
    v5 = -1;
  }
  v7 = *(_QWORD*)(*(_QWORD*)v2 + 24LL);
  if (v7 != 0) {
    v8 = *(_QWORD*)(*(_QWORD*)v2 + 16LL);
    v9 = *(_QWORD*)(*(_QWORD*)v2 + 24LL);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 16), 1u,
                              memory_order_relaxed);
    v10 = std___1___shared_weak_count_lock(v9);
    result = std___1___shared_weak_count___release_weak(v7);
    if (v10 != 0) {
      if (v8 != 0) {
        v11 = *(_QWORD*)(v8 + 288);
        *(_QWORD*)(v11 + 528) = v6;
        *(_DWORD*)(v11 + 536) = v5;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
        return std___1___shared_weak_count___release_weak(v10);
      }
    }
  }
  return result;
}

__int64 wld_GfxLoader_loadFogTexture_lambda0_Invoke(__int64 result, __int64* a2)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  bool v7;
  __int64 v8;

  v2 = *(__int64**)(result + 8);
  v3 = *a2;
  if (*a2 == 0 || (result = *(_QWORD*)(v3 + 592)) == 0 ||
      (result = GameRoutine_5fc1f0(result)) == 0 ||
      ((result = GameRoutine_5fc1f0(*(_QWORD*)(v3 + 592)),
        v4 = **(_QWORD**)(result + 40), v5 = *(unsigned int*)(v4 + 144),
        (v6 = *(_QWORD*)(*(_QWORD*)(v4 + 128) + 8LL)) != 0)
           ? (v7 = v5 == 0xFFFFFFFFLL)
           : (v7 = true),
       v7)) {
    v6 = v2[123];
    LODWORD(v5) = *((_DWORD*)v2 + 248);
  }
  v8 = *v2;
  *(_QWORD*)(v8 + 400) = v6;
  *(_DWORD*)(v8 + 408) = v5;
  return result;
}

_QWORD* wld_GfxLoader_loadFile_lambda0_Clone(__int64 a1)
{
  _QWORD* result;
  _QWORD* v3;
  _QWORD* v4;
  _QWORD* v5;

  result = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 64, 16, 0);
  *result = GameData_1fd20c0;
  v3 = result + 2;
  v4 = *(_QWORD**)(a1 + 48);
  if (v4 != nullptr) {
    if (v4 == (_QWORD*)(a1 + 16)) {
      result[6] = v3;
      v5 = result;
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*v4 + 24LL))(
          (void*)v4, v4);
    }
    else {
      v5 = result;
      result[6] = X8CALL_X0(
          _QWORD*,
          (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*, _QWORD*))(
              *v4 + 16LL))((void*)v4, v4, v3));
    }
    return v5;
  }
  else {
    result[6] = 0;
  }
  return result;
}

__int64 wld_GfxLoader_loadFile_lambda0_Invoke(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v4;

  v2 = *(_QWORD*)(a1 + 48);
  v4 = *a2;
  if (v2 == 0) {
    GameRoutine_60a310(0, a2);
  }
  return (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v2 + 48LL))(v2, &v4);
}

__int64 GfxLoader_c49a80(__int64** a1, __int64* a2)
{
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v14;
  unsigned __int64 v15;
  int v16;
  char v17;
  char* v18;
  __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  char* v22;
  unsigned __int64 v23;
  __int64 result;
  _BOOL4 v26;
  __int64 v27;
  __int64 v28;
  __int64* v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  char* v38;
  unsigned __int64 v39;
  __int64 v40;
  struct {
    __int64 v41;
    unsigned __int64 v42;
    char* v43;
    __int64* v44;
  } v41_;
  unsigned int v45;
  struct {
    __int64 v46;
    unsigned __int64 v47;
    char* v48;
  } v46_;

  if ((*(_BYTE*)a2 & 1) != 0) {
    fw_text_String_CopyTerminated(&v41_.v41, a2[2], a2[1]);
  }
  else {
    v4 = a2[1];
    v41_.v41 = *a2;
    v41_.v42 = v4;
    v41_.v43 = (char*)a2[2];
  }
  if ((v41_.v41 & 1) != 0) {
    v5 = v41_.v42;
  }
  else {
    v5 = (unsigned __int64)(unsigned __int8)v41_.v41 >> 1;
  }
  if ((v41_.v41 & 1) != 0 && v41_.v43 != nullptr) {
    v6 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v6 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v6);
  }
  if (v5 == 0) {
    goto LABEL_50;
  }
  v7 = *a1;
  v41_.v42 = 0;
  v41_.v43 = nullptr;
  v41_.v41 = 0;
  LOWORD(v46_.v46) = 0;
  GameRoutine_2020((unsigned __int16*)v7, &v46_.v46);
  v8 = (__int16)v46_.v46;
  v9 = fw_memory_g_heap_manager_ptr;
  v10 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, (__int16)v46_.v46, 16, 0);
  memset_alt1(v10, 0, v8);
  Value_2500(*a1, v10, v8);
  GameRoutine_60a060((char*)&v41_.v41, v10, (__int16)v46_.v46);
  v14 = 128;
  if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
    v14 = 56;
  }
  nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v14);
  if ((*(_BYTE*)a2 & 1) != 0) {
    fw_text_String_CopyTerminated(&v46_.v46, a2[2], a2[1]);
  }
  else {
    v15 = a2[1];
    v46_.v46 = *a2;
    v46_.v47 = v15;
    v46_.v48 = (char*)a2[2];
  }
  v16 = v41_.v41 & 1;
  v17 = v46_.v46;
  if (v16 != 0) {
    v18 = v41_.v43;
  }
  else {
    v18 = (char*)&v41_.v41 + 1;
  }
  v19 = (__int64)v46_.v48;
  if ((v41_.v41 & 1) != 0) {
    v20 = v41_.v42;
  }
  else {
    v20 = (unsigned __int64)(unsigned __int8)v41_.v41 >> 1;
  }
  if ((v46_.v46 & 1) != 0) {
    v21 = v46_.v47;
  }
  else {
    v21 = (unsigned __int64)(unsigned __int8)v46_.v46 >> 1;
  }
  if ((v46_.v46 & 1) != 0) {
    v22 = v46_.v48;
  }
  else {
    v22 = (char*)&v46_.v46 + 1;
  }
  if (v20 >= v21) {
    v23 = v21;
  }
  else {
    v23 = v20;
  }
  result = memcmp(v22, v18, v23);
  v26 = (_DWORD)result == 0 && v21 == v20;
  if ((v17 & 1) != 0 && v19 != 0) {
    v27 = 128;
    if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
      v27 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v27);
    v16 = v41_.v41 & 1;
  }
  if (v16 != 0 && v41_.v43 != nullptr) {
    v28 = 128;
    if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
      v28 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v28);
  }
  if (v26) {
  LABEL_50:
    v29 = *a1;
    v45 = 0;
    result = GameRoutine_21c0((unsigned int*)v29, &v45);
    if (v45 != 0) {
      v46_.v47 = 0;
      v46_.v48 = nullptr;
      v46_.v46 = 0;
      LOWORD(v41_.v41) = 0;
      v41_.v44 = &v46_.v46;
      result = GameStringReads_c05cc0(a1, (__int64)&v41_.v41);
      if ((v41_.v41 & 1) != 0 && v41_.v43 != nullptr) {
        v30 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v30 = 56;
        }
        result = nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v30);
      }
      v31 = a2[3];
      if (*(_BYTE*)(v31 + 24) != 1) {
        if ((v46_.v46 & 1) != 0) {
          result = fw_text_String_CopyTerminated((__int64*)v31,
                                                 (__int64)v46_.v48, v46_.v47);
        }
        else {
          v36 = v46_.v46;
          v37 = (__int64)v46_.v48;
          *(_QWORD*)(v31 + 8) = v46_.v47;
          *(_QWORD*)(v31 + 16) = v37;
          *(_QWORD*)v31 = v36;
        }
        *(_BYTE*)(v31 + 24) = 1;
        if ((v46_.v46 & 1) == 0) {
          return result;
        }
        goto LABEL_82;
      }
      if ((__int64*)v31 != &v46_.v46) {
        if ((*(_BYTE*)v31 & 1) == 0) {
          if ((v46_.v46 & 1) != 0) {
            result = (__int64)GameRoutine_64df20((_QWORD*)v31,
                                                 (__int64)v46_.v48, v46_.v47);
            if ((v46_.v46 & 1) == 0) {
              return result;
            }
          }
          else {
            v32 = v46_.v46;
            v33 = (__int64)v46_.v48;
            *(_QWORD*)(v31 + 8) = v46_.v47;
            *(_QWORD*)(v31 + 16) = v33;
            *(_QWORD*)v31 = v32;
            if ((v46_.v46 & 1) == 0) {
              return result;
            }
          }
        LABEL_82:
          if (v46_.v48 != nullptr) {
            v40 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v40 = 56;
            }
            return nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v40);
          }
          return result;
        }
        if ((v46_.v46 & 1) != 0) {
          v38 = v46_.v48;
        }
        else {
          v38 = (char*)&v46_.v46 + 1;
        }
        if ((v46_.v46 & 1) != 0) {
          v39 = v46_.v47;
        }
        else {
          v39 = (unsigned __int64)(unsigned __int8)v46_.v46 >> 1;
        }
        result = (__int64)SpineModel_64dde0((__int64*)v31, (__int64)v38, v39);
      }
      if ((v46_.v46 & 1) == 0) {
        return result;
      }
      goto LABEL_82;
    }
    v34 = a2[3];
    if (*(_BYTE*)(v34 + 24) == 1) {
      if ((*(_BYTE*)v34 & 1) != 0 && *(_QWORD*)(v34 + 16) != 0) {
        v35 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v35 = 56;
        }
        result = nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v35);
      }
      *(_BYTE*)(v34 + 24) = 0;
    }
  }
  return result;
}

__int64 GfxLoader_c49e60(__int64** a1, __int64* a2)
{
  __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v14;
  __int64 v15;
  int v16;
  char v17;
  char* v18;
  __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  char* v22;
  unsigned __int64 v23;
  __int64 result;
  _BOOL4 v26;
  __int64 v27;
  __int64 v28;
  __int64* v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64* v34;
  __int64 v35;
  __int64 v36;
  __int64* v37;
  __int64 v38;
  __int64 v39;
  __int64* v40;
  __int64 v41;
  __int64 v42;
  __int64* v43;
  __int64 v44;
  __int64 v45;
  __int64* v46;
  __int64 v47;
  __int64 v48;
  __int64* v49;
  __int64 v50;
  __int64 v51;
  __int64* v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  struct {
    __int64 v59;
    unsigned __int64 v60;
    __int64 v61;
    __int64* v62;
  } v59_;
  struct {
    __int64 v63;
    unsigned __int64 v64;
    char* v65;
    char v66;
  } v63_;
  struct {
    __int64 v67;
    unsigned __int64 v68;
    __int64 v69;
    char v70;
  } v67_;
  struct {
    __int64 v71;
    unsigned __int64 v72;
    __int64 v73;
    char v74;
  } v71_;
  struct {
    __int64 v75;
    unsigned __int64 v76;
    __int64 v77;
    char v78;
  } v75_;
  struct {
    __int64 v79;
    unsigned __int64 v80;
    __int64 v81;
    char v82;
  } v79_;
  struct {
    __int64 v83;
    unsigned __int64 v84;
    __int64 v85;
    char v86;
  } v83_;
  struct {
    __int64 v87;
    unsigned __int64 v88;
    __int64 v89;
    char v90;
  } v87_;
  struct {
    __int64 v91;
    unsigned __int64 v92;
    __int64 v93;
    char v94;
  } v91_;
  struct {
    __int64 v95;
    unsigned __int64 v96;
    __int64 v97;
    char v98;
  } v95_;
  struct {
    __int64 v99;
    unsigned __int64 v100;
    __int64 v101;
    char v102;
  } v99_;
  unsigned int v103;

  if ((*(_BYTE*)a2 & 1) != 0) {
    fw_text_String_CopyTerminated(&v63_.v63, a2[2], a2[1]);
  }
  else {
    v4 = a2[1];
    v63_.v63 = *a2;
    v63_.v64 = v4;
    v63_.v65 = (char*)a2[2];
  }
  if ((v63_.v63 & 1) != 0) {
    v5 = v63_.v64;
  }
  else {
    v5 = (unsigned __int64)(unsigned __int8)v63_.v63 >> 1;
  }
  if ((v63_.v63 & 1) != 0 && v63_.v65 != nullptr) {
    v6 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v6 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v6);
  }
  if (v5 == 0) {
    goto LABEL_50;
  }
  v7 = *a1;
  v63_.v64 = 0;
  v63_.v65 = nullptr;
  v63_.v63 = 0;
  LOWORD(v59_.v59) = 0;
  GameRoutine_2020((unsigned __int16*)v7, &v59_.v59);
  v8 = (__int16)v59_.v59;
  v9 = fw_memory_g_heap_manager_ptr;
  v10 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, (__int16)v59_.v59, 16, 0);
  memset_alt1(v10, 0, v8);
  Value_2500(*a1, v10, v8);
  GameRoutine_60a060((char*)&v63_.v63, v10, (__int16)v59_.v59);
  v14 = 128;
  if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
    v14 = 56;
  }
  nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v14);
  if ((*(_BYTE*)a2 & 1) != 0) {
    fw_text_String_CopyTerminated(&v59_.v59, a2[2], a2[1]);
  }
  else {
    v15 = a2[1];
    v59_.v59 = *a2;
    v59_.v60 = v15;
    v59_.v61 = a2[2];
  }
  v16 = v63_.v63 & 1;
  v17 = v59_.v59;
  if (v16 != 0) {
    v18 = v63_.v65;
  }
  else {
    v18 = (char*)&v63_.v63 + 1;
  }
  v19 = v59_.v61;
  if ((v63_.v63 & 1) != 0) {
    v20 = v63_.v64;
  }
  else {
    v20 = (unsigned __int64)(unsigned __int8)v63_.v63 >> 1;
  }
  if ((v59_.v59 & 1) != 0) {
    v21 = v59_.v60;
  }
  else {
    v21 = (unsigned __int64)(unsigned __int8)v59_.v59 >> 1;
  }
  if ((v59_.v59 & 1) != 0) {
    v22 = (char*)v59_.v61;
  }
  else {
    v22 = (char*)&v59_.v59 + 1;
  }
  if (v20 >= v21) {
    v23 = v21;
  }
  else {
    v23 = v20;
  }
  result = memcmp(v22, v18, v23);
  v26 = (_DWORD)result == 0 && v21 == v20;
  if ((v17 & 1) != 0 && v19 != 0) {
    v27 = 128;
    if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
      v27 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v27);
    v16 = v63_.v63 & 1;
  }
  if (v16 != 0 && v63_.v65 != nullptr) {
    v28 = 128;
    if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
      v28 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v28);
  }
  if (v26) {
  LABEL_50:
    v29 = *a1;
    v103 = 0;
    result = GameRoutine_21c0((unsigned int*)v29, &v103);
    if (v103 != 0) {
      LOBYTE(v63_.v63) = 0;
      v63_.v66 = 0;
      LOBYTE(v67_.v67) = 0;
      v67_.v70 = 0;
      LOBYTE(v71_.v71) = 0;
      v71_.v74 = 0;
      LOBYTE(v75_.v75) = 0;
      v75_.v78 = 0;
      LOBYTE(v79_.v79) = 0;
      v79_.v82 = 0;
      LOBYTE(v83_.v83) = 0;
      v83_.v86 = 0;
      LOBYTE(v87_.v87) = 0;
      v87_.v90 = 0;
      LOBYTE(v91_.v91) = 0;
      v91_.v94 = 0;
      LOBYTE(v95_.v95) = 0;
      v95_.v98 = 0;
      LOBYTE(v99_.v99) = 0;
      v99_.v102 = 0;
      LOWORD(v59_.v59) = 0;
      v59_.v62 = &v63_.v63;
      if (GameRoutine_c49640(a1, (__int64)&v59_.v59)) {
        GameRoutine_c49860((__int64)&v63_.v63, (__int64)a1);
      }
      v30 = a2[3];
      if (*(_BYTE*)(v30 + 320) == 1) {
        GameRoutine_c4a480((__int64*)v30, &v63_.v63);
        GameRoutine_c4a480((__int64*)(v30 + 32), &v67_.v67);
        GameRoutine_c4a480((__int64*)(v30 + 64), &v71_.v71);
        GameRoutine_c4a480((__int64*)(v30 + 96), &v75_.v75);
        GameRoutine_c4a480((__int64*)(v30 + 128), &v79_.v79);
        GameRoutine_c4a480((__int64*)(v30 + 160), &v83_.v83);
        GameRoutine_c4a480((__int64*)(v30 + 192), &v87_.v87);
        GameRoutine_c4a480((__int64*)(v30 + 224), &v91_.v91);
        GameRoutine_c4a480((__int64*)(v30 + 256), &v95_.v95);
        GameRoutine_c4a480((__int64*)(v30 + 288), &v99_.v99);
      }
      else {
        *(_BYTE*)v30 = 0;
        *(_BYTE*)(v30 + 24) = 0;
        if (v63_.v66 == 1) {
          if ((v63_.v63 & 1) != 0) {
            fw_text_String_CopyTerminated((__int64*)v30, (__int64)v63_.v65,
                                          v63_.v64);
          }
          else {
            v32 = v63_.v63;
            v33 = (__int64)v63_.v65;
            *(_QWORD*)(v30 + 8) = v63_.v64;
            *(_QWORD*)(v30 + 16) = v33;
            *(_QWORD*)v30 = v32;
          }
          *(_BYTE*)(v30 + 24) = 1;
        }
        *(_BYTE*)(v30 + 32) = 0;
        v34 = (__int64*)(v30 + 32);
        *(_BYTE*)(v30 + 56) = 0;
        if (v67_.v70 == 1) {
          if ((v67_.v67 & 1) != 0) {
            fw_text_String_CopyTerminated(v34, v67_.v69, v67_.v68);
          }
          else {
            v35 = v67_.v67;
            v36 = v67_.v69;
            *(_QWORD*)(v30 + 40) = v67_.v68;
            *(_QWORD*)(v30 + 48) = v36;
            *v34 = v35;
          }
          *(_BYTE*)(v30 + 56) = 1;
        }
        *(_BYTE*)(v30 + 64) = 0;
        v37 = (__int64*)(v30 + 64);
        *(_BYTE*)(v30 + 88) = 0;
        if (v71_.v74 == 1) {
          if ((v71_.v71 & 1) != 0) {
            fw_text_String_CopyTerminated(v37, v71_.v73, v71_.v72);
          }
          else {
            v38 = v71_.v71;
            v39 = v71_.v73;
            *(_QWORD*)(v30 + 72) = v71_.v72;
            *(_QWORD*)(v30 + 80) = v39;
            *v37 = v38;
          }
          *(_BYTE*)(v30 + 88) = 1;
        }
        *(_BYTE*)(v30 + 96) = 0;
        v40 = (__int64*)(v30 + 96);
        *(_BYTE*)(v30 + 120) = 0;
        if (v75_.v78 == 1) {
          if ((v75_.v75 & 1) != 0) {
            fw_text_String_CopyTerminated(v40, v75_.v77, v75_.v76);
          }
          else {
            v41 = v75_.v75;
            v42 = v75_.v77;
            *(_QWORD*)(v30 + 104) = v75_.v76;
            *(_QWORD*)(v30 + 112) = v42;
            *v40 = v41;
          }
          *(_BYTE*)(v30 + 120) = 1;
        }
        *(_BYTE*)(v30 + 128) = 0;
        v43 = (__int64*)(v30 + 128);
        *(_BYTE*)(v30 + 152) = 0;
        if (v79_.v82 == 1) {
          if ((v79_.v79 & 1) != 0) {
            fw_text_String_CopyTerminated(v43, v79_.v81, v79_.v80);
          }
          else {
            v44 = v79_.v79;
            v45 = v79_.v81;
            *(_QWORD*)(v30 + 136) = v79_.v80;
            *(_QWORD*)(v30 + 144) = v45;
            *v43 = v44;
          }
          *(_BYTE*)(v30 + 152) = 1;
        }
        *(_BYTE*)(v30 + 160) = 0;
        v46 = (__int64*)(v30 + 160);
        *(_BYTE*)(v30 + 184) = 0;
        if (v83_.v86 == 1) {
          if ((v83_.v83 & 1) != 0) {
            fw_text_String_CopyTerminated(v46, v83_.v85, v83_.v84);
          }
          else {
            v47 = v83_.v83;
            v48 = v83_.v85;
            *(_QWORD*)(v30 + 168) = v83_.v84;
            *(_QWORD*)(v30 + 176) = v48;
            *v46 = v47;
          }
          *(_BYTE*)(v30 + 184) = 1;
        }
        *(_BYTE*)(v30 + 192) = 0;
        v49 = (__int64*)(v30 + 192);
        *(_BYTE*)(v30 + 216) = 0;
        if (v87_.v90 == 1) {
          if ((v87_.v87 & 1) != 0) {
            fw_text_String_CopyTerminated(v49, v87_.v89, v87_.v88);
          }
          else {
            v50 = v87_.v87;
            v51 = v87_.v89;
            *(_QWORD*)(v30 + 200) = v87_.v88;
            *(_QWORD*)(v30 + 208) = v51;
            *v49 = v50;
          }
          *(_BYTE*)(v30 + 216) = 1;
        }
        *(_BYTE*)(v30 + 224) = 0;
        v52 = (__int64*)(v30 + 224);
        *(_BYTE*)(v30 + 248) = 0;
        if (v91_.v94 == 1) {
          if ((v91_.v91 & 1) != 0) {
            fw_text_String_CopyTerminated(v52, v91_.v93, v91_.v92);
          }
          else {
            v53 = v91_.v91;
            v54 = v91_.v93;
            *(_QWORD*)(v30 + 232) = v91_.v92;
            *(_QWORD*)(v30 + 240) = v54;
            *v52 = v53;
          }
          *(_BYTE*)(v30 + 248) = 1;
        }
        *(_BYTE*)(v30 + 256) = 0;
        *(_BYTE*)(v30 + 280) = 0;
        if (v95_.v98 == 1) {
          if ((v95_.v95 & 1) != 0) {
            fw_text_String_CopyTerminated((__int64*)(v30 + 256), v95_.v97,
                                          v95_.v96);
          }
          else {
            v55 = v95_.v95;
            v56 = v95_.v97;
            *(_QWORD*)(v30 + 264) = v95_.v96;
            *(_QWORD*)(v30 + 272) = v56;
            *(_QWORD*)(v30 + 256) = v55;
          }
          *(_BYTE*)(v30 + 280) = 1;
        }
        *(_BYTE*)(v30 + 288) = 0;
        *(_BYTE*)(v30 + 312) = 0;
        if (v99_.v102 == 1) {
          if ((v99_.v99 & 1) != 0) {
            fw_text_String_CopyTerminated((__int64*)(v30 + 288), v99_.v101,
                                          v99_.v100);
          }
          else {
            v57 = v99_.v99;
            v58 = v99_.v101;
            *(_QWORD*)(v30 + 296) = v99_.v100;
            *(_QWORD*)(v30 + 304) = v58;
            *(_QWORD*)(v30 + 288) = v57;
          }
          *(_BYTE*)(v30 + 312) = 1;
        }
        *(_BYTE*)(v30 + 320) = 1;
      }
      return Manager_c46910((__int64)&v63_.v63);
    }
    else {
      v31 = a2[3];
      if (*(_BYTE*)(v31 + 320) == 1) {
        result = Manager_c46910(v31);
        *(_BYTE*)(v31 + 320) = 0;
      }
    }
  }
  return result;
}

_QWORD* GfxLoader_c4a6e0(__int64 a1, _QWORD* a2, _QWORD* a3)
{
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD* result;
  __int64 v9;
  int v10;
  __int64 v11;
  struct {
    __int64 v12;
    int v13;
  } v12_;

  *(_QWORD*)a1 = *a2;
  v5 = a2[1];
  *(_QWORD*)(a1 + 8) = v5;
  if (v5 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 16), 1u,
                              memory_order_relaxed);
  }
  *(_QWORD*)(a1 + 16) = *a3;
  v6 = a3[1];
  *(_QWORD*)(a1 + 24) = v6;
  if (v6 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                              memory_order_relaxed);
  }
  *(_BYTE*)(a1 + 112) = 0;
  *(_QWORD*)(a1 + 120) = 0;
  *(_QWORD*)(a1 + 128) = 0;
  *(_QWORD*)(a1 + 136) = 0;
  *(_QWORD*)(a1 + 144) = 0;
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 160) = 0;
  *(_QWORD*)(a1 + 64) = 0x3F8000003F800000LL;
  *(_QWORD*)(a1 + 72) = 0;
  *(_BYTE*)(a1 + 172) = 0;
  *(_BYTE*)(a1 + 176) = 0;
  *(_QWORD*)(a1 + 184) = 0;
  *(_BYTE*)(a1 + 192) = 0;
  *(_QWORD*)(a1 + 80) = 0xFFFFFFFFLL;
  *(_QWORD*)(a1 + 88) = 0xFFFFFFFF00000000LL;
  *(_QWORD*)(a1 + 48) = 0xFFFFFFFFLL;
  *(_DWORD*)(a1 + 208) = -1;
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 104) = 1120403456;
  *(_DWORD*)(a1 + 216) = 1;
  *(_WORD*)(a1 + 168) = 257;
  *(_OWORD*)(a1 + 32) = GameData_1a82c50;
  v7 = *game_g_frame_clock_ptr[0];
  *(_DWORD*)(a1 + 196) = 0;
  *(_QWORD*)(a1 + 200) = 0;
  *(_DWORD*)(a1 + 56) = 0;
  *(_DWORD*)(a1 + 60) = 6;
  result = X8CALL_X0(
      _QWORD*,
      GameRoutine_b34420((void*)((__int64)&v12_.v12), *(_QWORD**)(v7 + 13424),
                         (__int64)"Graphics/Textures/common_default", 0x20u,
                         (__int64)"MoonGlow_Ramp", 0xDu, 0));
  v9 = v12_.v12;
  v10 = v12_.v13;
  *(_QWORD*)(a1 + 200) = v12_.v12;
  *(_DWORD*)(a1 + 208) = v10;
  v11 = *(_QWORD*)(*a2 + 288LL);
  *(_QWORD*)(v11 + 384) = v9;
  *(_DWORD*)(v11 + 392) = v10;
  return result;
}

__int64 GfxLoader_c4c940(__int64 a1, char a2)
{
  __int64 i;
  __int64 v3;
  __int64 j;
  __int64 v7;
  __int64 v8;
  __int64 result;
  __int64 v10;
  char v11;
  char v12;
  __int64 v13;

  v3 = *(_QWORD*)(a1 + 120);
  for (i = *(_QWORD*)(a1 + 128); i != v3; Manager_c47290_alt1(i)) {
    i -= 232;
  }
  *(_QWORD*)(a1 + 128) = v3;
  v7 = *(_QWORD*)(a1 + 144);
  for (j = *(_QWORD*)(a1 + 152); j != v7; Manager_c47290_alt1(j)) {
    j -= 232;
  }
  v8 = *(_QWORD*)(a1 + 8);
  *(_QWORD*)(a1 + 152) = v7;
  result = std___1___shared_weak_count_lock(v8);
  v10 = *(_QWORD*)(*(_QWORD*)a1 + 288LL);
  if (*(_BYTE*)(v10 + 24) == 1) {
    *(_BYTE*)(v10 + 24) = 0;
  }
  if (*(_BYTE*)(v10 + 48) == 1) {
    *(_BYTE*)(v10 + 48) = 0;
  }
  if (*(_BYTE*)(v10 + 72) == 1) {
    *(_BYTE*)(v10 + 72) = 0;
  }
  if (*(_BYTE*)(v10 + 96) == 1) {
    *(_BYTE*)(v10 + 96) = 0;
  }
  if ((*(_BYTE*)(v10 + 120) & 1) != 0) {
    *(_BYTE*)(v10 + 120) = 0;
  }
  if (*(_BYTE*)(v10 + 144) == 1) {
    *(_BYTE*)(v10 + 144) = 0;
  }
  *(_DWORD*)(v10 + 152) = 0;
  *(_WORD*)(v10 + 156) = 0;
  *(_QWORD*)(v10 + 160) = 0x3F80000000000000LL;
  *(_QWORD*)(v10 + 168) = 0x3F8000003F800000LL;
  v11 = *(_BYTE*)(v10 + 188);
  *(_QWORD*)(v10 + 176) = 1065353216;
  if ((v11 & 1) != 0) {
    *(_BYTE*)(v10 + 188) = 0;
  }
  if (*(_BYTE*)(v10 + 208) == 1) {
    *(_BYTE*)(v10 + 208) = 0;
  }
  if (*(_BYTE*)(v10 + 232) == 1) {
    *(_BYTE*)(v10 + 232) = 0;
  }
  if (*(_BYTE*)(v10 + 256) == 1) {
    *(_BYTE*)(v10 + 256) = 0;
  }
  if (*(_BYTE*)(v10 + 280) == 1) {
    *(_BYTE*)(v10 + 280) = 0;
  }
  if ((*(_BYTE*)(v10 + 304) & 1) != 0) {
    *(_BYTE*)(v10 + 304) = 0;
  }
  if (*(_BYTE*)(v10 + 328) == 1) {
    *(_BYTE*)(v10 + 328) = 0;
  }
  *(_DWORD*)(v10 + 336) = 0;
  *(_WORD*)(v10 + 340) = 0;
  *(_QWORD*)(v10 + 344) = 0x3F80000000000000LL;
  *(_QWORD*)(v10 + 352) = 0x3F8000003F800000LL;
  v12 = *(_BYTE*)(v10 + 372);
  *(_QWORD*)(v10 + 360) = 1065353216;
  if ((v12 & 1) != 0) {
    *(_BYTE*)(v10 + 372) = 0;
  }
  if ((a2 & 1) != 0) {
    *(_BYTE*)(a1 + 112) = 1;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v13 = result;
    (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
    return std___1___shared_weak_count___release_weak(v13);
  }
  return result;
}

#pragma GCC visibility pop
