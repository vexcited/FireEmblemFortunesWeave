#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void FileManager_10e040(PSEUDO_X8, __int64, __int64,
                                                   unsigned int);
__int64* snd_data_ee440(__int64*, char*);
__int64 Crc32List_1163b0();
__int64 Data_edfe0(__int64*, __int64);
__int64 FileManager_10e2c0();
__int64 GameRoutine_118ff0(_QWORD);
__int64 GameRoutine_1905a40(__int64*, __int64, unsigned __int64);
__int64 GameRoutine_a2af20(__int64, __int64, const char*, ...);
__int64 GameRoutine_ed4a0(__int64);
__int64 snd_data_ee200(__int64*, char*);
__int64 snd_fnd_WeakHandle_get(__int64);
__int64 strstr(_QWORD, _QWORD);
extern __int64* GameData_2134180[22];
extern __int64* GameData_2134188[21];
extern __int64* GameData_2134190[20];
extern __int64* GameData_21341d0[12];
extern __int64* snd_data_s_addSoundArcDataList_ptr[10];
extern __int64* snd_data_s_fieldDataList_ptr[23];
extern __int64* snd_data_s_groupDataList_ptr[13];
extern __int64* snd_data_s_userGroupDataList_ptr[11];
extern __int64* snd_g_memory_ptr[2];
extern char GameData_1a9f09e;
unsigned __int64 GameRoutine_190020(__int64*, char*);
void __attribute__((noreturn)) GameRoutine_ee1b0();
void __attribute__((noreturn)) GameRoutine_ee1d0();
void __attribute__((noreturn)) GameRoutine_f0150();
void __attribute__((noreturn)) GameRoutine_f0170();
void __attribute__((noreturn)) GameRoutine_f0190();
__int64 snd_data_ed5a0(__int64 result, char a2);
__int64 snd_data_ef600(__int64 result, char a2);

