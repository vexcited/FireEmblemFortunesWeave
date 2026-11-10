#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* HandlePtr_d5bf40(_QWORD* result, __int64, __int64*);
__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 GameRoutine_60a060(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_64df20(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6b7aa0(_QWORD);
__int64 GameRoutine_cb4e70(_QWORD, _QWORD);
__int64 GameRoutine_fb6f80(_QWORD, _QWORD);
__int64 HubCharacterNatives_cb40c0(_QWORD, _QWORD);
__int64 HubCharacterNatives_cb4210(_QWORD, _QWORD);
__int64 HubEventNatives_d5bb40(__int64*, __int64);
__int64 HubEventNatives_e289a0(_QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD, _QWORD);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 strlen(_QWORD);
extern __int64 (*GameData_1fdce28[8])();
extern __int64 (*GameData_1fdd0a0[])();
extern __int64 (*GameData_1fdd0b0[21])();
extern __int64 (*GameData_1fdd0e8[14])();
extern __int64 (*GameData_1fdd1a8[])();
extern __int64 (*HandlePtr_Unknown23_d5be90_ptr[6])();
extern __int64 (*game_hub_AreaEventHandle_vtable[])();
extern __int64 GameData_21f3c98;
extern __int64 GameData_21f3d10;
extern __int64 as_g_thread_info;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212ef18[2];
extern __int64* as_g_script_manager_ptr;
extern __int64* util_g_handle_slots_ptr[2];
void __attribute__((noreturn)) GameRoutine_919020(_QWORD);
void __attribute__((noreturn)) String_60a1d0(void);
_QWORD* HubEventNatives_d5b9c0(_QWORD* result);
__int64 HubEventNatives_d60810(__int64 result, __int64 a2);
_QWORD* HubEventNatives_d61eb0(__int64 a1, char a2);
_QWORD* HubEventNatives_d62a80(__int64 a1, _DWORD* a2);
_QWORD* HubEventNatives_d62bc0(__int64 a1, _DWORD* a2);
__int64 HubEventNatives_d63b00(__int64 a1, unsigned __int8* a2, __int64* a3);
__int64 HubEventNatives_d64dc0(__int64 result, __int64* a2, _QWORD* a3,
                               _QWORD* a4);
__int64 HubEventNatives_d65310(__int64 a1, __int64 a2, __int64 a3);
_QWORD* HubEventNatives_d669e0(__int64 a1, unsigned __int8* a2, float a3);
_QWORD* HubEventNatives_d66da0(__int64 a1, _DWORD* a2);
unsigned __int64 HubEventNatives_d67180(__int64 a1, __int64 a2);
_QWORD* HubEventNatives_d675c0(__int64 a1);
_QWORD* HubEventNatives_d67df0(__int64 a1, __int64 a2);
__int64 GameRoutine_e224c0(_QWORD, _QWORD, _QWORD, float);
__int64 GameRoutine_e24420(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 Manager_66cc20(_QWORD, _QWORD);
extern _UNKNOWN* std___1_piecewise_construct_ptr;
extern __int64 GameData_220fd08;
__int64 hub_event_PushArrangementCharaPid(__int64 a1, __int64 a2);
__int64 hub_event_PushArrangementCharaAnimOnetime(__int64 a1, __int64 a2,
                                                  float a3);

_QWORD* HubEventNatives_d5b9c0(_QWORD* result)
{
  __int64 v1;
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  v1 = result[179];
  v2 = result[178];
  v3 = result;
  if (v2 != v1) {
    v4 = fw_memory_g_heap_manager_ptr;
    do {
      v5 = *(_QWORD**)(v1 - 16);
      v6 = v1;
      if ((_QWORD*)(v1 - 48) == v5) {
        v7 = 32;
      }
      else {
        if (v5 == nullptr) {
          goto LABEL_9;
        }
        v7 = 40;
      }
      (*(void (**)(__int64))(*v5 + v7))((__int64)v5);
    LABEL_9:
      v8 = *(_QWORD**)(v1 - 64);
      if ((_QWORD*)(v1 - 96) == v8) {
        v9 = 32;
      }
      else {
        if (v8 == nullptr) {
          goto LABEL_14;
        }
        v9 = 40;
      }
      (*(void (**)(__int64))(*v8 + v9))((__int64)v8);
    LABEL_14:
      result = *(_QWORD**)(v1 - 112);
      if ((_QWORD*)(v1 - 144) == result) {
        v10 = 32;
      }
      else {
        if (result == nullptr) {
          goto LABEL_19;
        }
        v10 = 40;
      }
      result =
          (_QWORD*)(*(__int64 (**)(__int64))(*result + v10))((__int64)result);
    LABEL_19:
      v1 -= 176;
      if ((*(_BYTE*)(v6 - 176) & 1) != 0) {
        v11 = *(_QWORD*)(v6 - 160);
        if (v11 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
            v12 = 128;
          }
          else {
            v12 = 56;
          }
          result =
              (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v12, v11);
        }
      }
    } while (v1 != v2);
  }
  v3[179] = v2;
  return result;
}

__int64 HubEventNatives_d60810(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64* v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  int v8;

  v2 = *(unsigned int*)(result + 16);
  if ((_DWORD)v2 != 0x4000 &&
      (v3 = util_g_handle_slots_ptr[0],
       v4 =
           (_QWORD*)(util_g_handle_slots_ptr[0][*(unsigned int*)(result + 20)] +
                     16 * v2),
       (v5 = v4[1]) != 0) &&
      *v4 == *(_QWORD*)(result + 8)) {
    *(_QWORD*)a2 = GameData_1fdd0a0;
    *(_QWORD*)(a2 + 8) = 0;
    *(_QWORD*)(a2 + 16) = 0x100004000LL;
    *(_QWORD*)(a2 + 24) = 0;
    v6 = *(unsigned int*)(v5 + 12);
    if ((_DWORD)v6 != 0x4000) {
      v7 = (_QWORD*)(v3[*(unsigned int*)(v5 + 8)] + 16 * v6);
      if (v7[1] == v5) {
        *(_DWORD*)(a2 + 16) = v6;
        *(_QWORD*)(a2 + 8) = *v7;
        v8 = *(_DWORD*)(v5 + 8);
        *(_QWORD*)(a2 + 24) = v5;
        *(_DWORD*)(a2 + 20) = v8;
      }
    }
  }
  else {
    *(_QWORD*)(a2 + 24) = 0;
    *(_QWORD*)(a2 + 8) = 0;
    *(_QWORD*)(a2 + 16) = 0x100004000LL;
  }
  *(_QWORD*)a2 = game_hub_AreaEventHandle_vtable;
  return result;
}

_QWORD* HubEventNatives_d61eb0(__int64 a1, char a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* result;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  unsigned __int8 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int16* v21;
  unsigned __int16* v22;
  unsigned __int16* v23;
  _BOOL8 v24;

  v4 = *as_g_script_manager_ptr;
  v5 = *(
      _QWORD*)(v4 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v5 != 0) {
    v6 = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 472LL))(v5);
  }
  else {
    v6 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v6 + 24) + 448LL))(
      *(_QWORD*)(v6 + 24), 1);
  result = *(_QWORD**)(v6 + 2240);
  *(_QWORD*)(v6 + 2240) = 0;
  if (result == (_QWORD*)(v6 + 2208)) {
    v8 = 32;
    goto LABEL_8;
  }
  if (result != nullptr) {
    v8 = 40;
  LABEL_8:
    result = (_QWORD*)(*(__int64 (**)(__int64))(*result + v8))((__int64)result);
  }
  v9 = *(unsigned int*)(a1 + 16);
  if ((_DWORD)v9 != 0x4000) {
    v10 = util_g_handle_slots_ptr[0];
    v11 = (_QWORD*)(util_g_handle_slots_ptr[0][*(unsigned int*)(a1 + 20)] +
                    16 * v9);
    v12 = v11[1];
    if (v12 != 0 && *v11 == *(_QWORD*)(a1 + 8)) {
      *(_DWORD*)(v12 + 1448) = -1;
      v13 = *(unsigned int*)(a1 + 16);
      v14 = *(unsigned int*)(a1 + 20);
      if ((a2 & 1) != 0) {
        v15 = v10[v14];
        v16 = (_QWORD*)(v15 + 16 * v13);
        v17 = v16[1];
        v18 = *(_BYTE*)(v17 + 1216);
        v19 = *(_QWORD*)(v17 + 1224);
        if ((v18 & 1) == 0) {
          v19 = v18 >> 1;
        }
        if (v19 == 2) {
          if (*v16 == *(_QWORD*)(a1 + 8)) {
            v20 = v16[1];
          }
          else {
            v20 = 0;
          }
          v21 = *(unsigned __int16**)(v17 + 1232);
          v22 = (unsigned __int16*)(v20 + 1217);
          if ((v18 & 1) != 0) {
            v23 = v21;
          }
          else {
            v23 = v22;
          }
          v24 = *v23 == 12609;
          return (_QWORD*)HubEventNatives_e289a0(
              *GameData_212ef18[0],
              *(_QWORD*)(*(_QWORD*)(v15 + 16 * v13 + 8) + 176LL), v24);
        }
      }
      else {
        v15 = v10[v14];
      }
      v24 = false;
      return (_QWORD*)HubEventNatives_e289a0(
          *GameData_212ef18[0],
          *(_QWORD*)(*(_QWORD*)(v15 + 16 * v13 + 8) + 176LL), v24);
    }
  }
  return result;
}

