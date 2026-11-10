#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_a85600(_QWORD);
__int64 GameRoutine_fe6920(void);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 GameData_21c6978;
extern __int64 GameData_220f8b0;
extern __int64* GameData_212eec0[4];
__int64 MapManager_d6e320(__int64 result);
_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
_QWORD* GameRoutine_a853b0(__int64);
_QWORD* GameRoutine_c18930(_QWORD* result, _QWORD*);
__attribute__((swiftcall)) void GameRoutine_103a620(PSEUDO_X8, __int64);
__int16* ScheduleManager_d9edf0();
__int64* GameRoutine_10c0c60(__int64);
__int64* GameRoutine_f42060(__int64* result);
__int64* SpineModel_64dde0(__int64*, __int64, unsigned __int64);
__int64 GameRoutine_a85120(__int64, unsigned __int8*);
__int64 GameRoutine_ae0760(__int64);
__int64 GameRoutine_f41c80();
__int64 Impl_1327400(_QWORD*);
__int64 LightingAnimModule_c6da10(__int64 result);
__int64 MapManager_d6f2a0(__int64 result);
__int64 ObjectTransparent_f38dc0(__int64 result);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 game_GameView_Update();
__int64 memset(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern _UNKNOWN* GameData_212c540;
extern __int64 (*GameData_1fdd3d0[])();
extern __int64 GameData_212c638;
extern __int64 GameData_212dbb8[9];
extern __int64 GameData_21c9608;
extern __int64 GameData_21c9758;
extern __int64 GameData_21f3cd8;
extern __int64 GameData_21f3d10;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_ProcFadeView_instance_;
extern __int64 game_ProcGameSkipView_instance_;
extern char GameData_1b884a8[8];
unsigned int* game_gmap_SpotMgr_FindSpot(unsigned int* result);
_DWORD* game_hub_MapManager_Load(_DWORD* result, int a2, __int64 a3);
__int64* MapManager_d6f8d0(__int64* result);
__int64 game_hub_MapManager_Load_lambda0_Invoke(__int64 a1);

__int64 MapManager_d6e320(__int64 result)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v3;
  __int64 i;
  __int64 v5;
  __int64 v6;
  __int64 j;
  __int64 v8;
  char v9;

  if (*(_DWORD*)(result + 8) != 0) {
    *(_DWORD*)(result + 8) = 0;
    v1 = result;
    v2 = (_QWORD*)*GameData_212eec0[0];
    if (*GameData_212eec0[0] != 0) {
      v3 = v2[5];
      for (i = v2[6]; i != v3; i -= 16) {
        v5 = *(_QWORD*)(i - 8);
        if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
          std___1___shared_weak_count___release_weak(v5);
        }
      }
      v2[6] = v3;
      v6 = v2[8];
      for (j = v2[9]; j != v6; j -= 16) {
        v8 = *(_QWORD*)(j - 8);
        if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
          std___1___shared_weak_count___release_weak(v8);
        }
      }
      v2[9] = v6;
    }
    if (*(_QWORD*)(GameData_220f8b0 + 8) != 0) {
      GameRoutine_fe6920();
    }
    if ((*(_BYTE*)(v1 + 112) & 1) != 0) {
      **(_BYTE**)(v1 + 128) = 0;
      *(_QWORD*)(v1 + 120) = 0;
    }
    else {
      *(_WORD*)(v1 + 112) = 0;
    }
    v9 = *(_BYTE*)(v1 + 64);
    *(_QWORD*)(v1 + 92) = 0;
    if ((v9 & 1) != 0) {
      **(_BYTE**)(v1 + 80) = 0;
      *(_QWORD*)(v1 + 72) = 0;
    }
    else {
      *(_WORD*)(v1 + 64) = 0;
    }
    return GameRoutine_a85600(GameData_21c6978);
  }
  return result;
}

