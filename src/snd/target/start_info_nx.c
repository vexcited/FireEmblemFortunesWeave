#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 snd_fnd_WeakHandle_get(_QWORD, float);
extern __int64 (*snd_target_StartInfoNX_vtable[])();
extern __int64 snd_target_s_platform;
extern __int64* snd_g_memory_ptr[2];
void GameRoutine_651250(void*, unsigned __int64);
__int64 StartInfoNX_Unknown3(__int64 result, int a2);
__int64 StartInfoNX_Unknown4(__int64 result);
__int64 StartInfoNX_Unknown8(__int64 a1);
__int64 StartInfoNX_Unknown14(__int64 result);
__int64 StartInfoNX_Unknown11(__int64 a1, __int64 a2);
__int64 StartInfoNX_14bbe0(_DWORD* a1, _DWORD* a2);
__int64 StartInfoNX_Unknown15(__int64 a1, __int64 a2);
__int64 StartInfoNX_Destructor(__int64 result);
void StartInfoNX_DeletingDestructor(_QWORD* a1);
__int64 StartInfoNX_Unknown14(__int64 result);
_BYTE* GameRoutine_190120(_BYTE* result, unsigned __int8*);
_QWORD* GameRoutine_a3a3a0(_QWORD*, __int64, unsigned __int64);
__int64* GameRoutine_a3a260(__int64*, __int64, unsigned __int64);
__int64 GameRoutine_190240(__int64);
__int64 GameRoutine_651190(__int64);
__int64 GameRoutine_a392e0(__int64, __int64, ...);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 strlen(_QWORD);
extern __int64 snd_g_proxy_ptr[2];
void GameRoutine_651250_alt1(void*) __asm__("GameRoutine_651250");
void __attribute__((noreturn)) String_60a1d0();
__int64 StartInfoNX_Unknown16(__int64* a1);

__int64 StartInfoNX_Unknown3(__int64 result, int a2)
{
  *(_DWORD*)(result + 8) |= a2;
  return result;
}

__int64 StartInfoNX_Unknown4(__int64 result)
{
  *(_DWORD*)(result + 308) = 2;
  *(_BYTE*)(result + 316) = 1;
  return result;
}

__int64 StartInfoNX_Unknown8(__int64 a1)
{
  __int64 result;

  result = (*(__int64 (**)(__int64))(*(_QWORD*)snd_target_s_platform + 160LL))(
      snd_target_s_platform);
  if ((_DWORD)result != -1) {
    *(_DWORD*)(a1 + 20) = result;
  }
  return result;
}

__int64 StartInfoNX_14b920() { return snd_target_s_platform; }

__int64 StartInfoNX_Unknown11(__int64 a1, __int64 a2)
{
  __int64 result;

  result = (*(__int64 (**)(__int64, _QWORD, _QWORD, _QWORD))(
      *(_QWORD*)snd_target_s_platform + 232LL))(
      snd_target_s_platform, *(unsigned int*)(*(_QWORD*)(a2 + 5664) + 24LL),
      *(unsigned int*)(*(_QWORD*)(a2 + 5664) + 8LL),
      *(_QWORD*)(*(_QWORD*)(a2 + 5664) + 16LL));
  if ((result & 1) != 0) {
    *(_QWORD*)(a1 + 96) = StartInfoNX_14bbe0;
    *(_QWORD*)(a1 + 104) = a2;
  }
  return result;
}

__int64 StartInfoNX_14bbe0(_DWORD* a1, _DWORD* a2)
{
  int v2;

  v2 = a2[1483];
  if (v2 < 0) {
    return 0;
  }
  *a1 = v2;
  a2[1482] = v2;
  (*(void (**)(_DWORD*, __int64))(*(_QWORD*)a2 + 720LL))(a2, 0xFFFFFFFFLL);
  return 1;
}

__int64 StartInfoNX_Unknown14(__int64 result)
{
  *(_BYTE*)(result + 324) = 0;
  *(_DWORD*)(result + 320) = 1;
  return result;
}

__int64 StartInfoNX_Unknown15(__int64 a1, __int64 a2)
{
  __int64 result;
  float v5;
  _QWORD* v6;
  __int64 v7;
  float v8;
  __int64 v9;

  result = (*(__int64 (**)(__int64, _QWORD, _QWORD, _QWORD))(
      *(_QWORD*)snd_target_s_platform + 232LL))(
      snd_target_s_platform, *(unsigned int*)(a2 + 5768),
      *(unsigned int*)(a2 + 5772), *(_QWORD*)(a2 + 5776));
  if ((result & 1) != 0) {
    v6 = *(_QWORD**)(a2 + 5672);
    v7 = snd_fnd_WeakHandle_get(*v6 + 24LL, v5);
    *(_QWORD*)(a1 + 72) = (*(__int64 (**)(__int64))(*(_QWORD*)v7 + 72LL))(v7);
    v9 = snd_fnd_WeakHandle_get(*v6 + 24LL, v8);
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v9 + 80LL))(v9);
    *(_QWORD*)(a1 + 88) = (unsigned int)result;
  }
  return result;
}