_QWORD* HubEventNatives_d62a80(__int64 a1, _DWORD* a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* result;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int128 v12;

  v4 = *as_g_script_manager_ptr;
  v5 = *(
      _QWORD*)(v4 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v5 != 0) {
    v6 = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 472LL))(v5);
  }
  else {
    v6 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v6 + 24) + 448LL))(
      *(_QWORD*)(v6 + 24), 1);
  result = *(_QWORD**)(v6 + 2240);
  *(_QWORD*)(v6 + 2240) = 0;
  if (result == (_QWORD*)(v6 + 2208)) {
    v8 = 32;
    goto LABEL_8;
  }
  if (result != nullptr) {
    v8 = 40;
  LABEL_8:
    result = (_QWORD*)(*(__int64 (**)(__int64))(*result + v8))((__int64)result);
  }
  v9 = *(unsigned int*)(a1 + 16);
  if ((_DWORD)v9 != 0x4000) {
    v10 = (_QWORD*)(util_g_handle_slots_ptr[0][*(unsigned int*)(a1 + 20)] +
                    16 * v9);
    v11 = v10[1];
    if (v11 != 0 && *v10 == *(_QWORD*)(a1 + 8)) {
      if (*(_BYTE*)(v11 + 80) == 1) {
        *(_DWORD*)(v11 + 64) = *a2;
        *(_DWORD*)(v11 + 68) = a2[1];
        v12 = *(_OWORD*)(v11 + 64);
        *((_QWORD*)&v12 + 1) = (unsigned int)a2[2];
        *(_OWORD*)(v11 + 64) = v12;
      }
      else {
        *(_QWORD*)(v11 + 72) = *((_QWORD*)a2 + 1);
        *(_QWORD*)(v11 + 64) = *(_QWORD*)a2;
        *(_BYTE*)(v11 + 80) = 1;
      }
    }
  }
  return result;
}

_QWORD* HubEventNatives_d62bc0(__int64 a1, _DWORD* a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* result;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int128 v12;

  v4 = *as_g_script_manager_ptr;
  v5 = *(
      _QWORD*)(v4 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v5 != 0) {
    v6 = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 472LL))(v5);
  }
  else {
    v6 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v6 + 24) + 448LL))(
      *(_QWORD*)(v6 + 24), 1);
  result = *(_QWORD**)(v6 + 2240);
  *(_QWORD*)(v6 + 2240) = 0;
  if (result == (_QWORD*)(v6 + 2208)) {
    v8 = 32;
    goto LABEL_8;
  }
  if (result != nullptr) {
    v8 = 40;
  LABEL_8:
    result = (_QWORD*)(*(__int64 (**)(__int64))(*result + v8))((__int64)result);
  }
  v9 = *(unsigned int*)(a1 + 16);
  if ((_DWORD)v9 != 0x4000) {
    v10 = (_QWORD*)(util_g_handle_slots_ptr[0][*(unsigned int*)(a1 + 20)] +
                    16 * v9);
    v11 = v10[1];
    if (v11 != 0 && *v10 == *(_QWORD*)(a1 + 8)) {
      if (*(_BYTE*)(v11 + 48) == 1) {
        *(_DWORD*)(v11 + 32) = *a2;
        *(_DWORD*)(v11 + 36) = a2[1];
        v12 = *(_OWORD*)(v11 + 32);
        *((_QWORD*)&v12 + 1) = (unsigned int)a2[2];
        *(_OWORD*)(v11 + 32) = v12;
      }
      else {
        *(_QWORD*)(v11 + 40) = *((_QWORD*)a2 + 1);
        *(_QWORD*)(v11 + 32) = *(_QWORD*)a2;
        *(_BYTE*)(v11 + 48) = 1;
      }
    }
  }
  return result;
}

__int64 HubEventNatives_d63b00(__int64 a1, unsigned __int8* a2, __int64* a3)
{
  int v3;
  unsigned int v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int8* v9;
  __int64 v10;
  __int64* v11;
  __int64* v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  unsigned int v15;
  __int64 result;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  char v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27[2];
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  _QWORD v32[6];
  unsigned int v33;
  unsigned __int64 v34;

  v3 = *(_DWORD*)(a1 + 256);
  LOWORD(v27[0]) = 0;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  if ((unsigned int)(v3 - 1) >= 3) {
    v6 = 1;
  }
  else {
    v6 = 4;
  }
  v7 = *a2;
  if ((v7 & 1) != 0) {
    v8 = *((_QWORD*)a2 + 1);
  }
  else {
    v8 = v7 >> 1;
  }
  if ((v7 & 1) != 0) {
    v9 = *((unsigned __int8**)a2 + 2);
  }
  else {
    v9 = a2 + 1;
  }
  GameRoutine_60a060(v27, v9, v8);
  if (&v29 != a3) {
    GameRoutine_6b7aa0(&v29);
  }
  v11 = (__int64*)(a1 + 24LL * v6);
  v12 = v11 + 160;
  HandlePtr_d5bf40(v32, v10, v27);
  v13 = v11[161];
  v14 = v11[162];
  v33 = 0;
  if (v13 >= v14) {
    result = HubEventNatives_d5bb40(v11 + 160, (__int64)v32);
  }
  else {
    *(_BYTE*)v13 = 0;
    *(_DWORD*)(v13 + 48) = -1;
    v15 = v33;
    if (v33 != -1) {
      v34 = v13;
      ((void (*)(unsigned __int64*,
                 _QWORD*))HandlePtr_Unknown23_d5be90_ptr[v33])(&v34, v32);
      *(_DWORD*)(v13 + 48) = v15;
    }
    result = v13 + 64;
  }
  v17 = v33;
  v12[1] = result;
  if ((_DWORD)v17 != -1) {
    result = ((__int64 (*)(unsigned __int64*, _QWORD*))GameData_1fdce28[v17])(
        &v34, v32);
  }
  v18 = v29;
  if (v29 != 0) {
    v19 = v30;
    v20 = fw_memory_g_heap_manager_ptr;
    if (v29 == v30) {
      goto LABEL_30;
    }
    v21 = v30;
    do {
      v22 = *(_BYTE*)(v21 - 24);
      v21 -= 24;
      if ((v22 & 1) != 0) {
        v23 = *(_QWORD*)(v19 - 8);
        if (v23 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v20 + 200LL) != 0) {
            v24 = 128;
          }
          else {
            v24 = 56;
          }
          result = nn_mem_StandardAllocator_Free(*(_QWORD*)v20 + v24, v23);
        }
      }
      v19 = v21;
    } while (v21 != v18);
    v30 = v18;
    v18 = v29;
    if (v29 != 0) {
    LABEL_30:
      v25 = 128;
      if (*(_QWORD*)(*(_QWORD*)v20 + 200LL) == 0) {
        v25 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v20 + v25, v18);
    }
  }
  if ((v27[0] & 1) != 0 && v28 != 0) {
    v26 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v26 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v26, v28);
  }
  return result;
}

