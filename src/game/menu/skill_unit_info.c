#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern int GameData_1bf52dc[];
const char* SkillUnitInfo_Unknown36(__int64 a1);
__int64 GameRoutine_6c9540(_QWORD, _QWORD);
__int64 GameRoutine_6c9ab0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6fc510(_QWORD);
__int64 GameRoutine_6fc7a0(_QWORD, _QWORD);
extern __int16* GameData_212cf08[9];
extern __int64 GameData_21c99b0;
__int64
game_menu_SkillUnitInfo_OnAddArtsMenuItem_lambda0_Invoke(__int64 a1,
                                                         unsigned int* a2);
__int64 game_menu_SkillUnitInfo_OnAddSpecialMenuItem_lambda0_Invoke(__int64 a1,
                                                                    int* a2);
_QWORD* BasicMenuCursor_16e0c00(_QWORD* result, __int64);
__attribute__((swiftcall)) void
game_gameui_Util_CollectArtsInfoList(PSEUDO_X8, __int64 result, int, __int64,
                                     char);
__attribute__((swiftcall)) void
game_gameui_Util_CollectBlazeArtsInfo_159cce0(PSEUDO_X8, __int64, __int64);
__int64 GameVariable_828f50(__int64, unsigned __int64*);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_HasSkill(_QWORD*, unsigned int*);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern _QWORD game_g_shared_system_skills_ptr;
extern _UNKNOWN* GameData_212c8a8;
extern __int64 (*GameData_2098c38[])();
extern __int64 (*GameData_2098ee0[])();
extern __int64 (*GameData_2099158[])();
extern __int64 (*GameData_20993e8[])();
extern __int64 (*GameData_2099678[])();
extern __int64 (*GameData_2099908[])();
extern __int64 (*GameData_2099bb0[])();
extern __int64 (*GameData_2099bf0[])();
extern __int64 (*GameData_2099c70[])();
extern __int64 (*anonymous_EquipInfoItem_BarrierItem_vtable[])();
extern __int64 (*anonymous_EquipInfoItem_Barrier_vtable[])();
extern __int64 (*anonymous_EquipInfoItem_DustItem_vtable[])();
extern __int64 (*anonymous_EquipInfoItem_RageInfo_vtable[])();
extern __int64 (*anonymous_EquipInfoItem_SkillEquip_vtable[])();
extern __int64 (*anonymous_EquipInfoItem_Skill_vtable[])();
extern __int64 (*anonymous_EquipInfoItem_SpecialSkill_vtable[])();
extern __int64* GameData_212c880[5];
extern __int64 GameData_2131bc8[3];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
unsigned __int64 EquipUnitSelectMenuItem_16d25e0(__int64, __int64, char*,
                                                 __int64);
__int64 SkillUnitInfo_Unknown137(__int64 result);

const char* SkillUnitInfo_Unknown36(__int64 a1)
{
  if ((unsigned int)*(unsigned __int8*)(a1 + 1072) - 2 > 4) {
    return "L_MenuItem_Skill";
  }
  else {
    return (char*)GameData_1bf52dc +
           GameData_1bf52dc[(unsigned __int8)(*(_BYTE*)(a1 + 1072) - 2)];
  }
}

