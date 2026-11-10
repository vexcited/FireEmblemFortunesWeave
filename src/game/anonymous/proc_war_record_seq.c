#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_g_game_setting_ptr;
extern int GameData_2272778;
__int64 ProcWarRecordSeq_Unknown2(__int64 result);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, _QWORD,
                                                       _QWORD);
__int64 Alignment_56b600(void);
__int64 GameRoutine_155f760(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1840740(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1840c80(void);
__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindAlignment(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 fw_memory_g_heap_manager_ptr;
extern char** msg_MessageManager_empty_text__ptr;
__int64 ProcWarRecordSeq_19b4d60(__int64 result, float a2);
__int64 ProcWarRecordSeq_GroupDrawObj_Unknown3(__int64 a1);
__int64 ProcWarRecordSeq_RecordDrawObj_Unknown3(__int64 a1);
__int64 GameRoutine_155f760_alt1(__int64, __int64,
                                 const char*) __asm__("GameRoutine_155f760");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
__int64 ui_LayoutAccessor_SetPaneVisible_alt1(
    __int64 result, __int64, char) __asm__("ui_LayoutAccessor_SetPaneVisible");

__int64 ProcWarRecordSeq_19b4d60(__int64 result, float a2)
{

#pragma clang fp contract(off)
  int v2;
  __int64 v4;
  float v5;
  __int64 v8;
  __int64 v9;
  __int64* v11;
  const char* v12;
  __int64 v13;
  __int64 v14;
  _BOOL4 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  float32x4_t v19;
  unsigned __int64 v20;
  int32x2_t* v21;
  float32x4_t v22;
  __int64 v23;

  v4 = result;
  v5 = a2 + *(float*)(result + 12);
  if (*(_QWORD*)(result + 40) == 0 && v5 >= *(float*)(result + 24) &&
      v5 < *(float*)(result + 28)) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
    if (result != 0) {
      v8 = *(_QWORD*)v4;
      *(_QWORD*)(v4 + 40) = result;
      result = (*(__int64 (**)(__int64))(v8 + 24))(v4);
    }
  }
  v9 = *(_QWORD*)(v4 + 40);
  if (v9 != 0 && v5 >= *(float*)(v4 + 28)) {
    result = ui_LayoutAccessor_SetPaneVisible_alt1(*(_QWORD*)(v4 + 32), v9, 0);
    *(_QWORD*)(v4 + 40) = 0;
    return result;
  }
  if (v9 != 0) {
    v11 = *(__int64**)(v4 + 32);
    if (v11[2] != 0) {
      result = v11[1];
      if (result != 0) {
        v12 = *(const char**)(v4 + 40);
        v23 = *(_QWORD*)(v4 + 8);
        result = std___1___shared_weak_count_lock_alt1(result);
        if (result == 0) {
          goto LABEL_29;
        }
        v13 = *v11;
        if (*v11 != 0) {
          v2 = *(unsigned __int8*)(v13 + 24);
          v14 = v13 + 152;
          if (v2 == 0) {
            v14 = 0;
          }
          v15 = v14 != v11[2];
        }
        else {
          v15 = true;
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          v16 = result;
          (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
          result = std___1___shared_weak_count___release_weak_alt1(v16);
        }
        if (!v15) {
          if ((v2 & 1) == 0) {
            return result;
          }
        }
        else {
        LABEL_29:
          v17 = v11[1];
          if (v17 == 0 || *(_QWORD*)(v17 + 8) == -1) {
            return result;
          }
        }
        v18 = v11[2];
        if (v18 != 0) {
          result = GameRoutine_155f760_alt1((__int64)v11, v18, v12);
          if (result != 0) {
            LODWORD(v20) = v23;
            v21 = *(int32x2_t**)(result + 24);
            *((float*)&v20 + 1) = a2 + *((float*)&v23 + 1);
            LANES128(v19).n128_u64[0] = v20;
            if (v21 != nullptr) {
              LANES128(v22).n128_u64[0] =
                  LANES64_OF(vzip2_s32(v21[15], v21[17])).n64_u64[0];
              LANES128(v22).n128_u64[1] = LANES64(v21[19]).n64_u32[1];
              v19 = vsubq_f32(v19, v22);
            }
            *(_QWORD*)(result + 48) = LANES128(v19).n128_u64[0];
            *(_DWORD*)(result + 56) = LANES128(v19).n128_u32[2];
            *(_BYTE*)(result + 88) |= 0x10u;
          }
        }
      }
    }
  }
  return result;
}

__int64 ProcWarRecordSeq_GroupDrawObj_Unknown3(__int64 a1)
{
  int v1;
  __int64* v2;
  unsigned __int32 v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _BOOL4 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int32x4_t* v14;
  __int64 v15;
  __int64 v16;
  __int64 result;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  char* v23;
  char v24;
  __int64* v25;
  __int64 v26;
  char* v27;
  char** v28;
  char* v29;
  char* v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  _QWORD v37[4];
  int v38;
  int v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;

  v2 = *(__int64**)(a1 + 32);
  v3 = 0;
  if (v2[2] == 0) {
    goto LABEL_19;
  }
  v5 = v2[1];
  if (v5 == 0) {
    goto LABEL_19;
  }
  v6 = *(_QWORD*)(a1 + 40);
  v7 = std___1___shared_weak_count_lock(v5);
  if (v7 != 0) {
    v8 = *v2;
    if (*v2 != 0) {
      v1 = *(unsigned __int8*)(v8 + 24);
      v9 = v8 + 152;
      if (v1 == 0) {
        v9 = 0;
      }
      v10 = v9 != v2[2];
    }
    else {
      v10 = true;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                         0xFFFFFFFFFFFFFFFFLL) != 0) {
      if (v10) {
        goto LABEL_11;
      }
    }
    else {
      v12 = v7;
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      std___1___shared_weak_count___release_weak(v12);
      if (v10) {
        goto LABEL_11;
      }
    }
    v3 = 0;
    if ((v1 & 1) == 0) {
      goto LABEL_19;
    }
    goto LABEL_16;
  }
LABEL_11:
  v11 = v2[1];
  v3 = 0;
  if (v11 != 0 && *(_QWORD*)(v11 + 8) != -1) {
  LABEL_16:
    v13 = v2[2];
    if (v13 != 0) {
      v14 = (int32x4_t*)GameRoutine_155f760(v2, v13, v6);
      v3 = 0;
      if (v14 != nullptr) {
        v3 = LANES128_OF(vdupq_laneq_s32(v14[7], 3)).n128_u32[0];
      }
    }
  }
LABEL_19:
  v15 = *(_QWORD*)(a1 + 32);
  v16 = *(_QWORD*)(a1 + 40);
  *(_DWORD*)(a1 + 8) = v3;
  ui_LayoutAccessor_SetPaneVisible(v15, v16, 1);
  LayoutAccessor_1560070((void*)(&v35), *(_QWORD*)(a1 + 32),
                         *(_QWORD*)(a1 + 40));
  result = v36;
  if (v36 != 0) {
    if (*(_QWORD*)(v36 + 8) == -1) {
      return std___1___shared_weak_count___release_weak(result);
    }
    v18 = std___1___shared_weak_count_lock(v36);
    if (v18 != 0) {
      v19 = v35;
      if (atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v20 = v18;
        (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
        std___1___shared_weak_count___release_weak(v20);
      }
    }
    else {
      v19 = 0;
    }
    v21 = *(_QWORD*)(a1 + 48);
    v22 = *(_QWORD*)(v21 + 40);
    v23 = (*(_BYTE*)v21 & 1) != 0 ? *(char**)(v21 + 16) : (char*)(v21 + 1);
    v24 = *(_BYTE*)(v21 + 24);
    v25 = msg_MessageManager_instance__ptr[0];
    v26 = v21 + 25;
    v27 = (char*)((v24 & 1) != 0 ? v22 : v26);
    v28 = msg_MessageManager_empty_text__ptr;
    v29 = v23 != nullptr ? v23 : *msg_MessageManager_empty_text__ptr;
    GameRoutine_60a020(*msg_MessageManager_instance__ptr[0] + 14704, v29);
    v30 = v27 != nullptr ? v27 : *v28;
    GameRoutine_60a020(*v25 + 14728, v30);
    v31 = *v25;
    v40 = -1;
    v41 = -1;
    v42 = -1;
    v43 = -1;
    v44 = -1;
    v45 = -1;
    v46 = -1;
    v47 = -1;
    v48 = -1;
    v49 = -1;
    v50 = -1;
    v51 = -1;
    v37[0] = GameData_212e348 + 2;
    v37[1] = 0xFFFF0001FFFF0000LL;
    v37[2] = 0xFFFF0004FFFF0002LL;
    v37[3] = 0xFFFF0006FFFF0005LL;
    v52 = 8;
    v38 = -65529;
    v39 = -65528;
    v32 = GameRoutine_a4dbe0(v31, "MID_Chapter_PartStory", 0, v37);
    if (v32 != 0) {
      v33 = v32;
      v34 = ui_LayoutAccessor_FindTextBox(v19, "T_PartStory");
      if (v34 != 0) {
        GameRoutine_156c5d0(v34, v33, 0);
      }
    }
    result = v36;
    if (v36 != 0) {
      return std___1___shared_weak_count___release_weak(result);
    }
  }
  return result;
}

__int64 ProcWarRecordSeq_RecordDrawObj_Unknown3(__int64 a1)
{
  int v1;
  __int64* v2;
  unsigned __int32 v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _BOOL4 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int32x4_t* v14;
  __int64 v15;
  __int64 v16;
  __int64 result;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64* v22;
  char v23;
  __int64 v24;
  __int64 v25;
  char* v26;
  char* v27;
  __int64 v28;
  __int64 v29;
  char v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64* v35;
  __int64 v36;
  __int64* v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  char v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  char v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  _QWORD v61[2];
  char* v62;
  __int64 v63;
  __int64 v64;
  _QWORD v65[2];
  unsigned __int64 v66;
  unsigned __int64 v67;
  int v68;
  int v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;

  v2 = *(__int64**)(a1 + 32);
  v3 = 0;
  if (v2[2] == 0) {
    goto LABEL_19;
  }
  v5 = v2[1];
  if (v5 == 0) {
    goto LABEL_19;
  }
  v6 = *(_QWORD*)(a1 + 40);
  v7 = std___1___shared_weak_count_lock(v5);
  if (v7 == 0) {
    goto LABEL_11;
  }
  v8 = *v2;
  if (*v2 != 0) {
    v1 = *(unsigned __int8*)(v8 + 24);
    v9 = v8 + 152;
    if (v1 == 0) {
      v9 = 0;
    }
    v10 = v9 != v2[2];
  }
  else {
    v10 = true;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v10) {
    LABEL_11:
      v11 = v2[1];
      v3 = 0;
      if (v11 == 0 || *(_QWORD*)(v11 + 8) == -1) {
        goto LABEL_19;
      }
      goto LABEL_16;
    }
  }
  else {
    v12 = v7;
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak(v12);
    if (v10) {
      goto LABEL_11;
    }
  }
  v3 = 0;
  if ((v1 & 1) != 0) {
  LABEL_16:
    v13 = v2[2];
    if (v13 != 0) {
      v14 = (int32x4_t*)GameRoutine_155f760(v2, v13, v6);
      v3 = 0;
      if (v14 != nullptr) {
        v3 = LANES128_OF(vdupq_laneq_s32(v14[7], 3)).n128_u32[0];
      }
    }
  }
LABEL_19:
  v15 = *(_QWORD*)(a1 + 32);
  v16 = *(_QWORD*)(a1 + 40);
  *(_DWORD*)(a1 + 8) = v3;
  ui_LayoutAccessor_SetPaneVisible(v15, v16, 1);
  LayoutAccessor_1560070((void*)(&v63), *(_QWORD*)(a1 + 32),
                         *(_QWORD*)(a1 + 40));
  result = v64;
  if (v64 == 0) {
    return result;
  }
  if (*(_QWORD*)(v64 + 8) != -1) {
    v18 = std___1___shared_weak_count_lock(v64);
    if (v18 != 0) {
      v19 = v63;
      if (atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v20 = v18;
        (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
        std___1___shared_weak_count___release_weak(v20);
      }
    }
    else {
      v19 = 0;
    }
    v21 = *(_QWORD*)(a1 + 48);
    v23 = *(_BYTE*)(v21 + 48);
    v22 = (__int64*)(v21 + 48);
    if ((v23 & 1) != 0) {
      fw_text_String_CopyTerminated(v61, *(_QWORD*)(*(_QWORD*)(a1 + 48) + 64LL),
                                    *(_QWORD*)(*(_QWORD*)(a1 + 48) + 56LL));
    }
    else {
      v24 = *v22;
      v25 = v22[1];
      v26 = (char*)v22[2];
      v61[0] = v24;
      v61[1] = v25;
      v62 = v26;
    }
    if ((v61[0] & 1) != 0) {
      v27 = v62;
    }
    else {
      v27 = (char*)v61 + 1;
    }
    if (v27 != nullptr) {
      v28 = ui_LayoutAccessor_FindTextBox(v19, "T_Chapter");
      if (v28 != 0) {
        GameRoutine_156c5d0(v28, v27, 0);
      }
    }
    v29 = *(_QWORD*)(a1 + 48);
    v30 = *(_BYTE*)(v29 + 72);
    v31 = *(_QWORD*)(v29 + 88);
    v32 = v29 + 73;
    if ((v30 & 1) != 0) {
      v33 = v31;
    }
    else {
      v33 = v32;
    }
    if (v33 != 0) {
      v34 = ui_LayoutAccessor_FindTextBox(v19, "T_TitleBattle");
      if (v34 != 0) {
        GameRoutine_156c5d0(v34, v33, 0);
      }
    }
    v35 = msg_MessageManager_instance__ptr[0];
    v70 = -1;
    v71 = -1;
    v72 = -1;
    v73 = -1;
    v36 = *msg_MessageManager_instance__ptr[0];
    v37 = GameData_212e348;
    v74 = -1;
    v75 = -1;
    v76 = -1;
    v77 = -1;
    v78 = -1;
    v79 = -1;
    v80 = -1;
    v81 = -1;
    v65[0] = GameData_212e348 + 2;
    v65[1] = 0xFFFF0001FFFF0000LL;
    v66 = 0xFFFF0004FFFF0002LL;
    v67 = 0xFFFF0006FFFF0005LL;
    v82 = 8;
    v68 = -65529;
    v69 = -65528;
    v38 = GameRoutine_a4dbe0(v36, "MID_BtlMenu_TurnCount", 0, v65);
    if (v38 != 0) {
      v39 = v38;
      v40 = ui_LayoutAccessor_FindTextBox(v19, "T_Turn");
      if (v40 != 0) {
        GameRoutine_156c5d0(v40, v39, 0);
      }
    }
    v41 = *(_QWORD*)(a1 + 48);
    v42 = *(_BYTE*)(v41 + 96);
    v43 = *(_QWORD*)(v41 + 112);
    v44 = v41 + 97;
    if ((v42 & 1) != 0) {
      v45 = v43;
    }
    else {
      v45 = v44;
    }
    if (v45 != 0) {
      v46 = ui_LayoutAccessor_FindTextBox(v19, "T_TurnNum");
      if (v46 != 0) {
        GameRoutine_156c5d0(v46, v45, 0);
      }
    }
    if (ui_LayoutAccessor_FindAlignment(v19, "A_Turn") != 0) {
      Alignment_56b600();
    }
    v47 = *v35;
    v70 = -1;
    v71 = -1;
    v72 = -1;
    v73 = -1;
    v74 = -1;
    v75 = -1;
    v76 = -1;
    v77 = -1;
    v78 = -1;
    v79 = -1;
    v80 = -1;
    v81 = -1;
    v65[0] = v37 + 2;
    v65[1] = 0xFFFF0001FFFF0000LL;
    v66 = 0xFFFF0004FFFF0002LL;
    v67 = 0xFFFF0006FFFF0005LL;
    v82 = 8;
    v68 = -65529;
    v69 = -65528;
    v48 = GameRoutine_a4dbe0(v47, "MID_Sys_Result_MVP", 0, v65);
    if (v48 != 0) {
      v49 = v48;
      v50 = ui_LayoutAccessor_FindTextBox(v19, "T_MVP");
      if (v50 != 0) {
        GameRoutine_156c5d0(v50, v49, 0);
      }
    }
    v51 = *(_QWORD*)(a1 + 48);
    v52 = *(_BYTE*)(v51 + 120);
    v53 = *(_QWORD*)(v51 + 136);
    v54 = v51 + 121;
    if ((v52 & 1) != 0) {
      v55 = v53;
    }
    else {
      v55 = v54;
    }
    if (v55 != 0) {
      v56 = ui_LayoutAccessor_FindTextBox(v19, "T_Name");
      if (v56 != 0) {
        GameRoutine_156c5d0(v56, v55, 0);
      }
    }
    if (ui_LayoutAccessor_FindAlignment(v19, "A_Name") != 0) {
      Alignment_56b600();
    }
    v57 = ui_LayoutAccessor_FindPane(v19, "Face");
    if (v57 != 0) {
      v58 = __dynamic_cast(v57, GameData_212d670[0], GameData_212d678[0], 0);
      if (v58 != 0) {
        v59 = *(_QWORD*)(*(_QWORD*)(a1 + 48) + 216LL);
        if (v59 == 0) {
          GameRoutine_1840c80();
          if ((v61[0] & 1) == 0) {
            goto LABEL_71;
          }
          goto LABEL_67;
        }
        GameRoutine_1840740(v58, 0, v59, 6, 1);
      }
    }
    if ((v61[0] & 1) == 0) {
      goto LABEL_71;
    }
  LABEL_67:
    if (v62 != nullptr) {
      v60 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v60 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v60);
    }
  LABEL_71:
    result = v64;
    if (v64 == 0) {
      return result;
    }
  }
  return std___1___shared_weak_count___release_weak(result);
}

__int64 ProcWarRecordSeq_Unknown2(__int64 result)
{
  __int64 v1;
  int v2;
  int v3;
  __int64* v4;
  __int64* v5;
  int v6;
  int v7;
  __int64 v8;
  unsigned __int8* v9;
  unsigned int v10;
  bool v11;
  int v12;
  float v14;
  float v15;
  int v16;
  int v17;
  __int64 v18;

  v1 = result;
  if (game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3 &&
      (((v2 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
           ? (v3 = 2)
           : (v3 = 3),
       (v3 & v2) == 0)) {
    v18 = *(_QWORD*)(result + 8);
    if (v18 != 0) {
      while (1) {
        if (*(_BYTE*)v18 == 2) {
          if (*(_DWORD*)(v18 + 32) == 1) {
            *(_QWORD*)(result + 16) = v18;
            *(_WORD*)(result + 136) &= ~0x80u;
            return result;
          }
        }
        else if (*(_BYTE*)v18 == 0) {
          return result;
        }
        v18 += 64;
      }
    }
  }
  else {
    v4 = *(__int64**)(result + 176);
    v5 = *(__int64**)(result + 184);
    if ((*(_DWORD*)(*(_QWORD*)game_g_game_setting_ptr + 944LL) & 9) != 0) {
      v6 = 16;
    }
    else {
      v6 = 1;
    }
    if (v4 == v5) {
      v15 = *(float*)(result + 200);
      v14 = *(float*)(result + 204);
      v16 = v6 & 1;
      if ((*(_DWORD*)(*(_QWORD*)game_g_game_setting_ptr + 944LL) & 9) != 0) {
        v17 = v6 & 0x10;
        do {
          v17 -= 8;
          v15 =
              v14 +
              (float)(v14 +
                      (float)(v14 +
                              (float)(v14 +
                                      (float)(v14 +
                                              (float)(v14 +
                                                      (float)(v14 +
                                                              (float)(v14 +
                                                                      v15)))))));
        } while (v17 != 0);
      }
      if ((v6 & 1) != 0) {
        do {
          v15 = v14 + v15;
          --v16;
        } while (v16 != 0);
      }
      *(float*)(result + 200) = v15;
    }
    else {
      v7 = 0;
      while (1) {
        *(float*)(v1 + 200) = *(float*)(v1 + 204) + *(float*)(v1 + 200);
        if (v4 != v5) {
          do {
            v8 = *v4;
            v4 += 2;
            result = (*(__int64 (**)(__int64, float))(*(_QWORD*)v8 + 32LL))(
                v8, *(float*)(v1 + 200));
          } while (v4 != v5);
          v4 = *(__int64**)(v1 + 176);
          v5 = *(__int64**)(v1 + 184);
        }
        if (v5 != v4 &&
            (float)((float)(*(float*)(*(v5 - 2) + 12) -
                            *(float*)(*(v5 - 2) + 20)) +
                    *(float*)(v1 + 200)) > (float)(GameData_2272778 + 16)) {
          break;
        }
        if (++v7 == v6) {
          return result;
        }
      }
      v9 = *(unsigned __int8**)(v1 + 16);
      if (v9 != nullptr) {
        v10 = *v9;
        v11 = v10 > 0x10;
        v12 = (1 << v10) & 0x1CE00;
        if (!v11 && v12 != 0) {
          *(_WORD*)(v1 + 136) |= 0x80u;
        }
      }
      *(_WORD*)(v1 + 136) |= 8u;
    }
  }
  return result;
}

#pragma GCC visibility pop