__int64 HubEventNatives_d64dc0(__int64 result, __int64* a2, _QWORD* a3,
                               _QWORD* a4)
{
  __int64 v4;
  __int64 v5;
  __int64* v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  _BYTE* v10;
  _QWORD* v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  int v18;
  __int64 (*v19)();
  __int64 v20;
  __int64 v21;
  __int64 v22;
  _QWORD* v23;
  _QWORD* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  _QWORD* v40;
  __int64 v41;
  unsigned __int64 v42;
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
  __int64 v56;
  __int64 v57;
  __int64* v58;
  __int64 v59;
  __int64* v60;
  _BYTE v61[32];
  _BYTE* v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  _QWORD v69[4];
  _QWORD* v70;
  char v71;

  v4 = *(unsigned int*)(result + 16);
  if ((_DWORD)v4 == 0x4000) {
    return result;
  }
  v5 = result;
  v6 = util_g_handle_slots_ptr[0];
  v7 = (_QWORD*)(util_g_handle_slots_ptr[0][*(unsigned int*)(result + 20)] +
                 16 * v4);
  if (v7[1] == 0 || *v7 != *(_QWORD*)(result + 8)) {
    return result;
  }
  v54 = 0;
  v55 = 0;
  v56 = 0;
  v58 = nullptr;
  v60 = nullptr;
  v62 = nullptr;
  if (&v54 != a2) {
    if ((*(_BYTE*)a2 & 1) != 0) {
      v10 = a3;
      v11 = a4;
      result = GameRoutine_64df20(&v54, a2[2], a2[1]);
      a3 = v10;
      a4 = v11;
      if ((*v10 & 1) == 0) {
        goto LABEL_8;
      }
      goto LABEL_10;
    }
    v8 = a2[1];
    v54 = *a2;
    v55 = v8;
    v56 = a2[2];
  }
  if ((*(_BYTE*)a3 & 1) == 0) {
  LABEL_8:
    v9 = a3[1];
    v48 = *a3;
    v49 = v9;
    v50 = a3[2];
    goto LABEL_11;
  }

LABEL_10:
  v12 = a4;
  result = fw_text_String_CopyTerminated(&v48, a3[2], a3[1]);
  a4 = v12;

LABEL_11:
  v52 = 0;
  v53 = 0;
  v51 = 0;
  v13 = *a4;
  v14 = a4[1];
  v15 = v14 - *a4;
  v16 = fw_memory_g_heap_manager_ptr;
  if (v14 == *a4) {
    v17 = 0;
  }
  else {
    if (v15 < 0) {
      GameRoutine_919020(result);
    }
    v17 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         v14 - *a4, 16, 0);
    v51 = v17;
    v52 = v17;
    v53 = v17 + v15;
    do {
      *(_BYTE*)v17 = 0;
      *(_DWORD*)(v17 + 24) = -1;
      v18 = *(_DWORD*)(v13 + 24);
      if (v18 != -1) {
        v19 = GameData_1fdd0e8[v18];
        v69[0] = v17;
        ((void (*)(_QWORD*, __int64))v19)(v69, v13);
        *(_DWORD*)(v17 + 24) = v18;
      }
      v13 += 32;
      v17 += 32;
    } while (v13 != v14);
    v52 = v17;
  }
  if ((v48 & 1) != 0) {
    fw_text_String_CopyTerminated(&v63, v50, v49);
    v17 = v52;
  }
  else {
    v63 = v48;
    v64 = v49;
    v65 = v50;
  }
  v20 = v51;
  v21 = v53;
  v22 = *(_QWORD*)v16;
  v52 = 0;
  v53 = 0;
  v51 = 0;
  v66 = v20;
  v67 = v17;
  v68 = v21;
  v23 = (_QWORD*)fw_memory_HeapManager_Allocate(v22, 56, 16, 0);
  *v23 = GameData_1fdd1a8;
  v24 = v23 + 1;
  if ((v63 & 1) != 0) {
    fw_text_String_CopyTerminated(v24, v65, v64);
    v20 = v66;
    v17 = v67;
    v21 = v68;
  }
  else {
    v25 = v64;
    *v24 = v63;
    v23[2] = v25;
    v23[3] = v65;
  }
  v23[4] = v20;
  v23[5] = v17;
  v23[6] = v21;
  v66 = 0;
  v67 = 0;
  v68 = 0;
  v70 = v23;
  GameRoutine_cb4e70(v69, v61);
  if (v70 == v69) {
    v26 = 32;
    goto LABEL_29;
  }
  if (v70 != nullptr) {
    v26 = 40;
  LABEL_29:
    (*(void (**)(void))(*v70 + v26))();
  }
  v27 = v66;
  if (v66 != 0) {
    v28 = v67;
    if (v66 == v67) {
      goto LABEL_37;
    }
    do {
      v29 = *(unsigned int*)(v28 - 8);
      v30 = v28 - 32;
      if ((_DWORD)v29 != -1) {
        ((void (*)(char*, __int64))GameData_1fdd0b0[v29])(&v71, v28 - 32);
      }
      *(_DWORD*)(v28 - 8) = -1;
      v28 -= 32;
    } while (v30 != v27);
    v67 = v27;
    v27 = v66;
    if (v66 != 0) {
    LABEL_37:
      v31 = 128;
      if (*(_QWORD*)(*(_QWORD*)v16 + 200LL) == 0) {
        v31 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v16 + v31, v27);
    }
  }
  if ((v63 & 1) != 0 && v65 != 0) {
    v32 = 128;
    if (*(_QWORD*)(*(_QWORD*)v16 + 200LL) == 0) {
      v32 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v16 + v32, v65);
  }
  v33 = v51;
  if (v51 != 0) {
    v34 = v52;
    if (v51 == v52) {
      goto LABEL_52;
    }
    do {
      v35 = *(unsigned int*)(v34 - 8);
      v36 = v34 - 32;
      if ((_DWORD)v35 != -1) {
        ((void (*)(_QWORD*, __int64))GameData_1fdd0b0[v35])(v69, v34 - 32);
      }
      *(_DWORD*)(v34 - 8) = -1;
      v34 -= 32;
    } while (v36 != v33);
    v52 = v33;
    v33 = v51;
    if (v51 != 0) {
    LABEL_52:
      v37 = 128;
      if (*(_QWORD*)(*(_QWORD*)v16 + 200LL) == 0) {
        v37 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v16 + v37, v33);
    }
  }
  if ((v48 & 1) != 0 && v50 != 0) {
    v38 = 128;
    if (*(_QWORD*)(*(_QWORD*)v16 + 200LL) == 0) {
      v38 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v16 + v38, v50);
  }
  v39 = *(unsigned int*)(v5 + 16);
  if ((_DWORD)v39 == 0x4000 ||
      (v40 = (_QWORD*)(v6[*(unsigned int*)(v5 + 20)] + 16 * v39))[1] == 0) {
    v41 = 0;
  }
  else if (*v40 == *(_QWORD*)(v5 + 8)) {
    v41 = v40[1];
  }
  else {
    v41 = 0;
  }
  v42 = *(_QWORD*)(v41 + 1432);
  if (v42 >= *(_QWORD*)(v41 + 1440)) {
    v43 = HubCharacterNatives_cb40c0(v41 + 1424, &v54);
  }
  else {
    HubCharacterNatives_cb4210(*(_QWORD*)(v41 + 1432), &v54);
    v43 = v42 + 176;
  }
  *(_QWORD*)(v41 + 1432) = v43;
  if (v62 == v61) {
    v44 = 32;
  }
  else {
    if (v62 == nullptr) {
      goto LABEL_74;
    }
    v44 = 40;
  }
  (*(void (**)(void))(*(_QWORD*)v62 + v44))();

