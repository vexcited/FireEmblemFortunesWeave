#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void Pane_58dfa0(PSEUDO_X8, __int64);
__int64* GameRoutine_1889100(__int64* result, __int64*, __int64*);
__int64* ui_control_1888dc0(__int64, __int64);
unsigned __int128
ui_control_1888dc0_pair(__int64, __int64) __asm__("ui_control_1888dc0");
__int64 GameRoutine_5766a0(__int64, const char*);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 std___1___hash_memory(__int64, unsigned __int64);
extern __int64 (*GameData_20ffc38[])();
extern __int64 (*ui_control_GenericMenuItem_vtable[])();
extern __int64 GameData_20ffc58;
extern __int64 GameData_20ffc68;
extern __int64 GameData_20ffc78;
extern __int64 GameData_20ffc88;
extern __int64 fw_memory_g_heap_manager_ptr;
extern char* GameData_20ffc50;
extern char* GameData_20ffc60;
extern char* GameData_20ffc70;
extern char* GameData_20ffc80;
unsigned __int64 GameRoutine_1889360(__int64*, __int64*, const char**);
void MenuItem_188afa0(_QWORD*, __int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void ui_control_1886790(__int64 a1);
__int64* ui_control_1888c80(__int64 a1, __int64* a2, __int64* a3);
__int64* ui_control_1889230(__int64 a1, __int64* a2, const char** a3);
void ui_control_188ca50(_QWORD* a1, __int64 a2);

void ui_control_1886790(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  float v2;
  float v3;
  __int64 v5;
  int v6;
  struct {
    float v7;
    float v8;
    float v9;
    float v10;
  } v7_;

  v1 = *(_QWORD*)(a1 + 200);
  if (v1 != 0 && (*(_BYTE*)(v1 + 88) & 0x10) == 0 &&
      *(_QWORD*)(a1 + 192) != 0) {
    v2 = *(float*)(v1 + 124);
    v3 = *(float*)(v1 + 140);
    Pane_58dfa0((void*)(&v7_.v7), v1);
    v5 = *(_QWORD*)(a1 + 192);
    v7_.v7 = v2 + v7_.v7;
    v7_.v8 = v3 + v7_.v8;
    v7_.v9 = v2 + v7_.v9;
    v7_.v10 = v3 + v7_.v10;
    Pane_58dfa0((void*)((float*)&v6), v5);
  }
}

__int64* ui_control_1888c80(__int64 a1, __int64* a2, __int64* a3)
{
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  bool v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64* result;
  char v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;

  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v6 = fw_memory_g_heap_manager_ptr;
  v7 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      64, 16, 0),
  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(_QWORD*)v7 = 0;
  *(_QWORD*)(v7 + 8) = 0;
  GameRoutine_1889100((__int64*)(v7 + 16), a2, a3),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v8 = *(unsigned __int8*)(v7 + 16);
  v9 = (v8 & 1) == 0;
  v10 = v8 >> 1;
  if (v9) {
    v11 = v7 + 17;
  }
  else {
    v11 = *(_QWORD*)(v7 + 32);
  }
  if (v9) {
    v12 = v10;
  }
  else {
    v12 = *(_QWORD*)(v7 + 24);
  }
  *(_QWORD*)(v7 +
             8) = std___1___hash_memory(v11, v12),
             v14 = COERCE_AS(__typeof__(v14),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  result = ({
    unsigned __int128 r_ = ui_control_1888dc0_pair(a1, v7);
    v14 = COERCE_AS(__typeof__(v14), (unsigned long long)(r_ >> 64));
    (__int64*)(unsigned long long)r_;
  });
  if ((v14 & 1) == 0) {
    v15 = result;
    if ((*(_BYTE*)(v7 + 40) & 1) != 0) {
      v16 = *(_QWORD*)(v7 + 56);
      if (v16 != 0) {
        v17 = 128;
        if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
          v17 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v17, v16),
            v14 = COERCE_AS(__typeof__(v14),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
    }
    if ((*(_BYTE*)(v7 + 16) & 1) != 0) {
      v18 = *(_QWORD*)(v7 + 32);
      if (v18 != 0) {
        v19 = 128;
        if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
          v19 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v19, v18),
            v14 = COERCE_AS(__typeof__(v14),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
    }
    v20 = 128;
    if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
      v20 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v20, v7),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    return v15;
  }
  return result;
}

__int64* ui_control_1889230(__int64 a1, __int64* a2, const char** a3)
{
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  bool v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64* result;
  char v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;

  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v6 = fw_memory_g_heap_manager_ptr;
  v7 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      64, 16, 0),
  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(_QWORD*)v7 = 0;
  *(_QWORD*)(v7 + 8) = 0;
  GameRoutine_1889360((__int64*)(v7 + 16), a2, a3),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v8 = *(unsigned __int8*)(v7 + 16);
  v9 = (v8 & 1) == 0;
  v10 = v8 >> 1;
  if (v9) {
    v11 = v7 + 17;
  }
  else {
    v11 = *(_QWORD*)(v7 + 32);
  }
  if (v9) {
    v12 = v10;
  }
  else {
    v12 = *(_QWORD*)(v7 + 24);
  }
  *(_QWORD*)(v7 +
             8) = std___1___hash_memory(v11, v12),
             v14 = COERCE_AS(__typeof__(v14),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  result = ({
    unsigned __int128 r_ = ui_control_1888dc0_pair(a1, v7);
    v14 = COERCE_AS(__typeof__(v14), (unsigned long long)(r_ >> 64));
    (__int64*)(unsigned long long)r_;
  });
  if ((v14 & 1) == 0) {
    v15 = result;
    if ((*(_BYTE*)(v7 + 40) & 1) != 0) {
      v16 = *(_QWORD*)(v7 + 56);
      if (v16 != 0) {
        v17 = 128;
        if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
          v17 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v17, v16),
            v14 = COERCE_AS(__typeof__(v14),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
    }
    if ((*(_BYTE*)(v7 + 16) & 1) != 0) {
      v18 = *(_QWORD*)(v7 + 32);
      if (v18 != 0) {
        v19 = 128;
        if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
          v19 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v19, v18),
            v14 = COERCE_AS(__typeof__(v14),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
    }
    v20 = 128;
    if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
      v20 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v20, v7),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    return v15;
  }
  return result;
}

void ui_control_188ca50(_QWORD* a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  const char* v11;

  MenuItem_188afa0(a1, a2);
  *a1 = ui_control_GenericMenuItem_vtable;
  a1[9] = GameData_20ffc38;
  v4 = fw_memory_g_heap_manager_ptr;
  v5 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      64, 16, 0);
  v6 = GameData_20ffc78;
  *(_QWORD*)(v5 + 32) = GameData_20ffc70;
  *(_QWORD*)(v5 + 40) = v6;
  v7 = GameData_20ffc88;
  *(_QWORD*)(v5 + 48) = GameData_20ffc80;
  *(_QWORD*)(v5 + 56) = v7;
  v8 = GameData_20ffc58;
  *(_QWORD*)v5 = GameData_20ffc50;
  *(_QWORD*)(v5 + 8) = v8;
  v9 = GameData_20ffc68;
  *(_QWORD*)(v5 + 16) = GameData_20ffc60;
  *(_QWORD*)(v5 + 24) = v9;
  v11 = (const char*)GameRoutine_5766a0(a2, "Default");
  if (v11 != nullptr) {
    ui_control_1889230((__int64)(a1 + 31), (__int64*)v5, &v11);
  }
  v11 = (const char*)GameRoutine_5766a0(a2, *(const char**)(v5 + 16));
  if (v11 != nullptr) {
    ui_control_1889230((__int64)(a1 + 31), (__int64*)(v5 + 16), &v11);
  }
  v11 = (const char*)GameRoutine_5766a0(a2, *(const char**)(v5 + 32));
  if (v11 != nullptr) {
    ui_control_1889230((__int64)(a1 + 31), (__int64*)(v5 + 32), &v11);
  }
  v11 = (const char*)GameRoutine_5766a0(a2, *(const char**)(v5 + 48));
  if (v11 != nullptr) {
    ui_control_1889230((__int64)(a1 + 31), (__int64*)(v5 + 48), &v11);
  }
  a1[36] &= 0xFFFFFFFCFFFFFFFFLL;
  v10 = 128;
  if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
    v10 = 56;
  }
  nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v10, v5);
}

#pragma GCC visibility pop
