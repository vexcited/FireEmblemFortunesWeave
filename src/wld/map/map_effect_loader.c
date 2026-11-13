#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_6360e0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_bc9020(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 strlen(_QWORD);
extern __int64 (*GameData_211d5a8[])();
extern __int64 GameData_2203100;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212e340[2];
extern __int64* snd_g_fileIndex_ptr[2];
__int64 wld_map_MapEffectLoader_LoadAsync(__int64 a1, __int64 a2, __int64 a3);
__int64 ElfFile_631220(_QWORD, _QWORD);
__int64 GameRoutine_18df040(_QWORD);
__int64 GameRoutine_198de80(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_198e090(_QWORD, _QWORD);
__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 GameRoutine_64df20(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a81a70(_QWORD, _QWORD);
__int64 GameRoutine_ce4320(_QWORD, _QWORD, _QWORD);
__int64 ObjectBuildCreate_c23160(_QWORD);
__int64 ObjectBuildCreate_c32460(_QWORD, _QWORD);
__int64 SpineModel_64dde0(_QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 fw_memory_g_heap_manager;
extern char GameData_1a9f09e;
void __attribute__((noreturn)) GameRoutine_198de60(void);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_66df80(_QWORD);
void __attribute__((noreturn)) String_60a1d0(_QWORD);
__int64 wld_map_MapEffectLoader_LoadAsync_lambda0_Invoke(__int64 result,
                                                         __int64* a2);

__int64 wld_map_MapEffectLoader_LoadAsync(__int64 a1, __int64 a2, __int64 a3)
{
  char** v3;
  __int64* v5;
  __int64 v6;
  char* v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  char* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 result;
  __int64 v20;
  __int64 v21;
  _QWORD v22[2];
  __int64 v23;
  __int64 v24;
  __int64 v25;
  int v26;

  if (a3 == 0) {
    return 0;
  }
  v3 = (char**)(a2 + 16);
  v5 = snd_g_fileIndex_ptr[0];
  v6 = 24 * a3;
  while (1) {
    v7 = (*(_BYTE*)(v3 - 2) & 1) != 0 ? *v3 : (char*)v3 - 15;
    if (v7 != nullptr) {
      v8 = *v5;
      v9 = strlen(v7);
      if ((GameRoutine_6360e0(v8, v7, v9, 0, 0) & 1) != 0) {
        break;
      }
    }
    v3 += 3;
    v6 -= 24;
    if (v6 == 0) {
      return 0;
    }
  }
  v10 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 80, 16, 0);
  v10[2] = 0;
  v11 = GameData_212e340[0];
  v12 = *(_QWORD*)(a1 + 128);
  v10[5] = a1;
  *v10 = v11 + 2;
  v10[1] = 0;
  v10[4] = GameData_211d5a8;
  v10[8] = v10 + 4;
  *(_QWORD*)(a1 + 120) = v10 + 4;
  *(_QWORD*)(a1 + 128) = v10;
  if (v12 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    std___1___shared_weak_count___release_weak(v12);
  }
  v13 = *v5;
  if ((*(_BYTE*)(v3 - 2) & 1) != 0) {
    v14 = *v3;
  }
  else {
    v14 = (char*)v3 - 15;
  }
  v15 = strlen(v14);
  v16 = *(_QWORD*)(a1 + 120);
  v17 = *(_QWORD*)(a1 + 128);
  if (v17 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v17 + 16), 1u,
                              memory_order_relaxed);
    v23 = v16;
    v24 = v17;
    v18 = GameData_2203100;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v17 + 16), 1u,
                              memory_order_relaxed);
  }
  else {
    v23 = v16;
    v24 = 0;
    v18 = GameData_2203100;
  }
  v22[0] = v14;
  v22[1] = v15;
  v25 = v18;
  v26 = 0;
  result = GameRoutine_bc9020(v13, v22);
  if (v24 != 0) {
    v20 = result;
    std___1___shared_weak_count___release_weak(v24);
    result = v20;
  }
  if (v17 != 0) {
    v21 = result;
    std___1___shared_weak_count___release_weak(v17);
    return v21;
  }
  return result;
}

