#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 Config_bc7060(_QWORD, _QWORD);
__int64 GameRoutine_1386f80(_QWORD);
__int64 GameRoutine_1562680(_QWORD, _QWORD, long double);
__int64 GameRoutine_1563280(_QWORD, _QWORD, _QWORD, long double);
__int64 GameRoutine_173fe30(__int64);
__int64 GameRoutine_1743280(__int64);
__int64 GameRoutine_1750310(_QWORD, _QWORD);
__int64 GameRoutine_7fbb60(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_931c00(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_9a58b0(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak();
__int64 strcmp(_QWORD, _QWORD);
extern __int64 (*game_gameui_GaugeUtil_ExpChange_vtable[])();
extern __int64 (*game_telop_TelopBattleExp_vtable[])();
extern __int64 GameData_21d9968;
extern __int64 GameData_21d9970;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_g_game_setting;
extern __int64* eft_g_effectSystem_ptr[3];
extern __int64* game_g_frame_clock_ptr[3];
extern char** GameData_212e998;
__int64 TelopBattleExp_Unknown35(__int64 result, long double a2);
__int64 TelopBattleExp_Unknown39(__int64 result, long double a2);
__int64 TelopBattleExp_Unknown34(__int64 a1);
__int64 TelopBattleExp_Unknown37(__int64 a1);
__int64 TelopBattleExp_1744940(__int64 result);
__int64 TelopBattleExp_Unknown47(__int64 a1);
__int64 TelopBattleExp_Destructor(__int64 a1);

__int64 TelopBattleExp_Unknown35(__int64 result, long double a2)
{
  if (*(_BYTE*)(result + 928) == 1) {
    LODWORD(a2) = 1.0;
    return GameRoutine_1562680(result + 168, "Animal_In", a2);
  }
  return result;
}

__int64 TelopBattleExp_Unknown39(__int64 result, long double a2)
{
  if (*(_BYTE*)(result + 928) == 1) {
    LODWORD(a2) = 1.0;
    return GameRoutine_1562680(result + 168, "Animal_Out", a2);
  }
  return result;
}

__int64 TelopBattleExp_Unknown34(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  unsigned int v4;
  unsigned int v5;
  char** v6;
  unsigned int v7;
  char** v8;
  int v9;
  unsigned int v10;

  *(_BYTE*)(a1 + 920) = 0;
  v1 = *eft_g_effectSystem_ptr[0];
  v2 = *(_QWORD*)(*eft_g_effectSystem_ptr[0] + 112);
  v3 = *(_QWORD*)(v2 + 24);
  if (v3 != 0 && (v4 = *(_DWORD*)(v2 + 32)) != 0) {
    v5 = 0;
    v6 = GameData_212e998;
    while (1) {
      v7 = (v4 + v5) >> 1;
      v8 = (char**)(v3 + 336LL * v7);
      v9 = strcmp(*v8, "UI_Deco_StatusUP");
      if (v9 == 0) {
        break;
      }
      if (v9 < 0) {
        v5 = v7 + 1;
      }
      else {
        v4 = (v4 + v5) >> 1;
      }
      if (v5 == v4) {
        v8 = v6;
        break;
      }
    }
  }
  else {
    v8 = GameData_212e998;
  }
  v10 = GameRoutine_9a58b0(v8);
  return Config_bc7060(v1, v10);
}

__int64 TelopBattleExp_Unknown37(__int64 a1)
{
  float v1;
  float v2;
  __int64 v4;
  long double v5;
  __int64 v6;
  char v7;
  float v8;
  float v9;

  v1 = *(float*)(a1 + 1352);
  v2 = 30.0;
  if (v1 < 30.0) {
    v7 = 0;
    v8 = 60.0 / (float)*(int*)(*game_g_frame_clock_ptr[0] + 476);
    if (v8 <= 0.0) {
      v8 = 1.0;
    }
    if ((*(_DWORD*)(game_g_game_setting + 944) & 0xB) != 0) {
      v8 = v8 * 8.0;
    }
    v9 = v1 + v8;
    if (v9 <= 30.0) {
      v2 = v9;
    }
    *(float*)(a1 + 1352) = v2;
  }
  else {
    v4 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 208LL))(a1);
    v6 = *(_QWORD*)(a1 + 792);
    if (v6 != 0 && (GameRoutine_173fe30(v6) & 1) != 0) {
      v7 = 0;
    }
    else {
      v7 = GameRoutine_1563280(a1 + 168, v4, 0, v5) ^ 1;
    }
  }
  return v7 & 1;
}

__int64 TelopBattleExp_1744940(__int64 result)
{
  __int64 v1;
  char v2;
  float v3;
  int v4;
  int v5;
  float v6;
  float* v7;
  int v8;
  int v9;
  float v10;
  bool v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;
  __int64 v17;
  int v18;
  int v19;
  int* v20;
  unsigned __int64 v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  unsigned int v28;
  int v29;
  __int64 v30;
  __int64 i;
  float* v32;
  float v33;
  int v34;
  int v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  int v39;
  __int64 v40;
  char v41;
  float v42;
  float v43;
  int v44;
  int v45;
  float v46;
  float v47;
  __int64 v48;
  __int64 v49;
  char v50;
  float v51;
  int v52;
  int v53;
  float v54;
  float* v55;
  __int64 v56;
  char v57;
  float v58;
  int v59;
  int v60;
  float v61;
  float* v62;
  __int64 v63;
  __int64 v64;
  int v65;
  float v66;
  int v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  int v71;
  int v72;
  int v73;
  float v74;
  int v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  int v79;
  __int64 v80;
  __int64 v81;
  unsigned __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  int v86;
  __int16 v87;
  int v88;
  __int16 v89;
  __int16 v90;
  _QWORD v91[2];

  v1 = result;
  if (*(float*)(result + 952) != 0.0) {
    if (*(_BYTE*)(result + 985) == 1) {
      v2 = (**(__int64 (***)(__int64))(result + 936))(result + 936);
      v3 = 0.0;
      v4 = *(_DWORD*)(v1 + 944);
      v5 = *(unsigned __int8*)(v1 + 984);
      if ((v2 & 1) != 0) {
        v3 = *(float*)(v1 + 952);
      }
      v6 = *(float*)(v1 + 952) - v3;
      *(float*)(v1 + 952) = v6;
      if (v5 == 1) {
        v7 = (float*)v91;
        LODWORD(v91[0]) = 0;
        if (v6 < 0.0) {
          v7 = (float*)(v1 + 952);
        }
      }
      else {
        v7 = (float*)v91;
        LODWORD(v91[0]) = 0;
        if (v6 > 0.0) {
          v7 = (float*)(v1 + 952);
        }
      }
      v9 = *(_DWORD*)(v1 + 972);
      v10 = v3 + *(float*)(v1 + 968);
      v11 = *v7 == 0.0;
      *(float*)(v1 + 952) = *v7;
      v12 = (int)v10;
      *(float*)(v1 + 968) = v10;
      if (v11) {
        v12 = v9;
      }
      *(_DWORD*)(v1 + 944) = v12;
      v13 = v12 >= v9 ? 944LL : 972LL;
      v14 = v9 >= v12 ? 944LL : 972LL;
      v15 = v5 != 0 ? v13 : v14;
      v16 = *(_DWORD*)(v1 + v15);
      *(_BYTE*)(v1 + 966) = 0;
      *(_DWORD*)(v1 + 944) = v16;
      result =
          (*(__int64 (**)(__int64))(*(_QWORD*)(v1 + 936) + 48LL))(v1 + 936);
      v8 = *(_DWORD*)(v1 + 944) - v4;
    }
    else {
      v8 = 0;
    }
    v17 = *(_QWORD*)(v1 + 824);
    v18 = *(_DWORD*)(v17 + 504);
    v19 = v18 + v8;
    v20 = (int*)GameData_21d9968;
    v21 = (unsigned __int64)(GameData_21d9970 - GameData_21d9968) >> 2;
    if ((int)v21 >= 99) {
      v22 = 99;
    }
    else {
      v22 = (unsigned __int64)(GameData_21d9970 - GameData_21d9968) >> 2;
    }
    v23 = *(_DWORD*)(GameData_21d9968 + 4LL * v22 - 4);
    if (v23 >= v19) {
      v23 = v19;
    }
    v24 = v19 >= 0 ? v23 : 0;
    if (v18 != v24) {
      *(_DWORD*)(v17 + 504) = v24;
      if ((int)v21 < 1) {
        LOBYTE(v25) = 0;
      }
      else {
        v25 = 0;
        v26 = v20[(unsigned int)(v21 - 1)];
        if (v26 >= v24) {
          v26 = v24;
        }
        if (v24 >= *v20) {
          v27 = v26;
        }
        else {
          v27 = *v20;
        }
        while (1) {
          v28 = (unsigned int)(v25 + v21) >> 1;
          v29 = v20[v28];
          if (v27 == v29) {
            break;
          }
          if (v27 < v29) {
            LODWORD(v21) = (unsigned int)(v25 + v21) >> 1;
          }
          else {
            v25 = v28 + 1;
          }
          if (v25 >= (int)v21) {
            goto LABEL_48;
          }
        }
        LOBYTE(v25) = v28 + 1;
      }
    LABEL_48:
      *(_BYTE*)(v17 + 498) = v25;
    }
  }
  v30 = *(_QWORD*)(v1 + 1328);
  for (i = *(_QWORD*)(v1 + 1336); v30 != i; v30 += 160) {
    result = (**(__int64 (***)(__int64))v30)(v30);
    if ((result & 1) != 0) {
      v41 = (**(__int64 (***)(__int64))v30)(v30);
      v32 = (float*)(v30 + 16);
      v42 = *(float*)(v30 + 16);
      v43 = *(float*)(v30 + 32);
      v44 = *(_DWORD*)(v30 + 8);
      v45 = *(unsigned __int8*)(v30 + 48);
      if ((v41 & 1) != 0) {
        v46 = *(float*)(v30 + 16);
      }
      else {
        v46 = 0.0;
      }
      v47 = v42 - v46;
      *v32 = v42 - v46;
      if (v45 == 1) {
        LODWORD(v91[0]) = 0;
        if (v47 >= 0.0) {
          v32 = (float*)v91;
        }
      }
      else {
        LODWORD(v91[0]) = 0;
        if (v47 <= 0.0) {
          v32 = (float*)v91;
        }
      }
      v33 = *v32;
      v34 = *(_DWORD*)(v30 + 36);
      v35 = (int)(float)(v46 + v43);
      if (v33 == 0.0) {
        v35 = *(_DWORD*)(v30 + 36);
      }
      *(_DWORD*)(v30 + 8) = v35;
      if (v35 >= v34) {
        v36 = 8;
      }
      else {
        v36 = 36;
      }
      if (v34 >= v35) {
        v37 = 8;
      }
      else {
        v37 = 36;
      }
      if (v45 != 0) {
        v38 = v36;
      }
      else {
        v38 = v37;
      }
      v39 = *(_DWORD*)(v30 + v38);
      *(float*)(v30 + 16) = v42;
      *(_DWORD*)(v30 + 8) = v44;
      v40 = *(_QWORD*)(v1 + 824);
      LOBYTE(v91[0]) = *(_BYTE*)(v30 + 144);
      GameRoutine_7fbb60(v40 + 512, v40, v91, (unsigned int)(v39 - v44));
      result = GameRoutine_1750310(v30, 2);
    }
  }
  if (*(float*)(v1 + 1080) != 0.0) {
    v48 = *(_QWORD*)(v1 + 824);
    if (*(_QWORD*)(v48 + 408) == 0) {
      v56 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v48 + 400) + 24LL) + 1104LL);
      if (v56 != 0) {
        if (*(_BYTE*)(v1 + 1113) == 1) {
          v57 = (**(__int64 (***)(__int64))(v1 + 1064))(v1 + 1064);
          v58 = 0.0;
          v59 = *(_DWORD*)(v1 + 1072);
          v60 = *(unsigned __int8*)(v1 + 1112);
          if ((v57 & 1) != 0) {
            v58 = *(float*)(v1 + 1080);
          }
          v61 = *(float*)(v1 + 1080) - v58;
          *(float*)(v1 + 1080) = v61;
          if (v60 == 1) {
            v62 = (float*)v91;
            LODWORD(v91[0]) = 0;
            if (v61 < 0.0) {
              v62 = (float*)(v1 + 1080);
            }
          }
          else {
            v62 = (float*)v91;
            LODWORD(v91[0]) = 0;
            if (v61 > 0.0) {
              v62 = (float*)(v1 + 1080);
            }
          }
          v73 = *(_DWORD*)(v1 + 1100);
          v74 = v58 + *(float*)(v1 + 1096);
          v11 = *v62 == 0.0;
          *(float*)(v1 + 1080) = *v62;
          v75 = (int)v74;
          *(float*)(v1 + 1096) = v74;
          if (v11) {
            v75 = v73;
          }
          *(_DWORD*)(v1 + 1072) = v75;
          if (v75 >= v73) {
            v76 = 1072;
          }
          else {
            v76 = 1100;
          }
          if (v73 >= v75) {
            v77 = 1072;
          }
          else {
            v77 = 1100;
          }
          if (v60 != 0) {
            v78 = v76;
          }
          else {
            v78 = v77;
          }
          v79 = *(_DWORD*)(v1 + v78);
          *(_BYTE*)(v1 + 1094) = 0;
          *(_DWORD*)(v1 + 1072) = v79;
          result = (*(__int64 (**)(__int64))(*(_QWORD*)(v1 + 1064) + 48LL))(
              v1 + 1064);
          v72 = *(_DWORD*)(v1 + 1072) - v59;
        }
        else {
          v72 = 0;
        }
        v80 = *(_QWORD*)(*(_QWORD*)(v56 + 24) + 1104LL);
        if (v80 != 0) {
          v81 = *(_QWORD*)(v1 + 824);
          v82 = *(unsigned __int16*)(v80 + 16);
          v83 = *(_QWORD*)(v81 + 568);
          v84 = *(_QWORD*)(v81 + 560);
          if (v82 < (v83 - v84) >> 1) {
            v85 = 2 * v82;
            v86 = *(unsigned __int16*)(v80 + 412);
            v87 = *(_WORD*)(v84 + v85);
            v88 = v72 + (v87 & 0x3FF);
            if (v86 >= v88) {
              LOWORD(v86) = v88;
            }
            v89 = v86 & 0x3FF;
            if (v88 >= 0) {
              v90 = v89;
            }
            else {
              v90 = 0;
            }
            *(_WORD*)(v84 + v85) = v90 | v87 & 0xFC00;
          }
        }
      }
    }
  }
  if (*(_BYTE*)(v1 + 928) == 1 && *(float*)(v1 + 1216) != 0.0) {
    v49 = *(_QWORD*)(v1 + 824);
    if (*(_BYTE*)(v1 + 1249) == 1) {
      v50 = (**(__int64 (***)(__int64))(v1 + 1200))(v1 + 1200);
      v51 = 0.0;
      v52 = *(_DWORD*)(v1 + 1208);
      v53 = *(unsigned __int8*)(v1 + 1248);
      if ((v50 & 1) != 0) {
        v51 = *(float*)(v1 + 1216);
      }
      v54 = *(float*)(v1 + 1216) - v51;
      *(float*)(v1 + 1216) = v54;
      if (v53 == 1) {
        v55 = (float*)v91;
        LODWORD(v91[0]) = 0;
        if (v54 < 0.0) {
          v55 = (float*)(v1 + 1216);
        }
      }
      else {
        v55 = (float*)v91;
        LODWORD(v91[0]) = 0;
        if (v54 > 0.0) {
          v55 = (float*)(v1 + 1216);
        }
      }
      v65 = *(_DWORD*)(v1 + 1236);
      v66 = v51 + *(float*)(v1 + 1232);
      v11 = *v55 == 0.0;
      *(float*)(v1 + 1216) = *v55;
      v67 = (int)v66;
      *(float*)(v1 + 1232) = v66;
      if (v11) {
        v67 = v65;
      }
      *(_DWORD*)(v1 + 1208) = v67;
      if (v67 >= v65) {
        v68 = 1208;
      }
      else {
        v68 = 1236;
      }
      if (v65 >= v67) {
        v69 = 1208;
      }
      else {
        v69 = 1236;
      }
      if (v53 != 0) {
        v70 = v68;
      }
      else {
        v70 = v69;
      }
      v71 = *(_DWORD*)(v1 + v70);
      *(_BYTE*)(v1 + 1230) = 0;
      *(_DWORD*)(v1 + 1208) = v71;
      (*(void (**)(__int64))(*(_QWORD*)(v1 + 1200) + 48LL))(v1 + 1200);
      v63 = (unsigned int)(*(_DWORD*)(v1 + 1208) - v52);
      v64 = *(_QWORD*)(v1 + 824);
      v91[0] = 0;
      v91[1] = v64;
      if (v64 == 0) {
        return GameRoutine_931c00(v49 + 1880, v91, v63);
      }
    }
    else {
      v63 = 0;
      v64 = *(_QWORD*)(v1 + 824);
      v91[0] = 0;
      v91[1] = v49;
      if (v49 == 0) {
        return GameRoutine_931c00(v49 + 1880, v91, v63);
      }
    }
    v91[0] = *(_QWORD*)(v64 + 392);
    return GameRoutine_931c00(v49 + 1880, v91, v63);
  }
  return result;
}

