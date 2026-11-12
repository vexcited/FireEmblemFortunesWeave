#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
__int64 GameRoutine_1138e00(_QWORD, _QWORD);
__int64 GameRoutine_136a920(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1374b10(_QWORD, _QWORD);
__int64 GameRoutine_1378190(_QWORD, _QWORD);
__int64 GameRoutine_16fa6a0(_QWORD, _QWORD);
__int64 GameRoutine_64df20(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6ed030(_QWORD);
__int64 GameRoutine_931120(_QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 HistoryLogInfo_6fb810(_QWORD);
__int64 Manager_66cc20(_QWORD);
__int64 Se_80e330(_QWORD, _QWORD);
__int64 SpineModel_64dde0(_QWORD, _QWORD, _QWORD);
__int64 TelopSequence_1374cc0(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD, _QWORD);
__int64 game_HashString32(_QWORD, _QWORD);
__int64 game_ProcInst_Register(_QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 strlen(_QWORD);
extern _UNKNOWN* GameData_20a2ab0;
extern _UNKNOWN* GameData_2130f68;
extern __int64 (*GameData_20a28c0[])();
extern __int64 (*GameData_20a2940[])();
extern __int64 (*GameData_20a29c0[])();
extern __int64 (*GameData_20a2a40[])();
extern __int64 (*game_telop_Message_vtable[])();
extern __int64 GameData_212c608[2];
extern __int64 GameData_212cf88[4];
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 ui_Manager_instance_;
extern __int64* GameData_212c8a0;
extern __int64* GameData_212e348;
extern __int64* GameData_2130240[8];
extern __int64* msg_MessageManager_instance__ptr[2];
extern char GameData_1a9f09e;
void __attribute__((noreturn)) String_60a1d0(_QWORD);
__int64 game_telop_Message_SetCommon(__int64 a1, unsigned __int8* a2);
_BYTE* Message_16f9c10(_BYTE* result, __int64* a2, __int64* a3);
__int64 game_telop_Message_SetCommon_lambda0_Invoke(__int64 a1, __int64* a2);
__int64 game_telop_Message_SetCommon_lambda2_Invoke(__int64 a1, __int64* a2);
__int64 game_telop_Message_SetCommon_lambda3_Invoke(__int64 a1, __int64* a2);
__int64 EmbeddedImage_1889d00(_QWORD, _QWORD, long double);
__int64 GameRoutine_17356e0(_QWORD, _QWORD);
__int64 GameRoutine_190a0c0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 TextBoxEx_188ab20(_QWORD, _QWORD, long double);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern char** msg_MessageManager_empty_text__ptr;
struct PseudoSret GameRoutine_9b8fe0(_QWORD, _QWORD);
struct PseudoSret TextBoxEx_188aa00(_QWORD, _QWORD, long double);
__int64 Message_16f9b50(__int64 a1, __int64* a2, __int64* a3);
__int64 Message_16f9d60(__int64 a1, __int64* a2, __int64* a3);
void Message_Unknown33(__int64 a1);
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");

__int64 game_telop_Message_SetCommon(__int64 a1, unsigned __int8* a2)
{
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  void* v14;
  _BYTE* v15;
  char v16;
  char* v17;
  unsigned __int8* v18;
  char* v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  bool v23;
  unsigned __int64 v24;
  unsigned __int8* v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64* v28;
  unsigned __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64* v36;
  unsigned __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 (**v42)();
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64* v47;
  unsigned __int64 v48;
  __int64 v49;
  unsigned __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  unsigned __int64 v56;
  unsigned __int64 v57;
  _QWORD* v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v63;
  unsigned __int8* v64;
  __int64 v65;
  __int64* v66;
  unsigned __int64 v67;
  __int64 v68;
  unsigned __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 (**v73)();
  __int64 v74;
  __int64 v75;
  _QWORD v76[4];
  _QWORD* v77;
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

  if (a1 == 0) {
    return 0;
  }
  v4 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v5 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      928, 16, 0);
  memset(v5 + 144, 0, 784, v6, v7, v8);
  v9 = GameData_212c608[0];
  *(_QWORD*)(v5 + 88) = 0;
  *(_QWORD*)(v5 + 96) = 0;
  *(_QWORD*)(v5 + 104) = 0;
  *(_QWORD*)(v5 + 112) = 0;
  *(_QWORD*)(v5 + 120) = 0;
  *(_QWORD*)(v5 + 128) = 0;
  *(_WORD*)(v5 + 136) = 0;
  *(_QWORD*)(v5 + 16) = 0;
  *(_QWORD*)(v5 + 24) = "NULL";
  *(_QWORD*)(v5 + 32) = 0;
  v10 = (_QWORD*)(v5 + 32);
  *(_QWORD*)(v5 + 138) = 0;
  *(_QWORD*)(v5 + 144) = 0;
  *(_QWORD*)(v5 + 40) = 0;
  *(_QWORD*)(v5 + 48) = 0;
  *(_QWORD*)(v5 + 56) = 0;
  *(_QWORD*)(v5 + 64) = 0;
  *(_QWORD*)(v5 + 72) = 0;
  *(_QWORD*)(v5 + 80) = 0;
  *(_QWORD*)v5 = v9 + 16;
  *(_QWORD*)(v5 + 8) = 0;
  game_ProcInst_Register(v5);
  *(_QWORD*)(v5 + 200) = 0;
  *(_QWORD*)(v5 + 152) = 0;
  *(_QWORD*)(v5 + 160) = 0;
  *(_QWORD*)(v5 + 168) = 0;
  *(_QWORD*)(v5 + 176) = 0;
  *(_QWORD*)(v5 + 208) = 0;
  *(_QWORD*)(v5 + 216) = 0;
  *(_QWORD*)(v5 + 224) = 0;
  *(_QWORD*)(v5 + 232) = 0;
  *(_QWORD*)(v5 + 240) = 0;
  *(_QWORD*)(v5 + 256) = 0;
  *(_QWORD*)(v5 + 264) = 0;
  *(_QWORD*)(v5 + 272) = 0;
  *(_QWORD*)(v5 + 280) = 0;
  *(_QWORD*)(v5 + 288) = 0;
  *(_QWORD*)(v5 + 296) = 0;
  *(_DWORD*)(v5 + 320) = 3;
  *(_QWORD*)(v5 + 184) = 0;
  *(_QWORD*)(v5 + 192) = v5 + 200;
  *(_QWORD*)(v5 + 304) = 0;
  *(_QWORD*)(v5 + 312) = 0;
  *(_DWORD*)(v5 + 332) = 0;
  *(_BYTE*)(v5 + 338) = 0;
  *(_QWORD*)(v5 + 344) = 0;
  *(_QWORD*)(v5 + 352) = 0;
  *(_QWORD*)(v5 + 360) = 0;
  *(_QWORD*)(v5 + 368) = 0;
  *(_QWORD*)(v5 + 376) = 0;
  *(_QWORD*)(v5 + 384) = 0;
  *(_QWORD*)(v5 + 392) = 0;
  *(_QWORD*)(v5 + 400) = 0;
  *(_QWORD*)(v5 + 408) = 0;
  *(_QWORD*)(v5 + 416) = 0;
  *(_QWORD*)(v5 + 324) = 0;
  *(_DWORD*)(v5 + 248) = 1065353216;
  *(_QWORD*)(v5 + 424) = 0;
  *(_QWORD*)(v5 + 472) = 0;
  *(_QWORD*)(v5 + 480) = 0;
  *(_QWORD*)(v5 + 440) = 0;
  *(_QWORD*)(v5 + 448) = 0;
  *(_QWORD*)(v5 + 504) = 0;
  *(_QWORD*)(v5 + 512) = 0;
  *(_QWORD*)(v5 + 488) = 0;
  *(_QWORD*)(v5 + 496) = 0;
  *(_DWORD*)(v5 + 520) = 1065353216;
  *(_QWORD*)(v5 + 528) = 0;
  *(_QWORD*)(v5 + 536) = 0;
  *(_QWORD*)(v5 + 544) = 0;
  *(_WORD*)(v5 + 336) = 1;
  *(_DWORD*)(v5 + 552) = 1065353216;
  *(_WORD*)(v5 + 560) = 0;
  *(_WORD*)(v5 + 584) = 0;
  *(_BYTE*)(v5 + 608) = 0;
  *(_QWORD*)(v5 + 656) = 0;
  *(_QWORD*)(v5 + 648) = 0;
  *(_QWORD*)(v5 + 632) = 0;
  *(_QWORD*)(v5 + 624) = 0;
  *(_QWORD*)(v5 + 616) = 0;
  *(_QWORD*)(v5 + 688) = 0;
  *(_DWORD*)(v5 + 432) = 0x2000;
  *(_QWORD*)(v5 + 680) = 0;
  *(_QWORD*)(v5 + 672) = 0;
  *(_QWORD*)(v5 + 664) = 0;
  *(_DWORD*)(v5 + 696) = 1065353216;
  *(_QWORD*)(v5 + 720) = 0;
  *(_QWORD*)(v5 + 712) = 0;
  *(_QWORD*)(v5 + 704) = 0;
  *(_DWORD*)(v5 + 728) = 1065353216;
  *(_WORD*)(v5 + 736) = 0;
  *(_QWORD*)(v5 + 456) = 0;
  *(_QWORD*)(v5 + 464) = v5 + 472;
  *(_WORD*)(v5 + 760) = 0;
  *(_BYTE*)(v5 + 784) = 0;
  *(_QWORD*)(v5 + 792) = 0;
  *(_BYTE*)(v5 + 800) = 0;
  *(_QWORD*)(v5 + 640) = v5 + 648;
  v12 = GameData_2130240[0] + 2;
  *(_BYTE*)(v5 + 816) = 0;
  *(_BYTE*)(v5 + 820) = 0;
  *(_DWORD*)(v5 + 824) = 0;
  *(_QWORD*)(v5 + 912) = 0;
  *(_QWORD*)(v5 + 872) = 0;
  *(_QWORD*)(v5 + 864) = 0;
  *(_QWORD*)(v5 + 856) = 0;
  *(_QWORD*)(v5 + 848) = 0;
  *(_QWORD*)(v5 + 840) = 0;
  *(_QWORD*)(v5 + 832) = 0;
  *(_QWORD*)(v5 + 808) = v12;
  *(_QWORD*)v5 = game_telop_Message_vtable;
  v13 = *(_QWORD*)(a1 + 40);
  if (v13 != 0) {
    *(_QWORD*)(v13 + 48) = v5;
    *(_QWORD*)(v5 + 56) = *(_QWORD*)(a1 + 40);
  }
  *(_QWORD*)(a1 + 40) = v5;
  *(_QWORD*)(v5 + 24) = "Message";
  *(_QWORD*)(v5 + 32) = a1;
  *(_DWORD*)(v5 + 140) = game_HashString32("Message", v11);
  *(_QWORD*)(v5 + 64) = 0;
  *(_QWORD*)(v5 + 72) = 24;
  *(_QWORD*)(v5 + 80) = 1;
  v14 = GameData_2130f68;
  *(_QWORD*)(v5 + 8) = GameData_2130f68;
  *(_QWORD*)(v5 + 16) = v14;
  (*(void (**)(__int64))(*(_QWORD*)v5 + 32LL))(v5);
  if (((*(__int64 (**)(__int64))(*(_QWORD*)v5 + 136LL))(v5) & 1) != 0 &&
      (*(_WORD*)(v5 + 136) & 0x100) == 0) {
    *(_WORD*)(v5 + 136) |= 0x100u;
  }
  v15 = (_BYTE*)*v10;
  v16 = *(_BYTE*)(*v10 + 138LL);
  if (v16 == 0) {
    (*(void (**)(_QWORD))(*(_QWORD*)v15 + 64LL))(*v10);
    v16 = v15[138];
  }
  v15[138] = v16 + 1;
  *(_WORD*)(v5 + 136) |= 2u;
  if ((*(_BYTE*)(v5 + 272) & 1) != 0) {
    *(_QWORD*)(v5 + 280) = 17;
    v17 = *(char**)(v5 + 288);
  }
  else {
    *(_BYTE*)(v5 + 272) = 34;
    v17 = (char*)(v5 + 273);
  }
  v18 = (unsigned __int8*)(v5 + 832);
  strcpy(v17, "Layout/Common.arc");
  if ((*(_BYTE*)(v5 + 296) & 1) != 0) {
    *(_QWORD*)(v5 + 304) = 17;
    v19 = *(char**)(v5 + 312);
  }
  else {
    *(_BYTE*)(v5 + 296) = 34;
    v19 = (char*)(v5 + 297);
  }
  strcpy(v19, "Common_TlpMessage");
  GameRoutine_1374b10(v5, 2);
  *(_BYTE*)(v5 + 338) = 1;
  TelopSequence_1374cc0(v5, 0);
  Se_80e330(v5, "SE_SYS_Telop_Mini_In");
  GameRoutine_1378190(v5, "SE_SYS_Telop_Mini_Out");
  *(_DWORD*)(v5 + 824) = *((_DWORD*)a2 + 12);
  if (v18 == a2) {
  LABEL_28:
    v22 = *((_QWORD*)a2 + 7);
    if (v22 == 0) {
      goto LABEL_36;
    }
    goto LABEL_29;
  }
  v20 = *a2;
  if ((*v18 & 1) != 0) {
    v23 = (v20 & 1) == 0;
    v24 = v20 >> 1;
    if (v23) {
      v25 = a2 + 1;
    }
    else {
      v25 = *((unsigned __int8**)a2 + 2);
    }
    if (v23) {
      v26 = v24;
    }
    else {
      v26 = *((_QWORD*)a2 + 1);
    }
    SpineModel_64dde0(v5 + 832, v25, v26);
    goto LABEL_28;
  }
  if ((v20 & 1) != 0) {
    GameRoutine_64df20(v5 + 832, *((_QWORD*)a2 + 2), *((_QWORD*)a2 + 1));
    v22 = *((_QWORD*)a2 + 7);
    if (v22 == 0) {
      goto LABEL_36;
    }
  LABEL_29:
    v27 = GameRoutine_6ed030(v22);
    v28 = *(__int64**)(v5 + 864);
    v29 = *(_QWORD*)(v5 + 872);
    v76[0] = v27;
    if ((unsigned __int64)v28 >= v29) {
      v34 = GameRoutine_1138e00(v5 + 856, v76);
    LABEL_48:
      v42 = GameData_20a28c0;
    LABEL_63:
      *(_QWORD*)(v5 + 864) = v34;
      v53 = v5 + 880;
      v76[0] = v42;
      v76[1] = v22;
      goto LABEL_64;
    }
    v30 = v27;
    v31 = strlen(v27);
    if (v31 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_102;
    }
    v32 = v31;
    if (v31 >= 0x17) {
      if ((v31 | 7) == 0x17) {
        v41 = 26;
      }
      else {
        v41 = (v31 | 7) + 1;
      }
      v33 = fw_memory_HeapManager_Allocate(*v4, v41, 16, 0);
      v28[1] = v32;
      v28[2] = v33;
      *v28 = v41 | 1;
    }
    else {
      *(_BYTE*)v28 = 2 * v31;
      v33 = (__int64)v28 + 1;
      if (v31 == 0) {
        goto LABEL_47;
      }
    }
    memmove(v33, v30, v32);
  LABEL_47:
    *(_BYTE*)(v33 + v32) = 0;
    v34 = (__int64)(v28 + 3);
    goto LABEL_48;
  }
  v21 = *((_QWORD*)a2 + 1);
  *(_QWORD*)v18 = *(_QWORD*)a2;
  *(_QWORD*)(v5 + 840) = v21;
  *(_QWORD*)(v5 + 848) = *((_QWORD*)a2 + 2);
  v22 = *((_QWORD*)a2 + 7);
  if (v22 != 0) {
    goto LABEL_29;
  }
LABEL_36:
  v22 = *((_QWORD*)a2 + 8);
  if (v22 != 0) {
    v35 = HistoryLogInfo_6fb810(*((_QWORD*)a2 + 8));
    v36 = *(__int64**)(v5 + 864);
    v37 = *(_QWORD*)(v5 + 872);
    v76[0] = v35;
    if ((unsigned __int64)v36 >= v37) {
      v34 = GameRoutine_1138e00(v5 + 856, v76);
    LABEL_62:
      v42 = GameData_20a2940;
      goto LABEL_63;
    }
    v38 = v35;
    v31 = strlen(v35);
    if (v31 < 0xFFFFFFFFFFFFFFF7LL) {
      v39 = v31;
      if (v31 >= 0x17) {
        if ((v31 | 7) == 0x17) {
          v52 = 26;
        }
        else {
          v52 = (v31 | 7) + 1;
        }
        v40 = fw_memory_HeapManager_Allocate(*v4, v52, 16, 0);
        v36[1] = v39;
        v36[2] = v40;
        *v36 = v52 | 1;
      }
      else {
        *(_BYTE*)v36 = 2 * v31;
        v40 = (__int64)v36 + 1;
        if (v31 == 0) {
          goto LABEL_61;
        }
      }
      memmove(v40, v38, v39);
    LABEL_61:
      *(_BYTE*)(v40 + v39) = 0;
      v34 = (__int64)(v36 + 3);
      goto LABEL_62;
    }
  LABEL_102:
    String_60a1d0(v31);
  }
  v43 = *((_QWORD*)a2 + 9);
  if (v43 == 0) {
    v63 = *((unsigned int*)a2 + 20);
    if ((v63 & 0x80000000) != 0) {
      goto LABEL_69;
    }
    v64 =
        (unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212cf88[0] +
                                                 8LL) +
                                      120LL) +
                           (v63 << 6));
    v43 = *(_QWORD*)(*(_QWORD*)(*GameData_212c8a0 + 64) + 8LL * *v64);
    v65 = GameRoutine_931120(v64);
    v66 = *(__int64**)(v5 + 864);
    v67 = *(_QWORD*)(v5 + 872);
    v76[0] = v65;
    if ((unsigned __int64)v66 >= v67) {
      v74 = GameRoutine_1138e00(v5 + 856, v76);
    LABEL_100:
      *(_QWORD*)(v5 + 864) = v74;
      v73 = GameData_20a2a40;
      goto LABEL_101;
    }
    v68 = v65;
    v31 = strlen(v65);
    if (v31 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_102;
    }
    v69 = v31;
    if (v31 >= 0x17) {
      if ((v31 | 7) == 0x17) {
        v75 = 26;
      }
      else {
        v75 = (v31 | 7) + 1;
      }
      v70 = fw_memory_HeapManager_Allocate(*v4, v75, 16, 0);
      v66[1] = v69;
      v66[2] = v70;
      *v66 = v75 | 1;
    }
    else {
      *(_BYTE*)v66 = 2 * v31;
      v70 = (__int64)v66 + 1;
      if (v31 == 0) {
        goto LABEL_99;
      }
    }
    memmove(v70, v68, v69);
  LABEL_99:
    *(_BYTE*)(v70 + v69) = 0;
    v74 = (__int64)(v66 + 3);
    goto LABEL_100;
  }
  v44 = *(_QWORD*)(v43 + 40);
  v78 = -1;
  v79 = -1;
  v80 = -1;
  v81 = -1;
  v82 = -1;
  v83 = -1;
  v45 = *msg_MessageManager_instance__ptr[0];
  v84 = -1;
  v85 = -1;
  v86 = -1;
  v87 = -1;
  v88 = -1;
  v89 = -1;
  v76[0] = GameData_212e348 + 2;
  v76[1] = 0xFFFF0001FFFF0000LL;
  v76[2] = 0xFFFF0004FFFF0002LL;
  v76[3] = 0xFFFF0006FFFF0005LL;
  v90 = 8;
  v77 = (_QWORD*)0xFFFF0008FFFF0007LL;
  v46 = GameRoutine_a4dbe0(v45, v44, 0, v76);
  v47 = *(__int64**)(v5 + 864);
  v48 = *(_QWORD*)(v5 + 872);
  v76[0] = v46;
  if ((unsigned __int64)v47 < v48) {
    v49 = v46;
    v31 = strlen(v46);
    if (v31 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_102;
    }
    v50 = v31;
    if (v31 >= 0x17) {
      if ((v31 | 7) == 0x17) {
        v72 = 26;
      }
      else {
        v72 = (v31 | 7) + 1;
      }
      v51 = fw_memory_HeapManager_Allocate(*v4, v72, 16, 0);
      v47[1] = v50;
      v47[2] = v51;
      *v47 = v72 | 1;
    }
    else {
      *(_BYTE*)v47 = 2 * v31;
      v51 = (__int64)v47 + 1;
      if (v31 == 0) {
        goto LABEL_91;
      }
    }
    memmove(v51, v49, v50);
  LABEL_91:
    *(_BYTE*)(v51 + v50) = 0;
    v71 = (__int64)(v47 + 3);
    goto LABEL_92;
  }
  v71 = GameRoutine_1138e00(v5 + 856, v76);
LABEL_92:
  *(_QWORD*)(v5 + 864) = v71;
  v73 = GameData_20a29c0;
LABEL_101:
  v76[0] = v73;
  v76[1] = v43;
  v53 = v5 + 880;
LABEL_64:
  v77 = v76;
  GameRoutine_16fa6a0(v76, v53);
  if (v77 == v76) {
    v55 = 32;
    goto LABEL_68;
  }
  if (v77 != nullptr) {
    v55 = 40;
  LABEL_68:
    (*(void (**)(_QWORD*, __int64))(*v77 + v55))(v77, v54);
  }
LABEL_69:
  v56 = a2[24];
  v57 = v56 >> 1;
  if ((v56 & 1) != 0) {
    v57 = *((_QWORD*)a2 + 4);
  }
  if (v57 != 0) {
    v58 = *(_QWORD**)(v5 + 864);
    if ((unsigned __int64)v58 >= *(_QWORD*)(v5 + 872)) {
      v61 = Manager_66cc20(v5 + 856);
    }
    else if ((v56 & 1) != 0) {
      fw_text_String_CopyTerminated(*(_QWORD*)(v5 + 864), *((_QWORD*)a2 + 5),
                                    *((_QWORD*)a2 + 4));
      v61 = (__int64)(v58 + 3);
    }
    else {
      v59 = *((_QWORD*)a2 + 3);
      v60 = *((_QWORD*)a2 + 5);
      v61 = (__int64)(v58 + 3);
      v58[1] = *((_QWORD*)a2 + 4);
      v58[2] = v60;
      *v58 = v59;
    }
    *(_QWORD*)(v5 + 864) = v61;
  }
  return v5;
}

__int64 Message_16f9b50(__int64 a1, __int64* a2, __int64* a3)
{
  __int64 result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  struct {
    unsigned __int8 v9[16];
    __int64 v10;
    char v11;
    char gap33_[15];
    __int64 v12;
  } v9_;

  Message_16f9c10(v9_.v9, a2, a3);
  result = game_telop_Message_SetCommon(a1, v9_.v9);
  if ((v9_.v11 & 1) != 0 && v9_.v12 != 0) {
    v5 = result;
    v6 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v6 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v6, v9_.v12);
    result = v5;
  }
  if ((v9_.v9[0] & 1) != 0 && v9_.v10 != 0) {
    v7 = result;
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v8, v9_.v10);
    return v7;
  }
  return result;
}

