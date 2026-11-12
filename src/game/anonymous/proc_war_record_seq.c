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
__attribute__((swiftcall)) void
LayoutAccessor_1560070_alt1(PSEUDO_X8, __int64*,
                            const char*) __asm__("LayoutAccessor_1560070");
__int64 Alignment_56b600_alt1(__int64 result) __asm__("Alignment_56b600");
__int64 GameHr_1840740(__int64, unsigned int, __int64, unsigned __int8, char);
__int64 GameRoutine_1840c80_alt1(__int64, unsigned int,
                                 __int64) __asm__("GameRoutine_1840c80");
__int64 fw_text_String_CopyTerminated_alt1(
    __int64*, __int64,
    unsigned __int64) __asm__("fw_text_String_CopyTerminated");
__int64 ui_LayoutAccessor_FindAlignment_alt1(__int64*, __int64) __asm__(
    "ui_LayoutAccessor_FindAlignment");
__int64
ui_LayoutAccessor_FindPane_alt1(__int64*,
                                __int64) __asm__("ui_LayoutAccessor_FindPane");
__int64 ui_LayoutAccessor_FindTextBox_alt1(__int64*, __int64) __asm__(
    "ui_LayoutAccessor_FindTextBox");
char* GameRoutine_60a020_alt1(char*, const char*) __asm__("GameRoutine_60a020");
char* GameRoutine_a4dbe0_alt1(__int64, _BYTE*,
                              char) __asm__("GameRoutine_a4dbe0");
void GameRoutine_156c5d0_alt1(__int64, __int64,
                              char) __asm__("GameRoutine_156c5d0");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 LayoutAccessor_155e140(__int64*);
