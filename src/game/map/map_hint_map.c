#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 DisposFile_6bc220(_QWORD);
__int64 GameRoutine_1a042e0(void);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
extern __int64 (*GameData_212b2d0[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 MapHintMap_Unknown7(_QWORD* a1, __int64* a2);
_QWORD* game_map_MapBaseMap_CreatePersonSkillDataList(__int64, __int64, __int64,
                                                      __int64*);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__attribute__((swiftcall)) void MapSystemMap_1a01880(PSEUDO_X8, _QWORD, _QWORD,
                                                     _QWORD, _QWORD, _QWORD);
__int64* game_map_1a01b50(float, float, __int64, __int64**, const char*, _BYTE*,
                          __int64);
__int64 GameHr_1a01a00(float, float, float, __int64, __int64, const char*);
__int64 GameRoutine_1841300(__int64, unsigned __int8);
__int64 GameRoutine_6b9520(_QWORD*);
__int64 LayoutAccessor_155e830(__int64 result, char);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_text_String_CopyTerminated_alt1(
    __int64*, __int64,
    unsigned __int64) __asm__("fw_text_String_CopyTerminated");
__int64 game_GrowthListFile_GetJob(__int64*, __int64, char);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
__int64
ui_LayoutAccessor_FindPane_alt1(__int64*,
                                __int64) __asm__("ui_LayoutAccessor_FindPane");
__int64 ui_LayoutAccessor_SetScale(__int64 result, _QWORD*);
bool game_HasSkill(_QWORD*, _DWORD*);
extern _QWORD game_g_shared_system_skills_ptr;
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64 GameData_21c9988;
extern __int64 game_GameModeData_instance_;
float ui_LayoutAccessor_SetTranslate(__int64*, __int64);
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void game_map_MapHintMap_BuildUnits_lambda0_Invoke(__int64 a1, __int64** a2);

__int64 MapHintMap_Unknown7(_QWORD* a1, __int64* a2)
{
  __int64 v3;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  _QWORD* v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  char* v19;
  char* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  _QWORD* v26;
  __int64* v27;
  __int64 v28;
  __int64 v29;
  char* v30;
  char* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  _QWORD* v37;
  __int64* v38;
  __int64 v39;
  __int64 v40;
  char* v41;
  char* v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  unsigned __int64 v46;
  __int64 v47;
  _QWORD* v48;
  __int64* v49;
  __int64 v50;
  __int64 v51;
  char* v52;
  char* v53;
  __int64 v54;
  __int64 v55;
  __int64 result;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  char* v60;
  __int64 v61;
  unsigned __int64 v62;
  unsigned __int64 v63;
  unsigned __int64 v64;
  __int64 v65;
  __int64 v66;
  unsigned __int64 v67;

  v3 = a2[1];
  v65 = 0;
  v66 = 0;
  if (v3 != 0) {
    v66 = std___1___shared_weak_count_lock(v3);
    if (v66 != 0) {
      v65 = *a2;
    }
  }
  v67 = 0;
  v63 = 0;
  v64 = 0;
  v61 = 0;
  v62 = 0;
  v5 = fw_memory_g_heap_manager_ptr;
  v6 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 72, 16, 0);
  *v6 = GameData_212b2d0;
  v6[1] = a1;
  v6[2] = &v64;
  v6[3] = &v65;
  v6[4] = &v63;
  v6[5] = &v67;
  v6[6] = &v62;
  v6[7] = a2;
  v6[8] = &v61;
  GameRoutine_1a042e0();
  v7 = DisposFile_6bc220("Enemy");
  (*(void (**)(_QWORD*, __int64))(*v6 + 48LL))(v6, v7);
  v8 = DisposFile_6bc220("Third");
  (*(void (**)(_QWORD*, __int64))(*v6 + 48LL))(v6, v8);
  v9 = DisposFile_6bc220("Ally");
  (*(void (**)(_QWORD*, __int64))(*v6 + 48LL))(v6, v9);
  v10 = DisposFile_6bc220("Enemy1");
  (*(void (**)(_QWORD*, __int64))(*v6 + 48LL))(v6, v10);
  v11 = DisposFile_6bc220("Enemy2");
  (*(void (**)(_QWORD*, __int64))(*v6 + 48LL))(v6, v11);
  v12 = a1[7];
  v13 = v67;
  if (v67 < 0xCCCCCCCCCCCCCCCDLL * ((a1[8] - v12) >> 4)) {
    v14 = 80 * v67;
    do {
      v15 = (_QWORD*)(v12 + v14);
      v16 = v15 + 1;
      if ((v15[1] & 1) != 0) {
        fw_text_String_CopyTerminated(&v58, v15[3], v15[2]);
      }
      else {
        v17 = *v16;
        v18 = v16[1];
        v19 = (char*)v16[2];
        v59 = v18;
        v60 = v19;
        v58 = v17;
      }
      if ((v58 & 1) != 0) {
        v20 = v60;
      }
      else {
        v20 = (char*)&v58 + 1;
      }
      v21 = ui_LayoutAccessor_FindPane(v65, v20);
      if (v21 != 0) {
        *(_BYTE*)(v21 + 88) &= ~1u;
      }
      if ((v58 & 1) != 0 && v60 != nullptr) {
        if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
          v22 = 128;
        }
        else {
          v22 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v22);
      }
      v12 = a1[7];
      ++v13;
      v14 += 80;
    } while (v13 < 0xCCCCCCCCCCCCCCCDLL * ((a1[8] - v12) >> 4));
  }
  v23 = a1[10];
  v24 = v64;
  if (v64 < 0xCCCCCCCCCCCCCCCDLL * ((a1[11] - v23) >> 4)) {
    v25 = 80 * v64;
    do {
      v26 = (_QWORD*)(v23 + v25);
      v27 = v26 + 1;
      if ((v26[1] & 1) != 0) {
        fw_text_String_CopyTerminated(&v58, v26[3], v26[2]);
      }
      else {
        v28 = *v27;
        v29 = v27[1];
        v30 = (char*)v27[2];
        v59 = v29;
        v60 = v30;
        v58 = v28;
      }
      if ((v58 & 1) != 0) {
        v31 = v60;
      }
      else {
        v31 = (char*)&v58 + 1;
      }
      v32 = ui_LayoutAccessor_FindPane(v65, v31);
      if (v32 != 0) {
        *(_BYTE*)(v32 + 88) &= ~1u;
      }
      if ((v58 & 1) != 0 && v60 != nullptr) {
        if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
          v33 = 128;
        }
        else {
          v33 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v33);
      }
      v23 = a1[10];
      ++v24;
      v25 += 80;
    } while (v24 < 0xCCCCCCCCCCCCCCCDLL * ((a1[11] - v23) >> 4));
  }
  v34 = a1[13];
  v35 = v63;
  if (v63 < 0xCCCCCCCCCCCCCCCDLL * ((a1[14] - v34) >> 4)) {
    v36 = 80 * v63;
    do {
      v37 = (_QWORD*)(v34 + v36);
      v38 = v37 + 1;
      if ((v37[1] & 1) != 0) {
        fw_text_String_CopyTerminated(&v58, v37[3], v37[2]);
      }
      else {
        v39 = *v38;
        v40 = v38[1];
        v41 = (char*)v38[2];
        v59 = v40;
        v60 = v41;
        v58 = v39;
      }
      if ((v58 & 1) != 0) {
        v42 = v60;
      }
      else {
        v42 = (char*)&v58 + 1;
      }
      v43 = ui_LayoutAccessor_FindPane(v65, v42);
      if (v43 != 0) {
        *(_BYTE*)(v43 + 88) &= ~1u;
      }
      if ((v58 & 1) != 0 && v60 != nullptr) {
        if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
          v44 = 128;
        }
        else {
          v44 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v44);
      }
      v34 = a1[13];
      ++v35;
      v36 += 80;
    } while (v35 < 0xCCCCCCCCCCCCCCCDLL * ((a1[14] - v34) >> 4));
  }
  v45 = a1[16];
  v46 = v62;
  if (v62 < 0xCCCCCCCCCCCCCCCDLL * ((a1[17] - v45) >> 3)) {
    v47 = 40 * v62;
    do {
      v48 = (_QWORD*)(v45 + v47);
      v49 = v48 + 1;
      if ((v48[1] & 1) != 0) {
        fw_text_String_CopyTerminated(&v58, v48[3], v48[2]);
      }
      else {
        v50 = *v49;
        v51 = v49[1];
        v52 = (char*)v49[2];
        v59 = v51;
        v60 = v52;
        v58 = v50;
      }
      if ((v58 & 1) != 0) {
        v53 = v60;
      }
      else {
        v53 = (char*)&v58 + 1;
      }
      v54 = ui_LayoutAccessor_FindPane(v65, v53);
      if (v54 != 0) {
        *(_BYTE*)(v54 + 88) &= ~1u;
      }
      if ((v58 & 1) != 0 && v60 != nullptr) {
        if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
          v55 = 128;
        }
        else {
          v55 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v55);
      }
      v45 = a1[16];
      ++v46;
      v47 += 40;
    } while (v46 < 0xCCCCCCCCCCCCCCCDLL * ((a1[17] - v45) >> 3));
  }
  result = (*(__int64 (**)(_QWORD*))(*v6 + 40LL))(v6);
  v57 = v66;
  if (v66 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v66 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v57 + 16LL))(v57);
    return std___1___shared_weak_count___release_weak(v57);
  }
  return result;
}

