#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_863c00(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD, _QWORD, _DWORD, _DWORD);
__int64
    nn_audio_capture_detail_SystemAudioCaptureServerImplBase_CopyCaptureTypeName_plt(
        _QWORD, _QWORD);
__int64 nn_util_GetOscMessageArgumentAsString_plt(_QWORD);
__int64 nn_util_GetOscMessageArgumentTypeTag_plt(_QWORD);
__int64 nn_util_InitializeOscMessageParser_plt(_QWORD, _QWORD);
unsigned __int64 strlen_plt(const char*);
__int64 nn_audio_capture_279480(void* this_);

__int64 nn_audio_capture_279480(void* this_)
{
  __int64 v1;
  bool v3;
  bool v4;
  bool v5;
  char* v7;
  signed __int64 v8;
  int v11;
  bool v12;
  bool v13;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  _QWORD v25[4];
  struct {
    _QWORD v26[3];
    char gap80_[28];
    int v27;
  } v26_;

  {
    v1 = *(_QWORD*)this_;
    __asm__ volatile("" ::"r"(v1));
  }
  LODWORD(v26_.v26[0]) = 0;
  v25[0] = 0;
  if (((*(__int64 (**)(void*, _QWORD*, __int64, _QWORD*))(v1 + 64))(
           this_, v26_.v26, 4, v25) &
       1) == 0 ||
      LODWORD(v26_.v26[0]) > 0x3D00 ||
      ((*(__int64 (**)(void*, char*))(*(_QWORD*)this_ + 64LL))(
           this_, (char*)this_ + 57348) &
       1) == 0 ||
      LODWORD(v26_.v26[0]) != LODWORD(v25[0])) {
    return 0;
  }
  memset(v26_.v26, 0, sizeof(v26_.v26));
  nn_util_InitializeOscMessageParser_plt(v26_.v26, (char*)this_ + 57348);
  {
    v3 = *(_QWORD*)v26_.v26[0] == 0x416D65747379532FLL &&
         *(_QWORD*)(v26_.v26[0] + 8LL) == 0x747061436F696475LL;
    __asm__ volatile("" ::"r"(v3));
  }
  {
    v4 = v3 && *(__int64*)((char*)((__int64*)0xCLL) + v26_.v26[0] + 4) ==
                   0x757165522F657275LL;
    __asm__ volatile("" ::"r"(v4));
  }
  {
    v5 = v4 && *(__int64*)((char*)((__int64*)0xCLL) + v26_.v26[0] + 12) ==
                   0x74696E492F747365LL;
    __asm__ volatile("" ::"r"(v5));
  }
  if (!v5 || *(void(__attribute__((noreturn))**)())(
                 (char*)(*(void*(*)[5])0x18LL) + v26_.v26[0] + 6) !=
                 (void(__attribute__((noreturn))*)())0x657A696C61697469LL) {
    return 0;
  }
  memset(v25, 0, sizeof(v25));
  if ((unsigned __int8)nn_util_GetOscMessageArgumentTypeTag_plt(v26_.v26) !=
      115) {
    goto LABEL_78;
  }
  v7 = (const char*)nn_util_GetOscMessageArgumentAsString_plt(v26_.v26);
  v8 = strlen_plt(v7);
  if (v8 > 15) {
    if (v8 == 16) {
      if (*(_QWORD*)v7 == 0x626164726F636552LL &&
          *((_QWORD*)v7 + 1) == 0x74757074754F656CLL) {
        v11 = 1;
        goto LABEL_80;
      }
      goto LABEL_78;
    }
    if (v8 != 22) {
      if (v8 == 25) {
        {
          v12 = *(_QWORD*)v7 == 0x6C506D6165727453LL &&
                *((_QWORD*)v7 + 1) == 0x726F7272694D7961LL;
          __asm__ volatile("" ::"r"(v12));
        }
        {
          v13 = v12 && *((_QWORD*)v7 + 2) == 0x757074754F676E69LL;
          __asm__ volatile("" ::"r"(v13));
        }
        if (v13 && v7[24] == 116) {
          v11 = 4;
          goto LABEL_80;
        }
      }
      goto LABEL_78;
    }
    if (*(_QWORD*)v7 == 0x6565726353637452LL &&
        *((_QWORD*)v7 + 1) == 0x676E69726168536ELL &&
        *(_QWORD*)(v7 + 14) == 0x74757074754F676ELL) {
      v11 = 3;
      goto LABEL_80;
    }
  LABEL_78:
    v7 = "FinalOutput";
  LABEL_79:
    v11 = 0;
    goto LABEL_80;
  }
  if (v8 == 10) {
    if (*(_QWORD*)v7 == 0x6F69647541776152LL && *((_WORD*)v7 + 4) == 28233) {
      v11 = 6;
      goto LABEL_80;
    }
    goto LABEL_78;
  }
  if (v8 == 11) {
    if (*(_QWORD*)v7 == 0x74754F6C616E6946LL &&
        *(_QWORD*)(v7 + 3) == 0x74757074754F6C61LL) {
      goto LABEL_79;
    }
    if (*(_QWORD*)v7 == 0x696475416E69614DLL &&
        *(_QWORD*)(v7 + 3) == 0x6E496F696475416ELL) {
      v11 = 5;
      goto LABEL_80;
    }
    goto LABEL_78;
  }
  if (v8 != 14) {
    goto LABEL_78;
  }
  if (*(_QWORD*)v7 != 0x6C61636973796850LL ||
      *(_QWORD*)(v7 + 6) != 0x74757074754F6C61LL) {
    if (*(_QWORD*)v7 == 0x4177615265757254LL &&
        *(_QWORD*)(v7 + 6) == 0x6E496F6964754177LL) {
      v11 = 7;
      goto LABEL_80;
    }
    goto LABEL_78;
  }
  v11 = 2;
LABEL_80:
  *((_DWORD*)this_ + 14336) = v11;
  nn_audio_capture_detail_SystemAudioCaptureServerImplBase_CopyCaptureTypeName_plt(
      v25, v7);
  v21 = SdkRoutine_863c00((char*)this_ + 57348, 15616,
                          "/SystemAudioCapture/Response/Initialize", 1, 5, v25,
                          6, 4, 5, 7);
  {
    v22 = *(_QWORD*)this_;
    __asm__ volatile("" ::"r"(v22));
  }
  v23 = v21;
  v26_.v27 = v21;
  if (((*(__int64 (**)(void*, int*, __int64))(v22 + 72))(this_, &v26_.v27, 4) &
       1) != 0) {
    return (*(__int64 (**)(void*, char*, __int64))(*(_QWORD*)this_ + 72LL))(
               this_, (char*)this_ + 57348, v23) &
           1;
  }
  return 0;
}

#pragma GCC visibility pop
