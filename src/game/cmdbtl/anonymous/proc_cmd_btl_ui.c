#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 Alignment_56b600(void);
__int64 ControlCreator_13633c0(void);
__int64 GameRoutine_155ca60(_QWORD);
__int64 GameRoutine_155e140(_QWORD);
__int64 GameRoutine_1563f90(_QWORD, _QWORD);
__int64 GameRoutine_1564060(_QWORD);
__int64 GameRoutine_658c00(_QWORD);
__int64 GameRoutine_d541e0(void);
__int64 GameRoutine_f5f760(void);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindAlignment(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_cmdbtl_anonymous_ProcCmdBtlUI_vtable[])();
extern __int64 GameData_21c96f8;
extern __int64 GameData_21f3d10;
extern __int64 GameData_225ca88;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 ProcCmdBtlUI_Destructor(__int64 a1);
__int64 ProcCmdBtlUI_Unknown2(__int64 result);
__int64 GameRoutine_1627bf0(__int64);
__int64 LayoutAccessor_155e830(__int64 result, char);
__int64 LayoutAccessor_1562680(__int64 result, __int64, float);
__int64 LayoutAccessor_15636c0(__int64 result, __int64, char, float);
__int64 ui_LayoutAccessor_SetPaneVisible_alt1(
    __int64 result, __int64, char) __asm__("ui_LayoutAccessor_SetPaneVisible");
extern __int64* ui_LayoutAccessor_empty__ptr[3];
float LayoutAccessor_15638b0(__int64*, __int64, char);
__int64 ProcCmdBtlUI_Unknown3(__int64 result);

