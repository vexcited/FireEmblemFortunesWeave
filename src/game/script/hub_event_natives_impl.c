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
_QWORD* GameRoutine_64df20_alt1(_QWORD*, __int64,
                                unsigned __int64) __asm__("GameRoutine_64df20");
__attribute__((swiftcall)) void EventDispos_d82a40(PSEUDO_X8, _QWORD, _QWORD,
                                                   _QWORD);
__attribute__((swiftcall)) void EventManager_cbc0c0(PSEUDO_X8, _QWORD, _QWORD,
                                                    _QWORD, _QWORD, _QWORD);
__attribute__((swiftcall)) void game_hub_d6abb0(PSEUDO_X8, __int64, float);
__attribute__((swiftcall)) void game_hub_d6ae60(PSEUDO_X8, float*, float*);
__int64* GameRoutine_d6d880(__int64*, __int64);
__int64* HandlePtr_d5bf40_alt1(__int64* result, __int64,
                               __int64*) __asm__("HandlePtr_d5bf40");
__int64* SpineModel_64dde0(__int64*, __int64, unsigned __int64);
__int64 GameRoutine_cacc00(__int64 result);
__int64 GameRoutine_cae2c0(__int64, __int64*);
__int64 GameRoutine_dbec20(__int64, __int64, __int64, char);
__int64 GameRoutine_e22300(__int64, __int64, __int64*);
__int64 GameRoutine_f71d40(__int64, __int64, __int64);
__int64 GameRoutine_f72090(__int64);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 fw_text_String_CopyTerminated_alt1(
    __int64*, __int64,
    unsigned __int64) __asm__("fw_text_String_CopyTerminated");
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
char* GameRoutine_60a060_alt1(char*, __int64,
                              unsigned __int64) __asm__("GameRoutine_60a060");
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN GameData_21a6130;
extern __int128 GameData_21a6120;
extern __int64* GameData_212ebb0[7];
extern __int64* GameData_212ee30[4];
extern __int64 GameData_212d310;
extern __int64 GameData_212dbb8[9];
extern __int64 GameData_212dbf8;
extern __int64 GameData_212dc68;
extern char GameData_1a9f09e;
extern char game_hub_g_no_map;
unsigned __int64 GameRoutine_25eca0(__int64*, __int64);
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_cdcc10();
void __attribute__((noreturn)) String_60a1d0_alt1() __asm__("String_60a1d0");
__attribute__((swiftcall)) void
hub_event_GetHandleLabelArea(PSEUDO_X8 x8_, unsigned __int8* a1);
__attribute__((swiftcall)) void hub_event_GetHandleGlobalHash(PSEUDO_X8 x8_,
                                                              __int64 a1);
__attribute__((swiftcall)) void
hub_event_GetCharaExitPosNearest(PSEUDO_X8 x8_, __int64 a1, float* a2);
__attribute__((swiftcall)) void hub_event_GetPivotPos(PSEUDO_X8 x8_,
                                                      __int64 a1);
_QWORD* hub_event_SetMid(__int64 a1, unsigned __int8* a2);
_QWORD* hub_event_AddEventAccess(__int64 a1, unsigned __int8* a2);
_QWORD* hub_event_RestoreExecuteDelete(__int64 a1);
__attribute__((swiftcall)) void
hub_event_GetEraceFlagByDisposLabel(PSEUDO_X8 x8_, __int64 a1);
__int64 hub_event_PushArrangementCharaAnim(__int64 a1, __int64 a2);
__int64* hub_event_SetGayaLabel(__int64 a1, __int64 a2);
__attribute__((swiftcall)) void
EventManager_cbc0c0_alt1(PSEUDO_X8, unsigned __int64 result, __int64, __int64,
                         __int64) __asm__("EventManager_cbc0c0");

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

__attribute__((swiftcall)) void

