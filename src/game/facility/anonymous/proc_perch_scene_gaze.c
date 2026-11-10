#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_138a5a0(_QWORD);
__int64 GameRoutine_14869b0(_QWORD);
extern __int64 GameData_21f3d10;
extern __int64 GameData_21f4000;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
__int64 ProcPerchSceneGaze_14381a0();
void ProcPerchSceneGaze_14381d0();
__int64 GameRoutine_13f9200(_QWORD);
__int64 GameRoutine_1451020(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_14877f0(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_util_Format(const char*, ...);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 strlen(_QWORD);
extern _UNKNOWN** GameData_21313e0[3];
extern _UNKNOWN** GameData_21313e8[2];
extern _UNKNOWN** GameData_21313f0;
extern __int64 (*GameData_203de10[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern char GameData_1aa5e95[];
void __attribute__((noreturn)) String_60a1d0(void);

__int64 ProcPerchSceneGaze_1438340()
{
  return GameRoutine_14877f0(0, 0x13F000000LL);
};

__int64 ProcPerchSceneGaze_1438420()
{
  return GameRoutine_14877f0(0, 0x13F000000LL);
};
__int64 ProcPerchSceneGaze_14393f0();
_QWORD*
game_facility_anonymous_ProcPerchSceneGaze_CameraStateBase_SetCharacterLookAt_closure_Clone(
    __int64 a1);
__int64
game_facility_anonymous_ProcPerchSceneGaze_CameraStateBase_SetCharacterLookAt_closure_CloneInto(
    __int64 result, _QWORD* a2);
__int64
game_facility_anonymous_ProcPerchSceneGaze_CameraStateBase_SetCharacterLookAt_closure_Invoke(
    __int64 a1);
__int64 ProcPerchSceneGaze_1439bb0();
void ProcPerchSceneGaze_1439df0();
void ProcPerchSceneGaze_143a390();
__int64 ProcPerchSceneGaze_143c080();

__int64 ProcPerchSceneGaze_14381a0()
{
  __int64 v0;

  v0 = GameRoutine_138a5a0(GameData_21f4000);
  return GameRoutine_14869b0(v0);
}

void ProcPerchSceneGaze_14381d0()
{
  if (GameData_21f3d10 != 0 && *(int*)(GameData_21f3d10 + 152) >= 1) {
    *(_DWORD*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] + 156LL) =
        1065353216;
  }
}

__int64 ProcPerchSceneGaze_14393f0()
{
  __int64 v0;
  unsigned __int64 v1;
  unsigned __int64 v2;
  _QWORD* v3;
  char* v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  char* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 result;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD v17[2];
  __int64 v18;
  _QWORD v19[2];
  char* v20;
  _QWORD v21[2];
  char* v22;

  v0 = (__int64)*GameData_21313e0[0];
  v1 = strlen(*GameData_21313e0[0]);
  if (v1 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_35:
    String_60a1d0();
  }
  v2 = v1;
  v3 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  if (v1 >= 0x17) {
    if ((v1 | 7) == 0x17) {
      v5 = 26;
    }
    else {
      v5 = (v1 | 7) + 1;
    }
    v4 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v5, 16, 0);
    v21[1] = v2;
    v22 = v4;
    v21[0] = v5 | 1;
    goto LABEL_9;
  }
  LOBYTE(v21[0]) = 2 * v1;
  v4 = (char*)v21 + 1;
  if (v1 != 0) {
  LABEL_9:
    memmove(v4, v0, v2);
  }
  v4[v2] = 0;
  v6 = game_util_Format(GameData_1aa5e95, 0);
  v7 = strlen(v6);
  if (v7 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_35;
  }
  v8 = v7;
  if (v7 >= 0x17) {
    if ((v7 | 7) == 0x17) {
      v10 = 26;
    }
    else {
      v10 = (v7 | 7) + 1;
    }
    v9 = (char*)fw_memory_HeapManager_Allocate(*v3, v10, 16, 0);
    v19[1] = v8;
    v20 = v9;
    v19[0] = v10 | 1;
  }
  else {
    LOBYTE(v19[0]) = 2 * v7;
    v9 = (char*)v19 + 1;
    if (v7 == 0) {
      goto LABEL_19;
    }
  }
  memmove(v9, v6, v8);
LABEL_19:
  v11 = *v3;
  v9[v8] = 0;
  v12 = fw_memory_HeapManager_Allocate(v11, 32, 16, 0);
  v17[0] = 33;
  v17[1] = 25;
  v18 = v12;
  *(_WORD*)(v12 + 24) = 136;
  *(_QWORD*)v12 = 0x82E3BE81E3A2ADE6LL;
  *(_QWORD*)(v12 + 8) = 0xA683E35FA89CE68ALL;
  *(_QWORD*)(v12 + 16) = 0x83E38383E38B83E3LL;
  result = GameRoutine_1451020(v21, v19, v17);
  if ((v17[0] & 1) != 0 && v18 != 0) {
    v14 = 128;
    if (*(_QWORD*)(*v3 + 200LL) == 0) {
      v14 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*v3 + v14, v18);
  }
  if ((v19[0] & 1) != 0 && v20 != nullptr) {
    v15 = 128;
    if (*(_QWORD*)(*v3 + 200LL) == 0) {
      v15 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*v3 + v15, v20);
  }
  if ((v21[0] & 1) != 0 && v22 != nullptr) {
    v16 = 128;
    if (*(_QWORD*)(*v3 + 200LL) == 0) {
      v16 = 56;
    }
    return nn_mem_StandardAllocator_Free(*v3 + v16, v22);
  }
  return result;
}

_QWORD*

game_facility_anonymous_ProcPerchSceneGaze_CameraStateBase_SetCharacterLookAt_closure_Clone(
    __int64 a1)
{
  _QWORD* result;
  __int64 v3;
  __int64 v4;

  result = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 24, 16, 0);
  v4 = *(_QWORD*)(a1 + 8);
  v3 = *(_QWORD*)(a1 + 16);
  *result = GameData_203de10;
  result[1] = v4;
  result[2] = v3;
  if (v3 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                              memory_order_relaxed);
  }
  return result;
}