_BYTE* Message_16f9c10(_BYTE* result, __int64* a2, __int64* a3)
{
  unsigned __int64 v3;
  __int64 v4;
  _BYTE* v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  v3 = a2[1];
  if (v3 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_20:
    String_60a1d0(result);
  }
  v4 = *a2;
  v6 = result;
  if (v3 >= 0x17) {
    if ((v3 | 7) == 0x17) {
      v8 = 26;
    }
    else {
      v8 = (v3 | 7) + 1;
    }
    v7 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v8, 16, 0);
    *((_QWORD*)v6 + 1) = v3;
    *((_QWORD*)v6 + 2) = v7;
    *(_QWORD*)v6 = v8 | 1;
    goto LABEL_9;
  }
  *result = 2 * v3;
  v7 = (__int64)(result + 1);
  if (v3 != 0) {
  LABEL_9:
    result = (_BYTE*)memmove(v7, v4, v3);
  }
  *(_BYTE*)(v7 + v3) = 0;
  v9 = a3[1];
  if (v9 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_20;
  }
  v10 = *a3;
  if (v9 >= 0x17) {
    if ((v9 | 7) == 0x17) {
      v12 = 26;
    }
    else {
      v12 = (v9 | 7) + 1;
    }
    v11 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v12, 16, 0);
    *((_QWORD*)v6 + 4) = v9;
    *((_QWORD*)v6 + 5) = v11;
    *((_QWORD*)v6 + 3) = v12 | 1;
  }
  else {
    v11 = (__int64)(v6 + 25);
    v6[24] = 2 * v9;
    if (v9 == 0) {
      goto LABEL_19;
    }
  }
  result = (_BYTE*)memmove(v11, v10, v9);