hub_event_GetHandleLabelArea(PSEUDO_X8 x8_, unsigned __int8* a1)
{
  __int64 a2 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  bool v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 result;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  struct {
    __int64 v24;
    __int64 v25;
  } v24_;

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
  v9 = *(_QWORD*)GameData_212dbb8[0];
  v10 = *a1;
  v11 = (v10 & 1) == 0;
  v12 = v10 >> 1;
  if (v11) {
    v13 = v12;
  }
  else {
    v13 = *((_QWORD*)a1 + 1);
  }
  if (v11) {
    v14 = (__int64)(a1 + 1);
  }
  else {
    v14 = *((_QWORD*)a1 + 2);
  }
  if ((*(_BYTE*)(v9 + 88) & 1) != 0) {
    v15 = *(_QWORD*)(v9 + 104);
  }
  else {
    v15 = v9 + 89;
  }
  result = X8CALL_X0(unsigned __int64,
                     EventManager_cbc0c0_alt1((void*)(&v24_.v24),
                                              *(_QWORD*)GameData_212dc68, v14,
                                              v13, v15));
  v17 = v24_.v24;
  if (v24_.v24 != 0) {
    *(_QWORD*)(a2 + 24) = 0;
    *(_QWORD*)(a2 + 8) = 0;
    *(_QWORD*)(a2 + 16) = 0x100004000LL;
    v18 = *(unsigned int*)(v17 + 12);
    if ((_DWORD)v18 != 0x4000) {
      v19 = *(unsigned int*)(v17 + 8);
      v20 = (__int64*)(util_g_handle_slots_ptr[0][v19] + 16 * v18);
      if (v20[1] == v17) {
        v21 = *v20;
        *(_DWORD*)(a2 + 16) = v18;
        *(_DWORD*)(a2 + 20) = v19;
        *(_QWORD*)(a2 + 24) = v17;
        *(_QWORD*)(a2 + 8) = v21;
      }
    }
    *(_QWORD*)a2 = game_hub_AreaEventHandle_vtable;
    v22 = v24_.v25;
    if (v24_.v25 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v24_.v25 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
      {
        std___1___shared_weak_count___release_weak(v22);
        return;
      }
    }
  }
  else {
    v23 = v24_.v25;
    if (v24_.v25 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v24_.v25 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
      result = std___1___shared_weak_count___release_weak(v23);
    }
    *(_QWORD*)(a2 + 16) = 0x100004000LL;
    *(_QWORD*)(a2 + 24) = 0;
    *(_QWORD*)a2 = game_hub_AreaEventHandle_vtable;
    *(_QWORD*)(a2 + 8) = 0;
  }
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void hub_event_GetHandleGlobalHash(PSEUDO_X8 x8_,
                                                              __int64 a1)
{
  __int64 a2 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* result;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  _QWORD* v11;
  _QWORD* v12;
  _QWORD* v13;
  _QWORD* v14;
  _QWORD* v15;
  bool v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64* v21;
  __int64 v22;

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
  v9 = *(_QWORD**)(*(_QWORD*)GameData_212dc68 + 152LL);
  v10 = *(_QWORD*)GameData_212dc68 + 160LL;
  if (v9 == (_QWORD*)v10) {
    goto LABEL_38;
  }
  while (1) {
    v11 = (_QWORD*)v9[7];
    v12 = (_QWORD*)v9[8];
    if (v11 != v12) {
      while (*(_QWORD*)(*v11 + 176LL) != a1) {
        v11 += 2;
        if (v11 == v12) {
          goto LABEL_17;
        }
      }
    }
    if (v11 != v12) {
      break;
    }
  LABEL_17:
    v11 = (_QWORD*)v9[10];
    v13 = (_QWORD*)v9[11];
    if (v11 != v13) {
      while (*(_QWORD*)(*v11 + 176LL) != a1) {
        v11 += 2;
        if (v11 == v13) {
          goto LABEL_22;
        }
      }
    }
    if (v11 != v13) {
      break;
    }
  LABEL_22:
    v14 = (_QWORD*)v9[1];
    if (v14 != nullptr) {
      do {
        v15 = v14;
        v14 = (_QWORD*)*v14;
      } while (v14 != nullptr);
    }
    else {
      do {
        v15 = (_QWORD*)v9[2];
        v16 = v9 == (_QWORD*)*v15;
        v9 = v15;
      } while (!v16);
    }
    v9 = v15;
    if (v15 == (_QWORD*)v10) {
      goto LABEL_38;
    }
  }
  v18 = *v11;
  v17 = v11[1];
  if (v17 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v17 + 8), 1u,
                              memory_order_relaxed);
  }
  if (v18 != 0) {
    *(_QWORD*)(a2 + 24) = 0;
    *(_QWORD*)(a2 + 8) = 0;
    *(_QWORD*)(a2 + 16) = 0x100004000LL;
    v19 = *(unsigned int*)(v18 + 12);
    if ((_DWORD)v19 != 0x4000) {
      v20 = *(unsigned int*)(v18 + 8);
      v21 = (__int64*)(util_g_handle_slots_ptr[0][v20] + 16 * v19);
      if (v21[1] == v18) {
        v22 = *v21;
        *(_DWORD*)(a2 + 16) = v19;
        *(_DWORD*)(a2 + 20) = v20;
        *(_QWORD*)(a2 + 24) = v18;
        *(_QWORD*)(a2 + 8) = v22;
      }
    }
    *(_QWORD*)a2 = game_hub_AreaEventHandle_vtable;
  }
  if (v17 == 0 || atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v18 != 0) {
      result;
      return;
    }
    goto LABEL_38;
  }
  (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
  result = (_QWORD*)std___1___shared_weak_count___release_weak(v17);
  if (v18 == 0) {
  LABEL_38:
    *(_QWORD*)a2 = game_hub_AreaEventHandle_vtable;
    *(_QWORD*)(a2 + 8) = 0;
    *(_QWORD*)(a2 + 16) = 0x100004000LL;
    *(_QWORD*)(a2 + 24) = 0;
  }
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void

hub_event_GetCharaExitPosNearest(PSEUDO_X8 x8_, __int64 a1, float* a2)
{

#pragma clang fp contract(off)
  float32x4_t* a3 = (float32x4_t*)PSEUDO_X8_VALUE(x8_);
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 result;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  _QWORD* v13;
  float v14;
  float32x4_t* v15;
  float32x4_t* v16;
  unsigned __int64 v17;
  float32x4_t* v18;
  char* v19;
  __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  float32x4_t* v25;
  _QWORD* v26;
  unsigned __int64 v27;
  __int64 v28;
  char* v29;
  __int64 v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;
  float32x4_t* v35;
  _QWORD* v36;
  unsigned __int64 v37;
  __int64 v38;
  __int128 v39;
  float32x4_t v40;
  __int64 v41;
  float32x4_t* v42;
  __int64* v43;
  float v44;
  __int64 v45;
  _QWORD* v46;
  _QWORD* v47;
  unsigned __int32 v48;
  __int128 v49;
  __int64 v50;
  unsigned __int64 v51;
  __int64 v52;
  float v53;
  signed __int64 v54;
  __int64 v55;
  __int64 v56;
  float32x4_t v57;
  __int64 v58;
  __int64 v59;
  unsigned __int64 v60;
  __int64 v61;
  float32x4_t v62;
  float32x4_t v63;
  float32x4_t v64;
  int8x16_t v65;
  float v66;
  float32x4_t v67;
  int8x16_t v68;
  float32x4_t v69;
  float32x4_t v70;
  float32x4_t v71;
  int8x16_t v72;
  float v73;
  int8x16_t v74;
  float v75;
  float32x4_t v76;
  float32x4_t v77;
  float32x4_t v78;
  float32x4_t v79;
  int8x16_t v80;
  int8x16_t v81;
  float v82;
  float32x4_t v83;
  float32x4_t v84;
  int8x16_t v85;
  float v86;
  float32x4_t v87;
  int8x16_t v88;
  float32x4_t* v89;
  float32x4_t v90;
  float32x4_t v91;
  int8x16_t v92;
  float32x4_t* v93;
  float32x4_t v94;
  __int64 v95;
  __int64 v96;
  struct {
    float32x4_t v97;
    __int64 v98;
  } v97_;
  struct {
    float32x4_t v99;
    __int128 v100;
    char v101;
    char gap65_[11];
    char v102;
    char gap77_[3];
    __int64 v103;
    __int64 v104;
    char v105;
    char gap97_[7];
    int v106;
    __int16 v107;
    char gap110_[10];
    float32x4_t* v108;
  } v99_;

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
  result = *(_QWORD*)(v8 + 2240);
  *(_QWORD*)(v8 + 2240) = 0;
  if (result == v8 + 2208) {
    v10 = 32;
    goto LABEL_8;
  }
  if (result != 0) {
    v10 = 40;
  LABEL_8:
    result =
        (*(__int64 (**)(__int64))(*(_QWORD*)result + v10))((__int64)result);
  }
  v11 = *(unsigned int*)(a1 + 16);
  if ((_DWORD)v11 != 0x4000 &&
      (v12 = util_g_handle_slots_ptr[0],
       (v13 = (_QWORD*)(util_g_handle_slots_ptr[0][*(unsigned int*)(a1 + 20)] +
                        16 * v11))[1] != 0) &&
      *v13 == *(_QWORD*)(a1 + 8)) {
    v14 = 0x1.0000000000000p+1f;
    v99_.v108 = a3;
    v15 = nullptr;
    v16 = nullptr;
    v17 = 0;
    do {
      game_hub_d6ae60(
          (void*)(&v99_.v99),
          (float*)(*(_QWORD*)(v12[*(unsigned int*)(a1 + 20)] +
                              16LL * *(unsigned int*)(a1 + 16) + 8) +
                   16LL),
          a2);
      if ((unsigned __int64)v16 >= v17) {
        v19 = (char*)((char*)v16 - (char*)v15);
        v20 = v16 - v15;
        v21 = v20 + 1;
        if ((unsigned __int64)(v20 + 1) >> 60 != 0) {
          goto LABEL_88;
        }
        if ((__int64)(v17 - (_QWORD)v15) >> 3 > v21) {
          v21 = (__int64)(v17 - (_QWORD)v15) >> 3;
        }
        if (v17 - (unsigned __int64)v15 >= 0x7FFFFFFFFFFFFFF0LL) {
          v22 = 0xFFFFFFFFFFFFFFFLL;
        }
        else {
          v22 = v21;
        }
        if (v22 >> 60 != 0) {
          goto LABEL_89;
        }
        v23 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v22, 16, 0);
        v24 = (__int64)&v19[v23 + -16 * v20];
        *(float32x4_t*)&v19[v23] = v99_.v99;
        if (v15 != v16) {
          v25 = v15;
          v26 = (_QWORD*)v24;
          do {
            v26[1] = LANES128(*(v25)).n128_u64[1];
            v27 = LANES128(*(v25)).n128_u64[0];
            ++v25;
            *v26 = v27;
            v26 += 2;
          } while (v25 != v16);
        }
        v17 = v23 + 16 * v22;
        v18 = (float32x4_t*)&v19[v23 + 16];
        if (v15 != nullptr) {
          v28 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v28 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v28);
        }
        v15 = (float32x4_t*)v24;
      }
      else {
        *v16 = v99_.v99;
        v18 = v16 + 1;
      }
      game_hub_d6abb0((void*)(&v97_.v97),
                      *(_QWORD*)(v12[*(unsigned int*)(a1 + 20)] +
                                 16LL * *(unsigned int*)(a1 + 16) + 8) +
                          16LL,
                      v14);
      if ((unsigned __int64)v18 < v17) {
        *v18 = v97_.v97;
        v16 = v18 + 1;
      }
      else {
        v29 = (char*)((char*)v18 - (char*)v15);
        v30 = v18 - v15;
        v31 = v30 + 1;
        if ((unsigned __int64)(v30 + 1) >> 60 != 0) {
        LABEL_88:
          GameRoutine_cdcc10();
        }
        if ((__int64)(v17 - (_QWORD)v15) >> 3 > v31) {
          v31 = (__int64)(v17 - (_QWORD)v15) >> 3;
        }
        if (v17 - (unsigned __int64)v15 >= 0x7FFFFFFFFFFFFFF0LL) {
          v32 = 0xFFFFFFFFFFFFFFFLL;
        }
        else {
          v32 = v31;
        }
        if (v32 >> 60 != 0) {
        LABEL_89:
          GameRoutine_60a210();
        }
        v33 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v32, 16, 0);
        v34 = (__int64)&v29[v33 + -16 * v30];
        *(float32x4_t*)&v29[v33] = v97_.v97;
        if (v15 != v18) {
          v35 = v15;
          v36 = (_QWORD*)v34;
          do {
            v36[1] = LANES128(*(v35)).n128_u64[1];
            v37 = LANES128(*(v35)).n128_u64[0];
            ++v35;
            *v36 = v37;
            v36 += 2;
          } while (v35 != v18);
        }
        v17 = v33 + 16 * v32;
        v16 = (float32x4_t*)&v29[v33 + 16];
        if (v15 != nullptr) {
          v38 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v38 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v38);
        }
        v15 = (float32x4_t*)v34;
      }
      v14 = v14 + 0x1.0000000000000p-1f;
    } while (v14 < 0x1.0000000000000p+2f);
    v39 = *(_OWORD*)a2;
    v99_.v101 = 0;
    v99_.v100 = (__typeof__(v99_.v100)){0};
    v99_.v106 = 1053776936;
    v99_.v107 = 257;
    LANES128(v40).n128_u64[0] = v39;
    LANES128(v40).n128_u64[1] = DWORD2(v39);
    v99_.v99 = v40;
    if (*(_QWORD*)GameData_212d310 != 0 &&
        *(_DWORD*)(*(_QWORD*)GameData_212d310 + 8LL) == 1) {
      v41 = 2048;
    }
    else {
      v41 = 0x11000000000000LL;
    }
    v99_.v102 = 0;
    v99_.v103 = v41;
    v99_.v104 = 0x13E99999ALL;
    v99_.v105 = 1;
    result = (__int64)X8CALL_X0(
        float32x4_t*,
        game_hub_d6abb0((void*)(v99_.v108),
                        *(_QWORD*)(v12[*(unsigned int*)(a1 + 20)] +
                                   16LL * *(unsigned int*)(a1 + 16) + 8) +
                            16LL,
                        0x1.0000000000000p+2f));
    if (v15 != v16) {
      v42 = v15;
      v43 = GameData_212ee30[0];
      v44 = 0x1.fffffe0000000p+127f;
      while (1) {
        v45 = *v43;
        v47 = *(_QWORD**)(*v43 + 56);
        v46 = *(_QWORD**)(*v43 + 64);
        LODWORD(v99_.v100) = LANES128(*(v42)).n128_u32[0];
        v48 = LANES128(*(v42)).n128_u32[1];
        v97_.v97 = (__typeof__(v97_.v97)){0};
        DWORD1(v99_.v100) = v48;
        *(_QWORD*)&v49 = v99_.v100;
        DWORD2(v49) = LANES128(*(v42)).n128_u32[2];
        v97_.v98 = 0;
        *((_QWORD*)&v49 + 1) = DWORD2(v49);
        v99_.v100 = v49;
        if (v47 != v46) {
          break;
        }
      LABEL_57:
        if (++v42 == v16) {
          goto LABEL_84;
        }
      }
      while (1) {
        v50 = *v47;
        result = (*(__int64 (**)(_QWORD))(*(_QWORD*)*v47 + 32LL))(*v47);
        if ((result & 1) != 0 &&
            ((v99_.v107 & 0x100) != 0 || *(_QWORD*)(v45 + 8) != v50)) {
          result = (*(__int64 (**)(__int64, float32x4_t*, float32x4_t*))(
              *(_QWORD*)v50 + 24LL))(v50, &v99_.v99, &v97_.v97);
          if ((result & 1) != 0) {
            break;
          }
        }
        if (++v47 == v46) {
          v51 = LANES128(v97_.v97).n128_u64[0];
          goto LABEL_67;
        }
      }
      v51 = LANES128(v97_.v97).n128_u64[0];
      v53 = 0x0.0p+0f;
      v54 = LANES128(v97_.v97).n128_u64[1] - LANES128(v97_.v97).n128_u64[0];
      if (LANES128(v97_.v97).n128_u64[1] != LANES128(v97_.v97).n128_u64[0]) {
        v55 = v54 >> 4;
        v56 = (v54 >> 4) - 1;
        if (v56 != 0) {
          v57 = *(float32x4_t*)LANES128(v97_.v97).n128_u64[0];
          if ((unsigned __int64)(v55 - 2) >= 7) {
            v60 = LANES128(v97_.v97).n128_u64[0] + 64;
            v61 = 0;
            do {
              v62 = *(float32x4_t*)(v60 - 48);
              v63 = *(float32x4_t*)(v60 - 32);
              v61 -= 8;
              v64 = vsubq_f32(v57, v62);
              v65 = vmulq_f32(v64, v64);
              LANES128(v65).n128_u64[0] =
                  LANES64_OF(
                      vadd_f32(
                          COERCE_AS(
                              float32x2_t,
                              LANES128_OF(vextq_s8(v65, v65, 8u)).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v65).n128_u64[0])))
                      .n64_u64[0];
              v66 = v53 +
                    LANES64_OF(
                        vsqrt_f32(vpadd_f32(
                            COERCE_AS(float32x2_t, LANES128(v65).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v65).n128_u64[0]))))
                        .n64_f32[0];
              v67 = vsubq_f32(v62, v63);
              v68 = vmulq_f32(v67, v67);
              LANES128(v68).n128_u64[0] =
                  LANES64_OF(
                      vadd_f32(
                          COERCE_AS(
                              float32x2_t,
                              LANES128_OF(vextq_s8(v68, v68, 8u)).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v68).n128_u64[0])))
                      .n64_u64[0];
              v69 = *(float32x4_t*)(v60 - 16);
              v70 = vsubq_f32(v63, v69);
              v71 = vsubq_f32(v69, *(float32x4_t*)v60);
              v72 = vmulq_f32(v71, v71);
              v73 = v66 +
                    LANES64_OF(
                        vsqrt_f32(vpadd_f32(
                            COERCE_AS(float32x2_t, LANES128(v68).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v68).n128_u64[0]))))
                        .n64_f32[0];
              v74 = vmulq_f32(v70, v70);
              LANES128(v74).n128_u64[0] =
                  LANES64_OF(
                      vadd_f32(
                          COERCE_AS(
                              float32x2_t,
                              LANES128_OF(vextq_s8(v74, v74, 8u)).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v74).n128_u64[0])))
                      .n64_u64[0];
              LANES128(v72).n128_u64[0] =
                  LANES64_OF(
                      vadd_f32(
                          COERCE_AS(
                              float32x2_t,
                              LANES128_OF(vextq_s8(v72, v72, 8u)).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v72).n128_u64[0])))
                      .n64_u64[0];
              v75 =
                  (float)(v73 +
                          LANES64_OF(vsqrt_f32(vpadd_f32(
                                         COERCE_AS(float32x2_t,
                                                   LANES128(v74).n128_u64[0]),
                                         COERCE_AS(float32x2_t,
                                                   LANES128(v74).n128_u64[0]))))
                              .n64_f32[0]) +
                  LANES64_OF(
                      vsqrt_f32(vpadd_f32(
                          COERCE_AS(float32x2_t, LANES128(v72).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v72).n128_u64[0]))))
                      .n64_f32[0];
              v76 = *(float32x4_t*)(v60 + 16);
              v77 = *(float32x4_t*)(v60 + 32);
              v78 = vsubq_f32(*(float32x4_t*)v60, v76);
              v79 = vsubq_f32(v76, v77);
              v80 = vmulq_f32(v78, v78);
              v81 = vmulq_f32(v79, v79);
              LANES128(v80).n128_u64[0] =
                  LANES64_OF(
                      vadd_f32(
                          COERCE_AS(
                              float32x2_t,
                              LANES128_OF(vextq_s8(v80, v80, 8u)).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v80).n128_u64[0])))
                      .n64_u64[0];
              v82 = v75 +
                    LANES64_OF(
                        vsqrt_f32(vpadd_f32(
                            COERCE_AS(float32x2_t, LANES128(v80).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v80).n128_u64[0]))))
                        .n64_f32[0];
              LANES128(v80).n128_u64[0] =
                  LANES64_OF(
                      vadd_f32(
                          COERCE_AS(
                              float32x2_t,
                              LANES128_OF(vextq_s8(v81, v81, 8u)).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v81).n128_u64[0])))
                      .n64_u64[0];
              v83 = *(float32x4_t*)(v60 + 48);
              v57 = *(float32x4_t*)(v60 + 64);
              v60 += 128LL;
              v84 = vsubq_f32(v77, v83);
              v85 = vmulq_f32(v84, v84);
              LANES128(v85).n128_u64[0] =
                  LANES64_OF(
                      vadd_f32(
                          COERCE_AS(
                              float32x2_t,
                              LANES128_OF(vextq_s8(v85, v85, 8u)).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v85).n128_u64[0])))
                      .n64_u64[0];
              v86 =
                  (float)(v82 +
                          LANES64_OF(vsqrt_f32(vpadd_f32(
                                         COERCE_AS(float32x2_t,
                                                   LANES128(v80).n128_u64[0]),
                                         COERCE_AS(float32x2_t,
                                                   LANES128(v80).n128_u64[0]))))
                              .n64_f32[0]) +
                  LANES64_OF(
                      vsqrt_f32(vpadd_f32(
                          COERCE_AS(float32x2_t, LANES128(v85).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v85).n128_u64[0]))))
                      .n64_f32[0];
              v87 = vsubq_f32(v83, v57);
              v88 = vmulq_f32(v87, v87);
              LANES128(v88).n128_u64[0] =
                  LANES64_OF(
                      vadd_f32(
                          COERCE_AS(
                              float32x2_t,
                              LANES128_OF(vextq_s8(v88, v88, 8u)).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v88).n128_u64[0])))
                      .n64_u64[0];
              v53 = v86 +
                    LANES64_OF(
                        vsqrt_f32(vpadd_f32(
                            COERCE_AS(float32x2_t, LANES128(v88).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v88).n128_u64[0]))))
                        .n64_f32[0];
            } while (-(__int64)(v56 & 0xFFFFFFFFFFFFFFF8LL) != v61);
            v58 = -v61;
            v59 = v56 & 7;
            if (v59 == 0) {
              goto LABEL_82;
            }
          }
          else {
            v58 = 0;
            v59 = v56 & 7;
            if (v59 == 0) {
              goto LABEL_82;
            }
          }
          v89 = (float32x4_t*)(LANES128(v97_.v97).n128_u64[0] + 16 * v58 + 16);
          do {
            v90 = *v89++;
            --v59;
            v91 = vsubq_f32(v57, v90);
            v92 = vmulq_f32(v91, v91);
            LANES128(v92).n128_u64[0] =
                LANES64_OF(
                    vadd_f32(
                        COERCE_AS(
                            float32x2_t,
                            LANES128_OF(vextq_s8(v92, v92, 8u)).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v92).n128_u64[0])))
                    .n64_u64[0];
            v53 = v53 +
                  LANES64_OF(
                      vsqrt_f32(vpadd_f32(
                          COERCE_AS(float32x2_t, LANES128(v92).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v92).n128_u64[0]))))
                      .n64_f32[0];
            v57 = v90;
          } while (v59 != 0);
        }
      }
    LABEL_82:
      if (v53 < v44) {
        v93 = v99_.v108;
        v44 = v53;
        LANES128(*(v99_.v108)).n128_u64[0] = LANES128(*(v42)).n128_u64[0];
        v94 = *v93;
        LANES128(v94).n128_u64[1] = LANES128(*(v42)).n128_u32[2];
        *v93 = v94;
      }
    LABEL_67:
      if (v51 != 0) {
        LANES128(v97_.v97).n128_u64[1] = v51;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) != 0) {
          v52 = 128;
        }
        else {
          v52 = 56;
        }
        result = nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v52);
      }
      goto LABEL_57;
    }
  LABEL_84:
    if (v15 != nullptr) {
      v95 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v95 = 56;
      }
      {
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v95);
        return;
      }
    }
  }
  else {
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                              memory_order_acquire) &
         1) == 0) {
      result = __cxa_guard_acquire(&GameData_21a6130);
      if ((_DWORD)result != 0) {
        v96 = *((_QWORD*)GameData_212c540 + 1);
        *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
        *((_QWORD*)&GameData_21a6120 + 1) = v96;
        result = __cxa_guard_release(&GameData_21a6130);
      }
    }
    *a3 = COERCE_AS(float32x4_t, GameData_21a6120);
  }
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void hub_event_GetPivotPos(PSEUDO_X8 x8_, __int64 a1)
{

#pragma clang fp contract(off)
  float32x4_t* a2 = (float32x4_t*)PSEUDO_X8_VALUE(x8_);
  __int64 v4;
  __int64 v5;
  __int64 v6;
  float32x4_t result;
  unsigned __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  float32x4_t v16;
  __int64 v17;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v4 = *as_g_script_manager_ptr;
  v5 = *(
      _QWORD*)(v4 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v5 != 0) {
    v6 = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 472LL))(v5),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  else {
    v6 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v6 + 24) + 448LL))(
      *(_QWORD*)(v6 + 24), 1),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v9 = *(_QWORD**)(v6 + 2240);
  *(_QWORD*)(v6 + 2240) = 0;
  if (v9 == (_QWORD*)(v6 + 2208)) {
    v10 = 32;
    goto LABEL_8;
  }
  if (v9 != nullptr) {
    v10 = 40;
  LABEL_8:
    (*(void (**)(__int64))(*v9 + v10))((__int64)v9),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v11 = *(unsigned int*)(a1 + 16);
  if ((_DWORD)v11 != 0x4000 &&
      (v12 = (_QWORD*)(util_g_handle_slots_ptr[0][*(unsigned int*)(a1 + 20)] +
                       16 * v11),
       (v13 = v12[1]) != 0) &&
      *v12 == *(_QWORD*)(a1 + 8)) {
    if (*(_BYTE*)(v13 + 80) == 1) {
      v15 = *(_QWORD*)(v13 + 64);
      v14 = *(_QWORD*)(v13 + 72);
      LANES128(*(a2)).n128_u64[0] = v15;
      LANES128(*(a2)).n128_u64[1] = v14;
    }
    else {
      LODWORD(v8) = *(_DWORD*)(v13 + 268);
      LANES128(v16).n128_u64[0] = *(_QWORD*)(v13 + 260);
      LANES128(v16).n128_u64[1] = v8;
      result = vaddq_f32(v16, *(float32x4_t*)(v13 + 16));
      *a2 = result;
    }
  }
  else {
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire(&GameData_21a6130) != 0) {
      v17 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v17;
      __cxa_guard_release(&GameData_21a6130),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    *a2 = COERCE_AS(float32x4_t, GameData_21a6120);
  }
  {
    result;
    return;
  }
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

_QWORD* hub_event_SetMid(__int64 a1, unsigned __int8* a2)
{

#pragma clang fp contract(off)
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* result;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  _QWORD* v11;
  __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  __int64 v18;
  __int64 v19;
  __int64* v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  float32x4_t v23;
  int v24;
  float32x4_t v25;
  __int64 v26;
  int v27;
  __int64 v28;
  int v29;
  __int64 v30;
  _BYTE v31[112];
  char v32[904];
  float32x4_t v33;
  float32x4_t v34;
  float32x4_t v35;

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
      GameRoutine_cae2c0((__int64)v31, (__int64*)(v12 + 120));
      v13 = *a2;
      if ((v13 & 1) != 0) {
        v14 = *((_QWORD*)a2 + 1);
      }
      else {
        v14 = v13 >> 1;
      }
      if ((v13 & 1) != 0) {
        v15 = *((_QWORD*)a2 + 2);
      }
      else {
        v15 = (__int64)(a2 + 1);
      }
      GameRoutine_60a060_alt1(v32, v15, v14);
      v16 = *(unsigned int*)(a1 + 16);
      if ((_DWORD)v16 == 0x4000 ||
          (v17 = (_QWORD*)(v10[*(unsigned int*)(a1 + 20)] + 16 * v16))[1] ==
              0) {
        v18 = 0;
      }
      else if (*v17 == *(_QWORD*)(a1 + 8)) {
        v18 = v17[1];
      }
      else {
        v18 = 0;
      }
      GameRoutine_d6d880((__int64*)(v18 + 120), (__int64)v31);
      *(_DWORD*)(v18 + 1208) = 0;
      v19 = *(_QWORD*)GameData_212dbb8[0];
      v20 = GameData_212ebb0[0];
      if ((GameRoutine_f72090(*GameData_212ebb0[0]) & 1) != 0) {
        if (*(_BYTE*)(v18 + 80) == 1) {
          v22 = *(_QWORD*)(v18 + 72);
          LODWORD(v21) = *(_DWORD*)(v18 + 268);
          LANES128(v33).n128_u64[0] = *(_QWORD*)(v18 + 64);
          LANES128(v33).n128_u64[1] = v22;
          LANES128(v23).n128_u64[0] = *(_QWORD*)(v18 + 260);
          LANES128(v23).n128_u64[1] = v21;
        }
        else {
          LODWORD(v21) = *(_DWORD*)(v18 + 268);
          LANES128(v23).n128_u64[0] = *(_QWORD*)(v18 + 260);
          LANES128(v23).n128_u64[1] = v21;
          v33 = vaddq_f32(v23, *(float32x4_t*)(v18 + 16));
        }
        LANES128(v25).n128_u32[0] = 0;
        LANES128(v25).n128_u32[3] = 0;
        v26 = *v20;
        *(unsigned __int64*)((char*)LANES128(v25).n128_u64 + 4) =
            *(unsigned int*)(v18 + 280);
        v34 = v23;
        v35 = vaddq_f32(v23, v25);
        v27 = 1 << GameRoutine_f71d40(v26, (__int64)&v33, v19 + 64);
        v28 = *v20;
        *(_DWORD*)(v18 + 1208) |= v27;
        v29 = 1 << GameRoutine_f71d40(v28, (__int64)&v34, v19 + 64);
        v30 = *v20;
        *(_DWORD*)(v18 + 1208) |= v29;
        v24 = *(_DWORD*)(v18 + 1208) |
              (1 << GameRoutine_f71d40(v30, (__int64)&v35, v19 + 64));
      }
      else {
        v24 = *(_DWORD*)(v18 + 1208) | 1;
      }
      *(_DWORD*)(v18 + 1208) = v24;
      return (_QWORD*)GameRoutine_cacc00((__int64)v31);
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

_QWORD* hub_event_AddEventAccess(__int64 a1, unsigned __int8* a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* result;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  _QWORD* v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  bool v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  _QWORD* v21;
  __int64* v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  unsigned int v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  char v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  struct {
    __int64 v35[3];
    __int64 v36;
    __int64 v37;
    __int64 v38;
  } v35_;
  struct {
    __int64 v39[6];
    unsigned int v40;
  } v39_;
  unsigned __int64 v41;

  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v4 = *as_g_script_manager_ptr;
  v5 = *(
      _QWORD*)(v4 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384),
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v5 != 0) {
    v6 = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 472LL))(v5),
    v19 = COERCE_AS(__typeof__(v19),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  else {
    v6 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v6 + 24) + 448LL))(
      *(_QWORD*)(v6 + 24), 1),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  result = *(_QWORD**)(v6 + 2240);
  *(_QWORD*)(v6 + 2240) = 0;
  if (result == (_QWORD*)(v6 + 2208)) {
    v8 = 32;
    goto LABEL_8;
  }
  if (result != nullptr) {
    v8 = 40;
  LABEL_8:
    result = (_QWORD*)(*(__int64 (**)(__int64))(*result + v8))((__int64)result),
    v19 = COERCE_AS(__typeof__(v19),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v9 = *(unsigned int*)(a1 + 16);
  if ((_DWORD)v9 != 0x4000) {
    v10 = util_g_handle_slots_ptr[0];
    v11 = (_QWORD*)(util_g_handle_slots_ptr[0][*(unsigned int*)(a1 + 20)] +
                    16 * v9);
    if (v11[1] != 0 && *v11 == *(_QWORD*)(a1 + 8)) {
      v12 = *a2;
      LOWORD(v35_.v35[0]) = 0;
      v35_.v36 = 0;
      v35_.v37 = 0;
      v13 = v12 >> 1;
      v14 = (v12 & 1) == 0;
      v15 = *((_QWORD*)a2 + 1);
      v16 = *((_QWORD*)a2 + 2);
      v35_.v38 = 0;
      if (v14) {
        v17 = v13;
      }
      else {
        v17 = v15;
      }
      if (v14) {
        v18 = (__int64)(a2 + 1);
      }
      else {
        v18 = v16;
      }
      GameRoutine_60a060_alt1((char*)v35_.v35, v18, v17),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v20 = *(unsigned int*)(a1 + 16);
      if ((_DWORD)v20 == 0x4000 ||
          (v21 = (_QWORD*)(v10[*(unsigned int*)(a1 + 20)] + 16 * v20))[1] ==
              0) {
        v22 = nullptr;
      }
      else if (*v21 == *(_QWORD*)(a1 + 8)) {
        v22 = (__int64*)v21[1];
      }
      else {
        v22 = nullptr;
      }
      HandlePtr_d5bf40_alt1(v39_.v39, v19, v35_.v35),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v23 = v22[173];
      v24 = v22[174];
      v39_.v40 = 0;
      if (v23 >= v24) {
        result = (_QWORD*)HubEventNatives_d5bb40(v22 + 172, (__int64)v39_.v39),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      else {
        *(_BYTE*)v23 = 0;
        *(_DWORD*)(v23 + 48) = -1;
        v25 = v39_.v40;
        if (v39_.v40 != -1) {
          v41 = v23;
          ((void (*)(unsigned __int64*, __int64*))
               HandlePtr_Unknown23_d5be90_ptr[v39_.v40])(&v41, v39_.v39),
              v19 = COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          *(_DWORD*)(v23 + 48) = v25;
        }
        result = (_QWORD*)(v23 + 64);
      }
      v26 = v39_.v40;
      v22[173] = (__int64)result;
      if ((_DWORD)v26 != -1) {
        result = (_QWORD*)((__int64 (*)(
            unsigned __int64*, __int64*))GameData_1fdce28[v26])(&v41, v39_.v39),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v27 = v35_.v36;
      if (v35_.v36 != 0) {
        v28 = v35_.v37;
        v29 = fw_memory_g_heap_manager_ptr;
        if (v35_.v36 == v35_.v37) {
          goto LABEL_42;
        }
        v30 = v35_.v37;
        do {
          v31 = *(_BYTE*)(v30 - 24);
          v30 -= 24;
          if ((v31 & 1) != 0 && *(_QWORD*)(v28 - 8) != 0) {
            if (*(_QWORD*)(*(_QWORD*)v29 + 200LL) != 0) {
              v32 = 128;
            }
            else {
              v32 = 56;
            }
            result = (_QWORD*)nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v29 +
                                                                 v32),
            v19 = COERCE_AS(__typeof__(v19),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          v28 = v30;
        } while (v30 != v27);
        v35_.v37 = v27;
        if (v35_.v36 != 0) {
        LABEL_42:
          v33 = 128;
          if (*(_QWORD*)(*(_QWORD*)v29 + 200LL) == 0) {
            v33 = 56;
          }
          result =
              (_QWORD*)nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v29 + v33),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
      }
      if ((v35_.v35[0] & 1) != 0 && v35_.v35[2] != 0) {
        v34 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v34 = 56;
        }
        return (_QWORD*)nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v34);
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

_QWORD* hub_event_RestoreExecuteDelete(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  char* v12;
  __int64 v13;
  _QWORD* result;
  __int64 v15;
  int v16;
  unsigned __int64 v17;
  char* v18;
  __int64 v19;
  struct {
    _QWORD v20[2];
    char* v21;
  } v20_;
  struct {
    _QWORD v22[2];
    char* v23;
  } v22_;

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
  v5 = *(_QWORD**)(v4 + 2240);
  *(_QWORD*)(v4 + 2240) = 0;
  if (v5 == (_QWORD*)(v4 + 2208)) {
    v6 = 32;
  }
  else {
    if (v5 == nullptr) {
      goto LABEL_9;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))(*v5 + v6))((__int64)v5);
LABEL_9:
  v7 = GameData_21f3d10;
  v8 = *(_QWORD*)(GameData_21f3c98 + 112);
  if ((*(_BYTE*)a1 & 1) != 0) {
    v9 = *(_QWORD*)(a1 + 16);
  }
  else {
    v9 = a1 + 1;
  }
  v10 = strlen(v9);
  if (v10 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0_alt1();
  }
  v11 = v10;
  if (v10 >= 0x17) {
    if ((v10 | 7) == 0x17) {
      v13 = 26;
    }
    else {
      v13 = (v10 | 7) + 1;
    }
    v12 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                     v13, 16, 0);
    v20_.v20[1] = v11;
    v20_.v21 = v12;
    v20_.v20[0] = v13 | 1;
  }
  else {
    LOBYTE(v20_.v20[0]) = 2 * v10;
    v12 = (char*)v20_.v20 + 1;
    if (v10 == 0) {
      goto LABEL_21;
    }
  }
  memmove(v12, v9, v11);
LABEL_21:
  v12[v11] = 0;
  result = X8CALL_X0(
      void*, EventDispos_d82a40((void*)(v22_.v22), v8, v7 + 64, v20_.v20));
  if ((v20_.v20[0] & 1) != 0 && v20_.v21 != nullptr) {
    v15 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v15 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v15);
  }
  v16 = v22_.v22[0] & 1;
  if (v16 != 0) {
    v17 = v22_.v22[1];
  }
  else {
    v17 = (unsigned __int64)LOBYTE(v22_.v22[0]) >> 1;
  }
  if (v17 != 0) {
    if (v16 != 0) {
      v18 = v22_.v23;
    }
    else {
      v18 = (char*)v22_.v22 + 1;
    }
    result = (_QWORD*)GameRoutine_dbec20(*(_QWORD*)GameData_212dbf8,
                                         (__int64)v18, v17, 0);
    v16 = v22_.v22[0] & 1;
  }
  if (v16 != 0 && v22_.v23 != nullptr) {
    v19 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v19 = 56;
    }
    return (_QWORD*)nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v19);
  }
  return result;
}

__attribute__((swiftcall)) void

hub_event_GetEraceFlagByDisposLabel(PSEUDO_X8 x8_, __int64 a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 result;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  char* v16;
  __int64 v17;
  __int64 v18;
  char* v19;
  __int64 v20;
  __int64 v21;
  struct {
    _QWORD v22[2];
    char* v23;
  } v22_;
  struct {
    _QWORD v24[2];
    char* v25;
  } v24_;
  struct {
    __int64 v26[2];
    __int64 v27;
  } v26_;

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
  if (game_hub_g_no_map == 1) {
    GameRoutine_25eca0(a2, (__int64)&GameData_1a9f09e);
    return;
  }
  if ((*(_BYTE*)(GameData_21f3d10 + 64) & 1) != 0) {
    fw_text_String_CopyTerminated_alt1(v26_.v26,
                                       *(_QWORD*)(GameData_21f3d10 + 80),
                                       *(_QWORD*)(GameData_21f3d10 + 72));
  }
  else {
    v10 = *(_QWORD*)(GameData_21f3d10 + 72);
    v11 = *(_QWORD*)(GameData_21f3d10 + 80);
    v26_.v26[0] = *(_QWORD*)(GameData_21f3d10 + 64);
    v26_.v26[1] = v10;
    v26_.v27 = v11;
  }
  v12 = *(_QWORD*)(GameData_21f3c98 + 112);
  if ((*(_BYTE*)a1 & 1) != 0) {
    v13 = *(_QWORD*)(a1 + 16);
  }
  else {
    v13 = a1 + 1;
  }
  v14 = strlen(v13);
  if (v14 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0_alt1();
  }
  v15 = v14;
  if (v14 >= 0x17) {
    if ((v14 | 7) == 0x17) {
      v17 = 26;
    }
    else {
      v17 = (v14 | 7) + 1;
    }
    v16 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                     v17, 16, 0);
    v22_.v22[1] = v15;
    v22_.v23 = v16;
    v22_.v22[0] = v17 | 1;
    goto LABEL_25;
  }
  LOBYTE(v22_.v22[0]) = 2 * v14;
  v16 = (char*)v22_.v22 + 1;
  if (v14 != 0) {
  LABEL_25:
    memmove(v16, v13, v15);
  }
  v16[v15] = 0;
  EventDispos_d82a40((void*)(v24_.v24), v12, v26_.v26, v22_.v22);
  if ((v22_.v22[0] & 1) != 0 && v22_.v23 != nullptr) {
    v18 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v18 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v18);
  }
  if ((v24_.v24[0] & 1) != 0) {
    v19 = v24_.v25;
  }
  else {
    v19 = (char*)v24_.v24 + 1;
  }
  result = GameRoutine_25eca0(a2, (__int64)v19);
  if ((v24_.v24[0] & 1) != 0 && v24_.v25 != nullptr) {
    v20 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v20 = 56;
    }
    result = nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v20);
  }
  if ((v26_.v26[0] & 1) != 0 && v26_.v27 != 0) {
    v21 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v21 = 56;
    }
    {
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v21);
      return;
    }
  }
  {
    result;
    return;
  }
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
    (*(void (**)(void*))(*v70 + v26))(v70);
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
  (*(void (**)(void*))(*(_QWORD*)v62 + v44))((void*)v62);

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
  (*(void (**)(void*))(*v60 + v45))(v60);