__int64 wld_map_MapEffectLoader_LoadAsync_lambda0_Invoke(__int64 result,
                                                         __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int128 v6;
  unsigned int* v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64* v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  char** v17;
  unsigned __int64 v18;
  char* v19;
  char* v20;
  __int64 v21;
  __int64 v22;
  char* v23;
  __int64 v24;
  __int128 v25;
  char* v26;
  char* v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  char* v30;
  __int64 v31;
  char* v32;
  unsigned __int64 v33;
  __int64 v34;
  char* v35;
  unsigned __int64 v36;
  char* v37;
  __int64 v38;
  char* v39;
  unsigned __int64 v40;
  __int64 v41;
  char* v42;
  unsigned __int64 v43;
  char* v44;
  __int64 v45;
  char* v46;
  unsigned __int64 v47;
  __int64 v48;
  char* v49;
  unsigned __int64 v50;
  char* v51;
  __int64 v52;
  char* v53;
  unsigned __int64 v54;
  __int64 v55;
  char* v56;
  unsigned __int64 v57;
  char* v58;
  __int64 v59;
  char* v60;
  unsigned __int64 v61;
  __int64 v62;
  __int64 v63;
  unsigned __int64 v64;
  unsigned __int64 v65;
  unsigned __int64 v66;
  __int64 v67;
  unsigned __int64 v68;
  unsigned __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  unsigned __int64 v73;
  _DWORD* v74;
  __int64 v75;
  _DWORD* v76;
  char* v77;
  __int64 v78;
  unsigned __int64 v79;
  __int64 v80;
  unsigned __int64 v81;
  __int64 v82;
  unsigned __int64 v83;
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
  _DWORD* v94;
  __int64 v95;
  char* v96;
  __int64 v97;
  unsigned __int64 v98;
  __int64 v99;
  unsigned __int64 v100;
  __int64 v101;
  unsigned __int64 v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  unsigned __int64 v109;
  unsigned __int64 v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  __int64 v114;
  __int64 v115;
  __int64 v116;
  _DWORD* v117;
  _DWORD* v118;
  unsigned __int64 v119;
  __int64 v120;
  __int64 v121;
  _DWORD* v122;
  unsigned __int64 v123;
  __int64 v124;
  __int64 v125;
  unsigned __int64 v126;
  unsigned __int64 v127;
  __int64 v128;
  _DWORD* v129;
  unsigned __int64 v130;
  _DWORD* v131;
  unsigned __int64 v132;
  __int64 v133;
  unsigned __int64 v134;
  unsigned __int64 v135;
  unsigned __int64 v136;
  __int64 v137;
  __int64 v138;
  __int64 v139;
  __int64 v140;
  __int64 v141;
  __int128 v142;
  _DWORD* v143;
  __int64 v144;
  unsigned __int64 v145;
  unsigned __int64 v146;
  __int64 v147;
  __int64 v148;
  __int64 v149;
  _DWORD* v150;
  _DWORD* v151;
  unsigned __int64 v152;
  __int64 v153;
  _DWORD* v154;
  unsigned __int64 v155;
  char v156;
  __int64 v157;
  unsigned __int64 v158;
  char* v159;
  char** v160;
  _QWORD v161[2];
  __int64 v162;
  _QWORD v163[2];
  __int64 v164;
  int v165;
  __int128 v166;
  __int128 v167;
  __int128 v168;
  __int128 v169;
  bool v170;
  int v171;
  _QWORD v172[2];
  __int64 v173;
  __int64 v174;
  unsigned __int64 v175;
  char* v176;
  __int64 v177;
  unsigned __int64 v178;
  char* v179;
  __int64 v180;
  unsigned __int64 v181;
  char* v182;
  __int64 v183;
  unsigned __int64 v184;
  char* v185;
  __int64 v186;
  unsigned __int64 v187;
  char* v188;
  char v189;
  int v190;

  v2 = *a2;
  if (*a2 != 0 && *(_QWORD*)(v2 + 592) != 0) {
    v3 = **(_QWORD**)(result + 8);
    v141 = *(_QWORD*)(result + 8);
    v4 = ElfFile_631220(v2 + 800, "world::data::s_disposEffect");
    v5 = ElfFile_631220(v2 + 800, "world::data::disposEffect_num");
    v6 = *(_OWORD*)(v3 + 64);
    v7 = (unsigned int*)v5;
    v144 = 0;
    v145 = 0;
    v146 = 0;
    v147 = 0;
    v148 = 0;
    v149 = 0;
    v150 = nullptr;
    v151 = nullptr;
    v152 = 0;
    v153 = 0;
    v154 = nullptr;
    v155 = 0;
    v156 = 0;
    v142 = v6;
    ObjectBuildCreate_c32460(&v144, 0);
    v8 = v144;
    v148 = 0;
    v143 = v7;
    v151 = v150;
    v9 = *v7;
    v10 = (__int64*)fw_memory_g_heap_manager_ptr;
    if (0x8E38E38E38E38E39LL * ((__int64)(v146 - v144) >> 5) < v9) {
      v11 = v145;
      v12 = 288 * v9;
      v13 = v145 - v144;
      v14 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 288 * v9, 16, 0);
      GameRoutine_198de80(v8, v11, v14);
      v15 = v144;
      v144 = v14;
      v145 = v14 + v13;
      v146 = v14 + v12;
      if (v15 != 0) {
        v16 = 128;
        if (*(_QWORD*)(*v10 + 200) == 0) {
          v16 = 56;
        }
        nn_mem_StandardAllocator_Free(*v10 + v16, (_QWORD)(v15));
      }
    }
    result = GameRoutine_ce4320(&v147, (unsigned int)*v143, 0);
    v156 = 0;
    if (*v143 != 0) {
      v17 = (char**)(v4 + 128);
      v18 = 0;
      while (1) {
        v163[1] = 0;
        v164 = 0;
        v162 = 0;
        v163[0] = 0;
        v19 = &GameData_1a9f09e;
        v161[0] = 0;
        v161[1] = 0;
        v172[0] = 0;
        v172[1] = 0;
        v173 = 0;
        v174 = 0;
        v175 = 0;
        v176 = nullptr;
        v177 = 0;
        v178 = 0;
        v179 = nullptr;
        v180 = 0;
        v181 = 0;
        v182 = nullptr;
        v183 = 0;
        v184 = 0;
        v185 = nullptr;
        v186 = 0;
        v187 = 0;
        v188 = nullptr;
        v189 = 0;
        v190 = 2;
        v160 = v17 - 16;
        if (*(v17 - 14) != nullptr) {
          v20 = *(v17 - 14);
        }
        else {
          v20 = &GameData_1a9f09e;
        }
        GameRoutine_60a020(v163, v20);
        v21 = (__int64)*(v17 - 5);
        v22 = strlen(v21);
        v165 = GameRoutine_a81a70(v21, v22);
        if (*(v17 - 6) != nullptr) {
          v23 = *(v17 - 6);
        }
        else {
          v23 = &GameData_1a9f09e;
        }
        v24 = strlen(v23);
        v171 = GameRoutine_a81a70(v23, v24);
        *(_QWORD*)&v25 = *(v17 - 13);
        *((_QWORD*)&v25 + 1) = *((unsigned int*)v17 - 24);
        v166 = v25;
        *(_QWORD*)&v25 = *(char**)((char*)v17 - 92);
        *((_QWORD*)&v25 + 1) = *((unsigned int*)v17 - 21);
        v169 = v25;
        *(_QWORD*)&v25 = *(v17 - 10);
        *((_QWORD*)&v25 + 1) = *((unsigned int*)v17 - 18);
        v168 = v25;
        v170 = *(v17 - 7) != nullptr;
        if (*(v17 - 15) != nullptr) {
          v26 = *(v17 - 15);
        }
        else {
          v26 = &GameData_1a9f09e;
        }
        GameRoutine_60a020(v161, v26);
        if (*(v17 - 8) != nullptr) {
          v27 = *(v17 - 8);
        }
        else {
          v27 = &GameData_1a9f09e;
        }
        GameRoutine_60a020(v172, v27);
        v167 = v142;
        if (*(v17 - 4) != nullptr) {
          v19 = *(v17 - 4);
        }
        v28 = strlen(v19);
        if (v28 >= 0xFFFFFFFFFFFFFFF7LL) {
        LABEL_312:
          String_60a1d0(v28);
        }
        v29 = v28;
        if (v28 >= 0x17) {
          break;
        }
        v30 = (char*)&v157 + 1;
        LOBYTE(v157) = 2 * v28;
        if (v28 != 0) {
          goto LABEL_33;
        }
      LABEL_34:
        v30[v29] = 0;
        if ((v174 & 1) != 0) {
          if ((v157 & 1) != 0) {
            v32 = v159;
          }
          else {
            v32 = (char*)&v157 + 1;
          }
          if ((v157 & 1) != 0) {
            v33 = v158;
          }
          else {
            v33 = (unsigned __int64)(unsigned __int8)v157 >> 1;
          }
          SpineModel_64dde0(&v174, v32, v33);
          if ((v157 & 1) == 0) {
            goto LABEL_50;
          }
        LABEL_46:
          if (v159 != nullptr) {
            v34 = 128;
            if (*(_QWORD*)(*v10 + 200) == 0) {
              v34 = 56;
            }
            nn_mem_StandardAllocator_Free(*v10 + v34, (_QWORD)(v159));
          }
          goto LABEL_50;
        }
        if ((v157 & 1) == 0) {
          v174 = v157;
          v175 = v158;
          v176 = v159;
          goto LABEL_50;
        }
        GameRoutine_64df20(&v174, v159, v158);
        if ((v157 & 1) != 0) {
          goto LABEL_46;
        }
      LABEL_50:
        if (*(v17 - 3) != nullptr) {
          v35 = *(v17 - 3);
        }
        else {
          v35 = &GameData_1a9f09e;
        }
        v28 = strlen(v35);
        if (v28 >= 0xFFFFFFFFFFFFFFF7LL) {
          goto LABEL_312;
        }
        v36 = v28;
        if (v28 >= 0x17) {
          if ((v28 | 7) == 0x17) {
            v38 = 26;
          }
          else {
            v38 = (v28 | 7) + 1;
          }
          v37 = (char*)fw_memory_HeapManager_Allocate(*v10, v38, 16, 0);
          v158 = v36;
          v159 = v37;
          v157 = v38 | 1;
        LABEL_61:
          memmove(v37, v35, v36);
          goto LABEL_62;
        }
        v37 = (char*)&v157 + 1;
        LOBYTE(v157) = 2 * v28;
        if (v28 != 0) {
          goto LABEL_61;
        }
      LABEL_62:
        v37[v36] = 0;
        if ((v177 & 1) != 0) {
          if ((v157 & 1) != 0) {
            v39 = v159;
          }
          else {
            v39 = (char*)&v157 + 1;
          }
          if ((v157 & 1) != 0) {
            v40 = v158;
          }
          else {
            v40 = (unsigned __int64)(unsigned __int8)v157 >> 1;
          }
          SpineModel_64dde0(&v177, v39, v40);
          if ((v157 & 1) == 0) {
            goto LABEL_78;
          }
        LABEL_74:
          if (v159 != nullptr) {
            v41 = 128;
            if (*(_QWORD*)(*v10 + 200) == 0) {
              v41 = 56;
            }
            nn_mem_StandardAllocator_Free(*v10 + v41, (_QWORD)(v159));
          }
          goto LABEL_78;
        }
        if ((v157 & 1) == 0) {
          v177 = v157;
          v178 = v158;
          v179 = v159;
          goto LABEL_78;
        }
        GameRoutine_64df20(&v177, v159, v158);
        if ((v157 & 1) != 0) {
          goto LABEL_74;
        }
      LABEL_78:
        if (*(v17 - 2) != nullptr) {
          v42 = *(v17 - 2);
        }
        else {
          v42 = &GameData_1a9f09e;
        }
        v28 = strlen(v42);
        if (v28 >= 0xFFFFFFFFFFFFFFF7LL) {
          goto LABEL_312;
        }
        v43 = v28;
        if (v28 >= 0x17) {
          if ((v28 | 7) == 0x17) {
            v45 = 26;
          }
          else {
            v45 = (v28 | 7) + 1;
          }
          v44 = (char*)fw_memory_HeapManager_Allocate(*v10, v45, 16, 0);
          v158 = v43;
          v159 = v44;
          v157 = v45 | 1;
        LABEL_89:
          memmove(v44, v42, v43);
          goto LABEL_90;
        }
        v44 = (char*)&v157 + 1;
        LOBYTE(v157) = 2 * v28;
        if (v28 != 0) {
          goto LABEL_89;
        }
      LABEL_90:
        v44[v43] = 0;
        if ((v180 & 1) != 0) {
          if ((v157 & 1) != 0) {
            v46 = v159;
          }
          else {
            v46 = (char*)&v157 + 1;
          }
          if ((v157 & 1) != 0) {
            v47 = v158;
          }
          else {
            v47 = (unsigned __int64)(unsigned __int8)v157 >> 1;
          }
          SpineModel_64dde0(&v180, v46, v47);
          if ((v157 & 1) == 0) {
            goto LABEL_106;
          }
        LABEL_102:
          if (v159 != nullptr) {
            v48 = 128;
            if (*(_QWORD*)(*v10 + 200) == 0) {
              v48 = 56;
            }
            nn_mem_StandardAllocator_Free(*v10 + v48, (_QWORD)(v159));
          }
          goto LABEL_106;
        }
        if ((v157 & 1) == 0) {
          v180 = v157;
          v181 = v158;
          v182 = v159;
          goto LABEL_106;
        }
        GameRoutine_64df20(&v180, v159, v158);
        if ((v157 & 1) != 0) {
          goto LABEL_102;
        }
      LABEL_106:
        if (*(v17 - 1) != nullptr) {
          v49 = *(v17 - 1);
        }
        else {
          v49 = &GameData_1a9f09e;
        }
        v28 = strlen(v49);
        if (v28 >= 0xFFFFFFFFFFFFFFF7LL) {
          goto LABEL_312;
        }
        v50 = v28;
        if (v28 >= 0x17) {
          if ((v28 | 7) == 0x17) {
            v52 = 26;
          }
          else {
            v52 = (v28 | 7) + 1;
          }
          v51 = (char*)fw_memory_HeapManager_Allocate(*v10, v52, 16, 0);
          v158 = v50;
          v159 = v51;
          v157 = v52 | 1;
        LABEL_117:
          memmove(v51, v49, v50);
          goto LABEL_118;
        }
        v51 = (char*)&v157 + 1;
        LOBYTE(v157) = 2 * v28;
        if (v28 != 0) {
          goto LABEL_117;
        }
      LABEL_118:
        v51[v50] = 0;
        if ((v183 & 1) != 0) {
          if ((v157 & 1) != 0) {
            v53 = v159;
          }
          else {
            v53 = (char*)&v157 + 1;
          }
          if ((v157 & 1) != 0) {
            v54 = v158;
          }
          else {
            v54 = (unsigned __int64)(unsigned __int8)v157 >> 1;
          }
          SpineModel_64dde0(&v183, v53, v54);
          if ((v157 & 1) == 0) {
            goto LABEL_134;
          }
        LABEL_130:
          if (v159 != nullptr) {
            v55 = 128;
            if (*(_QWORD*)(*v10 + 200) == 0) {
              v55 = 56;
            }
            nn_mem_StandardAllocator_Free(*v10 + v55, (_QWORD)(v159));
          }
          goto LABEL_134;
        }
        if ((v157 & 1) == 0) {
          v183 = v157;
          v184 = v158;
          v185 = v159;
          goto LABEL_134;
        }
        GameRoutine_64df20(&v183, v159, v158);
        if ((v157 & 1) != 0) {
          goto LABEL_130;
        }
      LABEL_134:
        if (*v17 != nullptr) {
          v56 = *v17;
        }
        else {
          v56 = &GameData_1a9f09e;
        }
        v28 = strlen(v56);
        if (v28 >= 0xFFFFFFFFFFFFFFF7LL) {
          goto LABEL_312;
        }
        v57 = v28;
        if (v28 >= 0x17) {
          if ((v28 | 7) == 0x17) {
            v59 = 26;
          }
          else {
            v59 = (v28 | 7) + 1;
          }
          v58 = (char*)fw_memory_HeapManager_Allocate(*v10, v59, 16, 0);
          v158 = v57;
          v159 = v58;
          v157 = v59 | 1;
        LABEL_145:
          memmove(v58, v56, v57);
          goto LABEL_146;
        }
        v58 = (char*)&v157 + 1;
        LOBYTE(v157) = 2 * v28;
        if (v28 != 0) {
          goto LABEL_145;
        }
      LABEL_146:
        v58[v57] = 0;
        if ((v186 & 1) != 0) {
          if ((v157 & 1) != 0) {
            v60 = v159;
          }
          else {
            v60 = (char*)&v157 + 1;
          }
          if ((v157 & 1) != 0) {
            v61 = v158;
          }
          else {
            v61 = (unsigned __int64)(unsigned __int8)v157 >> 1;
          }
          SpineModel_64dde0(&v186, v60, v61);
          if ((v157 & 1) != 0) {
          LABEL_158:
            if (v159 != nullptr) {
              v62 = 128;
              if (*(_QWORD*)(*v10 + 200) == 0) {
                v62 = 56;
              }
              nn_mem_StandardAllocator_Free(*v10 + v62, (_QWORD)(v159));
            }
          }
        }
        else if ((v157 & 1) != 0) {
          GameRoutine_64df20(&v186, v159, v158);
          if ((v157 & 1) != 0) {
            goto LABEL_158;
          }
        }
        else {
          v186 = v157;
          v187 = v158;
          v188 = v159;
        }
        GameRoutine_18df040(&v174);
        v190 = 0;
        v156 |= v189;
        result = v145;
        if (v145 >= v146) {
          v64 = v145 - v144;
          v65 = 1 - 0x71C71C71C71C71C7LL * ((__int64)(v145 - v144) >> 5);
          if (v65 > 0xE38E38E38E38E3LL) {
            GameRoutine_198de60();
          }
          if (0x1C71C71C71C71C72LL * ((__int64)(v146 - v144) >> 5) > v65) {
            v65 = 0x1C71C71C71C71C72LL * ((__int64)(v146 - v144) >> 5);
          }
          if (0x8E38E38E38E38E39LL * ((__int64)(v146 - v144) >> 5) >=
              0x71C71C71C71C71LL) {
            v66 = 0xE38E38E38E38E3LL;
          }
          else {
            v66 = v65;
          }
          if (v66 != 0) {
            if (v66 > 0xE38E38E38E38E3LL) {
              goto LABEL_313;
            }
            v67 = fw_memory_HeapManager_Allocate(*v10, 288 * v66, 16, 0);
          }
          else {
            v67 = 0;
          }
          v68 = v67 + v64;
          v69 = v67 + 288 * v66;
          GameRoutine_198e090(v68, &v160);
          v63 = v68 + 288;
          v70 = v68 + v144 - v145;
          result = GameRoutine_198de80(v144, v145, v70);
          v71 = v144;
          v144 = v70;
          v145 = v63;
          v146 = v69;
          if (v71 != 0) {
            v72 = 128;
            if (*(_QWORD*)(*v10 + 200) == 0) {
              v72 = 56;
            }
            result = nn_mem_StandardAllocator_Free(*v10 + v72, (_QWORD)(v71));
          }
        }
        else {
          result = GameRoutine_198e090(v145, &v160);
          v63 = result + 288;
        }
        v145 = v63;
        if (v189 != 0 ||
            ((v183 & 1) != 0
                 ? (v73 = v184)
                 : (v73 = (unsigned __int64)(unsigned __int8)v183 >> 1),
             v73 != 0)) {
          v74 = v151;
          if ((unsigned __int64)v151 >= v152) {
            v76 = v150;
            v77 = (char*)((char*)v151 - (char*)v150);
            v78 = v151 - v150;
            v79 = v78 + 1;
            if ((unsigned __int64)(v78 + 1) >> 62 != 0) {
              goto LABEL_315;
            }
            v80 = v152 - (_QWORD)v150;
            if ((__int64)(v152 - (_QWORD)v150) >> 1 > v79) {
              v79 = v80 >> 1;
            }
            if ((unsigned __int64)v80 >= 0x7FFFFFFFFFFFFFFCLL) {
              v81 = 0x3FFFFFFFFFFFFFFFLL;
            }
            else {
              v81 = v79;
            }
            if (v81 != 0) {
              if (v81 >> 62 != 0) {
                goto LABEL_313;
              }
              v82 = fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v81, 16, 0);
            }
            else {
              v82 = 0;
            }
            v83 = v82 + 4 * v81;
            v84 = (__int64)&v77[v82 + -4 * v78];
            *(_DWORD*)&v77[v82] = v18;
            v75 = (__int64)&v77[v82 + 4];
            result = memcpy(v84, v76, v77);
            v150 = (_DWORD*)v84;
            v151 = (_DWORD*)v75;
            v152 = v83;
            v10 = &fw_memory_g_heap_manager;
            if (v76 != nullptr) {
              v85 = 128;
              if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
                v85 = 56;
              }
              result = nn_mem_StandardAllocator_Free(
                  fw_memory_g_heap_manager + v85, (_QWORD)(v76));
            }
          }
          else {
            *v151 = v18;
            v75 = (__int64)(v74 + 1);
          }
          v151 = (_DWORD*)v75;
        }
        else {
          v94 = v154;
          if ((unsigned __int64)v154 >= v155) {
            v95 = v153;
            v96 = (char*)v154 - v153;
            v97 = ((__int64)v154 - v153) >> 2;
            v98 = v97 + 1;
            if ((unsigned __int64)(v97 + 1) >> 62 != 0) {
            LABEL_315:
              GameRoutine_66df80(result);
            }
            v99 = v155 - v153;
            if ((__int64)(v155 - v153) >> 1 > v98) {
              v98 = v99 >> 1;
            }
            if ((unsigned __int64)v99 >= 0x7FFFFFFFFFFFFFFCLL) {
              v100 = 0x3FFFFFFFFFFFFFFFLL;
            }
            else {
              v100 = v98;
            }
            if (v100 != 0) {
              if (v100 >> 62 != 0) {
              LABEL_313:
                GameRoutine_60a210(result);
              }
              v101 = fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v100, 16, 0);
            }
            else {
              v101 = 0;
            }
            v102 = v101 + 4 * v100;
            v103 = (__int64)&v96[v101 + -4 * v97];
            *(_DWORD*)&v96[v101] = v18;
            v104 = (__int64)&v96[v101 + 4];
            result = memcpy(v103, v95, v96);
            v153 = v103;
            v154 = (_DWORD*)v104;
            v155 = v102;
            v10 = &fw_memory_g_heap_manager;
            if (v95 != 0) {
              v105 = 128;
              if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
                v105 = 56;
              }
              result = nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager +
                                                     v105, (_QWORD)(v95));
            }
            v154 = (_DWORD*)v104;
          }
          else {
            *v154 = v18;
            v154 = v94 + 1;
          }
        }
        if ((v186 & 1) != 0 && v188 != nullptr) {
          v86 = 128;
          if (*(_QWORD*)(*v10 + 200) == 0) {
            v86 = 56;
          }
          result = nn_mem_StandardAllocator_Free(*v10 + v86, (_QWORD)(v188));
        }
        if ((v183 & 1) != 0 && v185 != nullptr) {
          v87 = 128;
          if (*(_QWORD*)(*v10 + 200) == 0) {
            v87 = 56;
          }
          result = nn_mem_StandardAllocator_Free(*v10 + v87, (_QWORD)(v185));
        }
        if ((v180 & 1) != 0 && v182 != nullptr) {
          v88 = 128;
          if (*(_QWORD*)(*v10 + 200) == 0) {
            v88 = 56;
          }
          result = nn_mem_StandardAllocator_Free(*v10 + v88, (_QWORD)(v182));
        }
        if ((v177 & 1) != 0 && v179 != nullptr) {
          v89 = 128;
          if (*(_QWORD*)(*v10 + 200) == 0) {
            v89 = 56;
          }
          result = nn_mem_StandardAllocator_Free(*v10 + v89, (_QWORD)(v179));
        }
        if ((v174 & 1) != 0 && v176 != nullptr) {
          v90 = 128;
          if (*(_QWORD*)(*v10 + 200) == 0) {
            v90 = 56;
          }
          result = nn_mem_StandardAllocator_Free(*v10 + v90, (_QWORD)(v176));
        }
        if ((v172[0] & 1) != 0 && v173 != 0) {
          v91 = 128;
          if (*(_QWORD*)(*v10 + 200) == 0) {
            v91 = 56;
          }
          result = nn_mem_StandardAllocator_Free(*v10 + v91, (_QWORD)(v173));
        }
        if ((v163[0] & 1) != 0 && v164 != 0) {
          v92 = 128;
          if (*(_QWORD*)(*v10 + 200) == 0) {
            v92 = 56;
          }
          result = nn_mem_StandardAllocator_Free(*v10 + v92, (_QWORD)(v164));
        }
        if ((v161[0] & 1) != 0 && v162 != 0) {
          v93 = 128;
          if (*(_QWORD*)(*v10 + 200) == 0) {
            v93 = 56;
          }
          result = nn_mem_StandardAllocator_Free(*v10 + v93, (_QWORD)(v162));
        }
        ++v18;
        v17 += 17;
        if (v18 >= (unsigned int)*v143) {
          goto LABEL_257;
        }
      }
      if ((v28 | 7) == 0x17) {
        v31 = 26;
      }
      else {
        v31 = (v28 | 7) + 1;
      }
      v30 = (char*)fw_memory_HeapManager_Allocate(*v10, v31, 16, 0);
      v158 = v29;
      v159 = v30;
      v157 = v31 | 1;
    LABEL_33:
      memmove(v30, v19, v29);
      goto LABEL_34;
    }
  LABEL_257:
    if ((*(_BYTE*)(v141 + 112) & 1) != 0) {
      v106 = *(_QWORD*)(v141 + 8);
      if (v106 != 0) {
        result = ObjectBuildCreate_c32460(v141 + 8, v106);
        if (*(_QWORD*)(v141 + 8) != 0) {
          v107 = 128;
          if (*(_QWORD*)(*v10 + 200) == 0) {
            v107 = 56;
          }
          result = nn_mem_StandardAllocator_Free(
              *v10 + v107, (_QWORD)(*(_QWORD*)(v141 + 8)));
        }
        *(_QWORD*)(v141 + 16) = 0;
        *(_QWORD*)(v141 + 24) = 0;
      }
      v108 = *(_QWORD*)(v141 + 32);
      *(_QWORD*)(v141 + 8) = v144;
      v109 = v145;
      v144 = 0;
      v145 = 0;
      *(_QWORD*)(v141 + 16) = v109;
      v110 = v146;
      v146 = 0;
      *(_QWORD*)(v141 + 24) = v110;
      if (v108 != 0) {
        v111 = 128;
        if (*(_QWORD*)(*v10 + 200) == 0) {
          v111 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*v10 + v111, (_QWORD)(v108));
        *(_QWORD*)(v141 + 40) = 0;
        *(_QWORD*)(v141 + 48) = 0;
      }
      v112 = *(_QWORD*)(v141 + 56);
      *(_QWORD*)(v141 + 32) = v147;
      v113 = v148;
      v147 = 0;
      v148 = 0;
      *(_QWORD*)(v141 + 40) = v113;
      v114 = v149;
      v149 = 0;
      *(_QWORD*)(v141 + 48) = v114;
      if (v112 != 0) {
        v115 = *v10;
        *(_QWORD*)(v141 + 64) = v112;
        v116 = 128;
        if (*(_QWORD*)(v115 + 200) == 0) {
          v116 = 56;
        }
        result = nn_mem_StandardAllocator_Free(v115 + v116, (_QWORD)(v112));
        *(_QWORD*)(v141 + 64) = 0;
        *(_QWORD*)(v141 + 72) = 0;
      }
      v117 = *(_DWORD**)(v141 + 80);
      *(_QWORD*)(v141 + 56) = v150;
      v118 = v151;
      v150 = nullptr;
      v151 = nullptr;
      *(_QWORD*)(v141 + 64) = v118;
      v119 = v152;
      v152 = 0;
      *(_QWORD*)(v141 + 72) = v119;
      if (v117 != nullptr) {
        v120 = *v10;
        *(_QWORD*)(v141 + 88) = v117;
        v121 = 128;
        if (*(_QWORD*)(v120 + 200) == 0) {
          v121 = 56;
        }
        result = nn_mem_StandardAllocator_Free(v120 + v121, (_QWORD)(v117));
        v117 = v150;
        *(_QWORD*)(v141 + 88) = 0;
        *(_QWORD*)(v141 + 96) = 0;
      }
      *(_QWORD*)(v141 + 80) = v153;
      v122 = v154;
      v153 = 0;
      v154 = nullptr;
      *(_QWORD*)(v141 + 88) = v122;
      v123 = v155;
      v155 = 0;
      *(_QWORD*)(v141 + 96) = v123;
      *(_BYTE*)(v141 + 104) = v156;
      if (v117 != nullptr) {
        v124 = *v10;
        v151 = v117;
        v125 = 128;
        if (*(_QWORD*)(v124 + 200) == 0) {
          v125 = 56;
        }
        result = nn_mem_StandardAllocator_Free(v124 + v125, (_QWORD)(v117));
      }
    }
    else {
      *(_QWORD*)(v141 + 8) = v144;
      v126 = v145;
      v144 = 0;
      v145 = 0;
      *(_QWORD*)(v141 + 16) = v126;
      v127 = v146;
      v146 = 0;
      *(_QWORD*)(v141 + 24) = v127;
      *(_QWORD*)(v141 + 32) = v147;
      v128 = v148;
      v147 = 0;
      v148 = 0;
      *(_QWORD*)(v141 + 40) = v128;
      *(_QWORD*)(v141 + 48) = v149;
      v129 = v150;
      v149 = 0;
      v150 = nullptr;
      *(_QWORD*)(v141 + 56) = v129;
      *(_QWORD*)(v141 + 64) = v151;
      v130 = v152;
      v151 = nullptr;
      v152 = 0;
      *(_QWORD*)(v141 + 72) = v130;
      *(_QWORD*)(v141 + 80) = v153;
      v131 = v154;
      v153 = 0;
      v154 = nullptr;
      *(_QWORD*)(v141 + 88) = v131;
      v132 = v155;
      v155 = 0;
      *(_QWORD*)(v141 + 96) = v132;
      *(_BYTE*)(v141 + 104) = v156;
      *(_BYTE*)(v141 + 112) = 1;
    }
    if (v147 != 0) {
      v133 = 128;
      if (*(_QWORD*)(*v10 + 200) == 0) {
        v133 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*v10 + v133, (_QWORD)(v147));
    }
    v134 = v144;
    if (v144 != 0) {
      if (v144 == v145) {
        goto LABEL_308;
      }
      v135 = v145 - 280;
      do {
        result = ObjectBuildCreate_c23160(v135 + 152);
        if ((*(_BYTE*)(v135 + 128) & 1) != 0 && *(_QWORD*)(v135 + 144) != 0) {
          if (*(_QWORD*)(*v10 + 200) != 0) {
            v137 = 128;
          }
          else {
            v137 = 56;
          }
          result = nn_mem_StandardAllocator_Free(
              *v10 + v137, (_QWORD)(*(_QWORD*)(v135 + 144)));
        }
        if ((*(_BYTE*)(v135 + 24) & 1) != 0 && *(_QWORD*)(v135 + 40) != 0) {
          if (*(_QWORD*)(*v10 + 200) != 0) {
            v138 = 128;
          }
          else {
            v138 = 56;
          }
          result = nn_mem_StandardAllocator_Free(
              *v10 + v138, (_QWORD)(*(_QWORD*)(v135 + 40)));
        }
        if ((*(_BYTE*)v135 & 1) != 0 && *(_QWORD*)(v135 + 16) != 0) {
          if (*(_QWORD*)(*v10 + 200) != 0) {
            v139 = 128;
          }
          else {
            v139 = 56;
          }
          result = nn_mem_StandardAllocator_Free(
              *v10 + v139, (_QWORD)(*(_QWORD*)(v135 + 16)));
        }
        v136 = v135 - 8;
        v135 -= 288LL;
      } while (v136 != v134);
      v145 = v134;
      if (v144 != 0) {
      LABEL_308:
        v140 = 128;
        if (*(_QWORD*)(*v10 + 200) == 0) {
          v140 = 56;
        }
        return nn_mem_StandardAllocator_Free(*v10 + v140, (_QWORD)(v144));
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