__int64 snd_data_ed5a0(__int64 result, char a2)
{
  __int64* v2;
  const char* v3;
  __int64* v5;
  _QWORD* v6;
  __int64* v7;
  _QWORD* v8;
  _QWORD* v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;
  __int64* v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  _QWORD* v26;
  unsigned int v27;
  unsigned __int64 v28;
  _BYTE* v29;
  __int64 v30;
  _BYTE* v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  __int64 v35;
  _BYTE* v36;
  char* v37;
  char* v38;
  unsigned __int64 v39;
  char* v40;
  __int64 v41;
  char* v42;
  char v43;
  char v44;
  __int64** v45;
  __int64 v46;
  unsigned __int64 v47;
  __int64* v48;
  __int64 v49;
  unsigned __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64* v55;
  __int64* v56;
  __int64* v57;
  _QWORD* v58;
  _QWORD* v59;
  __int64 v60;
  __int64 v61;
  __int64* v62;
  __int64 v63;
  __int64 v64;
  __int64* v65;
  _BYTE* v66;
  __int64* v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  _QWORD* v76;
  unsigned int v77;
  unsigned __int64 v78;
  _BYTE* v79;
  __int64 v80;
  _BYTE* v81;
  unsigned __int64 v82;
  unsigned __int64 v83;
  __int64 v84;
  __int64 v85;
  _BYTE* v86;
  char* v87;
  char* v88;
  unsigned __int64 v89;
  char* v90;
  __int64 v91;
  char* v92;
  char v93;
  char v94;
  __int64** v95;
  __int64 v96;
  unsigned __int64 v97;
  __int64* v98;
  __int64 v99;
  unsigned __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  __int64* v105;
  __int64* v106;
  __int64* v107;
  _QWORD* v108;
  _QWORD* v109;
  __int64 v110;
  __int64 v111;
  int v112;
  __int64** v113;
  __int64* v114;
  __int64 v115;
  __int64* v116;
  __int64 v117;
  __int64 v118;
  unsigned __int8* v119;
  int v120;
  __int64* v121;
  __int64* v122;
  __int64 v123;
  __int64 v124;
  const char* v125;
  struct {
    __int64 v126;
    unsigned __int64 v127;
    __int64 v128;
  } v126_;
  struct {
    __int64 v129;
    unsigned __int64 v130;
    __int64 v131;
  } v129_;
  struct {
    __int64 v132;
    unsigned __int64 v133;
    __int64 v134;
  } v132_;

  v2 = snd_data_s_fieldDataList_ptr[0];
  if (*snd_data_s_fieldDataList_ptr[0] != 0) {
    return result;
  }
  v3 = (const char*)result;
  v5 = snd_g_memory_ptr[0];
  v6 = (_QWORD*)(*(__int64 (**)(_QWORD, __int64, __int64))(
      **(_QWORD**)snd_g_memory_ptr[0] + 16LL))(*snd_g_memory_ptr[0], 24, 32);
  *v6 = 0;
  v6[1] = 0;
  v6[2] = 0;
  v7 = GameData_2134180[0];
  *GameData_2134180[0] = (__int64)v6;
  v8 = (_QWORD*)(*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)*v5 +
                                                            16LL))(*v5, 24, 32);
  *v8 = 0;
  v8[1] = 0;
  v8[2] = 0;
  *GameData_2134188[0] = (__int64)v8;
  v9 = (_QWORD*)(*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)*v5 +
                                                            16LL))(*v5, 24, 32);
  *v9 = 0;
  v9[1] = 0;
  v9[2] = 0;
  *v2 = (__int64)v9;
  v10 = (_QWORD*)(*(__int64 (**)(__int64, __int64, __int64))(
      *(_QWORD*)*v5 + 16LL))(*v5, 24, 32);
  *v10 = 0;
  v10[1] = 0;
  v10[2] = 0;
  *GameData_2134190[0] = (__int64)v10;
  if ((a2 & 1) == 0) {
    v16 = (__int64*)*v7;
    v17 = v5;
    v18 = Crc32List_1163b0();
    v19 = GameRoutine_118ff0(v18);
    FileManager_10e040((void*)((__int64)&v129_.v129), v19, (__int64)v3, 0x40u);
    Data_edfe0(v16, (__int64)&v129_.v129);
    v20 = snd_fnd_WeakHandle_get(*(_QWORD*)(*v7 + 8) - 16LL);
    (*(void (**)(__int64))(*(_QWORD*)v20 + 48LL))(v20);
    v21 = GameRoutine_ed4a0(*(_QWORD*)(*v7 + 8) - 16LL);
    v22 = (*(__int64 (**)(__int64, const char*))(*(_QWORD*)v21 + 120LL))(
        v21, "snd::data::s_disposDataList");
    if (v22 == 0 || (v23 = v22, *(int*)(v22 + 8) < 1)) {
    LABEL_45:
      v61 = *GameData_2134188[0];
      v62 = *(__int64**)(*GameData_2134188[0] + 8);
      if ((unsigned __int64)v62 >= *(_QWORD*)(*GameData_2134188[0] + 16)) {
        result =
            snd_data_ee200(*(__int64**)GameData_2134188[0], &GameData_1a9f09e);
      }
      else {
        GameRoutine_190020(&v129_.v129, &GameData_1a9f09e);
        if ((v129_.v129 & 1) != 0) {
          GameRoutine_1905a40(v62, v129_.v131, v129_.v130);
          if ((v129_.v129 & 1) != 0) {
            (*(void (**)(__int64, __int64))(*(_QWORD*)*v17 + 24LL))(*v17,
                                                                    v129_.v131);
          }
          result = (__int64)(v62 + 3);
        }
        else {
          v63 = v129_.v129;
          v64 = v129_.v131;
          result = (__int64)(v62 + 3);
          v62[1] = v129_.v130;
          v62[2] = v64;
          *v62 = v63;
        }
      }
      *(_QWORD*)(v61 + 8) = result;
      return result;
    }
    v24 = 0;
    while (1) {
      v26 = (_QWORD*)*GameData_2134190[0];
      v27 = ((unsigned int)(*(_DWORD*)(*v7 + 8) - *(_DWORD*)*v7) >> 4) - 1;
      v29 = *(_BYTE**)(*GameData_2134190[0] + 8);
      v28 = *(_QWORD*)(*GameData_2134190[0] + 16);
      if ((unsigned __int64)v29 >= v28) {
        break;
      }
      *v29 = v27;
      v30 = (__int64)(v29 + 1);
    LABEL_30:
      v26[1] = v30;
      v45 = (__int64**)*snd_data_s_fieldDataList_ptr[0];
      v46 = *(_QWORD*)v23 + 224 * v24;
      v48 = *(__int64**)(*snd_data_s_fieldDataList_ptr[0] + 8);
      v47 = *(_QWORD*)(*snd_data_s_fieldDataList_ptr[0] + 16);
      if ((unsigned __int64)v48 < v47) {
        *v48 = v46;
        v25 = (__int64)(v48 + 1);
      }
      else {
        v49 = (char*)v48 - (char*)*v45;
        v50 = (v49 >> 3) + 1;
        if (v50 >> 61 != 0) {
        LABEL_126:
          GameRoutine_ee1d0();
        }
        v51 = v47 - (_QWORD)*v45;
        v52 = v51 >> 2;
        if (v51 >> 2 <= v50) {
          v52 = (v49 >> 3) + 1;
        }
        if ((unsigned __int64)v51 >= 0x7FFFFFFFFFFFFFF8LL) {
          v53 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v53 = v52;
        }
        v54 = (*(__int64 (**)(__int64, __int64, __int64))(
            *(_QWORD*)*v17 + 16LL))(*v17, 8 * v53, 32);
        v55 = (__int64*)(v54 + v49);
        *v55 = v46;
        v25 = v54 + v49 + 8;
        v56 = *v45;
        v57 = v45[1];
        v58 = (__int64*)((char*)v55 + ((char*)*v45 - (char*)v57));
        if (v57 != *v45) {
          v59 = v58;
          do {
            v60 = *v56++;
            *v59++ = v60;
          } while (v56 != v57);
          v56 = *v45;
        }
        *v45 = v58;
        v45[1] = (__int64*)v25;
        v45[2] = (__int64*)(v54 + 8 * v53);
        if (v56 != nullptr) {
          (*(void (**)(__int64))(*(_QWORD*)*v17 + 24LL))(*v17);
        }
      }
      ++v24;
      v7 = GameData_2134180[0];
      v45[1] = (__int64*)v25;
      if (v24 >= *(int*)(v23 + 8)) {
        goto LABEL_45;
      }
    }
    v31 = &v29[-*v26];
    v32 = (unsigned __int64)(v31 + 1);
    if ((__int64)(v31 + 1) < 0) {
    LABEL_125:
      GameRoutine_ee1b0();
    }
    v33 = v28 - *v26;
    if (2 * v33 > v32) {
      v32 = 2 * v33;
    }
    if (v33 >= 0x3FFFFFFFFFFFFFFFLL) {
      v34 = 0x7FFFFFFFFFFFFFFFLL;
    }
    else {
      v34 = v32;
    }
    if (v34 != 0) {
      v35 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)*v17 + 16LL))(
          *v17, v34, 32);
    }
    else {
      v35 = 0;
    }
    v36 = &v31[v35];
    *v36 = v27;
    v30 = (__int64)&v31[v35 + 1];
    v37 = (char*)*v26;
    v38 = (char*)v26[1];
    v39 = *v26 - (_QWORD)v38;
    v40 = &v36[v39];
    if ((char*)*v26 == v38) {
    LABEL_28:
      *v26 = v40;
      v26[1] = v30;
      v26[2] = v35 + v34;
      if (v37 != nullptr) {
        (*(void (**)(__int64))(*(_QWORD*)*v17 + 24LL))(*v17);
      }
      goto LABEL_30;
    }
    v41 = ((int)v38 - (int)v37) & 7LL;
    if (v41 != 0) {
      v42 = v40;
      do {
        v43 = *v37++;
        --v41;
        *v42++ = v43;
      } while (v41 != 0);
      if (v39 > 0xFFFFFFFFFFFFFFF8LL) {
        goto LABEL_27;
      }
    }
    else {
      v42 = v40;
      if (v39 > 0xFFFFFFFFFFFFFFF8LL) {
      LABEL_27:
        v37 = (char*)*v26;
        goto LABEL_28;
      }
    }
    do {
      *v42 = *v37;
      v42[1] = v37[1];
      v42[2] = v37[2];
      v42[3] = v37[3];
      v42[4] = v37[4];
      v42[5] = v37[5];
      v42[6] = v37[6];
      v44 = v37[7];
      v37 += 8;
      v42[7] = v44;
      v42 += 8;
    } while (v37 != v38);
    goto LABEL_27;
  }
  v11 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)*v5 + 16LL))(
      *v5, 0x10000, 32);
  v12 = Crc32List_1163b0();
  GameRoutine_118ff0(v12);
  v13 = FileManager_10e2c0();
  if (v13 >= 1) {
    v14 = 0;
    v15 = (unsigned int)v13;
    do {
      if (strstr(v11 + (v14 << 8), "data_sndDisposEnv") == 0 &&
          strstr(v11 + (v14 << 8), "data_sndDisposEnvBgm") == 0 &&
          strstr(v11 + (v14 << 8), "data_sndDisposMove") == 0 &&
          strstr(v11 + (v14 << 8), "data_sndDisposWind") == 0 &&
          strstr(v11 + (v14 << 8), "data_sndDispos") != 0) {
        v125 = v3;
        GameRoutine_a2af20((__int64)&v129_.v129, 256, "%s/%s", v3,
                           (const char*)(v11 + (v14 << 8)));
        v66 = (_BYTE*)strstr(&v129_.v129, ".zst");
        if (v66 != nullptr) {
          *v66 = 0;
        }
        v67 = (__int64*)*v7;
        v68 = Crc32List_1163b0();
        v69 = GameRoutine_118ff0(v68);
        FileManager_10e040((void*)((__int64)&v126_.v126), v69,
                           (__int64)&v129_.v129, 0x40u);
        Data_edfe0(v67, (__int64)&v126_.v126);
        v70 = snd_fnd_WeakHandle_get(*(_QWORD*)(*v7 + 8) - 16LL);
        (*(void (**)(__int64))(*(_QWORD*)v70 + 48LL))(v70);
        v71 = GameRoutine_ed4a0(*(_QWORD*)(*v7 + 8) - 16LL);
        v72 = (*(__int64 (**)(__int64, const char*))(*(_QWORD*)v71 + 120LL))(
            v71, "snd::data::s_disposDataList");
        if (v72 != 0) {
          v73 = v72;
          if (*(int*)(v72 + 8) >= 1) {
            v74 = 0;
            while (1) {
              v76 = (_QWORD*)*GameData_2134190[0];
              v77 = ((unsigned int)(*(_DWORD*)(*v7 + 8) - *(_DWORD*)*v7) >> 4) -
                    1;
              v79 = *(_BYTE**)(*GameData_2134190[0] + 8);
              v78 = *(_QWORD*)(*GameData_2134190[0] + 16);
              if ((unsigned __int64)v79 < v78) {
                *v79 = v77;
                v80 = (__int64)(v79 + 1);
                goto LABEL_89;
              }
              v81 = &v79[-*v76];
              v82 = (unsigned __int64)(v81 + 1);
              if ((__int64)(v81 + 1) < 0) {
                goto LABEL_125;
              }
              v83 = v78 - *v76;
              if (2 * v83 > v82) {
                v82 = 2 * v83;
              }
              v84 = v83 >= 0x3FFFFFFFFFFFFFFFLL ? 0x7FFFFFFFFFFFFFFFLL : v82;
              v85 = v84 != 0 ? (*(__int64 (**)(_QWORD, __int64, __int64))(
                                   **(_QWORD**)snd_g_memory_ptr[0] + 16LL))(
                                   *snd_g_memory_ptr[0], v84, 32)
                             : 0LL;
              v86 = &v81[v85];
              *v86 = v77;
              v80 = (__int64)&v81[v85 + 1];
              v87 = (char*)*v76;
              v88 = (char*)v76[1];
              v89 = *v76 - (_QWORD)v88;
              v90 = &v86[v89];
              if ((char*)*v76 != v88) {
                break;
              }
            LABEL_86:
              *v76 = v90;
              v76[1] = v80;
              v76[2] = v85 + v84;
              if (v87 != nullptr) {
                (*(void (**)(_QWORD))(**(_QWORD**)snd_g_memory_ptr[0] + 24LL))(
                    *snd_g_memory_ptr[0]);
              }
              v2 = snd_data_s_fieldDataList_ptr[0];
            LABEL_89:
              v76[1] = v80;
              v95 = (__int64**)*v2;
              v96 = *(_QWORD*)v73 + 224 * v74;
              v98 = *(__int64**)(*v2 + 8);
              v97 = *(_QWORD*)(*v2 + 16);
              if ((unsigned __int64)v98 < v97) {
                *v98 = v96;
                v75 = (__int64)(v98 + 1);
              }
              else {
                v99 = (char*)v98 - (char*)*v95;
                v100 = (v99 >> 3) + 1;
                if (v100 >> 61 != 0) {
                  goto LABEL_126;
                }
                v101 = v97 - (_QWORD)*v95;
                v102 = v101 >> 2;
                if (v101 >> 2 <= v100) {
                  v102 = (v99 >> 3) + 1;
                }
                if ((unsigned __int64)v101 >= 0x7FFFFFFFFFFFFFF8LL) {
                  v103 = 0x1FFFFFFFFFFFFFFFLL;
                }
                else {
                  v103 = v102;
                }
                v104 = (*(__int64 (**)(_QWORD, __int64, __int64))(
                    **(_QWORD**)snd_g_memory_ptr[0] + 16LL))(
                    *snd_g_memory_ptr[0], 8 * v103, 32);
                v105 = (__int64*)(v104 + v99);
                *v105 = v96;
                v75 = v104 + v99 + 8;
                v106 = *v95;
                v107 = v95[1];
                v108 = (__int64*)((char*)v105 + ((char*)*v95 - (char*)v107));
                if (v107 != *v95) {
                  v109 = v108;
                  do {
                    v110 = *v106++;
                    *v109++ = v110;
                  } while (v106 != v107);
                  v106 = *v95;
                }
                *v95 = v108;
                v95[1] = (__int64*)v75;
                v95[2] = (__int64*)(v104 + 8 * v103);
                if (v106 != nullptr) {
                  (*(void (**)(_QWORD))(**(_QWORD**)snd_g_memory_ptr[0] +
                                        24LL))(*snd_g_memory_ptr[0]);
                }
                v2 = snd_data_s_fieldDataList_ptr[0];
              }
              v95[1] = (__int64*)v75;
              ++v74;
              v7 = GameData_2134180[0];
              if (v74 >= *(int*)(v73 + 8)) {
                goto LABEL_105;
              }
            }
            v91 = ((int)v88 - (int)v87) & 7LL;
            if (v91 != 0) {
              v92 = v90;
              do {
                v93 = *v87++;
                --v91;
                *v92++ = v93;
              } while (v91 != 0);
              if (v89 <= 0xFFFFFFFFFFFFFFF8LL) {
                do {
                LABEL_84:
                  *v92 = *v87;
                  v92[1] = v87[1];
                  v92[2] = v87[2];
                  v92[3] = v87[3];
                  v92[4] = v87[4];
                  v92[5] = v87[5];
                  v92[6] = v87[6];
                  v94 = v87[7];
                  v87 += 8;
                  v92[7] = v94;
                  v92 += 8;
                } while (v87 != v88);
              }
            }
            else {
              v92 = v90;
              if (v89 <= 0xFFFFFFFFFFFFFFF8LL) {
                goto LABEL_84;
              }
            }
            v87 = (char*)*v76;
            goto LABEL_86;
          }
        }
      LABEL_105:
        v111 = strstr(v11 + (v14 << 8), "data_sndDispos");
        if (v111 != 0) {
          v112 = *(unsigned __int8*)(v111 + 14);
          v5 = snd_g_memory_ptr[0];
          v113 = (__int64**)GameData_2134188[0];
          if (v112 == 46) {
            v114 = &v126_.v126;
          }
          else {
            v119 = (unsigned __int8*)(v111 + 15);
            v114 = &v126_.v126;
            do {
              *(_BYTE*)v114 = v112;
              v114 = (__int64*)((char*)v114 + 1);
              v120 = *v119++;
              LOBYTE(v112) = v120;
            } while (v120 != 46);
          }
          v121 = *v113;
          *(_BYTE*)v114 = 0;
          v3 = v125;
          v122 = (__int64*)v121[1];
          if ((unsigned __int64)v122 >= v121[2]) {
            v65 = snd_data_ee440(v121, (char*)&v126_.v126);
          }
          else {
            GameRoutine_190020(&v132_.v132, (char*)&v126_.v126);
            if ((v132_.v132 & 1) != 0) {
              GameRoutine_1905a40(v122, v132_.v134, v132_.v133);
              if ((v132_.v132 & 1) != 0) {
                (*(void (**)(__int64, __int64))(*(_QWORD*)*v5 + 24LL))(
                    *v5, v132_.v134);
              }
              v65 = v122 + 3;
            }
            else {
              v123 = v132_.v132;
              v124 = v132_.v134;
              v65 = v122 + 3;
              v122[1] = v132_.v133;
              v122[2] = v124;
              *v122 = v123;
            }
          }
          v121[1] = (__int64)v65;
        }
        else {
          v115 = *GameData_2134188[0];
          v116 = *(__int64**)(*GameData_2134188[0] + 8);
          v5 = snd_g_memory_ptr[0];
          if ((unsigned __int64)v116 >= *(_QWORD*)(*GameData_2134188[0] + 16)) {
            v3 = v125;
            *(_QWORD*)(v115 + 8) = snd_data_ee200(
                *(__int64**)GameData_2134188[0], &GameData_1a9f09e);
          }
          else {
            GameRoutine_190020(&v126_.v126, &GameData_1a9f09e);
            v3 = v125;
            if ((v126_.v126 & 1) != 0) {
              GameRoutine_1905a40(v116, v126_.v128, v126_.v127);
              if ((v126_.v126 & 1) != 0) {
                (*(void (**)(__int64, __int64))(*(_QWORD*)*v5 + 24LL))(
                    *v5, v126_.v128);
              }
            }
            else {
              v117 = v126_.v126;
              v118 = v126_.v128;
              v116[1] = v126_.v127;
              v116[2] = v118;
              *v116 = v117;
            }
            *(_QWORD*)(v115 + 8) = v116 + 3;
          }
        }
      }
      ++v14;
    } while (v14 != v15);
  }
  return (*(__int64 (**)(__int64, __int64))(*(_QWORD*)*v5 + 24LL))(*v5, v11);
}