_DWORD* game_hub_MapManager_Load(_DWORD* result, int a2, __int64 a3)
{
  _DWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  char* v12;
  unsigned __int64 v13;
  __int64 v14;
  char v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  _BYTE* v20;
  __int64 v21;
  _BYTE* v25;
  unsigned int* v26;
  __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  __int64* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  char* v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  unsigned __int8* v40;
  unsigned __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  unsigned __int64 v46;
  _QWORD* v47;
  __int64 v48;
  __int64* v49;
  unsigned __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  char* v54;
  unsigned __int64 v55;
  __int64 v56;
  _QWORD* v57;
  __int64 v58;
  unsigned __int64 v59;
  unsigned int v60;
  __int64 v61;
  unsigned int v62;
  __int64* v63;
  __int64 v64;
  int v65;
  char* v66;
  __int16 v67;
  unsigned __int8* v68;
  unsigned __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  unsigned __int64 v74;
  __int64 v75;
  _BYTE* v76;
  _DWORD* v77;
  _QWORD* v78;
  _QWORD* v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  struct {
    _BYTE v87[18];
    char gap34_[14];
    _BYTE* v88;
  } v87_;
  _QWORD v89[3];
  struct {
    __int64 v90[3];
    int v91;
    int v92;
  } v90_;
  _QWORD v93[7];
  char v94;
  __int64 v95;
  __int64 v96;
  char v97;
  __int64 v98;
  char v99;
  __int64 v100;
  __int64 v101[6];
  __int64 v102[4];
  _QWORD v103[3];
  _QWORD v104[3];
  struct {
    __int64 v105[2];
    __int64 v106;
    _DWORD* v107;
  } v105_;
  struct {
    _BYTE v108[32];
    _BYTE* v109;
  } v108_;
  struct {
    _QWORD v110[4];
    _QWORD* v111;
  } v110_;

  if (result[2] != 0) {
    return result;
  }
  result[22] = a2;
  result[23] = a2;
  v6 = result;
  result[2] = 1;
  v7 = GameData_212dbb8[0];
  if ((*(_BYTE*)(*(_QWORD*)GameData_212dbb8[0] + 64LL) & 1) != 0) {
    fw_text_String_CopyTerminated(
        v105_.v105, *(_QWORD*)(*(_QWORD*)GameData_212dbb8[0] + 80LL),
        *(_QWORD*)(*(_QWORD*)GameData_212dbb8[0] + 72LL));
  }
  else {
    v8 = *(_QWORD*)(*(_QWORD*)GameData_212dbb8[0] + 72LL);
    v9 = *(_QWORD*)(*(_QWORD*)GameData_212dbb8[0] + 80LL);
    v105_.v105[0] = *(_QWORD*)(*(_QWORD*)GameData_212dbb8[0] + 64LL);
    v105_.v105[1] = v8;
    v105_.v106 = v9;
  }
  GameRoutine_103a620((void*)(v103), (__int64)v105_.v105);
  v10 = v6 + 4;
  if (v6 + 4 != (_DWORD*)v103) {
    if ((*(_BYTE*)v10 & 1) != 0) {
      if ((v103[0] & 1) != 0) {
        v12 = (char*)v103[2];
      }
      else {
        v12 = (char*)v103 + 1;
      }
      if ((v103[0] & 1) != 0) {
        v13 = v103[1];
      }
      else {
        v13 = (unsigned __int64)LOBYTE(v103[0]) >> 1;
      }
      SpineModel_64dde0((__int64*)v6 + 2, (__int64)v12, v13);
    }
    else if ((v103[0] & 1) != 0) {
      GameRoutine_64df20((_QWORD*)v6 + 2, v103[2], v103[1]);
    }
    else {
      v11 = v103[1];
      *v10 = v103[0];
      *((_QWORD*)v6 + 3) = v11;
      *((_QWORD*)v6 + 4) = v103[2];
    }
  }
  v14 = *(_QWORD*)v7;
  v6[40] = 0;
  v15 = *(_BYTE*)(v14 + 64);
  v16 = *(_QWORD*)(v14 + 80);
  v17 = v14 + 65;
  if ((v15 & 1) != 0) {
    v18 = v16;
  }
  else {
    v18 = v17;
  }
  v19 = GameRoutine_ae0760(v18);
  if (v19 != 0 && (v20 = *(_BYTE**)(v19 + 32)) != nullptr && *v20 != 0 ||
      ((*(_BYTE*)(*(_QWORD*)v7 + 40LL) & 1) != 0
           ? (v21 = *(_QWORD*)(*(_QWORD*)v7 + 56LL))
           : (v21 = *(_QWORD*)v7 + 41LL),
       (v19 = GameRoutine_ae0760(v21)) != 0 &&
           (v25 = *(_BYTE**)(v19 + 32)) != nullptr && *v25 != 0)) {
    v26 = game_gmap_SpotMgr_FindSpot((unsigned int*)v19);
    if (v26 != nullptr && (Impl_1327400(v26) & 1) != 0) {
      v6[40] = 1;
    }
  }
  v27 = *(_QWORD*)(GameData_21c9608 + 976);
  if ((v27 & 0x100000000LL) != 0) {
    v6[40] = v27;
  }
  v28 = *((unsigned __int8*)v6 + 224);
  v29 = *((_QWORD*)v6 + 29);
  v30 = v28 >> 1;
  if ((v28 & 1) != 0) {
    v30 = *((_QWORD*)v6 + 29);
  }
  if (v30 == 0) {
    v31 = (__int64*)(v6 + 10);
    if (v6 + 10 == (_DWORD*)v104) {
      goto LABEL_58;
    }
    if ((*(_BYTE*)v31 & 1) == 0) {
      if ((v104[0] & 1) == 0) {
        v34 = v104[1];
        v33 = v104[2];
        *v31 = v104[0];
        *((_QWORD*)v6 + 6) = v34;
        goto LABEL_44;
      }
      v29 = v104[1];
      v37 = v104[2];
      goto LABEL_57;
    }
    if ((v104[0] & 1) != 0) {
      v36 = (char*)v104[2];
    }
    else {
      v36 = (char*)v104 + 1;
    }
    if ((v104[0] & 1) != 0) {
      v35 = v104[1];
    }
    else {
      v35 = (unsigned __int64)LOBYTE(v104[0]) >> 1;
    }
  LABEL_48:
    SpineModel_64dde0(v31, (__int64)v36, v35);
    goto LABEL_58;
  }
  v31 = (__int64*)(v6 + 10);
  if ((v6[10] & 1) != 0) {
    v35 = v30;
    if ((v28 & 1) != 0) {
      v36 = *((char**)v6 + 30);
    }
    else {
      v36 = (char*)v6 + 225;
    }
    goto LABEL_48;
  }
  if ((v28 & 1) == 0) {
    v32 = *((_QWORD*)v6 + 29);
    *v31 = *((_QWORD*)v6 + 28);
    *((_QWORD*)v6 + 6) = v32;
    v33 = *((_QWORD*)v6 + 30);
  LABEL_44:
    v31[2] = v33;
    goto LABEL_58;
  }
  v37 = *((_QWORD*)v6 + 30);
LABEL_57:
  GameRoutine_64df20(v31, v37, v29);
LABEL_58:
  v6[41] = v6[40] == 1;
  memset(v89, 0, 320);
  BYTE1(v101[0]) = 0;
  BYTE1(v102[0]) = 0;
  v38 = *((_QWORD*)GameData_212c540 + 1);
  v95 = *(_QWORD*)GameData_212c540;
  v96 = v38;
  if (v89 != v10) {
    if ((*(_BYTE*)v10 & 1) != 0) {
      GameRoutine_64df20(v89, *((_QWORD*)v6 + 4), *((_QWORD*)v6 + 3));
    }
    else {
      v39 = *((_QWORD*)v6 + 3);
      v89[0] = *v10;
      v89[1] = v39;
      v89[2] = *((_QWORD*)v6 + 4);
    }
  }
  v40 = (unsigned __int8*)(v6 + 10);
  if (v90_.v90 != (__int64*)(v6 + 10)) {
    v41 = *v40;
    if ((v90_.v90[0] & 1) != 0) {
      if ((v41 & 1) != 0) {
        v45 = *((_QWORD*)v6 + 7);
      }
      else {
        v45 = (__int64)v6 + 41;
      }
      if ((v41 & 1) != 0) {
        v46 = *((_QWORD*)v6 + 6);
      }
      else {
        v46 = v41 >> 1;
      }
      SpineModel_64dde0(v90_.v90, v45, v46);
    }
    else if ((v41 & 1) != 0) {
      GameRoutine_64df20(v90_.v90, *((_QWORD*)v6 + 7), *((_QWORD*)v6 + 6));
    }
    else {
      v42 = *(_QWORD*)v40;
      v43 = *((_QWORD*)v6 + 6);
      v44 = *((_QWORD*)v6 + 7);
      v90_.v90[0] = v42;
      v90_.v90[1] = v43;
      v90_.v90[2] = v44;
    }
  }
  v47 = *(_QWORD**)v7;
  v90_.v91 = 1;
  v48 = v47[24];
  if ((v94 & 1) == 0) {
    v94 = 1;
  }
  v49 = v47 + 8;
  v93[6] = v48;
  if (v102 != v47 + 8) {
    v50 = *(unsigned __int8*)v49;
    if ((v102[0] & 1) != 0) {
      v54 = (char*)v47 + 65;
      v57 = v47 + 9;
      v55 = v47[9];
      v56 = v57[1];
      if ((v50 & 1) != 0) {
        v58 = v56;
      }
      else {
        v58 = (__int64)v54;
      }
      if ((v50 & 1) != 0) {
        v59 = v55;
      }
      else {
        v59 = v50 >> 1;
      }
      SpineModel_64dde0(v102, v58, v59);
    }
    else if ((v50 & 1) != 0) {
      GameRoutine_64df20(v102, v47[10], v47[9]);
    }
    else {
      v51 = *v49;
      v52 = v49[1];
      v53 = v49[2];
      v102[1] = v52;
      v102[2] = v53;
      v102[0] = v51;
    }
  }
  v60 = v6[23] - 1;
  if (v60 > 2) {
    v61 = 0;
    LOBYTE(v62) = 0;
  }
  else {
    v61 = *(_QWORD*)&GameData_1b884a8[8 * v60];
    v62 = 0xE100Eu >> (8 * v60);
  }
  v63 = (__int64*)fw_memory_g_heap_manager_ptr;
  if ((v97 & 1) != 0 && v100 != 0) {
    v64 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v64 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v64);
  }
  v97 = v62;
  v99 = 0;
  v98 = v61;
  v90_.v92 = v6[41];
  v65 = *(_DWORD*)(*(_QWORD*)v7 + 136LL);
  if (v65 != 0) {
    if (v65 != 1) {
      goto LABEL_107;
    }
    if ((v6[34] & 1) != 0) {
      *((_QWORD*)v6 + 18) = 3;
      v66 = *((char**)v6 + 19);
    }
    else {
      *((_BYTE*)v6 + 136) = 6;
      v66 = (char*)v6 + 137;
    }
    v66[2] = 103;
    v67 = 28228;
  }
  else {
    if ((v6[34] & 1) != 0) {
      *((_QWORD*)v6 + 18) = 3;
      v66 = *((char**)v6 + 19);
    }
    else {
      *((_BYTE*)v6 + 136) = 6;
      v66 = (char*)v6 + 137;
    }
    v66[2] = 98;
    v67 = 30024;
  }
  *(_WORD*)v66 = v67;
  v66[3] = 0;
