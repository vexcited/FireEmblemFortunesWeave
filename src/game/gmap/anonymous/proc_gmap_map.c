#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_136a920(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1596140(_QWORD, _QWORD, _QWORD);
__int64 Impl_13261c0(_QWORD);
__int64 LayoutAccessor_155ea30(_QWORD);
__int64 LayoutAccessor_1562cf0(_QWORD, _QWORD);
__int64 ProcGmapCarriageList_168a000(_QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_util_Format(const char*, ...);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 strlen(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
extern __int64 GameData_21c9700;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 ui_Manager_instance_;
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern char GameData_1a9f09e;
extern char* GameData_20808f0[4];
long double GameRoutine_1689c20(_QWORD, _QWORD, _QWORD);
__int64
game_gmap_anonymous_ProcGmapMap_UpdatePinIconImpl_closure_Invoke(__int64 a1,
                                                                 _QWORD* a2);
__int64
game_gmap_anonymous_ProcGmapMap_UpdatePinIconImpl_closure0_Invoke_1686770(
    __int64 a1, __int64* a2);
__int64
game_gmap_anonymous_ProcGmapMap_UpdatePinIconImpl_closure0_Invoke_1686980(
    __int64 a1, __int64 a2);
__int64
game_gmap_anonymous_ProcGmapMap_UpdatePinIconImpl_closure1_Invoke(__int64 a1,
                                                                  _QWORD* a2);
__int64
game_gmap_anonymous_ProcGmapMap_UpdatePinIconImpl_closure2_Invoke(__int64 a1,
                                                                  _QWORD* a2);
__int64 ProcGmapMap_1687d40(__int64 result, char** a2);
__int64

game_gmap_anonymous_ProcGmapMap_UpdatePinIconImpl_closure_Invoke(__int64 a1,
                                                                 _QWORD* a2)
{
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  *((_DWORD*)a2 + 4) = 1;
  if (*((_DWORD*)a2 + 2) == 0) {
    LayoutAccessor_1562cf0(*a2, "MainQuest");
  }
  result = ui_LayoutAccessor_FindPane(*a2, "IconQuest");
  if (result != 0) {
    result =
        __dynamic_cast(result, GameData_212d670[0], GameData_212d678[0], 0);
    if (result != 0) {
      v4 = *((unsigned int*)a2 + 2);
      v5 = result;
      if ((unsigned int)v4 > 3) {
        v6 = game_util_Format(&GameData_1a9f09e, "Main");
      }
      else {
        v6 = game_util_Format(GameData_20808f0[v4], "Main");
      }
      return GameRoutine_136a920(ui_Manager_instance_ + 1264, v5, 0, 7, v6);
    }
  }
  return result;
}

__int64

game_gmap_anonymous_ProcGmapMap_UpdatePinIconImpl_closure0_Invoke_1686770(
    __int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  char v4;
  char v5;
  __int64 result;
  __int64 v7;
  __int64 v8;

  v2 = *a2;
  v3 = *((unsigned int*)a2 + 2);
  v4 = *((_BYTE*)a2 + 12);
  v5 = *((_BYTE*)a2 + 20);
  if ((_DWORD)v3 == 0) {
    LayoutAccessor_1562cf0(v2, "MainQuest");
  }
  result = ui_LayoutAccessor_FindPane(v2, "IconQuest");
  if (result != 0) {
    result =
        __dynamic_cast(result, GameData_212d670[0], GameData_212d678[0], 0);
    if (result != 0) {
      v7 = result;
      if ((unsigned int)v3 > 3) {
        v8 = game_util_Format(&GameData_1a9f09e, "Main");
      }
      else {
        v8 = game_util_Format(GameData_20808f0[v3], "Main");
      }
      result = GameRoutine_136a920(ui_Manager_instance_ + 1264, v7, 0, 7, v8);
    }
  }
  if ((v4 & 1) == 0) {
    result = LayoutAccessor_155ea30(v2);
    if ((result & 1) != 0 && (v5 & 1) == 0) {
      LayoutAccessor_1562cf0(v2, "Status_Default");
      return LayoutAccessor_1562cf0(v2, "Enable");
    }
  }
  return result;
}

__int64

game_gmap_anonymous_ProcGmapMap_UpdatePinIconImpl_closure0_Invoke_1686980(
    __int64 a1, __int64 a2)
{
  __int64 v3;
  __int64 v4;

  v3 = *(_QWORD*)(**(_QWORD**)(*(_QWORD*)(a1 + 8) + 216LL) + 8LL);
  v4 = strlen(v3);
  return GameRoutine_1596140(a2, v3, v4);
}

__int64

game_gmap_anonymous_ProcGmapMap_UpdatePinIconImpl_closure1_Invoke(__int64 a1,
                                                                  _QWORD* a2)
{
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  *((_DWORD*)a2 + 4) = 1;
  if (*((_DWORD*)a2 + 2) == 0) {
    LayoutAccessor_1562cf0(*a2, "Default");
  }
  result = ui_LayoutAccessor_FindPane(*a2, "IconQuest");
  if (result != 0) {
    result =
        __dynamic_cast(result, GameData_212d670[0], GameData_212d678[0], 0);
    if (result != 0) {
      v4 = *((unsigned int*)a2 + 2);
      v5 = result;
      if ((unsigned int)v4 > 3) {
        v6 = game_util_Format(&GameData_1a9f09e, "SideStory");
      }
      else {
        v6 = game_util_Format(GameData_20808f0[v4], "SideStory");
      }
      return GameRoutine_136a920(ui_Manager_instance_ + 1264, v5, 0, 7, v6);
    }
  }
  return result;
}

__int64

game_gmap_anonymous_ProcGmapMap_UpdatePinIconImpl_closure2_Invoke(__int64 a1,
                                                                  _QWORD* a2)
{
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  *((_DWORD*)a2 + 4) = 1;
  if (*((_DWORD*)a2 + 2) == 0) {
    LayoutAccessor_1562cf0(*a2, "MainQuest");
  }
  result = ui_LayoutAccessor_FindPane(*a2, "IconQuest");
  if (result != 0) {
    result =
        __dynamic_cast(result, GameData_212d670[0], GameData_212d678[0], 0);
    if (result != 0) {
      v4 = *((unsigned int*)a2 + 2);
      v5 = result;
      if ((unsigned int)v4 > 3) {
        v6 = game_util_Format(&GameData_1a9f09e, "Main");
      }
      else {
        v6 = game_util_Format(GameData_20808f0[v4], "Main");
      }
      return GameRoutine_136a920(ui_Manager_instance_ + 1264, v5, 0, 7, v6);
    }
  }
  return result;
}

__int64 ProcGmapMap_1687d40(__int64 result, char** a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v6;
  __int64 i;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  bool v12;
  __int64 v13;
  _QWORD* v14;
  _QWORD* v15;
  __int64 v16;
  char* v17;
  char* v18;
  unsigned __int64 v19;
  __int64 v20;
  char* v21;
  long double v22;
  int v23;
  char* v24;
  char* v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  char* v30;
  __int64 v31;
  long double v32;
  _BYTE v33[4];
  bool v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;

  v3 = *(_QWORD*)(result + 192);
  v4 = *(_QWORD*)(result + 200);
  v2 = result + 192;
  v6 = result;
  for (i = fw_memory_g_heap_manager_ptr; v4 != v3; v4 -= 96) {
    if ((*(_BYTE*)(v4 - 32) & 1) != 0) {
      v8 = *(_QWORD*)(v4 - 16);
      if (v8 != 0) {
        if (*(_QWORD*)(*(_QWORD*)i + 200LL) != 0) {
          v9 = 128;
        }
        else {
          v9 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)i + v9, v8);
      }
    }
    if ((*(_BYTE*)(v4 - 56) & 1) != 0) {
      v10 = *(_QWORD*)(v4 - 40);
      if (v10 != 0) {
        if (*(_QWORD*)(*(_QWORD*)i + 200LL) != 0) {
          v11 = 128;
        }
        else {
          v11 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)i + v11, v10);
      }
    }
  }
  *(_QWORD*)(v6 + 200) = v3;
  v12 = *a2 != a2[1] && *(_QWORD*)*a2 != 0;
  *(_BYTE*)(v6 + 224) = v12;
  v13 = *(_QWORD*)(GameData_21c9700 + 8);
  v14 = *(_QWORD**)(v13 + 48);
  v15 = *(_QWORD**)(v13 + 56);
  if (v14 != v15) {
    while (1) {
      v16 = *v14;
      if (*(_BYTE*)(*v14 + 176LL) != 1 && *(_QWORD*)(v16 + 120) != 0) {
        result = Impl_13261c0(*v14);
        if ((unsigned __int8)result != 13) {
          result = Impl_13261c0(v16);
          if ((unsigned __int8)result != 12) {
            result = Impl_13261c0(v16);
            if ((unsigned __int8)result != 11) {
              break;
            }
          }
        }
      }
      if (*(_BYTE*)(v6 + 224) == 1) {
        v18 = *a2;
        v17 = a2[1];
        if (*a2 != v17) {
          v19 = v17 - v18 - 8;
          if ((~(_BYTE)v19 & 0x18) == 0) {
          LABEL_33:
            if (v19 >= 0x18) {
              v18 += 16;
              while (1) {
                if (*((_QWORD*)v18 - 2) == v16) {
                  if (v18 - 16 != v17) {
                    goto LABEL_54;
                  }
                  goto LABEL_21;
                }
                if (*((_QWORD*)v18 - 1) == v16) {
                  v18 -= 8;
                  goto LABEL_53;
                }
                if (*(_QWORD*)v18 == v16) {
                  goto LABEL_53;
                }
                if (*((_QWORD*)v18 + 1) == v16) {
                  break;
                }
                v21 = v18 + 16;
                v18 += 32;
                if (v21 == v17) {
                  goto LABEL_21;
                }
              }
              if (v18 + 8 != v17) {
                goto LABEL_54;
              }
            }
            goto LABEL_21;
          }
          v20 = ((unsigned __int8)((unsigned int)v19 >> 3) + 1) & 3;
          while (*(_QWORD*)v18 != v16) {
            v18 += 8;
            if (--v20 == 0) {
              goto LABEL_33;
            }
          }
        }
      LABEL_53:
        if (v18 != v17) {
        LABEL_54:
          v39 = 0;
          v40 = 0;
          v37 = 0;
          v38 = 0;
          v35 = 0;
          v36 = 0;
          v31 = v16;
          v34 = true;
          v32 = GameRoutine_1689c20(v6, v16, v33);
        LABEL_55:
          result = ProcGmapCarriageList_168a000(v2, &v31);
          if ((v38 & 1) != 0 && v40 != 0) {
            v28 = 128;
            if (*(_QWORD*)(*(_QWORD*)i + 200LL) == 0) {
              v28 = 56;
            }
            result = nn_mem_StandardAllocator_Free(*(_QWORD*)i + v28, v40);
          }
          if ((v35 & 1) != 0 && v37 != 0) {
            v29 = 128;
            if (*(_QWORD*)(*(_QWORD*)i + 200LL) == 0) {
              v29 = 56;
            }
            result = nn_mem_StandardAllocator_Free(*(_QWORD*)i + v29, v37);
          }
        }
      }
    LABEL_21:
      if (++v14 == v15) {
        return result;
      }
    }
    v39 = 0;
    v40 = 0;
    v37 = 0;
    v38 = 0;
    v35 = 0;
    v36 = 0;
    v31 = v16;
    v22 = GameRoutine_1689c20(v6, v16, v33);
    v23 = *(unsigned __int8*)(v6 + 224);
    v32 = v22;
    if (v23 == 1) {
      v25 = *a2;
      v24 = a2[1];
      if (*a2 != v24) {
        v26 = v24 - v25 - 8;
        if ((~(_BYTE)v26 & 0x18) != 0) {
          v27 = ((unsigned __int8)((unsigned int)v26 >> 3) + 1) & 3;
          while (*(_QWORD*)v25 != v16) {
            v25 += 8;
            if (--v27 == 0) {
              goto LABEL_47;
            }
          }
        }
        else {
        LABEL_47:
          if (v26 >= 0x18) {
            v25 += 16;
            while (1) {
              if (*((_QWORD*)v25 - 2) == v16) {
                v25 -= 16;
                goto LABEL_49;
              }
              if (*((_QWORD*)v25 - 1) == v16) {
                v25 -= 8;
                goto LABEL_49;
              }
              if (*(_QWORD*)v25 == v16) {
                goto LABEL_49;
              }
              if (*((_QWORD*)v25 + 1) == v16) {
                break;
              }
              v30 = v25 + 16;
              v25 += 32;
              if (v30 == v24) {
                goto LABEL_48;
              }
            }
            v25 += 8;
          }
          else {
          LABEL_48:
            v25 = a2[1];
          }
        }
      }
    LABEL_49:
      v34 = v25 != v24;
    }
    else {
      v34 = false;
    }
    goto LABEL_55;
  }
  return result;
}

#pragma GCC visibility pop