__int64 TelopBattleExp_Unknown47(__int64 a1)
{
  float v1;
  unsigned __int8* v2;
  unsigned int v3;
  bool v4;
  int v5;
  unsigned __int8* v7;
  unsigned int v8;
  int v9;
  float v11;
  float v12;

  if (*(_BYTE*)(a1 + 920) == 1) {
    v1 = *(float*)(a1 + 1352);
    if (v1 < 90.0) {
      v11 = 60.0 / (float)*(int*)(*game_g_frame_clock_ptr[0] + 476);
      if (v11 <= 0.0) {
        v11 = 1.0;
      }
      if ((*(_DWORD*)(game_g_game_setting + 944) & 0xB) != 0) {
        v11 = v11 * 8.0;
      }
      v12 = v1 + v11;
      if (v12 > 90.0) {
        v12 = 90.0;
      }
      *(float*)(a1 + 1352) = v12;
    }
    else {
      v2 = *(unsigned __int8**)(a1 + 16);
      if (v2 != nullptr) {
        v3 = *v2;
        v4 = v3 > 0x10;
        v5 = (1 << v3) & 0x1CE00;
        if (!v4 && v5 != 0) {
          *(_WORD*)(a1 + 136) |= 0x80u;
        }
      }
      *(_WORD*)(a1 + 136) |= 8u;
    }
    return GameRoutine_1743280(a1);
  }
  else {
    v7 = *(unsigned __int8**)(a1 + 16);
    if (v7 != nullptr) {
      v8 = *v7;
      v4 = v8 > 0x10;
      v9 = (1 << v8) & 0x1CE00;
      if (!v4 && v9 != 0) {
        *(_WORD*)(a1 + 136) |= 0x80u;
      }
    }
    *(_WORD*)(a1 + 136) |= 8u;
  }
  return a1;
}