__int64

game_facility_anonymous_ProcPerchSceneGaze_CameraStateBase_SetCharacterLookAt_closure_CloneInto(
    __int64 result, _QWORD* a2)
{
  __int64 v2;

  *a2 = GameData_203de10;
  a2[1] = *(_QWORD*)(result + 8);
  v2 = *(_QWORD*)(result + 16);
  a2[2] = v2;
  if (v2 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 8), 1u,
                              memory_order_relaxed);
  }
  return result;
}

__int64

game_facility_anonymous_ProcPerchSceneGaze_CameraStateBase_SetCharacterLookAt_closure_Invoke(
    __int64 a1)
{
  __int128 v2;

  v2 = *(_OWORD*)(*(_QWORD*)(a1 + 8) + 16LL);
  return GameRoutine_13f9200(&v2);
}

__int64 ProcPerchSceneGaze_1439bb0()
{
  __int64 v0;
  unsigned __int64 v1;
  unsigned __int64 v2;
  _QWORD* v3;
  char* v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  char* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 result;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD v17[2];
  __int64 v18;
  _QWORD v19[2];
  char* v20;
  _QWORD v21[2];
  char* v22;

  v0 = (__int64)*GameData_21313e8[0];
  v1 = strlen(*GameData_21313e8[0]);
  if (v1 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_35:
    String_60a1d0();
  }
  v2 = v1;
  v3 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  if (v1 >= 0x17) {
    if ((v1 | 7) == 0x17) {
      v5 = 26;
    }
    else {
      v5 = (v1 | 7) + 1;
    }
    v4 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v5, 16, 0);
    v21[1] = v2;
    v22 = v4;
    v21[0] = v5 | 1;
    goto LABEL_9;
  }
  LOBYTE(v21[0]) = 2 * v1;
  v4 = (char*)v21 + 1;
  if (v1 != 0) {
  LABEL_9:
    memmove(v4, v0, v2);
  }
  v4[v2] = 0;
  v6 = game_util_Format(GameData_1aa5e95, 0);
  v7 = strlen(v6);
  if (v7 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_35;
  }
  v8 = v7;
  if (v7 >= 0x17) {
    if ((v7 | 7) == 0x17) {
      v10 = 26;
    }
    else {
      v10 = (v7 | 7) + 1;
    }
    v9 = (char*)fw_memory_HeapManager_Allocate(*v3, v10, 16, 0);
    v19[1] = v8;
    v20 = v9;
    v19[0] = v10 | 1;
  }
  else {
    LOBYTE(v19[0]) = 2 * v7;
    v9 = (char*)v19 + 1;
    if (v7 == 0) {
      goto LABEL_19;
    }
  }
  memmove(v9, v6, v8);