LABEL_74:
  if (v60 == &v59) {
    v45 = 32;
  }
  else {
    if (v60 == nullptr) {
      goto LABEL_79;
    }
    v45 = 40;
  }
  (*(void (**)(void))(*v60 + v45))();

LABEL_79:
  result = (__int64)v58;
  if (v58 == &v57) {
    v46 = 32;
    goto LABEL_83;
  }
  if (v58 != nullptr) {
    v46 = 40;
  LABEL_83:
    result = (*(__int64 (**)(void))(*v58 + v46))();
  }
  if ((v54 & 1) != 0 && v56 != 0) {
    v47 = 128;
    if (*(_QWORD*)(*(_QWORD*)v16 + 200LL) == 0) {
      v47 = 56;
    }
    return nn_mem_StandardAllocator_Free(*(_QWORD*)v16 + v47, v56);
  }
  return result;
}

__int64 HubEventNatives_d65310(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  char* v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  char* v19;
  __int64 v20;
  __int64 result;
  __int64 v22;
  __int64 v23;
  _QWORD v24[3];
  _QWORD v25[2];
  char* v26;
  _QWORD v27[2];
  char* v28;

  v6 = *as_g_script_manager_ptr;
  v7 = *(
      _QWORD*)(v6 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v7 != 0) {
    v8 = (*(__int64 (**)(__int64))(*(_QWORD*)v7 + 472LL))(v7);
  }
  else {
    v8 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v8 + 24) + 448LL))(
      *(_QWORD*)(v8 + 24), 1);
  v9 = *(_QWORD**)(v8 + 2240);
  *(_QWORD*)(v8 + 2240) = 0;
  if (v9 == (_QWORD*)(v8 + 2208)) {
    v10 = 32;
  }
  else {
    if (v9 == nullptr) {
      goto LABEL_9;
    }
    v10 = 40;
  }
  (*(void (**)(__int64))(*v9 + v10))((__int64)v9);

LABEL_9:
  if ((*(_BYTE*)a2 & 1) != 0) {
    v11 = *(_QWORD*)(a2 + 16);
  }
  else {
    v11 = a2 + 1;
  }
  v12 = strlen(v11);
  if (v12 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_44:
    String_60a1d0();
  }
  v13 = v12;
  if (v12 >= 0x17) {
    if ((v12 | 7) == 0x17) {
      v15 = 26;
    }
    else {
      v15 = (v12 | 7) + 1;
    }
    v14 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v15,
                                                16, 0);
    v27[1] = v13;
    v28 = v14;
    v27[0] = v15 | 1;
    goto LABEL_20;
  }
  LOBYTE(v27[0]) = 2 * v12;
  v14 = (char*)v27 + 1;
  if (v12 != 0) {
  LABEL_20:
    memmove(v14, v11, v13);
  }
  v14[v13] = 0;
  if ((*(_BYTE*)a3 & 1) != 0) {
    v16 = *(_QWORD*)(a3 + 16);
  }
  else {
    v16 = a3 + 1;
  }
  v17 = strlen(v16);
  if (v17 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_44;
  }
  v18 = v17;
  if (v17 >= 0x17) {
    if ((v17 | 7) == 0x17) {
      v20 = 26;
    }
    else {
      v20 = (v17 | 7) + 1;
    }
    v19 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v20,
                                                16, 0);
    v25[1] = v18;
    v26 = v19;
    v25[0] = v20 | 1;
  }
  else {
    LOBYTE(v25[0]) = 2 * v17;
    v19 = (char*)v25 + 1;
    if (v17 == 0) {
      goto LABEL_33;
    }
  }
  memmove(v19, v16, v18);

LABEL_33:
  v19[v18] = 0;
  memset(v24, 0, sizeof(v24));
  result = HubEventNatives_d64dc0(a1, v27, v25, v24);
  if ((v25[0] & 1) != 0 && v26 != nullptr) {
    v22 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v22 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v22, v26);
  }
  if ((v27[0] & 1) != 0 && v28 != nullptr) {
    v23 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v23 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v23, v28);
  }
  return result;
}

__int64 hub_event_PushArrangementCharaPid(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  char* v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  char* v18;
  __int64 v19;
  __int64 v20;
  __int64* v21;
  __int64 v22;
  __int64 v23;
  char* v24;
  __int64 result;
  int v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  char* v31;
  _QWORD v32[2];
  char* v33;
  char v34;
  _QWORD* v35;

  v4 = *as_g_script_manager_ptr;
  v5 = *(
      _QWORD*)(v4 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v5 != 0) {
    v6 = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 472LL))(v5);
  }
  else {
    v6 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v6 + 24) + 448LL))(
      *(_QWORD*)(v6 + 24), 1);
  v7 = *(_QWORD**)(v6 + 2240);
  *(_QWORD*)(v6 + 2240) = 0;
  if (v7 == (_QWORD*)(v6 + 2208)) {
    v8 = 32;
  }
  else {
    if (v7 == nullptr) {
      goto LABEL_9;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*v7 + v8))((__int64)v7);
LABEL_9:
  v9 = GameData_220fd08;
  if ((*(_BYTE*)a1 & 1) != 0) {
    v10 = *(_QWORD*)(a1 + 16);
  }
  else {
    v10 = a1 + 1;
  }
  v11 = strlen(v10);
  if (v11 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_49:
    String_60a1d0();
  }
  v12 = v11;
  if (v11 >= 0x17) {
    if ((v11 | 7) == 0x17) {
      v14 = 26;
    }
    else {
      v14 = (v11 | 7) + 1;
    }
    v13 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v14,
                                                16, 0);
    v32[1] = v12;
    v33 = v13;
    v32[0] = v14 | 1;
    goto LABEL_20;
  }
  LOBYTE(v32[0]) = 2 * v11;
  v13 = (char*)v32 + 1;
  if (v11 != 0) {
  LABEL_20:
    memmove(v13, v10, v12);
  }
  v13[v12] = 0;
  if ((*(_BYTE*)a2 & 1) != 0) {
    v15 = *(_QWORD*)(a2 + 16);
  }
  else {
    v15 = a2 + 1;
  }
  v16 = strlen(v15);
  if (v16 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_49;
  }
  v17 = v16;
  if (v16 >= 0x17) {
    if ((v16 | 7) == 0x17) {
      v19 = 26;
    }
    else {
      v19 = (v16 | 7) + 1;
    }
    v18 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v19,
                                                16, 0);
    v30 = v17;
    v31 = v18;
    v29 = v19 | 1;
    goto LABEL_32;
  }
  LOBYTE(v29) = 2 * v16;
  v18 = (char*)&v29 + 1;
  if (v16 != 0) {
  LABEL_32:
    memmove(v18, v15, v17);
  }
  v18[v17] = 0;
  v35 = v32;
  v20 = GameRoutine_e24420(v9 + 8, v32, std___1_piecewise_construct_ptr, &v35,
                           &v34);
  v21 = *(__int64**)(v20 + 64);
  v22 = v20;
  if ((unsigned __int64)v21 >= *(_QWORD*)(v20 + 72)) {
    result = Manager_66cc20(v20 + 56, &v29);
    v26 = v29 & 1;
    *(_QWORD*)(v22 + 64) = result;
    if (v26 == 0) {
      goto LABEL_43;
    }
  }
  else {
    if ((v29 & 1) == 0) {
      v23 = v29;
      v24 = v31;
      result = (__int64)(v21 + 3);
      v21[1] = v30;
      v21[2] = (__int64)v24;
      *v21 = v23;
      *(_QWORD*)(v22 + 64) = v21 + 3;
      goto LABEL_43;
    }
    fw_text_String_CopyTerminated(*(_QWORD*)(v20 + 64), v31, v30);
    result = (__int64)(v21 + 3);
    *(_QWORD*)(v22 + 64) = v21 + 3;
  }
  if (v31 != nullptr) {
    v27 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v27 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v27, v31);
  }