LABEL_79:
  result = (__int64)v58;
  if (v58 == &v57) {
    v46 = 32;
    goto LABEL_83;
  }
  if (v58 != nullptr) {
    v46 = 40;
  LABEL_83:
    result = (*(__int64 (**)(void*))(*v58 + v46))(v58);
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

__int64 hub_event_PushArrangementCharaAnim(__int64 a1, __int64 a2)
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
  __int64 v17;
  char* v18;
  __int64 v19;
  __int64 result;
  __int64 v21;
  __int64 v22;
  struct {
    __int64 v23[2];
    char* v24;
  } v23_;
  struct {
    _QWORD v25[2];
    char* v26;
  } v25_;

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
  LABEL_44:
    String_60a1d0_alt1();
  }
  v12 = v11;
  if (v11 >= 0x17) {
    if ((v11 | 7) == 0x17) {
      v14 = 26;
    }
    else {
      v14 = (v11 | 7) + 1;
    }
    v13 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                     v14, 16, 0);
    v25_.v25[1] = v12;
    v25_.v26 = v13;
    v25_.v25[0] = v14 | 1;
    goto LABEL_20;
  }
  LOBYTE(v25_.v25[0]) = 2 * v11;
  v13 = (char*)v25_.v25 + 1;
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
    goto LABEL_44;
  }
  v17 = v16;
  if (v16 >= 0x17) {
    if ((v16 | 7) == 0x17) {
      v19 = 26;
    }
    else {
      v19 = (v16 | 7) + 1;
    }
    v18 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                     v19, 16, 0);
    v23_.v23[1] = v17;
    v23_.v24 = v18;
    v23_.v23[0] = v19 | 1;
  }
  else {
    LOBYTE(v23_.v23[0]) = 2 * v16;
    v18 = (char*)v23_.v23 + 1;
    if (v16 == 0) {
      goto LABEL_33;
    }
  }
  memmove(v18, v15, v17);
