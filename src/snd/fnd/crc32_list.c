#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 Crc32List_1187c0(_QWORD);
__int64 GameRoutine_104640(_QWORD);
__int64 GameRoutine_10ab80(__int64);
__int64 GameRoutine_10df60(_QWORD);
__int64 GameRoutine_10e820(__int64);
__int64 GameRoutine_110270(_QWORD);
__int64 GameRoutine_112550(__int64, __int64, __int64, unsigned int,
                           unsigned int);
__int64 GameRoutine_113100(void);
__int64 GameRoutine_127e30(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD, _QWORD);
__int64 GameRoutine_128110(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_132040(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_13e430(_QWORD);
__int64 GameRoutine_13ed60(_QWORD, _QWORD);
__int64 GameRoutine_13fe10(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_140240(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_144a10(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD, _QWORD);
__int64 GameRoutine_144cb0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_144f50(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_17ac60(_QWORD);
__int64 GameRoutine_18e190(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD, _QWORD);
__int64 GameRoutine_18e380(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_18e630(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_190aa0(_QWORD);
__int64 GameRoutine_651190(unsigned __int64);
__int64 GameRoutine_a1efd0(__int64);
__int64 GameRoutine_f57c0(int*);
__int64 GameRoutine_f63e0(int*);
__int64 GameRoutine_f6cc0(int*);
__int64 GameRoutine_f7640(__int64);
__int64 nn_diag_detail_AbortImpl_1a0a590(_QWORD);
__int64 nn_os_FinalizeMutex(_QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_TryLockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__int64 snd_Voice_isDead(_QWORD);
__int64 snd_data_getSettingData(_QWORD);
__int64 snd_fnd_WeakHandle_get(_QWORD, float);
__int64 snd_fnd_WeakHandle_isValid(_QWORD);
extern __int16 GameData_2198f28;
extern __int16 GameData_2198f48;
extern __int16* GameData_2134648[7];
extern __int16* GameData_2134650[6];
extern __int64 (*GameData_1f55620[])();
extern __int64 (*GameData_1f556a0[])();
extern __int64 (*GameData_1f55730[])();
extern __int64 (*GameData_1f557b0[])();
extern __int64 (*GameData_1f55830[])();
extern __int64 (*GameData_1f558b0[])();
extern __int64 (*GameData_1f55930[])();
extern __int64 (*GameData_1f559b0[])();
extern __int64 (*GameData_1f55a30[])();
extern __int64 (*GameData_1f55ab0[])();
extern __int64 (*GameData_1f55b30[])();
extern __int64 (*GameData_1f55bb0[])();
extern __int64 (*GameData_1f55c30[])();
extern __int64 (*GameData_1f55cb0[])();
extern __int64 (*GameData_1f55d30[])();
extern __int64 (*GameData_1f55dc0[])();
extern __int64 (*GameData_1f55e40[])();
extern __int64 (*GameData_1f55ec0[])();
extern __int64 (*GameData_1f56740[])();
extern __int64 (*GameData_1f567c0[])();
extern __int64 (*GameData_1f56840[])();
extern __int64 (*GameData_1f568c0[])();
extern __int64 (*GameData_1f56ac0[])();
extern __int64 (*GameData_1f56b40[])();
extern __int64 (*GameData_1f56f50[])();
extern __int64 (*GameData_1f57160[])();
extern __int64 (*snd_fnd_Crc32List_List_vtable[])();
extern __int64 snd_g_manager;
extern __int64 snd_g_memory;
extern __int64 snd_g_proxy;
extern __int64 snd_s_target;
extern __int64* GameData_2134570[27];
extern __int64* snd_g_manager_ptr[4];
extern __int64* snd_g_memory_ptr[2];
extern __int64* snd_s_target_ptr;
void GameRoutine_651250(void*, unsigned __int64);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD, _QWORD);
__int64 Crc32List_Destructor(__int64 a1);
__int64 Crc32List_1130e0(__int64 result);
__int64 Crc32List_116350();
__int64 Crc32List_11d8b0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                         float* a5, __int64 a6);
__int64 Crc32List_116570(__int64 a1, __int64 a2, __int64 a3, __int64 a4);
__int64 Crc32List_116660(_QWORD* a1);
_QWORD* Crc32List_1168a0(__int64** a1, __int64 a2, __int64 a3);
_QWORD* Crc32List_1170c0(__int64 a1, __int64 a2, __int64 a3);
__int64 Crc32List_117a00(_QWORD* a1);
__int64 Crc32List_118060(__int64 a1, __int64 a2, __int64 a3, __int64 a4);
__int64 Crc32List_118120(__int64 a1, __int64 a2, __int64 a3, unsigned int a4,
                         unsigned int a5);
__int64 Crc32List_118700(__int64 a1);
__int64 Crc32List_118980(__int64 a1, void (***a2)(_QWORD));
__int64 Crc32List_118b20(__int64 a1, void (***a2)(_QWORD));
__int64 Crc32List_118c10(__int64 a1, void (***a2)(_QWORD));
__int64 Crc32List_118d80(__int64 a1, __int64 a2, __int64 a3);
__int64 Crc32List_118df0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                         __int64 a5);
__int64 Crc32List_118e90(__int64 a1, __int64 a2, __int64 a3);
_QWORD* Crc32List_118f90(__int64 a1, float a2);
__int64 Crc32List_119790(__int64 a1, int* a2);
__int64 Crc32List_119830(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                         __int64 a5, __int64 a6, __int64 a7, __int64 a8);
__int64 Crc32List_119920(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                         __int64 a5, __int64 a6, __int64 a7, __int64 a8);
__int64 Crc32List_119a10(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                         __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                         __int64 a9);
__int64 Crc32List_119b10(__int64 a1);
__int64 Crc32List_11a290(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                         __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                         __int64 a9);
__int64 Crc32List_11a390(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                         __int64 a5, __int64 a6, __int64 a7, __int64 a8);
__int64 Crc32List_11a480(__int64 a1);
__int64 Crc32List_11acf0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                         __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                         __int64 a9);
__int64 Crc32List_11adf0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                         __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                         __int64 a9);
__int64 Crc32List_11aef0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                         __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                         __int64 a9, __int64 a10);
__int64 Crc32List_11aff0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                         __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                         __int64 a9);
__int64 Crc32List_11b0f0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                         __int64 a5, __int64 a6, __int64 a7, __int64 a8);
__int64 Crc32List_11b1e0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                         __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                         __int64 a9);
__int64 Crc32List_11b2e0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                         __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                         __int64 a9);
__int64 Crc32List_11b3e0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                         __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                         __int64 a9, __int64 a10);
__int64 Crc32List_11b4e0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                         __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                         __int64 a9, __int64 a10);
__int64 Crc32List_11b5e0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                         __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                         __int64 a9);
__int64 Crc32List_11c100(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                         __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                         __int64 a9);
__int64 Crc32List_11c230(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                         __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                         __int64 a9);
__int64 Crc32List_11c330(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                         __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                         __int64 a9);
__int64 Crc32List_11c460(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                         __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                         __int64 a9);
__int64 Crc32List_11dfe0_alt1(__int64 a1, __int64 a2, __int64 a3,
                              char a4) __asm__("Crc32List_11dfe0");
__int64 Crc32List_11e2f0_alt1(__int64 a1, __int64 a2,
                              __int64 a3) __asm__("Crc32List_11e2f0");
__int64 Crc32List_11e370_alt1(__int64 a1,
                              __int64 a2) __asm__("Crc32List_11e370");
__int64 Crc32List_11e6a0(__int64 a1, int a2);
__int64 Crc32List_11ec20(__int64 a1, __int64 a2, float a3);
__int64 Crc32List_11ed40(__int64 a1, int* a2);
__int64 Crc32List_11f420(__int64 a1, __int64* a2);
__int64 Crc32List_120360();
void Crc32List_DeletingDestructor(_QWORD* a1);
__int64 Crc32List_10ab80(__int64);
__int64 Crc32List_17ac60(__int64 result);
__int64 nn_os_LockMutex_alt1(__int64) __asm__("nn_os_LockMutex");
__int64 nn_os_TryLockMutex_alt1(__int64) __asm__("nn_os_TryLockMutex");
__int64 nn_os_UnlockMutex_alt1(__int64) __asm__("nn_os_UnlockMutex");
__int64 snd_10e820(__int64);
__int64 snd_Voice_isDead_alt1(__int64) __asm__("snd_Voice_isDead");
__int64 snd_fnd_WeakHandle_get_alt1(__int64) __asm__("snd_fnd_WeakHandle_get");
__int64
snd_fnd_WeakHandle_isValid_alt1(__int64*) __asm__("snd_fnd_WeakHandle_isValid");
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
__int64 Crc32List_11dfe0(__int64 a1, __int64* a2, __int64 a3, char a4);
__int64 Crc32List_11e2f0(__int64 a1, __int64* a2, __int64 a3);
__int64 Crc32List_11e370(__int64 a1, __int64* a2);

__int64 Crc32List_Destructor(__int64 a1)
{
  __int64 v2;

  v2 = *(_QWORD*)(a1 + 16);
  *(_QWORD*)a1 = GameData_2134570[0] + 2;
  if (*(_BYTE*)(a1 + 64) == 1) {
    if (v2 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)snd_g_memory + 24LL))(snd_g_memory);
      *(_QWORD*)(a1 + 16) = 0;
    }
    *(_BYTE*)(a1 + 64) = 0;
    *(_QWORD*)(a1 + 8) = snd_fnd_Crc32List_List_vtable;
  }
  else {
    *(_QWORD*)(a1 + 8) = snd_fnd_Crc32List_List_vtable;
    if (v2 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)snd_g_memory + 24LL))(snd_g_memory);
      *(_QWORD*)(a1 + 16) = 0;
      return nn_os_FinalizeMutex(a1 + 32);
    }
  }
  return nn_os_FinalizeMutex(a1 + 32);
}

__int64 Crc32List_1130e0(__int64 result)
{
  snd_g_proxy = result;
  return result;
}

__int64 Crc32List_116350()
{
  __int64 v0;

  v0 = (*(__int64 (**)(_QWORD, __int64, __int64))(
      **(_QWORD**)snd_g_memory_ptr[0] + 16LL))(*snd_g_memory_ptr[0], 4352, 32);
  GameRoutine_113100();
  *snd_g_manager_ptr[0] = v0;
  return v0;
}

__int64 Crc32List_1163b0() { return snd_g_manager; }

__int64 Crc32List_116570(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v8;
  unsigned int v9;
  __int64 v10;
  __int64 v11;
  unsigned int v12;
  __int64 v13;
  __int64 v15;

  nn_os_LockMutex(a1 + 40);
  nn_os_LockMutex(a1 + 40);
  v8 = *(unsigned __int16*)(a1 + 32);
  v9 = *(unsigned __int16*)(a1 + 34);
  nn_os_UnlockMutex(a1 + 40);
  if (v8 >= v9) {
    v15 = GameRoutine_a1efd0(a1 + 40);
    nn_diag_detail_AbortImpl_1a0a590(v15);
    __udf(0);
  }
  v10 = *(unsigned __int16*)(a1 + 32);
  v11 = *(_QWORD*)(a1 + 24);
  v12 = *(unsigned __int16*)(v11 + 2 * v10);
  *(_WORD*)(a1 + 32) = v10 + 1;
  *(_WORD*)(v11 + 2 * v10) = -1;
  v13 = *(_QWORD*)(a1 + 16) + 5976LL * v12;
  nn_os_UnlockMutex(a1 + 40);
  GameRoutine_132040(v13, a2, a3, a4);
  return v13;
}