LABEL_43:
  if ((v32[0] & 1) != 0 && v33 != nullptr) {
    v28 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v28 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v28, v33);
  }
  return result;
}

__int64 hub_event_PushArrangementCharaAnimOnetime(__int64 a1, __int64 a2,
                                                  float a3)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  char* v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  char* v20;
  __int64 v21;
  __int64 result;
  __int64 v23;
  __int64 v24;
  _QWORD v25[2];
  char* v26;
  _QWORD v27[2];
  char* v28;

  v6 = *as_g_script_manager_ptr;
  v7 = *(
      _QWORD*)(v6 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v7 != 0) {
    v8 = (*(__int64 (**)(__int64))(*(_QWORD*)v7 + 472LL))(v7);
  }
  else {
    v8 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v8 + 24) + 448LL))(
      *(_QWORD*)(v8 + 24), 1);
  v9 = *(_QWORD**)(v8 + 2240);
  *(_QWORD*)(v8 + 2240) = 0;
  if (v9 == (_QWORD*)(v8 + 2208)) {
    v10 = 32;
  }
  else {
    if (v9 == nullptr) {
      goto LABEL_9;
    }
    v10 = 40;
  }
  (*(void (**)(__int64))(*v9 + v10))((__int64)v9);
LABEL_9:
  v11 = GameData_220fd08;
  if ((*(_BYTE*)a1 & 1) != 0) {
    v12 = *(_QWORD*)(a1 + 16);
  }
  else {
    v12 = a1 + 1;
  }
  v13 = strlen(v12);
  if (v13 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_44:
    String_60a1d0();
  }
  v14 = v13;
  if (v13 >= 0x17) {
    if ((v13 | 7) == 0x17) {
      v16 = 26;
    }
    else {
      v16 = (v13 | 7) + 1;
    }
    v15 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v16,
                                                16, 0);
    v27[1] = v14;
    v28 = v15;
    v27[0] = v16 | 1;
    goto LABEL_20;
  }
  LOBYTE(v27[0]) = 2 * v13;
  v15 = (char*)v27 + 1;
  if (v13 != 0) {
  LABEL_20:
    memmove(v15, v12, v14);
  }
  v15[v14] = 0;
  if ((*(_BYTE*)a2 & 1) != 0) {
    v17 = *(_QWORD*)(a2 + 16);
  }
  else {
    v17 = a2 + 1;
  }
  v18 = strlen(v17);
  if (v18 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_44;
  }
  v19 = v18;
  if (v18 >= 0x17) {
    if ((v18 | 7) == 0x17) {
      v21 = 26;
    }
    else {
      v21 = (v18 | 7) + 1;
    }
    v20 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v21,
                                                16, 0);
    v25[1] = v19;
    v26 = v20;
    v25[0] = v21 | 1;
  }
  else {
    LOBYTE(v25[0]) = 2 * v18;
    v20 = (char*)v25 + 1;
    if (v18 == 0) {
      goto LABEL_33;
    }
  }
  memmove(v20, v17, v19);
LABEL_33:
  v20[v19] = 0;
  result = GameRoutine_e224c0(v11, v27, v25, a3);
  if ((v25[0] & 1) != 0 && v26 != nullptr) {
    v23 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v23 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v23, v26);
  }
  if ((v27[0] & 1) != 0 && v28 != nullptr) {
    v24 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v24 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v24, v28);
  }
  return result;
}

_QWORD* HubEventNatives_d669e0(__int64 a1, unsigned __int8* a2, float a3)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD* result;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  _QWORD* v16;
  _QWORD* v17;
  _QWORD* v18;
  _QWORD* v19;
  _QWORD* v20;
  bool v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  __int64 v35;
  int v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  unsigned __int8* v39;

  v6 = *as_g_script_manager_ptr;
  v7 = *(
      _QWORD*)(v6 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v7 != 0) {
    v8 = (*(__int64 (**)(__int64))(*(_QWORD*)v7 + 472LL))(v7);
  }
  else {
    v8 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v8 + 24) + 448LL))(
      *(_QWORD*)(v8 + 24), 1);
  result = *(_QWORD**)(v8 + 2240);
  *(_QWORD*)(v8 + 2240) = 0;
  if (result == (_QWORD*)(v8 + 2208)) {
    v10 = 32;
    goto LABEL_8;
  }
  if (result != nullptr) {
    v10 = 40;
  LABEL_8:
    result =
        (_QWORD*)(*(__int64 (**)(__int64))(*result + v10))((__int64)result);
  }
  v11 = *(unsigned int*)(a1 + 16);
  if ((_DWORD)v11 == 0x4000) {
    return result;
  }
  v12 = (_QWORD*)(util_g_handle_slots_ptr[0][*(unsigned int*)(a1 + 20)] +
                  16 * v11);
  v13 = v12[1];
  if (v13 == 0) {
    return result;
  }
  if (*v12 != *(_QWORD*)(a1 + 8)) {
    return result;
  }
  v14 = *(_QWORD**)(GameData_21f3c98 + 152);
  if (v14 == (_QWORD*)(GameData_21f3c98 + 160)) {
    return result;
  }
  v15 = *(_QWORD*)(v13 + 176);
  while (1) {
    v16 = (_QWORD*)v14[7];
    v17 = (_QWORD*)v14[8];
    if (v16 != v17) {
      while (*(_QWORD*)(*v16 + 176LL) != v15) {
        v16 += 2;
        if (v16 == v17) {
          goto LABEL_20;
        }
      }
    }
    if (v16 != v17) {
      break;
    }
  LABEL_20:
    v16 = (_QWORD*)v14[10];
    v18 = (_QWORD*)v14[11];
    if (v16 != v18) {
      while (*(_QWORD*)(*v16 + 176LL) != v15) {
        v16 += 2;
        if (v16 == v18) {
          goto LABEL_25;
        }
      }
    }
    if (v16 != v18) {
      break;
    }
  LABEL_25:
    v19 = (_QWORD*)v14[1];
    if (v19 != nullptr) {
      do {
        v20 = v19;
        v19 = (_QWORD*)*v19;
      } while (v19 != nullptr);
    }
    else {
      do {
        v20 = (_QWORD*)v14[2];
        v21 = v14 == (_QWORD*)*v20;
        v14 = v20;
      } while (!v21);
    }
    v14 = v20;
    if (v20 == (_QWORD*)(GameData_21f3c98 + 160)) {
      return result;
    }
  }
  v23 = *v16;
  v22 = v16[1];
  if (v22 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v22 + 8), 1u,
                              memory_order_relaxed);
    if (v23 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v22 + 8), 1u,
                                memory_order_relaxed);
      v24 = *(unsigned __int8*)(v23 + 1216);
      if ((v24 & 1) != 0) {
        v25 = *(_QWORD*)(v23 + 1224);
      }
      else {
        v25 = v24 >> 1;
      }
      v26 = *(unsigned __int8*)(GameData_21f3d10 + 88);
      v27 = *(_QWORD*)(GameData_21f3d10 + 96);
      if ((v26 & 1) == 0) {
        v27 = v26 >> 1;
      }
      if (v25 == v27) {
        if ((v24 & 1) != 0) {
          v28 = *(_QWORD*)(v23 + 1232);
        }
        else {
          v28 = v23 + 1217;
        }
        if ((v26 & 1) != 0) {
          v29 = *(_QWORD*)(GameData_21f3d10 + 104);
        }
        else {
          v29 = GameData_21f3d10 + 89;
        }
        result = (_QWORD*)memcmp(v28, v29, v25);
        if (atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          if ((_DWORD)result == 0) {
          LABEL_66:
            v37 = *a2;
            if ((v37 & 1) != 0) {
              v38 = *((_QWORD*)a2 + 1);
            }
            else {
              v38 = v37 >> 1;
            }
            if ((v37 & 1) != 0) {
              v39 = *((unsigned __int8**)a2 + 2);
            }
            else {
              v39 = a2 + 1;
            }
            result = (_QWORD*)GameRoutine_60a060(v23 + 1568, v39, v38);
            *(float*)(v23 + 1592) = a3;
            if (v22 == 0) {
              return result;
            }
          }
        }
        else {
          v36 = (int)result;
          (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
          result = (_QWORD*)std___1___shared_weak_count___release_weak(v22);
          if (v36 == 0) {
            goto LABEL_66;
          }
        }
      }
      else if (atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                                0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
        result = (_QWORD*)std___1___shared_weak_count___release_weak(v22);
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
      return (_QWORD*)std___1___shared_weak_count___release_weak(v22);
    }
    return result;
  }
  if (v23 != 0) {
    v30 = *(unsigned __int8*)(v23 + 1216);
    if ((v30 & 1) != 0) {
      v31 = *(_QWORD*)(v23 + 1224);
    }
    else {
      v31 = v30 >> 1;
    }
    v32 = *(unsigned __int8*)(GameData_21f3d10 + 88);
    v33 = *(_QWORD*)(GameData_21f3d10 + 96);
    if ((v32 & 1) == 0) {
      v33 = v32 >> 1;
    }
    if (v31 == v33) {
      v34 = (v30 & 1) != 0 ? *(_QWORD*)(v23 + 1232) : v23 + 1217;
      v35 = (v32 & 1) != 0 ? *(_QWORD*)(GameData_21f3d10 + 104)
                           : GameData_21f3d10 + 89;
      result = (_QWORD*)memcmp(v34, v35, v31);
      if ((_DWORD)result == 0) {
        v22 = 0;
        goto LABEL_66;
      }
    }
  }
  return result;
}