LABEL_19:
  *(_BYTE*)(v11 + v9) = 0;
  *((_DWORD*)v6 + 12) = 0;
  *((_QWORD*)v6 + 7) = 0;
  *((_QWORD*)v6 + 8) = 0;
  *((_QWORD*)v6 + 9) = 0;
  *((_DWORD*)v6 + 20) = -1;
  return result;
}

__int64 Message_16f9d60(__int64 a1, __int64* a2, __int64* a3)
{
  __int64 result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  struct {
    unsigned __int8 v9[16];
    __int64 v10;
    char v11;
    char gap33_[15];
    __int64 v12;
    int v13;
  } v9_;

  Message_16f9c10(v9_.v9, a2, a3);
  v9_.v13 = 1;
  result = game_telop_Message_SetCommon(a1, v9_.v9);
  if ((v9_.v11 & 1) != 0 && v9_.v12 != 0) {
    v5 = result;
    v6 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v6 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v6, v9_.v12);
    result = v5;
  }
  if ((v9_.v9[0] & 1) != 0 && v9_.v10 != 0) {
    v7 = result;
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v8, v9_.v10);
    return v7;
  }
  return result;
}

void Message_Unknown33(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __n128 v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64* v11;
  char** v12;
  __int64 v13;
  unsigned int v14;
  char* v15;
  char* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  char v21;
  __int64 v22;
  unsigned __int32 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  _BOOL4 v27;
  __int64 v28;
  __int64 v29;
  int32x4_t* v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  _BOOL4 v37;
  __int64 v38;
  unsigned __int64 v39;
  float32x4_t v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  int32x2_t* v44;
  float32x4_t v45;
  unsigned __int64 v46;
  unsigned __int32 v47;
  _QWORD v48[2];
  __int64 v49;
  __int64 v50;
  char v51[4];

  v48[0] = "L_Txt";
  v48[1] = 5;
  *(struct PseudoSret*)(&v49) = GameRoutine_9b8fe0(a1 + 168, v48);
  if (v50 == 0) {
    goto LABEL_44;
  }
  v3 = std___1___shared_weak_count_lock(v50);
  v1 = v49;
  if (v50 != 0) {
    v4 = std___1___shared_weak_count___release_weak(v50);
  }
  if (v3 == 0 || v1 == 0) {
    if (v3 == 0) {
      goto LABEL_44;
    }
    goto LABEL_42;
  }
  if (*(_QWORD*)(a1 + 912) != 0) {
    *(struct PseudoSret*)(&v49) = TextBoxEx_188aa00(v1, 0, *(long double*)&v4);
    if (v50 != 0) {
      v6 = std___1___shared_weak_count_lock(v50);
      v7 = v49;
      if (v50 != 0) {
        v4 = std___1___shared_weak_count___release_weak(v50);
      }
      if (v6 != 0 && v7 != 0) {
        if ((EmbeddedImage_1889d00(v7, a1 + 880, *(long double*)&v4) & 1) !=
            0) {
          (*(void (**)(__int64, __int64))(*(_QWORD*)v7 + 40LL))(v7, 1);
        }
        goto LABEL_20;
      }
      if (v6 != 0) {
      LABEL_20:
        if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
          v4 = std___1___shared_weak_count___release_weak(v6);
        }
      }
    }
  }
  v8 = *(_QWORD*)(a1 + 856);
  if (*(_QWORD*)(a1 + 864) != v8) {
    v9 = 0;
    v10 = 0;
    v11 = msg_MessageManager_instance__ptr[0];
    v12 = msg_MessageManager_empty_text__ptr;
    do {
      v13 = v8 + v9;
      v14 = v10;
      if ((*(_BYTE*)v13 & 1) != 0) {
        v15 = *(char**)(v13 + 16);
      }
      else {
        v15 = (char*)(v13 + 1);
      }
      if (v10 > 7) {
        v14 = 0;
      }
      if (v15 != nullptr) {
        v16 = v15;
      }
      else {
        v16 = *v12;
      }
      GameRoutine_60a020(*v11 + 24LL * v14 + 14704, v16);
      v8 = *(_QWORD*)(a1 + 856);
      ++v10;
      v9 += 24;
    } while (0xAAAAAAAAAAAAAAABLL * ((*(_QWORD*)(a1 + 864) - v8) >> 3) > v10);
  }
  if ((*(_BYTE*)(a1 + 832) & 1) != 0) {
    v17 = *(_QWORD*)(a1 + 848);
  }
  else {
    v17 = a1 + 833;
  }
  TextBoxEx_188ab20(v1, v17, *(long double*)&v4);
  v18 = ui_LayoutAccessor_FindTextBox(a1 + 168, "L_Txt/T_Txt");
  if (v18 != 0) {
    v1 = v18;
    v19 = ui_LayoutAccessor_FindTextBox(a1 + 168, "L_Txt/T_Txt");
    if (v19 != 0) {
      GameRoutine_190a0c0(&v49, v48, v51, v19, *(_QWORD*)(v19 + 216));
      v20 = v48[0];
    }
    else {
      v20 = 0;
    }
    v21 = *(_BYTE*)(v1 + 88);
    *(_QWORD*)(v1 + 80) = v20;
    *(_BYTE*)(v1 + 88) = v21 | 0x10;
  }
  GameRoutine_17356e0(a1 + 168, "L_Txt");