__int64 snd_data_ef600(__int64 result, char a2)
{
  __int64* v2;
  const char* v3;
  __int64* v5;
  _QWORD* v6;
  __int64* v7;
  _QWORD* v8;
  _QWORD* v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64** v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64* v27;
  __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64* v34;
  __int64 v35;
  __int64* v36;
  __int64* v37;
  _QWORD* v38;
  _QWORD* v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64** v46;
  __int64 v47;
  unsigned __int64 v48;
  __int64* v49;
  __int64 v50;
  unsigned __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64* v56;
  __int64* v57;
  __int64* v58;
  _QWORD* v59;
  _QWORD* v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64** v66;
  __int64 v67;
  unsigned __int64 v68;
  __int64* v69;
  __int64 v70;
  unsigned __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64* v75;
  __int64* v76;
  __int64* v77;
  _QWORD* v78;
  _QWORD* v79;
  __int64 v80;
  _BYTE* v81;
  __int64* v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 i;
  __int64 v90;
  __int64** v91;
  __int64 v92;
  unsigned __int64 v93;
  __int64* v94;
  __int64 v95;
  unsigned __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  __int64* v101;
  __int64* v102;
  __int64* v103;
  _QWORD* v104;
  _QWORD* v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64 j;
  __int64 v111;
  __int64** v112;
  __int64 v113;
  unsigned __int64 v114;
  __int64* v115;
  __int64 v116;
  unsigned __int64 v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  __int64 v121;
  __int64* v122;
  __int64* v123;
  __int64* v124;
  _QWORD* v125;
  _QWORD* v126;
  __int64 v127;
  __int64 v128;
  __int64 v129;
  __int64 v130;
  __int64 k;
  __int64 v132;
  __int64** v133;
  __int64 v134;
  unsigned __int64 v135;
  __int64* v136;
  __int64 v137;
  unsigned __int64 v138;
  __int64 v139;
  __int64 v140;
  __int64 v141;
  __int64 v142;
  __int64* v143;
  __int64* v144;
  __int64* v145;
  _QWORD* v146;
  _QWORD* v147;
  __int64 v148;
  const char* v149;
  _BYTE v150[16];
  _BYTE v151[264];

  v2 = snd_data_s_groupDataList_ptr[0];
  if (*snd_data_s_groupDataList_ptr[0] == 0) {
    v3 = (const char*)result;
    v5 = snd_g_memory_ptr[0];
    v6 = (_QWORD*)(*(__int64 (**)(_QWORD, __int64, __int64))(
        **(_QWORD**)snd_g_memory_ptr[0] + 16LL))(*snd_g_memory_ptr[0], 24, 32);
    *v6 = 0;
    v6[1] = 0;
    v6[2] = 0;
    v7 = GameData_21341d0[0];
    *GameData_21341d0[0] = (__int64)v6;
    v8 = (_QWORD*)(*(__int64 (**)(__int64, __int64, __int64))(
        *(_QWORD*)*v5 + 16LL))(*v5, 24, 32);
    *v8 = 0;
    v8[1] = 0;
    v8[2] = 0;
    *v2 = (__int64)v8;
    v9 = (_QWORD*)(*(__int64 (**)(__int64, __int64, __int64))(
        *(_QWORD*)*v5 + 16LL))(*v5, 24, 32);
    *v9 = 0;
    v9[1] = 0;
    v9[2] = 0;
    *snd_data_s_userGroupDataList_ptr[0] = (__int64)v9;
    v10 = (_QWORD*)(*(__int64 (**)(__int64, __int64, __int64))(
        *(_QWORD*)*v5 + 16LL))(*v5, 24, 32);
    *v10 = 0;
    v10[1] = 0;
    v10[2] = 0;
    *snd_data_s_addSoundArcDataList_ptr[0] = (__int64)v10;
    if ((a2 & 1) != 0) {
      v11 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)*v5 + 16LL))(
          *v5, 0x10000, 32);
      v12 = Crc32List_1163b0();
      GameRoutine_118ff0(v12);
      v13 = FileManager_10e2c0();
      if (v13 >= 1) {
        v14 = 0;
        v15 = (unsigned int)v13;
        do {
          if (strstr(v11 + (v14 << 8), "data_sndDisposEnv") == 0 &&
              strstr(v11 + (v14 << 8), "data_sndDisposEnvBgm") == 0 &&
              strstr(v11 + (v14 << 8), "data_sndDisposMove") == 0 &&
              strstr(v11 + (v14 << 8), "data_sndDisposWind") == 0 &&
              strstr(v11 + (v14 << 8), "data_sndDispos") != 0) {
            v149 = v3;
            GameRoutine_a2af20((__int64)v151, 256, "%s/%s", v3,
                               (const char*)(v11 + (v14 << 8)));
            v81 = (_BYTE*)strstr(v151, ".zst");
            if (v81 != nullptr) {
              *v81 = 0;
            }
            v82 = (__int64*)*v7;
            v83 = Crc32List_1163b0();
            v84 = GameRoutine_118ff0(v83);
            FileManager_10e040((void*)((__int64)v150), v84, (__int64)v151,
                               0x40u);
            Data_edfe0(v82, (__int64)v150);
            v85 = snd_fnd_WeakHandle_get(*(_QWORD*)(*v7 + 8) - 16LL);
            (*(void (**)(__int64))(*(_QWORD*)v85 + 48LL))(v85);
            v86 = GameRoutine_ed4a0(*(_QWORD*)(*v7 + 8) - 16LL);
            v87 = (*(__int64 (**)(__int64, const char*))(
                *(_QWORD*)v86 + 120LL))(v86, "snd::data::s_groupDataList");
            if (v87 != 0) {
              v88 = v87;
              if (*(int*)(v87 + 8) >= 1) {
                for (i = 0; i < *(int*)(v88 + 8); ++i) {
                  v91 = (__int64**)*snd_data_s_groupDataList_ptr[0];
                  v92 = *(_QWORD*)v88 + 24 * i;
                  v94 = *(__int64**)(*snd_data_s_groupDataList_ptr[0] + 8);
                  v93 = *(_QWORD*)(*snd_data_s_groupDataList_ptr[0] + 16);
                  if ((unsigned __int64)v94 < v93) {
                    *v94 = v92;
                    v90 = (__int64)(v94 + 1);
                  }
                  else {
                    v95 = (char*)v94 - (char*)*v91;
                    v96 = (v95 >> 3) + 1;
                    if (v96 >> 61 != 0) {
                      goto LABEL_124;
                    }
                    v97 = v93 - (_QWORD)*v91;
                    v98 = v97 >> 2;
                    if (v97 >> 2 <= v96) {
                      v98 = (v95 >> 3) + 1;
                    }
                    if ((unsigned __int64)v97 >= 0x7FFFFFFFFFFFFFF8LL) {
                      v99 = 0x1FFFFFFFFFFFFFFFLL;
                    }
                    else {
                      v99 = v98;
                    }
                    v100 = (*(__int64 (**)(__int64, __int64, __int64))(
                        *(_QWORD*)*v5 + 16LL))(*v5, 8 * v99, 32);
                    v101 = (__int64*)(v100 + v95);
                    *v101 = v92;
                    v90 = v100 + v95 + 8;
                    v102 = *v91;
                    v103 = v91[1];
                    v104 =
                        (__int64*)((char*)v101 + ((char*)*v91 - (char*)v103));
                    if (v103 != *v91) {
                      v105 = v104;
                      do {
                        v106 = *v102++;
                        *v105++ = v106;
                      } while (v102 != v103);
                      v102 = *v91;
                    }
                    *v91 = v104;
                    v91[1] = (__int64*)v90;
                    v91[2] = (__int64*)(v100 + 8 * v99);
                    if (v102 != nullptr) {
                      (*(void (**)(__int64))(*(_QWORD*)*v5 + 24LL))(*v5);
                    }
                  }
                  v91[1] = (__int64*)v90;
                }
              }
            }
            v107 =
                GameRoutine_ed4a0(*(_QWORD*)(*GameData_21341d0[0] + 8) - 16LL);
            v108 =
                (*(__int64 (**)(__int64, const char*))(*(_QWORD*)v107 + 120LL))(
                    v107, "snd::data::s_userGroupDataList");
            if (v108 != 0) {
              v109 = v108;
              if (*(int*)(v108 + 8) >= 1) {
                for (j = 0; j < *(int*)(v109 + 8); ++j) {
                  v112 = (__int64**)*snd_data_s_userGroupDataList_ptr[0];
                  v113 = *(_QWORD*)v109 + 24 * j;
                  v115 = *(__int64**)(*snd_data_s_userGroupDataList_ptr[0] + 8);
                  v114 = *(_QWORD*)(*snd_data_s_userGroupDataList_ptr[0] + 16);
                  if ((unsigned __int64)v115 < v114) {
                    *v115 = v113;
                    v111 = (__int64)(v115 + 1);
                  }
                  else {
                    v116 = (char*)v115 - (char*)*v112;
                    v117 = (v116 >> 3) + 1;
                    if (v117 >> 61 != 0) {
                      goto LABEL_125;
                    }
                    v118 = v114 - (_QWORD)*v112;
                    v119 = v118 >> 2;
                    if (v118 >> 2 <= v117) {
                      v119 = (v116 >> 3) + 1;
                    }
                    if ((unsigned __int64)v118 >= 0x7FFFFFFFFFFFFFF8LL) {
                      v120 = 0x1FFFFFFFFFFFFFFFLL;
                    }
                    else {
                      v120 = v119;
                    }
                    v121 = (*(__int64 (**)(__int64, __int64, __int64))(
                        *(_QWORD*)*v5 + 16LL))(*v5, 8 * v120, 32);
                    v122 = (__int64*)(v121 + v116);
                    *v122 = v113;
                    v111 = v121 + v116 + 8;
                    v123 = *v112;
                    v124 = v112[1];
                    v125 =
                        (__int64*)((char*)v122 + ((char*)*v112 - (char*)v124));
                    if (v124 != *v112) {
                      v126 = v125;
                      do {
                        v127 = *v123++;
                        *v126++ = v127;
                      } while (v123 != v124);
                      v123 = *v112;
                    }
                    *v112 = v125;
                    v112[1] = (__int64*)v111;
                    v112[2] = (__int64*)(v121 + 8 * v120);
                    if (v123 != nullptr) {
                      (*(void (**)(__int64))(*(_QWORD*)*v5 + 24LL))(*v5);
                    }
                  }
                  v112[1] = (__int64*)v111;
                }
              }
            }
            v128 =
                GameRoutine_ed4a0(*(_QWORD*)(*GameData_21341d0[0] + 8) - 16LL);
            v129 =
                (*(__int64 (**)(__int64, const char*))(*(_QWORD*)v128 + 120LL))(
                    v128, "snd::data::s_addSoundArcDataList");
            if (v129 != 0) {
              v130 = v129;
              if (*(int*)(v129 + 8) >= 1) {
                for (k = 0; k < *(int*)(v130 + 8); ++k) {
                  v133 = (__int64**)*snd_data_s_addSoundArcDataList_ptr[0];
                  v134 = *(_QWORD*)v130 + 24 * k;
                  v136 =
                      *(__int64**)(*snd_data_s_addSoundArcDataList_ptr[0] + 8);
                  v135 =
                      *(_QWORD*)(*snd_data_s_addSoundArcDataList_ptr[0] + 16);
                  if ((unsigned __int64)v136 < v135) {
                    *v136 = v134;
                    v132 = (__int64)(v136 + 1);
                  }
                  else {
                    v137 = (char*)v136 - (char*)*v133;
                    v138 = (v137 >> 3) + 1;
                    if (v138 >> 61 != 0) {
                      goto LABEL_126;
                    }
                    v139 = v135 - (_QWORD)*v133;
                    v140 = v139 >> 2;
                    if (v139 >> 2 <= v138) {
                      v140 = (v137 >> 3) + 1;
                    }
                    if ((unsigned __int64)v139 >= 0x7FFFFFFFFFFFFFF8LL) {
                      v141 = 0x1FFFFFFFFFFFFFFFLL;
                    }
                    else {
                      v141 = v140;
                    }
                    v142 = (*(__int64 (**)(__int64, __int64, __int64))(
                        *(_QWORD*)*v5 + 16LL))(*v5, 8 * v141, 32);
                    v143 = (__int64*)(v142 + v137);
                    *v143 = v134;
                    v132 = v142 + v137 + 8;
                    v144 = *v133;
                    v145 = v133[1];
                    v146 =
                        (__int64*)((char*)v143 + ((char*)*v133 - (char*)v145));
                    if (v145 != *v133) {
                      v147 = v146;
                      do {
                        v148 = *v144++;
                        *v147++ = v148;
                      } while (v144 != v145);
                      v144 = *v133;
                    }
                    *v133 = v146;
                    v133[1] = (__int64*)v132;
                    v133[2] = (__int64*)(v142 + 8 * v141);
                    if (v144 != nullptr) {
                      (*(void (**)(__int64))(*(_QWORD*)*v5 + 24LL))(*v5);
                    }
                  }
                  v133[1] = (__int64*)v132;
                }
              }
            }
            v7 = GameData_21341d0[0];
            v3 = v149;
          }
          ++v14;
        } while (v14 != v15);
      }
      return (*(__int64 (**)(__int64, __int64))(*(_QWORD*)*v5 + 24LL))(*v5,
                                                                       v11);
    }
    else {
      v16 = (__int64*)*v7;
      v17 = Crc32List_1163b0();
      v18 = GameRoutine_118ff0(v17);
      FileManager_10e040((void*)((__int64)v151), v18, (__int64)v3, 0x40u);
      Data_edfe0(v16, (__int64)v151);
      v19 = snd_fnd_WeakHandle_get(*(_QWORD*)(*v7 + 8) - 16LL);
      (*(void (**)(__int64))(*(_QWORD*)v19 + 48LL))(v19);
      v20 = GameRoutine_ed4a0(*(_QWORD*)(*v7 + 8) - 16LL);
      v21 = (*(__int64 (**)(__int64, const char*))(*(_QWORD*)v20 + 120LL))(
          v20, "snd::data::s_groupDataList");
      if (v21 != 0) {
        v22 = v21;
        if (*(int*)(v21 + 8) >= 1) {
          v23 = 0;
          do {
            while (1) {
              v24 = (__int64**)*v2;
              v25 = *(_QWORD*)v22 + 24 * v23;
              v27 = *(__int64**)(*v2 + 8);
              v26 = *(_QWORD*)(*v2 + 16);
              if ((unsigned __int64)v27 >= v26) {
                break;
              }
              *v27 = v25;
              v24[1] = v27 + 1;
              if (++v23 >= *(int*)(v22 + 8)) {
                goto LABEL_23;
              }
            }
            v28 = (char*)v27 - (char*)*v24;
            v29 = (v28 >> 3) + 1;
            if (v29 >> 61 != 0) {
            LABEL_124:
              GameRoutine_f0150();
            }
            v30 = v26 - (_QWORD)*v24;
            v31 = v30 >> 2;
            if (v30 >> 2 <= v29) {
              v31 = (v28 >> 3) + 1;
            }
            if ((unsigned __int64)v30 >= 0x7FFFFFFFFFFFFFF8LL) {
              v32 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v32 = v31;
            }
            v33 = (*(__int64 (**)(__int64, __int64, __int64))(
                *(_QWORD*)*v5 + 16LL))(*v5, 8 * v32, 32);
            v34 = (__int64*)(v33 + v28);
            *v34 = v25;
            v35 = v33 + v28 + 8;
            v36 = *v24;
            v37 = v24[1];
            v38 = (__int64*)((char*)v34 + ((char*)*v24 - (char*)v37));
            if (v37 != *v24) {
              v39 = v38;
              do {
                v40 = *v36++;
                *v39++ = v40;
              } while (v36 != v37);
              v36 = *v24;
            }
            *v24 = v38;
            v24[1] = (__int64*)v35;
            v24[2] = (__int64*)(v33 + 8 * v32);
            if (v36 != nullptr) {
              (*(void (**)(__int64))(*(_QWORD*)*v5 + 24LL))(*v5);
            }
            v2 = snd_data_s_groupDataList_ptr[0];
            v24[1] = (__int64*)v35;
            ++v23;
          } while (v23 < *(int*)(v22 + 8));
        }
      }
    LABEL_23:
      v41 = GameRoutine_ed4a0(*(_QWORD*)(*GameData_21341d0[0] + 8) - 16LL);
      v42 = (*(__int64 (**)(__int64, const char*))(*(_QWORD*)v41 + 120LL))(
          v41, "snd::data::s_userGroupDataList");
      if (v42 != 0) {
        v43 = v42;
        if (*(int*)(v42 + 8) >= 1) {
          v44 = 0;
          do {
            v46 = (__int64**)*snd_data_s_userGroupDataList_ptr[0];
            v47 = *(_QWORD*)v43 + 24 * v44;
            v49 = *(__int64**)(*snd_data_s_userGroupDataList_ptr[0] + 8);
            v48 = *(_QWORD*)(*snd_data_s_userGroupDataList_ptr[0] + 16);
            if ((unsigned __int64)v49 < v48) {
              *v49 = v47;
              v45 = (__int64)(v49 + 1);
            }
            else {
              v50 = (char*)v49 - (char*)*v46;
              v51 = (v50 >> 3) + 1;
              if (v51 >> 61 != 0) {
              LABEL_125:
                GameRoutine_f0170();
              }
              v52 = v48 - (_QWORD)*v46;
              v53 = v52 >> 2;
              if (v52 >> 2 <= v51) {
                v53 = (v50 >> 3) + 1;
              }
              if ((unsigned __int64)v52 >= 0x7FFFFFFFFFFFFFF8LL) {
                v54 = 0x1FFFFFFFFFFFFFFFLL;
              }
              else {
                v54 = v53;
              }
              v55 = (*(__int64 (**)(__int64, __int64, __int64))(
                  *(_QWORD*)*v5 + 16LL))(*v5, 8 * v54, 32);
              v56 = (__int64*)(v55 + v50);
              *v56 = v47;
              v45 = v55 + v50 + 8;
              v57 = *v46;
              v58 = v46[1];
              v59 = (__int64*)((char*)v56 + ((char*)*v46 - (char*)v58));
              if (v58 != *v46) {
                v60 = v59;
                do {
                  v61 = *v57++;
                  *v60++ = v61;
                } while (v57 != v58);
                v57 = *v46;
              }
              *v46 = v59;
              v46[1] = (__int64*)v45;
              v46[2] = (__int64*)(v55 + 8 * v54);
              if (v57 != nullptr) {
                (*(void (**)(__int64))(*(_QWORD*)*v5 + 24LL))(*v5);
              }
            }
            v46[1] = (__int64*)v45;
            ++v44;
          } while (v44 < *(int*)(v43 + 8));
        }
      }
      v62 = GameRoutine_ed4a0(*(_QWORD*)(*GameData_21341d0[0] + 8) - 16LL);
      result = (*(__int64 (**)(__int64, const char*))(*(_QWORD*)v62 + 120LL))(
          v62, "snd::data::s_addSoundArcDataList");
      if (result != 0) {
        v63 = result;
        if (*(int*)(result + 8) >= 1) {
          v64 = 0;
          do {
            v66 = (__int64**)*snd_data_s_addSoundArcDataList_ptr[0];
            v67 = *(_QWORD*)v63 + 24 * v64;
            v69 = *(__int64**)(*snd_data_s_addSoundArcDataList_ptr[0] + 8);
            v68 = *(_QWORD*)(*snd_data_s_addSoundArcDataList_ptr[0] + 16);
            if ((unsigned __int64)v69 < v68) {
              *v69 = v67;
              v65 = (__int64)(v69 + 1);
            }
            else {
              v70 = (char*)v69 - (char*)*v66;
              v71 = (v70 >> 3) + 1;
              if (v71 >> 61 != 0) {
              LABEL_126:
                GameRoutine_f0190();
              }
              v72 = v68 - (_QWORD)*v66;
              v73 = v72 >> 2;
              if (v72 >> 2 <= v71) {
                v73 = (v70 >> 3) + 1;
              }
              if ((unsigned __int64)v72 >= 0x7FFFFFFFFFFFFFF8LL) {
                v74 = 0x1FFFFFFFFFFFFFFFLL;
              }
              else {
                v74 = v73;
              }
              result = (*(__int64 (**)(__int64, __int64, __int64))(
                  *(_QWORD*)*v5 + 16LL))(*v5, 8 * v74, 32);
              v75 = (__int64*)(result + v70);
              *v75 = v67;
              v65 = result + v70 + 8;
              v76 = *v66;
              v77 = v66[1];
              v78 = (__int64*)((char*)v75 + ((char*)*v66 - (char*)v77));
              if (v77 != *v66) {
                v79 = v78;
                do {
                  v80 = *v76++;
                  *v79++ = v80;
                } while (v76 != v77);
                v76 = *v66;
              }
              *v66 = v78;
              v66[1] = (__int64*)v65;
              v66[2] = (__int64*)(result + 8 * v74);
              if (v76 != nullptr) {
                result = (*(__int64 (**)(__int64))(*(_QWORD*)*v5 + 24LL))(*v5);
              }
            }
            v66[1] = (__int64*)v65;
            ++v64;
          } while (v64 < *(int*)(v63 + 8));
        }
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