_QWORD* HubEventNatives_d66da0(__int64 a1, _DWORD* a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* result;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  _QWORD* v14;
  _QWORD* v15;
  _QWORD* v16;
  _QWORD* v17;
  _QWORD* v18;
  bool v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  int v34;
  __int128 v35;

  v4 = *as_g_script_manager_ptr;
  v5 = *(
      _QWORD*)(v4 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v5 != 0) {
    v6 = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 472LL))(v5);
  }
  else {
    v6 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v6 + 24) + 448LL))(
      *(_QWORD*)(v6 + 24), 1);
  result = *(_QWORD**)(v6 + 2240);
  *(_QWORD*)(v6 + 2240) = 0;
  if (result == (_QWORD*)(v6 + 2208)) {
    v8 = 32;
    goto LABEL_8;
  }
  if (result != nullptr) {
    v8 = 40;
  LABEL_8:
    result = (_QWORD*)(*(__int64 (**)(__int64))(*result + v8))((__int64)result);
  }
  v9 = *(unsigned int*)(a1 + 16);
  if ((_DWORD)v9 == 0x4000) {
    return result;
  }
  v10 = (_QWORD*)(util_g_handle_slots_ptr[0][*(unsigned int*)(a1 + 20)] +
                  16 * v9);
  v11 = v10[1];
  if (v11 == 0) {
    return result;
  }
  if (*v10 != *(_QWORD*)(a1 + 8)) {
    return result;
  }
  v12 = *(_QWORD**)(GameData_21f3c98 + 152);
  if (v12 == (_QWORD*)(GameData_21f3c98 + 160)) {
    return result;
  }
  v13 = *(_QWORD*)(v11 + 176);
  while (1) {
    v14 = (_QWORD*)v12[7];
    v15 = (_QWORD*)v12[8];
    if (v14 != v15) {
      while (*(_QWORD*)(*v14 + 176LL) != v13) {
        v14 += 2;
        if (v14 == v15) {
          goto LABEL_20;
        }
      }
    }
    if (v14 != v15) {
      break;
    }
  LABEL_20:
    v14 = (_QWORD*)v12[10];
    v16 = (_QWORD*)v12[11];
    if (v14 != v16) {
      while (*(_QWORD*)(*v14 + 176LL) != v13) {
        v14 += 2;
        if (v14 == v16) {
          goto LABEL_25;
        }
      }
    }
    if (v14 != v16) {
      break;
    }
  LABEL_25:
    v17 = (_QWORD*)v12[1];
    if (v17 != nullptr) {
      do {
        v18 = v17;
        v17 = (_QWORD*)*v17;
      } while (v17 != nullptr);
    }
    else {
      do {
        v18 = (_QWORD*)v12[2];
        v19 = v12 == (_QWORD*)*v18;
        v12 = v18;
      } while (!v19);
    }
    v12 = v18;
    if (v18 == (_QWORD*)(GameData_21f3c98 + 160)) {
      return result;
    }
  }
  v21 = *v14;
  v20 = v14[1];
  if (v20 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v20 + 8), 1u,
                              memory_order_relaxed);
    if (v21 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v20 + 8), 1u,
                                memory_order_relaxed);
      v22 = *(unsigned __int8*)(v21 + 1216);
      if ((v22 & 1) != 0) {
        v23 = *(_QWORD*)(v21 + 1224);
      }
      else {
        v23 = v22 >> 1;
      }
      v24 = *(unsigned __int8*)(GameData_21f3d10 + 88);
      v25 = *(_QWORD*)(GameData_21f3d10 + 96);
      if ((v24 & 1) == 0) {
        v25 = v24 >> 1;
      }
      if (v23 == v25) {
        if ((v22 & 1) != 0) {
          v26 = *(_QWORD*)(v21 + 1232);
        }
        else {
          v26 = v21 + 1217;
        }
        if ((v24 & 1) != 0) {
          v27 = *(_QWORD*)(GameData_21f3d10 + 104);
        }
        else {
          v27 = GameData_21f3d10 + 89;
        }
        result = (_QWORD*)memcmp(v26, v27, v23);
        if (atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          if ((_DWORD)result == 0) {
          LABEL_66:
            if (*(_BYTE*)(v21 + 1616) == 1) {
              *(_DWORD*)(v21 + 1600) = *a2;
              *(_DWORD*)(v21 + 1604) = a2[1];
              v35 = *(_OWORD*)(v21 + 1600);
              *((_QWORD*)&v35 + 1) = (unsigned int)a2[2];
              *(_OWORD*)(v21 + 1600) = v35;
              if (v20 == 0) {
                return result;
              }
            }
            else {
              *(_QWORD*)(v21 + 1608) = *((_QWORD*)a2 + 1);
              *(_QWORD*)(v21 + 1600) = *(_QWORD*)a2;
              *(_BYTE*)(v21 + 1616) = 1;
              if (v20 == 0) {
                return result;
              }
            }
          }
        }
        else {
          v34 = (int)result;
          (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
          result = (_QWORD*)std___1___shared_weak_count___release_weak(v20);
          if (v34 == 0) {
            goto LABEL_66;
          }
        }
      }
      else if (atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                                0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
        result = (_QWORD*)std___1___shared_weak_count___release_weak(v20);
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
      return (_QWORD*)std___1___shared_weak_count___release_weak(v20);
    }
    return result;
  }
  if (v21 != 0) {
    v28 = *(unsigned __int8*)(v21 + 1216);
    if ((v28 & 1) != 0) {
      v29 = *(_QWORD*)(v21 + 1224);
    }
    else {
      v29 = v28 >> 1;
    }
    v30 = *(unsigned __int8*)(GameData_21f3d10 + 88);
    v31 = *(_QWORD*)(GameData_21f3d10 + 96);
    if ((v30 & 1) == 0) {
      v31 = v30 >> 1;
    }
    if (v29 == v31) {
      v32 = (v28 & 1) != 0 ? *(_QWORD*)(v21 + 1232) : v21 + 1217;
      v33 = (v30 & 1) != 0 ? *(_QWORD*)(GameData_21f3d10 + 104)
                           : GameData_21f3d10 + 89;
      result = (_QWORD*)memcmp(v32, v33, v29);
      if ((_DWORD)result == 0) {
        v20 = 0;
        goto LABEL_66;
      }
    }
  }
  return result;
}

