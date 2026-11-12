#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

const char* ReportMenuItem_DisguiseYes_Unknown3(__int64 a1);
bool ReportMenuItem_DisguiseYes_Unknown58(__int64 a1);
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, _QWORD, _QWORD,
                                               _QWORD, _QWORD, _QWORD, _QWORD,
                                               double, float);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
__int64 ReportMenuItem_DisguiseYes_Unknown25(__int64 a1);
__int64 std___1___shared_weak_count___release_weak(__int64);
extern __int64 (*game_menu_BasicMenuItem_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
void nn_mem_StandardAllocator_Free(__int64, __int64);
void ReportMenuItem_DisguiseYes_Destructor(__int64 a1);
void ReportMenuItem_DisguiseYes_DeletingDestructor(__int64 a1);

void ReportMenuItem_DisguiseYes_Destructor(__int64 a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  v2 = (_QWORD*)(a1 + 96);
  v3 = *(_QWORD**)(a1 + 128);
  if (v3 == v2) {
    v4 = 32;
  }
  else {
    if (v3 == nullptr) {
      goto LABEL_6;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v3 + v4))((__int64)v3);
LABEL_6:
  v5 = *(_QWORD*)(a1 + 56);
  *(_QWORD*)a1 = game_menu_BasicMenuItem_vtable;
  if (v5 != 0) {
    std___1___shared_weak_count___release_weak(v5);
  }
  if ((*(_BYTE*)(a1 + 16) & 1) != 0) {
    v6 = *(_QWORD*)(a1 + 32);
    if (v6 != 0) {
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v7 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v7,
                                    v6);
    }
  }
}

void ReportMenuItem_DisguiseYes_DeletingDestructor(__int64 a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v2 = (_QWORD*)(a1 + 96);
  v3 = *(_QWORD**)(a1 + 128);
  if (v3 == v2) {
    v4 = 32;
  }
  else {
    if (v3 == nullptr) {
      goto LABEL_6;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v3 + v4))((__int64)v3);
LABEL_6:
  v5 = *(_QWORD*)(a1 + 56);
  *(_QWORD*)a1 = game_menu_BasicMenuItem_vtable;
  if (v5 != 0) {
    std___1___shared_weak_count___release_weak(v5);
  }
  v6 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 16) & 1) != 0) {
    v7 = *(_QWORD*)(a1 + 32);
    if (v7 != 0) {
      v8 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v8 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v8,
                                    v7);
    }
  }
  v9 = 128;
  if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
    v9 = 56;
  }
  nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v9, a1);
}

const char* ReportMenuItem_DisguiseYes_Unknown3(__int64 a1)
{
  if (*(_BYTE*)(**(_QWORD**)(a1 + 88) + 112LL) != 0) {
    return "MID_QuestMenu_Report_Yes";
  }
  else {
    return "MID_QuestMenu_Delivery_Yes";
  }
}

__int64 ReportMenuItem_DisguiseYes_Unknown25(__int64 a1)
{
  unsigned int v1;
  __int64 v3;
  int v4;
  __int64 v5;
  __int64 v7;
  _BYTE v8[200];

  v1 = 1;
  if (*(_BYTE*)(*(_QWORD*)(a1 + 88) + 9LL) == 3) {
    snd_Fade_Fade_10c830(v8, 0.0f);
    snd_play_ff2d0((void*)(&v7), "SE_SYS_Decide_M", "SE_SYS_Decide_M", v8, 0,
                   65537, 0, 0.0f, 1.0f);
    snd_Fade_Destroy_Fade(v8);
    (*(void (**)(__int64, __int64))(*(_QWORD*)a1 + 56LL))(a1, 1);
    *(_DWORD*)(*(_QWORD*)(a1 + 8) + 356LL) |= 4u;
    *(_BYTE*)(a1 + 78) = 1;
    v3 = *(_QWORD*)(a1 + 8);
    v4 = *(_DWORD*)(v3 + 356);
    *(_BYTE*)(v3 + 648) = 0;
    *(_DWORD*)(v3 + 356) = v4 | 2;
    v5 = *(_QWORD*)(a1 + 128);
    if (v5 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v5 + 48LL))(v5);
    }
    return 4;
  }
  return v1;
}

bool ReportMenuItem_DisguiseYes_Unknown58(__int64 a1)
{
  return *(_BYTE*)(*(_QWORD*)(a1 + 88) + 9LL) == 3;
}

#pragma GCC visibility pop