LABEL_19:
  v11 = *v3;
  v9[v8] = 0;
  v12 = fw_memory_HeapManager_Allocate(v11, 32, 16, 0);
  v17[0] = 33;
  v17[1] = 25;
  v18 = v12;
  *(_WORD*)(v12 + 24) = 136;
  *(_QWORD*)v12 = 0x82E3BE81E3A2ADE6LL;
  *(_QWORD*)(v12 + 8) = 0xA683E35FA89CE68ALL;
  *(_QWORD*)(v12 + 16) = 0x83E38383E38B83E3LL;
  result = GameRoutine_1451020(v21, v19, v17);
  if ((v17[0] & 1) != 0 && v18 != 0) {
    v14 = 128;
    if (*(_QWORD*)(*v3 + 200LL) == 0) {
      v14 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*v3 + v14, v18);
  }
  if ((v19[0] & 1) != 0 && v20 != nullptr) {
    v15 = 128;
    if (*(_QWORD*)(*v3 + 200LL) == 0) {
      v15 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*v3 + v15, v20);
  }
  if ((v21[0] & 1) != 0 && v22 != nullptr) {
    v16 = 128;
    if (*(_QWORD*)(*v3 + 200LL) == 0) {
      v16 = 56;
    }
    return nn_mem_StandardAllocator_Free(*v3 + v16, v22);
  }
  return result;
}

void ProcPerchSceneGaze_1439df0()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v0 = *(_QWORD*)(GameData_21f4000 + 264);
  if (v0 != 0) {
    v1 = *(_QWORD*)(GameData_21f4000 + 256);
    v2 = *(_QWORD*)(GameData_21f4000 + 264);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v0 + 16), 1u,
                              memory_order_relaxed);
    v3 = std___1___shared_weak_count_lock(v2);
    std___1___shared_weak_count___release_weak(v0);
    if (v3 != 0) {
      if (v1 != 0) {
        v4 = *(_QWORD*)(v1 + 392);
        if (v4 != 0) {
          (*(void (**)(__int64, __int64))(*(_QWORD*)v4 + 32LL))(v4, v1);
        }
        v5 = *(_QWORD*)(v1 + 400);
        *(_QWORD*)(v1 + 392) = 0;
        *(_QWORD*)(v1 + 400) = 0;
        if (v5 != 0) {
          if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
            std___1___shared_weak_count___release_weak(v5);
          }
          v6 = *(_QWORD*)(v1 + 392);
          if (v6 != 0) {
            (*(void (**)(__int64, __int64))(*(_QWORD*)v6 + 24LL))(v6, v1);
          }
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
        std___1___shared_weak_count___release_weak(v3);
      }
    }
  }
}