unsigned __int64 HubEventNatives_d67180(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 result;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  _QWORD* v14;
  _QWORD* v15;
  _QWORD* v16;
  _QWORD* v17;
  _QWORD* v18;
  bool v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  int v34;
  int v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64 v39;

  v4 = *as_g_script_manager_ptr;
  v5 = *(
      _QWORD*)(v4 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v5 != 0) {
    v6 = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 472LL))(v5);
  }
  else {
    v6 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v6 + 24) + 448LL))(
      *(_QWORD*)(v6 + 24), 1);
  result = *(_QWORD*)(v6 + 2240);
  *(_QWORD*)(v6 + 2240) = 0;
  if (result == v6 + 2208) {
    v8 = 32;
    goto LABEL_8;
  }
  if (result != 0) {
    v8 = 40;
  LABEL_8:
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + v8))((__int64)result);
  }
  v9 = *(unsigned int*)(a1 + 16);
  if ((_DWORD)v9 == 0x4000) {
    return result;
  }
  v10 = (_QWORD*)(util_g_handle_slots_ptr[0][*(unsigned int*)(a1 + 20)] +
                  16 * v9);
  v11 = v10[1];
  if (v11 == 0) {
    return result;
  }
  if (*v10 != *(_QWORD*)(a1 + 8)) {
    return result;
  }
  v12 = *(_QWORD**)(GameData_21f3c98 + 152);
  if (v12 == (_QWORD*)(GameData_21f3c98 + 160)) {
    return result;
  }
  v13 = *(_QWORD*)(v11 + 176);
  while (1) {
    v14 = (_QWORD*)v12[7];
    v15 = (_QWORD*)v12[8];
    if (v14 != v15) {
      while (*(_QWORD*)(*v14 + 176LL) != v13) {
        v14 += 2;
        if (v14 == v15) {
          goto LABEL_20;
        }
      }
    }
    if (v14 != v15) {
      break;
    }
  LABEL_20:
    v14 = (_QWORD*)v12[10];
    v16 = (_QWORD*)v12[11];
    if (v14 != v16) {
      while (*(_QWORD*)(*v14 + 176LL) != v13) {
        v14 += 2;
        if (v14 == v16) {
          goto LABEL_25;
        }
      }
    }
    if (v14 != v16) {
      break;
    }
  LABEL_25:
    v17 = (_QWORD*)v12[1];
    if (v17 != nullptr) {
      do {
        v18 = v17;
        v17 = (_QWORD*)*v17;
      } while (v17 != nullptr);
    }
    else {
      do {
        v18 = (_QWORD*)v12[2];
        v19 = v12 == (_QWORD*)*v18;
        v12 = v18;
      } while (!v19);
    }
    v12 = v18;
    if (v18 == (_QWORD*)(GameData_21f3c98 + 160)) {
      return result;
    }
  }
  v21 = *v14;
  v20 = v14[1];
  if (v20 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v20 + 8), 1u,
                              memory_order_relaxed);
    if (v21 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v20 + 8), 1u,
                                memory_order_relaxed);
      v22 = *(unsigned __int8*)(v21 + 1216);
      if ((v22 & 1) != 0) {
        v23 = *(_QWORD*)(v21 + 1224);
      }
      else {
        v23 = v22 >> 1;
      }
      v24 = *(unsigned __int8*)(GameData_21f3d10 + 88);
      v25 = *(_QWORD*)(GameData_21f3d10 + 96);
      if ((v24 & 1) == 0) {
        v25 = v24 >> 1;
      }
      if (v23 == v25) {
        if ((v22 & 1) != 0) {
          v26 = *(_QWORD*)(v21 + 1232);
        }
        else {
          v26 = v21 + 1217;
        }
        if ((v24 & 1) != 0) {
          v27 = *(_QWORD*)(GameData_21f3d10 + 104);
        }
        else {
          v27 = GameData_21f3d10 + 89;
        }
        result = memcmp(v26, v27, v23);
        if (atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          if ((_DWORD)result == 0) {
          LABEL_66:
            v35 = *(unsigned __int8*)(v21 + 1656);
            if ((*(_BYTE*)a2 & 1) != 0) {
              v36 = *(_QWORD*)(a2 + 16);
            }
            else {
              v36 = a2 + 1;
            }
            result = strlen(v36);
            if (v35 == 1) {
              result = GameRoutine_60a020(v21 + 1632, v36);
              if (v20 == 0) {
                return result;
              }
              goto LABEL_82;
            }
            v37 = result;
            if (result >= 0xFFFFFFFFFFFFFFF7LL) {
              String_60a1d0();
            }
            if (result >= 0x17) {
              if ((result | 7) == 0x17) {
                v39 = 26;
              }
              else {
                v39 = (result | 7) + 1;
              }
              v38 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                                   v39, 16, 0);
              *(_QWORD*)(v21 + 1648) = v38;
              *(_QWORD*)(v21 + 1640) = v37;
              *(_QWORD*)(v21 + 1632) = v39 | 1;
            }
            else {
              v38 = v21 + 1633;
              *(_BYTE*)(v21 + 1632) = 2 * result;
              if (result == 0) {
              LABEL_81:
                *(_BYTE*)(v38 + v37) = 0;
                *(_BYTE*)(v21 + 1656) = 1;
                if (v20 == 0) {
                  return result;
                }
                goto LABEL_82;
              }
            }
            result = memmove(v38, v36, v37);
            goto LABEL_81;
          }
        }
        else {
          v34 = result;
          (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
          result = std___1___shared_weak_count___release_weak(v20);
          if (v34 == 0) {
            goto LABEL_66;
          }
        }
      }
      else if (atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                                0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
        result = std___1___shared_weak_count___release_weak(v20);
      }
    }
  LABEL_82:
    if (atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
      return std___1___shared_weak_count___release_weak(v20);
    }
    return result;
  }
  if (v21 != 0) {
    v28 = *(unsigned __int8*)(v21 + 1216);
    if ((v28 & 1) != 0) {
      v29 = *(_QWORD*)(v21 + 1224);
    }
    else {
      v29 = v28 >> 1;
    }
    v30 = *(unsigned __int8*)(GameData_21f3d10 + 88);
    v31 = *(_QWORD*)(GameData_21f3d10 + 96);
    if ((v30 & 1) == 0) {
      v31 = v30 >> 1;
    }
    if (v29 == v31) {
      v32 = (v28 & 1) != 0 ? *(_QWORD*)(v21 + 1232) : v21 + 1217;
      v33 = (v30 & 1) != 0 ? *(_QWORD*)(GameData_21f3d10 + 104)
                           : GameData_21f3d10 + 89;
      result = memcmp(v32, v33, v29);
      if ((_DWORD)result == 0) {
        v20 = 0;
        goto LABEL_66;
      }
    }
  }
  return result;
}