__int64 SkillUnitInfo_Unknown137(__int64 result)
{
  unsigned int v1;
  __int64 v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  char* v15;
  char v16;
  __int64 v17;
  __int64 v18;
  int v19;
  int v20;
  int v21;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 (**v26)();
  __int64 (**v27)();
  __int64 v28;
  __int64 v29;
  char v30;
  __int64 v31;
  __int64 (**v32)();
  __int64 v33;
  __int64 (**v34)();
  __int64 (**v35)();
  __int64 v36;
  char v37;
  __int64 v38;
  int v39;
  __int64 (***v40)();
  __int64 (***v41)();
  __int64 v42;
  char v43;
  __int64 v44;
  int v45;
  __int64 v46;
  int* v47;
  int* i;
  __int64 v49;
  char v50;
  __int64 v51;
  int v52;
  int v53;
  __int64 v54;
  __int64 v55;
  unsigned __int64* v56;
  __int64* v57;
  __int64 v58;
  int v59;
  __int64 v60;
  char v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  unsigned __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  int* v80;
  __int64 v81;
  __int64 v82;
  char v83;
  __int64 v84;
  int v85;
  int v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  int* v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  struct {
    __int64 (**v98)();
    __int64 (**v99)();
    __int64* v100;
    char gap24_[8];
    __int64* v101;
  } v98_;
  struct {
    __int64 (**v102)();
    __int64 (**v103)();
    char gap64_[8];
    __int64 (***v104)();
    __int64 (***v105)();
    char gap88_[8];
    int* v106;
    int* v107;
  } v102_;
  __int64 v108;

  v1 = *(unsigned __int8*)(result + 1072);
  v2 = result;
  if (v1 <= 2) {
    if (*(_BYTE*)(result + 1072) != 0) {
      if (v1 != 2) {
        return result;
      }
      v3 = (__int64*)fw_memory_g_heap_manager_ptr;
      v4 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 160, 16, 0);
      EquipUnitSelectMenuItem_16d25e0(v4, (__int64)"MID_SysMenu_Arts",
                                      "MID_BtlMenu_WeaponCost", 0);
      BasicMenuCursor_16e0c00((_QWORD*)v2, v4);
      v5 = *(_QWORD*)(v2 + 1064);
      v102_.v102 = GameData_2099bf0;
      v102_.v103 = (__int64 (**)(void))v2;
      v102_.v105 = &v102_.v102;
      game_gameui_Util_CollectArtsInfoList((void*)((__int64*)&v98_.v98), v5, 0,
                                           (__int64)&v102_.v102, 1);
      if (v102_.v105 == &v102_.v102) {
        v6 = 4;
      }
      else {
        if (v102_.v105 == nullptr) {
        LABEL_26:
          v26 = v98_.v98;
          v27 = v98_.v99;
          if (v98_.v98 == v98_.v99) {
            v33 = fw_memory_HeapManager_Allocate(*v3, 88, 16, 0);
            *(_QWORD*)(v33 + 72) = 0;
            *(_QWORD*)(v33 + 80) = 0;
            *(_QWORD*)(v33 + 16) = 0;
            *(_QWORD*)(v33 + 24) = 0;
            *(_QWORD*)(v33 + 32) = 0;
            *(_QWORD*)(v33 + 40) = 0;
            *(_QWORD*)(v33 + 48) = 0;
            *(_QWORD*)(v33 + 56) = 0;
            *(_QWORD*)(v33 + 64) = 0;
            *(_WORD*)(v33 + 80) = 257;
            *(_BYTE*)(v33 + 82) = 1;
            *(_QWORD*)v33 = GameData_2131bc8[0] + 16;
            *(_QWORD*)(v33 + 8) = 0;
            result = (__int64)BasicMenuCursor_16e0c00((_QWORD*)v2, v33);
            v32 = v98_.v98;
            if (v98_.v98 == nullptr) {
              return result;
            }
          }
          else {
            do {
              v28 = (__int64)*v26++;
              v29 = fw_memory_HeapManager_Allocate(*v3, 144, 16, 0);
              v30 = *(_BYTE*)(v2 + 1072);
              v31 = *(_QWORD*)(v2 + 1064);
              *(_WORD*)(v29 + 16) = 0;
              *(_QWORD*)(v29 + 48) = 0;
              *(_QWORD*)(v29 + 56) = 0;
              *(_QWORD*)(v29 + 64) = 0;
              *(_QWORD*)(v29 + 72) = 0;
              *(_WORD*)(v29 + 80) = 257;
              *(_BYTE*)(v29 + 82) = 1;
              *(_QWORD*)(v29 + 104) = 0;
              *(_QWORD*)(v29 + 112) = 0;
              *(_DWORD*)(v29 + 40) = -1;
              *(_DWORD*)(v29 + 132) = v28;
              *(_QWORD*)v29 = anonymous_EquipInfoItem_SkillEquip_vtable;
              *(_QWORD*)(v29 + 8) = 0;
              *(_QWORD*)(v29 + 120) = v2 + 1056;
              *(_BYTE*)(v29 + 136) = (v28 & 0x1000000000000LL) == 0;
              *(_BYTE*)(v29 + 128) = v30;
              *(_QWORD*)(v29 + 88) = GameData_2098c38;
              *(_QWORD*)(v29 + 96) = v31;
              result = (__int64)BasicMenuCursor_16e0c00((_QWORD*)v2, v29);
            } while (v26 != v27);
            v32 = v98_.v98;
            if (v98_.v98 == nullptr) {
              return result;
            }
          }
          v98_.v99 = v32;
        LABEL_88:
          v91 = 128;
          if (*(_QWORD*)(*v3 + 200) == 0) {
            v91 = 56;
          }
          return nn_mem_StandardAllocator_Free(*v3 + v91);
        }
        v6 = 5;
      }
      ((__int64 (*)(__int64))(*v102_.v105)[v6])((__int64)v102_.v105);
      goto LABEL_26;
    }
    v11 = *(_QWORD*)(result + 1064);
    v12 = (__int64*)fw_memory_g_heap_manager_ptr;
    v13 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         160, 16, 0);
    v14 = game_g_shared_system_skills_ptr;
    LODWORD(v102_.v102) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x1A4LL) +
                                     game_g_shared_system_skills_ptr) &
                          0xFFF;
    if ((game_HasSkill((_QWORD*)(v11 + 1744), (unsigned int*)&v102_.v102) &
         1) != 0) {
      v15 = "MID_Sys_WeaponEndure";
    }
    else {
      v15 = nullptr;
    }
    EquipUnitSelectMenuItem_16d25e0(v13, (__int64)"MID_Btl_EnemyDetail_Barrier",
                                    v15, (__int64)"L_BarrierInfo");
    BasicMenuCursor_16e0c00((_QWORD*)v2, v13);
    LODWORD(v102_.v102) =
        *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x1A4LL) + v14) & 0xFFF;
    v16 = game_HasSkill((_QWORD*)(v11 + 1744), (unsigned int*)&v102_.v102);
    v17 = fw_memory_HeapManager_Allocate(*v12, 152, 16, 0);
    v18 = *(_QWORD*)(v2 + 1064);
    v19 = *(_DWORD*)(v11 + 1872);
    v20 = 0;
    v21 = 0;
    if ((v16 & 1) == 0) {
      goto LABEL_53;
    }
    if ((v19 & 0xFFF) == 0 || *(_DWORD*)(v11 + 592) < 1) {
      v59 = 0;
      v20 = 0;
      v21 = 0;
      if ((v19 & 0xFFF) == 0) {
      LABEL_53:
        *(_BYTE*)(v17 + 128) = *(_BYTE*)(v2 + 1072);
        *(_WORD*)(v17 + 16) = 0;
        *(_QWORD*)(v17 + 48) = 0;
        *(_QWORD*)(v17 + 56) = 0;
        *(_QWORD*)(v17 + 64) = 0;
        *(_QWORD*)(v17 + 72) = 0;
        *(_QWORD*)(v17 + 104) = 0;
        *(_QWORD*)(v17 + 112) = 0;
        *(_QWORD*)(v17 + 120) = 0;
        *(_DWORD*)(v17 + 132) = v19;
        *(_WORD*)(v17 + 80) = 257;
        *(_QWORD*)v17 = anonymous_EquipInfoItem_Barrier_vtable;
        *(_QWORD*)(v17 + 8) = 0;
        *(_BYTE*)(v17 + 82) = 1;
        *(_BYTE*)(v17 + 136) = 0;
        *(_DWORD*)(v17 + 140) = v20;
        *(_DWORD*)(v17 + 144) = v21;
        *(_DWORD*)(v17 + 40) = -1;
        *(_QWORD*)(v17 + 88) = GameData_2099908;
        *(_QWORD*)(v17 + 96) = v18;
        result = (__int64)BasicMenuCursor_16e0c00((_QWORD*)v2, v17);
        v60 = *(_QWORD*)(v11 + 440);
        if (v60 != 0) {
          v61 = *(_BYTE*)(v60 + 16);
        }
        else {
          v61 = 9;
        }
        if (((1 << v61) & 0xF1) == 0) {
          v62 = *(_QWORD*)(*(_QWORD*)(v11 + 392) + 320LL);
          if ((v62 != 0 ||
               (v62 = *(_QWORD*)(*(_QWORD*)(v11 + 400) + 280LL)) != 0) &&
              *(unsigned __int8*)(v11 + 624) <= 2u) {
            v63 = v62 + 48LL * *(unsigned __int8*)(v11 + 624);
            if (*(_WORD*)(v63 + 48) != 0) {
              v64 = fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 160, 16, 0);
              EquipUnitSelectMenuItem_16d25e0(
                  v64, (__int64)"MID_Btl_EnemyDetail_BarrierItem", nullptr,
                  (__int64)"L_BarrierItemInfo");
              result = (__int64)BasicMenuCursor_16e0c00((_QWORD*)v2, v64);
              v65 = *(unsigned __int16*)(v63 + 48);
              if (*(_WORD*)(v63 + 48) != 0) {
                v66 = 8;
                v67 = 0;
                do {
                  v68 = *(_QWORD*)(*(_QWORD*)(v63 + 56) + v66);
                  v69 = fw_memory_HeapManager_Allocate(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr, 136, 16, 0);
                  *(_WORD*)(v69 + 16) = 0;
                  *(_QWORD*)(v69 + 48) = 0;
                  *(_QWORD*)(v69 + 56) = 0;
                  *(_QWORD*)(v69 + 64) = 0;
                  *(_QWORD*)(v69 + 72) = 0;
                  *(_BYTE*)(v69 + 82) = 1;
                  *(_QWORD*)(v69 + 104) = 0;
                  *(_QWORD*)(v69 + 112) = 0;
                  *(_DWORD*)(v69 + 40) = v67;
                  *(_QWORD*)v69 = anonymous_EquipInfoItem_BarrierItem_vtable;
                  *(_QWORD*)(v69 + 8) = 0;
                  *(_QWORD*)(v69 + 120) = 0;
                  *(_QWORD*)(v69 + 128) = v68;
                  *(_WORD*)(v69 + 80) = 257;
                  *(_QWORD*)(v69 + 88) = GameData_2099bb0;
                  *(_QWORD*)(v69 + 96) = v11;
                  result = (__int64)BasicMenuCursor_16e0c00((_QWORD*)v2, v69);
                  v66 += 16;
                  ++v67;
                } while (v65 != v67);
              }
            }
          }
        }
        return result;
      }
    }
    else {
      v59 = *(char*)(*(_QWORD*)(v11 + 600) + 2LL);
    }
    v20 = v59;
    v21 = *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                                         8LL * (v19 & 0xFFF)) +
                              273LL);
    goto LABEL_53;
  }
  if (v1 != 3) {
    if (v1 == 6) {
      v7 = (__int64*)fw_memory_g_heap_manager_ptr;
      v8 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 160, 16, 0);
      EquipUnitSelectMenuItem_16d25e0(v8, (__int64)"MID_BtlMenu_Rage",
                                      "MID_Sys_Remaining", 0);
      BasicMenuCursor_16e0c00((_QWORD*)v2, v8);
      v9 = fw_memory_HeapManager_Allocate(*v7, 144, 16, 0);
      v10 = *(_QWORD*)(v2 + 1064);
      *(_WORD*)(v9 + 16) = 0;
      *(_QWORD*)(v9 + 48) = 0;
      *(_QWORD*)(v9 + 56) = 0;
      *(_QWORD*)(v9 + 64) = 0;
      *(_QWORD*)(v9 + 72) = 0;
      *(_QWORD*)(v9 + 104) = 0;
      *(_QWORD*)(v9 + 112) = 0;
      *(_QWORD*)(v9 + 120) = 0;
      *(_DWORD*)(v9 + 132) = 0;
      *(_BYTE*)(v9 + 136) = 0;
      *(_WORD*)(v9 + 80) = 257;
      *(_BYTE*)(v9 + 82) = 1;
      *(_DWORD*)(v9 + 40) = -1;
      *(_BYTE*)(v9 + 128) = 6;
      *(_QWORD*)v9 = anonymous_EquipInfoItem_RageInfo_vtable;
      *(_QWORD*)(v9 + 8) = 0;
      *(_QWORD*)(v9 + 88) = GameData_2099678;
      *(_QWORD*)(v9 + 96) = v10;
      return (__int64)BasicMenuCursor_16e0c00((_QWORD*)v2, v9);
    }
    return result;
  }
  v3 = (__int64*)fw_memory_g_heap_manager_ptr;
  v23 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       160, 16, 0);
  EquipUnitSelectMenuItem_16d25e0(v23, (__int64)"MID_BtlMenu_Special",
                                  "MID_BtlMenu_ConsumeHp", 0);
  BasicMenuCursor_16e0c00((_QWORD*)v2, v23);
  v24 = *(_QWORD*)(v2 + 1064);
  v98_.v98 = GameData_2099c70;
  v98_.v99 = (__int64 (**)(void))v2;
  v98_.v101 = (__int64*)&v98_.v98;
  v98_.v100 = &v108;
  v108 = v24;
  game_gameui_Util_CollectBlazeArtsInfo_159cce0((void*)(&v102_.v102), v24,
                                                (__int64)&v98_.v98);
  if (v98_.v101 == (__int64*)&v98_.v98) {
    v25 = 32;
  }
  else {
    if (v98_.v101 == nullptr) {
      goto LABEL_34;
    }
    v25 = 40;
  }
  (*(void (**)(__int64))(*v98_.v101 + v25))((__int64)v98_.v101);
