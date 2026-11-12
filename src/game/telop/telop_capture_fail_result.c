#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 game_telop_TelopResult_Destroy_TelopResult(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak();
extern __int64 (*game_telop_TelopCaptureFailResult_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 TelopCaptureFailResult_Destructor_alt1(_QWORD* a1) __asm__(
    "TelopCaptureFailResult_Destructor");
__int64 TelopCaptureFailResult_DeletingDestructor_alt1(_QWORD* a1) __asm__(
    "TelopCaptureFailResult_DeletingDestructor");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void game_telop_TelopResult_Destroy_TelopResult_alt1(__int64) __asm__(
    "game_telop_TelopResult_Destroy_TelopResult");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void TelopCaptureFailResult_Destructor(_QWORD* a1);
void TelopCaptureFailResult_DeletingDestructor(_QWORD* a1);
__attribute__((swiftcall)) void GameRoutine_9b8fe0(PSEUDO_X8, __int64*,
                                                   const char**);
__attribute__((swiftcall)) void TextBoxEx_188aa00(PSEUDO_X8, __int64, int);
__int64* GameRoutine_1760e40(__int64, unsigned int);
__int64 EmbeddedImage_1889bf0(__int64, __int64);
__int64 GameRoutine_60a020(__int64, const char*);
__int64 std___1___shared_weak_count_lock(__int64);
extern __int64* GameData_212c8a0;
extern __int64 msg_MessageManager_instance_;
extern char** msg_MessageManager_empty_text__ptr;
unsigned __int8* Unit_931120(unsigned __int8*);
void TextBoxEx_188ab20(__int64, const char*);
__int64 TelopCaptureFailResult_Unknown57(__int64 a1);

__int64 TelopCaptureFailResult_Unknown57(__int64 a1)
{
  __int64* v2;
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int8* v7;
  const char* v8;
  __int64 v9;
  __int64 v10;
  const char* v11[2];
  struct {
    __int64 v12;
    __int64 v13;
  } v12_;

  v2 = GameRoutine_1760e40(a1, 0);
  v11[0] = "L_Txt";
  v11[1] = (_BYTE*)(((_WORD*)0x4LL) + 1);
  GameRoutine_9b8fe0((void*)(&v12_.v12), v2, v11);
  result = v12_.v13;
  if (v12_.v13 != 0) {
    v4 = std___1___shared_weak_count_lock(v12_.v13);
    v5 = v12_.v12;
    result = v12_.v13;
    if (v12_.v13 != 0) {
      result = std___1___shared_weak_count___release_weak_alt1(v12_.v13);
    }
    if (v4 == 0 || v5 == 0) {
      if (v4 == 0) {
        return result;
      }
      goto LABEL_20;
    }
    v6 = msg_MessageManager_instance_;
    v7 = Unit_931120(*(unsigned __int8**)(a1 + 1168));
    if (v7 != nullptr) {
      v8 = (const char*)v7;
    }
    else {
      v8 = *msg_MessageManager_empty_text__ptr;
    }
    GameRoutine_60a020(v6 + 14704, v8);
    TextBoxEx_188ab20(v5, "MID_Sys_Result_Msg_Get_Animal_Failed");
    TextBoxEx_188aa00((void*)(&v12_.v12), v5, 0);
    result = v12_.v13;
    if (v12_.v13 != 0) {
      v9 = std___1___shared_weak_count_lock(v12_.v13);
      v10 = v12_.v12;
      result = v12_.v13;
      if (v12_.v13 != 0) {
        result = std___1___shared_weak_count___release_weak_alt1(v12_.v13);
      }
      if (v9 != 0 && v10 != 0) {
        EmbeddedImage_1889bf0(
            v10, *(_QWORD*)(*(_QWORD*)(*GameData_212c8a0 + 64) +
                            8LL * **(unsigned __int8**)(a1 + 1168)));
        result =
            (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v10 + 40LL))(v10, 1);
        goto LABEL_18;
      }
      if (v9 != 0) {
      LABEL_18:
        if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
          result = std___1___shared_weak_count___release_weak_alt1(v9);
        }
      }
    }
  LABEL_20:
    if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      return std___1___shared_weak_count___release_weak_alt1(v4);
    }
  }
  return result;
}

void TelopCaptureFailResult_Destructor(_QWORD* a1)
{
  __int64 v1;
  _QWORD* v2;

  v1 = a1[147];
  *a1 = game_telop_TelopCaptureFailResult_vtable;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    v2 = a1;
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak_alt1(v1);
    a1 = v2;
  }
  game_telop_TelopResult_Destroy_TelopResult_alt1((__int64)a1);
}

void TelopCaptureFailResult_DeletingDestructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;

  v1 = a1[147];
  *a1 = game_telop_TelopCaptureFailResult_vtable;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak_alt1(v1);
  }
  game_telop_TelopResult_Destroy_TelopResult_alt1((__int64)a1);
  v3 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v3 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, (__int64)a1);
}

#pragma GCC visibility pop