_QWORD* HubEventNatives_d675c0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD* result;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  _QWORD* v12;
  _QWORD* v13;
  _QWORD* v14;
  _QWORD* v15;
  _QWORD* v16;
  bool v17;
  __int64 v18;
  __int64 v19;
  atomic_ullong* v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  int v33;

  v2 = *as_g_script_manager_ptr;
  v3 = *(
      _QWORD*)(v2 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v3 != 0) {
    v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 472LL))(v3);
  }
  else {
    v4 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v4 + 24) + 448LL))(
      *(_QWORD*)(v4 + 24), 1);
  result = *(_QWORD**)(v4 + 2240);
  *(_QWORD*)(v4 + 2240) = 0;
  if (result == (_QWORD*)(v4 + 2208)) {
    v6 = 32;
    goto LABEL_8;
  }
  if (result != nullptr) {
    v6 = 40;
  LABEL_8:
    result = (_QWORD*)(*(__int64 (**)(__int64))(*result + v6))((__int64)result);
  }
  v7 = *(unsigned int*)(a1 + 16);
  if ((_DWORD)v7 == 0x4000) {
    return result;
  }
  v8 = (_QWORD*)(util_g_handle_slots_ptr[0][*(unsigned int*)(a1 + 20)] +
                 16 * v7);
  v9 = v8[1];
  if (v9 == 0) {
    return result;
  }
  if (*v8 != *(_QWORD*)(a1 + 8)) {
    return result;
  }
  v10 = *(_QWORD**)(GameData_21f3c98 + 152);
  if (v10 == (_QWORD*)(GameData_21f3c98 + 160)) {
    return result;
  }
  v11 = *(_QWORD*)(v9 + 176);
  while (1) {
    v12 = (_QWORD*)v10[7];
    v13 = (_QWORD*)v10[8];
    if (v12 != v13) {
      while (*(_QWORD*)(*v12 + 176LL) != v11) {
        v12 += 2;
        if (v12 == v13) {
          goto LABEL_20;
        }
      }
    }
    if (v12 != v13) {
      break;
    }
  LABEL_20:
    v12 = (_QWORD*)v10[10];
    v14 = (_QWORD*)v10[11];
    if (v12 != v14) {
      while (*(_QWORD*)(*v12 + 176LL) != v11) {
        v12 += 2;
        if (v12 == v14) {
          goto LABEL_25;
        }
      }
    }
    if (v12 != v14) {
      break;
    }
  LABEL_25:
    v15 = (_QWORD*)v10[1];
    if (v15 != nullptr) {
      do {
        v16 = v15;
        v15 = (_QWORD*)*v15;
      } while (v15 != nullptr);
    }
    else {
      do {
        v16 = (_QWORD*)v10[2];
        v17 = v10 == (_QWORD*)*v16;
        v10 = v16;
      } while (!v17);
    }
    v10 = v16;
    if (v16 == (_QWORD*)(GameData_21f3c98 + 160)) {
      return result;
    }
  }
  v19 = *v12;
  v18 = v12[1];
  if (v18 != 0) {
    v20 = (atomic_ullong*)(v18 + 8);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v18 + 8), 1u,
                              memory_order_relaxed);
    if (v19 == 0) {
      goto LABEL_67;
    }
    atomic_fetch_add_explicit(v20, 1u, memory_order_relaxed);
    v21 = *(unsigned __int8*)(v19 + 1216);
    if ((v21 & 1) != 0) {
      v22 = *(_QWORD*)(v19 + 1224);
    }
    else {
      v22 = v21 >> 1;
    }
    v23 = *(unsigned __int8*)(GameData_21f3d10 + 88);
    v24 = *(_QWORD*)(GameData_21f3d10 + 96);
    if ((v23 & 1) == 0) {
      v24 = v23 >> 1;
    }
    if (v22 != v24) {
      if (atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
        result = (_QWORD*)std___1___shared_weak_count___release_weak(v18);
      }
      goto LABEL_67;
    }
    if ((v21 & 1) != 0) {
      v25 = *(_QWORD*)(v19 + 1232);
    }
    else {
      v25 = v19 + 1217;
    }
    if ((v23 & 1) != 0) {
      v26 = *(_QWORD*)(GameData_21f3d10 + 104);
    }
    else {
      v26 = GameData_21f3d10 + 89;
    }
    result = (_QWORD*)memcmp(v25, v26, v22);
    if (atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                         0xFFFFFFFFFFFFFFFFLL) != 0) {
      if ((_DWORD)result != 0) {
        goto LABEL_67;
      }
    }
    else {
      v33 = (int)result;
      (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
      result = (_QWORD*)std___1___shared_weak_count___release_weak(v18);
      if (v33 != 0) {
        goto LABEL_67;
      }
    }
    *(_BYTE*)(v19 + 1664) = 1;
  LABEL_67:
    if (atomic_fetch_add(v20, 0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
      return (_QWORD*)std___1___shared_weak_count___release_weak(v18);
    }
    return result;
  }
  if (v19 != 0) {
    v27 = *(unsigned __int8*)(v19 + 1216);
    if ((v27 & 1) != 0) {
      v28 = *(_QWORD*)(v19 + 1224);
    }
    else {
      v28 = v27 >> 1;
    }
    v29 = *(unsigned __int8*)(GameData_21f3d10 + 88);
    v30 = *(_QWORD*)(GameData_21f3d10 + 96);
    if ((v29 & 1) == 0) {
      v30 = v29 >> 1;
    }
    if (v28 == v30) {
      v31 = (v27 & 1) != 0 ? *(_QWORD*)(v19 + 1232) : v19 + 1217;
      v32 = (v29 & 1) != 0 ? *(_QWORD*)(GameData_21f3d10 + 104)
                           : GameData_21f3d10 + 89;
      result = (_QWORD*)memcmp(v31, v32, v28);
      if ((_DWORD)result == 0) {
        *(_BYTE*)(v19 + 1664) = 1;
      }
    }
  }
  return result;
}

_QWORD* HubEventNatives_d67df0(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* result;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  char* v16;
  __int64 v17;
  __int64 v18;
  _QWORD v19[2];
  char* v20;

  v4 = *as_g_script_manager_ptr;
  v5 = *(
      _QWORD*)(v4 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v5 != 0) {
    v6 = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 472LL))(v5);
  }
  else {
    v6 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v6 + 24) + 448LL))(
      *(_QWORD*)(v6 + 24), 1);
  result = *(_QWORD**)(v6 + 2240);
  *(_QWORD*)(v6 + 2240) = 0;
  if (result == (_QWORD*)(v6 + 2208)) {
    v8 = 32;
    goto LABEL_8;
  }
  if (result != nullptr) {
    v8 = 40;
  LABEL_8:
    result = (_QWORD*)(*(__int64 (**)(__int64))(*result + v8))((__int64)result);
  }
  v9 = *(unsigned int*)(a1 + 16);
  if ((_DWORD)v9 == 0x4000) {
    return result;
  }
  v10 = (_QWORD*)(util_g_handle_slots_ptr[0][*(unsigned int*)(a1 + 20)] +
                  16 * v9);
  v11 = v10[1];
  if (v11 == 0 || *v10 != *(_QWORD*)(a1 + 8)) {
    return result;
  }
  v12 = *(_QWORD*)(v11 + 1688);
  if ((*(_BYTE*)a2 & 1) != 0) {
    v13 = *(_QWORD*)(a2 + 16);
  }
  else {
    v13 = a2 + 1;
  }
  v14 = strlen(v13);
  if (v14 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v15 = v14;
  if (v14 >= 0x17) {
    if ((v14 | 7) == 0x17) {
      v17 = 26;
    }
    else {
      v17 = (v14 | 7) + 1;
    }
    v16 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v17,
                                                16, 0);
    v19[1] = v15;
    v20 = v16;
    v19[0] = v17 | 1;
  }
  else {
    LOBYTE(v19[0]) = 2 * v14;
    v16 = (char*)v19 + 1;
    if (v14 == 0) {
      goto LABEL_24;
    }
  }
  memmove(v16, v13, v15);

LABEL_24:
  v16[v15] = 0;
  result = (_QWORD*)GameRoutine_fb6f80(v12, v19);
  if ((v19[0] & 1) != 0 && v20 != nullptr) {
    v18 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v18 = 56;
    }
    return (_QWORD*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v18, v20);
  }
  return result;
}

#pragma GCC visibility pop