LABEL_34:
  v34 = v102_.v102;
  v35 = v102_.v103;
  if (v102_.v102 != v102_.v103) {
    do {
      v36 = fw_memory_HeapManager_Allocate(*v3, 144, 16, 0);
      v37 = *(_BYTE*)(v2 + 1072);
      v38 = v108;
      *(_WORD*)(v36 + 16) = 0;
      *(_QWORD*)(v36 + 48) = 0;
      *(_QWORD*)(v36 + 56) = 0;
      *(_QWORD*)(v36 + 64) = 0;
      *(_QWORD*)(v36 + 72) = 0;
      *(_WORD*)(v36 + 80) = 257;
      *(_BYTE*)(v36 + 82) = 1;
      *(_QWORD*)(v36 + 104) = 0;
      *(_QWORD*)(v36 + 112) = 0;
      *(_QWORD*)(v36 + 120) = 0;
      *(_DWORD*)(v36 + 40) = -1;
      *(_QWORD*)v36 = anonymous_EquipInfoItem_Skill_vtable;
      *(_QWORD*)(v36 + 8) = 0;
      *(_QWORD*)(v36 + 88) = GameData_2098ee0;
      *(_QWORD*)(v36 + 96) = v38;
      *(_BYTE*)(v36 + 128) = v37;
      v39 = *(_DWORD*)v34;
      v34 = (__int64 (**)(void))((char*)v34 + 4);
      *(_BYTE*)(v36 + 136) = 0;
      *(_DWORD*)(v36 + 132) = v39;
      result = (__int64)BasicMenuCursor_16e0c00((_QWORD*)v2, v36);
    } while (v34 != v35);
    v40 = v102_.v104;
    v41 = v102_.v105;
    if (v102_.v104 == v102_.v105) {
      goto LABEL_40;
    }
    goto LABEL_39;
  }
  v40 = v102_.v104;
  v41 = v102_.v105;
  if (v102_.v104 != v102_.v105) {
    do {
    LABEL_39:
      v42 = fw_memory_HeapManager_Allocate(*v3, 144, 16, 0);
      v43 = *(_BYTE*)(v2 + 1072);
      v44 = v108;
      *(_WORD*)(v42 + 16) = 0;
      *(_QWORD*)(v42 + 48) = 0;
      *(_QWORD*)(v42 + 56) = 0;
      *(_QWORD*)(v42 + 64) = 0;
      *(_QWORD*)(v42 + 72) = 0;
      *(_WORD*)(v42 + 80) = 257;
      *(_BYTE*)(v42 + 82) = 1;
      *(_QWORD*)(v42 + 104) = 0;
      *(_QWORD*)(v42 + 112) = 0;
      *(_QWORD*)(v42 + 120) = 0;
      *(_DWORD*)(v42 + 40) = -1;
      *(_QWORD*)v42 = anonymous_EquipInfoItem_Skill_vtable;
      *(_QWORD*)(v42 + 8) = 0;
      *(_QWORD*)(v42 + 88) = GameData_2098ee0;
      *(_QWORD*)(v42 + 96) = v44;
      *(_BYTE*)(v42 + 128) = v43;
      v45 = *(_DWORD*)v40;
      v40 = (__int64 (***)(void))((char*)v40 + 4);
      *(_BYTE*)(v42 + 136) = 1;
      *(_DWORD*)(v42 + 132) = v45;
      result = (__int64)BasicMenuCursor_16e0c00((_QWORD*)v2, v42);
    } while (v40 != v41);
    goto LABEL_40;
  }
  v93 = fw_memory_HeapManager_Allocate(*v3, 88, 16, 0);
  *(_QWORD*)(v93 + 72) = 0;
  *(_QWORD*)(v93 + 80) = 0;
  *(_QWORD*)(v93 + 16) = 0;
  *(_QWORD*)(v93 + 24) = 0;
  *(_QWORD*)(v93 + 32) = 0;
  *(_QWORD*)(v93 + 40) = 0;
  *(_QWORD*)(v93 + 48) = 0;
  *(_QWORD*)(v93 + 56) = 0;
  *(_QWORD*)(v93 + 64) = 0;
  *(_WORD*)(v93 + 80) = 257;
  *(_BYTE*)(v93 + 82) = 1;
  *(_QWORD*)v93 = GameData_2131bc8[0] + 16;
  *(_QWORD*)(v93 + 8) = 0;
  result = (__int64)BasicMenuCursor_16e0c00((_QWORD*)v2, v93);