__int64 Crc32List_116660(_QWORD* a1)
{
  __int64* v2;
  _QWORD* v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  struct {
    _QWORD v20[4];
    _QWORD* v21;
  } v20_;
  struct {
    _QWORD v22[4];
    _QWORD* v23;
  } v22_;
  __int64 v24;

  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v2 = snd_s_target_ptr;
  (*(void (**)(_QWORD))(*(_QWORD*)*snd_s_target_ptr + 64LL))(*snd_s_target_ptr),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameRoutine_190aa0(a1[269]),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameRoutine_10df60(a1[270]),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  snd_10e820(a1[271]),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  Crc32List_10ab80(a1[272]),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  Crc32List_17ac60(a1[274]),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameRoutine_13e430(a1[273]),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameRoutine_104640(a1[268]),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameRoutine_110270(a1[267]),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64))(*(_QWORD*)*v2 + 48LL))(*v2),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v3 = v22_.v22;
  v22_.v22[0] = GameData_1f568c0;
  v4 = (__int64*)a1[5];
  v22_.v23 = v22_.v22;
  v5 = *v4;
  if (v5 != 0) {
    v6 = *(_QWORD*)(v5 + 5616);
    v3 = v22_.v22;
    v24 = v5;
    while (1) {
      (*(void (**)(_QWORD*, __int64*))(*v3 + 48LL))(v3, &v24),
          v13 = COERCE_AS(__typeof__(v13),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v8 = COERCE_AS(__typeof__(v8),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v3 = v22_.v23;
      if (v6 == 0) {
        break;
      }
      v24 = v6;
      v6 = *(_QWORD*)(v6 + 5616);
      if (v22_.v23 == nullptr) {
      LABEL_23:
        GameRoutine_60a310_alt1(),
            v13 = COERCE_AS(__typeof__(v13),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v8 = COERCE_AS(__typeof__(v8),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
    }
    if (v22_.v23 != v22_.v22) {
      if (v22_.v23 != nullptr) {
        v7 = 40;
      LABEL_10:
        (*(void (**)(__int64))(*v3 + v7))((__int64)v3),
            v13 = COERCE_AS(__typeof__(v13),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v8 = COERCE_AS(__typeof__(v8),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      nn_os_LockMutex_alt1((__int64)&GameData_2198f48),
          v13 = COERCE_AS(__typeof__(v13),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v8 = COERCE_AS(__typeof__(v8),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v9 = v20_.v20;
      v20_.v20[0] = GameData_1f55620;
      v20_.v20[1] = a1;
      v10 = (__int64*)a1[15];
      v20_.v21 = v20_.v20;
      v11 = *v10;
      if (*v10 != 0) {
        do {
          v22_.v22[0] = v11;
          v11 = *(_QWORD*)(v11 + 5616);
          if (v20_.v21 == nullptr) {
            goto LABEL_23;
          }
          (*(void (**)(_QWORD*, _QWORD*))(*v20_.v21 + 48LL))(v20_.v21,
                                                             v22_.v22),
              v13 = COERCE_AS(__typeof__(v13),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v8 = COERCE_AS(__typeof__(v8),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        } while (v11 != 0);
        v9 = v20_.v21;
        if (v20_.v21 != v20_.v20) {
          if (v20_.v21 != nullptr) {
            v12 = 40;
          LABEL_18:
            (*(void (**)(_QWORD*, __int64))(*v9 + v12))(v9, v8),
                v13 =
                    COERCE_AS(__typeof__(v13),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v8 = COERCE_AS(__typeof__(v8),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          nn_os_UnlockMutex_alt1((__int64)&GameData_2198f48),
              v13 = COERCE_AS(__typeof__(v13),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v8 = COERCE_AS(__typeof__(v8),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          nn_os_LockMutex_alt1((__int64)&GameData_2198f28),
              v13 = COERCE_AS(__typeof__(v13),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v8 = COERCE_AS(__typeof__(v8),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v14 = v22_.v22;
          v22_.v22[0] = GameData_1f57160;
          v15 = (__int64*)a1[5];
          v22_.v23 = v22_.v22;
          v16 = *v15;
          if (v16 != 0) {
            v17 = *(_QWORD*)(v16 + 5616);
            v14 = v22_.v22;
            v24 = v16;
            while (1) {
              (*(void (**)(_QWORD*, __int64*))(*v14 + 48LL))(v14, &v24),
                  v13 = COERCE_AS(
                      __typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v8 = COERCE_AS(
                      __typeof__(v8),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              v14 = v22_.v23;
              if (v17 == 0) {
                break;
              }
              v24 = v17;
              v17 = *(_QWORD*)(v17 + 5616);
              if (v22_.v23 == nullptr) {
                goto LABEL_23;
              }
            }
            if (v22_.v23 != v22_.v22) {
              if (v22_.v23 != nullptr) {
                v18 = 40;
              LABEL_28:
                (*(void (**)(_QWORD*, __int64))(*v14 + v18))(v14, v13),
                    v13 = COERCE_AS(
                        __typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v8 = COERCE_AS(
                        __typeof__(v8),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              }
              return nn_os_UnlockMutex_alt1((__int64)&GameData_2198f28);
            }
          }
          v18 = 32;
          goto LABEL_28;
        }
      }
      v12 = 32;
      goto LABEL_18;
    }
  }
  v7 = 32;
  goto LABEL_10;
}

_QWORD* Crc32List_1168a0(__int64** a1, __int64 a2, __int64 a3)
{
  __int64** v3;
  __int64 i;
  __int64 v5;
  __int64** v6;
  __int64 v7;
  _QWORD* v8;
  _QWORD* v9;
  __int64 v10;
  _QWORD* v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  __int64* v20;
  __int64 v21;
  __int64 v22;
  _QWORD* v23;
  __int64* v24;
  __int64 v25;
  __int64 v26;
  _QWORD* v27;
  __int64* v28;
  __int64 v29;
  __int64 v30;
  _QWORD* v31;
  __int64* v32;
  __int64 v33;
  __int64 v34;
  __int64* v35;
  _QWORD* v36;
  __int64 v37;
  __int64 v38;
  __int64* v39;
  _QWORD* v40;
  __int64 v41;
  __int64 v42;
  __int64* v43;
  _QWORD* v44;
  __int64 v45;
  __int64 v46;
  __int64* v47;
  _QWORD* v48;
  __int64 v49;
  __int64 v50;
  __int64* v51;
  _QWORD* v52;
  __int64 v53;
  _QWORD* v54;
  __int64 v55;
  __int64 v56;
  _QWORD* v57;
  __int64* v58;
  __int64 v59;
  __int64 v60;
  _QWORD* v61;
  __int64* v62;
  __int64 v63;
  __int64 v64;
  _QWORD* result;
  __int64* v66;
  __int64 v67;
  __int64 v68;
  _QWORD v70[4];
  _QWORD* v71;
  _QWORD v72[4];
  _QWORD* v73;
  _QWORD v74[4];
  _QWORD* v75;
  _QWORD v76[4];
  _QWORD* v77;
  _QWORD v78[4];
  _QWORD* v79;
  _QWORD v80[4];
  _QWORD* v81;
  _QWORD v82[4];
  _QWORD* v83;
  _QWORD v84[4];
  _QWORD* v85;
  _QWORD v86[4];
  _QWORD* v87;
  _QWORD v88[4];
  _QWORD* v89;
  _QWORD v90[4];
  _QWORD* v91;
  _QWORD v92[4];
  _QWORD* v93;
  _QWORD v94[4];
  _QWORD* v95;
  _QWORD v96[4];
  _QWORD* v97;
  _QWORD v98[4];
  _QWORD* v99;
  _QWORD v100[4];
  _QWORD* v101;
  _QWORD v102[2];

  v3 = a1 + 22;
  for (i = 0; i != 4; ++i) {
    v101 = v100;
    v6 = &v3[60 * i];
    v100[0] = GameData_1f556a0;
    v7 = *v6[3];
    if (v7 == 0) {
      v9 = v100;
    LABEL_12:
      v10 = 32;
    LABEL_13:
      (*(void (**)(void*))(*v9 + v10))(v9);
      goto LABEL_14;
    }
    do {
      v102[0] = v7;
      v7 = *(_QWORD*)(v7 + 5616);
      v8 = v101;
      if (v101 == nullptr) {
      LABEL_133:
        GameRoutine_60a310(v8, a2, a3);
      }
      (*(void (**)(_QWORD*, _QWORD*))(*v101 + 48LL))(v101, v102);
    } while (v7 != 0);
    v9 = v101;
    if (v101 == v100) {
      goto LABEL_12;
    }
    if (v101 != nullptr) {
      v10 = 40;
      goto LABEL_13;
    }
  LABEL_14:
    v11 = v98;
    v98[0] = GameData_1f55730;
    v12 = v6[8];
    v99 = v98;
    v13 = *v12;
    if (*v12 == 0) {
      goto LABEL_20;
    }
    do {
      v102[0] = v13;
      v13 = *(_QWORD*)(v13 + 5616);
      v8 = v99;
      if (v99 == nullptr) {
        goto LABEL_133;
      }
      (*(void (**)(_QWORD*, _QWORD*))(*v99 + 48LL))(v99, v102);
    } while (v13 != 0);
    v11 = v99;
    if (v99 == v98) {
    LABEL_20:
      v14 = 32;
      goto LABEL_21;
    }
    if (v99 != nullptr) {
      v14 = 40;
    LABEL_21:
      (*(void (**)(void*))(*v11 + v14))(v11);
    }
    v15 = v96;
    v96[0] = GameData_1f557b0;
    v16 = v6[13];
    v97 = v96;
    v17 = *v16;
    if (*v16 == 0) {
      goto LABEL_28;
    }
    do {
      v102[0] = v17;
      v17 = *(_QWORD*)(v17 + 5616);
      v8 = v97;
      if (v97 == nullptr) {
        goto LABEL_133;
      }
      (*(void (**)(_QWORD*, _QWORD*))(*v97 + 48LL))(v97, v102);
    } while (v17 != 0);
    v15 = v97;
    if (v97 == v96) {
    LABEL_28:
      v18 = 32;
      goto LABEL_29;
    }
    if (v97 != nullptr) {
      v18 = 40;
    LABEL_29:
      (*(void (**)(void*))(*v15 + v18))(v15);
    }
    v19 = v94;
    v94[0] = GameData_1f55830;
    v20 = v6[18];
    v95 = v94;
    v21 = *v20;
    if (*v20 == 0) {
      goto LABEL_36;
    }
    do {
      v102[0] = v21;
      v21 = *(_QWORD*)(v21 + 5616);
      v8 = v95;
      if (v95 == nullptr) {
        goto LABEL_133;
      }
      (*(void (**)(_QWORD*, _QWORD*))(*v95 + 48LL))(v95, v102);
    } while (v21 != 0);
    v19 = v95;
    if (v95 == v94) {
    LABEL_36:
      v22 = 32;
      goto LABEL_37;
    }
    if (v95 != nullptr) {
      v22 = 40;
    LABEL_37:
      (*(void (**)(void*))(*v19 + v22))(v19);
    }
    v23 = v92;
    v92[0] = GameData_1f558b0;
    v24 = v6[23];
    v93 = v92;
    v25 = *v24;
    if (*v24 == 0) {
      goto LABEL_44;
    }
    do {
      v102[0] = v25;
      v25 = *(_QWORD*)(v25 + 5616);
      v8 = v93;
      if (v93 == nullptr) {
        goto LABEL_133;
      }
      (*(void (**)(_QWORD*, _QWORD*))(*v93 + 48LL))(v93, v102);
    } while (v25 != 0);
    v23 = v93;
    if (v93 == v92) {
    LABEL_44:
      v26 = 32;
      goto LABEL_45;
    }
    if (v93 != nullptr) {
      v26 = 40;
    LABEL_45:
      (*(void (**)(void*))(*v23 + v26))(v23);
    }
    v27 = v90;
    v90[0] = GameData_1f55930;
    v28 = v6[28];
    v91 = v90;
    v29 = *v28;
    if (*v28 == 0) {
      goto LABEL_52;
    }
    do {
      v102[0] = v29;
      v29 = *(_QWORD*)(v29 + 5616);
      v8 = v91;
      if (v91 == nullptr) {
        goto LABEL_133;
      }
      (*(void (**)(_QWORD*, _QWORD*))(*v91 + 48LL))(v91, v102);
    } while (v29 != 0);
    v27 = v91;
    if (v91 == v90) {
    LABEL_52:
      v30 = 32;
      goto LABEL_53;
    }
    if (v91 != nullptr) {
      v30 = 40;
    LABEL_53:
      (*(void (**)(void*))(*v27 + v30))(v27);
    }
    v31 = v88;
    v88[0] = GameData_1f559b0;
    v32 = v6[33];
    v89 = v88;
    v33 = *v32;
    if (*v32 == 0) {
      goto LABEL_60;
    }
    do {
      v102[0] = v33;
      v33 = *(_QWORD*)(v33 + 5616);
      v8 = v89;
      if (v89 == nullptr) {
        goto LABEL_133;
      }
      (*(void (**)(_QWORD*, _QWORD*))(*v89 + 48LL))(v89, v102);
    } while (v33 != 0);
    v31 = v89;
    if (v89 == v88) {
    LABEL_60:
      v34 = 32;
      goto LABEL_61;
    }
    if (v89 != nullptr) {
      v34 = 40;
    LABEL_61:
      (*(void (**)(void*))(*v31 + v34))(v31);
    }
    v35 = v6[38];
    v36 = v86;
    v86[0] = GameData_1f55a30;
    v87 = v86;
    v37 = *v35;
    if (*v35 == 0) {
      goto LABEL_68;
    }
    do {
      v102[0] = v37;
      v37 = *(_QWORD*)(v37 + 5616);
      v8 = v87;
      if (v87 == nullptr) {
        goto LABEL_133;
      }
      (*(void (**)(_QWORD*, _QWORD*))(*v87 + 48LL))(v87, v102);
    } while (v37 != 0);
    v36 = v87;
    if (v87 == v86) {
    LABEL_68:
      v38 = 32;
      goto LABEL_69;
    }
    if (v87 != nullptr) {
      v38 = 40;
    LABEL_69:
      (*(void (**)(void*))(*v36 + v38))(v36);
    }
    v39 = v6[43];
    v40 = v84;
    v84[0] = GameData_1f55ab0;
    v85 = v84;
    v41 = *v39;
    if (*v39 == 0) {
      goto LABEL_76;
    }
    do {
      v102[0] = v41;
      v41 = *(_QWORD*)(v41 + 5616);
      v8 = v85;
      if (v85 == nullptr) {
        goto LABEL_133;
      }
      (*(void (**)(_QWORD*, _QWORD*))(*v85 + 48LL))(v85, v102);
    } while (v41 != 0);
    v40 = v85;
    if (v85 == v84) {
    LABEL_76:
      v42 = 32;
      goto LABEL_77;
    }
    if (v85 != nullptr) {
      v42 = 40;
    LABEL_77:
      (*(void (**)(void*))(*v40 + v42))(v40);
    }
    v43 = v6[48];
    v44 = v82;
    v82[0] = GameData_1f55b30;
    v83 = v82;
    v45 = *v43;
    if (*v43 == 0) {
      goto LABEL_84;
    }
    do {
      v102[0] = v45;
      v45 = *(_QWORD*)(v45 + 5616);
      v8 = v83;
      if (v83 == nullptr) {
        goto LABEL_133;
      }
      (*(void (**)(_QWORD*, _QWORD*))(*v83 + 48LL))(v83, v102);
    } while (v45 != 0);
    v44 = v83;
    if (v83 == v82) {
    LABEL_84:
      v46 = 32;
      goto LABEL_85;
    }
    if (v83 != nullptr) {
      v46 = 40;
    LABEL_85:
      (*(void (**)(void*))(*v44 + v46))(v44);
    }
    v47 = v6[53];
    v48 = v80;
    v80[0] = GameData_1f55bb0;
    v81 = v80;
    v49 = *v47;
    if (*v47 == 0) {
      goto LABEL_92;
    }
    do {
      v102[0] = v49;
      v49 = *(_QWORD*)(v49 + 5616);
      v8 = v81;
      if (v81 == nullptr) {
        goto LABEL_133;
      }
      (*(void (**)(_QWORD*, _QWORD*))(*v81 + 48LL))(v81, v102);
    } while (v49 != 0);
    v48 = v81;
    if (v81 == v80) {
    LABEL_92:
      v50 = 32;
      goto LABEL_93;
    }
    if (v81 != nullptr) {
      v50 = 40;
    LABEL_93:
      (*(void (**)(void*))(*v48 + v50))(v48);
    }
    v51 = v6[58];
    v52 = v78;
    v78[0] = GameData_1f55c30;
    v79 = v78;
    v53 = *v51;
    if (*v51 == 0) {
      goto LABEL_2;
    }
    do {
      v102[0] = v53;
      v53 = *(_QWORD*)(v53 + 5616);
      v8 = v79;
      if (v79 == nullptr) {
        goto LABEL_133;
      }
      (*(void (**)(_QWORD*, _QWORD*))(*v79 + 48LL))(v79, v102);
    } while (v53 != 0);
    v52 = v79;
    if (v79 == v78) {
    LABEL_2:
      v5 = 32;
    LABEL_3:
      (*(void (**)(void*))(*v52 + v5))(v52);
      continue;
    }
    if (v79 != nullptr) {
      v5 = 40;
      goto LABEL_3;
    }
  }
  v54 = v76;
  v76[0] = GameData_1f55cb0;
  v77 = v76;
  v55 = *a1[265];
  if (v55 == 0) {
    goto LABEL_106;
  }
  do {
    v102[0] = v55;
    v55 = *(_QWORD*)(v55 + 5616);
    v8 = v77;
    if (v77 == nullptr) {
      goto LABEL_133;
    }
    (*(void (**)(_QWORD*, _QWORD*))(*v77 + 48LL))(v77, v102);
  } while (v55 != 0);
  v54 = v77;
  if (v77 == v76) {
  LABEL_106:
    v56 = 32;
  LABEL_107:
    (*(void (**)(void*))(*v54 + v56))(v54);
  }
  else if (v77 != nullptr) {
    v56 = 40;
    goto LABEL_107;
  }
  v57 = v74;
  v74[0] = GameData_1f55d30;
  v58 = a1[20];
  v75 = v74;
  v59 = *v58;
  if (*v58 == 0) {
    goto LABEL_114;
  }
  do {
    v102[0] = v59;
    v59 = *(_QWORD*)(v59 + 5616);
    v8 = v75;
    if (v75 == nullptr) {
      goto LABEL_133;
    }
    (*(void (**)(_QWORD*, _QWORD*))(*v75 + 48LL))(v75, v102);
  } while (v59 != 0);
  v57 = v75;
  if (v75 == v74) {
  LABEL_114:
    v60 = 32;
  LABEL_115:
    (*(void (**)(void*))(*v57 + v60))(v57);
  }
  else if (v75 != nullptr) {
    v60 = 40;
    goto LABEL_115;
  }
  v61 = v72;
  v72[0] = GameData_1f55dc0;
  v62 = a1[10];
  v73 = v72;
  v63 = *v62;
  if (*v62 == 0) {
    goto LABEL_122;
  }
  do {
    v102[0] = v63;
    v63 = *(_QWORD*)(v63 + 5616);
    v8 = v73;
    if (v73 == nullptr) {
      goto LABEL_133;
    }
    (*(void (**)(_QWORD*, _QWORD*))(*v73 + 48LL))(v73, v102);
  } while (v63 != 0);
  v61 = v73;
  if (v73 == v72) {
  LABEL_122:
    v64 = 32;
  LABEL_123:
    (*(void (**)(void*))(*v61 + v64))(v61);
  }
  else if (v73 != nullptr) {
    v64 = 40;
    goto LABEL_123;
  }
  result = v70;
  v70[0] = GameData_1f55e40;
  v66 = a1[5];
  v71 = v70;
  v67 = *v66;
  if (*v66 == 0) {
    goto LABEL_130;
  }
  do {
    v102[0] = v67;
    v67 = *(_QWORD*)(v67 + 5616);
    v8 = v71;
    if (v71 == nullptr) {
      goto LABEL_133;
    }
    (*(void (**)(_QWORD*, _QWORD*))(*v71 + 48LL))(v71, v102);
  } while (v67 != 0);
  result = v71;
  if (v71 == v70) {
  LABEL_130:
    v68 = 32;
    return (_QWORD*)(*(__int64 (**)(void*))(*result + v68))(result);
  }
  else if (v71 != nullptr) {
    v68 = 40;
    return (_QWORD*)(*(__int64 (**)(void*))(*result + v68))(result);
  }
  return result;
}

_QWORD* Crc32List_1170c0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64* v3;
  _QWORD* result;
  __int64 v5;
  __int64 v6;
  _QWORD v7[4];
  _QWORD* v8;
  __int64 v9;

  v3 = *(__int64**)(a1 + 40);
  result = v7;
  v7[0] = GameData_1f55ec0;
  v8 = v7;
  v5 = *v3;
  if (*v3 == 0) {
    goto LABEL_7;
  }
  do {
    v9 = v5;
    v5 = *(_QWORD*)(v5 + 5616);
    if (v8 == nullptr) {
      GameRoutine_60a310(0, a2, a3);
    }
    (*(void (**)(_QWORD*, __int64*))(*v8 + 48LL))(v8, &v9);
  } while (v5 != 0);
  result = v8;
  if (v8 == v7) {
  LABEL_7:
    v6 = 32;
  }
  else {
    if (v8 == nullptr) {
      return result;
    }
    v6 = 40;
  }
  return (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + v6))(result);
}

__int64 Crc32List_117a00(_QWORD* a1)
{
  __int64 result;
  _QWORD* v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  struct {
    _QWORD v15[4];
    _QWORD* v16;
  } v15_;
  struct {
    _QWORD v17[4];
    _QWORD* v18;
  } v17_;
  struct {
    _QWORD v19[4];
    _QWORD* v20;
  } v19_;
  __int64 v21;

  result = nn_os_TryLockMutex_alt1(a1[267] + 96LL);
  if ((result & 1) != 0) {
    v3 = v19_.v19;
    v19_.v19[0] = GameData_1f56740;
    v4 = (__int64*)a1[20];
    v19_.v20 = v19_.v19;
    v5 = *v4;
    if (*v4 == 0) {
      goto LABEL_8;
    }
    do {
      v21 = v5;
      v5 = *(_QWORD*)(v5 + 5616);
      if (v19_.v20 == nullptr) {
      LABEL_28:
        GameRoutine_60a310_alt1();
      }
      (*(void (**)(_QWORD*, __int64*))(*v19_.v20 + 48LL))(v19_.v20, &v21);
    } while (v5 != 0);
    v3 = v19_.v20;
    if (v19_.v20 == v19_.v19) {
    LABEL_8:
      v6 = 32;
    }
    else {
      if (v19_.v20 == nullptr) {
      LABEL_10:
        v7 = v17_.v17;
        v17_.v17[0] = GameData_1f567c0;
        v8 = (__int64*)a1[10];
        v17_.v18 = v17_.v17;
        v9 = *v8;
        if (*v8 == 0) {
          goto LABEL_16;
        }
        do {
          v21 = v9;
          v9 = *(_QWORD*)(v9 + 5616);
          if (v17_.v18 == nullptr) {
            goto LABEL_28;
          }
          (*(void (**)(_QWORD*, __int64*))(*v17_.v18 + 48LL))(v17_.v18, &v21);
        } while (v9 != 0);
        v7 = v17_.v18;
        if (v17_.v18 == v17_.v17) {
        LABEL_16:
          v10 = 32;
        }
        else {
          if (v17_.v18 == nullptr) {
          LABEL_18:
            v11 = v15_.v15;
            v15_.v15[0] = GameData_1f56840;
            v12 = (__int64*)a1[5];
            v15_.v16 = v15_.v15;
            v13 = *v12;
            if (*v12 == 0) {
              goto LABEL_24;
            }
            do {
              v21 = v13;
              v13 = *(_QWORD*)(v13 + 5616);
              if (v15_.v16 == nullptr) {
                goto LABEL_28;
              }
              (*(void (**)(_QWORD*, __int64*))(*v15_.v16 + 48LL))(v15_.v16,
                                                                  &v21);
            } while (v13 != 0);
            v11 = v15_.v16;
            if (v15_.v16 == v15_.v15) {
            LABEL_24:
              v14 = 32;
            }
            else {
              if (v15_.v16 == nullptr) {
                return nn_os_UnlockMutex_alt1(a1[267] + 96LL);
              }
              v14 = 40;
            }
            (*(void (**)(_QWORD*))(*v11 + v14))(v11);
            return nn_os_UnlockMutex_alt1(a1[267] + 96LL);
          }
          v10 = 40;
        }
        (*(void (**)(__int64))(*v7 + v10))((__int64)v7);
        goto LABEL_18;
      }
      v6 = 40;
    }
    (*(void (**)(__int64))(*v3 + v6))((__int64)v3);
    goto LABEL_10;
  }
  return result;
}

__int64 Crc32List_118060(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v8;
  unsigned int v9;
  __int64 v10;
  __int64 v11;
  unsigned int v12;
  __int64 v13;
  __int64 v15;

  nn_os_LockMutex(a1 + 40);
  nn_os_LockMutex(a1 + 40);
  v8 = *(unsigned __int16*)(a1 + 32);
  v9 = *(unsigned __int16*)(a1 + 34);
  nn_os_UnlockMutex(a1 + 40);
  if (v8 >= v9) {
    v15 = GameRoutine_a1efd0(a1 + 40);
    nn_diag_detail_AbortImpl_1a0a590(v15);
    __udf(0);
  }
  v10 = *(unsigned __int16*)(a1 + 32);
  v11 = *(_QWORD*)(a1 + 24);
  v12 = *(unsigned __int16*)(v11 + 2 * v10);
  *(_WORD*)(a1 + 32) = v10 + 1;
  *(_WORD*)(v11 + 2 * v10) = -1;
  v13 = *(_QWORD*)(a1 + 16) + 5976LL * v12;
  nn_os_UnlockMutex(a1 + 40);
  GameRoutine_132040(v13, a2, a3, a4);
  return v13;
}

__int64 Crc32List_118120(__int64 a1, __int64 a2, __int64 a3, unsigned int a4,
                         unsigned int a5)
{
  unsigned int v10;
  unsigned int v11;
  __int64 v12;
  __int64 v13;
  unsigned int v14;
  __int64 v15;
  __int64 v17;

  nn_os_LockMutex(a1 + 40);
  nn_os_LockMutex(a1 + 40);
  v10 = *(unsigned __int16*)(a1 + 32);
  v11 = *(unsigned __int16*)(a1 + 34);
  nn_os_UnlockMutex(a1 + 40);
  if (v10 >= v11) {
    v17 = GameRoutine_a1efd0(a1 + 40);
    nn_diag_detail_AbortImpl_1a0a590(v17);
    __udf(0);
  }
  v12 = *(unsigned __int16*)(a1 + 32);
  v13 = *(_QWORD*)(a1 + 24);
  v14 = *(unsigned __int16*)(v13 + 2 * v12);
  *(_WORD*)(a1 + 32) = v12 + 1;
  *(_WORD*)(v13 + 2 * v12) = -1;
  v15 = *(_QWORD*)(a1 + 16) + 5768LL * v14;
  nn_os_UnlockMutex(a1 + 40);
  GameRoutine_112550(v15, a2, a3, a4, a5);
  return v15;
}

__int64 Crc32List_118700(__int64 a1)
{
  _QWORD* v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  struct {
    _QWORD v7[4];
    _QWORD* v8;
  } v7_;
  __int64 v9;

  nn_os_LockMutex_alt1((__int64)&GameData_2198f28);
  v2 = v7_.v7;
  v7_.v7[0] = GameData_1f56b40;
  v3 = *(__int64**)(a1 + 40);
  v7_.v8 = v7_.v7;
  v4 = *v3;
  if (*v3 != 0) {
    do {
      v9 = v4;
      v4 = *(_QWORD*)(v4 + 5616);
      if (v7_.v8 == nullptr) {
        GameRoutine_60a310_alt1();
      }
      (*(void (**)(_QWORD*, __int64*))(*v7_.v8 + 48LL))(v7_.v8, &v9);
    } while (v4 != 0);
    v2 = v7_.v8;
    if (v7_.v8 != v7_.v7) {
      if (v7_.v8 != nullptr) {
        v5 = 40;
      LABEL_8:
        (*(void (**)(_QWORD*))(*v2 + v5))(v2);
      }
      return nn_os_UnlockMutex_alt1((__int64)&GameData_2198f28);
    }
  }
  v5 = 32;
  goto LABEL_8;
}

__int64 Crc32List_118980(__int64 a1, void (***a2)(_QWORD))
{
  __int64 v4;
  _QWORD* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  unsigned __int16 v18;
  struct {
    _QWORD v20[4];
    _QWORD* v21;
  } v20_;
  __int64 v22;

  v4 = COERCE_AS(__typeof__(v4),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  nn_os_LockMutex_alt1((__int64)GameData_2134648[0]),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v5 = v20_.v20;
  v20_.v20[0] = GameData_1f56ac0;
  v20_.v20[1] = a2;
  v6 = *(__int64**)(a1 + 40);
  v20_.v21 = v20_.v20;
  v7 = *v6;
  if (v7 == 0) {
    goto LABEL_9;
  }
  v8 = *(_QWORD*)(v7 + 5616);
  v5 = v20_.v20;
  v22 = v7;
  while (1) {
    (*(void (**)(_QWORD*, __int64*))(*v5 + 48LL))(v5, &v22),
        v4 = COERCE_AS(__typeof__(v4),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v5 = v20_.v21;
    if (v8 == 0) {
      break;
    }
    v22 = v8;
    v8 = *(_QWORD*)(v8 + 5616);
    if (v20_.v21 == nullptr) {
      GameRoutine_60a310_alt1(),
          v4 = COERCE_AS(__typeof__(v4),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  }
  if (v20_.v21 == v20_.v20) {
  LABEL_9:
    v9 = 32;
  }
  else {
    if (v20_.v21 == nullptr) {
      goto LABEL_11;
    }
    v9 = 40;
  }
  (*(void (**)(_QWORD*, __int64))(*v5 + v9))(v5, v4),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_11:
  nn_os_UnlockMutex_alt1((__int64)&GameData_2198f28),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  nn_os_LockMutex_alt1((__int64)&GameData_2198f48),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v10 = *(_QWORD*)(a1 + 112);
  v11 = (__int64*)((char*)a2 + v10);
  v13 = *(__int64*)((char*)a2 + v10);
  v12 = *(__int64*)((char*)a2 + v10 + 8);
  if (v13 == 0) {
    *(_QWORD*)(a1 + 96) = v12;
    v14 = *v11;
    v15 = v11[1];
    if (v15 != 0) {
      goto LABEL_13;
    }
  LABEL_15:
    *(_QWORD*)(a1 + 104) = v14;
    goto LABEL_16;
  }
  *(_QWORD*)(v10 + v13 + 8) = v12;
  v10 = *(_QWORD*)(a1 + 112);
  v11 = (__int64*)((char*)a2 + v10);
  v14 = *(__int64*)((char*)a2 + v10);
  v15 = *(__int64*)((char*)a2 + v10 + 8);
  if (v15 == 0) {
    goto LABEL_15;
  }
LABEL_13:
  *(_QWORD*)(v10 + v15) = v14;
  v11 = (__int64*)((char*)a2 + *(_QWORD*)(a1 + 112));
LABEL_16:
  *v11 = 0;
  *(void (***)(_QWORD))((char*)a2 + *(_QWORD*)(a1 + 112) +
                        8) = nullptr,
                        v4 = COERCE_AS(
                            __typeof__(v4),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  nn_os_UnlockMutex_alt1((__int64)GameData_2134650[0]),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (**a2)(a2);
  nn_os_LockMutex_alt1(a1 + 2400),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v16 = *(_QWORD*)(a1 + 2384);
  v17 = ((unsigned __int64)a2 - *(_QWORD*)(a1 + 2376)) / 0x1688;
  v18 = *(_WORD*)(a1 + 2392) - 1;
  *(_WORD*)(a1 + 2392) = v18;
  *(_WORD*)(v16 + 2LL * v18) = v17;
  return nn_os_UnlockMutex_alt1(a1 + 2400);
}

__int64 Crc32List_118b20(__int64 a1, void (***a2)(_QWORD))
{
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int16 v12;

  nn_os_LockMutex(GameData_2134648[0]);
  v4 = *(_QWORD*)(a1 + 152);
  v5 = (__int64*)((char*)a2 + v4);
  v7 = *(__int64*)((char*)a2 + v4);
  v6 = *(__int64*)((char*)a2 + v4 + 8);
  if (v7 == 0) {
    *(_QWORD*)(a1 + 136) = v6;
    v8 = *v5;
    v9 = v5[1];
    if (v9 != 0) {
      goto LABEL_3;
    }
  LABEL_5:
    *(_QWORD*)(a1 + 144) = v8;
    goto LABEL_6;
  }
  *(_QWORD*)(v4 + v7 + 8) = v6;
  v4 = *(_QWORD*)(a1 + 152);
  v5 = (__int64*)((char*)a2 + v4);
  v8 = *(__int64*)((char*)a2 + v4);
  v9 = *(__int64*)((char*)a2 + v4 + 8);
  if (v9 == 0) {
    goto LABEL_5;
  }

LABEL_3:
  *(_QWORD*)(v4 + v9) = v8;
  v5 = (__int64*)((char*)a2 + *(_QWORD*)(a1 + 152));

LABEL_6:
  *v5 = 0;
  *(void (***)(_QWORD))((char*)a2 + *(_QWORD*)(a1 + 152) + 8) = nullptr;
  nn_os_UnlockMutex(GameData_2134648[0]);
  (**a2)(a2);
  nn_os_LockMutex(a1 + 2320);
  v10 = *(_QWORD*)(a1 + 2304);
  v11 = ((unsigned __int64)a2 - *(_QWORD*)(a1 + 2296)) / 0x1688;
  v12 = *(_WORD*)(a1 + 2312) - 1;
  *(_WORD*)(a1 + 2312) = v12;
  *(_WORD*)(v10 + 2LL * v12) = v11;
  return nn_os_UnlockMutex(a1 + 2320);
}

__int64 Crc32List_118c10(__int64 a1, void (***a2)(_QWORD))
{
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int16 v12;

  nn_os_LockMutex(GameData_2134648[0]);
  v4 = *(_QWORD*)(a1 + 32);
  v5 = (__int64*)((char*)a2 + v4);
  v7 = *(__int64*)((char*)a2 + v4);
  v6 = *(__int64*)((char*)a2 + v4 + 8);
  if (v7 == 0) {
    *(_QWORD*)(a1 + 16) = v6;
    v8 = *v5;
    v9 = v5[1];
    if (v9 != 0) {
      goto LABEL_3;
    }
  LABEL_5:
    *(_QWORD*)(a1 + 24) = v8;
    goto LABEL_6;
  }
  *(_QWORD*)(v4 + v7 + 8) = v6;
  v4 = *(_QWORD*)(a1 + 32);
  v5 = (__int64*)((char*)a2 + v4);
  v8 = *(__int64*)((char*)a2 + v4);
  v9 = *(__int64*)((char*)a2 + v4 + 8);
  if (v9 == 0) {
    goto LABEL_5;
  }

LABEL_3:
  *(_QWORD*)(v4 + v9) = v8;
  v5 = (__int64*)((char*)a2 + *(_QWORD*)(a1 + 32));

LABEL_6:
  *v5 = 0;
  *(void (***)(_QWORD))((char*)a2 + *(_QWORD*)(a1 + 32) + 8) = nullptr;
  nn_os_UnlockMutex(GameData_2134648[0]);
  (**a2)(a2);
  nn_os_LockMutex(a1 + 2240);
  v10 = *(_QWORD*)(a1 + 2224);
  v11 = ((unsigned __int64)a2 - *(_QWORD*)(a1 + 2216)) / 0x1758;
  v12 = *(_WORD*)(a1 + 2232) - 1;
  *(_WORD*)(a1 + 2232) = v12;
  *(_WORD*)(v10 + 2LL * v12) = v11;
  return nn_os_UnlockMutex(a1 + 2240);
}

__int64 Crc32List_118d80(__int64 a1, __int64 a2, __int64 a3)
{
  __int16* v5;

  v5 = GameData_2134648[0];
  nn_os_LockMutex(GameData_2134648[0]);
  (*(void (**)(_QWORD, __int64, __int64))(*(_QWORD*)*snd_s_target_ptr + 128LL))(
      *snd_s_target_ptr, a2, a3);
  return nn_os_UnlockMutex(v5);
}

__int64 Crc32List_118df0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                         __int64 a5)
{
  __int16* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;

  v10 = GameData_2134648[0];
  v11 = nn_os_LockMutex(GameData_2134648[0]);
  v12 = snd_data_getSettingData(v11);
  v14 = *(_QWORD*)(v12 + 8);
  v13 = *(_QWORD*)(v12 + 16);
  v15 = *(_DWORD*)(v12 + 24);
  *(_QWORD*)(a1 + 3080) = *(_QWORD*)v12;
  *(_DWORD*)(a1 + 3104) = v15;
  *(_QWORD*)(a1 + 3088) = v14;
  *(_QWORD*)(a1 + 3096) = v13;
  (*(void (**)(__int64, __int64, __int64, __int64, __int64))(
      *(_QWORD*)snd_s_target + 136LL))(snd_s_target, a2, a3, a4, a5);
  return nn_os_UnlockMutex(v10);
}

__int64 Crc32List_118e90(__int64 a1, __int64 a2, __int64 a3)
{
  __int16* v5;

  v5 = GameData_2134648[0];
  nn_os_LockMutex(GameData_2134648[0]);
  (*(void (**)(_QWORD, __int64, __int64))(*(_QWORD*)*snd_s_target_ptr + 144LL))(
      *snd_s_target_ptr, a2, a3);
  return nn_os_UnlockMutex(v5);
}

_QWORD* Crc32List_118f90(__int64 a1, float a2)
{
  *(float*)(a1 + 3164) = a2;
  return X8CALL_X0(
      _QWORD*,
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64, float))(
          *(_QWORD*)snd_s_target + 1144LL))((void*)snd_s_target, snd_s_target,
                                            a2 * *(float*)(a1 + 3080)));
}

__int64 Crc32List_119790(__int64 a1, int* a2)
{
  int v4;
  int v6;
  int v7;

  v4 = GameRoutine_f63e0(a2);
  if (v4 != -1) {
    return v4 | 0x2000000u;
  }
  v6 = GameRoutine_f57c0(a2);
  if (v6 != -1) {
    return v6 | 0x1000000u;
  }
  v7 = GameRoutine_13ed60(*(_QWORD*)(a1 + 2184), a2);
  if (v7 == -1) {
    return (unsigned int)GameRoutine_f6cc0(a2) | 0x8000000;
  }
  else {
    return v7 | 0x8000000u;
  }
}

__int64 Crc32List_119830(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                         __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  unsigned int v16;
  unsigned int v17;
  __int64 v18;
  __int64 v19;
  unsigned int v20;
  __int64 v21;
  __int64 v23;

  nn_os_LockMutex(a1 + 40);
  nn_os_LockMutex(a1 + 40);
  v16 = *(unsigned __int16*)(a1 + 32);
  v17 = *(unsigned __int16*)(a1 + 34);
  nn_os_UnlockMutex(a1 + 40);
  if (v16 >= v17) {
    v23 = GameRoutine_a1efd0(a1 + 40);
    nn_diag_detail_AbortImpl_1a0a590(v23);
    __udf(0);
  }
  v18 = *(unsigned __int16*)(a1 + 32);
  v19 = *(_QWORD*)(a1 + 24);
  v20 = *(unsigned __int16*)(v19 + 2 * v18);
  *(_WORD*)(a1 + 32) = v18 + 1;
  *(_WORD*)(v19 + 2 * v18) = -1;
  v21 = *(_QWORD*)(a1 + 16) + 6072LL * v20;
  nn_os_UnlockMutex(a1 + 40);
  GameRoutine_144a10(v21, a2, a3, a4, a5, a6, a7, a8);
  return v21;
}

__int64 Crc32List_119920(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                         __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  unsigned int v16;
  unsigned int v17;
  __int64 v18;
  __int64 v19;
  unsigned int v20;
  __int64 v21;
  __int64 v23;

  nn_os_LockMutex(a1 + 40);
  nn_os_LockMutex(a1 + 40);
  v16 = *(unsigned __int16*)(a1 + 32);
  v17 = *(unsigned __int16*)(a1 + 34);
  nn_os_UnlockMutex(a1 + 40);
  if (v16 >= v17) {
    v23 = GameRoutine_a1efd0(a1 + 40);
    nn_diag_detail_AbortImpl_1a0a590(v23);
    __udf(0);
  }
  v18 = *(unsigned __int16*)(a1 + 32);
  v19 = *(_QWORD*)(a1 + 24);
  v20 = *(unsigned __int16*)(v19 + 2 * v18);
  *(_WORD*)(a1 + 32) = v18 + 1;
  *(_WORD*)(v19 + 2 * v18) = -1;
  v21 = *(_QWORD*)(a1 + 16) + 6120LL * v20;
  nn_os_UnlockMutex(a1 + 40);
  GameRoutine_127e30(v21, a2, a3, a4, a5, a6, a7, a8);
  return v21;
}

__int64 Crc32List_119a10(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                         __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                         __int64 a9)
{
  unsigned int v16;
  unsigned int v17;
  __int64 v18;
  __int64 v19;
  unsigned int v20;
  __int64 v21;
  __int64 v23;

  nn_os_LockMutex(a1 + 40);
  nn_os_LockMutex(a1 + 40);
  v16 = *(unsigned __int16*)(a1 + 32);
  v17 = *(unsigned __int16*)(a1 + 34);
  nn_os_UnlockMutex(a1 + 40);
  if (v16 >= v17) {
    v23 = GameRoutine_a1efd0(a1 + 40);
    nn_diag_detail_AbortImpl_1a0a590(v23);
    __udf(0);
  }
  v18 = *(unsigned __int16*)(a1 + 32);
  v19 = *(_QWORD*)(a1 + 24);
  v20 = *(unsigned __int16*)(v19 + 2 * v18);
  *(_WORD*)(a1 + 32) = v18 + 1;
  *(_WORD*)(v19 + 2 * v18) = -1;
  v21 = *(_QWORD*)(a1 + 16) + 6152LL * v20;
  nn_os_UnlockMutex(a1 + 40);
  GameRoutine_13fe10(v21, a2, a3, a4, a5, 0, a7, a8, a9);
  return v21;
}

__int64 Crc32List_119b10(__int64 a1)
{
  unsigned int v2;
  unsigned int v3;
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  __int64 v7;
  __int64 v9;

  nn_os_LockMutex(a1 + 40);
  nn_os_LockMutex(a1 + 40);
  v2 = *(unsigned __int16*)(a1 + 32);
  v3 = *(unsigned __int16*)(a1 + 34);
  nn_os_UnlockMutex(a1 + 40);
  if (v2 >= v3) {
    v9 = GameRoutine_a1efd0(a1 + 40);
    nn_diag_detail_AbortImpl_1a0a590(v9);
    __udf(0);
  }
  v4 = *(unsigned __int16*)(a1 + 32);
  v5 = *(_QWORD*)(a1 + 24);
  v6 = *(unsigned __int16*)(v5 + 2 * v4);
  *(_WORD*)(a1 + 32) = v4 + 1;
  *(_WORD*)(v5 + 2 * v4) = -1;
  v7 = *(_QWORD*)(a1 + 16) + 664LL * v6;
  nn_os_UnlockMutex(a1 + 40);
  GameRoutine_f7640(v7);
  return v7;
}

__int64 Crc32List_11a290(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                         __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                         __int64 a9)
{
  unsigned int v17;
  unsigned int v18;
  __int64 v19;
  __int64 v20;
  unsigned int v21;
  __int64 v22;
  __int64 v24;

  nn_os_LockMutex(a1 + 40);
  nn_os_LockMutex(a1 + 40);
  v17 = *(unsigned __int16*)(a1 + 32);
  v18 = *(unsigned __int16*)(a1 + 34);
  nn_os_UnlockMutex(a1 + 40);
  if (v17 >= v18) {
    v24 = GameRoutine_a1efd0(a1 + 40);
    nn_diag_detail_AbortImpl_1a0a590(v24);
    __udf(0);
  }
  v19 = *(unsigned __int16*)(a1 + 32);
  v20 = *(_QWORD*)(a1 + 24);
  v21 = *(unsigned __int16*)(v20 + 2 * v19);
  *(_WORD*)(a1 + 32) = v19 + 1;
  *(_WORD*)(v20 + 2 * v19) = -1;
  v22 = *(_QWORD*)(a1 + 16) + 6152LL * v21;
  nn_os_UnlockMutex(a1 + 40);
  GameRoutine_13fe10(v22, a2, a3, a4, a5, a6, a7, a8, a9);
  return v22;
}

__int64 Crc32List_11a390(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                         __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  unsigned int v16;
  unsigned int v17;
  __int64 v18;
  __int64 v19;
  unsigned int v20;
  __int64 v21;
  __int64 v23;

  nn_os_LockMutex(a1 + 40);
  nn_os_LockMutex(a1 + 40);
  v16 = *(unsigned __int16*)(a1 + 32);
  v17 = *(unsigned __int16*)(a1 + 34);
  nn_os_UnlockMutex(a1 + 40);
  if (v16 >= v17) {
    v23 = GameRoutine_a1efd0(a1 + 40);
    nn_diag_detail_AbortImpl_1a0a590(v23);
    __udf(0);
  }
  v18 = *(unsigned __int16*)(a1 + 32);
  v19 = *(_QWORD*)(a1 + 24);
  v20 = *(unsigned __int16*)(v19 + 2 * v18);
  *(_WORD*)(a1 + 32) = v18 + 1;
  *(_WORD*)(v19 + 2 * v18) = -1;
  v21 = *(_QWORD*)(a1 + 16) + 6096LL * v20;
  nn_os_UnlockMutex(a1 + 40);
  GameRoutine_18e190(v21, a2, a3, a4, a5, a6, a7, a8);
  return v21;
}

__int64 Crc32List_11a480(__int64 a1)
{
  unsigned int v2;
  unsigned int v3;
  unsigned int v4;
  unsigned int v5;
  unsigned int v6;
  unsigned int v7;
  _QWORD* v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  struct {
    _QWORD v14[4];
    _QWORD* v15;
  } v14_;
  __int64 v16;

  nn_os_LockMutex_alt1((__int64)&GameData_2198f28);
  nn_os_LockMutex_alt1(a1 + 2480);
  v2 = *(unsigned __int16*)(a1 + 2472);
  v3 = *(unsigned __int16*)(a1 + 2474);
  nn_os_UnlockMutex_alt1(a1 + 2480);
  nn_os_LockMutex_alt1(a1 + 2560);
  v4 = *(unsigned __int16*)(a1 + 2552);
  v5 = *(unsigned __int16*)(a1 + 2554);
  nn_os_UnlockMutex_alt1(a1 + 2560);
  nn_os_LockMutex_alt1(a1 + 2800);
  v6 = *(unsigned __int16*)(a1 + 2792);
  v7 = *(unsigned __int16*)(a1 + 2794);
  nn_os_UnlockMutex_alt1(a1 + 2800);
  if (v2 >= v3 || v4 >= v5 || v6 >= v7) {
    nn_os_LockMutex_alt1((__int64)&GameData_2198f28);
    v8 = v14_.v14;
    v14_.v14[0] = GameData_1f57160;
    v9 = *(__int64**)(a1 + 40);
    v14_.v15 = v14_.v14;
    v10 = *v9;
    if (v10 == 0) {
      goto LABEL_12;
    }
    v11 = *(_QWORD*)(v10 + 5616);
    v8 = v14_.v14;
    v16 = v10;
    while (1) {
      (*(void (**)(_QWORD*, __int64*))(*v8 + 48LL))(v8, &v16);
      v8 = v14_.v15;
      if (v11 == 0) {
        break;
      }
      v16 = v11;
      v11 = *(_QWORD*)(v11 + 5616);
      if (v14_.v15 == nullptr) {
        GameRoutine_60a310_alt1();
      }
    }
    if (v14_.v15 == v14_.v14) {
    LABEL_12:
      v12 = 32;
    }
    else {
      if (v14_.v15 == nullptr) {
      LABEL_14:
        nn_os_UnlockMutex_alt1((__int64)&GameData_2198f28);
        return nn_os_UnlockMutex_alt1((__int64)&GameData_2198f28);
      }
      v12 = 40;
    }
    (*(void (**)(_QWORD*))(*v8 + v12))(v8);
    goto LABEL_14;
  }
  return nn_os_UnlockMutex_alt1((__int64)&GameData_2198f28);
}

__int64 Crc32List_11acf0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                         __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                         __int64 a9)
{
  unsigned int v16;
  unsigned int v17;
  __int64 v18;
  __int64 v19;
  unsigned int v20;
  __int64 v21;
  __int64 v23;

  nn_os_LockMutex(a1 + 40);
  nn_os_LockMutex(a1 + 40);
  v16 = *(unsigned __int16*)(a1 + 32);
  v17 = *(unsigned __int16*)(a1 + 34);
  nn_os_UnlockMutex(a1 + 40);
  if (v16 >= v17) {
    v23 = GameRoutine_a1efd0(a1 + 40);
    nn_diag_detail_AbortImpl_1a0a590(v23);
    __udf(0);
  }
  v18 = *(unsigned __int16*)(a1 + 32);
  v19 = *(_QWORD*)(a1 + 24);
  v20 = *(unsigned __int16*)(v19 + 2 * v18);
  *(_WORD*)(a1 + 32) = v18 + 1;
  *(_WORD*)(v19 + 2 * v18) = -1;
  v21 = *(_QWORD*)(a1 + 16) + 6072LL * v20;
  nn_os_UnlockMutex(a1 + 40);
  GameRoutine_144cb0(v21, a2, a3, a4, a5, 0, a7, a8, a9);
  return v21;
}

__int64 Crc32List_11adf0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                         __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                         __int64 a9)
{
  unsigned int v16;
  unsigned int v17;
  __int64 v18;
  __int64 v19;
  unsigned int v20;
  __int64 v21;
  __int64 v23;

  nn_os_LockMutex(a1 + 40);
  nn_os_LockMutex(a1 + 40);
  v16 = *(unsigned __int16*)(a1 + 32);
  v17 = *(unsigned __int16*)(a1 + 34);
  nn_os_UnlockMutex(a1 + 40);
  if (v16 >= v17) {
    v23 = GameRoutine_a1efd0(a1 + 40);
    nn_diag_detail_AbortImpl_1a0a590(v23);
    __udf(0);
  }
  v18 = *(unsigned __int16*)(a1 + 32);
  v19 = *(_QWORD*)(a1 + 24);
  v20 = *(unsigned __int16*)(v19 + 2 * v18);
  *(_WORD*)(a1 + 32) = v18 + 1;
  *(_WORD*)(v19 + 2 * v18) = -1;
  v21 = *(_QWORD*)(a1 + 16) + 6120LL * v20;
  nn_os_UnlockMutex(a1 + 40);
  GameRoutine_128110(v21, a2, a3, a4, a5, 0, a7, a8, a9);
  return v21;
}

__int64 Crc32List_11aef0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                         __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                         __int64 a9, __int64 a10)
{
  unsigned int v16;
  unsigned int v17;
  __int64 v18;
  __int64 v19;
  unsigned int v20;
  __int64 v21;
  __int64 v23;

  nn_os_LockMutex(a1 + 40);
  nn_os_LockMutex(a1 + 40);
  v16 = *(unsigned __int16*)(a1 + 32);
  v17 = *(unsigned __int16*)(a1 + 34);
  nn_os_UnlockMutex(a1 + 40);
  if (v16 >= v17) {
    v23 = GameRoutine_a1efd0(a1 + 40);
    nn_diag_detail_AbortImpl_1a0a590(v23);
    __udf(0);
  }
  v18 = *(unsigned __int16*)(a1 + 32);
  v19 = *(_QWORD*)(a1 + 24);
  v20 = *(unsigned __int16*)(v19 + 2 * v18);
  *(_WORD*)(a1 + 32) = v18 + 1;
  *(_WORD*)(v19 + 2 * v18) = -1;
  v21 = *(_QWORD*)(a1 + 16) + 6152LL * v20;
  nn_os_UnlockMutex(a1 + 40);
  GameRoutine_140240(v21, a2, a3, a4, a5, 0, 0, a8, a9, a10);
  return v21;
}

__int64 Crc32List_11aff0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                         __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                         __int64 a9)
{
  unsigned int v16;
  unsigned int v17;
  __int64 v18;
  __int64 v19;
  unsigned int v20;
  __int64 v21;
  __int64 v23;

  nn_os_LockMutex(a1 + 40);
  nn_os_LockMutex(a1 + 40);
  v16 = *(unsigned __int16*)(a1 + 32);
  v17 = *(unsigned __int16*)(a1 + 34);
  nn_os_UnlockMutex(a1 + 40);
  if (v16 >= v17) {
    v23 = GameRoutine_a1efd0(a1 + 40);
    nn_diag_detail_AbortImpl_1a0a590(v23);
    __udf(0);
  }
  v18 = *(unsigned __int16*)(a1 + 32);
  v19 = *(_QWORD*)(a1 + 24);
  v20 = *(unsigned __int16*)(v19 + 2 * v18);
  *(_WORD*)(a1 + 32) = v18 + 1;
  *(_WORD*)(v19 + 2 * v18) = -1;
  v21 = *(_QWORD*)(a1 + 16) + 6096LL * v20;
  nn_os_UnlockMutex(a1 + 40);
  GameRoutine_18e380(v21, a2, a3, a4, a5, 0, a7, a8, a9);
  return v21;
}

__int64 Crc32List_11b0f0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                         __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  unsigned int v15;
  unsigned int v16;
  __int64 v17;
  __int64 v18;
  unsigned int v19;
  __int64 v20;
  __int64 v22;

  nn_os_LockMutex(a1 + 40);
  nn_os_LockMutex(a1 + 40);
  v15 = *(unsigned __int16*)(a1 + 32);
  v16 = *(unsigned __int16*)(a1 + 34);
  nn_os_UnlockMutex(a1 + 40);
  if (v15 >= v16) {
    v22 = GameRoutine_a1efd0(a1 + 40);
    nn_diag_detail_AbortImpl_1a0a590(v22);
    __udf(0);
  }
  v17 = *(unsigned __int16*)(a1 + 32);
  v18 = *(_QWORD*)(a1 + 24);
  v19 = *(unsigned __int16*)(v18 + 2 * v17);
  *(_WORD*)(a1 + 32) = v17 + 1;
  *(_WORD*)(v18 + 2 * v17) = -1;
  v20 = *(_QWORD*)(a1 + 16) + 6072LL * v19;
  nn_os_UnlockMutex(a1 + 40);
  GameRoutine_144a10(v20, a2, a3, a4, 0, a6, a7, a8);
  return v20;
}

__int64 Crc32List_11b1e0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                         __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                         __int64 a9)
{
  unsigned int v17;
  unsigned int v18;
  __int64 v19;
  __int64 v20;
  unsigned int v21;
  __int64 v22;
  __int64 v24;

  nn_os_LockMutex(a1 + 40);
  nn_os_LockMutex(a1 + 40);
  v17 = *(unsigned __int16*)(a1 + 32);
  v18 = *(unsigned __int16*)(a1 + 34);
  nn_os_UnlockMutex(a1 + 40);
  if (v17 >= v18) {
    v24 = GameRoutine_a1efd0(a1 + 40);
    nn_diag_detail_AbortImpl_1a0a590(v24);
    __udf(0);
  }
  v19 = *(unsigned __int16*)(a1 + 32);
  v20 = *(_QWORD*)(a1 + 24);
  v21 = *(unsigned __int16*)(v20 + 2 * v19);
  *(_WORD*)(a1 + 32) = v19 + 1;
  *(_WORD*)(v20 + 2 * v19) = -1;
  v22 = *(_QWORD*)(a1 + 16) + 6072LL * v21;
  nn_os_UnlockMutex(a1 + 40);
  GameRoutine_144cb0(v22, a2, a3, a4, a5, a6, a7, a8, a9);
  return v22;
}

__int64 Crc32List_11b2e0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                         __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                         __int64 a9)
{
  unsigned int v17;
  unsigned int v18;
  __int64 v19;
  __int64 v20;
  unsigned int v21;
  __int64 v22;
  __int64 v24;

  nn_os_LockMutex(a1 + 40);
  nn_os_LockMutex(a1 + 40);
  v17 = *(unsigned __int16*)(a1 + 32);
  v18 = *(unsigned __int16*)(a1 + 34);
  nn_os_UnlockMutex(a1 + 40);
  if (v17 >= v18) {
    v24 = GameRoutine_a1efd0(a1 + 40);
    nn_diag_detail_AbortImpl_1a0a590(v24);
    __udf(0);
  }
  v19 = *(unsigned __int16*)(a1 + 32);
  v20 = *(_QWORD*)(a1 + 24);
  v21 = *(unsigned __int16*)(v20 + 2 * v19);
  *(_WORD*)(a1 + 32) = v19 + 1;
  *(_WORD*)(v20 + 2 * v19) = -1;
  v22 = *(_QWORD*)(a1 + 16) + 6120LL * v21;
  nn_os_UnlockMutex(a1 + 40);
  GameRoutine_128110(v22, a2, a3, a4, a5, a6, a7, a8, a9);
  return v22;
}

__int64 Crc32List_11b3e0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                         __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                         __int64 a9, __int64 a10)
{
  unsigned int v17;
  unsigned int v18;
  __int64 v19;
  __int64 v20;
  unsigned int v21;
  __int64 v22;
  __int64 v24;

  nn_os_LockMutex(a1 + 40);
  nn_os_LockMutex(a1 + 40);
  v17 = *(unsigned __int16*)(a1 + 32);
  v18 = *(unsigned __int16*)(a1 + 34);
  nn_os_UnlockMutex(a1 + 40);
  if (v17 >= v18) {
    v24 = GameRoutine_a1efd0(a1 + 40);
    nn_diag_detail_AbortImpl_1a0a590(v24);
    __udf(0);
  }
  v19 = *(unsigned __int16*)(a1 + 32);
  v20 = *(_QWORD*)(a1 + 24);
  v21 = *(unsigned __int16*)(v20 + 2 * v19);
  *(_WORD*)(a1 + 32) = v19 + 1;
  *(_WORD*)(v20 + 2 * v19) = -1;
  v22 = *(_QWORD*)(a1 + 16) + 6152LL * v21;
  nn_os_UnlockMutex(a1 + 40);
  GameRoutine_140240(v22, a2, a3, a4, a5, 0, a7, a8, a9, a10);
  return v22;
}

__int64 Crc32List_11b4e0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                         __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                         __int64 a9, __int64 a10)
{
  unsigned int v17;
  unsigned int v18;
  __int64 v19;
  __int64 v20;
  unsigned int v21;
  __int64 v22;
  __int64 v24;

  nn_os_LockMutex(a1 + 40);
  nn_os_LockMutex(a1 + 40);
  v17 = *(unsigned __int16*)(a1 + 32);
  v18 = *(unsigned __int16*)(a1 + 34);
  nn_os_UnlockMutex(a1 + 40);
  if (v17 >= v18) {
    v24 = GameRoutine_a1efd0(a1 + 40);
    nn_diag_detail_AbortImpl_1a0a590(v24);
    __udf(0);
  }
  v19 = *(unsigned __int16*)(a1 + 32);
  v20 = *(_QWORD*)(a1 + 24);
  v21 = *(unsigned __int16*)(v20 + 2 * v19);
  *(_WORD*)(a1 + 32) = v19 + 1;
  *(_WORD*)(v20 + 2 * v19) = -1;
  v22 = *(_QWORD*)(a1 + 16) + 6152LL * v21;
  nn_os_UnlockMutex(a1 + 40);
  GameRoutine_140240(v22, a2, a3, a4, a5, a6, a7, a8, a9, a10);
  return v22;
}

__int64 Crc32List_11b5e0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                         __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                         __int64 a9)
{
  unsigned int v17;
  unsigned int v18;
  __int64 v19;
  __int64 v20;
  unsigned int v21;
  __int64 v22;
  __int64 v24;

  nn_os_LockMutex(a1 + 40);
  nn_os_LockMutex(a1 + 40);
  v17 = *(unsigned __int16*)(a1 + 32);
  v18 = *(unsigned __int16*)(a1 + 34);
  nn_os_UnlockMutex(a1 + 40);
  if (v17 >= v18) {
    v24 = GameRoutine_a1efd0(a1 + 40);
    nn_diag_detail_AbortImpl_1a0a590(v24);
    __udf(0);
  }
  v19 = *(unsigned __int16*)(a1 + 32);
  v20 = *(_QWORD*)(a1 + 24);
  v21 = *(unsigned __int16*)(v20 + 2 * v19);
  *(_WORD*)(a1 + 32) = v19 + 1;
  *(_WORD*)(v20 + 2 * v19) = -1;
  v22 = *(_QWORD*)(a1 + 16) + 6096LL * v21;
  nn_os_UnlockMutex(a1 + 40);
  GameRoutine_18e380(v22, a2, a3, a4, a5, a6, a7, a8, a9);
  return v22;
}

__int64 Crc32List_11c100(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                         __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                         __int64 a9)
{
  unsigned int v17;
  unsigned int v18;
  unsigned int v19;
  unsigned int v20;
  __int64 v21;
  __int64 v22;
  unsigned int v23;
  __int64 v24;
  __int64 v26;

  nn_os_LockMutex(a1 + 40);
  v17 = *(unsigned __int16*)(a1 + 32);
  v18 = *(unsigned __int16*)(a1 + 34);
  nn_os_UnlockMutex(a1 + 40);
  if (v17 >= v18) {
    return 0;
  }
  nn_os_LockMutex(a1 + 40);
  nn_os_LockMutex(a1 + 40);
  v19 = *(unsigned __int16*)(a1 + 32);
  v20 = *(unsigned __int16*)(a1 + 34);
  nn_os_UnlockMutex(a1 + 40);
  if (v19 >= v20) {
    v26 = GameRoutine_a1efd0(a1 + 40);
    nn_diag_detail_AbortImpl_1a0a590(v26);
    __udf(0);
  }
  v21 = *(unsigned __int16*)(a1 + 32);
  v22 = *(_QWORD*)(a1 + 24);
  v23 = *(unsigned __int16*)(v22 + 2 * v21);
  *(_WORD*)(a1 + 32) = v21 + 1;
  *(_WORD*)(v22 + 2 * v21) = -1;
  v24 = *(_QWORD*)(a1 + 16) + 6072LL * v23;
  nn_os_UnlockMutex(a1 + 40);
  GameRoutine_144cb0(v24, a2, a3, a4, a5, a6, a7, a8, a9);
  return v24;
}

__int64 Crc32List_11c230(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                         __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                         __int64 a9)
{
  unsigned int v17;
  unsigned int v18;
  __int64 v19;
  __int64 v20;
  unsigned int v21;
  __int64 v22;
  __int64 v24;

  nn_os_LockMutex(a1 + 40);
  nn_os_LockMutex(a1 + 40);
  v17 = *(unsigned __int16*)(a1 + 32);
  v18 = *(unsigned __int16*)(a1 + 34);
  nn_os_UnlockMutex(a1 + 40);
  if (v17 >= v18) {
    v24 = GameRoutine_a1efd0(a1 + 40);
    nn_diag_detail_AbortImpl_1a0a590(v24);
    __udf(0);
  }
  v19 = *(unsigned __int16*)(a1 + 32);
  v20 = *(_QWORD*)(a1 + 24);
  v21 = *(unsigned __int16*)(v20 + 2 * v19);
  *(_WORD*)(a1 + 32) = v19 + 1;
  *(_WORD*)(v20 + 2 * v19) = -1;
  v22 = *(_QWORD*)(a1 + 16) + 6096LL * v21;
  nn_os_UnlockMutex(a1 + 40);
  GameRoutine_18e630(v22, a2, a3, a4, a5, a6, a7, a8, a9);
  return v22;
}

__int64 Crc32List_11c330(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                         __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                         __int64 a9)
{
  unsigned int v17;
  unsigned int v18;
  unsigned int v19;
  unsigned int v20;
  __int64 v21;
  __int64 v22;
  unsigned int v23;
  __int64 v24;
  __int64 v26;

  nn_os_LockMutex(a1 + 40);
  v17 = *(unsigned __int16*)(a1 + 32);
  v18 = *(unsigned __int16*)(a1 + 34);
  nn_os_UnlockMutex(a1 + 40);
  if (v17 >= v18) {
    return 0;
  }
  nn_os_LockMutex(a1 + 40);
  nn_os_LockMutex(a1 + 40);
  v19 = *(unsigned __int16*)(a1 + 32);
  v20 = *(unsigned __int16*)(a1 + 34);
  nn_os_UnlockMutex(a1 + 40);
  if (v19 >= v20) {
    v26 = GameRoutine_a1efd0(a1 + 40);
    nn_diag_detail_AbortImpl_1a0a590(v26);
    __udf(0);
  }
  v21 = *(unsigned __int16*)(a1 + 32);
  v22 = *(_QWORD*)(a1 + 24);
  v23 = *(unsigned __int16*)(v22 + 2 * v21);
  *(_WORD*)(a1 + 32) = v21 + 1;
  *(_WORD*)(v22 + 2 * v21) = -1;
  v24 = *(_QWORD*)(a1 + 16) + 6072LL * v23;
  nn_os_UnlockMutex(a1 + 40);
  GameRoutine_144f50(v24, a2, a3, a4, a5, a6, a7, a8, a9);
  return v24;
}

__int64 Crc32List_11c460(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                         __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                         __int64 a9)
{
  unsigned int v17;
  unsigned int v18;
  __int64 v19;
  __int64 v20;
  unsigned int v21;
  __int64 v22;
  __int64 v24;

  nn_os_LockMutex(a1 + 40);
  nn_os_LockMutex(a1 + 40);
  v17 = *(unsigned __int16*)(a1 + 32);
  v18 = *(unsigned __int16*)(a1 + 34);
  nn_os_UnlockMutex(a1 + 40);
  if (v17 >= v18) {
    v24 = GameRoutine_a1efd0(a1 + 40);
    nn_diag_detail_AbortImpl_1a0a590(v24);
    __udf(0);
  }
  v19 = *(unsigned __int16*)(a1 + 32);
  v20 = *(_QWORD*)(a1 + 24);
  v21 = *(unsigned __int16*)(v20 + 2 * v19);
  *(_WORD*)(a1 + 32) = v19 + 1;
  *(_WORD*)(v20 + 2 * v19) = -1;
  v22 = *(_QWORD*)(a1 + 16) + 6072LL * v21;
  nn_os_UnlockMutex(a1 + 40);
  GameRoutine_144f50(v22, a2, a3, a4, a5, a6, a7, a8, a9);
  return v22;
}

__int64 Crc32List_11dfe0(__int64 a1, __int64* a2, __int64 a3, char a4)
{

#pragma clang fp contract(off)
  __int64 result;
  __int64 v8;

  result = snd_fnd_WeakHandle_isValid_alt1(a2);
  if ((result & 1) != 0) {
    v8 = snd_fnd_WeakHandle_get_alt1((__int64)a2);
    return (*(__int64 (**)(__int64, __int64, _QWORD, double))(
        *(_QWORD*)(v8 - 5592) + 248LL))(v8 - 5592, a3, a4 & 1, 0x0.0p+0);
  }
  return result;
}

__int64 Crc32List_11e2f0(__int64 a1, __int64* a2, __int64 a3)
{
  __int64 result;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  result = snd_fnd_WeakHandle_isValid_alt1(a2);
  if ((result & 1) != 0) {
    v6 = snd_fnd_WeakHandle_get_alt1((__int64)a2);
    v7 = snd_fnd_WeakHandle_get_alt1(a3);
    if (v7 != 0) {
      v8 = v7 - 5592;
    }
    else {
      v8 = 0;
    }
    return (*(__int64 (**)(__int64, __int64))(*(_QWORD*)(v6 - 5592) + 256LL))(
        v6 - 5592, v8);
  }
  return result;
}

__int64 Crc32List_11e370(__int64 a1, __int64* a2)
{
  __int64 v3;
  __int64 v5;

  if ((snd_fnd_WeakHandle_isValid_alt1(a2) & 1) == 0) {
    return 0;
  }
  v3 = snd_fnd_WeakHandle_get_alt1((__int64)a2);
  if ((snd_Voice_isDead_alt1(v3 - 5592) & 1) != 0) {
    return 0;
  }
  v5 = snd_fnd_WeakHandle_get_alt1((__int64)a2);
  return (*(__int64 (**)(__int64))(*(_QWORD*)(v5 - 5592) + 376LL))(v5 - 5592);
}

__int64 Crc32List_11e6a0(__int64 a1, int a2)
{
  int v2;
  bool v3;
  __int64 v4;

  v2 = *(_DWORD*)(a1 + 3128);
  if (a2 != -1) {
    v2 = a2;
  }
  v3 = v2 == 0;
  v4 = 168;
  if (v3) {
    v4 = 160;
  }
  return **(_QWORD**)(a1 + v4);
}

__int64 Crc32List_11ec20(__int64 a1, __int64 a2, float a3)
{
  snd_fnd_WeakHandle_get(a2, a3);
  return Crc32List_1187c0(a1);
}

__int64 Crc32List_11ed40(__int64 a1, int* a2)
{
  int v2;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 (*v9)(__int64*, __int64*);
  __int64 v11;

  v2 = *a2;
  v4 = GameRoutine_651190(0x10u);
  *(_DWORD*)(v4 + 8) = v2;
  v5 = (__int64*)v4;
  *(_QWORD*)v4 = GameData_1f56f50;
  v6 = **(_QWORD**)(a1 + 40);
  while (1) {
    v7 = *v5;
    v8 = v6;
    if (v6 == 0) {
      break;
    }
    v9 = *(__int64 (**)(__int64*, __int64*))(v7 + 48);
    v6 = *(_QWORD*)(v6 + 5616);
    v11 = v8;
    if ((v9(v5, &v11) & 1) != 0) {
      v7 = *v5;
      break;
    }
  }
  (*(void (**)(__int64*))(v7 + 40))(v5);
  return v8;
}

__int64 Crc32List_11f420(__int64 a1, __int64* a2)
{
  __int64 v3;
  char v4;
  __int64 v5;
  __int64 result;

  v3 = a1 + 480LL * (*(int (**)(__int64*))(*a2 + 128))(a2) + 176;
  v4 = (*(__int64 (**)(__int64*))(*a2 + 88))(a2);
  v5 = *a2;
  if ((v4 & 1) != 0) {
    result = (*(__int64 (**)(__int64*))(v5 + 120))(a2);
    switch ((int)result) {
    case 0:
      *(__int64*)((char*)a2 + *(_QWORD*)(v3 + 16)) = 0;
      *(__int64*)((char*)a2 + *(_QWORD*)(v3 + 16) + 8) = 0;
      if (**(_QWORD**)(v3 + 32) != 0) {
        *(_QWORD*)(*(_QWORD*)(v3 + 16) + *(_QWORD*)(v3 + 8) + 8LL) = a2;
        *(__int64*)((char*)a2 + *(_QWORD*)(v3 + 16)) = **(_QWORD**)(v3 + 32);
      }
      else {
        *(_QWORD*)v3 = a2;
      }
      *(_QWORD*)(v3 + 8) = a2;
      break;
    case 1:
      goto LABEL_7;
    case 2:
      goto LABEL_22;
    case 3:
      goto LABEL_16;
    case 4:
      goto LABEL_10;
    case 5:
      goto LABEL_19;
    case 6:
      goto LABEL_37;
    case 7:
      goto LABEL_31;
    case 8:
      goto LABEL_34;
    case 9:
      goto LABEL_28;
    case 10:
      goto LABEL_25;
    case 11:
      goto LABEL_13;
    default:
      return result;
    }
  }
  else {
    result = (*(__int64 (**)(__int64*))(v5 + 112))(a2);
    switch ((int)result) {
    case 0:
    LABEL_7:
      *(__int64*)((char*)a2 + *(_QWORD*)(v3 + 56)) = 0;
      *(__int64*)((char*)a2 + *(_QWORD*)(v3 + 56) + 8) = 0;
      if (**(_QWORD**)(v3 + 72) != 0) {
        *(_QWORD*)(*(_QWORD*)(v3 + 56) + *(_QWORD*)(v3 + 48) + 8LL) = a2;
        *(__int64*)((char*)a2 + *(_QWORD*)(v3 + 56)) = **(_QWORD**)(v3 + 72);
      }
      else {
        *(_QWORD*)(v3 + 40) = a2;
      }
      *(_QWORD*)(v3 + 48) = a2;
      break;
    case 1:
    LABEL_22:
      *(__int64*)((char*)a2 + *(_QWORD*)(v3 + 96)) = 0;
      *(__int64*)((char*)a2 + *(_QWORD*)(v3 + 96) + 8) = 0;
      if (**(_QWORD**)(v3 + 112) != 0) {
        *(_QWORD*)(*(_QWORD*)(v3 + 96) + *(_QWORD*)(v3 + 88) + 8LL) = a2;
        *(__int64*)((char*)a2 + *(_QWORD*)(v3 + 96)) = **(_QWORD**)(v3 + 112);
      }
      else {
        *(_QWORD*)(v3 + 80) = a2;
      }
      *(_QWORD*)(v3 + 88) = a2;
      break;
    case 2:
    LABEL_16:
      *(__int64*)((char*)a2 + *(_QWORD*)(v3 + 136)) = 0;
      *(__int64*)((char*)a2 + *(_QWORD*)(v3 + 136) + 8) = 0;
      if (**(_QWORD**)(v3 + 152) != 0) {
        *(_QWORD*)(*(_QWORD*)(v3 + 136) + *(_QWORD*)(v3 + 128) + 8LL) = a2;
        *(__int64*)((char*)a2 + *(_QWORD*)(v3 + 136)) = **(_QWORD**)(v3 + 152);
      }
      else {
        *(_QWORD*)(v3 + 120) = a2;
      }
      *(_QWORD*)(v3 + 128) = a2;
      break;
    case 3:
    LABEL_10:
      *(__int64*)((char*)a2 + *(_QWORD*)(v3 + 176)) = 0;
      *(__int64*)((char*)a2 + *(_QWORD*)(v3 + 176) + 8) = 0;
      if (**(_QWORD**)(v3 + 192) != 0) {
        *(_QWORD*)(*(_QWORD*)(v3 + 176) + *(_QWORD*)(v3 + 168) + 8LL) = a2;
        *(__int64*)((char*)a2 + *(_QWORD*)(v3 + 176)) = **(_QWORD**)(v3 + 192);
      }
      else {
        *(_QWORD*)(v3 + 160) = a2;
      }
      *(_QWORD*)(v3 + 168) = a2;
      break;
    case 4:
    LABEL_19:
      *(__int64*)((char*)a2 + *(_QWORD*)(v3 + 216)) = 0;
      *(__int64*)((char*)a2 + *(_QWORD*)(v3 + 216) + 8) = 0;
      if (**(_QWORD**)(v3 + 232) != 0) {
        *(_QWORD*)(*(_QWORD*)(v3 + 216) + *(_QWORD*)(v3 + 208) + 8LL) = a2;
        *(__int64*)((char*)a2 + *(_QWORD*)(v3 + 216)) = **(_QWORD**)(v3 + 232);
      }
      else {
        *(_QWORD*)(v3 + 200) = a2;
      }
      *(_QWORD*)(v3 + 208) = a2;
      break;
    case 5:
    LABEL_37:
      *(__int64*)((char*)a2 + *(_QWORD*)(v3 + 256)) = 0;
      *(__int64*)((char*)a2 + *(_QWORD*)(v3 + 256) + 8) = 0;
      if (**(_QWORD**)(v3 + 272) != 0) {
        *(_QWORD*)(*(_QWORD*)(v3 + 256) + *(_QWORD*)(v3 + 248) + 8LL) = a2;
        *(__int64*)((char*)a2 + *(_QWORD*)(v3 + 256)) = **(_QWORD**)(v3 + 272);
      }
      else {
        *(_QWORD*)(v3 + 240) = a2;
      }
      *(_QWORD*)(v3 + 248) = a2;
      break;
    case 6:
    LABEL_31:
      *(__int64*)((char*)a2 + *(_QWORD*)(v3 + 296)) = 0;
      *(__int64*)((char*)a2 + *(_QWORD*)(v3 + 296) + 8) = 0;
      if (**(_QWORD**)(v3 + 312) != 0) {
        *(_QWORD*)(*(_QWORD*)(v3 + 296) + *(_QWORD*)(v3 + 288) + 8LL) = a2;
        *(__int64*)((char*)a2 + *(_QWORD*)(v3 + 296)) = **(_QWORD**)(v3 + 312);
      }
      else {
        *(_QWORD*)(v3 + 280) = a2;
      }
      *(_QWORD*)(v3 + 288) = a2;
      break;
    case 7:
    LABEL_34:
      *(__int64*)((char*)a2 + *(_QWORD*)(v3 + 336)) = 0;
      *(__int64*)((char*)a2 + *(_QWORD*)(v3 + 336) + 8) = 0;
      if (**(_QWORD**)(v3 + 352) != 0) {
        *(_QWORD*)(*(_QWORD*)(v3 + 336) + *(_QWORD*)(v3 + 328) + 8LL) = a2;
        *(__int64*)((char*)a2 + *(_QWORD*)(v3 + 336)) = **(_QWORD**)(v3 + 352);
      }
      else {
        *(_QWORD*)(v3 + 320) = a2;
      }
      *(_QWORD*)(v3 + 328) = a2;
      break;
    case 8:
    LABEL_28:
      *(__int64*)((char*)a2 + *(_QWORD*)(v3 + 376)) = 0;
      *(__int64*)((char*)a2 + *(_QWORD*)(v3 + 376) + 8) = 0;
      if (**(_QWORD**)(v3 + 392) != 0) {
        *(_QWORD*)(*(_QWORD*)(v3 + 376) + *(_QWORD*)(v3 + 368) + 8LL) = a2;
        *(__int64*)((char*)a2 + *(_QWORD*)(v3 + 376)) = **(_QWORD**)(v3 + 392);
      }
      else {
        *(_QWORD*)(v3 + 360) = a2;
      }
      *(_QWORD*)(v3 + 368) = a2;
      break;
    case 9:
    LABEL_25:
      *(__int64*)((char*)a2 + *(_QWORD*)(v3 + 416)) = 0;
      *(__int64*)((char*)a2 + *(_QWORD*)(v3 + 416) + 8) = 0;
      if (**(_QWORD**)(v3 + 432) != 0) {
        *(_QWORD*)(*(_QWORD*)(v3 + 416) + *(_QWORD*)(v3 + 408) + 8LL) = a2;
        *(__int64*)((char*)a2 + *(_QWORD*)(v3 + 416)) = **(_QWORD**)(v3 + 432);
      }
      else {
        *(_QWORD*)(v3 + 400) = a2;
      }
      *(_QWORD*)(v3 + 408) = a2;
      break;
    case 10:
    LABEL_13:
      *(__int64*)((char*)a2 + *(_QWORD*)(v3 + 456)) = 0;
      *(__int64*)((char*)a2 + *(_QWORD*)(v3 + 456) + 8) = 0;
      if (**(_QWORD**)(v3 + 472) != 0) {
        *(_QWORD*)(*(_QWORD*)(v3 + 456) + *(_QWORD*)(v3 + 448) + 8LL) = a2;
        *(__int64*)((char*)a2 + *(_QWORD*)(v3 + 456)) = **(_QWORD**)(v3 + 472);
      }
      else {
        *(_QWORD*)(v3 + 440) = a2;
      }
      *(_QWORD*)(v3 + 448) = a2;
      break;
    default:
      return result;
    }
  }
  return result;
}

__int64 Crc32List_120360()
{
  return (*(__int64 (**)(__int64))(*(_QWORD*)snd_s_target + 1104LL))(
      snd_s_target);
}

void Crc32List_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;

  v2 = a1[2];
  *a1 = GameData_2134570[0] + 2;
  if (*((_BYTE*)a1 + 64) == 1) {
    if (v2 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)snd_g_memory + 24LL))(snd_g_memory);
      a1[2] = 0;
    }
    *((_BYTE*)a1 + 64) = 0;
    a1[1] = snd_fnd_Crc32List_List_vtable;
  }
  else {
    a1[1] = snd_fnd_Crc32List_List_vtable;
    if (v2 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)snd_g_memory + 24LL))(snd_g_memory);
      a1[2] = 0;
    }
  }
  nn_os_FinalizeMutex(a1 + 4);
  GameRoutine_651250(a1, 0x48u);
}

#pragma GCC visibility pop