void ProcPerchSceneGaze_143a390()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v0 = *(_QWORD*)(GameData_21f4000 + 264);
  if (v0 != 0) {
    v1 = *(_QWORD*)(GameData_21f4000 + 256);
    v2 = *(_QWORD*)(GameData_21f4000 + 264);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v0 + 16), 1u,
                              memory_order_relaxed);
    v3 = std___1___shared_weak_count_lock(v2);
    std___1___shared_weak_count___release_weak(v0);
    if (v3 != 0) {
      if (v1 != 0) {
        v5 = *(_QWORD*)(v1 + 392);
        v4 = *(_QWORD*)(v1 + 400);
        if (v4 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                                    memory_order_relaxed);
          if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
            std___1___shared_weak_count___release_weak(v4);
          }
        }
        if (v5 != 0) {
          *(_BYTE*)(v5 + 128) = 0;
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
        std___1___shared_weak_count___release_weak(v3);
      }
    }
  }
}

__int64 ProcPerchSceneGaze_143c080()
{
  __int64 v0;
  unsigned __int64 v1;
  unsigned __int64 v2;
  _QWORD* v3;
  char* v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  char* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 result;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD v17[2];
  __int64 v18;
  _QWORD v19[2];
  char* v20;
  _QWORD v21[2];
  char* v22;

  v0 = (__int64)*GameData_21313f0;
  v1 = strlen(*GameData_21313f0);
  if (v1 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_35:
    String_60a1d0();
  }
  v2 = v1;
  v3 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  if (v1 >= 0x17) {
    if ((v1 | 7) == 0x17) {
      v5 = 26;
    }
    else {
      v5 = (v1 | 7) + 1;
    }
    v4 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v5, 16, 0);
    v21[1] = v2;
    v22 = v4;
    v21[0] = v5 | 1;
    goto LABEL_9;
  }
  LOBYTE(v21[0]) = 2 * v1;
  v4 = (char*)v21 + 1;
  if (v1 != 0) {
  LABEL_9:
    memmove(v4, v0, v2);
  }
  v4[v2] = 0;
  v6 = game_util_Format(GameData_1aa5e95, 0);
  v7 = strlen(v6);
  if (v7 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_35;
  }
  v8 = v7;
  if (v7 >= 0x17) {
    if ((v7 | 7) == 0x17) {
      v10 = 26;
    }
    else {
      v10 = (v7 | 7) + 1;
    }
    v9 = (char*)fw_memory_HeapManager_Allocate(*v3, v10, 16, 0);
    v19[1] = v8;
    v20 = v9;
    v19[0] = v10 | 1;
  }
  else {
    LOBYTE(v19[0]) = 2 * v7;
    v9 = (char*)v19 + 1;
    if (v7 == 0) {
      goto LABEL_19;
    }
  }
  memmove(v9, v6, v8);
LABEL_19:
  v11 = *v3;
  v9[v8] = 0;
  v12 = fw_memory_HeapManager_Allocate(v11, 32, 16, 0);
  v17[0] = 33;
  v17[1] = 25;
  v18 = v12;
  *(_WORD*)(v12 + 24) = 136;
  *(_QWORD*)v12 = 0x82E3BE81E3A2ADE6LL;
  *(_QWORD*)(v12 + 8) = 0xA683E35FA89CE68ALL;
  *(_QWORD*)(v12 + 16) = 0x83E38383E38B83E3LL;
  result = GameRoutine_1451020(v21, v19, v17);
  if ((v17[0] & 1) != 0 && v18 != 0) {
    v14 = 128;
    if (*(_QWORD*)(*v3 + 200LL) == 0) {
      v14 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*v3 + v14, v18);
  }
  if ((v19[0] & 1) != 0 && v20 != nullptr) {
    v15 = 128;
    if (*(_QWORD*)(*v3 + 200LL) == 0) {
      v15 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*v3 + v15, v20);
  }
  if ((v21[0] & 1) != 0 && v22 != nullptr) {
    v16 = 128;
    if (*(_QWORD*)(*v3 + 200LL) == 0) {
      v16 = 56;
    }
    return nn_mem_StandardAllocator_Free(*v3 + v16, v22);
  }
  return result;
}

#pragma GCC visibility pop