LABEL_40:
  if (v102_.v106 != v102_.v107) {
    v46 = fw_memory_HeapManager_Allocate(*v3, 160, 16, 0);
    EquipUnitSelectMenuItem_16d25e0(v46, (__int64)"MID_BtlMenu_SpecialGauge",
                                    nullptr, (__int64)"L_SpecialGauge");
    result = (__int64)BasicMenuCursor_16e0c00((_QWORD*)v2, v46);
    v47 = v102_.v106;
    for (i = v102_.v107; v47 != i;
         result = (__int64)BasicMenuCursor_16e0c00((_QWORD*)v2, v49)) {
      v49 = fw_memory_HeapManager_Allocate(*v3, 144, 16, 0);
      v50 = *(_BYTE*)(v2 + 1072);
      v51 = v108;
      v52 = *(_DWORD*)(*(_QWORD*)(v2 + 1064) + 592LL);
      *(_QWORD*)(v49 + 8) = 0;
      *(_WORD*)(v49 + 16) = 0;
      *(_QWORD*)(v49 + 64) = 0;
      *(_QWORD*)(v49 + 72) = 0;
      *(_QWORD*)(v49 + 48) = 0;
      *(_QWORD*)(v49 + 56) = 0;
      *(_WORD*)(v49 + 80) = 257;
      *(_BYTE*)(v49 + 82) = 1;
      *(_QWORD*)(v49 + 112) = 0;
      *(_QWORD*)(v49 + 120) = 0;
      *(_QWORD*)(v49 + 96) = v51;
      *(_QWORD*)(v49 + 104) = 0;
      *(_DWORD*)(v49 + 40) = -1;
      *(_BYTE*)(v49 + 128) = v50;
      v53 = *v47++;
      *(_QWORD*)v49 = anonymous_EquipInfoItem_SpecialSkill_vtable;
      *(_DWORD*)(v49 + 132) = v53;
      *(_BYTE*)(v49 + 136) = v52 > 1;
      *(_QWORD*)(v49 + 88) = GameData_2099158;
    }
  }
  v54 = *(_QWORD*)(v108 + 392);
  if (v54 != 0 && *(_WORD*)(v54 + 408) != 0) {
    v55 = *(_QWORD*)(v54 + 24);
    v56 = *(unsigned __int64**)(v55 + 1792);
    v57 = *(__int64**)(v55 + 1800);
    if (v56 != (unsigned __int64*)v57) {
      while (v56[1] != 0) {
        v58 = game_GameModeData_instance_;
        if (game_GameModeData_instance_ != 0) {
          result =
              GameVariable_828f50(game_GameModeData_instance_ + 40, v56 + 1);
        }
        if (*((_BYTE*)v56 + 24) == ((v58 == 0) | result & 1)) {
          break;
        }
        v56 += 4;
        if (v56 == (unsigned __int64*)v57) {
          goto LABEL_69;
        }
      }
      v70 = *v56;
      if (*v56 != 0) {
        v71 = fw_memory_HeapManager_Allocate(*v3, 160, 16, 0);
        EquipUnitSelectMenuItem_16d25e0(v71, (__int64)"MID_Sys_BlazeOrigin",
                                        nullptr, 0);
        BasicMenuCursor_16e0c00((_QWORD*)v2, v71);
        v72 = fw_memory_HeapManager_Allocate(*v3, 136, 16, 0);
        v73 = v108;
        v74 = v72;
        if (*(_QWORD*)(v108 + 408) == 0) {
          v75 = *(_QWORD*)(v108 + 392);
          if (v75 == 0) {
            goto LABEL_68;
          }
          if (*(_WORD*)(v75 + 408) != 0) {
            v94 = *(_QWORD*)(v75 + 24);
            v95 = *(_QWORD*)(v94 + 1792);
            v96 = *(_QWORD*)(v94 + 1800);
            if (v95 != v96) {
              while (*(_QWORD*)(v95 + 8) != 0) {
                v97 = game_GameModeData_instance_;
                if (game_GameModeData_instance_ != 0) {
                  LOBYTE(v72) =
                      GameVariable_828f50(game_GameModeData_instance_ + 40,
                                          (unsigned __int64*)(v95 + 8));
                }
                if (*(_BYTE*)(v95 + 24) == ((v97 == 0) | v72 & 1)) {
                  break;
                }
                v95 += 32;
                if (v95 == v96) {
                  goto LABEL_67;
                }
              }
              LOBYTE(v75) = *(_QWORD*)v95 != 0;
              goto LABEL_68;
            }
          }
        }
      LABEL_67:
        LOBYTE(v75) = 0;
      LABEL_68:
        *(_WORD*)(v74 + 16) = 0;
        *(_QWORD*)(v74 + 48) = 0;
        *(_QWORD*)(v74 + 56) = 0;
        *(_QWORD*)(v74 + 64) = 0;
        *(_QWORD*)(v74 + 72) = 0;
        *(_QWORD*)(v74 + 104) = 0;
        *(_QWORD*)(v74 + 112) = 0;
        *(_DWORD*)(v74 + 40) = 0;
        *(_QWORD*)(v74 + 120) = 0;
        *(_QWORD*)(v74 + 128) = v70;
        *(_BYTE*)(v74 + 82) = v75;
        *(_WORD*)(v74 + 80) = 257;
        *(_QWORD*)v74 = anonymous_EquipInfoItem_DustItem_vtable;
        *(_QWORD*)(v74 + 8) = 0;
        *(_QWORD*)(v74 + 88) = GameData_20993e8;
        *(_QWORD*)(v74 + 96) = v73;
        result = (__int64)BasicMenuCursor_16e0c00((_QWORD*)v2, v74);
      }
    }
  }