LABEL_42:
  if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v3 + 16LL))(
        v3, *(long double*)&v4);
    std___1___shared_weak_count___release_weak(v3);
  }
LABEL_44:
  if (*(_DWORD*)(a1 + 824) != 1 || *(_QWORD*)(a1 + 184) == 0) {
    return;
  }
  v22 = *(_QWORD*)(a1 + 176);
  v23 = 0;
  if (v22 == 0) {
    goto LABEL_63;
  }
  v24 = std___1___shared_weak_count_lock(v22);
  if (v24 != 0) {
    v25 = *(_QWORD*)(a1 + 168);
    if (v25 != 0) {
      LODWORD(v1) = *(unsigned __int8*)(v25 + 24);
      v26 = v25 + 152;
      if ((_DWORD)v1 == 0) {
        v26 = 0;
      }
      v27 = v26 != *(_QWORD*)(a1 + 184);
    }
    else {
      v27 = true;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                         0xFFFFFFFFFFFFFFFFLL) != 0) {
      if (v27) {
        goto LABEL_55;
      }
    LABEL_62:
      v23 = 0;
      if ((v1 & 1) != 0) {
        goto LABEL_57;
      }
    LABEL_63:
      v31 = 0;
      goto LABEL_64;
    }
    v32 = v24;
    (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24);
    std___1___shared_weak_count___release_weak(v32);
    if (!v27) {
      goto LABEL_62;
    }
  }
