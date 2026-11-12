#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
extern _UNKNOWN GameData_2140050;
extern _UNKNOWN GameData_2140060;
extern _UNKNOWN GameData_2140070;
struct PseudoSret GameRoutine_10e040(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_112180(_QWORD, _QWORD);
__int64 GameRoutine_112290(_QWORD, float);
__int64 GameRoutine_1163b0(_QWORD);
__int64 GameRoutine_118ff0(_QWORD);
__int64 GameRoutine_a2af20(_QWORD, _QWORD, const char*, ...);
__attribute__((swiftcall)) void FileManager_10e040(PSEUDO_X8, __int64, __int64,
                                                   unsigned int);
__int64 Crc32List_1163b0();
__int64 GameRoutine_112180_alt1(__int64, __int64) __asm__("GameRoutine_112180");
__int64 GameRoutine_a2af20_alt1(__int64, __int64, __int64,
                                ...) __asm__("GameRoutine_a2af20");
__int64 snd_fnd_WeakHandle_get(__int64);
extern _UNKNOWN snd_data_s_dataFile;
extern _UNKNOWN snd_data_s_settingFile;
__int64 GameHr_f38b0(const char* a1);
__int64 GameHr_f3930(const char* a1);
__int64 GameHr_f39b0(const char* a1);

__int64 GameHr_f38b0(const char* a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  _BYTE v5[16];
  _BYTE v6[256];

  GameRoutine_a2af20_alt1((__int64)v6, 256, (__int64)"%s/data_snd.elf", a1);
  v1 = Crc32List_1163b0();
  v2 = GameRoutine_118ff0(v1);
  FileManager_10e040((void*)((__int64)v5), v2, (__int64)v6, 0x40u);
  GameRoutine_112180_alt1((__int64)&snd_data_s_settingFile, (__int64)v5);
  v3 = snd_fnd_WeakHandle_get((__int64)&snd_data_s_settingFile);
  return (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 48LL))(v3);
}

__int64 GameHr_f3930(const char* a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  _BYTE v5[16];
  _BYTE v6[256];

  GameRoutine_a2af20_alt1((__int64)v6, 256, (__int64)"%s/data_sndSystem.elf",
                          a1);
  v1 = Crc32List_1163b0();
  v2 = GameRoutine_118ff0(v1);
  FileManager_10e040((void*)((__int64)v5), v2, (__int64)v6, 0x40u);
  GameRoutine_112180_alt1((__int64)&snd_data_s_dataFile, (__int64)v5);
  v3 = snd_fnd_WeakHandle_get((__int64)&snd_data_s_dataFile);
  return (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 48LL))(v3);
}

__int64 GameHr_f39b0(const char* a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  _BYTE v5[16];
  _BYTE v6[256];

  GameRoutine_a2af20_alt1((__int64)v6, 256, (__int64)"%s/data_sndVibration.elf",
                          a1);
  v1 = Crc32List_1163b0();
  v2 = GameRoutine_118ff0(v1);
  FileManager_10e040((void*)((__int64)v5), v2, (__int64)v6, 0x40u);
  GameRoutine_112180_alt1((__int64)&GameData_2140070, (__int64)v5);
  v3 = snd_fnd_WeakHandle_get((__int64)&GameData_2140070);
  return (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 48LL))(v3);
}

#pragma GCC visibility pop
