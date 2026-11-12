#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 BasicMenuCursor_16e0c00(_QWORD, _QWORD);
__int64 EquipUnitSelectMenuItem_16d25e0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_15748c0(_QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*GameData_2096a58[])();
extern __int64 (*GameData_2096ce8[])();
extern __int64 (*game_menu_anonymous_EquipInfoItem_Item_vtable[])();
extern __int64 (*game_menu_anonymous_EquipInfoItem_SkillStock_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_6e5a20(void);
__int64
ItemUnitInfo_Unknown137_alt1(_QWORD* a1,
                             __int16 a2) __asm__("ItemUnitInfo_Unknown137");
__int64 GameRoutine_15748c0_alt1(__int64, unsigned __int16*,
                                 char) __asm__("GameRoutine_15748c0");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
unsigned __int64 EquipUnitSelectMenuItem_16d25e0_alt1(
    __int64, const char*, const char*,
    const char*) __asm__("EquipUnitSelectMenuItem_16d25e0");
void BasicMenuCursor_16e0c00_alt1(_QWORD*,
                                  __int64) __asm__("BasicMenuCursor_16e0c00");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_6e5a20_alt1() __asm__("GameRoutine_6e5a20");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void ItemUnitInfo_Unknown137(_QWORD* a1, __int16 a2);

void ItemUnitInfo_Unknown137(_QWORD* a1, __int16 a2)
{
  __int64 v3;
  __int64 v4;
  _DWORD* v5;
  char* v6;
  char* v7;
  unsigned __int16* v8;
  bool v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  char* v20;
  unsigned __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  __int64 v48;
  __int64 v49;
  int v50;
  __int64 v51;
  __int64 v52;
  int v53;
  __int64* v55;
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
  __int64 v70;
  char v71;
  __int64 v72;
  __int64 v73;
  int* v74;
  unsigned __int64 v75;
  __int64 v76;
  int v77;
  char* v78;
  unsigned __int64 v79;
  __int64 v80;
  int v81;
  int v82;
  int v83;
  __int64 v84;
  int* v85;
  unsigned __int64 v86;
  __int64 v87;
  int v88;
  int v89;
  int v90;
  int v91;
  int v92;
  __int64 v93;
  int v94;
  __int64 v95;
  __int64 v96;
  int v97;
  int v98;
  __int64 v99;
  __int64 v100;
  int v101;
  int v102;
  int v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  int v107;
  __int64 v108;
  unsigned int v109;
  __int64 v110;
  int* v111;
  unsigned __int64 v112;
  int v113;
  __int64 v114;
  int v115;
  int v116;
  __int64 i;
  __int64 v118;
  int v119;
  __int64 v120;
  int v121;
  int* v122;
  unsigned __int64 v123;
  __int64 v124;
  int v125;
  int v126;
  int v127;
  int* v128;
  unsigned __int64 v129;
  int v130;
  __int64 v131;
  int v132;
  int v133;
  __int64 v134;
  __int64 v135;
  int v136;
  __int64 v137;
  __int64 v138;
  __int64 v139;
  __int64 v140;
  __int64 v142;
  unsigned __int64 v143;
  unsigned __int64 v144;
  unsigned __int64 v145;
  char* v146;
  int v147;
  unsigned __int64 v148;
  unsigned __int64 v149;
  unsigned __int64 v150;
  unsigned __int64 v151;
  __int64 v152;
  _DWORD* v153;
  _DWORD* v154;
  __int64 v155;
  __int64 v156;

  if ((a2 & 0xC000) == 0) {
    v55 = (__int64*)fw_memory_g_heap_manager_ptr;
    v56 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 160, 16, 0);
    EquipUnitSelectMenuItem_16d25e0_alt1(v56, "MID_SysMenu_Item",
                                         "MID_Sys_WeaponEndure", nullptr);
    BasicMenuCursor_16e0c00_alt1(a1, v56);
    v57 = fw_memory_HeapManager_Allocate_alt1(*v55, 128, 16, 0);
    v58 = a1[133];
    *(_WORD*)(v57 + 16) = 0;
    *(_QWORD*)(v57 + 48) = 0;
    *(_QWORD*)(v57 + 56) = 0;
    *(_QWORD*)(v57 + 64) = 0;
    *(_QWORD*)(v57 + 72) = 0;
    *(_WORD*)(v57 + 80) = 257;
    *(_BYTE*)(v57 + 82) = 1;
    *(_QWORD*)(v57 + 104) = 0;
    *(_QWORD*)(v57 + 112) = 0;
    *(_QWORD*)(v57 + 120) = 0;
    *(_DWORD*)(v57 + 40) = 0;
    *(_QWORD*)v57 = game_menu_anonymous_EquipInfoItem_Item_vtable;
    *(_QWORD*)(v57 + 8) = 0;
    *(_QWORD*)(v57 + 88) = GameData_2096a58;
    *(_QWORD*)(v57 + 96) = v58;
    BasicMenuCursor_16e0c00_alt1(a1, v57);
    v59 = fw_memory_HeapManager_Allocate_alt1(*v55, 128, 16, 0);
    v60 = a1[133];
    *(_WORD*)(v59 + 16) = 0;
    *(_QWORD*)(v59 + 48) = 0;
    *(_QWORD*)(v59 + 56) = 0;
    *(_QWORD*)(v59 + 64) = 0;
    *(_QWORD*)(v59 + 72) = 0;
    *(_WORD*)(v59 + 80) = 257;
    *(_BYTE*)(v59 + 82) = 1;
    *(_QWORD*)(v59 + 104) = 0;
    *(_QWORD*)(v59 + 112) = 0;
    *(_QWORD*)(v59 + 120) = 0;
    *(_DWORD*)(v59 + 40) = 1;
    *(_QWORD*)v59 = game_menu_anonymous_EquipInfoItem_Item_vtable;
    *(_QWORD*)(v59 + 8) = 0;
    *(_QWORD*)(v59 + 88) = GameData_2096a58;
    *(_QWORD*)(v59 + 96) = v60;
    BasicMenuCursor_16e0c00_alt1(a1, v59);
    v61 = fw_memory_HeapManager_Allocate_alt1(*v55, 128, 16, 0);
    *(_WORD*)(v61 + 16) = 0;
    *(_QWORD*)(v61 + 48) = 0;
    *(_QWORD*)(v61 + 56) = 0;
    *(_QWORD*)(v61 + 64) = 0;
    *(_QWORD*)(v61 + 72) = 0;
    *(_WORD*)(v61 + 80) = 257;
    *(_BYTE*)(v61 + 82) = 1;
    *(_QWORD*)(v61 + 104) = 0;
    *(_QWORD*)(v61 + 112) = 0;
    *(_QWORD*)(v61 + 120) = 0;
    *(_QWORD*)v61 = game_menu_anonymous_EquipInfoItem_Item_vtable;
    *(_QWORD*)(v61 + 8) = 0;
    *(_DWORD*)(v61 + 40) = 2;
    v62 = a1[133];
    *(_QWORD*)(v61 + 88) = GameData_2096a58;
    *(_QWORD*)(v61 + 96) = v62;
    BasicMenuCursor_16e0c00_alt1(a1, v61);
    v63 = fw_memory_HeapManager_Allocate_alt1(*v55, 128, 16, 0);
    *(_WORD*)(v63 + 16) = 0;
    *(_QWORD*)(v63 + 48) = 0;
    *(_QWORD*)(v63 + 56) = 0;
    *(_QWORD*)(v63 + 64) = 0;
    *(_QWORD*)(v63 + 72) = 0;
    *(_WORD*)(v63 + 80) = 257;
    *(_BYTE*)(v63 + 82) = 1;
    *(_QWORD*)(v63 + 104) = 0;
    *(_QWORD*)(v63 + 112) = 0;
    *(_QWORD*)(v63 + 120) = 0;
    *(_QWORD*)v63 = game_menu_anonymous_EquipInfoItem_Item_vtable;
    *(_QWORD*)(v63 + 8) = 0;
    *(_DWORD*)(v63 + 40) = 3;
    v64 = a1[133];
    *(_QWORD*)(v63 + 88) = GameData_2096a58;
    *(_QWORD*)(v63 + 96) = v64;
    BasicMenuCursor_16e0c00_alt1(a1, v63);
    v65 = fw_memory_HeapManager_Allocate_alt1(*v55, 128, 16, 0);
    *(_WORD*)(v65 + 16) = 0;
    *(_QWORD*)(v65 + 48) = 0;
    *(_QWORD*)(v65 + 56) = 0;
    *(_QWORD*)(v65 + 64) = 0;
    *(_QWORD*)(v65 + 72) = 0;
    *(_WORD*)(v65 + 80) = 257;
    *(_BYTE*)(v65 + 82) = 1;
    *(_QWORD*)(v65 + 104) = 0;
    *(_QWORD*)(v65 + 112) = 0;
    *(_QWORD*)(v65 + 120) = 0;
    *(_QWORD*)v65 = game_menu_anonymous_EquipInfoItem_Item_vtable;
    *(_QWORD*)(v65 + 8) = 0;
    *(_DWORD*)(v65 + 40) = 4;
    v66 = a1[133];
    *(_QWORD*)(v65 + 88) = GameData_2096a58;
    *(_QWORD*)(v65 + 96) = v66;
    BasicMenuCursor_16e0c00_alt1(a1, v65);
    v67 = fw_memory_HeapManager_Allocate_alt1(*v55, 128, 16, 0);
    v68 = a1[133];
    *(_WORD*)(v67 + 16) = 0;
    *(_QWORD*)(v67 + 48) = 0;
    *(_QWORD*)(v67 + 56) = 0;
    *(_QWORD*)(v67 + 64) = 0;
    *(_QWORD*)(v67 + 72) = 0;
    *(_WORD*)(v67 + 80) = 257;
    *(_BYTE*)(v67 + 82) = 1;
    *(_QWORD*)(v67 + 104) = 0;
    *(_QWORD*)(v67 + 112) = 0;
    *(_QWORD*)(v67 + 120) = 0;
    *(_QWORD*)v67 = game_menu_anonymous_EquipInfoItem_Item_vtable;
    *(_QWORD*)(v67 + 8) = 0;
    *(_DWORD*)(v67 + 40) = 5;
    *(_QWORD*)(v67 + 88) = GameData_2096a58;
    *(_QWORD*)(v67 + 96) = v68;
    BasicMenuCursor_16e0c00_alt1(a1, v67);
    if ((a2 & 0x2000) != 0) {
      v69 = a1[133];
      v70 = *(_QWORD*)(v69 + 440);
      v71 = v70 != 0 ? *(_BYTE*)(v70 + 16) : 9;
      if (((1 << v71) & 0xF1) == 0) {
        v98 = *(unsigned __int8*)(v69 + 497);
        v99 = *(_QWORD*)(*(_QWORD*)(v69 + 392) + 320LL);
        if ((v99 != 0 ||
             (v99 = *(_QWORD*)(*(_QWORD*)(v69 + 400) + 280LL)) != 0) &&
            *(unsigned __int8*)(v69 + 624) <= 2u && *(_BYTE*)(v69 + 497) != 0 &&
            *(_WORD*)(v99 + 48LL * *(unsigned __int8*)(v69 + 624) + 64) != 0) {
          v100 = fw_memory_HeapManager_Allocate_alt1(*v55, 160, 16, 0);
          EquipUnitSelectMenuItem_16d25e0_alt1(
              v100, "MID_Btl_EnemyDetail_StockSkill",
              "MID_Btl_EnemyDetail_ActivationStock", "L_StockSkill");
          BasicMenuCursor_16e0c00_alt1(a1, v100);
          v101 = 0;
          v102 = v98;
          do {
            v103 = v102 - 1;
            v104 = fw_memory_HeapManager_Allocate_alt1(*v55, 144, 16, 0);
            *(_WORD*)(v104 + 16) = 0;
            *(_QWORD*)(v104 + 48) = 0;
            *(_QWORD*)(v104 + 56) = 0;
            *(_QWORD*)(v104 + 64) = 0;
            *(_QWORD*)(v104 + 72) = 0;
            *(_BYTE*)(v104 + 82) = 1;
            *(_QWORD*)(v104 + 104) = 0;
            *(_QWORD*)(v104 + 112) = 0;
            *(_QWORD*)(v104 + 120) = 0;
            *(_DWORD*)(v104 + 40) = -1;
            *(_QWORD*)v104 =
                game_menu_anonymous_EquipInfoItem_SkillStock_vtable;
            *(_QWORD*)(v104 + 8) = 0;
            *(_DWORD*)(v104 + 128) = v102 - 1;
            *(_DWORD*)(v104 + 132) = v98;
            *(_DWORD*)(v104 + 136) = 0;
            *(_WORD*)(v104 + 80) = 257;
            *(_QWORD*)(v104 + 88) = GameData_2096ce8;
            *(_QWORD*)(v104 + 96) = v69;
            v105 = *(_QWORD*)(*(_QWORD*)(v69 + 392) + 320LL);
            if (v105 == 0) {
              v105 = *(_QWORD*)(*(_QWORD*)(v69 + 400) + 280LL);
            }
            if (v102 <= v98) {
              v106 = v105 + 48LL * *(unsigned __int8*)(v69 + 624);
              v107 = *(unsigned __int16*)(v106 + 64);
              if (*(_WORD*)(v106 + 64) != 0) {
                v108 = *(_QWORD*)(v106 + 72);
                v109 = v107 - 1;
                if ((int)v109 >= v101) {
                  v109 = v101;
                }
                v110 = *(_QWORD*)(*(_QWORD*)(v108 + 16LL * v109 + 8) + 8LL);
                if (v110 != 0) {
                  LODWORD(v110) = *(_WORD*)(v110 + 16) & 0xFFF;
                }
                *(_DWORD*)(v104 + 136) = v110;
              }
            }
            BasicMenuCursor_16e0c00_alt1(a1, v104);
            ++v101;
            --v102;
          } while ((unsigned int)(v103 + 1) > 1);
        }
      }
    }
    return;
  }
  v3 = a1[133];
  v4 = -24;
  v152 = 0;
  v5 = nullptr;
  v6 = nullptr;
  v7 = nullptr;
  v8 = (unsigned __int16*)(v3 + 876);
  v148 = 0;
  v150 = 0;
  v145 = 0;
  v154 = nullptr;
  v156 = 0;
  v143 = 0;
  v153 = nullptr;
  v155 = 0;
  do {
    v10 = GameRoutine_15748c0_alt1(v3, v8, 1);
    if ((v10 & 0x100000000LL) != 0) {
      if ((_DWORD)v10 == 2) {
        if (v10 >> 40 != 0) {
          if ((unsigned __int64)v153 >= v143) {
            v28 = (unsigned __int64)v153 - v155;
            v29 = ((__int64)v153 - v155) >> 2;
            v30 = v29 + 1;
            if ((unsigned __int64)(v29 + 1) >> 62 != 0) {
            LABEL_188:
              GameRoutine_6e5a20_alt1();
            }
            v20 = v6;
            if ((__int64)(v143 - v155) >> 1 > v30) {
              v30 = (__int64)(v143 - v155) >> 1;
            }
            if (v143 - v155 >= 0x7FFFFFFFFFFFFFFCLL) {
              v31 = 0x3FFFFFFFFFFFFFFFLL;
            }
            else {
              v31 = v30;
            }
            if (v31 != 0) {
              if (v31 >> 62 != 0) {
              LABEL_189:
                GameRoutine_60a210_alt1();
              }
              v32 = fw_memory_HeapManager_Allocate_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v31, 16, 0);
            }
            else {
              v32 = 0;
            }
            v143 = v32 + 4 * v31;
            v39 = v32 + v28 - 4 * v29;
            *(_DWORD*)(v32 + v28) = v4 + 30;
            v153 = (_DWORD*)(v32 + v28 + 4);
            memcpy_alt1(v39, v155, v28);
            if (v155 != 0) {
              v40 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v40 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v40, v155);
              v155 = v39;
            }
            else {
              v155 = v39;
            }
            goto LABEL_4;
          }
          *v153++ = v4 + 30;
        }
        else {
          if ((unsigned __int64)v154 >= v145) {
            v23 = (unsigned __int64)v154 - v156;
            v24 = ((__int64)v154 - v156) >> 2;
            v25 = v24 + 1;
            if ((unsigned __int64)(v24 + 1) >> 62 != 0) {
              goto LABEL_188;
            }
            v20 = v6;
            if ((__int64)(v145 - v156) >> 1 > v25) {
              v25 = (__int64)(v145 - v156) >> 1;
            }
            if (v145 - v156 >= 0x7FFFFFFFFFFFFFFCLL) {
              v26 = 0x3FFFFFFFFFFFFFFFLL;
            }
            else {
              v26 = v25;
            }
            if (v26 != 0) {
              if (v26 >> 62 != 0) {
                goto LABEL_189;
              }
              v27 = fw_memory_HeapManager_Allocate_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v26, 16, 0);
            }
            else {
              v27 = 0;
            }
            v145 = v27 + 4 * v26;
            v37 = v27 + v23 - 4 * v24;
            *(_DWORD*)(v27 + v23) = v4 + 30;
            v154 = (_DWORD*)(v27 + v23 + 4);
            memcpy_alt1(v37, v156, v23);
            if (v156 != 0) {
              v38 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v38 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v38, v156);
            }
            v156 = v37;
            goto LABEL_4;
          }
          *v154++ = v4 + 30;
        }
      }
      else if ((_DWORD)v10 == 1) {
        if (v10 >> 40 != 0) {
          if ((unsigned __int64)v5 >= v150) {
            v17 = (unsigned __int64)v5 - v152;
            v18 = ((__int64)v5 - v152) >> 2;
            v19 = v18 + 1;
            if ((unsigned __int64)(v18 + 1) >> 62 != 0) {
              goto LABEL_188;
            }
            v20 = v6;
            if ((__int64)(v150 - v152) >> 1 > v19) {
              v19 = (__int64)(v150 - v152) >> 1;
            }
            if (v150 - v152 >= 0x7FFFFFFFFFFFFFFCLL) {
              v21 = 0x3FFFFFFFFFFFFFFFLL;
            }
            else {
              v21 = v19;
            }
            if (v21 != 0) {
              if (v21 >> 62 != 0) {
                goto LABEL_189;
              }
              v22 = fw_memory_HeapManager_Allocate_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v21, 16, 0);
            }
            else {
              v22 = 0;
            }
            v150 = v22 + 4 * v21;
            v35 = v22 + v17 - 4 * v18;
            *(_DWORD*)(v22 + v17) = v4 + 30;
            v5 = (_DWORD*)(v22 + v17 + 4);
            memcpy_alt1(v35, v152, v17);
            if (v152 != 0) {
              v36 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v36 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v36, v152);
            }
            v152 = v35;
          LABEL_4:
            v6 = v20;
            goto LABEL_5;
          }
          *v5++ = v4 + 30;
        }
        else if ((unsigned __int64)v7 >= v148) {
          v11 = v7 - v6;
          v12 = (v7 - v6) >> 2;
          v13 = v12 + 1;
          if ((unsigned __int64)(v12 + 1) >> 62 != 0) {
            goto LABEL_188;
          }
          v14 = (__int64)v6;
          if ((__int64)(v148 - (_QWORD)v6) >> 1 > v13) {
            v13 = (__int64)(v148 - (_QWORD)v6) >> 1;
          }
          if (v148 - (unsigned __int64)v6 >= 0x7FFFFFFFFFFFFFFCLL) {
            v15 = 0x3FFFFFFFFFFFFFFFLL;
          }
          else {
            v15 = v13;
          }
          if (v15 != 0) {
            if (v15 >> 62 != 0) {
              goto LABEL_189;
            }
            v16 = fw_memory_HeapManager_Allocate_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v15, 16, 0);
          }
          else {
            v16 = 0;
          }
          v148 = v16 + 4 * v15;
          v33 = v16 + v11 - 4 * v12;
          *(_DWORD*)(v16 + v11) = v4 + 30;
          v7 = (char*)(v16 + v11 + 4);
          memcpy_alt1(v33, v14, v11);
          if (v14 != 0) {
            v34 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v34 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v34, v14);
            v6 = (char*)v33;
          }
          else {
            v6 = (char*)v33;
          }
        }
        else {
          *(_DWORD*)v7 = v4 + 30;
          v7 += 4;
        }
      }
    }
  LABEL_5:
    v9 = __CFADD__(v4++, 1);
    v8 += 4;
  } while (!v9);
  v144 = (unsigned __int64)v5 - v152;
  v146 = v7;
  v41 = ((__int64)v5 - v152) >> 2;
  v42 = (v7 - v6) >> 2;
  v43 = v41 + v42;
  v151 = ((__int64)v153 - v155) >> 2;
  v44 = (((__int64)v154 - v156) >> 2) + v151;
  v45 = (*(__int64 (**)(_QWORD*))(*a1 + 1080LL))(a1);
  v46 = v45;
  v149 = ((__int64)v154 - v156) >> 2;
  if ((a2 & 0x4000) != 0) {
    v142 = (__int64)v6;
    if (v43 < 1) {
      LODWORD(v73) = 0;
      if (v44 < 1) {
        goto LABEL_171;
      }
    }
    else {
      v72 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 160, 16, 0);
      EquipUnitSelectMenuItem_16d25e0_alt1(v72, "MID_Menu_AttackMagic",
                                           "MID_Sys_Remaining", nullptr);
      BasicMenuCursor_16e0c00_alt1(a1, v72);
      LODWORD(v73) = 1;
      if (v5 != (_DWORD*)v152 && v46 >= 2) {
        v74 = (int*)v152;
        v73 = 1;
        do {
          v75 = v73;
          v76 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 128, 16, 0);
          v77 = *v74++;
          *(_WORD*)(v76 + 16) = 0;
          *(_QWORD*)(v76 + 64) = 0;
          *(_QWORD*)(v76 + 72) = 0;
          *(_QWORD*)(v76 + 48) = 0;
          *(_QWORD*)(v76 + 56) = 0;
          *(_WORD*)(v76 + 80) = 257;
          *(_BYTE*)(v76 + 82) = 1;
          *(_QWORD*)(v76 + 112) = 0;
          *(_QWORD*)(v76 + 120) = 0;
          *(_QWORD*)(v76 + 96) = v3;
          *(_QWORD*)(v76 + 104) = 0;
          *(_QWORD*)v76 = game_menu_anonymous_EquipInfoItem_Item_vtable;
          *(_QWORD*)(v76 + 8) = 0;
          *(_DWORD*)(v76 + 40) = v77;
          *(_QWORD*)(v76 + 88) = GameData_2096a58;
          BasicMenuCursor_16e0c00_alt1(a1, v76);
          ++v73;
        } while (v41 > v75 && (int)v73 < v46);
        v6 = (char*)v142;
      }
      if (v146 != v6 && (int)v73 < v46) {
        v78 = v6;
        v79 = 1;
        do {
          v80 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 128, 16, 0);
          v81 = *(_DWORD*)v78;
          v78 += 4;
          *(_WORD*)(v80 + 16) = 0;
          *(_QWORD*)(v80 + 64) = 0;
          *(_QWORD*)(v80 + 72) = 0;
          *(_QWORD*)(v80 + 48) = 0;
          *(_QWORD*)(v80 + 56) = 0;
          *(_WORD*)(v80 + 80) = 257;
          *(_BYTE*)(v80 + 82) = 1;
          *(_QWORD*)(v80 + 112) = 0;
          *(_QWORD*)(v80 + 120) = 0;
          *(_QWORD*)(v80 + 96) = v3;
          *(_QWORD*)(v80 + 104) = 0;
          *(_QWORD*)v80 = game_menu_anonymous_EquipInfoItem_Item_vtable;
          *(_QWORD*)(v80 + 8) = 0;
          *(_DWORD*)(v80 + 40) = v81;
          *(_QWORD*)(v80 + 88) = GameData_2096a58;
          BasicMenuCursor_16e0c00_alt1(a1, v80);
          v82 = v79 + 1;
          if (v42 <= v79) {
            break;
          }
          v83 = v73 + v79++;
        } while (v83 < v46);
        LODWORD(v73) = v73 + v82 - 1;
      }
      if (v44 < 1) {
        goto LABEL_171;
      }
    }
    if ((int)v73 >= v46 - 1) {
      goto LABEL_171;
    }
    v84 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 160, 16, 0);
    EquipUnitSelectMenuItem_16d25e0_alt1(v84, "MID_Menu_SupportMagic",
                                         "MID_Sys_Remaining", nullptr);
    BasicMenuCursor_16e0c00_alt1(a1, v84);
    v85 = (int*)v155;
    if (v153 == (_DWORD*)v155) {
      v91 = v73 + 1;
    }
    else {
      v86 = 1;
      do {
        v87 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 128, 16, 0);
        v88 = *v85++;
        *(_WORD*)(v87 + 16) = 0;
        *(_QWORD*)(v87 + 64) = 0;
        *(_QWORD*)(v87 + 72) = 0;
        *(_QWORD*)(v87 + 48) = 0;
        *(_QWORD*)(v87 + 56) = 0;
        *(_WORD*)(v87 + 80) = 257;
        *(_BYTE*)(v87 + 82) = 1;
        *(_QWORD*)(v87 + 112) = 0;
        *(_QWORD*)(v87 + 120) = 0;
        *(_QWORD*)(v87 + 96) = v3;
        *(_QWORD*)(v87 + 104) = 0;
        *(_QWORD*)v87 = game_menu_anonymous_EquipInfoItem_Item_vtable;
        *(_QWORD*)(v87 + 8) = 0;
        *(_DWORD*)(v87 + 40) = v88;
        *(_QWORD*)(v87 + 88) = GameData_2096a58;
        BasicMenuCursor_16e0c00_alt1(a1, v87);
        v89 = v86 + 1;
        if (v151 <= v86) {
          break;
        }
        v90 = v73 + v86++;
      } while (v90 + 1 < v46);
      v91 = v73 + v89;
    }
    if (v154 == (_DWORD*)v156 || v91 >= v46) {
      goto LABEL_171;
    }
    v111 = (int*)v156;
    v112 = 1;
    v113 = v91;
    do {
      v114 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 128, 16, 0);
      v115 = *v111++;
      *(_WORD*)(v114 + 16) = 0;
      *(_QWORD*)(v114 + 64) = 0;
      *(_QWORD*)(v114 + 72) = 0;
      *(_QWORD*)(v114 + 48) = 0;
      *(_QWORD*)(v114 + 56) = 0;
      *(_WORD*)(v114 + 80) = 257;
      *(_BYTE*)(v114 + 82) = 1;
      *(_QWORD*)(v114 + 112) = 0;
      *(_QWORD*)(v114 + 120) = 0;
      *(_QWORD*)(v114 + 96) = v3;
      *(_QWORD*)(v114 + 104) = 0;
      *(_QWORD*)v114 = game_menu_anonymous_EquipInfoItem_Item_vtable;
      *(_QWORD*)(v114 + 8) = 0;
      *(_DWORD*)(v114 + 40) = v115;
      *(_QWORD*)(v114 + 88) = GameData_2096a58;
      BasicMenuCursor_16e0c00_alt1(a1, v114);
      if (v149 <= v112) {
        break;
      }
      v116 = v113 + v112++;
    } while (v116 < v46);
  LABEL_172:
    v137 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v137 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v137, v156);
  }
  else {
    v142 = (__int64)v6;
    if ((a2 & 0x8000) == 0) {
      goto LABEL_171;
    }
    if (v45 > v43) {
      v47 = v45 - v43 - 2;
      if (v47 < v44) {
        v48 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 160, 16, 0);
        EquipUnitSelectMenuItem_16d25e0_alt1(v48, "MID_Menu_SupportMagic",
                                             "MID_Sys_Remaining", nullptr);
        BasicMenuCursor_16e0c00_alt1(a1, v48);
        v147 = v47;
        if (v153 != (_DWORD*)v155) {
          v49 = v47;
          v50 = 1;
          v51 = 0;
          while (1) {
            if (v51 >= v49) {
              if (v50 >= v46) {
                goto LABEL_165;
              }
              v52 = fw_memory_HeapManager_Allocate_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 128, 16, 0);
              v53 = *(_DWORD*)(v155 + 4 * v51);
              *(_WORD*)(v52 + 16) = 0;
              *(_QWORD*)(v52 + 64) = 0;
              *(_QWORD*)(v52 + 72) = 0;
              *(_QWORD*)(v52 + 48) = 0;
              *(_QWORD*)(v52 + 56) = 0;
              *(_WORD*)(v52 + 80) = 257;
              *(_BYTE*)(v52 + 82) = 1;
              *(_QWORD*)(v52 + 112) = 0;
              *(_QWORD*)(v52 + 120) = 0;
              *(_QWORD*)(v52 + 96) = v3;
              *(_QWORD*)(v52 + 104) = 0;
              *(_QWORD*)v52 = game_menu_anonymous_EquipInfoItem_Item_vtable;
              *(_QWORD*)(v52 + 8) = 0;
              *(_DWORD*)(v52 + 40) = v53;
              *(_QWORD*)(v52 + 88) = GameData_2096a58;
              BasicMenuCursor_16e0c00_alt1(a1, v52);
              ++v50;
            }
            if (v151 == ++v51) {
              goto LABEL_165;
            }
          }
        }
        v50 = 1;
      LABEL_165:
        if (v154 != (_DWORD*)v156) {
          v134 = 0;
          while (1) {
            if (v134 >=
                v147 - (__int64)(int)(((unsigned __int64)v153 - v155) >> 2)) {
              if (v50 >= v46) {
                goto LABEL_171;
              }
              v135 = fw_memory_HeapManager_Allocate_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 128, 16, 0);
              v136 = *(_DWORD*)(v156 + 4 * v134);
              *(_WORD*)(v135 + 16) = 0;
              *(_QWORD*)(v135 + 64) = 0;
              *(_QWORD*)(v135 + 72) = 0;
              *(_QWORD*)(v135 + 48) = 0;
              *(_QWORD*)(v135 + 56) = 0;
              *(_WORD*)(v135 + 80) = 257;
              *(_BYTE*)(v135 + 82) = 1;
              *(_QWORD*)(v135 + 112) = 0;
              *(_QWORD*)(v135 + 120) = 0;
              *(_QWORD*)(v135 + 96) = v3;
              *(_QWORD*)(v135 + 104) = 0;
              *(_QWORD*)v135 = game_menu_anonymous_EquipInfoItem_Item_vtable;
              *(_QWORD*)(v135 + 8) = 0;
              *(_DWORD*)(v135 + 40) = v136;
              *(_QWORD*)(v135 + 88) = GameData_2096a58;
              BasicMenuCursor_16e0c00_alt1(a1, v135);
              ++v50;
            }
            if (v149 == ++v134) {
              goto LABEL_171;
            }
          }
        }
      }
      goto LABEL_171;
    }
    v92 = v45 - 1;
    v93 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 160, 16, 0);
    EquipUnitSelectMenuItem_16d25e0_alt1(v93, "MID_Menu_AttackMagic",
                                         "MID_Sys_Remaining", nullptr);
    BasicMenuCursor_16e0c00_alt1(a1, v93);
    if (v5 != (_DWORD*)v152) {
      v94 = 1;
      v95 = 0;
      while (1) {
        if (v95 >= v92) {
          if (v94 >= v46) {
            goto LABEL_145;
          }
          v96 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 128, 16, 0);
          v97 = *(_DWORD*)(v152 + 4 * v95);
          *(_WORD*)(v96 + 16) = 0;
          *(_QWORD*)(v96 + 64) = 0;
          *(_QWORD*)(v96 + 72) = 0;
          *(_QWORD*)(v96 + 48) = 0;
          *(_QWORD*)(v96 + 56) = 0;
          *(_QWORD*)(v96 + 112) = 0;
          *(_QWORD*)(v96 + 120) = 0;
          *(_QWORD*)(v96 + 96) = v3;
          *(_QWORD*)(v96 + 104) = 0;
          *(_WORD*)(v96 + 80) = 257;
          *(_BYTE*)(v96 + 82) = 1;
          *(_DWORD*)(v96 + 40) = v97;
          *(_QWORD*)v96 = game_menu_anonymous_EquipInfoItem_Item_vtable;
          *(_QWORD*)(v96 + 8) = 0;
          *(_QWORD*)(v96 + 88) = GameData_2096a58;
          BasicMenuCursor_16e0c00_alt1(a1, v96);
          ++v94;
        }
        if (v41 == ++v95) {
          goto LABEL_145;
        }
      }
    }
    v94 = 1;
  LABEL_145:
    if (v146 != v6) {
      for (i = 0; v42 != i; ++i) {
        if (i >= v46 - 1 - (__int64)(int)(v144 >> 2)) {
          if (v94 >= v46) {
            break;
          }
          v118 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 128, 16, 0);
          v119 = *(_DWORD*)&v6[4 * i];
          *(_WORD*)(v118 + 16) = 0;
          *(_QWORD*)(v118 + 64) = 0;
          *(_QWORD*)(v118 + 72) = 0;
          *(_QWORD*)(v118 + 48) = 0;
          *(_QWORD*)(v118 + 56) = 0;
          *(_BYTE*)(v118 + 82) = 1;
          *(_QWORD*)(v118 + 112) = 0;
          *(_QWORD*)(v118 + 120) = 0;
          *(_QWORD*)(v118 + 96) = v3;
          *(_QWORD*)(v118 + 104) = 0;
          *(_QWORD*)v118 = game_menu_anonymous_EquipInfoItem_Item_vtable;
          *(_QWORD*)(v118 + 8) = 0;
          *(_WORD*)(v118 + 80) = 257;
          *(_DWORD*)(v118 + 40) = v119;
          *(_QWORD*)(v118 + 88) = GameData_2096a58;
          BasicMenuCursor_16e0c00_alt1(a1, v118);
          ++v94;
        }
      }
    }
    if ((int)((((__int64)v154 - v156) >> 2) + (((__int64)v153 - v155) >> 2)) >=
        1) {
      v120 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 160, 16, 0);
      EquipUnitSelectMenuItem_16d25e0_alt1(v120, "MID_Menu_SupportMagic",
                                           "MID_Sys_Remaining", nullptr);
      BasicMenuCursor_16e0c00_alt1(a1, v120);
      v121 = v94 + 1;
      if (v153 != (_DWORD*)v155 && v121 < v46) {
        v122 = (int*)v155;
        v123 = 1;
        do {
          v124 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 128, 16, 0);
          v125 = *v122++;
          *(_WORD*)(v124 + 16) = 0;
          *(_QWORD*)(v124 + 64) = 0;
          *(_QWORD*)(v124 + 72) = 0;
          *(_QWORD*)(v124 + 48) = 0;
          *(_QWORD*)(v124 + 56) = 0;
          *(_WORD*)(v124 + 80) = 257;
          *(_BYTE*)(v124 + 82) = 1;
          *(_QWORD*)(v124 + 112) = 0;
          *(_QWORD*)(v124 + 120) = 0;
          *(_QWORD*)(v124 + 96) = v3;
          *(_QWORD*)(v124 + 104) = 0;
          *(_QWORD*)v124 = game_menu_anonymous_EquipInfoItem_Item_vtable;
          *(_QWORD*)(v124 + 8) = 0;
          *(_DWORD*)(v124 + 40) = v125;
          *(_QWORD*)(v124 + 88) = GameData_2096a58;
          BasicMenuCursor_16e0c00_alt1(a1, v124);
          v126 = v123 + 1;
          if (v151 <= v123) {
            break;
          }
          v127 = v94 + v123++;
        } while (v127 + 1 < v46);
        v121 = v94 + v126;
      }
      if (v154 != (_DWORD*)v156 && v121 < v46) {
        v128 = (int*)v156;
        v129 = 1;
        v130 = v121;
        do {
          v131 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 128, 16, 0);
          v132 = *v128++;
          *(_WORD*)(v131 + 16) = 0;
          *(_QWORD*)(v131 + 64) = 0;
          *(_QWORD*)(v131 + 72) = 0;
          *(_QWORD*)(v131 + 48) = 0;
          *(_QWORD*)(v131 + 56) = 0;
          *(_WORD*)(v131 + 80) = 257;
          *(_BYTE*)(v131 + 82) = 1;
          *(_QWORD*)(v131 + 112) = 0;
          *(_QWORD*)(v131 + 120) = 0;
          *(_QWORD*)(v131 + 96) = v3;
          *(_QWORD*)(v131 + 104) = 0;
          *(_QWORD*)v131 = game_menu_anonymous_EquipInfoItem_Item_vtable;
          *(_QWORD*)(v131 + 8) = 0;
          *(_DWORD*)(v131 + 40) = v132;
          *(_QWORD*)(v131 + 88) = GameData_2096a58;
          BasicMenuCursor_16e0c00_alt1(a1, v131);
          if (v149 <= v129) {
            break;
          }
          v133 = v130 + v129++;
        } while (v133 < v46);
        goto LABEL_172;
      }
    }
  LABEL_171:
    if (v156 != 0) {
      goto LABEL_172;
    }
  }
  if (v155 != 0) {
    v138 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v138 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v138, v155);
  }
  if (v142 != 0) {
    v139 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v139 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v139, v142);
  }
  if (v152 != 0) {
    v140 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v140 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v140, v152);
  }
}

#pragma GCC visibility pop