LABEL_55:
  v28 = *(_QWORD*)(a1 + 176);
  if (v28 == 0) {
    v31 = 0;
    v23 = 0;
    goto LABEL_64;
  }
  v23 = 0;
  if (*(_QWORD*)(v28 + 8) == -1) {
    goto LABEL_63;
  }
LABEL_57:
  v29 = *(_QWORD*)(a1 + 184);
  if (v29 == 0) {
    return;
  }
  v30 = *(int32x4_t**)(v29 + 24);
  v31 = 0;
  if (v30 != nullptr) {
    v23 = LANES128_OF(vdupq_laneq_s32(v30[7], 3)).n128_u32[0];
    v31 = LANES128(v30[9]).n128_u32[3];
  }
LABEL_64:
  if (*(_QWORD*)(a1 + 184) != 0) {
    v33 = *(_QWORD*)(a1 + 176);
    if (v33 != 0) {
      v46 = v31;
      v47 = v23;
      v34 = std___1___shared_weak_count_lock(v33);
      if (v34 == 0) {
        goto LABEL_75;
      }
      v35 = *(_QWORD*)(a1 + 168);
      if (v35 != 0) {
        LODWORD(v1) = *(unsigned __int8*)(v35 + 24);
        v36 = v35 + 152;
        if ((_DWORD)v1 == 0) {
          v36 = 0;
        }
        v37 = v36 != *(_QWORD*)(a1 + 184);
      }
      else {
        v37 = true;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v34 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v38 = v34;
        (*(void (**)(__int64))(*(_QWORD*)v34 + 16LL))(v34);
        std___1___shared_weak_count___release_weak(v38);
      }
      if (!v37) {
        v39 = v46;
        LANES128(v40).n128_u32[0] = v47;
        if ((v1 & 1) == 0) {
          return;
        }
      }
      else {
      LABEL_75:
        v39 = v46;
        LANES128(v40).n128_u32[0] = v47;
        v41 = *(_QWORD*)(a1 + 176);
        if (v41 == 0 || *(_QWORD*)(v41 + 8) == -1) {
          return;
        }
      }
      v42 = *(_QWORD*)(a1 + 184);
      if (v42 != 0) {
        v43 = *(_QWORD*)(v42 + 24);
        if (v43 != 0) {
          v44 = *(int32x2_t**)(v43 + 24);
          LANES128(v40).n128_u32[1] = -1016070144;
          LANES128(v40).n128_u64[1] = v39;
          if (v44 != nullptr) {
            LANES128(v45).n128_u64[0] =
                LANES64_OF(vzip2_s32(v44[15], v44[17])).n64_u64[0];
            LANES128(v45).n128_u64[1] = LANES64(v44[19]).n64_u32[1];
            v40 = vsubq_f32(v40, v45);
          }
          *(_QWORD*)(v43 + 48) = LANES128(v40).n128_u64[0];
          *(_DWORD*)(v43 + 56) = LANES128(v40).n128_u32[2];
          *(_BYTE*)(v43 + 88) |= 0x10u;
        }
      }
    }
  }
}