__int64 game_ProcInst_Unregister(__int64 result);
__int64 nn_oe_SetUserInactivityDetectionTimeExtended(bool);
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__int64 snd_startSlotVolume_100b50(int*, __int64, float);
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_anonymous_ProcWarRecordSeq_vtable[])();
unsigned __int8* snd_fnd_calcCrc32(unsigned __int8* result, int);
void GameRoutine_1563f90(__int64, __int64);
void GameRoutine_1564060(__int64*);
void GameRoutine_658c00(__int64*);
void snd_Fade_Fade_10c830(__int64, float);
void ProcWarRecordSeq_Destructor(__int64 a1);

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
  const char* v6;
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
  __int64* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  char* v23;
  char v24;
  __int64* v25;
  __int64 v26;
  char* v27;
  char** v28;
  const char* v29;
  const char* v30;
  __int64 v31;
  char* v32;
  __int64 v33;
  __int64 v34;
  struct {
    __int64* v35;
    __int64 v36;
    __int64* v37;
    unsigned __int64 v38;
    unsigned __int64 v39;
    unsigned __int64 v40;
    int v41;
    int v42;
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
    __int64 v53;
    __int64 v54;
    __int64 v55;
  } v35_;

  v2 = *(__int64**)(a1 + 32);
  v3 = 0;
  if (v2[2] == 0) {
    goto LABEL_19;
  }
  v5 = v2[1];
  if (v5 == 0) {
    goto LABEL_19;
  }
  v6 = *(const char**)(a1 + 40);
  v7 = std___1___shared_weak_count_lock_alt1(v5);
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
      std___1___shared_weak_count___release_weak_alt1(v12);
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
      v14 = (int32x4_t*)GameRoutine_155f760_alt1((__int64)v2, v13, v6);
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
  ui_LayoutAccessor_SetPaneVisible_alt1(v15, v16, 1);
  LayoutAccessor_1560070_alt1((void*)(&v35_.v35), *(__int64**)(a1 + 32),
                              *(const char**)(a1 + 40));
  result = v35_.v36;
  if (v35_.v36 != 0) {
    if (*(_QWORD*)(v35_.v36 + 8) == -1) {
      return std___1___shared_weak_count___release_weak_alt1(result);
    }
    v18 = std___1___shared_weak_count_lock_alt1(v35_.v36);
    if (v18 != 0) {
      v19 = v35_.v35;
      if (atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v20 = v18;
        (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
        std___1___shared_weak_count___release_weak_alt1(v20);
      }
    }
    else {
      v19 = nullptr;
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
    GameRoutine_60a020_alt1(
        (char*)(*msg_MessageManager_instance__ptr[0] + 14704), v29);
    v30 = v27 != nullptr ? v27 : *v28;
    GameRoutine_60a020_alt1((char*)(*v25 + 14728), v30);
    v31 = *v25;
    v35_.v43 = -1;
    v35_.v44 = -1;
    v35_.v45 = -1;
    v35_.v46 = -1;
    v35_.v47 = -1;
    v35_.v48 = -1;
    v35_.v49 = -1;
    v35_.v50 = -1;
    v35_.v51 = -1;
    v35_.v52 = -1;
    v35_.v53 = -1;
    v35_.v54 = -1;
    v35_.v37 = GameData_212e348 + 2;
    v35_.v38 = 0xFFFF0001FFFF0000LL;
    v35_.v39 = 0xFFFF0004FFFF0002LL;
    v35_.v40 = 0xFFFF0006FFFF0005LL;
    v35_.v55 = 8;
    v35_.v41 = -65529;
    v35_.v42 = -65528;
    v32 = GameRoutine_a4dbe0_alt1(v31, "MID_Chapter_PartStory", 0);
    if (v32 != nullptr) {
      v33 = (__int64)v32;
      v34 = ui_LayoutAccessor_FindTextBox_alt1(v19, (__int64)"T_PartStory");
      if (v34 != 0) {
        GameRoutine_156c5d0_alt1(v34, v33, 0);
      }
    }
    result = v35_.v36;
    if (v35_.v36 != 0) {
      return std___1___shared_weak_count___release_weak_alt1(result);
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
  const char* v6;
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
  __int64* v19;
  __int64 v20;
  __int64 v21;
  __int64* v22;
  char v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
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
  char* v38;
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
  char* v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  char v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  char v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  struct {
    __int64 v68[2];
    char* v69;
  } v68_;
  struct {
    __int64* v70;
    __int64 v71;
    __int64* v72;
    unsigned __int64 v73;
    unsigned __int64 v74;
    unsigned __int64 v75;
    int v76;
    int v77;
    __int64 v78;
    __int64 v79;
    __int64 v80;
    __int64 v81;
    __int64 v82;
    __int64 v83;
    __int64 v84;
    __int64 v85;
    __int64 v86;
    __int64 v87;
    __int64 v88;
    __int64 v89;
    __int64 v90;
  } v70_;

  v2 = *(__int64**)(a1 + 32);
  v3 = 0;
  if (v2[2] == 0) {
    goto LABEL_19;
  }
  v5 = v2[1];
  if (v5 == 0) {
    goto LABEL_19;
  }
  v6 = *(const char**)(a1 + 40);
  v7 = std___1___shared_weak_count_lock_alt1(v5);
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
    std___1___shared_weak_count___release_weak_alt1(v12);
    if (v10) {
      goto LABEL_11;
    }
  }
  v3 = 0;
  if ((v1 & 1) != 0) {
  LABEL_16:
    v13 = v2[2];
    if (v13 != 0) {
      v14 = (int32x4_t*)GameRoutine_155f760_alt1((__int64)v2, v13, v6);
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
  ui_LayoutAccessor_SetPaneVisible_alt1(v15, v16, 1);
  LayoutAccessor_1560070_alt1((void*)(&v70_.v70), *(__int64**)(a1 + 32),
                              *(const char**)(a1 + 40));
  result = v70_.v71;
  if (v70_.v71 == 0) {
    return result;
  }
  if (*(_QWORD*)(v70_.v71 + 8) != -1) {
    v18 = std___1___shared_weak_count_lock_alt1(v70_.v71);
    if (v18 != 0) {
      v19 = v70_.v70;
      if (atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v20 = v18;
        (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
        std___1___shared_weak_count___release_weak_alt1(v20);
      }
    }
    else {
      v19 = nullptr;
    }
    v21 = *(_QWORD*)(a1 + 48);
    v23 = *(_BYTE*)(v21 + 48);
    v22 = (__int64*)(v21 + 48);
    if ((v23 & 1) != 0) {
      fw_text_String_CopyTerminated_alt1(
          v68_.v68, *(_QWORD*)(*(_QWORD*)(a1 + 48) + 64LL),
          *(_QWORD*)(*(_QWORD*)(a1 + 48) + 56LL));
    }
    else {
      v24 = *v22;
      v25 = v22[1];
      v26 = v22[2];
      v68_.v68[0] = v24;
      v68_.v68[1] = v25;
      v68_.v69 = (char*)v26;
    }
    if ((v68_.v68[0] & 1) != 0) {
      v27 = v68_.v69;
    }
    else {
      v27 = (char*)v68_.v68 + 1;
    }
    if (v27 != nullptr) {
      v28 = ui_LayoutAccessor_FindTextBox_alt1(v19, (__int64)"T_Chapter");
      if (v28 != 0) {
        GameRoutine_156c5d0_alt1(v28, (__int64)v27, 0);
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
      v34 = ui_LayoutAccessor_FindTextBox_alt1(v19, (__int64)"T_TitleBattle");
      if (v34 != 0) {
        GameRoutine_156c5d0_alt1(v34, v33, 0);
      }
    }
    v35 = msg_MessageManager_instance__ptr[0];
    v70_.v78 = -1;
    v70_.v79 = -1;
    v70_.v80 = -1;
    v70_.v81 = -1;
    v36 = *msg_MessageManager_instance__ptr[0];
    v37 = GameData_212e348;
    v70_.v82 = -1;
    v70_.v83 = -1;
    v70_.v84 = -1;
    v70_.v85 = -1;
    v70_.v86 = -1;
    v70_.v87 = -1;
    v70_.v88 = -1;
    v70_.v89 = -1;
    v70_.v72 = GameData_212e348 + 2;
    v70_.v73 = 0xFFFF0001FFFF0000LL;
    v70_.v74 = 0xFFFF0004FFFF0002LL;
    v70_.v75 = 0xFFFF0006FFFF0005LL;
    v70_.v90 = 8;
    v70_.v76 = -65529;
    v70_.v77 = -65528;
    v38 = GameRoutine_a4dbe0_alt1(v36, "MID_BtlMenu_TurnCount", 0);
    if (v38 != nullptr) {
      v39 = (__int64)v38;
      v40 = ui_LayoutAccessor_FindTextBox_alt1(v19, (__int64)"T_Turn");
      if (v40 != 0) {
        GameRoutine_156c5d0_alt1(v40, v39, 0);
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
      v46 = ui_LayoutAccessor_FindTextBox_alt1(v19, (__int64)"T_TurnNum");
      if (v46 != 0) {
        GameRoutine_156c5d0_alt1(v46, v45, 0);
      }
    }
    v47 = ui_LayoutAccessor_FindAlignment_alt1(v19, (__int64)"A_Turn");
    if (v47 != 0) {
      Alignment_56b600_alt1(v47);
    }
    v48 = *v35;
    v70_.v78 = -1;
    v70_.v79 = -1;
    v70_.v80 = -1;
    v70_.v81 = -1;
    v70_.v82 = -1;
    v70_.v83 = -1;
    v70_.v84 = -1;
    v70_.v85 = -1;
    v70_.v86 = -1;
    v70_.v87 = -1;
    v70_.v88 = -1;
    v70_.v89 = -1;
    v70_.v72 = v37 + 2;
    v70_.v73 = 0xFFFF0001FFFF0000LL;
    v70_.v74 = 0xFFFF0004FFFF0002LL;
    v70_.v75 = 0xFFFF0006FFFF0005LL;
    v70_.v90 = 8;
    v70_.v76 = -65529;
    v70_.v77 = -65528;
    v49 = GameRoutine_a4dbe0_alt1(v48, "MID_Sys_Result_MVP", 0);
    if (v49 != nullptr) {
      v50 = (__int64)v49;
      v51 = ui_LayoutAccessor_FindTextBox_alt1(v19, (__int64)"T_MVP");
      if (v51 != 0) {
        GameRoutine_156c5d0_alt1(v51, v50, 0);
      }
    }
    v52 = *(_QWORD*)(a1 + 48);
    v53 = *(_BYTE*)(v52 + 120);
    v54 = *(_QWORD*)(v52 + 136);
    v55 = v52 + 121;
    if ((v53 & 1) != 0) {
      v56 = v54;
    }
    else {
      v56 = v55;
    }
    if (v56 != 0) {
      v57 = ui_LayoutAccessor_FindTextBox_alt1(v19, (__int64)"T_Name");
      if (v57 != 0) {
        GameRoutine_156c5d0_alt1(v57, v56, 0);
      }
    }
    v58 = ui_LayoutAccessor_FindAlignment_alt1(v19, (__int64)"A_Name");
    if (v58 != 0) {
      Alignment_56b600_alt1(v58);
    }
    v59 = ui_LayoutAccessor_FindPane_alt1(v19, (__int64)"Face");
    if (v59 != 0) {
      v60 = __dynamic_cast(v59, GameData_212d670[0], GameData_212d678[0], 0);
      if (v60 != 0) {
        v61 = *(_QWORD*)(a1 + 48);
        v62 = *(_QWORD*)(v61 + 216);
        if (v62 == 0) {
          v64 = *(_BYTE*)(v61 + 192);
          v65 = *(_QWORD*)(v61 + 208);
          v66 = v61 + 193;
          if ((v64 & 1) != 0) {
            v67 = v65;
          }
          else {
            v67 = v66;
          }
          GameRoutine_1840c80_alt1(v60, 0, v67);
          if ((v68_.v68[0] & 1) == 0) {
            goto LABEL_71;
          }
          goto LABEL_67;
        }
        GameHr_1840740(v60, 0, v62, 6u, 1);
      }
    }
    if ((v68_.v68[0] & 1) == 0) {
      goto LABEL_71;
    }
  LABEL_67:
    if (v68_.v69 != nullptr) {
      v63 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v63 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v63, (__int64)v68_.v69);
    }
  LABEL_71:
    result = v70_.v71;
    if (v70_.v71 == 0) {
      return result;
    }
  }
  return std___1___shared_weak_count___release_weak_alt1(result);
}

void ProcWarRecordSeq_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 i;
  __int64 v6;
  __int64 v7;
  __int64 j;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  _QWORD v23[25];
  unsigned int v24;

  *(_QWORD*)a1 = game_anonymous_ProcWarRecordSeq_vtable;
  if (*(_QWORD*)(a1 + 216) != 0) {
    LayoutAccessor_155e140((__int64*)(a1 + 232));
    v2 = *(_QWORD*)(a1 + 216);
    if (v2 != 0) {
      *(_BYTE*)(v2 + 2376) = 1;
    }
    v3 = *(_QWORD*)(a1 + 224);
    *(_QWORD*)(a1 + 216) = 0;
    *(_QWORD*)(a1 + 224) = 0;
    if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      std___1___shared_weak_count___release_weak_alt1(v3);
    }
  }
  v4 = *(_QWORD*)(a1 + 176);
  for (i = *(_QWORD*)(a1 + 184); i != v4; i -= 16) {
    v6 = *(_QWORD*)(i - 8);
    if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      std___1___shared_weak_count___release_weak_alt1(v6);
    }
  }
  *(_QWORD*)(a1 + 184) = v4;
  v7 = *(_QWORD*)(a1 + 152);
  for (j = *(_QWORD*)(a1 + 160); j != v7; j -= 16) {
    v9 = *(_QWORD*)(j - 8);
    if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
      std___1___shared_weak_count___release_weak_alt1(v9);
    }
  }
  *(_QWORD*)(a1 + 160) = v7;
  v24 = (unsigned int)snd_fnd_calcCrc32("TITLE", 0);
  snd_Fade_Fade_10c830((__int64)v23, 0x0.0p+0f);
  snd_startSlotVolume_100b50((int*)&v24, (__int64)v23, 0x1.0000000000000p+0f);
  snd_Fade_Destroy_Fade(v23);
  nn_oe_SetUserInactivityDetectionTimeExtended(false);
  LayoutAccessor_155e140((__int64*)(a1 + 232));
  v10 = *(_QWORD*)(a1 + 328);
  if (v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
    std___1___shared_weak_count___release_weak_alt1(v10);
  }
  GameRoutine_1564060((__int64*)(a1 + 280));
  GameRoutine_1563f90(a1 + 256, *(_QWORD*)(a1 + 264));
  v11 = *(_QWORD*)(a1 + 240);
  if (v11 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v11);
  }
  v12 = *(_QWORD*)(a1 + 224);
  if (v12 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    std___1___shared_weak_count___release_weak_alt1(v12);
  }
  v13 = *(_QWORD*)(a1 + 176);
  if (v13 != 0) {
    v14 = *(_QWORD*)(a1 + 184);
    if (v13 == v14) {
      goto LABEL_35;
    }
    do {
      v15 = *(_QWORD*)(v14 - 8);
      if (v15 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
        std___1___shared_weak_count___release_weak_alt1(v15);
      }
      v14 -= 16;
    } while (v14 != v13);
    v16 = *(_QWORD*)(a1 + 176);
    *(_QWORD*)(a1 + 184) = v13;
    v13 = v16;
    if (v16 != 0) {
    LABEL_35:
      v17 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v17 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v17, v13);
    }
  }
  v18 = *(_QWORD*)(a1 + 152);
  if (v18 != 0) {
    v19 = *(_QWORD*)(a1 + 160);
    if (v18 == v19) {
      goto LABEL_46;
    }
    do {
      v20 = *(_QWORD*)(v19 - 8);
      if (v20 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
        std___1___shared_weak_count___release_weak_alt1(v20);
      }
      v19 -= 16;
    } while (v19 != v18);
    v21 = *(_QWORD*)(a1 + 152);
    *(_QWORD*)(a1 + 160) = v18;
    v18 = v21;
    if (v21 != 0) {
    LABEL_46:
      v22 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v22 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v22, v18);
    }
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00((__int64*)(a1 + 88));
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