LABEL_33:
  v18[v17] = 0;
  result = GameRoutine_e22300(v9, (__int64)v25_.v25, v23_.v23);
  if ((v23_.v23[0] & 1) != 0 && v23_.v24 != nullptr) {
    v21 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v21 = 56;
    }
    result = nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v21);
  }
  if ((v25_.v25[0] & 1) != 0 && v25_.v26 != nullptr) {
    v22 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v22 = 56;
    }
    return nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v22);
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

__int64* hub_event_SetGayaLabel(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64* result;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  char* v15;
  __int64 v16;
  char v17;
  unsigned __int64 v18;
  char* v19;
  unsigned __int64 v20;
  __int64 v21;
  struct {
    __int64 v22;
    unsigned __int64 v23;
    char* v24;
  } v22_;

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
  result = *(__int64**)(v6 + 2240);
  *(_QWORD*)(v6 + 2240) = 0;
  if (result == (__int64*)(v6 + 2208)) {
    v8 = 32;
    goto LABEL_8;
  }
  if (result != nullptr) {
    v8 = 40;
  LABEL_8:
    result =
        (__int64*)(*(__int64 (**)(__int64))(*result + v8))((__int64)result);
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
  if ((*(_BYTE*)a2 & 1) != 0) {
    v12 = *(_QWORD*)(a2 + 16);
  }
  else {
    v12 = a2 + 1;
  }
  v13 = strlen(v12);
  if (v13 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0_alt1();
  }
  v14 = v13;
  if (v13 >= 0x17) {
    if ((v13 | 7) == 0x17) {
      v16 = 26;
    }
    else {
      v16 = (v13 | 7) + 1;
    }
    v15 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                     v16, 16, 0);
    v22_.v23 = v14;
    v22_.v24 = v15;
    v22_.v22 = v16 | 1;
    goto LABEL_23;
  }
  LOBYTE(v22_.v22) = 2 * v13;
  v15 = (char*)&v22_.v22 + 1;
  if (v13 != 0) {
  LABEL_23:
    memmove(v15, v12, v14);
  }
  v15[v14] = 0;
  result = (__int64*)(v11 + 1704);
  if ((*(_BYTE*)(v11 + 1736) & 1) == 0) {
    *(_BYTE*)(v11 + 1728) = 0;
    *(_QWORD*)(v11 + 1712) = 0;
    *(_QWORD*)(v11 + 1720) = 0;
    *result = 0;
    *(_BYTE*)(v11 + 1736) = 1;
  }
  v17 = v22_.v22;
  if (result == &v22_.v22) {
  LABEL_37:
    if ((v17 & 1) == 0) {
      return result;
    }
    goto LABEL_38;
  }
  if ((*(_BYTE*)result & 1) != 0) {
    if ((v22_.v22 & 1) != 0) {
      v19 = v22_.v24;
    }
    else {
      v19 = (char*)&v22_.v22 + 1;
    }
    if ((v22_.v22 & 1) != 0) {
      v20 = v22_.v23;
    }
    else {
      v20 = (unsigned __int64)(unsigned __int8)v22_.v22 >> 1;
    }
    result = SpineModel_64dde0(result, (__int64)v19, v20);
    v17 = v22_.v22;
    goto LABEL_37;
  }
  if ((v22_.v22 & 1) == 0) {
    v18 = v22_.v23;
    *result = v22_.v22;
    *(_QWORD*)(v11 + 1712) = v18;
    *(_QWORD*)(v11 + 1720) = v22_.v24;
    return result;
  }
  result = GameRoutine_64df20_alt1(result, (__int64)v22_.v24, v22_.v23);
LABEL_38:
  if (v22_.v24 != nullptr) {
    v21 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v21 = 56;
    }
    return (__int64*)nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v21);
  }
  return result;
}

#pragma GCC visibility pop