LABEL_107:
  v68 = (unsigned __int8*)(v6 + 34);
  if (v101 != (__int64*)(v6 + 34)) {
    v69 = *v68;
    if ((v101[0] & 1) != 0) {
      if ((v69 & 1) != 0) {
        v73 = *((_QWORD*)v6 + 19);
      }
      else {
        v73 = (__int64)v6 + 137;
      }
      if ((v69 & 1) != 0) {
        v74 = *((_QWORD*)v6 + 18);
      }
      else {
        v74 = v69 >> 1;
      }
      SpineModel_64dde0(v101, v73, v74);
    }
    else if ((v69 & 1) != 0) {
      GameRoutine_64df20(v101, *((_QWORD*)v6 + 19), *((_QWORD*)v6 + 18));
    }
    else {
      v70 = *(_QWORD*)v68;
      v71 = *((_QWORD*)v6 + 18);
      v72 = *((_QWORD*)v6 + 19);
      v101[0] = v70;
      v101[1] = v71;
      v101[2] = v72;
    }
  }
  v75 = *(_QWORD*)(a3 + 32);
  if (v75 != 0) {
    if (v75 == a3) {
      v87_.v88 = v87_.v87;
      (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v75 + 24LL))(v75, v87_.v87);
      v77 = v6;
      v76 = v87_.v88;
    }
    else {
      v76 = (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)v75 + 16LL))(v75);
      v87_.v88 = v76;
      v77 = v6;
    }
    v105_.v107 = v77;
    if (v76 != nullptr) {
      if (v76 == v87_.v87) {
        v108_.v109 = v108_.v108;
        (*(void (**)(_BYTE*, _BYTE*))(*(_QWORD*)v76 + 24LL))(v76, v108_.v108);
        v77 = v105_.v107;
        v76 = v108_.v109;
      }
      else {
        v108_.v109 = v76;
        v87_.v88 = nullptr;
      }
      goto LABEL_128;
    }
  }
  else {
    v87_.v88 = nullptr;
    v105_.v107 = v6;
    v77 = v6;
  }
  v76 = nullptr;
  v108_.v109 = nullptr;
