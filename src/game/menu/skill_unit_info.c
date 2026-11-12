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
__int64 SkillUnitInfo_Unknown137_alt1(__int64 result) __asm__(
    "SkillUnitInfo_Unknown137");
extern int* GameData_212c8a8_alt1[22] __asm__("GameData_212c8a8");
unsigned __int64 EquipUnitSelectMenuItem_16d25e0_alt1(
    __int64, const char*, const char*,
    const char*) __asm__("EquipUnitSelectMenuItem_16d25e0");
void BasicMenuCursor_16e0c00_alt1(_QWORD*,
                                  __int64) __asm__("BasicMenuCursor_16e0c00");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void SkillUnitInfo_Unknown137(__int64 a1);

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

void SkillUnitInfo_Unknown137(__int64 a1)
{
  unsigned int v1;
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
  const char* v15;
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
  __int64 v32;
  __int64 v33;
  __int64 (**v34)();
  __int64 (**v35)();
  __int64 v36;
  char v37;
  __int64 v38;
  int v39;
  char v40;
  __int64 (***v41)();
  __int64 (***v42)();
  __int64 v43;
  char v44;
  __int64 v45;
  int v46;
  __int64 v47;
  int* v48;
  int* v49;
  __int64 v50;
  char v51;
  __int64 v52;
  int v53;
  int v54;
  __int64 v55;
  __int64 v56;
  unsigned __int64* v57;
  __int64* v58;
  __int64 v59;
  int v60;
  __int64 v61;
  char v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  unsigned __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  int* v81;
  __int64 v82;
  __int64 v83;
  char v84;
  __int64 v85;
  int v86;
  int v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  int* v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  struct {
    __int64 (**v99)();
    __int64 (**v100)();
    __int64* v101;
    char gap24_[8];
    __int64* v102;
  } v99_;
  struct {
    __int64 (**v103)();
    __int64 (**v104)();
    char gap64_[8];
    __int64 (***v105)();
    __int64 (***v106)();
    char gap88_[8];
    int* v107;
    __int64 v108;
  } v103_;
  __int64 v109;

  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v1 = *(unsigned __int8*)(a1 + 1072);
  if (v1 <= 2) {
    if (*(_BYTE*)(a1 + 1072) != 0) {
      if (v1 != 2) {
        return;
      }
      v3 = (__int64*)fw_memory_g_heap_manager_ptr;
      v4 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 160, 16, 0),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      EquipUnitSelectMenuItem_16d25e0_alt1(v4, "MID_SysMenu_Arts",
                                           "MID_BtlMenu_WeaponCost", nullptr),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      BasicMenuCursor_16e0c00_alt1((_QWORD*)a1, v4),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      v5 = *(_QWORD*)(a1 + 1064);
      v103_.v103 = GameData_2099bf0;
      v103_.v104 = (__int64 (**)(void))a1,
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      v103_.v106 = &v103_.v103;
      game_gameui_Util_CollectArtsInfoList((void*)((__int64*)&v99_.v99), v5, 0,
                                           (__int64)&v103_.v103, 1),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      if (v103_.v106 == &v103_.v103) {
        v6 = 4;
      }
      else {
        if (v103_.v106 == nullptr) {
        LABEL_26:
          v26 = v99_.v99;
          v27 = v99_.v100;
          if (v99_.v99 == v99_.v100) {
            v33 = fw_memory_HeapManager_Allocate(*v3, 88, 16, 0),
            v40 = COERCE_AS(__typeof__(v40),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
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
            BasicMenuCursor_16e0c00_alt1((_QWORD*)a1, v33),
                v40 =
                    COERCE_AS(__typeof__(v40),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
            v32 = (__int64)v99_.v99;
            if (v99_.v99 == nullptr) {
              return;
            }
          }
          else {
            do {
              v28 = (__int64)*v26++;
              v29 = fw_memory_HeapManager_Allocate(*v3, 144, 16, 0),
              v40 = COERCE_AS(__typeof__(v40),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
              v30 = *(_BYTE*)(a1 + 1072);
              v31 = *(_QWORD*)(a1 + 1064);
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
              *(_QWORD*)(v29 + 120) = a1 + 1056;
              *(_BYTE*)(v29 + 136) = (v28 & 0x1000000000000LL) == 0;
              *(_BYTE*)(v29 + 128) = v30;
              *(_QWORD*)(v29 + 88) = GameData_2098c38;
              *(_QWORD*)(v29 + 96) = v31;
              BasicMenuCursor_16e0c00_alt1((_QWORD*)a1, v29),
                  v40 = COERCE_AS(
                      __typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
            } while (v26 != v27);
            v32 = (__int64)v99_.v99;
            if (v99_.v99 == nullptr) {
              return;
            }
          }
          v99_.v100 = (__int64 (**)(void))v32,
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        LABEL_88:
          v92 = 128;
          if (*(_QWORD*)(*v3 + 200) == 0) {
            v92 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v3 + v92, v32),
              v40 = COERCE_AS(__typeof__(v40),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
          return;
        }
        v6 = 5;
      }
      ((__int64 (*)(__int64))(*v103_.v106)[v6])((__int64)v103_.v106),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      goto LABEL_26;
    }
    v11 = *(_QWORD*)(a1 + 1064);
    v12 = (__int64*)fw_memory_g_heap_manager_ptr;
    v13 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         160, 16, 0),
    v40 = COERCE_AS(__typeof__(v40),
                    PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    v14 = game_g_shared_system_skills_ptr;
    LODWORD(v103_.v103) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x1A4LL) +
                                     game_g_shared_system_skills_ptr) &
                          0xFFF;
    if ((game_HasSkill((_QWORD*)(v11 + 1744), (unsigned int*)&v103_.v103) &
         1) != 0) {
      v15 = "MID_Sys_WeaponEndure";
    }
    else {
      v15 = nullptr;
    }
    EquipUnitSelectMenuItem_16d25e0_alt1(v13, "MID_Btl_EnemyDetail_Barrier",
                                         v15, "L_BarrierInfo"),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    BasicMenuCursor_16e0c00_alt1((_QWORD*)a1, v13),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    LODWORD(v103_.v103) =
        *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x1A4LL) + v14) & 0xFFF;
    v16 = game_HasSkill((_QWORD*)(v11 + 1744), (unsigned int*)&v103_.v103),
    v40 = COERCE_AS(__typeof__(v40),
                    PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    v17 = fw_memory_HeapManager_Allocate(*v12, 152, 16, 0),
    v40 = COERCE_AS(__typeof__(v40),
                    PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    v18 = *(_QWORD*)(a1 + 1064);
    v19 = *(_DWORD*)(v11 + 1872);
    v20 = 0;
    v21 = 0;
    if ((v16 & 1) == 0) {
      goto LABEL_53;
    }
    if ((v19 & 0xFFF) == 0 || (signed __int32)*(_DWORD*)(v11 + 592) < 1) {
      v60 = 0;
      v20 = 0;
      v21 = 0;
      if ((v19 & 0xFFF) == 0) {
      LABEL_53:
        *(_BYTE*)(v17 + 128) = *(_BYTE*)(a1 + 1072);
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
        BasicMenuCursor_16e0c00_alt1((_QWORD*)a1, v17),
            v40 = COERCE_AS(__typeof__(v40),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        v61 = *(_QWORD*)(v11 + 440);
        if (v61 != 0) {
          v62 = *(_BYTE*)(v61 + 16);
        }
        else {
          v62 = 9;
        }
        if (((1 << v62) & 0xF1) == 0) {
          v63 = *(_QWORD*)(*(_QWORD*)(v11 + 392) + 320LL);
          if ((v63 != 0 ||
               (v63 = *(_QWORD*)(*(_QWORD*)(v11 + 400) + 280LL)) != 0) &&
              *(unsigned __int8*)(v11 + 624) <= 2u) {
            v64 = v63 + 48LL * *(unsigned __int8*)(v11 + 624);
            if (*(_WORD*)(v64 + 48) != 0) {
              v65 = fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 160, 16, 0),
              v40 = COERCE_AS(__typeof__(v40),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
              EquipUnitSelectMenuItem_16d25e0_alt1(
                  v65, "MID_Btl_EnemyDetail_BarrierItem", nullptr,
                  "L_BarrierItemInfo"),
                  v40 = COERCE_AS(
                      __typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
              BasicMenuCursor_16e0c00_alt1((_QWORD*)a1, v65),
                  v40 = COERCE_AS(
                      __typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
              v66 = *(unsigned __int16*)(v64 + 48);
              if (*(_WORD*)(v64 + 48) != 0) {
                v67 = 8;
                v68 = 0;
                do {
                  v69 = *(_QWORD*)(*(_QWORD*)(v64 + 56) + v67);
                  v70 = fw_memory_HeapManager_Allocate(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr, 136, 16, 0),
                  v40 = COERCE_AS(
                      __typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                  *(_WORD*)(v70 + 16) = 0;
                  *(_QWORD*)(v70 + 48) = 0;
                  *(_QWORD*)(v70 + 56) = 0;
                  *(_QWORD*)(v70 + 64) = 0;
                  *(_QWORD*)(v70 + 72) = 0;
                  *(_BYTE*)(v70 + 82) = 1;
                  *(_QWORD*)(v70 + 104) = 0;
                  *(_QWORD*)(v70 + 112) = 0;
                  *(_DWORD*)(v70 + 40) = v68;
                  *(_QWORD*)v70 = anonymous_EquipInfoItem_BarrierItem_vtable;
                  *(_QWORD*)(v70 + 8) = 0;
                  *(_QWORD*)(v70 + 120) = 0;
                  *(_QWORD*)(v70 + 128) = v69;
                  *(_WORD*)(v70 + 80) = 257;
                  *(_QWORD*)(v70 + 88) = GameData_2099bb0;
                  *(_QWORD*)(v70 + 96) = v11;
                  BasicMenuCursor_16e0c00_alt1((_QWORD*)a1, v70),
                      v40 = COERCE_AS(
                          __typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                  v67 += 16;
                  ++v68;
                } while (v66 != v68);
              }
            }
          }
        }
        return;
      }
    }
    else {
      v60 = *(char*)(*(_QWORD*)(v11 + 600) + 2LL);
    }
    v20 = v60;
    v21 = *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                                         8LL * (v19 & 0xFFF)) +
                              273LL);
    goto LABEL_53;
  }
  if (v1 != 3) {
    if (v1 == 6) {
      v7 = (__int64*)fw_memory_g_heap_manager_ptr;
      v8 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 160, 16, 0),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      EquipUnitSelectMenuItem_16d25e0_alt1(v8, "MID_BtlMenu_Rage",
                                           "MID_Sys_Remaining", nullptr),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      BasicMenuCursor_16e0c00_alt1((_QWORD*)a1, v8),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      v9 = fw_memory_HeapManager_Allocate(*v7, 144, 16, 0),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      v10 = *(_QWORD*)(a1 + 1064);
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
      BasicMenuCursor_16e0c00_alt1((_QWORD*)a1, v9),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    }
    return;
  }
  v3 = (__int64*)fw_memory_g_heap_manager_ptr;
  v23 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       160, 16, 0),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  EquipUnitSelectMenuItem_16d25e0_alt1(v23, "MID_BtlMenu_Special",
                                       "MID_BtlMenu_ConsumeHp", nullptr),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  BasicMenuCursor_16e0c00_alt1((_QWORD*)a1, v23),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v24 = *(_QWORD*)(a1 + 1064);
  v99_.v99 = GameData_2099c70;
  v99_.v100 = (__int64 (**)(void))a1,
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v99_.v102 = (__int64*)&v99_.v99;
  v99_.v101 = &v109;
  v109 = v24;
  game_gameui_Util_CollectBlazeArtsInfo_159cce0((void*)(&v103_.v103), v24,
                                                (__int64)&v99_.v99),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if (v99_.v102 == (__int64*)&v99_.v99) {
    v25 = 32;
  }
  else {
    if (v99_.v102 == nullptr) {
      goto LABEL_34;
    }
    v25 = 40;
  }
  (*(void (**)(__int64))(*v99_.v102 + v25))((__int64)v99_.v102),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
LABEL_34:
  v34 = v103_.v103;
  v35 = v103_.v104;
  if (v103_.v103 != v103_.v104) {
    do {
      v36 = fw_memory_HeapManager_Allocate(*v3, 144, 16, 0),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      v37 = *(_BYTE*)(a1 + 1072);
      v38 = v109;
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
      v34 = (__int64 (**)(void))((char*)v34 + 4),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      *(_BYTE*)(v36 + 136) = 0;
      *(_DWORD*)(v36 + 132) = v39;
      BasicMenuCursor_16e0c00_alt1((_QWORD*)a1, v36),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    } while (v34 != v35);
    v41 = v103_.v105;
    v42 = v103_.v106;
    if (v103_.v105 == v103_.v106) {
      goto LABEL_40;
    }
    goto LABEL_39;
  }
  v41 = v103_.v105;
  v42 = v103_.v106;
  if (v103_.v105 != v103_.v106) {
    do {
    LABEL_39:
      v43 = fw_memory_HeapManager_Allocate(*v3, 144, 16, 0),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      v44 = *(_BYTE*)(a1 + 1072);
      v45 = v109;
      *(_WORD*)(v43 + 16) = 0;
      *(_QWORD*)(v43 + 48) = 0;
      *(_QWORD*)(v43 + 56) = 0;
      *(_QWORD*)(v43 + 64) = 0;
      *(_QWORD*)(v43 + 72) = 0;
      *(_WORD*)(v43 + 80) = 257;
      *(_BYTE*)(v43 + 82) = 1;
      *(_QWORD*)(v43 + 104) = 0;
      *(_QWORD*)(v43 + 112) = 0;
      *(_QWORD*)(v43 + 120) = 0;
      *(_DWORD*)(v43 + 40) = -1;
      *(_QWORD*)v43 = anonymous_EquipInfoItem_Skill_vtable;
      *(_QWORD*)(v43 + 8) = 0;
      *(_QWORD*)(v43 + 88) = GameData_2098ee0;
      *(_QWORD*)(v43 + 96) = v45;
      *(_BYTE*)(v43 + 128) = v44;
      v46 = *(_DWORD*)v41;
      v41 = (__int64 (***)(void))((char*)v41 + 4),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      *(_BYTE*)(v43 + 136) = 1;
      *(_DWORD*)(v43 + 132) = v46;
      BasicMenuCursor_16e0c00_alt1((_QWORD*)a1, v43),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    } while (v41 != v42);
    goto LABEL_40;
  }
  v94 = fw_memory_HeapManager_Allocate(*v3, 88, 16, 0),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  *(_QWORD*)(v94 + 72) = 0;
  *(_QWORD*)(v94 + 80) = 0;
  *(_QWORD*)(v94 + 16) = 0;
  *(_QWORD*)(v94 + 24) = 0;
  *(_QWORD*)(v94 + 32) = 0;
  *(_QWORD*)(v94 + 40) = 0;
  *(_QWORD*)(v94 + 48) = 0;
  *(_QWORD*)(v94 + 56) = 0;
  *(_QWORD*)(v94 + 64) = 0;
  *(_WORD*)(v94 + 80) = 257;
  *(_BYTE*)(v94 + 82) = 1;
  *(_QWORD*)v94 = GameData_2131bc8[0] + 16;
  *(_QWORD*)(v94 + 8) = 0;
  BasicMenuCursor_16e0c00_alt1((_QWORD*)a1, v94),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
LABEL_40:
  if (v103_.v107 != (int*)v103_.v108) {
    v47 = fw_memory_HeapManager_Allocate(*v3, 160, 16, 0),
    v40 = COERCE_AS(__typeof__(v40),
                    PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    EquipUnitSelectMenuItem_16d25e0_alt1(v47, "MID_BtlMenu_SpecialGauge",
                                         nullptr, "L_SpecialGauge"),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    BasicMenuCursor_16e0c00_alt1((_QWORD*)a1, v47),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    v48 = v103_.v107;
    v49 = (int*)v103_.v108;
    while (v48 != v49) {
      v50 = fw_memory_HeapManager_Allocate(*v3, 144, 16, 0),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      v51 = *(_BYTE*)(a1 + 1072);
      v52 = v109;
      v53 = *(_DWORD*)(*(_QWORD*)(a1 + 1064) + 592LL);
      *(_QWORD*)(v50 + 8) = 0;
      *(_WORD*)(v50 + 16) = 0;
      *(_QWORD*)(v50 + 64) = 0;
      *(_QWORD*)(v50 + 72) = 0;
      *(_QWORD*)(v50 + 48) = 0;
      *(_QWORD*)(v50 + 56) = 0;
      *(_WORD*)(v50 + 80) = 257;
      *(_BYTE*)(v50 + 82) = 1;
      *(_QWORD*)(v50 + 112) = 0;
      *(_QWORD*)(v50 + 120) = 0;
      *(_QWORD*)(v50 + 96) = v52;
      *(_QWORD*)(v50 + 104) = 0;
      *(_DWORD*)(v50 + 40) = -1;
      *(_BYTE*)(v50 + 128) = v51;
      v54 = *v48++;
      *(_QWORD*)v50 = anonymous_EquipInfoItem_SpecialSkill_vtable;
      *(_DWORD*)(v50 + 132) = v54;
      *(_BYTE*)(v50 + 136) = v53 > 1;
      *(_QWORD*)(v50 + 88) = GameData_2099158;
      BasicMenuCursor_16e0c00_alt1((_QWORD*)a1, v50),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    }
  }
  v55 = *(_QWORD*)(v109 + 392);
  if (v55 != 0 && *(_WORD*)(v55 + 408) != 0) {
    v56 = *(_QWORD*)(v55 + 24);
    v57 = *(unsigned __int64**)(v56 + 1792);
    v58 = *(__int64**)(v56 + 1800);
    if (v57 != (unsigned __int64*)v58) {
      while (v57[1] != 0) {
        v59 = game_GameModeData_instance_;
        if (game_GameModeData_instance_ != 0) {
          v40 = GameVariable_828f50(game_GameModeData_instance_ + 40, v57 + 1);
        }
        if (*((_BYTE*)v57 + 24) == ((v59 == 0) | v40 & 1)) {
          break;
        }
        v57 += 4;
        if (v57 == (unsigned __int64*)v58) {
          goto LABEL_69;
        }
      }
      v71 = *v57;
      if (*v57 != 0) {
        v72 = fw_memory_HeapManager_Allocate(*v3, 160, 16, 0),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        EquipUnitSelectMenuItem_16d25e0_alt1(v72, "MID_Sys_BlazeOrigin",
                                             nullptr, nullptr),
            v40 = COERCE_AS(__typeof__(v40),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        BasicMenuCursor_16e0c00_alt1((_QWORD*)a1, v72),
            v40 = COERCE_AS(__typeof__(v40),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        v73 = fw_memory_HeapManager_Allocate(*v3, 136, 16, 0),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        v74 = v109;
        v75 = v73;
        if (*(_QWORD*)(v109 + 408) == 0) {
          v76 = *(_QWORD*)(v109 + 392);
          if (v76 == 0) {
            goto LABEL_68;
          }
          if (*(_WORD*)(v76 + 408) != 0) {
            v95 = *(_QWORD*)(v76 + 24);
            v96 = *(_QWORD*)(v95 + 1792);
            v97 = *(_QWORD*)(v95 + 1800);
            if (v96 != v97) {
              while (*(_QWORD*)(v96 + 8) != 0) {
                v98 = game_GameModeData_instance_;
                if (game_GameModeData_instance_ != 0) {
                  LOBYTE(v73) =
                      GameVariable_828f50(game_GameModeData_instance_ + 40,
                                          (unsigned __int64*)(v96 + 8)),
                  v40 = COERCE_AS(
                      __typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                }
                if (*(_BYTE*)(v96 + 24) == ((v98 == 0) | v73 & 1)) {
                  break;
                }
                v96 += 32;
                if (v96 == v97) {
                  goto LABEL_67;
                }
              }
              LOBYTE(v76) = *(_QWORD*)v96 != 0;
              goto LABEL_68;
            }
          }
        }
      LABEL_67:
        LOBYTE(v76) = 0;
      LABEL_68:
        *(_WORD*)(v75 + 16) = 0;
        *(_QWORD*)(v75 + 48) = 0;
        *(_QWORD*)(v75 + 56) = 0;
        *(_QWORD*)(v75 + 64) = 0;
        *(_QWORD*)(v75 + 72) = 0;
        *(_QWORD*)(v75 + 104) = 0;
        *(_QWORD*)(v75 + 112) = 0;
        *(_DWORD*)(v75 + 40) = 0;
        *(_QWORD*)(v75 + 120) = 0;
        *(_QWORD*)(v75 + 128) = v71;
        *(_BYTE*)(v75 + 82) = v76;
        *(_WORD*)(v75 + 80) = 257;
        *(_QWORD*)v75 = anonymous_EquipInfoItem_DustItem_vtable;
        *(_QWORD*)(v75 + 8) = 0;
        *(_QWORD*)(v75 + 88) = GameData_20993e8;
        *(_QWORD*)(v75 + 96) = v74;
        BasicMenuCursor_16e0c00_alt1((_QWORD*)a1, v75),
            v40 = COERCE_AS(__typeof__(v40),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      }
    }
  }
LABEL_69:
  if ((*(_BYTE*)(v109 + 1837) & 0x40) == 0 ||
      (v77 = *(_QWORD*)(v109 + 1784), v78 = *(_QWORD*)(v109 + 1776),
       v77 == v78)) {
    v81 = GameData_212c8a8_alt1[0];
  }
  else {
    v79 = (v77 - v78) >> 2;
    v80 = 0;
    v81 = GameData_212c8a8_alt1[0];
    while (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                                8LL * (*(_DWORD*)(v78 + 4 * v80) & 0xFFF)) +
                     250LL) != 46) {
      if (v79 == ++v80) {
        goto LABEL_76;
      }
    }
    v93 = (int*)(v78 + 4LL * (unsigned int)v80);
    if (v80 > -1) {
      v81 = v93;
    }
  }
LABEL_76:
  if ((*(_WORD*)v81 & 0xFFF) != 0) {
    v82 = fw_memory_HeapManager_Allocate(*v3, 160, 16, 0),
    v40 = COERCE_AS(__typeof__(v40),
                    PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    EquipUnitSelectMenuItem_16d25e0_alt1(v82, "MID_Sys_BlazeSkill", nullptr,
                                         nullptr),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    BasicMenuCursor_16e0c00_alt1((_QWORD*)a1, v82),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    v83 = fw_memory_HeapManager_Allocate(*v3, 144, 16, 0),
    v40 = COERCE_AS(__typeof__(v40),
                    PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    v84 = *(_BYTE*)(a1 + 1072);
    v85 = v109;
    v86 = *(_DWORD*)(*(_QWORD*)(a1 + 1064) + 592LL);
    *(_WORD*)(v83 + 80) = 257;
    *(_WORD*)(v83 + 16) = 0;
    *(_QWORD*)(v83 + 64) = 0;
    *(_QWORD*)(v83 + 72) = 0;
    *(_QWORD*)(v83 + 48) = 0;
    *(_QWORD*)(v83 + 56) = 0;
    *(_QWORD*)(v83 + 112) = 0;
    *(_QWORD*)(v83 + 120) = 0;
    *(_QWORD*)(v83 + 96) = v85;
    *(_QWORD*)(v83 + 104) = 0;
    *(_BYTE*)(v83 + 128) = v84;
    *(_BYTE*)(v83 + 82) = 1;
    *(_DWORD*)(v83 + 40) = -1;
    *(_QWORD*)v83 = anonymous_EquipInfoItem_Skill_vtable;
    *(_QWORD*)(v83 + 8) = 0;
    *(_QWORD*)(v83 + 88) = GameData_2098ee0;
    v87 = *v81;
    *(_BYTE*)(v83 + 136) = v86 > 1;
    *(_DWORD*)(v83 + 132) = v87;
    BasicMenuCursor_16e0c00_alt1((_QWORD*)a1, v83),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  if (v103_.v107 != nullptr) {
    v88 = *v3;
    v103_.v108 = (__int64)v103_.v107;
    v89 = 128;
    if (*(_QWORD*)(v88 + 200) == 0) {
      v89 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v88 + v89, (__int64)v103_.v107),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  if (v103_.v105 != nullptr) {
    v90 = *v3;
    v103_.v106 = v103_.v105;
    v91 = 128;
    if (*(_QWORD*)(v90 + 200) == 0) {
      v91 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v90 + v91, (__int64)v103_.v105),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  v32 = (__int64)v103_.v103;
  if (v103_.v103 != nullptr) {
    v103_.v104 = v103_.v103;
    goto LABEL_88;
  }
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
