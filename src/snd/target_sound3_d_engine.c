#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 snd_target_SoundVoice_Destroy_SoundVoice(_QWORD);
extern __int64 (*snd_TargetSound3DEngine_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* snd_g_memory_ptr[2];
__int64 TargetSound3DEngine_Destructor(_QWORD* a1);
__int64 TargetSound3DEngine_DeletingDestructor(_QWORD* a1);

__int64 TargetSound3DEngine_Destructor(_QWORD* a1)
{
  void (***v1)(_QWORD);
  _QWORD* v2;

  v1 = (void (***)(_QWORD))a1[3];
  *a1 = snd_TargetSound3DEngine_vtable;
  if (v1 != nullptr) {
    v2 = a1;
    (**v1)(v1);
    (*(void (**)(_QWORD, void (***)(_QWORD)))(**(_QWORD**)snd_g_memory_ptr[0] +
                                              24LL))(*snd_g_memory_ptr[0], v1);
    a1 = v2;
  }
  return snd_target_SoundVoice_Destroy_SoundVoice(a1);
}

__int64 TargetSound3DEngine_DeletingDestructor(_QWORD* a1)
{
  void (***v1)(_QWORD);
  __int64 v3;

  v1 = (void (***)(_QWORD))a1[3];
  *a1 = snd_TargetSound3DEngine_vtable;
  if (v1 != nullptr) {
    (**v1)(v1);
    (*(void (**)(_QWORD, void (***)(_QWORD)))(**(_QWORD**)snd_g_memory_ptr[0] +
                                              24LL))(*snd_g_memory_ptr[0], v1);
  }
  snd_target_SoundVoice_Destroy_SoundVoice(a1);
  v3 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v3 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v3);
}

#pragma GCC visibility pop