__int64 StartInfoNX_Unknown16(__int64* a1)
{
  __int64 result;
  const char* v3;
  __int64* v4;
  _QWORD* v5;
  const char* v6;
  const char* v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  char* v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  char* v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  struct {
    _QWORD v21[2];
    void* v22;
  } v21_;
  void* v23[3];
  struct {
    __int64 v24;
    unsigned __int64 v25;
    char* v26;
  } v24_;

  result = (*(__int64 (**)(__int64))(*(_QWORD*)snd_target_s_platform + 200LL))(
      snd_target_s_platform);
  if (result != 0) {
    v3 = (const char*)result;
    v4 = a1 + 47;
    v5 = (_QWORD*)snd_g_proxy_ptr[0];
    v6 = (const char*)(*(__int64 (**)(_QWORD))(
        **(_QWORD**)snd_g_proxy_ptr[0] + 128LL))(*(_QWORD*)snd_g_proxy_ptr[0]);
    v7 = (const char*)(*(__int64 (**)(_QWORD))(*(_QWORD*)*v5 + 136LL))(*v5);
    GameRoutine_a392e0((__int64)(a1 + 47), (__int64)"%s%s%s", v6, v7, v3);
    v8 = *v5;
    v9 = GameRoutine_190240((__int64)(a1 + 47));
    v10 = strlen(v9);
    if (v10 >= 0xFFFFFFFFFFFFFFF7LL) {
      String_60a1d0();
    }
    v11 = v10;
    if (v10 >= 0x17) {
      if ((v10 | 7) == 0x17) {
        v13 = 26;
      }
      else {
        v13 = (v10 | 7) + 1;
      }
      v12 = (char*)GameRoutine_651190(v13);
      v21_.v21[1] = v11;
      v21_.v22 = v12;
      v21_.v21[0] = v13 | 1;
    }
    else {
      LOBYTE(v21_.v21[0]) = 2 * v10;
      v12 = (char*)v21_.v21 + 1;
      if (v10 == 0) {
      LABEL_11:
        v12[v11] = 0;
        (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64, _QWORD*))(
            *(_QWORD*)v8 + 184LL))((void*)(v23), v8, v21_.v21);
        GameRoutine_190120(&v24_.v24, (unsigned __int8*)v23);
        if (v4 == &v24_.v24) {
          if ((*(_BYTE*)v4 & 1) != 0) {
            (*(void (**)(_QWORD, __int64))(**(_QWORD**)snd_g_memory_ptr[0] +
                                           24LL))(*snd_g_memory_ptr[0], a1[49]);
          }
          v15 = v24_.v24;
          v16 = v24_.v25;
          LOWORD(v24_.v24) = 0;
          *v4 = v15;
          a1[48] = v16;
          a1[49] = (__int64)v24_.v26;
        }
        else if ((*(_BYTE*)v4 & 1) != 0) {
          if ((v24_.v24 & 1) != 0) {
            v17 = v24_.v26;
          }
          else {
            v17 = (char*)&v24_.v24 + 1;
          }
          if ((v24_.v24 & 1) != 0) {
            v18 = v24_.v25;
          }
          else {
            v18 = (unsigned __int64)(unsigned __int8)v24_.v24 >> 1;
          }
          GameRoutine_a3a260(a1 + 47, (__int64)v17, v18);
          if ((v24_.v24 & 1) != 0) {
            goto LABEL_26;
          }
        }
        else {
          if ((v24_.v24 & 1) == 0) {
            v14 = v24_.v25;
            *v4 = v24_.v24;
            a1[48] = v14;
            a1[49] = (__int64)v24_.v26;
            if ((v24_.v24 & 1) == 0) {
              goto LABEL_27;
            }
          LABEL_26:
            (*(void (**)(_QWORD, char*))(**(_QWORD**)snd_g_memory_ptr[0] +
                                         24LL))(*snd_g_memory_ptr[0], v24_.v26);
            goto LABEL_27;
          }
          GameRoutine_a3a3a0(a1 + 47, (__int64)v24_.v26, v24_.v25);
          if ((v24_.v24 & 1) != 0) {
            goto LABEL_26;
          }
        }
      LABEL_27:
        if (((__int64)v23[0] & 1) != 0) {
          GameRoutine_651250_alt1(v23[2]);
          if ((v21_.v21[0] & 1) == 0) {
            goto LABEL_30;
          }
        }
        else if ((v21_.v21[0] & 1) == 0) {
        LABEL_30:
          v19 = GameRoutine_190240((__int64)(a1 + 47));
          v20 = *a1;
          a1[8] = v19;
          return (*(__int64 (**)(__int64*, __int64))(v20 + 24))(a1, 32);
        }
        GameRoutine_651250_alt1(v21_.v22);
        goto LABEL_30;
      }
    }
    memmove(v12, v9, v11);
    goto LABEL_11;
  }
  return result;
}

__int64 StartInfoNX_Destructor(__int64 result)
{
  *(_QWORD*)result = snd_target_StartInfoNX_vtable;
  if ((*(_BYTE*)(result + 376) & 1) != 0) {
    return (*(__int64 (**)(_QWORD, _QWORD))(**(_QWORD**)snd_g_memory_ptr[0] +
                                            24LL))(*snd_g_memory_ptr[0],
                                                   *(_QWORD*)(result + 392));
  }
  return result;
}

void StartInfoNX_DeletingDestructor(_QWORD* a1)
{
  _QWORD* v1;

  *a1 = snd_target_StartInfoNX_vtable;
  if ((a1[47] & 1) != 0) {
    v1 = a1;
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD, _QWORD))(
        **(_QWORD**)snd_g_memory_ptr[0] + 24LL))(
        (void*)*(_QWORD**)snd_g_memory_ptr[0], *snd_g_memory_ptr[0], a1[49]);
    a1 = v1;
  }
  GameRoutine_651250(a1, 0x190u);
}

#pragma GCC visibility pop