__int64 game_telop_Message_SetCommon_lambda0_Invoke(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v6;
  unsigned __int64 v7;
  bool v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *a2;
  if (v2 == 0 || v3 == 0) {
    return 0;
  }
  v6 = *(_QWORD*)(v2 + 24);
  v7 = *(unsigned __int8*)(v6 + 560);
  v8 = (v7 & 1) == 0;
  if ((v7 & 1) != 0) {
    v9 = *(_QWORD*)(v6 + 568);
  }
  else {
    v9 = v7 >> 1;
  }
  v10 = *(_QWORD*)(v6 + 576);
  v11 = v6 + 561;
  if (!v8) {
    v11 = v10;
  }
  if (v9 != 0) {
    v12 = v11;
  }
  else {
    v12 = 0;
  }
  return GameRoutine_136a920(ui_Manager_instance_ + 1264, v3, 0, 2, v12);
}

__int64 game_telop_Message_SetCommon_lambda2_Invoke(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  char* v6;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *a2;
  if (v2 == 0 || v3 == 0) {
    return 0;
  }
  if ((unsigned int)*(unsigned __int8*)(v2 + 32) - 1 > 4) {
    v6 = &GameData_1a9f09e;
  }
  else {
    v6 =
        (char*)*(&GameData_20a2ab0 + (unsigned __int8)(*(_BYTE*)(v2 + 32) - 1));
  }
  return GameRoutine_136a920(ui_Manager_instance_ + 1264, v3, 0, 2, v6);
}

__int64 game_telop_Message_SetCommon_lambda3_Invoke(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  char* v6;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *a2;
  if (v2 == 0 || v3 == 0) {
    return 0;
  }
  if ((unsigned int)*(unsigned __int8*)(v2 + 32) - 1 > 4) {
    v6 = &GameData_1a9f09e;
  }
  else {
    v6 =
        (char*)*(&GameData_20a2ab0 + (unsigned __int8)(*(_BYTE*)(v2 + 32) - 1));
  }
  return GameRoutine_136a920(ui_Manager_instance_ + 1264, v3, 0, 2, v6);
}

#pragma GCC visibility pop