LABEL_128:
  v78 = (_QWORD*)fw_memory_HeapManager_Allocate(*v63, 80, 16, 0);
  v78[2] = v77;
  *v78 = GameData_1fdd3d0;
  if (v76 != nullptr) {
    if (v76 == v108_.v108) {
      v79 = v78;
      v78[8] = v78 + 4;
      (*(void (**)(_BYTE*))(*(_QWORD*)v76 + 24LL))(v76);
      v78 = v79;
    }
    else {
      v78[8] = v76;
      v108_.v109 = nullptr;
    }
  }
  else {
    v78[8] = 0;
  }
  v110_.v111 = v78;
  GameRoutine_c18930(v110_.v110, v93);
  if (v110_.v111 == v110_.v110) {
    v80 = 32;
  }
  else {
    if (v110_.v111 == nullptr) {
      goto LABEL_138;
    }
    v80 = 40;
  }
  (*(void (**)(__int64))(*v110_.v111 + v80))((__int64)v110_.v111);
LABEL_138:
  if (v108_.v109 == v108_.v108) {
    v81 = 32;
  }
  else {
    if (v108_.v109 == nullptr) {
      goto LABEL_143;
    }
    v81 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)v108_.v109 + v81))((__int64)v108_.v109);
LABEL_143:
  if (v87_.v88 == v87_.v87) {
    v82 = 32;
  }
  else {
    if (v87_.v88 == nullptr) {
      goto LABEL_148;
    }
    v82 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)v87_.v88 + v82))((__int64)v87_.v88);
