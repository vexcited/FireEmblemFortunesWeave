#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64* GameRoutine_1760e40(__int64, unsigned int);
__int64* GameRoutine_17618b0(__int64);
__int64 GameHr_1562680(__int64 result, const char*, float);
__int64 GameHr_1840a20(__int64, unsigned int, __int64, unsigned __int8, char);
__int64 GameRoutine_94b9a0();
__int64 LayoutAccessor_1562cf0(__int64 result, const char*);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_17356e0(__int64*, __int64);
__int64 ui_LayoutAccessor_FindPane(__int64*, __int64);
__int64 ui_LayoutAccessor_FindTextBox(__int64*, __int64);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, __int64, char);
char* GameRoutine_a4dbe0(__int64, const char*, char);
char* game_util_Format(const char*, ...);
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
void GameHr_1763e20(__int64*, _QWORD*, __int64, __int64, const char*);
void GameRoutine_156c5d0(__int64, __int64, char);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void ui_text_190a0c0(float*, __int64, float*, _QWORD*, __int64);
void TelopDivinationVisitorResult_Unknown57(_QWORD* a1);

void TelopDivinationVisitorResult_Unknown57(_QWORD* a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  char* v6;
  __int64* v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  int v13;
  int v14;
  __int64* v15;
  __int64 v16;
  char* v17;
  __int64 v18;
  __int64 v19;
  __int64* v20;
  __int64* v21;
  __int64* v22;
  __int64 v23;
  __int64* v24;
  bool v25;
  unsigned int v26;
  __int64 v27;
  char* v28;
  char* v29;
  __int64 v30;
  __int64 v31;
  char v32;
  __int64 v33;
  __int64 v34;
  char v35;
  __int64 v36;
  __int64* v37;
  __int64 v38;
  char v39;
  struct {
    _QWORD v40[2];
    unsigned __int64 v41;
    unsigned __int64 v42;
    int v43;
    int v44;
    __int64 v45;
    __int64 v46;
    __int64 v47;
    __int64 v48;
    __int64 v49;
    __int64 v50;
    __int64 v51;
    __int64 v52;
    __int64 v53;
    __int64 v54;
    __int64 v55;
    __int64 v56;
    __int64 v57;
  } v40_;
  float v58;
  _DWORD v59[2];

  if (game_GameModeData_instance_ != 0) {
    v2 = *(_QWORD*)(game_GameModeData_instance_ + 96);
    v3 = GameRoutine_94b9a0();
    if (v3 != 0) {
      goto LABEL_3;
    }
  }
  else {
    v2 = 0;
    v3 = GameRoutine_94b9a0();
    if (v3 != 0) {
    LABEL_3:
      v4 = v3;
      if (*(_QWORD*)(*(_QWORD*)(v2 + 24) + 1672LL) !=
          *(_QWORD*)(*(_QWORD*)(v3 + 24) + 1672LL)) {
        v15 = GameRoutine_1760e40((__int64)a1, 0x12u);
        v40_.v45 = -1;
        v40_.v46 = -1;
        v40_.v47 = -1;
        v40_.v48 = -1;
        v16 = *msg_MessageManager_instance__ptr[0];
        v40_.v49 = -1;
        v40_.v50 = -1;
        v40_.v51 = -1;
        v40_.v52 = -1;
        v40_.v53 = -1;
        v40_.v54 = -1;
        v40_.v55 = -1;
        v40_.v56 = -1;
        v40_.v40[0] = GameData_212e348 + 2;
        v40_.v40[1] = 0xFFFF0001FFFF0000LL;
        v40_.v41 = 0xFFFF0004FFFF0002LL;
        v40_.v42 = 0xFFFF0006FFFF0005LL;
        v40_.v57 = 8;
        v40_.v43 = -65529;
        v40_.v44 = -65528;
        v17 = GameRoutine_a4dbe0(
            v16, "MID_Sys_Result_Msg_Reliance_EXP_Up_Divination", 0);
        if (v17 != nullptr) {
          v18 = (__int64)v17;
          v19 = ui_LayoutAccessor_FindTextBox(v15, (__int64)"T_Txt");
          if (v19 != 0) {
            GameRoutine_156c5d0(v19, v18, 0);
          }
        }
        v20 = (__int64*)fw_memory_g_heap_manager_ptr;
        v21 = (__int64*)fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 16, 16, 0);
        *v21 = v2;
        v21[1] = v4;
        v22 = (__int64*)fw_memory_HeapManager_Allocate(*v20, 16, 16, 0);
        v23 = v21[1];
        v24 = v22;
        v25 = *v21 == 0;
        *v22 = *v21;
        v22[1] = v23;
        v26 = !v25;
        if (v23 != 0) {
          v27 = v26 + 1;
        }
        else {
          v27 = v26;
        }
        v28 = game_util_Format("Select%d", v27);
        GameHr_1562680((__int64)v15, v28, 0x1.0000000000000p+0f);
        v29 = game_util_Format("Reliance%d", 2);
        LayoutAccessor_1562cf0((__int64)v15, v29);
        v30 = *v24;
        if (*v24 != 0) {
          v31 = ui_LayoutAccessor_FindPane(v15, (__int64)"UnitA_Face");
          if (v31 != 0) {
            v31 = __dynamic_cast(v31, GameData_212d670[0], GameData_212d678[0],
                                 0);
          }
          v32 = GameHr_1840a20(v31, 0, v30, 6u, 1);
          ui_LayoutAccessor_SetPaneVisible((__int64)v15, (__int64)"UnitA_Face",
                                           v32 & 1);
        }
        v33 = v24[1];
        if (v33 != 0) {
          v34 = ui_LayoutAccessor_FindPane(v15, (__int64)"UnitB_Face");
          if (v34 != 0) {
            v34 = __dynamic_cast(v34, GameData_212d670[0], GameData_212d678[0],
                                 0);
          }
          v35 = GameHr_1840a20(v34, 0, v33, 6u, 1);
          ui_LayoutAccessor_SetPaneVisible((__int64)v15, (__int64)"UnitB_Face",
                                           v35 & 1);
        }
        if (*(_QWORD*)(*v20 + 200) != 0) {
          v36 = 128;
        }
        else {
          v36 = 56;
        }
        nn_mem_StandardAllocator_Free(*v20 + v36, (__int64)v24);
        v37 = GameRoutine_17618b0((__int64)a1);
        GameHr_1763e20(v37, a1, v2, v4, "L_RelianceAB");
        if (*(_QWORD*)(*v20 + 200) != 0) {
          v38 = 128;
        }
        else {
          v38 = 56;
        }
        nn_mem_StandardAllocator_Free(*v20 + v38, (__int64)v21);
      }
      return;
    }
  }
  v40_.v45 = -1;
  v40_.v46 = -1;
  v40_.v47 = -1;
  v40_.v48 = -1;
  v5 = *msg_MessageManager_instance__ptr[0];
  v40_.v49 = -1;
  v40_.v50 = -1;
  v40_.v51 = -1;
  v40_.v52 = -1;
  v40_.v53 = -1;
  v40_.v54 = -1;
  v40_.v55 = -1;
  v40_.v56 = -1;
  v40_.v40[0] = GameData_212e348 + 2;
  v40_.v40[1] = 0xFFFF0001FFFF0000LL;
  v40_.v41 = 0xFFFF0004FFFF0002LL;
  v40_.v42 = 0xFFFF0006FFFF0005LL;
  v40_.v57 = 8;
  v40_.v43 = -65529;
  v40_.v44 = -65528;
  v6 = GameRoutine_a4dbe0(v5, "MID_Sys_Result_Msg_Reliance_EXP_Up_Divination",
                          0);
  v7 = GameRoutine_1760e40((__int64)a1, 0);
  v8 = v7;
  if (v6 != nullptr) {
    v9 = ui_LayoutAccessor_FindTextBox(v7, (__int64)"L_Txt/T_Txt");
    if (v9 != 0) {
      GameRoutine_156c5d0(v9, (__int64)v6, 0);
    }
  }
  v10 = ui_LayoutAccessor_FindTextBox(v8, (__int64)"L_Txt/T_Txt");
  if (v10 != 0) {
    v11 = v10;
    v12 = (_QWORD*)ui_LayoutAccessor_FindTextBox(v8, (__int64)"L_Txt/T_Txt");
    if (v12 != nullptr) {
      ui_text_190a0c0((float*)v40_.v40, (__int64)v59, &v58, v12, v12[27]);
      v13 = v59[0];
      v14 = v59[1];
    }
    else {
      v13 = 0;
      v14 = 0;
    }
    v39 = *(_BYTE*)(v11 + 88);
    *(_DWORD*)(v11 + 80) = v13;
    *(_DWORD*)(v11 + 84) = v14;
    *(_BYTE*)(v11 + 88) = v39 | 0x10;
  }
  game_17356e0(v8, (__int64)"L_Txt");
}

#pragma GCC visibility pop