__int64 TelopBattleExp_Destructor(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  _QWORD* v8;
  _QWORD* v9;
  _QWORD* v10;
  __int64 v11;
  bool v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;

  v1 = *(_QWORD*)(a1 + 1400);
  *(_QWORD*)a1 = game_telop_TelopBattleExp_vtable;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak();
  }
  v3 = *(_QWORD*)(a1 + 1360);
  v4 = fw_memory_g_heap_manager_ptr;
  if (v3 != 0) {
    v5 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    *(_QWORD*)(a1 + 1368) = v3;
    v6 = 128;
    if (*(_QWORD*)(v5 + 200) == 0) {
      v6 = 56;
    }
    nn_mem_StandardAllocator_Free(v5 + v6, v3);
  }
  v7 = *(_QWORD**)(a1 + 1328);
  if (v7 != nullptr) {
    v8 = *(_QWORD**)(a1 + 1336);
    if (v7 == v8) {
      goto LABEL_14;
    }
    v9 = v8 - 20;
    v10 = v8 - 20;
    do {
      v11 = *v10;
      v10 -= 20;
      (*(void (**)(_QWORD*))(v11 + 24))(v9);
      v12 = v9 == v7;
      v9 = v10;
    } while (!v12);
    v13 = *(_QWORD**)(a1 + 1328);
    *(_QWORD*)(a1 + 1336) = v7;
    v7 = v13;
    if (v13 != nullptr) {
    LABEL_14:
      v14 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v14 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v14, v7);
    }
  }
  *(_QWORD*)(a1 + 1200) = game_gameui_GaugeUtil_ExpChange_vtable;
  if ((*(_BYTE*)(a1 + 1304) & 1) != 0) {
    v15 = *(_QWORD*)(a1 + 1320);
    if (v15 != 0) {
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v16 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v16, v15);
    }
  }
  if ((*(_BYTE*)(a1 + 1280) & 1) != 0) {
    v17 = *(_QWORD*)(a1 + 1296);
    if (v17 != 0) {
      v18 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v18 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v18, v17);
    }
  }
  if ((*(_BYTE*)(a1 + 1256) & 1) != 0) {
    v19 = *(_QWORD*)(a1 + 1272);
    if (v19 != 0) {
      v20 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v20 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v20, v19);
    }
  }
  *(_QWORD*)(a1 + 1064) = game_gameui_GaugeUtil_ExpChange_vtable;
  if ((*(_BYTE*)(a1 + 1168) & 1) != 0) {
    v21 = *(_QWORD*)(a1 + 1184);
    if (v21 != 0) {
      v22 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v22 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v22, v21);
    }
  }
  if ((*(_BYTE*)(a1 + 1144) & 1) != 0) {
    v23 = *(_QWORD*)(a1 + 1160);
    if (v23 != 0) {
      v24 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v24 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v24, v23);
    }
  }
  if ((*(_BYTE*)(a1 + 1120) & 1) != 0) {
    v25 = *(_QWORD*)(a1 + 1136);
    if (v25 != 0) {
      v26 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v26 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v26, v25);
    }
  }
  *(_QWORD*)(a1 + 936) = game_gameui_GaugeUtil_ExpChange_vtable;
  if ((*(_BYTE*)(a1 + 1040) & 1) != 0) {
    v27 = *(_QWORD*)(a1 + 1056);
    if (v27 != 0) {
      v28 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v28 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v28, v27);
    }
  }
  if ((*(_BYTE*)(a1 + 1016) & 1) != 0) {
    v29 = *(_QWORD*)(a1 + 1032);
    if (v29 != 0) {
      v30 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v30 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v30, v29);
    }
  }
  if ((*(_BYTE*)(a1 + 992) & 1) != 0) {
    v31 = *(_QWORD*)(a1 + 1008);
    if (v31 != 0) {
      v32 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v32 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v32, v31);
    }
  }
  return GameRoutine_1386f80(a1);
}

#pragma GCC visibility pop