void game_map_MapHintMap_BuildUnits_lambda0_Invoke(__int64 a1, __int64** a2)
{
  __int64* v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v7;
  __int16 v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  _BOOL4 v12;
  unsigned int v13;
  int v14;
  int v15;
  char v16;
  int v17;
  int v18;
  float v19;
  float v20;
  int v21;
  int v22;
  float v23;
  float v24;
  __int64 v25;
  int v26;
  __int64 v27;
  unsigned __int8* v28;
  unsigned int v29;
  __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  int v33;
  int v34;
  unsigned int v35;
  float v36;
  float v37;
  __int64 v38;
  unsigned int v39;
  float v40;
  float v41;
  float v42;
  float v43;
  _QWORD* v44;
  __int64 v45;
  _QWORD* v46;
  __int64* v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  _QWORD* v51;
  __int64 v52;
  _QWORD* v53;
  unsigned __int64* v54;
  unsigned __int64 v55;
  unsigned __int64 v56;
  __int64 v57;
  _QWORD* v58;
  __int64 v59;
  _QWORD* v60;
  __int64* v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  _QWORD* v65;
  __int64 v66;
  _QWORD* v67;
  __int64* v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  _QWORD* v73;
  __int64 v74;
  const char* v75;
  __int64 v76;
  __int64 v77;
  __int64* v78;
  const char* v79;
  _BYTE* v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64* v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  unsigned __int64* v93;
  char v94;
  unsigned __int64 v95;
  unsigned __int64 v96;
  __int64 v97;
  _QWORD* v98;
  __int64 v99;
  const char* v100;
  __int64 v101;
  __int64 v102;
  __int64* v103;
  const char* v104;
  char* v105;
  _QWORD* v106;
  __int64 v107;
  const char* v108;
  __int64 v109;
  __int64 v110;
  __int64* v111;
  const char* v112;
  char* v113;
  _QWORD* v114;
  __int64 v115;
  const char* v116;
  __int64 v117;
  __int64 v118;
  __int64* v119;
  const char* v120;
  char* v121;
  const char* v122;
  __int64 v123;
  __int64* v124;
  __int64 v125;
  __int64 v126;
  __int64 v127;
  int v128;
  char v129;
  int v130;
  __int64 v131;
  int v132;
  __int64 v133;
  unsigned __int64 v134;
  __int64 v135;
  __int64 v136;
  __int64 v137;
  int v138;
  __int64 v139;
  int v140;
  __int64 v141;
  __int64 v142;
  __int64 v143;
  __int64* v144;
  unsigned int v146;
  struct {
    __int64* v147;
    __int64 v148;
  } v147_;
  _QWORD v149[2];
  struct {
    __int64* v150;
    __int64 v151;
  } v150_;
  _QWORD v152[2];
  struct {
    __int64* v153;
    __int64 v154;
  } v153_;
  _QWORD v155[2];
  struct {
    __int64* v156;
    __int64 v157;
  } v156_;
  _QWORD v158[2];
  struct {
    __int64 v159;
    __int64 v160;
    _BYTE* v161;
  } v159_;
  struct {
    unsigned __int64 v162;
    unsigned __int64 v163;
    const char* v164;
  } v162_;

  v2 = *a2;
  v3 = a2[1];
  if (*a2 != v3) {
    v4 = *(_QWORD*)(a1 + 8);
    v144 = a2[1];
    do {
      v6 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ != 0) {
        v6 = *(unsigned __int8*)(game_GameModeData_instance_ + 13);
      }
      v7 = *v2;
      v8 = *(_WORD*)(*v2 + 50);
      if ((v8 & 7) == 0) {
        goto LABEL_5;
      }
      if (v6 == 2) {
        if ((v8 & 4) == 0) {
          goto LABEL_5;
        }
      }
      else if (v6 == 1) {
        if ((v8 & 2) == 0) {
          goto LABEL_5;
        }
      }
      else if (v6 != 0 || (v8 & 1) == 0) {
        goto LABEL_5;
      }
      v146 = *(unsigned __int8*)(v7 + 48);
      if ((unsigned __int8)(v146 - 1) <= 1u &&
          (v9 = *(_QWORD*)(v7 + 40)) != 0) {
        v10 = *(_QWORD**)(v9 + 24);
        v11 = game_g_shared_system_skills_ptr;
        LODWORD(v162_.v162) =
            *(int*)((char*)((int*)0x24LL) + game_g_shared_system_skills_ptr) &
            0xFFF;
        v12 = game_HasSkill(v10, &v162_.v162);
        LODWORD(v162_.v162) =
            *(_DWORD*)((_BYTE*)(*(__int64 (*)[2])0x28LL) + v11) & 0xFFF;
        if (game_HasSkill(v10, &v162_.v162)) {
          v13 = 2;
        }
        else {
          v13 = v12;
        }
      }
      else {
        v13 = 0;
      }
      v14 = *(char*)(v7 + 54);
      v15 = (**(__int64 (***)(__int64))v4)(v4);
      v16 = *(_BYTE*)(v7 + 55);
      v17 = v15;
      v18 = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 8LL))(v4);
      v19 = *(float*)(v4 + 212);
      v20 = *(float*)(v4 + 216);
      v21 = v18;
      v22 = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 24LL))(v4);
      v23 = *(float*)(v4 + 212);
      v24 = *(float*)(v4 + 216);
      v25 = *(_QWORD*)(v7 + 40);
      v26 = v22;
      if (v25 == 0 || *(_WORD*)(v25 + 16) == 0) {
        goto LABEL_48;
      }
      v27 = *(_QWORD*)(v25 + 64);
      if (v27 != 0) {
        goto LABEL_26;
      }
      if (game_GameModeData_instance_ != 0) {
        v29 = *(_DWORD*)(game_GameModeData_instance_ + 68);
        v30 = *(_QWORD*)(game_GameModeData_instance_ + 16);
        if (v30 != 0) {
          v29 += *(char*)(v30 + 128);
        }
        v31 = *(unsigned __int8*)(v25 + 442);
        if (*(_BYTE*)(v25 + 442) != 0) {
        LABEL_31:
          v32 = *(_QWORD*)(v25 + 304);
          if (v32 != 0) {
            goto LABEL_42;
          }
          goto LABEL_44;
        }
      }
      else {
        v29 = 0;
        v31 = *(unsigned __int8*)(v25 + 442);
        if (*(_BYTE*)(v25 + 442) != 0) {
          goto LABEL_31;
        }
      }
      v33 = v29 + *(char*)(v25 + 443);
      if (v33 <= 1) {
        v33 = 1;
      }
      if (v33 >= 99) {
        v33 = 99;
      }
      if (*(_BYTE*)(v25 + 443) != 0) {
        v31 = (unsigned int)v33;
      }
      else {
        v31 = v29;
      }
      v32 = *(_QWORD*)(v25 + 304);
      if (v32 != 0) {
      LABEL_42:
        v162_.v162 = v32;
        v27 = game_GrowthListFile_GetJob((__int64*)&v162_.v162, v31, 6);
        if (v27 != 0) {
          goto LABEL_26;
        }
        v32 = *(_QWORD*)(v25 + 64);
      }
    LABEL_44:
      if (v32 != 0) {
        v27 = v32;
      }
      else {
        v27 = GameData_21c9988;
      }
      if (v27 != 0) {
      LABEL_26:
        v28 = (unsigned __int8*)(v27 + 417);
        goto LABEL_49;
      }
    LABEL_48:
      v28 = (unsigned __int8*)(v7 + 56);
    LABEL_49:
      v3 = v144;
      v34 = v21 + (char)~v16;
      v35 = *v28;
      v36 = -(float)(v20 + (float)(v19 * (float)(v14 - v17)));
      v37 = -(float)(v24 + (float)(v23 * (float)(v34 + v26)));
      if (v35 < 2) {
        v38 = a1;
        v39 = v146;
        v42 = v37;
        v41 = v36;
        if (v13 != 2) {
          goto LABEL_61;
        }
        goto LABEL_54;
      }
      v38 = a1;
      v39 = v146;
      if (v35 == 3) {
        v43 = *(float*)(v4 + 212);
        v41 = v36 + 0x0.0p+0f;
        v42 = v37 + (float)(v43 * 0x1.0000000000000p+1f);
      LABEL_60:
        v36 = v36 - v43;
        v37 = v37 + v43;
        if (v13 != 2) {
          goto LABEL_61;
        }
        goto LABEL_54;
      }
      if (v35 == 2) {
        v40 = *(float*)(v4 + 212);
        v41 = v36 + 0x0.0p+0f;
        v42 = v37 + v40;
        v43 = v40 * 0x1.0000000000000p-1f;
        goto LABEL_60;
      }
      v42 = v37;
      v41 = v36;
      if (v13 != 2) {
      LABEL_61:
        v51 = *(_QWORD**)(v38 + 40);
        v52 = *(_QWORD*)(v4 + 56);
        if (*v51 >= 0xCCCCCCCCCCCCCCCDLL * ((*(_QWORD*)(v4 + 64) - v52) >> 4)) {
          goto LABEL_5;
        }
        v53 = (_QWORD*)(v52 + 80LL * *v51);
        v54 = v53 + 1;
        if ((v53[1] & 1) != 0) {
          fw_text_String_CopyTerminated_alt1((__int64*)&v162_.v162, v53[3],
                                             v53[2]);
          v51 = *(_QWORD**)(v38 + 40);
        }
        else {
          v55 = *v54;
          v56 = v54[1];
          v57 = v54[2];
          v162_.v163 = v56;
          v162_.v164 = (const char*)v57;
          v162_.v162 = v55;
        }
        ++*v51;
        v73 = *(_QWORD**)(v38 + 24);
        v74 = v73[1];
        v149[0] = *v73;
        v149[1] = v74;
        if (v74 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v74 + 16), 1u,
                                    memory_order_relaxed);
        }
        if ((v162_.v162 & 1) != 0) {
          v75 = v162_.v164;
        }
        else {
          v75 = (char*)&v162_.v162 + 1;
        }
        GameHr_1a01a00(v41, v42, *(float*)(v4 + 212) * (float)v35, v4,
                       (__int64)v149, v75);
        if (v74 != 0) {
          std___1___shared_weak_count___release_weak_alt1(v74);
        }
        MapSystemMap_1a01880((void*)(&v159_.v159), v4, v39,
                             (*(_WORD*)(v7 + 50) & 0x20) != 0, v13, v35);
        v76 = *(_QWORD*)(v38 + 24);
        v78 = *(__int64**)v76;
        v77 = *(_QWORD*)(v76 + 8);
        v147_.v147 = v78;
        v147_.v148 = v77;
        if (v77 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v77 + 16), 1u,
                                    memory_order_relaxed);
        }
        if ((v162_.v162 & 1) != 0) {
          v79 = v162_.v164;
        }
        else {
          v79 = (char*)&v162_.v162 + 1;
        }
        if ((v159_.v159 & 1) != 0) {
          v80 = v159_.v161;
        }
        else {
          v80 = (char*)&v159_.v159 + 1;
        }
        game_map_1a01b50(*(float*)(v4 + 212), (float)v35, v4, &v147_.v147, v79,
                         v80, 0);
        v81 = v147_.v148;
        if (v147_.v148 != 0) {
        LABEL_94:
          std___1___shared_weak_count___release_weak_alt1(v81);
          goto LABEL_95;
        }
        goto LABEL_95;
      }
    LABEL_54:
      MapSystemMap_1a01880((void*)(&v162_.v162), v4, v39, 0, 2, *v28);
      if (v39 == 2) {
        v58 = *(_QWORD**)(v38 + 32);
        v59 = *(_QWORD*)(v4 + 104);
        if (*v58 >=
            0xCCCCCCCCCCCCCCCDLL * ((*(_QWORD*)(v4 + 112) - v59) >> 4)) {
          goto LABEL_72;
        }
        v60 = (_QWORD*)(v59 + 80LL * *v58);
        v61 = v60 + 1;
        if ((v60[1] & 1) != 0) {
          fw_text_String_CopyTerminated_alt1(&v159_.v159, v60[3], v60[2]);
          v58 = *(_QWORD**)(v38 + 32);
        }
        else {
          v62 = *v61;
          v63 = v61[1];
          v64 = v61[2];
          v159_.v160 = v63;
          v159_.v161 = (_BYTE*)v64;
          v159_.v159 = v62;
        }
        ++*v58;
        v106 = *(_QWORD**)(v38 + 24);
        v107 = v106[1];
        v155[0] = *v106;
        v155[1] = v107;
        if (v107 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v107 + 16), 1u,
                                    memory_order_relaxed);
        }
        if ((v159_.v159 & 1) != 0) {
          v108 = v159_.v161;
        }
        else {
          v108 = (char*)&v159_.v159 + 1;
        }
        GameHr_1a01a00(v41, v42, *(float*)(v4 + 212) * (float)v35, v4,
                       (__int64)v155, v108);
        if (v107 != 0) {
          std___1___shared_weak_count___release_weak_alt1(v107);
        }
        v109 = *(_QWORD*)(v38 + 24);
        v111 = *(__int64**)v109;
        v110 = *(_QWORD*)(v109 + 8);
        v153_.v153 = v111;
        v153_.v154 = v110;
        if (v110 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v110 + 16), 1u,
                                    memory_order_relaxed);
        }
        if ((v159_.v159 & 1) != 0) {
          v112 = v159_.v161;
        }
        else {
          v112 = (char*)&v159_.v159 + 1;
        }
        if ((v162_.v162 & 1) != 0) {
          v113 = (char*)v162_.v164;
        }
        else {
          v113 = (char*)&v162_.v162 + 1;
        }
        game_map_1a01b50(*(float*)(v4 + 212), (float)v35, v4, &v153_.v153, v112,
                         v113, 0);
        v81 = v153_.v154;
        if (v153_.v154 != 0) {
          goto LABEL_94;
        }
      }
      else if (v39 == 1) {
        v44 = *(_QWORD**)(v38 + 16);
        v45 = *(_QWORD*)(v4 + 80);
        if (*v44 >= 0xCCCCCCCCCCCCCCCDLL * ((*(_QWORD*)(v4 + 88) - v45) >> 4)) {
          goto LABEL_72;
        }
        v46 = (_QWORD*)(v45 + 80LL * *v44);
        v47 = v46 + 1;
        if ((v46[1] & 1) != 0) {
          fw_text_String_CopyTerminated_alt1(&v159_.v159, v46[3], v46[2]);
          v44 = *(_QWORD**)(v38 + 16);
        }
        else {
          v48 = *v47;
          v49 = v47[1];
          v50 = v47[2];
          v159_.v160 = v49;
          v159_.v161 = (_BYTE*)v50;
          v159_.v159 = v48;
        }
        ++*v44;
        v98 = *(_QWORD**)(v38 + 24);
        v99 = v98[1];
        v158[0] = *v98;
        v158[1] = v99;
        if (v99 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v99 + 16), 1u,
                                    memory_order_relaxed);
        }
        if ((v159_.v159 & 1) != 0) {
          v100 = v159_.v161;
        }
        else {
          v100 = (char*)&v159_.v159 + 1;
        }
        GameHr_1a01a00(v41, v42, *(float*)(v4 + 212) * (float)v35, v4,
                       (__int64)v158, v100);
        if (v99 != 0) {
          std___1___shared_weak_count___release_weak_alt1(v99);
        }
        v101 = *(_QWORD*)(v38 + 24);
        v103 = *(__int64**)v101;
        v102 = *(_QWORD*)(v101 + 8);
        v156_.v156 = v103;
        v156_.v157 = v102;
        if (v102 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v102 + 16), 1u,
                                    memory_order_relaxed);
        }
        if ((v159_.v159 & 1) != 0) {
          v104 = v159_.v161;
        }
        else {
          v104 = (char*)&v159_.v159 + 1;
        }
        if ((v162_.v162 & 1) != 0) {
          v105 = (char*)v162_.v164;
        }
        else {
          v105 = (char*)&v162_.v162 + 1;
        }
        game_map_1a01b50(*(float*)(v4 + 212), (float)v35, v4, &v156_.v156, v104,
                         v105, 0);
        v81 = v156_.v157;
        if (v156_.v157 != 0) {
          goto LABEL_94;
        }
      }
      else {
        v65 = *(_QWORD**)(v38 + 40);
        v66 = *(_QWORD*)(v4 + 56);
        if (*v65 >= 0xCCCCCCCCCCCCCCCDLL * ((*(_QWORD*)(v4 + 64) - v66) >> 4)) {
        LABEL_72:
          if ((v162_.v162 & 1) != 0 && v162_.v164 != nullptr) {
            v72 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v72 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v72,
                (__int64)v162_.v164);
          }
          goto LABEL_5;
        }
        v67 = (_QWORD*)(v66 + 80LL * *v65);
        v68 = v67 + 1;
        if ((v67[1] & 1) != 0) {
          fw_text_String_CopyTerminated_alt1(&v159_.v159, v67[3], v67[2]);
          v65 = *(_QWORD**)(v38 + 40);
        }
        else {
          v69 = *v68;
          v70 = v68[1];
          v71 = v68[2];
          v159_.v160 = v70;
          v159_.v161 = (_BYTE*)v71;
          v159_.v159 = v69;
        }
        ++*v65;
        v114 = *(_QWORD**)(v38 + 24);
        v115 = v114[1];
        v152[0] = *v114;
        v152[1] = v115;
        if (v115 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v115 + 16), 1u,
                                    memory_order_relaxed);
        }
        if ((v159_.v159 & 1) != 0) {
          v116 = v159_.v161;
        }
        else {
          v116 = (char*)&v159_.v159 + 1;
        }
        GameHr_1a01a00(v41, v42, *(float*)(v4 + 212) * (float)v35, v4,
                       (__int64)v152, v116);
        if (v115 != 0) {
          std___1___shared_weak_count___release_weak_alt1(v115);
        }
        v117 = *(_QWORD*)(v38 + 24);
        v119 = *(__int64**)v117;
        v118 = *(_QWORD*)(v117 + 8);
        v150_.v150 = v119;
        v150_.v151 = v118;
        if (v118 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v118 + 16), 1u,
                                    memory_order_relaxed);
        }
        if ((v159_.v159 & 1) != 0) {
          v120 = v159_.v161;
        }
        else {
          v120 = (char*)&v159_.v159 + 1;
        }
        if ((v162_.v162 & 1) != 0) {
          v121 = (char*)v162_.v164;
        }
        else {
          v121 = (char*)&v162_.v162 + 1;
        }
        game_map_1a01b50(*(float*)(v4 + 212), (float)v35, v4, &v150_.v150, v120,
                         v121, 0);
        v81 = v150_.v151;
        if (v150_.v151 != 0) {
          goto LABEL_94;
        }
      }
    LABEL_95:
      if ((v159_.v159 & 1) != 0 && v159_.v161 != nullptr) {
        v82 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v82 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v82, (__int64)v159_.v161);
      }
      if ((v162_.v162 & 1) != 0 && v162_.v164 != nullptr) {
        v83 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v83 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v83, (__int64)v162_.v164);
      }
      if (**(_QWORD**)(v38 + 48) >=
          0xCCCCCCCCCCCCCCCDLL *
              ((__int64)(*(_QWORD*)(v4 + 136) - *(_QWORD*)(v4 + 128)) >> 3)) {
        goto LABEL_5;
      }
      v84 = GameRoutine_6b9520((_QWORD*)v7);
      if (v39 != 0) {
        v85 = v84;
        if (v84 != 0) {
          v86 = *(_QWORD*)(v38 + 56);
          v87 = *(_QWORD*)(v86 + 8);
          if (v87 != 0) {
            v88 = std___1___shared_weak_count_lock_alt1(v87);
            if (v88 != 0) {
              v89 = *(__int64**)v86;
              v90 = v88;
              if (*(_QWORD*)v86 != 0) {
                v92 = *(_QWORD*)(v4 + 128) + 40LL * **(_QWORD**)(v38 + 48);
                v94 = *(_BYTE*)(v92 + 8);
                v93 = (unsigned __int64*)(v92 + 8);
                if ((v94 & 1) != 0) {
                  v91 = *(_QWORD*)(v4 + 128) + 40LL * **(_QWORD**)(v38 + 48);
                  fw_text_String_CopyTerminated_alt1((__int64*)&v162_.v162,
                                                     *(_QWORD*)(v91 + 24),
                                                     *(_QWORD*)(v91 + 16));
                }
                else {
                  v95 = *v93;
                  v96 = v93[1];
                  v97 = v93[2];
                  v162_.v163 = v96;
                  v162_.v164 = (const char*)v97;
                  v162_.v162 = v95;
                }
                if ((v162_.v162 & 1) != 0) {
                  v122 = v162_.v164;
                }
                else {
                  v122 = (char*)&v162_.v162 + 1;
                }
                LayoutAccessor_1560070((void*)(&v159_.v159), v89, v122);
                if (v159_.v160 != 0) {
                  v123 = std___1___shared_weak_count_lock_alt1(v159_.v160);
                  if (v123 != 0) {
                    v124 = (__int64*)v159_.v159;
                  }
                  else {
                    v124 = nullptr;
                  }
                  if (v159_.v160 != 0) {
                    std___1___shared_weak_count___release_weak_alt1(v159_.v160);
                  }
                  if ((v162_.v162 & 1) == 0) {
                  LABEL_184:
                    if (v124 != nullptr) {
                      v162_.v162 = __PAIR64__(LODWORD(v37), LODWORD(v36));
                      LODWORD(v162_.v163) = 0;
                      ui_LayoutAccessor_SetTranslate(v124,
                                                     (__int64)&v162_.v162);
                      LayoutAccessor_155e830((__int64)v124, 1);
                      v162_.v162 = 0x3F8000003F800000LL;
                      ui_LayoutAccessor_SetScale((__int64)v124, &v162_.v162);
                      v126 = ui_LayoutAccessor_FindPane_alt1(
                          v124, (__int64)"MapChip_Weapon");
                      if (v126 != 0) {
                        v127 = __dynamic_cast(v126, GameData_212d670[0],
                                              GameData_212d678[0], 0);
                        if (v127 != 0) {
                          v128 = *(_DWORD*)(v4 + 208);
                          v129 = *(_BYTE*)(v127 + 88);
                          *(_QWORD*)(v127 + 60) = 0;
                          v129 |= 0x10u;
                          *(_DWORD*)(v127 + 68) = v128;
                          *(_BYTE*)(v127 + 88) = v129;
                          v130 = *(_DWORD*)(v4 + 212);
                          *(_BYTE*)(v127 + 88) = v129;
                          *(_DWORD*)(v127 + 80) = v130;
                          *(_DWORD*)(v127 + 84) = v130;
                          GameRoutine_1841300(v127, *(_BYTE*)(v85 + 72));
                        }
                      }
                      v131 = ui_LayoutAccessor_FindPane_alt1(v124,
                                                             (__int64)"N_Rot");
                      if (v131 != 0) {
                        v132 = *(_DWORD*)(v4 + 212);
                        *(_DWORD*)(v131 + 80) = v132;
                        *(_DWORD*)(v131 + 84) = v132;
                        *(_BYTE*)(v131 + 88) |= 0x10u;
                      }
                      ++**(_QWORD**)(v38 + 48);
                    }
                    if (v123 != 0 &&
                        atomic_fetch_add((atomic_ullong* volatile)(v123 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
                      (*(void (**)(__int64))(*(_QWORD*)v123 + 16LL))(v123);
                      std___1___shared_weak_count___release_weak_alt1(v123);
                    }
                    goto LABEL_194;
                  }
                }
                else {
                  v124 = nullptr;
                  v123 = 0;
                  if ((v162_.v162 & 1) == 0) {
                    goto LABEL_184;
                  }
                }
                if (v162_.v164 != nullptr) {
                  v125 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v125 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt1(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v125,
                      (__int64)v162_.v164);
                }
                goto LABEL_184;
              }
            LABEL_194:
              if (atomic_fetch_add((atomic_ullong* volatile)(v90 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v90 + 16LL))(v90);
                std___1___shared_weak_count___release_weak_alt1(v90);
              }
            }
          }
        }
      }
      v133 = *(_QWORD*)(v4 + 176);
      v134 = **(_QWORD**)(v38 + 64);
      if (v134 >= 0xAAAAAAAAAAAAAAABLL * ((*(_QWORD*)(v4 + 184) - v133) >> 4)) {
        goto LABEL_5;
      }
      v135 = *(_QWORD*)(v7 + 40);
      if (v135 == 0 || v146 == 0 && (*(_WORD*)(v7 + 50) & 0x20) == 0) {
        goto LABEL_5;
      }
      v136 = v133 + 48 * v134;
      *(float*)(v136 + 4) = v36;
      *(float*)(v136 + 8) = v37;
      *(_QWORD*)(v136 + 16) = v135;
      v137 = *(_QWORD*)(v7 + 40);
      if (v137 != 0 && *(_WORD*)(v137 + 16) != 0) {
        v5 = *(_QWORD*)(v137 + 64);
        if (v5 == 0) {
          if (game_GameModeData_instance_ != 0) {
            v138 = *(_DWORD*)(game_GameModeData_instance_ + 68);
            v139 = *(_QWORD*)(game_GameModeData_instance_ + 16);
            if (v139 != 0) {
              v138 += *(char*)(v139 + 128);
            }
          }
          else {
            v138 = 0;
          }
          v140 = *(unsigned __int8*)(v137 + 442);
          if (*(_BYTE*)(v137 + 442) == 0) {
            if (*(_BYTE*)(v137 + 443) != 0) {
              v140 = v138 + *(char*)(v137 + 443);
              if (v140 <= 1) {
                v140 = 1;
              }
              if (v140 >= 99) {
                v140 = 99;
              }
            }
            else {
              v140 = v138;
            }
          }
          if (*(_QWORD*)(v137 + 304) == 0) {
            v143 = 0;
          LABEL_218:
            if (v143 != 0) {
              v5 = v143;
            }
            else {
              v5 = GameData_21c9988;
            }
            goto LABEL_4;
          }
          v162_.v162 = *(_QWORD*)(v137 + 304);
          v141 = v135;
          v142 = game_GrowthListFile_GetJob((__int64*)&v162_.v162,
                                            (unsigned int)v140, 6);
          v135 = v141;
          v5 = v142;
          if (v142 == 0) {
            v143 = *(_QWORD*)(v137 + 64);
            goto LABEL_218;
          }
        }
      }
      else {
        v5 = 0;
      }
    LABEL_4:
      game_map_MapBaseMap_CreatePersonSkillDataList(v4, v135, v5,
                                                    (__int64*)(v136 + 24));
      ++**(_QWORD**)(v38 + 64);
    LABEL_5:
      ++v2;
    } while (v2 != v3);
  }
}

#pragma GCC visibility pop