__int64 ProcCmdBtlUI_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;

  *(_QWORD*)a1 = game_cmdbtl_anonymous_ProcCmdBtlUI_vtable;
  v2 = *(_QWORD*)(a1 + 160);
  if (v2 != 0) {
    *(_BYTE*)(v2 + 2376) = 1;
  }
  v3 = *(_QWORD*)(a1 + 168);
  *(_QWORD*)(a1 + 160) = 0;
  *(_QWORD*)(a1 + 168) = 0;
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak(v3);
  }
  GameRoutine_155e140(a1 + 176);
  v4 = *(_QWORD*)(a1 + 1992);
  v5 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v4 != 0) {
    v6 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    *(_QWORD*)(a1 + 2000) = v4;
    v7 = 128;
    if (*(_QWORD*)(v6 + 200) == 0) {
      v7 = 56;
    }
    nn_mem_StandardAllocator_Free(v6 + v7, v4);
  }
  v8 = *(_QWORD*)(a1 + 1936);
  if (v8 != 0) {
    v9 = *v5;
    *(_QWORD*)(a1 + 1944) = v8;
    v10 = 128;
    if (*(_QWORD*)(v9 + 200) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free(v9 + v10, v8);
  }
  v11 = *(_QWORD*)(a1 + 1912);
  if (v11 != 0) {
    v12 = *v5;
    *(_QWORD*)(a1 + 1920) = v11;
    v13 = 128;
    if (*(_QWORD*)(v12 + 200) == 0) {
      v13 = 56;
    }
    nn_mem_StandardAllocator_Free(v12 + v13, v11);
  }
  v14 = *(_QWORD*)(a1 + 1896);
  if (v14 != 0) {
    std___1___shared_weak_count___release_weak(v14);
  }
  GameRoutine_155ca60(a1 + 1704);
  GameRoutine_155ca60(a1 + 1528);
  GameRoutine_155ca60(a1 + 1352);
  GameRoutine_155ca60(a1 + 1168);
  GameRoutine_155ca60(a1 + 992);
  GameRoutine_155ca60(a1 + 816);
  GameRoutine_155ca60(a1 + 632);
  GameRoutine_155ca60(a1 + 456);
  GameRoutine_155ca60(a1 + 280);
  GameRoutine_155e140(a1 + 176);
  v15 = *(_QWORD*)(a1 + 272);
  if (v15 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
    std___1___shared_weak_count___release_weak(v15);
  }
  GameRoutine_1564060(a1 + 224);
  GameRoutine_1563f90(a1 + 200, *(_QWORD*)(a1 + 208));
  v16 = *(_QWORD*)(a1 + 184);
  if (v16 != 0) {
    std___1___shared_weak_count___release_weak(v16);
  }
  v17 = *(_QWORD*)(a1 + 168);
  if (v17 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
    std___1___shared_weak_count___release_weak(v17);
  }
  GameData_225ca88 = 0;
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

__int64 ProcCmdBtlUI_Unknown2(__int64 result)
{
  __int64 v1;
  char v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _BOOL8 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  if (*(_BYTE*)(result + 1976) == 1) {
    v1 = result;
    if ((*(_BYTE*)(result + 1977) & 1) != 0) {
      if (GameData_21f3d10 != 0 && *(_QWORD*)(GameData_21f3d10 + 200) != 0) {
        v2 = GameRoutine_f5f760();
        *(_BYTE*)(v1 + 1979) = v2 & 1;
        ui_LayoutAccessor_SetPaneVisible(v1 + 176, "N_FieldKill", v2 & 1);
        if (GameData_21f3d10 != 0 && *(_QWORD*)(GameData_21f3d10 + 200) != 0) {
          v3 = GameRoutine_d541e0();
          if (v3 == 0) {
            goto LABEL_14;
          }
          v4 = *(_QWORD*)(GameData_21c96f8 + 16);
          v5 = *(_QWORD*)(v4 + 80);
          v6 = *(_QWORD*)(v4 + 88);
          if (v5 == v6) {
            goto LABEL_14;
          }
          while (*(_QWORD*)v5 != *(_QWORD*)(v3 + 96)) {
            v5 += 72;
            if (v5 == v6) {
              goto LABEL_14;
            }
          }
          if (*(_DWORD*)(v5 + 16) == 1) {
            v7 = (*(_BYTE*)(v5 + 20) & 6) != 0;
          }
          else {
          LABEL_14:
            v7 = false;
          }
          ui_LayoutAccessor_SetPaneVisible(v1 + 176, "L_Open", v7);
        }
      }
      if (ui_LayoutAccessor_FindAlignment(v1 + 176, "A_Info") != 0) {
        Alignment_56b600();
        v8 = *(_QWORD*)(v1 + 184);
        if (v8 != 0) {
          v9 = std___1___shared_weak_count_lock(v8);
          if (v9 != 0) {
            v10 = v9;
            if (*(_QWORD*)(v1 + 176) != 0) {
              ControlCreator_13633c0();
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
              std___1___shared_weak_count___release_weak(v10);
            }
          }
        }
      }
      result = ui_LayoutAccessor_FindAlignment(v1 + 176, "A_Help");
      if (result != 0) {
        Alignment_56b600();
        result = *(_QWORD*)(v1 + 184);
        if (result != 0) {
          result = std___1___shared_weak_count_lock(result);
          if (result != 0) {
            v11 = result;
            result = *(_QWORD*)(v1 + 176);
            if (result != 0) {
              result = ControlCreator_13633c0();
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
              return std___1___shared_weak_count___release_weak(v11);
            }
          }
        }
      }
    }
  }
  return result;
}

__int64 ProcCmdBtlUI_Unknown3(__int64 result)
{

#pragma clang fp contract(off)
  int v1;
  __int64 v2;
  bool v3;
  int v4;
  __int64 v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  const char* v10;
  const char* v11;
  float v12;
  float v13;
  float v14;

  v1 = *(_DWORD*)(result + 1980);
  v2 = result;
  v3 = __OFSUB__(v1, 1);
  v4 = v1 - 1;
  if (v4 < 0 == v3) {
    *(_DWORD*)(result + 1980) = v4;
    if (v4 == 0) {
      result = LayoutAccessor_155e830(result + 176,
                                      *(_BYTE*)(result + 1976) &
                                          *(_BYTE*)(result + 1977) & 1);
    }
  }
  if (*(_BYTE*)(v2 + 1978) == 1) {
    v5 = *(_QWORD*)(v2 + 1968);
    if (v5 != 0) {
      v6 = ui_LayoutAccessor_empty__ptr[0];
      if (*(_QWORD*)(v5 + 168) != 0) {
        v7 = *(__int64**)(v5 + 168);
      }
      else {
        v7 = ui_LayoutAccessor_empty__ptr[0];
      }
      LayoutAccessor_155e830((__int64)v7, 1);
      *(_DWORD*)(v5 + 388) = 0;
      GameRoutine_1627bf0(v5 + 224);
      if (*(_QWORD*)(v5 + 168) != 0) {
        v8 = *(_QWORD*)(v5 + 168);
      }
      else {
        v8 = (__int64)v6;
      }
      ui_LayoutAccessor_SetPaneVisible_alt1(v8, (__int64)"L_KeyHelp",
                                            *(_BYTE*)(v5 + 409));
      if (*(_QWORD*)(v5 + 168) != 0) {
        v9 = *(_QWORD*)(v5 + 168);
      }
      else {
        v9 = (__int64)v6;
      }
      ui_LayoutAccessor_SetPaneVisible_alt1(v9, (__int64)"L_KeyHelp01",
                                            *(_BYTE*)(v5 + 409));
      if ((*(_BYTE*)(v5 + 409) & *(_BYTE*)(v5 + 408) & 1) != 0) {
        v10 = "KeyHelp_Cancel_In";
      }
      else {
        v10 = "KeyHelp_Cancel_Out";
      }
      if ((*(_BYTE*)(v5 + 409) & *(_BYTE*)(v5 + 408) & 1) != 0) {
        v11 = "KeyHelp_Auto_Out";
      }
      else {
        v11 = "KeyHelp_Auto_In";
      }
      if (*(_QWORD*)(v5 + 168) != 0) {
        v6 = *(__int64**)(v5 + 168);
      }
      LayoutAccessor_1562680((__int64)v6, (__int64)v10, 0x0.0p+0f);
      v12 = LayoutAccessor_15638b0(v6, (__int64)v10, 0);
      LayoutAccessor_15636c0((__int64)v6, (__int64)v10, 0, v12);
      LayoutAccessor_1562680((__int64)v6, (__int64)v11, 0x0.0p+0f);
      v13 = LayoutAccessor_15638b0(v6, (__int64)v11, 0);
      LayoutAccessor_15636c0((__int64)v6, (__int64)v11, 0, v13);
      LayoutAccessor_1562680((__int64)v6, (__int64)"KeyHelp_Skip_In",
                             0x0.0p+0f);
      v14 = LayoutAccessor_15638b0(v6, (__int64)"KeyHelp_Skip_In", 0);
      result = LayoutAccessor_15636c0((__int64)v6, (__int64)"KeyHelp_Skip_In",
                                      0, v14);
      *(_BYTE*)(v5 + 410) = 1;
      *(_BYTE*)(v5 + 412) = 1;
      *(_BYTE*)(v2 + 1978) = 0;
    }
  }
  return result;
}

#pragma GCC visibility pop