LABEL_148:
  v83 = *(_QWORD*)GameData_212c638;
  v6[55] = ((*(_QWORD*)(*(_QWORD*)GameData_212c638 + 32LL) -
             *(_QWORD*)(*(_QWORD*)GameData_212c638 + 24LL)) >>
            3) -
           1;
  GameRoutine_a85120(v83, (unsigned __int8*)v89);
  game_GameView_Update();
  result = GameRoutine_a853b0((__int64)v89);
  if ((v104[0] & 1) != 0 && v104[2] != 0) {
    v84 = 128;
    if (*(_QWORD*)(*v63 + 200) == 0) {
      v84 = 56;
    }
    result = (_DWORD*)nn_mem_StandardAllocator_Free(*v63 + v84);
  }
  if ((v103[0] & 1) != 0 && v103[2] != 0) {
    v85 = 128;
    if (*(_QWORD*)(*v63 + 200) == 0) {
      v85 = 56;
    }
    result = (_DWORD*)nn_mem_StandardAllocator_Free(*v63 + v85);
  }
  if ((v105_.v105[0] & 1) != 0 && v105_.v106 != 0) {
    v86 = 128;
    if (*(_QWORD*)(*v63 + 200) == 0) {
      v86 = 56;
    }
    return (_DWORD*)nn_mem_StandardAllocator_Free(*v63 + v86);
  }
  return result;
}