LABEL_69:
  if ((*(_BYTE*)(v108 + 1837) & 0x40) == 0 ||
      (v76 = *(_QWORD*)(v108 + 1784), v77 = *(_QWORD*)(v108 + 1776),
       v76 == v77)) {
    v80 = (int*)GameData_212c8a8;
  }
  else {
    v78 = (v76 - v77) >> 2;
    v79 = 0;
    v80 = (int*)GameData_212c8a8;
    while (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                                8LL * (*(_DWORD*)(v77 + 4 * v79) & 0xFFF)) +
                     250LL) != 46) {
      if (v78 == ++v79) {
        goto LABEL_76;
      }
    }
    v92 = (int*)(v77 + 4LL * (unsigned int)v79);
    if (v79 > -1) {
      v80 = v92;
    }
  }
LABEL_76:
  if ((*(_WORD*)v80 & 0xFFF) != 0) {
    v81 = fw_memory_HeapManager_Allocate(*v3, 160, 16, 0);
    EquipUnitSelectMenuItem_16d25e0(v81, (__int64)"MID_Sys_BlazeSkill", nullptr,
                                    0);
    BasicMenuCursor_16e0c00((_QWORD*)v2, v81);
    v82 = fw_memory_HeapManager_Allocate(*v3, 144, 16, 0);
    v83 = *(_BYTE*)(v2 + 1072);
    v84 = v108;
    v85 = *(_DWORD*)(*(_QWORD*)(v2 + 1064) + 592LL);
    *(_WORD*)(v82 + 80) = 257;
    *(_WORD*)(v82 + 16) = 0;
    *(_QWORD*)(v82 + 64) = 0;
    *(_QWORD*)(v82 + 72) = 0;
    *(_QWORD*)(v82 + 48) = 0;
    *(_QWORD*)(v82 + 56) = 0;
    *(_QWORD*)(v82 + 112) = 0;
    *(_QWORD*)(v82 + 120) = 0;
    *(_QWORD*)(v82 + 96) = v84;
    *(_QWORD*)(v82 + 104) = 0;
    *(_BYTE*)(v82 + 128) = v83;
    *(_BYTE*)(v82 + 82) = 1;
    *(_DWORD*)(v82 + 40) = -1;
    *(_QWORD*)v82 = anonymous_EquipInfoItem_Skill_vtable;
    *(_QWORD*)(v82 + 8) = 0;
    *(_QWORD*)(v82 + 88) = GameData_2098ee0;
    v86 = *v80;
    *(_BYTE*)(v82 + 136) = v85 > 1;
    *(_DWORD*)(v82 + 132) = v86;
    result = (__int64)BasicMenuCursor_16e0c00((_QWORD*)v2, v82);
  }
  if (v102_.v106 != nullptr) {
    v87 = *v3;
    v102_.v107 = v102_.v106;
    v88 = 128;
    if (*(_QWORD*)(v87 + 200) == 0) {
      v88 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v87 + v88);
  }
  if (v102_.v104 != nullptr) {
    v89 = *v3;
    v102_.v105 = v102_.v104;
    v90 = 128;
    if (*(_QWORD*)(v89 + 200) == 0) {
      v90 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v89 + v90);
  }
  if (v102_.v102 != nullptr) {
    v102_.v103 = v102_.v102;
    goto LABEL_88;
  }
  return result;
}

__int64

game_menu_SkillUnitInfo_OnAddArtsMenuItem_lambda0_Invoke(__int64 a1,
                                                         unsigned int* a2)
{
  __int64 v2;
  unsigned int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  int v9;
  int v10;
  int v11;
  __int64 v12;
  _WORD* v13;
  unsigned int v15;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *a2;
  v4 = *(_QWORD*)(v2 + 1064);
  v15 = *a2;
  if (v4 != 0 && (v5 = v3 & 0xFFF, (v3 & 0xFFF) != 0) &&
      (v6 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) + 8 * v5),
       (GameRoutine_6fc510(v6) & 1) == 0) &&
      (*(_BYTE*)(v6 + 273) == 0 ||
       ((v7 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) + 8 * v5),
         v8 = *(unsigned __int8*)(v7 + 104), v9 = *(unsigned __int8*)(v7 + 273),
         (unsigned int)(v8 - 5) >= 2)
            ? (v10 = 0)
            : (v10 = (v3 >> 19) & 0x1F),
        (int)(v10 - ((v3 >> 12) & 0x7F) + v9) >= 1)) &&
      (GameRoutine_6fc7a0(v6, v4 + 1840) & 1) != 0) {
    LOBYTE(v11) = 1;
    v12 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) + 8 * v5);
    if ((((unsigned __int16)*GameData_212cf08[0] >> *(_BYTE*)(v12 + 104)) &
         1) != 0 &&
        *(_QWORD*)(v12 + 576) == 0 && *(_WORD*)(v12 + 136) != 0) {
      v13 = *(_WORD**)(v2 + 1064);
      if (v13[414] != 0) {
        v11 = GameRoutine_6c9ab0(v13, &v15, v13 + 414);
        v13 = *(_WORD**)(v2 + 1064);
      }
      else {
        v11 = 0;
      }
      if (v13[418] != 0) {
        v11 |= GameRoutine_6c9ab0(v13, &v15, v13 + 418);
        v13 = *(_WORD**)(v2 + 1064);
      }
      if (v13[422] != 0) {
        v11 |= GameRoutine_6c9ab0(v13, &v15, v13 + 422);
        v13 = *(_WORD**)(v2 + 1064);
      }
      if (v13[426] != 0) {
        v11 |= GameRoutine_6c9ab0(v13, &v15, v13 + 426);
        v13 = *(_WORD**)(v2 + 1064);
      }
      if (v13[430] != 0) {
        v11 |= GameRoutine_6c9ab0(v13, &v15, v13 + 430);
        v13 = *(_WORD**)(v2 + 1064);
      }
      if (v13[434] != 0) {
        LOBYTE(v11) = GameRoutine_6c9ab0(v13, &v15, v13 + 434) | v11;
      }
    }
  }
  else {
    LOBYTE(v11) = 0;
  }
  return v11 & 1;
}

__int64 game_menu_SkillUnitInfo_OnAddSpecialMenuItem_lambda0_Invoke(__int64 a1,
                                                                    int* a2)
{
  _QWORD* v2;
  int v3;
  char v4;
  int v6;

  v2 = *(_QWORD**)(a1 + 16);
  v3 = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 1064LL) + 592LL);
  v6 = *a2;
  if (v3 <= 1) {
    v4 = GameRoutine_6c9540(*v2, &v6);
  }
  else {
    v4 = 0;
  }
  return v4 & 1;
}

#pragma GCC visibility pop