__int64* MapManager_d6f8d0(__int64* result)
{

#pragma clang fp contract(off)
  unsigned __int64 v1;
  __int64 v2;
  __int64* v3;
  __int64 v4;
  int v5;
  int v6;
  int v7;
  float v8;
  unsigned __int64 v9;
  __int128 v10;
  __int64 v11;
  float v12;

  v1 = *((unsigned __int8*)result + 112);
  v2 = result[15];
  if ((v1 & 1) == 0) {
    v2 = v1 >> 1;
  }
  if (v2 != 0) {
    v3 = result;
    if ((v1 & 1) != 0) {
      *(_BYTE*)result[16] = 0;
      result[15] = 0;
    }
    else {
      *((_WORD*)result + 56) = 0;
    }
    *((_DWORD*)result + 23) = *((_DWORD*)result + 22);
    *((_DWORD*)result + 24) = 0;
    v4 = *(_QWORD*)(GameData_21f3d10 + 216);
    v5 = *(_DWORD*)(v4 + 232);
    if (v5 <= 1) {
      v5 = 1;
    }
    *(_DWORD*)(v4 + 232) = v5;
    ObjectTransparent_f38dc0(GameData_21c9758);
    if (game_ProcGameSkipView_instance_ != 0 &&
        *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
      v6 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
      v7 = (v6 & 8) != 0 ? 2 : 3;
      if ((v7 & v6) == 0) {
        goto LABEL_22;
      }
    }
    v8 = 0x1.0000000000000p+1f;
    if (game_ProcFadeView_instance_ != 0) {
      v9 = game_ProcFadeView_instance_ +
           ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                  480)
            << 6);
      if (*(float*)(v9 + 172) == *(float*)(v9 + 168)) {
        (*(void (**)(unsigned __int64))(*(_QWORD*)(v9 + 160) + 16LL))(v9 + 160);
      }
      else {
        v10 = *(_OWORD*)(v9 + 208);
      }
      if (*((float*)&v10 + 3) == 0x1.0000000000000p+0f &&
          LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                       (_QWORD*)(*(_QWORD*)(v9 + 160) + 16LL))(
                          v9 + 160, *((float*)&v10 + 3)))
                  .n128_f32[3] == 0x1.0000000000000p+0f) {
      LABEL_22:
        v8 = 0x0.0p+0f;
      }
    }
    v11 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21c6978 + 32) -
                                           8LL) +
                                40LL) +
                     392LL);
    if (*(_DWORD*)(v11 + 516) != -1) {
      *(_DWORD*)(v11 + 520) = 1065353216;
      if (v8 <= 0x0.0p+0f) {
        v12 = 0x0.0p+0f;
        *(_DWORD*)(v11 + 524) = 1065353216;
      }
      else {
        v12 = (float)(0x1.0000000000000p+0f - *(float*)(v11 + 524)) / v8;
      }
      *(float*)(v11 + 528) = v12;
      LightingAnimModule_c6da10(v11);
    }
    return GameRoutine_f42060(v3 + 24);
  }
  return result;
}

__int64 game_hub_MapManager_Load_lambda0_Invoke(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  int v3;
  int v4;
  float v5;
  unsigned __int64 v6;
  __int128 v7;
  __int64 v8;
  float v9;
  __int64 result;

  v1 = *(_QWORD*)(a1 + 16);
  ScheduleManager_d9edf0();
  GameRoutine_f41c80();
  ObjectTransparent_f38dc0(GameData_21c9758);
  if (game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v3 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v4 = (v3 & 8) != 0 ? 2 : 3;
    if ((v4 & v3) == 0) {
      goto LABEL_13;
    }
  }
  v5 = 0x1.0000000000000p+1f;
  if (game_ProcFadeView_instance_ != 0) {
    v6 = game_ProcFadeView_instance_ +
         ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                480)
          << 6);
    if (*(float*)(v6 + 172) == *(float*)(v6 + 168)) {
      (*(void (**)(unsigned __int64))(*(_QWORD*)(v6 + 160) + 16LL))(v6 + 160);
    }
    else {
      v7 = *(_OWORD*)(v6 + 208);
    }
    if (*((float*)&v7 + 3) == 0x1.0000000000000p+0f &&
        LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                     (_QWORD*)(*(_QWORD*)(v6 + 160) + 16LL))(
                        v6 + 160, *((float*)&v7 + 3)))
                .n128_f32[3] == 0x1.0000000000000p+0f) {
    LABEL_13:
      v5 = 0x0.0p+0f;
    }
  }
  v8 = *(
      _QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21c6978 + 32) - 8LL) +
                          40LL) +
               392LL);
  if (*(_DWORD*)(v8 + 516) != -1) {
    *(_DWORD*)(v8 + 520) = 1065353216;
    if (v5 <= 0x0.0p+0f) {
      v9 = 0x0.0p+0f;
      *(_DWORD*)(v8 + 524) = 1065353216;
    }
    else {
      v9 = (float)(0x1.0000000000000p+0f - *(float*)(v8 + 524)) / v5;
    }
    *(float*)(v8 + 528) = v9;
    LightingAnimModule_c6da10(v8);
  }
  GameRoutine_f42060((__int64*)(v1 + 192));
  if (*(_BYTE*)(v1 + 216) != 0) {
    *(_BYTE*)(v1 + 216) = 0;
    GameRoutine_10c0c60(GameData_21f3cd8);
  }
  MapManager_d6f2a0(v1);
  *(_DWORD*)(v1 + 8) = 2;
  result = *(_QWORD*)(a1 + 64);
  if (result != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + 48LL))(result);
  }
  return result;
}

#pragma GCC visibility pop
