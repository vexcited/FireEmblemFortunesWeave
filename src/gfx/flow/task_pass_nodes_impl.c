#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
_QWORD* GameRoutine_b53780(__int64, __int64);
_QWORD* GameRoutine_b57660(__int64, __int64);
_QWORD* GameRoutine_b728e0(__int64*, __int64);
_QWORD* GameRoutine_b777f0(__int64, __int64);
_QWORD* ResourceBuilder_b677a0(_QWORD* result, _QWORD*, __int64, _QWORD*,
                               __int64);
__int64 GameRoutine_18dfa20(_QWORD, _QWORD);
__int64 GameRoutine_18dfe10(_QWORD);
__int64 GameRoutine_18e35d0(_QWORD, _QWORD);
__int64 GameRoutine_18e3ac0(_QWORD);
__int64 GameRoutine_19132c0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_191eec0(_QWORD);
__int64 GameRoutine_1992aa0(_QWORD, _QWORD);
__int64 GameRoutine_1996450(_QWORD, _QWORD);
__int64 GameRoutine_20();
__int64 GameRoutine_5d38c0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_604050(_QWORD);
__int64 GameRoutine_6040f0(_QWORD, _QWORD);
__int64 GameRoutine_60a020(void);
__int64 GameRoutine_64df20(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a91100(__int64*, __int64, __int64, __int64);
__int64 GameRoutine_ad6000(__int64, unsigned __int64, __int64);
__int64 GameRoutine_b48e70(_QWORD, _QWORD);
__int64 GameRoutine_b48f90(_QWORD, _QWORD);
__int64 GameRoutine_b494f0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_b4a3f0(_QWORD, _QWORD);
__int64 GameRoutine_b4a510(_QWORD, _QWORD);
__int64 GameRoutine_b4af90(__int64*, __int64, __int64);
__int64 GameRoutine_b4ba10(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_b4bca0(__int64*, __int64);
__int64 GameRoutine_b4c560(_DWORD*, _QWORD*);
__int64 GameRoutine_b4c7e0(__int64 result, __int64, _QWORD*, _QWORD*, __int64);
__int64 GameRoutine_b4f100(_QWORD, _QWORD);
__int64 GameRoutine_b4f220(_QWORD, _QWORD);
__int64 GameRoutine_b4f340(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_b4f490(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_b509c0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_b50b10(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_b50c60(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_b51900(__int64, _QWORD*, _QWORD*, _QWORD*);
__int64 GameRoutine_b52720(__int64, __int64, __int64);
__int64 GameRoutine_b52c00(__int64, __int64, __int64, _QWORD*, __int64);
__int64 GameRoutine_b53d40(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_b546e0(__int64, _QWORD*, _QWORD*, _QWORD*, unsigned int*);
__int64 GameRoutine_b54ca0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_b54e00(__int64, __int64);
__int64 GameRoutine_b565d0(_DWORD*, _QWORD*, _QWORD*, _QWORD*, unsigned int*);
__int64 GameRoutine_b56ec0(__int64*, __int64, __int64);
__int64 GameRoutine_b57060(__int64, _QWORD*, _QWORD*, _QWORD*, unsigned int*);
__int64 GameRoutine_b59800(_QWORD*, __int64);
__int64 GameRoutine_b59e10(__int64, _QWORD*, _QWORD*, _QWORD*);
__int64 GameRoutine_b5a5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_b5a720(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_b5a870(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_b5acb0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_b5ae00(__int64, __int64);
__int64 GameRoutine_b5b5a0(__int64, _QWORD*, _QWORD*, _QWORD*, __int64);
__int64 GameRoutine_b5c1f0(__int64, __int64);
__int64 GameRoutine_b5c580(__int64, _QWORD*, _QWORD*, _QWORD*, float*);
__int64 GameRoutine_b5e3a0(__int64, __int64*, _QWORD*, _QWORD*, _QWORD*);
__int64 GameRoutine_b60140(__int64, _QWORD*, __int64*, _QWORD*, __int64);
__int64 GameRoutine_b62660(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_b62cd0(__int64*, __int64, __int64, __int64, __int64,
                           __int64);
__int64 GameRoutine_b63e60(__int64*, _QWORD*, _DWORD*);
__int64 GameRoutine_b64600(__int64, _QWORD*, _QWORD*, _QWORD*, unsigned int*);
__int64 GameRoutine_b65120(__int64, __int64);
__int64 GameRoutine_b65790(_DWORD*, __int64, float*);
__int64 GameRoutine_b65db0(__int64, _QWORD*, _QWORD*, _QWORD*, unsigned int*);
__int64 GameRoutine_b66510(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_b67250(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_b673a0(__int64, __int64);
__int64 GameRoutine_b67a80(__int64, __int64*, _QWORD*, _QWORD*, unsigned int*);
__int64 GameRoutine_b68010(_QWORD*, _QWORD*, _QWORD*, __int64);
__int64 GameRoutine_b68480(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_b685d0(__int64, __int64);
__int64 GameRoutine_b68c90(__int64*, __int64);
__int64 GameRoutine_b68fc0(__int64, _QWORD*, _QWORD*, _QWORD*, unsigned int*);
__int64 GameRoutine_b692a0(__int64, __int64);
__int64 GameRoutine_b69b80(_DWORD*, __int64, __int64);
__int64 GameRoutine_b69dc0(__int64, _QWORD*, _QWORD*, _QWORD*, __int64);
__int64 GameRoutine_b6b000(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_b6b150(__int64, __int64);
__int64 GameRoutine_b6bbe0(_QWORD, _QWORD);
__int64 GameRoutine_b6bd00(_QWORD, _QWORD);
__int64 GameRoutine_b6be20(__int64, __int64);
__int64 GameRoutine_b6bf20(__int64, __int64);
__int64 GameRoutine_b6d0a0(_DWORD*, _QWORD*, _QWORD*, _QWORD*, int*);
__int64 GameRoutine_b6d870(__int64, __int64);
__int64 GameRoutine_b6eda0(__int64, __int64);
__int64 GameRoutine_b6f640(__int64, __int64);
__int64 GameRoutine_b6f990(_DWORD*, __int64);
__int64 GameRoutine_b6fcd0(__int64, _QWORD*, _QWORD*, _QWORD*, unsigned int*);
__int64 GameRoutine_b70550(__int64, _QWORD**, _QWORD*, _QWORD*);
__int64 GameRoutine_b70bc0(__int64, _QWORD**, _QWORD*, _QWORD*);
__int64 GameRoutine_b717c0(__int64, __int64);
__int64 GameRoutine_b71980(__int64, _QWORD*, _QWORD*, _QWORD*, unsigned int*);
__int64 GameRoutine_b73380(__int64, __int64);
__int64 GameRoutine_b73720(__int64, _QWORD*, __int64, _QWORD*, unsigned int*);
__int64 GameRoutine_b743b0(__int64*, _QWORD*, int*);
__int64 GameRoutine_b74f60(__int64*, __int64);
__int64 GameRoutine_b75c60(_DWORD*, __int64, __int64);
__int64 GameRoutine_b762a0(__int64, __int64, __int64, _QWORD*, __int64);
__int64 GameRoutine_b764b0(__int64, _QWORD*, _QWORD*, _QWORD*, __int64);
__int64 GameRoutine_b79740(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_b79890(_QWORD*, __int64);
__int64 GameRoutine_b79df0(_QWORD*);
__int64 GameRoutine_b7b6a0(__int64*, __int64);
__int64 GameRoutine_b7bd00(_QWORD*);
__int64 GameRoutine_b7c060(int*, _QWORD*, _QWORD*, __int64);
__int64 GameRoutine_b7c560(__int64, _QWORD**, _QWORD*, _QWORD*, __int64);
__int64 GameRoutine_b7cee0(__int64, __int64, __int64, _QWORD*, __int64);
__int64 GameRoutine_b7d4e0(__int64*, __int64);
__int64 GameRoutine_b7d840(_QWORD*);
__int64 GameRoutine_b7e050(__int64, __int64);
__int64 GameRoutine_b7e1f0(_DWORD*, _QWORD*, _QWORD*, _QWORD*, unsigned int*);
__int64 GameRoutine_b97100(void);
__int64 GameRoutine_bb8af0(__int64, int*);
__int64 GameRoutine_beecc0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_bfa6d0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_bfae60(_QWORD);
__int64 GameRoutine_bfaf50(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_bfc9a0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_c5be60(void);
__int64 GameRoutine_c77190(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 ResourceBuilder_b49250(_QWORD, _QWORD);
__int64 ResourceBuilder_b4c220(__int64*);
__int64 ResourceBuilder_b4c3d0(__int64 result);
__int64 ResourceBuilder_b4d4e0(__int64 result, _QWORD*, _QWORD*, _QWORD*,
                               __int64);
__int64 ResourceBuilder_b4dd70(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 ResourceBuilder_b4f9e0(_QWORD*);
__int64 ResourceBuilder_b51360(_QWORD*);
__int64 ResourceBuilder_b51760(_DWORD*, __int64, __int64*);
__int64 ResourceBuilder_b52a20(__int64*, __int64, __int64);
__int64 ResourceBuilder_b53170(_QWORD*, __int64, unsigned __int64, __int64*);
__int64 ResourceBuilder_b538b0(__int64, __int64, __int64, _QWORD*, __int64);
__int64 ResourceBuilder_b540f0(__int64 result);
__int64 ResourceBuilder_b54250(__int64, __int64);
__int64 ResourceBuilder_b561b0(_QWORD*);
__int64 ResourceBuilder_b564c0(__int64, __int64, __int64, __int64, __int64);
__int64 ResourceBuilder_b57de0(_QWORD*);
__int64 ResourceBuilder_b594d0(_QWORD*, _QWORD*, _QWORD*, unsigned int*);
__int64 ResourceBuilder_b59ce0(_QWORD*);
__int64 ResourceBuilder_b5a4b0(__int64, __int64);
__int64 ResourceBuilder_b5b3c0(_QWORD*);
__int64 ResourceBuilder_b5c4b0(_QWORD*);
__int64 ResourceBuilder_b5c820(__int64, __int64);
__int64 ResourceBuilder_b5d4d0(_QWORD*);
__int64 ResourceBuilder_b5ed80(__int64, __int64*, _QWORD*, _QWORD*, int);
__int64 ResourceBuilder_b5fa20(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 ResourceBuilder_b5fb80(__int64, __int64);
__int64 ResourceBuilder_b60c80(_QWORD*, __int64, int*);
__int64 ResourceBuilder_b61080(__int64, __int64);
__int64 ResourceBuilder_b619f0(_QWORD*);
__int64 ResourceBuilder_b62570(__int64, __int64, __int64);
__int64 ResourceBuilder_b627b0(__int64*, __int64, __int64);
__int64 ResourceBuilder_b63990(_QWORD*);
__int64 ResourceBuilder_b64090(__int64, __int64, _QWORD*, _QWORD*, __int64);
__int64 ResourceBuilder_b642d0(__int64, _QWORD*, _QWORD*, _QWORD*, __int64);
__int64 ResourceBuilder_b65600(_QWORD*);
__int64 ResourceBuilder_b662e0(__int64, __int64, __int64);
__int64 ResourceBuilder_b66660(__int64, __int64);
__int64 ResourceBuilder_b667c0(_DWORD*, _QWORD**, __int64, _QWORD*, __int64);
__int64 ResourceBuilder_b66cf0(__int64, _QWORD*, _QWORD*, _QWORD*, __int64);
__int64 ResourceBuilder_b67660(_QWORD*);
__int64 ResourceBuilder_b68ae0(_QWORD*);
__int64 ResourceBuilder_b69960(_QWORD*);
__int64 ResourceBuilder_b6b430(_QWORD*);
__int64 ResourceBuilder_b6c430(__int64, _QWORD*, _QWORD*, _QWORD*, int*);
__int64 ResourceBuilder_b6cef0(__int64*, __int64);
__int64 ResourceBuilder_b6daf0(_QWORD*);
__int64 ResourceBuilder_b6e0b0(__int64, __int64, __int64);
__int64 ResourceBuilder_b6e230(__int64, __int64);
__int64 ResourceBuilder_b6e370(__int64, __int64);
__int64 ResourceBuilder_b6e4e0(__int64, _QWORD*, _QWORD*, _QWORD*,
                               unsigned int*);
__int64 ResourceBuilder_b6f2d0(_QWORD*, _QWORD*, _QWORD*, unsigned int*);
__int64 ResourceBuilder_b6f8b0(_QWORD*);
__int64 ResourceBuilder_b702d0(_QWORD*);
__int64 ResourceBuilder_b703a0(__int64*, _QWORD*);
__int64 ResourceBuilder_b70b00(_QWORD*);
__int64 ResourceBuilder_b71010(__int64 result, _QWORD*, _QWORD*, __int64);
__int64 ResourceBuilder_b71cc0(__int64 result, __int64*, __int64);
__int64 ResourceBuilder_b73120(_QWORD*);
__int64 ResourceBuilder_b75a00(_QWORD*);
__int64 ResourceBuilder_b77b60(_QWORD*);
__int64 SpineModel_64dde0(_QWORD, _QWORD, _QWORD);
__int64 exp2f(float);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern _DWORD GameData_1b7bcc8[7];
extern _UNKNOWN* GameData_212c2a0;
extern _UNKNOWN* GameData_212e938;
extern _UNKNOWN** GameData_212e470[15];
extern _UNKNOWN** GameData_212e478[14];
extern _UNKNOWN** GameData_212e480[13];
extern _UNKNOWN** GameData_212e488[12];
extern _UNKNOWN** GameData_212e4d8[2];
extern _UNKNOWN** GameData_212e778[2];
extern _UNKNOWN** GameData_212e780;
extern _UNKNOWN** GameData_212e870[6];
extern __int64 (*GameData_1fc6bd0[])();
extern __int64 (*GameData_1fc7590[])();
extern __int64 (*GameData_1fc7b10[])();
extern __int64 (*GameData_1fc8750[])();
extern __int64 (*GameData_1fc87e0[])();
extern __int64 (*GameData_1fc8870[])();
extern __int64 (*GameData_1fc88b8[])();
extern __int64 (*GameData_1fc8948[])();
extern __int64 (*GameData_1fc89d8[])();
extern __int64 (*GameData_1fc8c88[])();
extern __int64 (*GameData_1fc8d18[])();
extern __int64 (*GameData_1fc8da8[])();
extern __int64 (*GameData_1fc9d98[])();
extern __int64 (*GameData_1fc9e28[])();
extern __int64 (*GameData_1fc9eb8[])();
extern __int64 (*GameData_1fca168[])();
extern __int64 (*GameData_1fca1f8[])();
extern __int64 (*GameData_1fca288[])();
extern __int64 (*GameData_1fca438[])();
extern __int64 (*GameData_1fca4c8[])();
extern __int64 (*GameData_1fca558[])();
extern __int64 (*GameData_1fcb8d0[])();
extern __int64 (*GameData_1fcb960[])();
extern __int64 (*GameData_1fcb9f0[])();
extern __int64 (*GameData_1fcba38[])();
extern __int64 (*GameData_1fcbac8[])();
extern __int64 (*GameData_1fcbb58[])();
extern __int64 (*GameData_1fcbba0[])();
extern __int64 (*GameData_1fcbc30[])();
extern __int64 (*GameData_1fcbcc0[])();
extern __int64 (*GameData_1fcbfd8[])();
extern __int64 (*GameData_1fcc068[])();
extern __int64 (*GameData_1fcc0f8[])();
extern __int64 (*GameData_1fcc140[])();
extern __int64 (*GameData_1fcc1d0[])();
extern __int64 (*GameData_1fcc260[])();
extern __int64 (*GameData_1fcddf8[])();
extern __int64 (*GameData_1fcde88[])();
extern __int64 (*GameData_1fcdf18[])();
extern __int64 (*GameData_1fcdf60[])();
extern __int64 (*GameData_1fcdff0[])();
extern __int64 (*GameData_1fce080[])();
extern __int64 (*GameData_1fce500[])();
extern __int64 (*GameData_1fce590[])();
extern __int64 (*GameData_1fce620[])();
extern __int64 (*gfx_flow_ResourceBase_Destroy_ResourceBase_b32fd0_ptr[])();
extern __int64 eft_g_effectSystem;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_g_frame_clock;
extern __int64 game_map_MapColorPalette_g_texture_archives;
extern __int64* game_g_frame_clock_ptr[3];
extern __int64* game_spine_g_resource_releaser_ptr;
extern int GameData_21675c0;
extern int GameData_21675cc;
extern int GameData_22030f8;
extern int GameData_22030fc;
__attribute__((swiftcall)) void GameRoutine_53c20(PSEUDO_X8, _QWORD);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_b32f30(_QWORD);
void __attribute__((noreturn)) GameRoutine_b32f50(void);
void __attribute__((noreturn)) GameRoutine_b32fb0(_QWORD);
void __attribute__((noreturn)) String_60a1d0(_QWORD, _QWORD, _QWORD);
__int64 TaskPassNodes_b88c20(__int64 a1, __int64 a2, __int64 a3);
__int64 TaskPassNodes_b88dd0_alt1(__int64 a1, __int64* a2,
                                  _QWORD* a3) __asm__("TaskPassNodes_b88dd0");
__int64 TaskPassNodes_b896c0(_QWORD* a1);
__int64 TaskPassNodes_b89ce0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                             __int64 a5);
__int64 TaskPassNodes_b8a560(__int64 a1, __int64 a2, __int64 a3);
__int64 TaskPassNodes_b8b4a0(__int64 a1, __int64 a2, __int64 a3);
__int64 TaskPassNodes_b8bac0(__int64 a1, _QWORD** a2, __int64 a3);
__int64 TaskPassNodes_b8bc60_alt1(__int64 a1, __int64* a2,
                                  __int64 a3) __asm__("TaskPassNodes_b8bc60");
__int64 TaskPassNodes_b8c000_alt1(__int64 a1, __int64 a2,
                                  __int64 a3) __asm__("TaskPassNodes_b8c000");
__int64 TaskPassNodes_b8c770_alt1(__int64 a1, __int64 a2,
                                  __int64 a3) __asm__("TaskPassNodes_b8c770");
__int64 TaskPassNodes_b8ca50(__int64 a1, _QWORD* a2, __int64 a3);
__int64 TaskPassNodes_b8ce10(__int64 a1, __int64 a2, __int64 a3);
__int64 TaskPassNodes_b8d210_alt1(__int64 a1, _QWORD** a2,
                                  __int64 a3) __asm__("TaskPassNodes_b8d210");
__int64 TaskPassNodes_b8d3e0(__int64 a1, __int64* a2, __int64 a3);
__int64 TaskPassNodes_b8d780_alt1(__int64 a1, __int64 a2,
                                  __int64 a3) __asm__("TaskPassNodes_b8d780");
__int64 TaskPassNodes_b8d9e0(__int64 a1, __int64 a2, _QWORD* a3);
__int64 TaskPassNodes_b8dd70_alt1(__int64 a1, __int64 a2,
                                  __int64 a3) __asm__("TaskPassNodes_b8dd70");
__int64 TaskPassNodes_b8dfb0(__int64 a1, _QWORD* a2, _QWORD* a3);
__int64 TaskPassNodes_b8e350_alt1(__int64 a1, _QWORD** a2,
                                  __int64 a3) __asm__("TaskPassNodes_b8e350");
__int64 TaskPassNodes_b8e580(__int64 a1, __int64 a2, _QWORD* a3);
__int64 TaskPassNodes_b8e9f0_alt1(__int64 a1, __int64 a2,
                                  __int64 a3) __asm__("TaskPassNodes_b8e9f0");
__int64 TaskPassNodes_b8ec00_alt1(__int64 a1, __int64 a2,
                                  _QWORD* a3) __asm__("TaskPassNodes_b8ec00");
__int64 TaskPassNodes_b8eff0(__int64 a1, __int64* a2, __int64 a3);
__int64 TaskPassNodes_b8f5a0(__int64 a1, __int64 a2, _QWORD* a3, _QWORD* a4,
                             _QWORD* a5, _QWORD* a6, _QWORD* a7, int a8);
__int64 TaskPassNodes_b8f8a0(__int64 result);
__int64 TaskPassNodes_b909a0(__int64 a1, __int64 a2, __int64 a3);
__int64 TaskPassNodes_b91180(__int64 a1, _QWORD* a2, __int64 a3);
_QWORD* TaskPassNodes_b91200(_QWORD* result, __int64 a2, _QWORD* a3);
__int64 TaskPassNodes_b92160(__int64 a1, _QWORD** a2, __int64* a3);
__int64 TaskPassNodes_b924a0(__int64 a1, _QWORD* a2, __int64 a3);
__int64 TaskPassNodes_b92640(__int64 a1, __int64 a2, _QWORD* a3);
__int64 TaskPassNodes_b927e0(__int64 a1, __int64* a2, __int64 a3);
__int64 TaskPassNodes_b929e0_alt1(__int64 a1, __int64 a2,
                                  _QWORD* a3) __asm__("TaskPassNodes_b929e0");
__int64 TaskPassNodes_b92dc0(__int64 a1, _QWORD* a2, __int64 a3);
__int64 TaskPassNodes_b93130(__int64 a1, __int64 a2, __int64 a3);
__int64 TaskPassNodes_b932c0(__int64 a1, _QWORD** a2, _QWORD* a3);
__int64 TaskPassNodes_b936e0(__int64 a1, _QWORD* a2, __int64 a3);
__int64 TaskPassNodes_b93a50_alt1(__int64 a1, _QWORD** a2,
                                  __int64 a3) __asm__("TaskPassNodes_b93a50");
__int64 TaskPassNodes_b94680(__int64 a1, __int64 a2, __int64 a3);
__int64 TaskPassNodes_b94930_alt1(__int64* a1, __int64 a2, __int64* a3,
                                  __int64* a4, __int64* a5, __int64* a6,
                                  __int64* a7) __asm__("TaskPassNodes_b94930");
__int64 TaskPassNodes_b94cd0(_QWORD* a1);
__int64 TaskPassNodes_b94fe0(__int64 a1, __int64* a2, _QWORD* a3);
__int64 TaskPassNodes_b954b0(__int64 result, __int64* a2, __int64 a3,
                             __int64 a4);
__int64 TaskPassNodes_b978e0(__int64 a1, unsigned __int8* a2, __int64* a3);
__int64 TaskPassNodes_b97c60(__int64 a1, __int64 a2, _QWORD* a3);
__int64 TaskPassNodes_b98340_alt1(__int64 a1, __int64 a2,
                                  __int64 a3) __asm__("TaskPassNodes_b98340");
__int64 TaskPassNodes_b98580(__int64 a1, __int64 a2, _QWORD* a3);
__int64 TaskPassNodes_b98a90(__int64 a1, _QWORD** a2, __int64 a3);
__int64 TaskPassNodes_b98c30(__int64 a1, _QWORD** a2, __int64* a3);
__int64 TaskPassNodes_b98ff0(__int64 a1, _QWORD** a2, __int64 a3);
__int64 TaskPassNodes_b99230_alt1(__int64 a1, __int64 a2,
                                  _QWORD* a3) __asm__("TaskPassNodes_b99230");
__int64 TaskPassNodes_b995b0(__int64 a1, _QWORD** a2, __int64 a3);
__int64 TaskPassNodes_b99960(__int64 a1, __int64** a2, __int64 a3);
__int64 TaskPassNodes_b9a290_alt1(__int64 a1, __int64** a2,
                                  __int64 a3) __asm__("TaskPassNodes_b9a290");
__int64 TaskPassNodes_b9a480(__int64 a1, __int64 a2, _QWORD* a3);
__int64 TaskPassNodes_b9aa80_alt1(_QWORD* a1, __int64 a2,
                                  _QWORD* a3) __asm__("TaskPassNodes_b9aa80");
__int64 TaskPassNodes_b9b090(_QWORD* a1, __int64* a2, _QWORD* a3);
__int64 TaskPassNodes_b9b260(__int64 a1, __int64* a2, __int64 a3);
__int64 TaskPassNodes_b9b500(_QWORD* a1, __int64 a2, unsigned __int64 a3,
                             __int64* a4);
__int64 TaskPassNodes_b9b860_alt1(__int64 a1, __int64 a2,
                                  __int64* a3) __asm__("TaskPassNodes_b9b860");
__int64 TaskPassNodes_b9bd10(__int64 a1, _QWORD** a2, __int64 a3);
__int64 TaskPassNodes_b9be90(__int64 a1, _QWORD** a2, __int64* a3);
__int64 TaskPassNodes_b9c3d0(__int64 a1, __int64* a2, __int64 a3);
__int64 TaskPassNodes_b9c620_alt1(__int64 a1, __int64 a2,
                                  _QWORD* a3) __asm__("TaskPassNodes_b9c620");
__int64 TaskPassNodes_b9c8f0_alt1(__int64* a1, __int64 a2, __int64* a3,
                                  __int64* a4, __int64* a5, __int64* a6,
                                  __int64* a7) __asm__("TaskPassNodes_b9c8f0");
__int64 TaskPassNodes_b9d3a0(__int64 result);
__int64 TaskPassNodes_b9fd30(__int64 a1, __int64 a2, _QWORD* a3);
__int64 TaskPassNodes_b9ff60(__int64 result, __int64 a2, _QWORD* a3,
                             _QWORD* a4);
__int64 TaskPassNodes_ba01d0(__int64 result, __int64 a2, _QWORD* a3,
                             __int64* a4);
__int64 TaskPassNodes_ba09c0(__int64 result, __int64 a2, _QWORD* a3,
                             __int64* a4);
_QWORD* TaskPassNodes_ba3910(__int64 a1, __int64 a2);
__int64 TaskPassNodes_ba3b30(__int64 a1, __int64* a2, __int64 a3);
__int64 TaskPassNodes_ba3d00(__int64 a1, __int64 a2, _QWORD* a3);
__int64 TaskPassNodes_ba41c0(__int64 a1, _QWORD** a2, __int64 a3);
__int64 TaskPassNodes_ba43a0(__int64 a1, __int64 a2, _QWORD* a3);
__int64 TaskPassNodes_ba4880_alt1(_QWORD** a1, _QWORD** a2,
                                  __int64 a3) __asm__("TaskPassNodes_ba4880");
__int64 TaskPassNodes_ba4a70(__int64 a1, __int64 a2, _QWORD* a3);
__int64 TaskPassNodes_ba4e10_alt1(__int64 a1, _QWORD** a2,
                                  __int64 a3) __asm__("TaskPassNodes_ba4e10");
__int64 TaskPassNodes_ba5030(__int64 a1, __int64 a2, _QWORD* a3);
__int64 TaskPassNodes_ba5aa0(__int64 a1, __int64* a2, _QWORD* a3);
__int64 TaskPassNodes_ba5e70(__int64 a1, __int64* a2, __int64 a3);
__int64 TaskPassNodes_ba6030(__int64 a1, __int64 a2, _QWORD* a3);
__int64 TaskPassNodes_ba63f0_alt1(__int64 a1, _QWORD** a2,
                                  _QWORD* a3) __asm__("TaskPassNodes_ba63f0");
__int64 TaskPassNodes_ba6640_alt1(__int64 a1, __int64 a2,
                                  _QWORD* a3) __asm__("TaskPassNodes_ba6640");
__int64 TaskPassNodes_ba7440(__int64 a1, __int64* a2, _QWORD* a3);
__int64 TaskPassNodes_ba7820(__int64 a1, __int64 a2, __int64 a3);
__int64 TaskPassNodes_ba7a30(__int64 a1, __int64 a2, _QWORD* a3);
__int64 TaskPassNodes_ba7ea0_alt1(__int64 a1, _QWORD** a2,
                                  __int64 a3) __asm__("TaskPassNodes_ba7ea0");
__int64 TaskPassNodes_ba85a0_alt1(__int64 a1, _QWORD** a2,
                                  __int64 a3) __asm__("TaskPassNodes_ba85a0");
__int64 TaskPassNodes_ba8770(__int64 a1, __int64 a2, _QWORD* a3);
__int64 TaskPassNodes_ba91a0(__int64 a1, __int64** a2, __int64 a3);
__int64 TaskPassNodes_ba92f0_alt1(__int64 a1, __int64 a2,
                                  _QWORD* a3) __asm__("TaskPassNodes_ba92f0");
__int64 TaskPassNodes_ba9880(__int64 a1, __int64 a2, _QWORD* a3);
__int64 TaskPassNodes_ba9d50_alt1(__int64 a1, __int64 a2,
                                  __int64 a3) __asm__("TaskPassNodes_ba9d50");
__int64 TaskPassNodes_ba9f60_alt1(__int64 a1, __int64 a2,
                                  _QWORD* a3) __asm__("TaskPassNodes_ba9f60");
__int64 TaskPassNodes_baa490(__int64 a1, __int64 a2, __int64 a3);
__int64 TaskPassNodes_baa610_alt1(__int64 a1, __int64 a2,
                                  _QWORD* a3) __asm__("TaskPassNodes_baa610");
__int64 TaskPassNodes_baa9b0(__int64 a1, _QWORD** a2, __int64 a3);
__int64 TaskPassNodes_baab10(__int64 a1, _QWORD** a2, _QWORD* a3);
__int64 TaskPassNodes_baae90(__int64 a1, _QWORD** a2, __int64 a3);
__int64 TaskPassNodes_bab050(__int64 a1, __int64 a2, _QWORD* a3);
__int64 TaskPassNodes_bab410(__int64 a1, __int64 a2, __int64 a3);
__int64 TaskPassNodes_bab580_alt1(__int64 a1, __int64 a2,
                                  __int64 a3) __asm__("TaskPassNodes_bab580");
__int64 TaskPassNodes_bab910_alt1(__int64 a1, _QWORD** a2,
                                  __int64 a3) __asm__("TaskPassNodes_bab910");
__int64 TaskPassNodes_babaf0_alt1(__int64 a1, __int64 a2,
                                  _QWORD* a3) __asm__("TaskPassNodes_babaf0");
__int64 TaskPassNodes_babec0_alt1(__int64 a1, _QWORD* a2,
                                  __int64 a3) __asm__("TaskPassNodes_babec0");
__int64 TaskPassNodes_bac0c0(__int64 a1, __int64 a2, _QWORD* a3);
__int64 TaskPassNodes_bac490(__int64 a1, _QWORD* a2, __int64 a3);
__int64 TaskPassNodes_bac680(__int64 a1, __int64 a2, _QWORD* a3);
__int64 TaskPassNodes_bacba0_alt1(__int64 a1, _QWORD** a2,
                                  __int64 a3) __asm__("TaskPassNodes_bacba0");
__int64 TaskPassNodes_bad1b0_alt1(__int64 a1, __int64 a2,
                                  __int64 a3) __asm__("TaskPassNodes_bad1b0");
__int64 TaskPassNodes_bada10(__int64 a1, _QWORD** a2, __int64* a3);
__int64 TaskPassNodes_bae080(__int64 a1, __int64 a2, _QWORD* a3);
__int64 TaskPassNodes_bae240(__int64 a1, __int64* a2, __int64 a3);
__int64 TaskPassNodes_bae7f0_alt1(__int64 a1, __int64 a2, _QWORD* a3,
                                  _QWORD* a4, _QWORD* a5, __int64 a6,
                                  __int64 a7, __int64 a8, __int64 a9,
                                  __int64 a10, __int64 a11, __int64 a12,
                                  _QWORD* a13,
                                  _QWORD* a14) __asm__("TaskPassNodes_bae7f0");
__int64 TaskPassNodes_baecd0(__int64 result);
__int64 TaskPassNodes_baf760(__int64 result, __int64 a2, __int64 a3,
                             __int64 a4);
__int64 TaskPassNodes_baf9c0(__int64 a1, __int64 a2, _QWORD* a3);
__int64 TaskPassNodes_bb0230(__int64 a1, __int64* a2, __int64 a3);
__int64 TaskPassNodes_bb0980_alt1(__int64 a1, __int64 a2,
                                  __int64 a3) __asm__("TaskPassNodes_bb0980");
__int64 TaskPassNodes_bb1210(__int64 a1, __int64 a2, _QWORD* a3);
__int64 TaskPassNodes_bb1410(__int64 a1, _QWORD** a2, __int64 a3);
__int64 TaskPassNodes_bb1ac0(__int64 a1, __int64 a2, __int64 a3);
__int64 TaskPassNodes_bb1c70_alt1(__int64 a1, __int64 a2,
                                  _QWORD* a3) __asm__("TaskPassNodes_bb1c70");
__int64 TaskPassNodes_bb26e0(__int64 a1, _QWORD** a2, __int64 a3);
__int64 TaskPassNodes_bb2ee0(__int64 a1, __int64* a2, __int64* a3);
__int64 TaskPassNodes_bb3a20(__int64 a1, _QWORD** a2, __int64* a3);
__int64 TaskPassNodes_bb4400(__int64 a1, __int64 a2, _QWORD* a3);
__int64 TaskPassNodes_bb4bc0(__int64 result, __int64 a2, __int64 a3);
__int64 TaskPassNodes_bb51a0(__int64 result, __int64* a2, __int64 a3);
__int64 TaskPassNodes_bb5480(__int64 a1, __int64* a2, _QWORD* a3);
__int64 TaskPassNodes_bb58f0(__int64 a1, __int64 a2, __int64 a3);
__int64 TaskPassNodes_bb5aa0(__int64 a1, __int64 a2, _QWORD* a3);
__int64 TaskPassNodes_bbc570(__int64 a1);
__int64 TaskPassNodes_bbd3f0(__int64 a1, __int64 a2, _QWORD* a3);
__int64 TaskPassNodes_bbd840(__int64 result);
__int64 TaskPassNodes_bbd920(__int64 result);
void TaskPassNodes_bbdb10(__int64 a1, __int64 a2);
void TaskPassNodes_bbdc00(__int64 a1, __int64 a2);
void TaskPassNodes_bbdcf0(__int64 a1, __int64 a2);
__int64 TaskPassNodes_bbdfa0_alt1(__int64 a1, _QWORD** a2,
                                  __int64 a3) __asm__("TaskPassNodes_bbdfa0");
__int64 TaskPassNodes_bbe570_alt1(__int64 a1, _QWORD** a2,
                                  __int64 a3) __asm__("TaskPassNodes_bbe570");
__int64 TaskPassNodes_bbeaf0(__int64 a1, __int64** a2, __int64 a3);
__int64 TaskPassNodes_bbec30(__int64 a1, __int64* a2);
__int64 TaskPassNodes_bbef70(__int64 result, __int64 a2, __int64 a3);
__int64 TaskPassNodes_bbf550(__int64 result, unsigned __int8* a2);
__int64 TaskPassNodes_bc0b70(__int64 a1, __int64 a2, __int64* a3);
__int64 TaskPassNodes_bc10b0(__int64 a1, __int64 a2, __int64 a3);
__int64 TaskPassNodes_bc1650(__int64 a1, __int64 a2, _QWORD* a3);
__int64 TaskPassNodes_bc1bc0(__int64 a1, _QWORD** a2, __int64 a3);
__int64 TaskPassNodes_bc1d20(__int64 a1, _QWORD** a2, _QWORD* a3);
__int64 TaskPassNodes_bc1f10(__int64 a1, _QWORD** a2, __int64 a3);
__int64 TaskPassNodes_bc2070(__int64 a1, _QWORD** a2, _QWORD* a3);
__int64 TaskPassNodes_bc2360(__int64 a1, __int64 a2, _QWORD* a3, __int64 a4);
__int64 TaskPassNodes_bc32f0_alt1(__int64 a1, __int64* a2,
                                  __int64 a3) __asm__("TaskPassNodes_bc32f0");
__int64 TaskPassNodes_bc3670(__int64 a1, _QWORD* a2, __int64 a3);
__int64 TaskPassNodes_bc3990_alt1(__int64 a1, __int64 a2,
                                  _QWORD* a3) __asm__("TaskPassNodes_bc3990");
__int64 GameRoutine_b48f90_alt1(__int64, __int64) __asm__("GameRoutine_b48f90");
__int64 GameRoutine_b4a3f0_alt1(__int64, __int64) __asm__("GameRoutine_b4a3f0");
__int64 GameRoutine_b4a510_alt1(__int64, __int64) __asm__("GameRoutine_b4a510");
__int64 GameRoutine_b509c0_alt1(__int64*, __int64,
                                __int64) __asm__("GameRoutine_b509c0");
__int64 GameRoutine_b50b10_alt1(__int64*, __int64,
                                __int64) __asm__("GameRoutine_b50b10");
__int64 GameRoutine_b50c60_alt1(__int64*, __int64,
                                __int64) __asm__("GameRoutine_b50c60");
__int64 GameRoutine_b53d40_alt1(__int64*, const char*,
                                __int64) __asm__("GameRoutine_b53d40");
__int64 GameRoutine_b54ca0_alt1(__int64*, const char*,
                                __int64) __asm__("GameRoutine_b54ca0");
__int64 TaskRadialBlur_b71980(__int64, _QWORD*, _QWORD*, _QWORD*,
                              unsigned int*);
__int64 TaskPassNodes_b8dd70(__int64 a1, __int64** a2, __int64* a3);
__int64 TaskPassNodes_ba7ea0(__int64 a1, __int64** a2, __int64* a3);
__int64 TaskPassNodes_bab910(__int64 a1, __int64** a2, __int64* a3);
__attribute__((swiftcall)) void
GameRoutine_53c20_alt1(PSEUDO_X8, __int64) __asm__("GameRoutine_53c20");
__int64 DecalObject_a91100(__int64*, __int64, __int64, __int64);
__int64 GameHr_ad6000(__int64, unsigned __int64);
__int64 GameHr_b52a20(__int64*);
__int64 GameRoutine_18dfa20_alt1(_QWORD*,
                                 __int64) __asm__("GameRoutine_18dfa20");
__int64 GameRoutine_18e35d0_alt1(_QWORD*,
                                 __int64) __asm__("GameRoutine_18e35d0");
__int64 GameRoutine_6040f0_alt1(__int64) __asm__("GameRoutine_6040f0");
__int64 GameRoutine_b48e70_alt1(__int64, __int64) __asm__("GameRoutine_b48e70");
__int64 GameRoutine_b494f0_alt1(__int64, const char*,
                                __int64*) __asm__("GameRoutine_b494f0");
__int64 GameRoutine_b4ba10_alt1(__int64, const char*,
                                __int64*) __asm__("GameRoutine_b4ba10");
__int64 GameRoutine_b4f100_alt1(__int64, __int64) __asm__("GameRoutine_b4f100");
__int64 GameRoutine_b4f220_alt1(__int64, __int64) __asm__("GameRoutine_b4f220");
__int64 GameRoutine_b4f340_alt1(__int64, const char*,
                                __int64*) __asm__("GameRoutine_b4f340");
__int64 GameRoutine_b4f490_alt1(__int64, const char*,
                                __int64*) __asm__("GameRoutine_b4f490");
__int64 GameRoutine_b509c0_alt2(__int64, const char*,
                                __int64*) __asm__("GameRoutine_b509c0");
__int64 GameRoutine_b50b10_alt2(__int64, const char*,
                                __int64*) __asm__("GameRoutine_b50b10");
__int64 GameRoutine_b50c60_alt2(__int64, const char*,
                                __int64*) __asm__("GameRoutine_b50c60");
__int64 GameRoutine_b53d40_alt2(__int64, const char*,
                                __int64*) __asm__("GameRoutine_b53d40");
__int64 GameRoutine_b54ca0_alt2(__int64, const char*,
                                __int64*) __asm__("GameRoutine_b54ca0");
__int64 GameRoutine_b5a5d0_alt1(__int64, const char*,
                                __int64*) __asm__("GameRoutine_b5a5d0");
__int64 GameRoutine_b5a720_alt1(__int64, const char*,
                                __int64*) __asm__("GameRoutine_b5a720");
__int64 GameRoutine_b5a870_alt1(__int64, const char*,
                                __int64*) __asm__("GameRoutine_b5a870");
__int64 GameRoutine_b5acb0_alt1(__int64, const char*,
                                __int64*) __asm__("GameRoutine_b5acb0");
__int64 GameRoutine_b62660_alt1(__int64, const char*,
                                __int64*) __asm__("GameRoutine_b62660");
__int64 GameRoutine_b67250_alt1(__int64, const char*,
                                __int64*) __asm__("GameRoutine_b67250");
__int64 GameRoutine_b68480_alt1(__int64, const char*,
                                __int64*) __asm__("GameRoutine_b68480");
__int64 GameRoutine_b6b000_alt1(__int64, const char*,
                                __int64*) __asm__("GameRoutine_b6b000");
__int64 GameRoutine_b6bbe0_alt1(__int64, __int64) __asm__("GameRoutine_b6bbe0");
__int64 GameRoutine_b6bd00_alt1(__int64, __int64) __asm__("GameRoutine_b6bd00");
__int64 GameRoutine_b79740_alt1(__int64, const char*,
                                __int64*) __asm__("GameRoutine_b79740");
__int64 GameRoutine_beecc0_alt1(__int64*, __int64*,
                                __int64) __asm__("GameRoutine_beecc0");
__int64 ResourceBuilder_b564c0_alt1(__int64, __int64, _QWORD*, __int64*,
                                    __int64) __asm__("ResourceBuilder_b564c0");
__int64
ResourceBuilder_b594d0_alt1(_QWORD*, _QWORD*, __int64*,
                            unsigned int*) __asm__("ResourceBuilder_b594d0");
__int64 ResourceBuilder_b5fa20_alt1(__int64 result, _QWORD*, __int64*,
                                    int) __asm__("ResourceBuilder_b5fa20");
__int64 ResourceBuilder_b60c80_alt1(__int64*, __int64,
                                    int*) __asm__("ResourceBuilder_b60c80");
__int64 ResourceBuilder_b667c0_alt1(_DWORD*, __int64, _QWORD*, __int64*,
                                    __int64) __asm__("ResourceBuilder_b667c0");
__int64 ResourceBuilder_b6b150(__int64, __int64);
__int64
ResourceBuilder_b6e4e0_alt1(__int64, _QWORD*, _QWORD*, __int64*,
                            unsigned int*) __asm__("ResourceBuilder_b6e4e0");
__int64
ResourceBuilder_b6f2d0_alt1(_QWORD*, _QWORD*, __int64*,
                            unsigned int*) __asm__("ResourceBuilder_b6f2d0");
__int64 ResourceBuilder_b71010_alt1(__int64 result, _QWORD*, __int64*,
                                    __int64) __asm__("ResourceBuilder_b71010");
__int64 TaskBloom_b4c560(_DWORD*, _QWORD*);
__int64 TaskBloom_b4c7e0(__int64 result, __int64, _QWORD*, __int64*, __int64);
__int64 TaskCapsuleAO_18dfe10(_QWORD*);
__int64 TaskCharaSilhouette_b546e0(__int64, _QWORD*, _QWORD*, __int64*,
                                   unsigned int*);
__int64 TaskColorGrading_b565d0(_DWORD*, _QWORD*, _QWORD*, __int64*,
                                unsigned int*);
__int64 TaskContactShadow_18e3ac0(_QWORD*);
__int64 TaskDoFTemporalFilter_b7d840(_QWORD*);
__int64 TaskDoF_b5b5a0(__int64, _QWORD*, _QWORD*, _QWORD*, __int64);
__int64 TaskEffect_b5c580(__int64, _QWORD*, _QWORD*, __int64*, float*);
__int64 TaskEffect_b5e3a0(__int64, __int64*, _QWORD*, _QWORD*, _QWORD*);
__int64 TaskExposure_b63e60(__int64*, _QWORD*, _DWORD*);
__int64 TaskFog_b65790(_DWORD*, __int64, float*);
__int64 TaskFog_b65db0(__int64, _QWORD*, _QWORD*, _QWORD*, unsigned int*);
__int64 TaskGaussianBlur_b67a80(__int64, __int64*, _QWORD*, __int64*,
                                unsigned int*);
__int64 TaskSSAO_b79df0(_QWORD*);
__int64 TaskSSR_b7bd00(_QWORD*);
__int64 TaskSSR_b7c060(int*, _QWORD*, _QWORD*, __int64);
__int64 TaskSSR_b7cee0(__int64, __int64, __int64, _QWORD*, __int64);
__int64 TaskSkyBlur_b75c60(_DWORD*, __int64, __int64);
__int64 TaskSkyBlur_b764b0(__int64, _QWORD*, _QWORD*, __int64*, __int64);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 gfx_flow_b6be20(__int64, __int64);
__int64 gfx_flow_b6bf20(__int64, __int64);
__int64 gfxa_LocalLightBuffers_updateLightBuffer(__int64 result, __int64,
                                                 __int64, __int64*, __int64*);
__int64 gfxa_TaskBloom_Impl_Impl(__int64*, __int64);
__int64 gfxa_TaskCharaDepth_Impl_Execute(__int64, _QWORD*, _QWORD*, __int64*,
                                         unsigned int*);
__int64 gfxa_TaskCharaSelfShadow_Impl_draw(__int64, __int64, __int64, _QWORD*,
                                           __int64);
__int64 gfxa_TaskColorGrading_Impl_Impl(__int64*, __int64);
__int64 gfxa_TaskDecal_Impl_draw(__int64, _QWORD*, _QWORD*, __int64*,
                                 unsigned int*);
__int64 gfxa_TaskDiffusion_Impl_Impl(_QWORD*, __int64);
__int64 gfxa_TaskDoFTemporalFilter_Impl_Impl(__int64*, __int64);
__int64 gfxa_TaskDoF_Impl_Impl(__int64, __int64);
__int64 gfxa_TaskEffect_CompOffscreen_Impl_Impl(__int64, __int64);
__int64 gfxa_TaskExposure_Impl_Impl(__int64*, __int64);
__int64 gfxa_TaskFog_Impl_Impl(__int64, __int64);
__int64 gfxa_TaskGBuffer_Execute(_QWORD*, _QWORD*, __int64*, __int64);
__int64 gfxa_TaskGaussianBlur_Impl_Impl(__int64, __int64);
__int64 gfxa_TaskGradationFilter_Impl_Impl(__int64, __int64);
__int64 gfxa_TaskHeightFog_Impl_Impl(__int64, __int64);
__int64 gfxa_TaskMeshFog_Impl_Execute(_DWORD*, _QWORD*, _QWORD*, _QWORD*, int*);
__int64 gfxa_TaskMirage_Impl_Impl(__int64, __int64);
__int64 gfxa_TaskMotionBlur_Impl_Impl(__int64, __int64);
__int64 gfxa_TaskPainting_Impl_Impl(__int64, __int64);
__int64 gfxa_TaskRadialBlur_Impl_Impl(__int64, __int64);
__int64 gfxa_TaskSSAO_Impl_Impl(_QWORD*, __int64);
__int64 gfxa_TaskSSR_Impl_Impl(__int64*, __int64);
__int64 gfxa_TaskSSR_Impl_draw(__int64, _QWORD**, _QWORD*, __int64*, __int64);
__int64 gfxa_TaskSkyBlur_Impl_Impl(__int64*, __int64);
__int64 gfxa_TaskSkyBlur_Impl_drawMask(__int64, __int64, __int64, _QWORD*,
                                       __int64);
__int64 gfxa_TaskTimeSlip_Impl_Impl(__int64, __int64);
__int64 gfxa_b56ec0(__int64*, __int64);
__int64 gfxa_b60140(__int64, _QWORD*, __int64*, _QWORD*, __int64);
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
float exp2f_alt1(float) __asm__("exp2f");
unsigned __int64
ResourceBuilder_b4dd70_alt1(__int64, __int64, __int64, __int64,
                            __int64) __asm__("ResourceBuilder_b4dd70");
void GameRoutine_b743b0_alt1(__int64*, _QWORD*,
                             int*) __asm__("GameRoutine_b743b0");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_b32f30_alt1() __asm__("GameRoutine_b32f30");
void __attribute__((noreturn))
GameRoutine_b32fb0_alt1() __asm__("GameRoutine_b32fb0");
void __attribute__((noreturn)) String_60a1d0_alt1() __asm__("String_60a1d0");
void gfxa_TaskCharaShadow_Impl_Impl(__int64, __int64);
void gfxa_TaskDeferredLit_Impl_Impl(__int64, __int64);
void gfxa_TaskSightMapRender_Impl_Impl(__int64*, __int64);
void gfxa_TaskSkyComp_Impl_Impl(__int64, __int64);
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 TaskPassNodes_b88dd0(__int64 a1, __int64* a2, __int64* a3);
__int64 TaskPassNodes_b8bc60(__int64 a1, __int64 a2, __int64* a3);
__int64 TaskPassNodes_b8c000(__int64 a1, __int64** a2, __int64 a3);
__int64 TaskPassNodes_b8c770(__int64 a1, __int64** a2, __int64 a3);
__int64 TaskPassNodes_b8d210(__int64 a1, __int64** a2, __int64 a3);
__int64 TaskPassNodes_b8d780(__int64 a1, __int64** a2, __int64 a3);
__int64 TaskPassNodes_b8e350(__int64 a1, __int64** a2, __int64 a3);
__int64 TaskPassNodes_b8e9f0(__int64 a1, __int64** a2, __int64 a3);
__int64 TaskPassNodes_b8ec00(__int64 a1, __int64 a2, __int64* a3);
__int64 TaskPassNodes_b929e0(__int64 a1, __int64 a2, __int64* a3);
__int64 TaskPassNodes_b93a50(__int64 a1, __int64** a2, __int64 a3);
void TaskPassNodes_b94930(__int64* a1, __int64 a2, __int64* a3, __int64* a4,
                          __int64* a5, __int64* a6, __int64* a7);
__int64 TaskPassNodes_b98340(__int64 a1, __int64** a2, __int64 a3);
__int64 TaskPassNodes_b99230(__int64 a1, __int64 a2, __int64* a3);
__int64 TaskPassNodes_b9aa80(_QWORD* a1, __int64 a2, __int64* a3);
__int64 TaskPassNodes_b9b860(__int64 a1, __int64* a2, __int64* a3);
__int64 TaskPassNodes_b9c620(__int64 a1, __int64 a2, __int64* a3);
void TaskPassNodes_b9c8f0(__int64* a1, __int64 a2, __int64* a3, __int64* a4,
                          __int64* a5, __int64* a6, __int64* a7);
__int64 TaskPassNodes_ba4880(_QWORD** a1, __int64** a2, __int64 a3);
__int64 TaskPassNodes_ba4e10(__int64 a1, __int64** a2, __int64 a3);
void TaskPassNodes_ba63f0(__int64 a1, __int64** a2, _QWORD* a3);
void TaskPassNodes_ba6640(__int64 a1, __int64 a2, __int64* a3);
__int64 TaskPassNodes_ba85a0(__int64 a1, __int64** a2, __int64 a3);
__int64 TaskPassNodes_ba92f0(__int64 a1, __int64 a2, __int64* a3);
__int64 TaskPassNodes_ba9d50(__int64 a1, __int64** a2, __int64 a3);
__int64 TaskPassNodes_ba9f60(__int64 a1, __int64 a2, __int64* a3);
__int64 TaskPassNodes_baa610(__int64 a1, __int64 a2, __int64* a3);
__int64 TaskPassNodes_bab580(__int64 a1, __int64 a2, __int64* a3);
__int64 TaskPassNodes_babaf0(__int64 a1, __int64 a2, __int64* a3);
__int64 TaskPassNodes_babec0(__int64 a1, __int64** a2, __int64 a3);
__int64 TaskPassNodes_bacba0(__int64 a1, __int64** a2, __int64 a3);
__int64 TaskPassNodes_bad1b0(__int64 a1, __int64** a2, __int64 a3);
void TaskPassNodes_bae7f0(__int64 a1, __int64 a2, _QWORD* a3, _QWORD* a4,
                          _QWORD* a5, __int64 a6, __int64 a7, __int64 a8,
                          __int64 a9, __int64 a10, __int64 a11, __int64 a12,
                          _QWORD* a13, _QWORD* a14);
__int64 TaskPassNodes_bb0980(__int64 a1, __int64** a2, __int64 a3);
__int64 TaskPassNodes_bb1c70(__int64 a1, __int64 a2, __int64* a3);
__int64 TaskPassNodes_bbdfa0(__int64 a1, __int64** a2, __int64 a3);
__int64 TaskPassNodes_bbe570(__int64 a1, __int64** a2, __int64 a3);
unsigned __int64 TaskPassNodes_bc32f0(__int64 a1, __int64* a2, __int64 a3);
__int64 TaskPassNodes_bc3990(__int64 a1, __int64 a2, __int64* a3);
__int64 GameRoutine_b66510_alt1(__int64*, const char*,
                                __int64) __asm__("GameRoutine_b66510");
__int64 TaskPassNodes_b9a290(__int64 a1, __int64** a2, __int64* a3);

__int64 TaskPassNodes_b88c20(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD* v4;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  __int64 result;

  v4 = *(_QWORD**)a2;
  v6 = **(__int64***)(a1 + 8);
  v7 = *v6;
  v8 = v6[1];
  v9 = v6[9];
  v10 = v6[15];
  *v4 = GameRoutine_b4a3f0(a3, v6[63]);
  v4[1] = GameRoutine_b48f90(a3, v10);
  v11 = *(_QWORD**)(a2 + 8);
  *v11 = GameRoutine_b48e70(a3, v7);
  v11[1] = GameRoutine_b4a510(a3, v8);
  result = GameRoutine_b48e70(a3, v9);
  v11[2] = result;
  return result;
}

__int64 TaskPassNodes_b88dd0(__int64 a1, __int64* a2, __int64* a3)
{
  int v3;
  __int64 v4;
  _QWORD* v5;
  struct {
    int v7;
    char gap4_[4];
    __int64 v8;
  } v7_;

  v3 = *(_DWORD*)(a1 + 8);
  v4 = *a2;
  v5 = (_QWORD*)a2[1];
  v7_.v7 = v3;
  v7_.v8 = game_map_MapColorPalette_g_texture_archives;
  return ResourceBuilder_b71010_alt1(v4, v5, a3, (__int64)&v7_.v7);
}

__int64 TaskPassNodes_b896c0(_QWORD* a1)
{
  __int64 v2;
  __int64 result;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  _QWORD* v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  _QWORD* v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;

  v2 = a1[17];
  a1[17] = 0;
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
  }
  result = a1[16];
  a1[16] = 0;
  if (result != 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  v4 = a1[15];
  a1[15] = 0;
  v5 = game_g_frame_clock_ptr[0];
  v6 = fw_memory_g_heap_manager_ptr;
  if (v4 != 0) {
    GameRoutine_6040f0(v4 + 72, *game_g_frame_clock_ptr[0] + 568);
    GameRoutine_6040f0(v4 + 200, *v5 + 568);
    GameRoutine_6040f0(v4 + 328, *v5 + 568);
    GameRoutine_604050(v4 + 328);
    GameRoutine_604050(v4 + 200);
    GameRoutine_604050(v4 + 72);
    v7 = 128;
    if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
      v7 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v7, v4);
  }
  v8 = a1[14];
  a1[14] = 0;
  if (v8 != 0) {
    GameRoutine_6040f0(v8 + 8, *v5 + 568);
    GameRoutine_604050(v8 + 8);
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
      v9 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v9, v8);
  }
  v10 = a1[13];
  a1[13] = 0;
  if (v10 != 0) {
    GameRoutine_6040f0(v10 + 24, *v5 + 568);
    GameRoutine_604050(v10 + 24);
    v11 = *(_QWORD*)(v10 + 16);
    if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
      std___1___shared_weak_count___release_weak(v11);
    }
    v12 = 128;
    if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
      v12 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v12, v10);
  }
  v13 = (_QWORD*)a1[12];
  a1[12] = 0;
  if (v13 != nullptr) {
    ResourceBuilder_b70b00(v13);
    v14 = 128;
    if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
      v14 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v14, v13);
  }
  v15 = (_QWORD*)a1[11];
  a1[11] = 0;
  if (v15 != nullptr) {
    ResourceBuilder_b702d0(v15);
    v16 = 128;
    if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
      v16 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v16, v15);
  }
  v17 = a1[10];
  a1[10] = 0;
  if (v17 != 0) {
    v18 = *(_QWORD*)(v17 + 16);
    *(_QWORD*)(v17 + 16) = 0;
    if (v18 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v18 + 8LL))(v18);
    }
    v19 = *(_QWORD*)(v17 + 8);
    *(_QWORD*)(v17 + 8) = 0;
    if (v19 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v19 + 8LL))(v19);
    }
    v20 = 128;
    if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
      v20 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v20, v17);
  }
  v21 = a1[9];
  a1[9] = 0;
  if (v21 != 0) {
    GameRoutine_bfae60(v21);
    v22 = 128;
    if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
      v22 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v22, v21);
  }
  v23 = (_QWORD*)a1[8];
  a1[8] = 0;
  if (v23 != nullptr) {
    ResourceBuilder_b4f9e0(v23);
    v24 = 128;
    if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
      v24 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v24, v23);
  }
  v25 = a1[7];
  a1[7] = 0;
  if (v25 != 0) {
    GameRoutine_6040f0(v25 + 160, *v5 + 568);
    GameRoutine_604050(v25 + 160);
    v26 = *(_QWORD*)(v25 + 112);
    *(_QWORD*)(v25 + 112) = 0;
    if (v26 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v26 + 8LL))(v26);
    }
    v27 = *(_QWORD*)(v25 + 104);
    *(_QWORD*)(v25 + 104) = 0;
    if (v27 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v27 + 8LL))(v27);
    }
    ResourceBuilder_b540f0(v25 + 8);
    v28 = 128;
    if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
      v28 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v28, v25);
  }
  v29 = (_QWORD*)a1[6];
  a1[6] = 0;
  if (v29 != nullptr) {
    ResourceBuilder_b51360(v29);
    v30 = 128;
    if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
      v30 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v30, v29);
  }
  v31 = a1[4];
  if (v31 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v31 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31);
    result = std___1___shared_weak_count___release_weak(v31);
    v32 = a1[2];
    if (v32 == 0) {
      return result;
    }
  }
  else {
    v32 = a1[2];
    if (v32 == 0) {
      return result;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v32 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v32 + 16LL))(v32);
    return std___1___shared_weak_count___release_weak(v32);
  }
  return result;
}

__int64 TaskPassNodes_b89ce0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                             __int64 a5)
{
  __int64* v8;
  int v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  signed __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  int v27;
  __int64 v28;
  __int64* v29;
  unsigned __int64 v30;
  __int64* v31;
  __int64 v32;
  __int64 v33;
  signed __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 result;
  __int64 v45;
  struct {
    __int64 (**v46)();
    __int64 v47;
    __int64* v48;
    char gap24_[8];
    __int64 (***v49)();
  } v46_;
  __int64 v50;

  v50 = a3;
  v8 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (*(_BYTE*)(a4 + 118) == 1) {
    v9 = *(_DWORD*)(a2 + 96);
    v10 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 224, 16, 0);
    *(_DWORD*)(v10 + 80) = v9;
    *(_QWORD*)(v10 + 32) = 0;
    *(_QWORD*)(v10 + 40) = 0;
    *(_QWORD*)(v10 + 48) = 0;
    *(_QWORD*)(v10 + 56) = 0;
    *(_QWORD*)(v10 + 64) = 0;
    *(_QWORD*)(v10 + 72) = 0;
    *(_QWORD*)(v10 + 88) = 0;
    *(_QWORD*)(v10 + 96) = 0;
    *(_QWORD*)(v10 + 104) = 0;
    *(_QWORD*)(v10 + 112) = 0;
    *(_QWORD*)(v10 + 184) = a1;
    *(_BYTE*)(v10 + 8) = 28;
    *(_BYTE*)(v10 + 84) = 1;
    *(_QWORD*)v10 = GameData_1fc8870;
    strcpy((char*)(v10 + 9), "CharaDepthPass");
    *(_QWORD*)(v10 + 128) = GameData_1fc8750;
    *(_QWORD*)(v10 + 136) = &v50;
    v12 = *(__int64**)(a2 + 8);
    v11 = *(_QWORD*)(a2 + 16);
    *(_QWORD*)(v10 + 160) = v10 + 128;
    *(_QWORD*)(v10 + 176) = GameData_1fc87e0;
    *(_QWORD*)(v10 + 208) = v10 + 176;
    if ((unsigned __int64)v12 >= v11) {
      v14 = *(_QWORD*)a2;
      v15 = (signed __int64)v12 - *(_QWORD*)a2;
      v16 = (v15 >> 3) + 1;
      if (v16 >> 61 != 0) {
        goto LABEL_36;
      }
      v17 = v11 - v14;
      if (v17 >> 2 > v16) {
        v16 = v17 >> 2;
      }
      if ((unsigned __int64)v17 >= 0x7FFFFFFFFFFFFFF8LL) {
        v18 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v18 = v16;
      }
      if (v18 != 0) {
        if (v18 >> 61 != 0) {
          goto LABEL_37;
        }
        v19 = v10;
        v20 = fw_memory_HeapManager_Allocate_alt1(*v8, 8 * v18, 16, 0);
        v10 = v19;
      }
      else {
        v20 = 0;
      }
      v21 = v20 + 8 * v18;
      v22 = v20 + v15 - 8 * (v15 >> 3);
      *(_QWORD*)(v20 + v15) = v10;
      v13 = v20 + v15 + 8;
      memcpy_alt1(v22, v14, v15);
      *(_QWORD*)a2 = v22;
      *(_QWORD*)(a2 + 8) = v13;
      *(_QWORD*)(a2 + 16) = v21;
      if (v14 != 0) {
        v23 = 128;
        if (*(_QWORD*)(*v8 + 200) == 0) {
          v23 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*v8 + v23, v14);
      }
    }
    else {
      *v12 = v10;
      v13 = (__int64)(v12 + 1);
    }
    *(_QWORD*)(a2 + 8) = v13;
    v24 = *(_QWORD*)(v13 - 8);
    v46_.v46 = (__int64 (**)(void))a2;
    v46_.v47 = v24;
    (*(void (**)(__int64, __int64 (***)(void)))(*(_QWORD*)v24 + 16LL))(
        v24, &v46_.v46);
  }
  v26 = *(_QWORD*)a2;
  v25 = *(_QWORD*)(a2 + 8);
  v27 = *(_DWORD*)(a2 + 96);
  v28 = fw_memory_HeapManager_Allocate_alt1(*v8, 304, 16, 0);
  *(_QWORD*)(v28 + 32) = 0;
  *(_QWORD*)(v28 + 40) = 0;
  *(_QWORD*)(v28 + 48) = 0;
  *(_QWORD*)(v28 + 56) = 0;
  *(_QWORD*)(v28 + 64) = 0;
  *(_QWORD*)(v28 + 72) = 0;
  *(_DWORD*)(v28 + 80) = v27;
  *(_QWORD*)(v28 + 184) = 0;
  *(_QWORD*)(v28 + 192) = 0;
  v46_.v48 = &v50;
  v46_.v46 = GameData_1fc88b8;
  v46_.v47 = a1;
  v46_.v49 = &v46_.v46;
  *(_QWORD*)(v28 + 168) = 0;
  *(_QWORD*)(v28 + 176) = 0;
  *(_QWORD*)(v28 + 152) = 0;
  *(_QWORD*)(v28 + 160) = 0;
  *(_QWORD*)(v28 + 136) = 0;
  *(_QWORD*)(v28 + 144) = 0;
  *(_QWORD*)(v28 + 120) = 0;
  *(_QWORD*)(v28 + 128) = 0;
  *(_QWORD*)(v28 + 104) = 0;
  *(_QWORD*)(v28 + 112) = 0;
  *(_QWORD*)(v28 + 88) = 0;
  *(_QWORD*)(v28 + 96) = 0;
  *(_QWORD*)(v28 + 272) = a5;
  *(_BYTE*)(v28 + 8) = 26;
  strcpy((char*)(v28 + 9), "CharacterPass");
  *(_BYTE*)(v28 + 84) = 1;
  *(_QWORD*)v28 = GameData_1fc89d8;
  *(_QWORD*)(v28 + 208) = GameData_1fc88b8;
  *(_QWORD*)(v28 + 240) = v28 + 208;
  v29 = v46_.v48;
  *(_QWORD*)(v28 + 216) = v46_.v47;
  *(_QWORD*)(v28 + 224) = v29;
  *(_QWORD*)(v28 + 288) = v28 + 256;
  v31 = *(__int64**)(a2 + 8);
  v30 = *(_QWORD*)(a2 + 16);
  *(_QWORD*)(v28 + 256) = GameData_1fc8948;
  *(_QWORD*)(v28 + 264) = a1;
  if ((unsigned __int64)v31 < v30) {
    *v31 = v28;
    v32 = (__int64)(v31 + 1);
    goto LABEL_35;
  }
  v33 = *(_QWORD*)a2;
  v34 = (signed __int64)v31 - *(_QWORD*)a2;
  v35 = (v34 >> 3) + 1;
  if (v35 >> 61 != 0) {
  LABEL_36:
    GameRoutine_b32f30_alt1();
  }
  v36 = v30 - v33;
  if (v36 >> 2 > v35) {
    v35 = v36 >> 2;
  }
  if ((unsigned __int64)v36 >= 0x7FFFFFFFFFFFFFF8LL) {
    v37 = 0x1FFFFFFFFFFFFFFFLL;
  }
  else {
    v37 = v35;
  }
  if (v37 != 0) {
    if (v37 >> 61 == 0) {
      v38 = v28;
      v39 = fw_memory_HeapManager_Allocate_alt1(*v8, 8 * v37, 16, 0);
      v28 = v38;
      goto LABEL_31;
    }
  LABEL_37:
    GameRoutine_60a210_alt1();
  }
  v39 = 0;
LABEL_31:
  v40 = v39 + 8 * v37;
  v41 = v39 + v34 - 8 * (v34 >> 3);
  *(_QWORD*)(v39 + v34) = v28;
  v32 = v39 + v34 + 8;
  memcpy_alt1(v41, v33, v34);
  *(_QWORD*)a2 = v41;
  *(_QWORD*)(a2 + 8) = v32;
  *(_QWORD*)(a2 + 16) = v40;
  if (v33 != 0) {
    v42 = 128;
    if (*(_QWORD*)(*v8 + 200) == 0) {
      v42 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v8 + v42, v33);
  }
LABEL_35:
  *(_QWORD*)(a2 + 8) = v32;
  v43 = *(_QWORD*)(v32 - 8);
  v46_.v46 = (__int64 (**)(void))a2;
  v46_.v47 = v43;
  result = (*(__int64 (**)(__int64, __int64 (***)(void)))(
      *(_QWORD*)v43 + 16LL))(v43, &v46_.v46);
  v45 = v50;
  *(_QWORD*)(v50 + 112) =
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a2 + ((v25 - v26) & 0x7FFFFFFF8LL)) +
                 168LL);
  *(_QWORD*)(v45 + 120) =
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a2 + ((v25 - v26) & 0x7FFFFFFF8LL)) +
                 184LL);
  return result;
}

__int64 TaskPassNodes_b8a560(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3;
  __int64 v4;
  int v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  unsigned __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  signed __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 result;
  struct {
    __int64 (**v27)();
    __int64 v28;
    __int64* v29;
    char gap24_[8];
    __int64 (***v30)();
  } v27_;
  __int64 v31;

  v31 = a3;
  v4 = *(_QWORD*)a2;
  v3 = *(_QWORD*)(a2 + 8);
  v7 = *(_DWORD*)(a2 + 96);
  v8 = (__int64*)fw_memory_g_heap_manager_ptr;
  v9 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 208, 16, 0);
  *(_QWORD*)(v9 + 32) = 0;
  *(_QWORD*)(v9 + 40) = 0;
  *(_QWORD*)(v9 + 48) = 0;
  *(_QWORD*)(v9 + 56) = 0;
  *(_QWORD*)(v9 + 64) = 0;
  *(_QWORD*)(v9 + 72) = 0;
  v27_.v29 = &v31;
  v27_.v27 = GameData_1fc8c88;
  v27_.v28 = a1;
  v27_.v30 = &v27_.v27;
  *(_DWORD*)(v9 + 80) = v7;
  *(_QWORD*)(v9 + 96) = 0;
  *(_QWORD*)(v9 + 104) = 0;
  *(_QWORD*)(v9 + 88) = 0;
  *(_QWORD*)(v9 + 168) = a1;
  *(_BYTE*)(v9 + 8) = 18;
  *(_BYTE*)(v9 + 84) = 1;
  *(_QWORD*)v9 = GameData_1fc8da8;
  *(_QWORD*)(v9 + 112) = GameData_1fc8c88;
  strcpy((char*)(v9 + 9), "CharaMask");
  *(_QWORD*)(v9 + 144) = v9 + 112;
  v10 = v27_.v28;
  v11 = v27_.v29;
  *(_QWORD*)(v9 + 160) = GameData_1fc8d18;
  *(_QWORD*)(v9 + 192) = v9 + 160;
  *(_QWORD*)(v9 + 120) = v10;
  *(_QWORD*)(v9 + 128) = v11;
  v13 = *(__int64**)(a2 + 8);
  v12 = *(_QWORD*)(a2 + 16);
  if ((unsigned __int64)v13 >= v12) {
    v15 = *(_QWORD*)a2;
    v16 = (signed __int64)v13 - *(_QWORD*)a2;
    v17 = (v16 >> 3) + 1;
    if (v17 >> 61 != 0) {
      GameRoutine_b32f30_alt1();
    }
    v18 = v12 - v15;
    if (v18 >> 2 > v17) {
      v17 = v18 >> 2;
    }
    if ((unsigned __int64)v18 >= 0x7FFFFFFFFFFFFFF8LL) {
      v19 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v19 = v17;
    }
    if (v19 != 0) {
      if (v19 >> 61 != 0) {
        GameRoutine_60a210_alt1();
      }
      v20 = v9;
      v21 = fw_memory_HeapManager_Allocate_alt1(*v8, 8 * v19, 16, 0);
      v9 = v20;
    }
    else {
      v21 = 0;
    }
    v22 = v21 + 8 * v19;
    v23 = v21 + v16 - 8 * (v16 >> 3);
    *(_QWORD*)(v21 + v16) = v9;
    v14 = v21 + v16 + 8;
    memcpy_alt1(v23, v15, v16);
    *(_QWORD*)a2 = v23;
    *(_QWORD*)(a2 + 8) = v14;
    *(_QWORD*)(a2 + 16) = v22;
    if (v15 != 0) {
      v24 = 128;
      if (*(_QWORD*)(*v8 + 200) == 0) {
        v24 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v8 + v24, v15);
    }
  }
  else {
    *v13 = v9;
    v14 = (__int64)(v13 + 1);
  }
  *(_QWORD*)(a2 + 8) = v14;
  v25 = *(_QWORD*)(v14 - 8);
  v27_.v27 = (__int64 (**)(void))a2;
  v27_.v28 = v25;
  result = (*(__int64 (**)(__int64, __int64 (***)(void)))(
      *(_QWORD*)v25 + 16LL))(v25, &v27_.v27);
  *(_QWORD*)(v31 + 120) = *(
      _QWORD*)(*(_QWORD*)(*(_QWORD*)a2 + ((v3 - v4) & 0x7FFFFFFF8LL)) + 104LL);
  return result;
}

__int64 TaskPassNodes_b8b4a0(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD* v4;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64 result;

  v4 = *(_QWORD**)a2;
  v6 = **(__int64***)(a1 + 16);
  v7 = v6[65];
  v8 = v6[66];
  v10 = *v6;
  v9 = v6[1];
  v11 = v6[9];
  v12 = v6[7];
  *v4 = GameRoutine_b4a3f0(a3, v6[63]);
  v4[1] = GameRoutine_b4a3f0(a3, v7);
  v4[2] = GameRoutine_b4a3f0(a3, v8);
  v13 = *(_QWORD**)(a2 + 8);
  *v13 = GameRoutine_b48e70(a3, v10);
  v13[1] = GameRoutine_b48e70(a3, v11);
  v13[2] = GameRoutine_b48e70(a3, v12);
  result = GameRoutine_b4a510(a3, v9);
  v13[3] = result;
  return result;
}

__int64 TaskPassNodes_b8bac0(__int64 a1, _QWORD** a2, __int64 a3)
{
  _QWORD* v4;
  __int64* v7;
  __int64 result;

  v4 = *a2;
  *v4 = GameRoutine_b4a3f0(a3, *(_QWORD*)(**(_QWORD**)(a1 + 8) + 504LL));
  v4[1] = GameRoutine_b4a3f0(a3, *(_QWORD*)(**(_QWORD**)(a1 + 8) + 520LL));
  v4[2] = GameRoutine_b4a3f0(a3, *(_QWORD*)(**(_QWORD**)(a1 + 8) + 528LL));
  v7 = a2[1];
  result = GameRoutine_b4a510(a3, *(_QWORD*)(**(_QWORD**)(a1 + 8) + 8LL));
  *v7 = result;
  return result;
}

__int64 TaskPassNodes_b8bc60(__int64 a1, __int64 a2, __int64* a3)
{
  __int64 v3;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  int v8;
  _QWORD* v9;
  _QWORD* v10;
  struct {
    _QWORD v12[2];
    int v13;
  } v12_;

  v3 = *(_QWORD*)(a1 + 8);
  v5 = *(_QWORD*)(v3 + 112);
  v6 = (_QWORD*)(*(_QWORD*)v3 + 13304LL);
  v7 = *(_QWORD*)(v3 + 24);
  if (*(_BYTE*)(*(_QWORD*)v3 + 16700LL) != 0) {
    v6 = (_QWORD*)(*(_QWORD*)(*(_QWORD*)v3 + 16672LL) + 24LL);
  }
  v12_.v12[0] = *v6;
  v12_.v12[1] = v7;
  v8 = *(_DWORD*)(v3 + 40);
  v10 = *(_QWORD**)a2;
  v9 = *(_QWORD**)(a2 + 8);
  v12_.v13 = v8;
  return gfxa_TaskCharaDepth_Impl_Execute(v5, v10, v9, a3,
                                          (unsigned int*)v12_.v12);
}

__int64 TaskPassNodes_b8c000(__int64 a1, __int64** a2, __int64 a3)
{
  __int64 v5;
  __int64 v6;
  int v7;
  int v8;
  __int64* v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64* v18;
  __int64 result;
  int v20;
  int v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  struct {
    __int64 v26;
    int v27;
    int v28;
    __int64 v29;
    char v30;
    char gap73_[3];
    int v31;
  } v26_;

  v5 = **(_QWORD**)(a1 + 8);
  if ((*(_BYTE*)(v5 + 16700) & 1) != 0) {
    v6 = *(_QWORD*)(v5 + 16672);
    v8 = *(_DWORD*)(v6 + 24);
    v7 = *(_DWORD*)(v6 + 28);
  }
  else {
    v8 = *(_DWORD*)(v5 + 13304);
    v7 = *(_DWORD*)(v5 + 13308);
  }
  v21 = v8;
  v20 = v7;
  v9 = *a2;
  v10 = **(__int64***)(a1 + 16);
  v11 = v10[65];
  v12 = v10[69];
  v13 = v10[80];
  v14 = v10[66];
  v15 = v10[75];
  v16 = v10[77];
  v17 = v10[79];
  v23 = v10[9];
  v24 = v10[7];
  v22 = *v10;
  v25 = v10[1];
  *v9 = GameRoutine_b4a3f0_alt1(a3, v10[63]);
  v9[1] = GameRoutine_b4a3f0_alt1(a3, v11);
  v9[2] = GameRoutine_b4a3f0_alt1(a3, v14);
  v9[3] = GameRoutine_b4a3f0_alt1(a3, v13);
  v9[4] = GameRoutine_b4a3f0_alt1(a3, v12);
  v9[5] = GameRoutine_b4f100_alt1(a3, v15);
  v9[6] = GameRoutine_b4f100_alt1(a3, v16);
  v9[7] = GameRoutine_b4f220_alt1(a3, v17);
  v26_.v31 = 0;
  v26_.v26 = 0xD00000000LL;
  v18 = a2[1];
  v26_.v29 = 0x100000001LL;
  v26_.v30 = 1;
  v26_.v27 = v21;
  v26_.v28 = v20;
  v18[2] = GameRoutine_b4f340_alt1(a3, "RTCharaNormalDepth", &v26_.v26);
  HIDWORD(v26_.v26) = 4;
  v18[4] = GameRoutine_b4f490_alt1(a3, "CharaSilhouetteMask", &v26_.v26);
  *v18 = GameRoutine_b48e70_alt1(a3, v22);
  v18[1] = GameRoutine_b48e70_alt1(a3, v23);
  v18[3] = GameRoutine_b48e70_alt1(a3, v24);
  result = GameRoutine_b4a510_alt1(a3, v25);
  v18[5] = result;
  return result;
}

__int64 TaskPassNodes_b8c770(__int64 a1, __int64** a2, __int64 a3)
{
  __int64 v5;
  __int64 v6;
  int v7;
  int v8;
  __int64* v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64* v18;
  __int64 result;
  int v20;
  int v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  struct {
    __int64 v26;
    int v27;
    int v28;
    __int64 v29;
    char v30;
    char gap73_[3];
    int v31;
  } v26_;

  v5 = **(_QWORD**)(a1 + 8);
  if ((*(_BYTE*)(v5 + 16700) & 1) != 0) {
    v6 = *(_QWORD*)(v5 + 16672);
    v8 = *(_DWORD*)(v6 + 24);
    v7 = *(_DWORD*)(v6 + 28);
  }
  else {
    v8 = *(_DWORD*)(v5 + 13304);
    v7 = *(_DWORD*)(v5 + 13308);
  }
  v21 = v8;
  v20 = v7;
  v9 = *a2;
  v10 = **(__int64***)(a1 + 16);
  v11 = v10[65];
  v12 = v10[69];
  v13 = v10[80];
  v14 = v10[66];
  v15 = v10[75];
  v16 = v10[77];
  v17 = v10[79];
  v24 = v10[1];
  v22 = *v10;
  v23 = v10[7];
  v25 = v10[4];
  *v9 = GameRoutine_b4a3f0_alt1(a3, v10[63]);
  v9[1] = GameRoutine_b4a3f0_alt1(a3, v11);
  v9[2] = GameRoutine_b4a3f0_alt1(a3, v14);
  v9[3] = GameRoutine_b4a3f0_alt1(a3, v13);
  v9[4] = GameRoutine_b4a3f0_alt1(a3, v12);
  v9[5] = GameRoutine_b4f100_alt1(a3, v15);
  v9[6] = GameRoutine_b4f100_alt1(a3, v16);
  v9[7] = GameRoutine_b4f220_alt1(a3, v17);
  v26_.v31 = 0;
  v26_.v26 = 0xD00000000LL;
  v18 = a2[1];
  v26_.v29 = 0x100000001LL;
  v26_.v30 = 1;
  v26_.v27 = v21;
  v26_.v28 = v20;
  v18[1] = GameRoutine_b4f340_alt1(a3, "RTCharaNormalDepth", &v26_.v26);
  HIDWORD(v26_.v26) = 4;
  v18[3] = GameRoutine_b4f490_alt1(a3, "CharaSilhouetteMask", &v26_.v26);
  *v18 = GameRoutine_b48e70_alt1(a3, v22);
  v18[2] = GameRoutine_b48e70_alt1(a3, v23);
  v18[4] = GameRoutine_b4a510_alt1(a3, v24);
  result = GameRoutine_b4a510_alt1(a3, v25);
  v18[5] = result;
  return result;
}

__int64 TaskPassNodes_b8ca50(__int64 a1, _QWORD* a2, __int64 a3)
{
  _QWORD* v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  _QWORD v9[5];

  v3 = *(_QWORD**)(a1 + 8);
  v4 = a2[3];
  v9[0] = v3[3];
  v5 = (_QWORD*)(*v3 + 13304LL);
  if (*(_BYTE*)(*v3 + 16700LL) != 0) {
    v5 = (_QWORD*)(*(_QWORD*)(*v3 + 16672LL) + 24LL);
  }
  v9[1] = *v5;
  v6 = v3[9];
  v7 = v3[10];
  v9[2] = v3 + 16;
  v9[3] = v7 + 8;
  v9[4] = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v4 + 8LL) + 8LL);
  return GameRoutine_bfaf50(v6, *a2, a2[1], a3, v9);
}

__int64 TaskPassNodes_b8ce10(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD* v4;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64 result;

  v4 = *(_QWORD**)a2;
  v6 = **(__int64***)(a1 + 16);
  v7 = v6[65];
  v8 = v6[66];
  v10 = *v6;
  v9 = v6[1];
  v11 = v6[9];
  v12 = v6[7];
  *v4 = GameRoutine_b4a3f0(a3, v6[63]);
  v4[1] = GameRoutine_b4a3f0(a3, v7);
  v4[2] = GameRoutine_b4a3f0(a3, v8);
  v13 = *(_QWORD**)(a2 + 8);
  *v13 = GameRoutine_b48e70(a3, v10);
  v13[1] = GameRoutine_b48e70(a3, v11);
  v13[2] = GameRoutine_b48e70(a3, v12);
  result = GameRoutine_b4a510(a3, v9);
  v13[3] = result;
  return result;
}

__int64 TaskPassNodes_b8d210(__int64 a1, __int64** a2, __int64 a3)
{
  __int64 v5;
  __int64 v6;
  int v7;
  int v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64 result;
  struct {
    __int64 v14;
    int v15;
    int v16;
    __int64 v17;
    char v18;
    char gap25_[3];
    int v19;
  } v14_;

  v5 = **(_QWORD**)(a1 + 8);
  if ((*(_BYTE*)(v5 + 16700) & 1) != 0) {
    v6 = *(_QWORD*)(v5 + 16672);
    v7 = *(_DWORD*)(v6 + 24);
    v8 = *(_DWORD*)(v6 + 28);
  }
  else {
    v7 = *(_DWORD*)(v5 + 13304);
    v8 = *(_DWORD*)(v5 + 13308);
  }
  v9 = *a2;
  v10 = **(_QWORD**)(a1 + 16);
  v11 = *(_QWORD*)(v10 + 56);
  *v9 = GameRoutine_b48f90_alt1(a3, *(_QWORD*)(v10 + 120));
  v9[1] = GameRoutine_b48f90_alt1(a3, v11);
  v14_.v19 = 0;
  v14_.v15 = v7;
  v14_.v16 = v8;
  v12 = a2[1];
  v14_.v14 = 0x400000000LL;
  v14_.v17 = 0x100000001LL;
  v14_.v18 = 1;
  result = GameRoutine_b5a5d0_alt1(a3, "CharaMask", &v14_.v14);
  *v12 = result;
  return result;
}

__int64 TaskPassNodes_b8d3e0(__int64 a1, __int64* a2, __int64 a3)
{
  _QWORD* v3;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v10;

  v3 = *(_QWORD**)(a1 + 8);
  v5 = v3[13];
  v6 = a2[1];
  v7 = (__int64*)(*v3 + 13304LL);
  v8 = *a2;
  if (*(_BYTE*)(*v3 + 16700LL) != 0) {
    v7 = (__int64*)(*(_QWORD*)(*v3 + 16672LL) + 24LL);
  }
  v10 = *v7;
  return GameRoutine_bfa6d0(v5, v8, v6, a3, &v10);
}

__int64 TaskPassNodes_b8d780(__int64 a1, __int64** a2, __int64 a3)
{
  __int64 v5;
  __int64 v6;
  int v7;
  int v8;
  __int64* v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64* v17;
  __int64 result;
  int v19;
  struct {
    __int64 v20;
    int v21;
    int v22;
    __int64 v23;
    char v24;
    char gap41_[3];
    int v25;
  } v20_;

  v5 = **(_QWORD**)(a1 + 8);
  if ((*(_BYTE*)(v5 + 16700) & 1) != 0) {
    v6 = *(_QWORD*)(v5 + 16672);
    v7 = *(_DWORD*)(v6 + 24);
    v8 = *(_DWORD*)(v6 + 28);
  }
  else {
    v7 = *(_DWORD*)(v5 + 13304);
    v8 = *(_DWORD*)(v5 + 13308);
  }
  v19 = v7;
  v9 = *a2;
  v10 = **(__int64***)(a1 + 16);
  v11 = v10[7];
  v12 = *v10;
  v13 = v10[1];
  v14 = v10[65];
  v15 = v10[63];
  v16 = v10[66];
  *v9 = GameRoutine_b48f90_alt1(a3, v10[14]);
  v9[1] = GameRoutine_b48f90_alt1(a3, v12);
  v9[2] = GameRoutine_b4a3f0_alt1(a3, v14);
  v9[4] = GameRoutine_b4a3f0_alt1(a3, v16);
  v9[3] = GameRoutine_b4a3f0_alt1(a3, v15);
  v9[5] = GameRoutine_b48f90_alt1(a3, v11);
  v9[6] = ResourceBuilder_b5a4b0(a3, v13);
  v20_.v25 = 0;
  v20_.v20 = 0xD00000000LL;
  v17 = a2[1];
  v20_.v23 = 0x100000001LL;
  v20_.v24 = 1;
  v20_.v21 = v19;
  v20_.v22 = v8;
  *v17 = GameRoutine_b68480_alt1(a3, "PostOutlineDst", &v20_.v20);
  result = GameRoutine_b48e70_alt1(a3, v12);
  v17[1] = result;
  return result;
}

__int64 TaskPassNodes_b8d9e0(__int64 a1, __int64 a2, _QWORD* a3)
{
  _QWORD** v3;
  _QWORD* v4;
  __int64* v6;

  v3 = *(_QWORD***)a2;
  v4 = *(_QWORD**)(a2 + 8);
  v6 = *(__int64**)(*(_QWORD*)(a1 + 8) + 88LL);
  ResourceBuilder_b703a0(v6, *(_QWORD**)a2);
  return GameRoutine_b70550((__int64)v6, v3, v4, a3);
}

__int64 TaskPassNodes_b8dd70(__int64 a1, __int64** a2, __int64* a3)
{
  __int64** v3;
  __int64* v5;
  __int64 v7;
  int v8;
  __int64 v9;
  unsigned __int64* v10;
  unsigned __int64* v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64* v16;
  __int64 result;
  struct {
    __int64 v18;
    int v19;
    int v20;
    __int64 v21;
    char v22;
    char gap25_[3];
    int v23;
  } v18_;

  v3 = *(__int64***)(a1 + 16);
  v5 = *a2;
  v7 = **(_QWORD**)(a1 + 8);
  v8 = *(unsigned __int8*)(v7 + 16700);
  v9 = *(_QWORD*)(v7 + 16672);
  v10 = (unsigned __int64*)(v7 + 13304);
  v11 = (unsigned __int64*)(v9 + 24);
  if (v8 != 0) {
    v10 = v11;
  }
  v12 = *v10;
  v13 = (*v3)[15];
  v14 = (*v3)[16];
  v15 = HIDWORD(*v10);
  *v5 = GameRoutine_b48f90_alt1((__int64)a3, **v3);
  v5[1] = GameRoutine_b48f90_alt1((__int64)a3, v13);
  v5[2] = GameRoutine_b48f90_alt1((__int64)a3, v14);
  v18_.v23 = 0;
  v18_.v19 = v12;
  v18_.v20 = v15;
  v16 = a2[1];
  v18_.v18 = 0xD00000000LL;
  v18_.v21 = 0x100000001LL;
  v18_.v22 = 1;
  v16[2] = GameRoutine_b509c0_alt1(a3, (__int64)"DstColor", (__int64)&v18_.v18);
  v18_.v19 = (int)v12 / 2;
  v18_.v20 = (int)(v15 + (v12 >> 63)) >> 1;
  *v16 = GameRoutine_b50b10_alt1(a3, (__int64)"TempHalfDownscale",
                                 (__int64)&v18_.v18);
  v18_.v19 = (int)v12 / 2;
  v18_.v20 = (int)(v15 + (v12 >> 63)) >> 1;
  result =
      GameRoutine_b50c60_alt1(a3, (__int64)"TempHalfBlur", (__int64)&v18_.v18);
  v16[1] = result;
  return result;
}

__int64 TaskPassNodes_b8dfb0(__int64 a1, _QWORD* a2, _QWORD* a3)
{
  _QWORD* v3;
  _QWORD* v4;
  _DWORD* v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v11[2];

  v3 = (_QWORD*)*a2;
  v4 = (_QWORD*)a2[1];
  v7 = (__int64*)a2[3];
  v9 = *v7;
  v8 = v7[1];
  v6 = *(_DWORD**)(*(_QWORD*)(a1 + 8) + 48LL);
  v11[0] = *(_QWORD*)(*(_QWORD*)(v9 + 8) + 144LL);
  v11[1] = v8;
  ResourceBuilder_b51760(v6, (__int64)a2, v11);
  return GameRoutine_b51900((__int64)v6, v3, v4, a3);
}

__int64 TaskPassNodes_b8e350(__int64 a1, __int64** a2, __int64 a3)
{
  __int64 v5;
  __int64 v6;
  int v7;
  int v8;
  __int64* v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64* v16;
  __int64 result;
  struct {
    __int64 v18;
    int v19;
    int v20;
    __int64 v21;
    char v22;
    char gap25_[3];
    int v23;
  } v18_;

  v5 = **(_QWORD**)(a1 + 8);
  if ((*(_BYTE*)(v5 + 16700) & 1) != 0) {
    v6 = *(_QWORD*)(v5 + 16672);
    v7 = *(_DWORD*)(v6 + 24);
    v8 = *(_DWORD*)(v6 + 28);
  }
  else {
    v7 = *(_DWORD*)(v5 + 13304);
    v8 = *(_DWORD*)(v5 + 13308);
  }
  v9 = *a2;
  v10 = **(__int64***)(a1 + 16);
  v11 = v10[14];
  v12 = v10[7];
  v13 = v10[63];
  v14 = v10[65];
  v15 = v10[66];
  *v9 = GameRoutine_b48f90_alt1(a3, *v10);
  v9[1] = GameRoutine_b48f90_alt1(a3, v11);
  v9[2] = GameRoutine_b48f90_alt1(a3, v12);
  v9[3] = GameRoutine_b4a3f0_alt1(a3, v13);
  v9[4] = GameRoutine_b4a3f0_alt1(a3, v14);
  v9[5] = GameRoutine_b4a3f0_alt1(a3, v15);
  v18_.v23 = 0;
  v18_.v19 = v7;
  v18_.v20 = v8;
  v16 = a2[1];
  v18_.v18 = 0x1400000000LL;
  v18_.v21 = 0x100000001LL;
  v18_.v22 = 1;
  result = GameRoutine_b509c0_alt2(a3, "DstColor", &v18_.v18);
  *v16 = result;
  return result;
}

__int64 TaskPassNodes_b8e580(__int64 a1, __int64 a2, _QWORD* a3)
{
  _QWORD** v3;
  _QWORD* v4;
  __int64 v6;
  int v7;
  __int64 v8;
  bool v9;
  int v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64 (**v14)(__int64);
  __int64 v15;
  __int64 v16;

  v3 = *(_QWORD***)a2;
  v4 = *(_QWORD**)(a2 + 8);
  v6 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 96LL);
  v7 = *(_DWORD*)(v6 + 296);
  v8 = *(_QWORD*)v6;
  v9 = v7 < -1;
  v10 = ((_BYTE)v7 + 1) & 1;
  if (v9) {
    v10 = -v10;
  }
  *(_DWORD*)(v6 + 296) = v10;
  v11 = *(_QWORD*)(v6 + 8LL * v10 + 280);
  v12 = (_QWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)v11 + 56LL))(v11);
  v13 = (*(__int64 (**)(_QWORD))(**v3 + 16LL))(*v3);
  (*(void (**)(__int64))(*(_QWORD*)v13 + 40LL))(v13);
  v14 = (__int64 (**)(__int64))GameData_212e4d8[0];
  *v12 =
      (*(__int64 (**)(__int64))GameData_212e4d8[0])(*(_QWORD*)(v8 + 256) + 8LL);
  v15 = (*(__int64 (**)(_QWORD*))(*v3[1] + 16LL))(v3[1]);
  (*(void (**)(__int64))(*(_QWORD*)v15 + 40LL))(v15);
  v12[1] = (*v14)(*(_QWORD*)(v8 + 256) + 8LL);
  v16 = (*(__int64 (**)(_QWORD*))(*v3[2] + 16LL))(v3[2]);
  (*(void (**)(__int64))(*(_QWORD*)v16 + 40LL))(v16);
  v12[2] = (*v14)(*(_QWORD*)(v8 + 256) + 8LL);
  (*(void (**)(__int64))(*(_QWORD*)v11 + 64LL))(v11);
  return GameRoutine_b70bc0(v6, v3, v4, a3);
}

__int64 TaskPassNodes_b8e9f0(__int64 a1, __int64** a2, __int64 a3)
{
  __int64 v5;
  __int64 v6;
  int v7;
  int v8;
  __int64* v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64 result;
  struct {
    __int64 v15;
    int v16;
    int v17;
    __int64 v18;
    char v19;
    char gap25_[3];
    int v20;
  } v15_;

  v5 = **(_QWORD**)(a1 + 8);
  if ((*(_BYTE*)(v5 + 16700) & 1) != 0) {
    v6 = *(_QWORD*)(v5 + 16672);
    v7 = *(_DWORD*)(v6 + 24);
    v8 = *(_DWORD*)(v6 + 28);
  }
  else {
    v7 = *(_DWORD*)(v5 + 13304);
    v8 = *(_DWORD*)(v5 + 13308);
  }
  v9 = *a2;
  v10 = **(__int64***)(a1 + 16);
  v11 = v10[15];
  v12 = v10[7];
  *v9 = GameRoutine_b48f90_alt1(a3, *v10);
  v9[1] = GameRoutine_b48f90_alt1(a3, v11);
  v9[2] = GameRoutine_b48f90_alt1(a3, v12);
  v15_.v20 = 0;
  v15_.v16 = v7;
  v15_.v17 = v8;
  v13 = a2[1];
  v15_.v15 = 0x200000000LL;
  v15_.v18 = 0x100000001LL;
  v15_.v19 = 1;
  *v13 = GameRoutine_b50c60_alt2(a3, "SilhouetteID", &v15_.v15);
  HIDWORD(v15_.v15) = 20;
  result = GameRoutine_b53d40_alt2(a3, "SilhouetteDst", &v15_.v15);
  v13[1] = result;
  return result;
}

__int64 TaskPassNodes_b8ec00(__int64 a1, __int64 a2, __int64* a3)
{
  _QWORD* v3;
  _QWORD* v4;
  _QWORD* v5;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  struct {
    _QWORD v12[2];
    int v13;
  } v12_;

  v3 = *(_QWORD**)(a1 + 8);
  v4 = *(_QWORD**)a2;
  v5 = *(_QWORD**)(a2 + 8);
  v7 = v3[7];
  v8 = (_QWORD*)(*v3 + 13304LL);
  v9 = *(_QWORD*)(*(_QWORD*)(**(_QWORD**)(a2 + 24) + 8LL) + 232LL);
  if (*(_BYTE*)(*v3 + 16700LL) != 0) {
    v8 = (_QWORD*)(*(_QWORD*)(*v3 + 16672LL) + 24LL);
  }
  v12_.v12[0] = *v8;
  v12_.v12[1] = v9;
  v10 = 2216;
  if (*(_BYTE*)(v9 + 2184) != 0) {
    v10 = 2180;
  }
  v12_.v13 = *(_DWORD*)(v9 + v10);
  ResourceBuilder_b54250(v7, (__int64)v12_.v12);
  return TaskCharaSilhouette_b546e0(v7, v4, v5, a3, (unsigned int*)v12_.v12);
}

__int64 TaskPassNodes_b8eff0(__int64 a1, __int64* a2, __int64 a3)
{
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  _QWORD v30[26];

  v4 = *(_QWORD**)(a1 + 8);
  v3 = *(_QWORD*)(a1 + 16);
  v5 = *a2;
  v6 = (_QWORD*)*v4;
  v8 = v6[22];
  v7 = v6[23];
  v9 = v6[19];
  v10 = v6[20];
  v11 = v6[21];
  v13 = v6[17];
  v12 = v6[18];
  v30[23] = v6[13];
  v30[0] = v8;
  v30[1] = v7;
  v30[4] = v9;
  v30[5] = v10;
  v30[2] = v13;
  v30[3] = v12;
  v30[24] = v6[16];
  v14 = v6[36];
  v15 = v6[38];
  v16 = v6[39];
  v18 = v6[34];
  v17 = v6[35];
  v30[20] = v6[37];
  v30[21] = v15;
  v20 = v6[32];
  v19 = v6[33];
  v30[18] = v17;
  v30[19] = v14;
  v21 = v6[30];
  v22 = v6[31];
  v30[22] = v16;
  v30[16] = v19;
  v30[17] = v18;
  v30[14] = v22;
  v30[15] = v20;
  v23 = v6[24];
  v24 = v6[25];
  v25 = v6[26];
  v26 = v6[27];
  v30[6] = v11;
  v30[7] = v23;
  v28 = v6[28];
  v27 = v6[29];
  v30[8] = v24;
  v30[9] = v25;
  v30[25] = v3;
  v30[12] = v27;
  v30[13] = v21;
  v30[10] = v26;
  v30[11] = v28;
  return GameRoutine_bfc9a0(v5, a3, v30);
}

__int64 TaskPassNodes_b8f5a0(__int64 a1, __int64 a2, _QWORD* a3, _QWORD* a4,
                             _QWORD* a5, _QWORD* a6, _QWORD* a7, int a8)
{
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  _QWORD* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  _QWORD* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 result;
  _QWORD* v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;

  *(_QWORD*)a1 = a2;
  *(_QWORD*)(a1 + 8) = *a3;
  v9 = a3[1];
  *(_QWORD*)(a1 + 16) = v9;
  if (v9 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                              memory_order_relaxed);
  }
  *(_QWORD*)(a1 + 24) = *a4;
  v10 = a4[1];
  *(_QWORD*)(a1 + 32) = v10;
  if (v10 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                              memory_order_relaxed);
  }
  *(_QWORD*)(a1 + 40) = *a5;
  v11 = a5[1];
  *(_QWORD*)(a1 + 48) = v11;
  if (v11 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                              memory_order_relaxed);
  }
  *(_QWORD*)(a1 + 56) = *a6;
  v12 = a6[1];
  *(_QWORD*)(a1 + 64) = v12;
  if (v12 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 8), 1u,
                              memory_order_relaxed);
  }
  *(_QWORD*)(a1 + 72) = *a7;
  v13 = a7[1];
  *(_QWORD*)(a1 + 80) = v13;
  if (v13 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 8), 1u,
                              memory_order_relaxed);
  }
  *(_DWORD*)(a1 + 88) = a8;
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  v14 = *(_QWORD*)a1;
  *(_QWORD*)(a1 + 112) = 0;
  *(_QWORD*)(a1 + 120) = 0;
  v15 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v16 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       568, 16, 0);
  ResourceBuilder_b5c820(v16, v14);
  v17 = *(_QWORD**)(a1 + 96);
  *(_QWORD*)(a1 + 96) = v16;
  if (v17 != nullptr) {
    ResourceBuilder_b5d4d0(v17);
    v18 = 128;
    if (*(_QWORD*)(*v15 + 200LL) == 0) {
      v18 = 56;
    }
    nn_mem_StandardAllocator_Free(*v15 + v18, v17);
  }
  v19 = *(_QWORD*)a1;
  v20 = fw_memory_HeapManager_Allocate(*v15, 824, 16, 0);
  ResourceBuilder_b61080(v20, v19);
  v21 = *(_QWORD**)(a1 + 104);
  *(_QWORD*)(a1 + 104) = v20;
  if (v21 != nullptr) {
    ResourceBuilder_b619f0(v21);
    v22 = 128;
    if (*(_QWORD*)(*v15 + 200LL) == 0) {
      v22 = 56;
    }
    nn_mem_StandardAllocator_Free(*v15 + v22, v21);
  }
  v23 = *(_QWORD*)a1;
  v24 = fw_memory_HeapManager_Allocate(*v15, 168, 16, 0);
  ResourceBuilder_b5fb80(v24, v23);
  v25 = *(_QWORD*)(a1 + 112);
  *(_QWORD*)(a1 + 112) = v24;
  if (v25 != 0) {
    v26 = *(_QWORD*)(v25 + 48);
    *(_QWORD*)(v25 + 48) = 0;
    if (v26 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v26 + 8LL))(v26);
    }
    v27 = *(_QWORD*)(v25 + 40);
    *(_QWORD*)(v25 + 40) = 0;
    if (v27 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v27 + 8LL))(v27);
    }
    v28 = 128;
    if (*(_QWORD*)(*v15 + 200LL) == 0) {
      v28 = 56;
    }
    nn_mem_StandardAllocator_Free(*v15 + v28, v25);
  }
  v29 = *(_QWORD*)a1;
  v30 = fw_memory_HeapManager_Allocate(*v15, 248, 16, 0);
  result = ResourceBuilder_b6e230(v30, v29);
  v32 = *(_QWORD**)(a1 + 120);
  *(_QWORD*)(a1 + 120) = v30;
  if (v32 != nullptr) {
    GameRoutine_6040f0(v32 + 15, *game_g_frame_clock_ptr[0] + 568);
    GameRoutine_604050(v32 + 15);
    v33 = v32[9];
    v32[9] = 0;
    if (v33 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v33 + 8LL))(v33);
    }
    v34 = v32[8];
    v32[8] = 0;
    if (v34 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v34 + 8LL))(v34);
    }
    v35 = v32[2];
    v32[2] = 0;
    if (v35 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v35 + 8LL))(v35);
    }
    v36 = v32[1];
    v32[1] = 0;
    if (v36 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v36 + 8LL))(v36);
    }
    v37 = 128;
    if (*(_QWORD*)(*v15 + 200LL) == 0) {
      v37 = 56;
    }
    return nn_mem_StandardAllocator_Free(*v15 + v37, v32);
  }
  return result;
}

__int64 TaskPassNodes_b8f8a0(__int64 result)
{
  _QWORD* v1;
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;

  v1 = *(_QWORD**)(result + 120);
  *(_QWORD*)(result + 120) = 0;
  v2 = (_QWORD*)result;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != nullptr) {
    GameRoutine_6040f0(v1 + 15, *game_g_frame_clock_ptr[0] + 568);
    GameRoutine_604050(v1 + 15);
    v4 = v1[9];
    v1[9] = 0;
    if (v4 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 8LL))(v4);
    }
    v5 = v1[8];
    v1[8] = 0;
    if (v5 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v5 + 8LL))(v5);
    }
    v6 = v1[2];
    v1[2] = 0;
    if (v6 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 8LL))(v6);
    }
    v7 = v1[1];
    v1[1] = 0;
    if (v7 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 8LL))(v7);
    }
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v8 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v8, v1);
  }
  v9 = v2[14];
  v2[14] = 0;
  if (v9 != 0) {
    v10 = *(_QWORD*)(v9 + 48);
    *(_QWORD*)(v9 + 48) = 0;
    if (v10 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v10 + 8LL))(v10);
    }
    v11 = *(_QWORD*)(v9 + 40);
    *(_QWORD*)(v9 + 40) = 0;
    if (v11 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v11 + 8LL))(v11);
    }
    v12 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v12 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v12, v9);
  }
  v13 = (_QWORD*)v2[13];
  v2[13] = 0;
  if (v13 != nullptr) {
    ResourceBuilder_b619f0(v13);
    v14 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v14 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v14, v13);
  }
  v15 = (_QWORD*)v2[12];
  v2[12] = 0;
  if (v15 != nullptr) {
    ResourceBuilder_b5d4d0(v15);
    v16 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v16 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v16, v15);
  }
  v17 = v2[10];
  if (v17 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
    result = std___1___shared_weak_count___release_weak(v17);
  }
  v18 = v2[8];
  if (v18 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
    result = std___1___shared_weak_count___release_weak(v18);
  }
  v19 = v2[6];
  if (v19 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
    result = std___1___shared_weak_count___release_weak(v19);
  }
  v20 = v2[4];
  if (v20 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
    result = std___1___shared_weak_count___release_weak(v20);
    v21 = v2[2];
    if (v21 == 0) {
      return result;
    }
  }
  else {
    v21 = v2[2];
    if (v21 == 0) {
      return result;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
    return std___1___shared_weak_count___release_weak(v21);
  }
  return result;
}

__int64 TaskPassNodes_b909a0(__int64 a1, __int64 a2, __int64 a3)
{
  int v3;
  __int64* v6;
  __int64 v7;
  __int64* v8;
  unsigned __int64 v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  signed __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  struct {
    __int64 (**v24)();
    __int64 v25;
    __int64* v26;
    char gap24_[8];
    __int64 (***v27)();
  } v24_;
  __int64 v28;

  v28 = a3;
  v3 = *(_DWORD*)(a2 + 96);
  v6 = (__int64*)fw_memory_g_heap_manager_ptr;
  v7 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 288, 16, 0);
  *(_QWORD*)(v7 + 32) = 0;
  *(_QWORD*)(v7 + 40) = 0;
  *(_QWORD*)(v7 + 48) = 0;
  *(_QWORD*)(v7 + 56) = 0;
  *(_QWORD*)(v7 + 64) = 0;
  *(_QWORD*)(v7 + 72) = 0;
  *(_DWORD*)(v7 + 80) = v3;
  *(_QWORD*)(v7 + 176) = 0;
  *(_QWORD*)(v7 + 184) = 0;
  v24_.v26 = &v28;
  v24_.v24 = GameData_1fc9d98;
  v24_.v25 = a1;
  v24_.v27 = &v24_.v24;
  *(_QWORD*)(v7 + 160) = 0;
  *(_QWORD*)(v7 + 168) = 0;
  *(_QWORD*)(v7 + 144) = 0;
  *(_QWORD*)(v7 + 152) = 0;
  *(_QWORD*)(v7 + 128) = 0;
  *(_QWORD*)(v7 + 136) = 0;
  *(_QWORD*)(v7 + 112) = 0;
  *(_QWORD*)(v7 + 120) = 0;
  *(_QWORD*)(v7 + 96) = 0;
  *(_QWORD*)(v7 + 104) = 0;
  *(_QWORD*)(v7 + 88) = 0;
  *(_QWORD*)(v7 + 248) = a1;
  *(_BYTE*)(v7 + 8) = 30;
  strcpy((char*)(v7 + 9), "EffectDecalPass");
  *(_BYTE*)(v7 + 84) = 1;
  *(_QWORD*)v7 = GameData_1fc9eb8;
  *(_QWORD*)(v7 + 192) = GameData_1fc9d98;
  *(_QWORD*)(v7 + 240) = GameData_1fc9e28;
  *(_QWORD*)(v7 + 272) = v7 + 240;
  *(_QWORD*)(v7 + 224) = v7 + 192;
  v8 = v24_.v26;
  *(_QWORD*)(v7 + 200) = v24_.v25;
  *(_QWORD*)(v7 + 208) = v8;
  v10 = *(__int64**)(a2 + 8);
  v9 = *(_QWORD*)(a2 + 16);
  if ((unsigned __int64)v10 >= v9) {
    v12 = *(_QWORD*)a2;
    v13 = (signed __int64)v10 - *(_QWORD*)a2;
    v14 = (v13 >> 3) + 1;
    if (v14 >> 61 != 0) {
      GameRoutine_b32f30_alt1();
    }
    v15 = v9 - v12;
    if (v15 >> 2 > v14) {
      v14 = v15 >> 2;
    }
    if ((unsigned __int64)v15 >= 0x7FFFFFFFFFFFFFF8LL) {
      v16 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v16 = v14;
    }
    if (v16 != 0) {
      if (v16 >> 61 != 0) {
        GameRoutine_60a210_alt1();
      }
      v17 = v7;
      v18 = fw_memory_HeapManager_Allocate_alt1(*v6, 8 * v16, 16, 0);
      v7 = v17;
    }
    else {
      v18 = 0;
    }
    v19 = v18 + 8 * v16;
    v20 = v18 + v13 - 8 * (v13 >> 3);
    *(_QWORD*)(v18 + v13) = v7;
    v11 = v18 + v13 + 8;
    memcpy_alt1(v20, v12, v13);
    *(_QWORD*)a2 = v20;
    *(_QWORD*)(a2 + 8) = v11;
    *(_QWORD*)(a2 + 16) = v19;
    if (v12 != 0) {
      v21 = 128;
      if (*(_QWORD*)(*v6 + 200) == 0) {
        v21 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v6 + v21, v12);
    }
  }
  else {
    *v10 = v7;
    v11 = (__int64)(v10 + 1);
  }
  *(_QWORD*)(a2 + 8) = v11;
  v22 = *(_QWORD*)(v11 - 8);
  v24_.v24 = (__int64 (**)(void))a2;
  v24_.v25 = v22;
  return (*(__int64 (**)(__int64, __int64 (***)(void)))(*(_QWORD*)v22 + 16LL))(
      v22, &v24_.v24);
}

__int64 TaskPassNodes_b91180(__int64 a1, _QWORD* a2, __int64 a3)
{
  _BYTE v5[144];

  TaskPassNodes_b91200(v5, a3, **(_QWORD**)(a1 + 8));
  return memcpy(*a2, v5, 144);
}

_QWORD* TaskPassNodes_b91200(_QWORD* result, __int64 a2, _QWORD* a3)
{
  __int64 v4;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;

  v4 = a3[16];
  v6 = result;
  result[16] = 0;
  result[17] = 0;
  result[14] = 0;
  result[15] = 0;
  result[12] = 0;
  result[13] = 0;
  result[10] = 0;
  result[11] = 0;
  result[8] = 0;
  result[9] = 0;
  result[6] = 0;
  result[7] = 0;
  result[4] = 0;
  result[5] = 0;
  result[2] = 0;
  result[3] = 0;
  *result = 0;
  result[1] = 0;
  if (v4 != 0) {
    result = (_QWORD*)GameRoutine_b48f90(a2, v4);
    v6[5] = result;
  }
  v7 = a3[55];
  if (v7 != 0) {
    result = (_QWORD*)GameRoutine_b48f90(a2, v7);
    v6[13] = result;
  }
  v8 = a3[65];
  if (v8 != 0) {
    result = (_QWORD*)GameRoutine_b4a3f0(a2, v8);
    *v6 = result;
  }
  v9 = a3[80];
  if (v9 != 0) {
    result = (_QWORD*)GameRoutine_b4a3f0(a2, v9);
    v6[11] = result;
  }
  v10 = a3[17];
  if (v10 != 0) {
    result = (_QWORD*)ResourceBuilder_b5a4b0(a2, v10);
    v6[6] = result;
  }
  v11 = a3[18];
  if (v11 != 0) {
    result = (_QWORD*)ResourceBuilder_b5a4b0(a2, v11);
    v6[7] = result;
  }
  v12 = a3[19];
  if (v12 != 0) {
    result = (_QWORD*)ResourceBuilder_b5a4b0(a2, v12);
    v6[8] = result;
  }
  v13 = a3[20];
  if (v13 != 0) {
    result = (_QWORD*)ResourceBuilder_b5a4b0(a2, v13);
    v6[9] = result;
  }
  v14 = a3[21];
  if (v14 != 0) {
    result = (_QWORD*)ResourceBuilder_b5a4b0(a2, v14);
    v6[10] = result;
  }
  v15 = a3[79];
  if (v15 != 0) {
    result = (_QWORD*)GameRoutine_b4f220(a2, v15);
    v6[1] = result;
  }
  v16 = a3[77];
  if (v16 != 0) {
    result = (_QWORD*)GameRoutine_b4f100(a2, v16);
    v6[2] = result;
  }
  v17 = a3[75];
  if (v17 != 0) {
    result = (_QWORD*)GameRoutine_b4f100(a2, v17);
    v6[3] = result;
  }
  v18 = a3[13];
  if (v18 != 0) {
    result = (_QWORD*)GameRoutine_b48f90(a2, v18);
    v6[12] = result;
  }
  v19 = a3[61];
  if (v19 != 0) {
    result = (_QWORD*)GameRoutine_b48f90(a2, v19);
    v6[14] = result;
  }
  v20 = a3[62];
  if (v20 != 0) {
    result = (_QWORD*)ResourceBuilder_b5a4b0(a2, v20);
    v6[15] = result;
  }
  v21 = a3[15];
  if (v21 != 0) {
    result = (_QWORD*)GameRoutine_b48f90(a2, v21);
    v6[16] = result;
  }
  v22 = a3[7];
  if (v22 != 0) {
    result = (_QWORD*)GameRoutine_b48f90(a2, v22);
    v6[17] = result;
  }
  return result;
}

__int64 TaskPassNodes_b92160(__int64 a1, _QWORD** a2, __int64* a3)
{
  return ResourceBuilder_b5ed80(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 96LL), a3, *a2,
                                a2[1], 23);
}

__int64 TaskPassNodes_b924a0(__int64 a1, _QWORD* a2, __int64 a3)
{
  _QWORD** v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 result;
  __int64* v11;
  _QWORD v12[18];

  TaskPassNodes_b91200(v12, a3, **(_QWORD***)(a1 + 8));
  memcpy(*a2, v12, 144);
  v6 = *(_QWORD***)(a1 + 8);
  v7 = *v6;
  v8 = GameRoutine_b48e70(a3, **v6);
  v9 = GameRoutine_b48e70(a3, v7[9]);
  result = GameRoutine_b4a510(a3, v7[4]);
  v11 = (__int64*)a2[1];
  *v11 = v8;
  v11[1] = v9;
  v11[3] = 0;
  v11[4] = 0;
  v11[2] = result;
  return result;
}

__int64 TaskPassNodes_b92640(__int64 a1, __int64 a2, _QWORD* a3)
{
  __int64 v3;
  char v4;
  __int64* v5;
  __int64 v6;
  struct {
    _QWORD v8[2];
    int v9;
    int v10;
    __int64 v11;
    __int16 v12;
  } v8_;

  v3 = *(_QWORD*)(a1 + 8);
  v8_.v11 = 0;
  v4 = *(_BYTE*)(*(_QWORD*)(a2 + 24) + 116LL);
  v5 = (__int64*)(*(_QWORD*)v3 + 13304LL);
  if (*(_BYTE*)(*(_QWORD*)v3 + 16700LL) != 0) {
    v5 = (__int64*)(*(_QWORD*)(*(_QWORD*)v3 + 16672LL) + 24LL);
  }
  v6 = *v5;
  v8_.v8[0] = *(_QWORD*)(v3 + 24);
  v8_.v8[1] = v6;
  LODWORD(v6) = *(_DWORD*)(v3 + 88);
  v8_.v9 = 4;
  v8_.v10 = v6;
  v8_.v12 = 256;
  if ((v4 & 1) == 0) {
    v8_.v11 = *(_QWORD*)(*(_QWORD*)(v3 + 56) + 1220LL);
  }
  return TaskEffect_b5e3a0(*(_QWORD*)(v3 + 96), *(__int64**)a2,
                           *(_QWORD**)(a2 + 8), a3, v8_.v8);
}

__int64 TaskPassNodes_b927e0(__int64 a1, __int64* a2, __int64 a3)
{
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  _QWORD* v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64* v26;
  __int64 result;
  struct {
    _QWORD v28[10];
    int v29;
    char gap84_[4];
    __int64 v30;
    __int64 v31;
    __int64 v32;
    __int64 v33;
    __int64 v34;
    __int64 v35;
    __int64 v36;
  } v28_;

  v6 = **(__int64***)(a1 + 8);
  v8 = *v6;
  v7 = v6[1];
  v9 = v6[63];
  v10 = v6[65];
  v11 = v6[66];
  v28_.v28[0] = v8;
  v28_.v28[1] = v7;
  v28_.v28[7] = v9;
  v28_.v28[8] = v10;
  v28_.v28[9] = v11;
  v12 = GameHr_ad6000((__int64)"Effect", 6u);
  v13 = *(_QWORD**)(a1 + 8);
  v28_.v29 = v12;
  v14 = *a2;
  v15 = (_QWORD*)*v13;
  v16 = v15[18];
  v17 = v15[19];
  v18 = v15[16];
  v28_.v28[2] = v15[17];
  v28_.v28[3] = v16;
  v28_.v36 = v18;
  v19 = v15[20];
  v20 = v15[21];
  v28_.v28[4] = v17;
  v28_.v28[5] = v19;
  v21 = v15[68];
  v22 = v15[80];
  v28_.v28[6] = v20;
  v28_.v30 = v22;
  v28_.v31 = v21;
  v23 = v15[77];
  v28_.v32 = v15[75];
  v28_.v33 = v23;
  v24 = v15[79];
  v25 = v15[13];
  v28_.v34 = v24;
  v28_.v35 = v25;
  ResourceBuilder_b6e0b0(v14, a3, (__int64)v28_.v28);
  v26 = (__int64*)a2[1];
  *v26 = GameRoutine_b48e70_alt1(a3, v8);
  result = GameRoutine_b4a510_alt1(a3, v7);
  v26[1] = result;
  return result;
}

__int64 TaskPassNodes_b929e0(__int64 a1, __int64 a2, __int64* a3)
{
  _QWORD* v3;
  __int64 v4;
  _QWORD* v5;
  _QWORD* v6;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  struct {
    _QWORD v13[4];
    int v14;
    char gap44_[4];
    __int64 v15;
    int v16;
  } v13_;

  v3 = *(_QWORD**)(a1 + 8);
  v4 = *(_QWORD*)(a2 + 24);
  v5 = *(_QWORD**)a2;
  v6 = *(_QWORD**)(a2 + 8);
  v8 = v3[15];
  v9 = (_QWORD*)(*v3 + 13304LL);
  v10 = v3[5];
  if (*(_BYTE*)(*v3 + 16700LL) != 0) {
    v9 = (_QWORD*)(*(_QWORD*)(*v3 + 16672LL) + 24LL);
  }
  v11 = *(_QWORD*)(v4 + 48);
  v13_.v13[0] = *v9;
  v13_.v13[1] = v10;
  v13_.v14 = *(_DWORD*)(v4 + 56);
  v13_.v15 = *(_QWORD*)(v4 + 64);
  v13_.v16 = *(_DWORD*)(v4 + 72);
  v13_.v13[2] = *(_QWORD*)(v4 + 8);
  v13_.v13[3] = v11;
  ResourceBuilder_b6e370(v8, (__int64)v13_.v13);
  return ResourceBuilder_b6e4e0_alt1(v8, v5, v6, a3, (unsigned int*)v13_.v13);
}

__int64 TaskPassNodes_b92dc0(__int64 a1, _QWORD* a2, __int64 a3)
{
  _QWORD** v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 result;
  __int64* v11;
  _QWORD v12[18];

  TaskPassNodes_b91200(v12, a3, **(_QWORD***)(a1 + 8));
  memcpy(*a2, v12, 144);
  v6 = *(_QWORD***)(a1 + 8);
  v7 = *v6;
  v8 = GameRoutine_b48e70(a3, **v6);
  v9 = GameRoutine_b48e70(a3, v7[9]);
  result = GameRoutine_b4a510(a3, v7[4]);
  v11 = (__int64*)a2[1];
  *v11 = v8;
  v11[1] = v9;
  v11[3] = 0;
  v11[4] = 0;
  v11[2] = result;
  return result;
}

__int64 TaskPassNodes_b93130(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result;

  **(_QWORD**)a2 =
      GameRoutine_b48f90(a3, *(_QWORD*)(**(_QWORD**)(a1 + 8) + 488LL));
  *(_QWORD*)(*(_QWORD*)(a2 + 8) + 8LL) =
      GameRoutine_b48e70(a3, ***(_QWORD***)(a1 + 8));
  result = GameRoutine_b4a510(a3, *(_QWORD*)(**(_QWORD**)(a1 + 8) + 8LL));
  *(_QWORD*)(*(_QWORD*)(a2 + 8) + 16LL) = result;
  return result;
}

__int64 TaskPassNodes_b932c0(__int64 a1, _QWORD** a2, _QWORD* a3)
{
  __int64 v3;
  int v5;
  __int64 v6;
  _QWORD* v7;
  __int64* v8;
  bool v9;
  int v10;
  __int64 v11;
  int32x4_t* v12;
  int32x4_t v13;
  int32x4_t v14;
  int32x4_t v15;
  int32x4_t v16;
  int32x4_t v17;
  int32x4_t v18;
  __int64 v20;
  int v21;
  int v22;
  char v23;
  char v24;
  char v25;

  v3 = *(_QWORD*)(a1 + 8);
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v20 = 0x43800000780LL;
  v5 = *(_DWORD*)(v3 + 88);
  v21 = 0x20000;
  v22 = v5;
  *(_BYTE*)(*(_QWORD*)(v3 + 112) + 96LL) = 1;
  v6 = *(_QWORD*)(v3 + 112);
  v7 = *a2;
  v8 = a2[1];
  LODWORD(v3) = *(_DWORD*)(v6 + 56);
  v9 = (int)v3 < -1;
  v10 = ((_BYTE)v3 + 1) & 1;
  if (v9) {
    v10 = -v10;
  }
  *(_DWORD*)(v6 + 56) = v10;
  v11 = *(_QWORD*)(v6 + 8LL * v10 + 40);
  v12 = (int32x4_t*)(*(__int64 (**)(__int64))(*(_QWORD*)v11 + 56LL))(v11);
  v13 = *((int32x4_t*)GameData_212c2a0 + 1);
  v14 = *(int32x4_t*)((char*)((char*)0x20LL) + (_QWORD)GameData_212c2a0);
  v15 = *(int32x4_t*)((char*)((char*)0x20LL) + (_QWORD)GameData_212c2a0 + 16);
  v16 = vzip1q_s32(*(int32x4_t*)GameData_212c2a0, v14);
  v17 = vzip2q_s32(*(int32x4_t*)GameData_212c2a0, v14);
  v18 = vzip1q_s32(v13, v15);
  *v12 = vzip1q_s32(v16, v18);
  v12[1] = vzip2q_s32(v16, v18);
  v12[2] = vzip1q_s32(v17, vzip2q_s32(v13, v15));
  (*(void (**)(__int64))(*(_QWORD*)v11 + 64LL))(v11);
  return gfxa_b60140(v6, v7, v8, a3, (__int64)&v20);
}

__int64 TaskPassNodes_b936e0(__int64 a1, _QWORD* a2, __int64 a3)
{
  _QWORD** v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 result;
  __int64* v11;
  _QWORD v12[18];

  TaskPassNodes_b91200(v12, a3, **(_QWORD***)(a1 + 8));
  memcpy(*a2, v12, 144);
  v6 = *(_QWORD***)(a1 + 8);
  v7 = *v6;
  v8 = GameRoutine_b48e70(a3, **v6);
  v9 = GameRoutine_b48e70(a3, v7[9]);
  result = GameRoutine_b4a510(a3, v7[4]);
  v11 = (__int64*)a2[1];
  *v11 = v8;
  v11[1] = v9;
  v11[3] = 0;
  v11[4] = 0;
  v11[2] = result;
  return result;
}

__int64 TaskPassNodes_b93a50(__int64 a1, __int64** a2, __int64 a3)
{
  unsigned __int64 v5;
  unsigned __int64 v6;
  int v7;
  __int64* v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  struct {
    int v16[2];
    __int64 v17;
    __int64 v18;
    __int64 v19;
    __int64 v20;
    __int64 v21;
    __int64 v22;
    __int64 v23;
    __int64 v24;
    __int64 v25;
    int v26;
    char gap84_[4];
    __int64 v27;
  } v16_;

  v5 = **(_QWORD**)(a1 + 8);
  if ((*(_BYTE*)(v5 + 16700) & 1) != 0) {
    v6 = *(_QWORD*)(*(_QWORD*)(v5 + 16672) + 24LL);
    v16_.v16[0] = v6;
    v5 = HIDWORD(v6);
  }
  else {
    v7 = *(_DWORD*)(v5 + 13304);
    LODWORD(v5) = *(_DWORD*)(v5 + 13308);
    v16_.v16[0] = v7;
  }
  v16_.v16[1] = v5;
  v8 = *a2;
  v9 = **(_QWORD***)(a1 + 16);
  v10 = v9[6];
  v11 = v9[16];
  v12 = v9[65];
  v16_.v17 = v9[5];
  v16_.v18 = v10;
  v13 = v9[8];
  v16_.v19 = v9[7];
  v16_.v20 = v13;
  v16_.v21 = v9[9];
  v14 = v9[1];
  v16_.v26 = 20;
  v16_.v24 = v16_.v19;
  v16_.v25 = v11;
  v16_.v27 = v12;
  v16_.v22 = v14;
  v16_.v23 = v10;
  if (v12 != 0) {
    *v8 = GameRoutine_b4a3f0_alt1(a3, v12);
  }
  if (v11 != 0) {
    v8[1] = GameRoutine_b48f90_alt1(a3, v11);
  }
  return ResourceBuilder_b60c80_alt1(a2[1], a3, v16_.v16);
}

__int64 TaskPassNodes_b94680(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3;
  __int64 result;

  v3 = eft_g_effectSystem;
  if (*(_BYTE*)(eft_g_effectSystem + 160) == 1) {
    result = GameRoutine_5d38c0(*(_QWORD*)(eft_g_effectSystem + 96),
                                *(_QWORD*)(a3 + 16), 0, 0xFFFFFFFFLL);
    *(_BYTE*)(v3 + 160) = 0;
  }
  return result;
}

void TaskPassNodes_b94930(__int64* a1, __int64 a2, __int64* a3, __int64* a4,
                          __int64* a5, __int64* a6, __int64* a7)
{
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;
  __int64* v16;
  __int64 v17;
  _QWORD* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  _QWORD* v31;
  __int64 v32;
  __int64 v33;
  __int64* v34;
  _QWORD* v35;
  __int64 v36;

  *a1 = a2;
  a1[1] = *a3;
  v8 = a3[1];
  a1[2] = v8;
  if (v8 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                              memory_order_relaxed);
  }
  a1[3] = *a4;
  v9 = a4[1];
  a1[4] = v9;
  if (v9 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                              memory_order_relaxed);
  }
  a1[5] = *a5;
  v10 = a5[1];
  a1[6] = v10;
  if (v10 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                              memory_order_relaxed);
  }
  a1[7] = *a6;
  v11 = a6[1];
  a1[8] = v11;
  if (v11 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                              memory_order_relaxed);
  }
  a1[9] = *a7;
  v12 = a7[1];
  a1[10] = v12;
  if (v12 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 8), 1u,
                              memory_order_relaxed);
  }
  a1[14] = 0;
  *((_DWORD*)a1 + 30) = 0;
  a1[16] = 0;
  a1[17] = 0;
  a1[13] = 0;
  a1[18] = 0;
  a1[19] = 0;
  a1[20] = 0;
  a1[21] = 0;
  a1[11] = -1;
  a1[22] = 0;
  a1[23] = 0;
  *((_DWORD*)a1 + 24) = -1;
  *((_DWORD*)a1 + 22) = GameHr_ad6000((__int64)"DepthOnly", 9u);
  *((_DWORD*)a1 + 23) = GameHr_ad6000((__int64)"GBuffer", 7u);
  v13 = GameHr_ad6000((__int64)"DepthAndGBuffer", 0xFu);
  v14 = *a1;
  *((_DWORD*)a1 + 24) = v13;
  DecalObject_a91100(a1 + 13, *(_QWORD*)(v14 + 312),
                     *(_QWORD*)(*(_QWORD*)(v14 + 552) + 16LL), 32);
  v15 = *a1;
  v16 = (__int64*)fw_memory_g_heap_manager_ptr;
  v17 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 80, 16, 0);
  gfx_flow_b6be20(v17, v15);
  v18 = (_QWORD*)a1[20];
  a1[20] = v17;
  if (v18 != nullptr) {
    v19 = v18[4];
    v18[4] = 0;
    if (v19 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v19 + 8LL))(v19);
    }
    v20 = v18[3];
    v18[3] = 0;
    if (v20 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v20 + 8LL))(v20);
    }
    v21 = v18[2];
    if (v21 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
      std___1___shared_weak_count___release_weak_alt1(v21);
    }
    v22 = 128;
    if (*(_QWORD*)(*v16 + 200) == 0) {
      v22 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v16 + v22, (__int64)v18);
  }
  v23 = *a1;
  v24 = fw_memory_HeapManager_Allocate_alt1(*v16, 320, 16, 0);
  ResourceBuilder_b66660(v24, v23);
  v25 = a1[21];
  a1[21] = v24;
  if (v25 != 0) {
    GameRoutine_6040f0_alt1(v25 + 64);
    GameRoutine_6040f0_alt1(v25 + 192);
    GameRoutine_604050(v25 + 192);
    GameRoutine_604050(v25 + 64);
    v26 = *(_QWORD*)(v25 + 16);
    *(_QWORD*)(v25 + 16) = 0;
    if (v26 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v26 + 8LL))(v26);
    }
    v27 = *(_QWORD*)(v25 + 8);
    *(_QWORD*)(v25 + 8) = 0;
    if (v27 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v27 + 8LL))(v27);
    }
    v28 = 128;
    if (*(_QWORD*)(*v16 + 200) == 0) {
      v28 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v16 + v28, v25);
  }
  v29 = *a1;
  v30 = fw_memory_HeapManager_Allocate_alt1(*v16, 256, 16, 0);
  gfxa_TaskSkyComp_Impl_Impl(v30, v29);
  v31 = (_QWORD*)a1[22];
  a1[22] = v30;
  if (v31 != nullptr) {
    ResourceBuilder_b77b60(v31);
    v32 = 128;
    if (*(_QWORD*)(*v16 + 200) == 0) {
      v32 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v16 + v32, (__int64)v31);
  }
  v33 = *a1;
  v34 = (__int64*)fw_memory_HeapManager_Allocate_alt1(*v16, 1040, 16, 0);
  gfxa_TaskSSR_Impl_Impl(v34, v33);
  v35 = (_QWORD*)a1[23];
  a1[23] = (__int64)v34;
  if (v35 != nullptr) {
    TaskSSR_b7bd00(v35);
    v36 = 128;
    if (*(_QWORD*)(*v16 + 200) == 0) {
      v36 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v16 + v36, (__int64)v35);
  }
}

__int64 TaskPassNodes_b94cd0(_QWORD* a1)
{
  _QWORD* v1;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 result;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;

  v1 = (_QWORD*)a1[23];
  a1[23] = 0;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != nullptr) {
    GameRoutine_b7bd00(v1);
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v4, v1);
  }
  v5 = (_QWORD*)a1[22];
  a1[22] = 0;
  if (v5 != nullptr) {
    ResourceBuilder_b77b60(v5);
    v6 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v6 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v6, v5);
  }
  v7 = a1[21];
  a1[21] = 0;
  if (v7 != 0) {
    v8 = game_g_frame_clock_ptr[0];
    GameRoutine_6040f0(v7 + 64, *game_g_frame_clock_ptr[0] + 568);
    GameRoutine_6040f0(v7 + 192, *v8 + 568);
    GameRoutine_604050(v7 + 192);
    GameRoutine_604050(v7 + 64);
    v9 = *(_QWORD*)(v7 + 16);
    *(_QWORD*)(v7 + 16) = 0;
    if (v9 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v9 + 8LL))(v9);
    }
    v10 = *(_QWORD*)(v7 + 8);
    *(_QWORD*)(v7 + 8) = 0;
    if (v10 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v10 + 8LL))(v10);
    }
    v11 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v11, v7);
  }
  v12 = (_QWORD*)a1[20];
  a1[20] = 0;
  if (v12 != nullptr) {
    v13 = v12[4];
    v12[4] = 0;
    if (v13 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v13 + 8LL))(v13);
    }
    v14 = v12[3];
    v12[3] = 0;
    if (v14 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v14 + 8LL))(v14);
    }
    v15 = v12[2];
    if (v15 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
      std___1___shared_weak_count___release_weak(v15);
    }
    v16 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v16 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v16, v12);
  }
  v17 = a1[14];
  a1[14] = 0;
  if (v17 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v17 + 8LL))(v17);
  }
  result = a1[13];
  a1[13] = 0;
  if (result != 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  v19 = a1[10];
  if (v19 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
    result = std___1___shared_weak_count___release_weak(v19);
  }
  v20 = a1[8];
  if (v20 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
    result = std___1___shared_weak_count___release_weak(v20);
  }
  v21 = a1[6];
  if (v21 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
    result = std___1___shared_weak_count___release_weak(v21);
  }
  v22 = a1[4];
  if (v22 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
    result = std___1___shared_weak_count___release_weak(v22);
    v23 = a1[2];
    if (v23 == 0) {
      return result;
    }
  }
  else {
    v23 = a1[2];
    if (v23 == 0) {
      return result;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
    return std___1___shared_weak_count___release_weak(v23);
  }
  return result;
}

__int64 TaskPassNodes_b94fe0(__int64 a1, __int64* a2, _QWORD* a3)
{
  __int64 v3;
  __int64* v4;
  int v5;
  _QWORD* v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 result;
  _QWORD v26[2];

  v3 = *a2;
  v4 = (__int64*)a2[1];
  v5 = *((_DWORD*)a2 + 24);
  v9 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v10 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       288, 16, 0);
  *(_QWORD*)(v10 + 32) = 0;
  *(_QWORD*)(v10 + 40) = 0;
  *(_QWORD*)(v10 + 48) = 0;
  *(_QWORD*)(v10 + 56) = 0;
  *(_QWORD*)(v10 + 64) = 0;
  *(_QWORD*)(v10 + 72) = 0;
  *(_DWORD*)(v10 + 80) = v5;
  *(_QWORD*)(v10 + 88) = 0;
  *(_QWORD*)(v10 + 96) = 0;
  *(_QWORD*)(v10 + 104) = 0;
  *(_QWORD*)(v10 + 112) = 0;
  *(_QWORD*)(v10 + 120) = 0;
  *(_QWORD*)(v10 + 128) = 0;
  *(_QWORD*)(v10 + 136) = 0;
  *(_QWORD*)(v10 + 144) = 0;
  *(_QWORD*)(v10 + 152) = 0;
  *(_QWORD*)(v10 + 160) = 0;
  *(_BYTE*)(v10 + 8) = 14;
  *(_QWORD*)(v10 + 168) = 0;
  *(_QWORD*)(v10 + 176) = 0;
  *(_QWORD*)(v10 + 184) = 0;
  *(_QWORD*)(v10 + 200) = a1;
  *(_QWORD*)(v10 + 248) = a1;
  strcpy((char*)(v10 + 9), "PrePass");
  *(_BYTE*)(v10 + 84) = 1;
  *(_QWORD*)v10 = GameData_1fca288;
  *(_QWORD*)(v10 + 192) = GameData_1fca168;
  *(_QWORD*)(v10 + 224) = v10 + 192;
  *(_QWORD*)(v10 + 240) = GameData_1fca1f8;
  v11 = a2[2];
  *(_QWORD*)(v10 + 272) = v10 + 240;
  if ((unsigned __int64)v4 >= v11) {
    v13 = (unsigned __int64)v4 - v3;
    v14 = ((__int64)v4 - v3) >> 3;
    v15 = v14 + 1;
    if ((unsigned __int64)(v14 + 1) >> 61 != 0) {
      GameRoutine_b32f30(v10);
    }
    v16 = v11 - v3;
    if (v16 >> 2 > v15) {
      v15 = v16 >> 2;
    }
    if ((unsigned __int64)v16 >= 0x7FFFFFFFFFFFFFF8LL) {
      v17 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v17 = v15;
    }
    if (v17 != 0) {
      if (v17 >> 61 != 0) {
        GameRoutine_60a210(v10);
      }
      v18 = v10;
      v19 = fw_memory_HeapManager_Allocate(*v9, 8 * v17, 16, 0);
      v10 = v18;
    }
    else {
      v19 = 0;
    }
    v20 = v19 + 8 * v17;
    v21 = v19 + v13 - 8 * v14;
    *(_QWORD*)(v19 + v13) = v10;
    v12 = v19 + v13 + 8;
    memcpy(v21, v3, v13);
    *a2 = v21;
    a2[1] = v12;
    a2[2] = v20;
    if (v3 != 0) {
      v22 = 128;
      if (*(_QWORD*)(*v9 + 200LL) == 0) {
        v22 = 56;
      }
      nn_mem_StandardAllocator_Free(*v9 + v22, v3);
    }
  }
  else {
    *v4 = v10;
    v12 = (__int64)(v4 + 1);
    v13 = (unsigned __int64)v4 - v3;
  }
  a2[1] = v12;
  v23 = *(_QWORD*)(v12 - 8);
  v26[0] = a2;
  v26[1] = v23;
  (*(void (**)(__int64, _QWORD*))(*(_QWORD*)v23 + 16LL))(v23, v26);
  *a3 = *(_QWORD*)(*(_QWORD*)(*a2 + 8LL * (unsigned int)(v13 >> 3)) + 88LL);
  a3[5] = *(_QWORD*)(*(_QWORD*)(*a2 + 8LL * (unsigned int)(v13 >> 3)) + 96LL);
  a3[6] = *(_QWORD*)(*(_QWORD*)(*a2 + 8LL * (unsigned int)(v13 >> 3)) + 104LL);
  a3[7] = *(_QWORD*)(*(_QWORD*)(*a2 + 8LL * (unsigned int)(v13 >> 3)) + 112LL);
  a3[8] = *(_QWORD*)(*(_QWORD*)(*a2 + 8LL * (unsigned int)(v13 >> 3)) + 120LL);
  a3[9] = *(_QWORD*)(*(_QWORD*)(*a2 + 8LL * (unsigned int)(v13 >> 3)) + 128LL);
  a3[1] = *(_QWORD*)(*(_QWORD*)(*a2 + 8LL * (unsigned int)(v13 >> 3)) + 136LL);
  v24 = *(_QWORD*)(*a2 + 8LL * (unsigned int)(v13 >> 3));
  if (a3 + 48 != (_QWORD*)(v24 + 144)) {
    GameRoutine_b97100();
    v24 = *(_QWORD*)(*a2 + 8LL * (unsigned int)(v13 >> 3));
  }
  result = (__int64)(a3 + 51);
  if (a3 + 51 != (_QWORD*)(v24 + 168)) {
    return GameRoutine_b97100();
  }
  return result;
}

__int64 TaskPassNodes_b954b0(__int64 result, __int64* a2, __int64 a3,
                             __int64 a4)
{
  int v4;
  __int64 v5;
  __int64 v6;
  int v7;
  __int64 v8;
  _QWORD* v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  _QWORD v26[2];
  __int64 v27;

  v4 = *(unsigned __int8*)(a4 + 117);
  v27 = a3;
  if (v4 == 1) {
    v6 = *a2;
    v5 = a2[1];
    v7 = *((_DWORD*)a2 + 24);
    v8 = result;
    v10 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    v11 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         224, 16, 0);
    *(_DWORD*)(v11 + 80) = v7;
    *(_QWORD*)(v11 + 32) = 0;
    *(_QWORD*)(v11 + 40) = 0;
    *(_QWORD*)(v11 + 48) = 0;
    *(_QWORD*)(v11 + 56) = 0;
    *(_QWORD*)(v11 + 64) = 0;
    *(_QWORD*)(v11 + 72) = 0;
    *(_QWORD*)(v11 + 88) = 0;
    *(_QWORD*)(v11 + 96) = 0;
    *(_QWORD*)(v11 + 104) = 0;
    *(_QWORD*)(v11 + 112) = 0;
    *(_QWORD*)(v11 + 184) = v8;
    *(_BYTE*)(v11 + 8) = 18;
    *(_BYTE*)(v11 + 84) = 1;
    *(_QWORD*)v11 = GameData_1fca558;
    *(_QWORD*)(v11 + 160) = v11 + 128;
    strcpy((char*)(v11 + 9), "DepthPass");
    *(_QWORD*)(v11 + 128) = GameData_1fca438;
    *(_QWORD*)(v11 + 136) = &v27;
    *(_QWORD*)(v11 + 176) = GameData_1fca4c8;
    v13 = (__int64*)a2[1];
    v12 = a2[2];
    *(_QWORD*)(v11 + 208) = v11 + 176;
    if ((unsigned __int64)v13 >= v12) {
      v15 = *a2;
      v16 = (__int64)v13 - *a2;
      v17 = (v16 >> 3) + 1;
      if (v17 >> 61 != 0) {
        GameRoutine_b32f30(v11);
      }
      v18 = v12 - v15;
      if (v18 >> 2 > v17) {
        v17 = v18 >> 2;
      }
      if ((unsigned __int64)v18 >= 0x7FFFFFFFFFFFFFF8LL) {
        v19 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v19 = v17;
      }
      if (v19 != 0) {
        if (v19 >> 61 != 0) {
          GameRoutine_60a210(v11);
        }
        v20 = v11;
        v21 = fw_memory_HeapManager_Allocate(*v10, 8 * v19, 16, 0);
        v11 = v20;
      }
      else {
        v21 = 0;
      }
      v22 = v21 + 8 * v19;
      v23 = v21 + v16 - 8 * (v16 >> 3);
      *(_QWORD*)(v21 + v16) = v11;
      v14 = v21 + v16 + 8;
      memcpy(v23, v15, v16);
      *a2 = v23;
      a2[1] = v14;
      a2[2] = v22;
      if (v15 != 0) {
        v24 = 128;
        if (*(_QWORD*)(*v10 + 200LL) == 0) {
          v24 = 56;
        }
        nn_mem_StandardAllocator_Free(*v10 + v24, v15);
      }
    }
    else {
      *v13 = v11;
      v14 = (__int64)(v13 + 1);
    }
    a2[1] = v14;
    v25 = *(_QWORD*)(v14 - 8);
    v26[0] = a2;
    v26[1] = v25;
    result =
        (*(__int64 (**)(__int64, _QWORD*))(*(_QWORD*)v25 + 16LL))(v25, v26);
    *(_QWORD*)(v27 + 8) =
        *(_QWORD*)(*(_QWORD*)(*a2 + ((v5 - v6) & 0x7FFFFFFF8LL)) + 112LL);
  }
  return result;
}

__int64 TaskPassNodes_b978e0(__int64 a1, unsigned __int8* a2, __int64* a3)
{
  unsigned __int64 v3;
  unsigned __int64 v4;
  bool v7;
  _QWORD* v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  char* v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  char* v27;
  __int64 v28;
  __int64 v29;

  v3 = *a2;
  v4 = *((_QWORD*)a2 + 1);
  v7 = (v3 & 1) == 0;
  v8 = *(_QWORD**)a1;
  v9 = v3 >> 1;
  if (v7) {
    v10 = (__int64)(a2 + 1);
  }
  else {
    v10 = *((_QWORD*)a2 + 2);
  }
  if (v7) {
    v11 = v9;
  }
  else {
    v11 = v4;
  }
  v12 = ResourceBuilder_b53170(v8, v10, v11, a3);
  v13 = *(_QWORD**)(a1 + 8);
  v14 = v12;
  v16 = (__int64*)v13[5];
  v15 = v13[6];
  if ((unsigned __int64)v16 >= v15) {
    v18 = v13[4];
    v19 = (char*)v16 - v18;
    v20 = ((__int64)v16 - v18) >> 3;
    v21 = v20 + 1;
    if ((unsigned __int64)(v20 + 1) >> 61 != 0) {
      GameRoutine_b32f50();
    }
    v22 = v15 - v18;
    v23 = fw_memory_g_heap_manager_ptr;
    if (v22 >> 2 > v21) {
      v21 = v22 >> 2;
    }
    if ((unsigned __int64)v22 >= 0x7FFFFFFFFFFFFFF8LL) {
      v24 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v24 = v21;
    }
    if (v24 != 0) {
      if (v24 >> 61 != 0) {
        GameRoutine_60a210(v12);
      }
      v25 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v24, 16, 0);
    }
    else {
      v25 = 0;
    }
    v26 = v25 + 8 * v24;
    v27 = (char*)v16 - v18;
    v28 = (__int64)&v19[v25 + -8 * v20];
    *(_QWORD*)&v19[v25] = v14;
    v17 = (__int64)&v19[v25 + 8];
    memcpy(v28, v18, v27);
    v13[4] = v28;
    v13[5] = v17;
    v13[6] = v26;
    if (v18 != 0) {
      v29 = 128;
      if (*(_QWORD*)(*(_QWORD*)v23 + 200LL) == 0) {
        v29 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v23 + v29, v18);
    }
  }
  else {
    *v16 = v12;
    v17 = (__int64)(v16 + 1);
  }
  v13[5] = v17;
  return v14;
}

__int64 TaskPassNodes_b97c60(__int64 a1, __int64 a2, _QWORD* a3)
{

#pragma clang fp contract(off)
  _QWORD* v3;
  __int64* v4;
  __int64 v6;
  unsigned int* v7;
  unsigned int v8;
  unsigned int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
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
  int v37;
  bool v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  __int64 v44;
  __int64 i;
  int v46;
  int v47;
  __int64 v48;
  __int64 j;
  int v50;
  int v51;
  _QWORD v53[2];
  _QWORD v54[10];

  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v20 = COERCE_AS(__typeof__(v20),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v3 = *(_QWORD**)(a1 + 8);
  v4 = *(__int64**)(a2 + 8);
  v6 = *(_QWORD*)(a2 + 24);
  v7 = (unsigned int*)(*v3 + 13304LL);
  if (*(_BYTE*)(*v3 + 16700LL) != 0) {
    v7 = (unsigned int*)(*(_QWORD*)(*v3 + 16672LL) + 24LL);
  }
  v9 = *v7;
  v8 = v7[1];
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a3 + 72LL))(
      *a3, 0, 0, *v7, v8),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a3 + 88LL))(
      *a3, 0, 0, v9, v8),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v10 = *a3;
  v11 = (*(__int64 (**)(__int64))(*(_QWORD*)*v4 + 16LL))(*v4),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v20 = COERCE_AS(__typeof__(v20),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v12 = (*(__int64 (**)(__int64))(*(_QWORD*)v11 + 32LL))(v11),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v20 = COERCE_AS(__typeof__(v20),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v14 = v13;
  v15 = (*(__int64 (**)(__int64))(*(_QWORD*)v4[6] + 16LL))(v4[6]),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v20 = COERCE_AS(__typeof__(v20),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v16 = (*(__int64 (**)(__int64))(*(_QWORD*)v15 + 32LL))(v15),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v20 = COERCE_AS(__typeof__(v20),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, __int64, __int64, __int64))(
      *(_QWORD*)v10 + 104LL))(v10, v12, v14, v16, v17),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v18 = *a3;
  v54[0] = 0;
  v54[1] = 0;
  (*(void (**)(__int64, _QWORD, _QWORD*))(*(_QWORD*)v18 + 144LL))(v18, 0, v54),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, _QWORD, __int64, double))(*(_QWORD*)*a3 + 152LL))(
      *a3, 0, 2, 0x0.0p+0),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v19 = (*(__int64 (**)(__int64))(*(_QWORD*)v4[1] + 16LL))(v4[1]),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v20 = COERCE_AS(__typeof__(v20),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v54[0] = (*(__int64 (**)(__int64))(*(_QWORD*)v19 + 32LL))(v19),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v20 = COERCE_AS(__typeof__(v20),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v54[1] = v20;
  v21 = (*(__int64 (**)(__int64))(*(_QWORD*)v4[2] + 16LL))(v4[2]),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v20 = COERCE_AS(__typeof__(v20),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v54[2] = (*(__int64 (**)(__int64))(*(_QWORD*)v21 + 32LL))(v21),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v20 = COERCE_AS(__typeof__(v20),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v54[3] = v22;
  v23 = (*(__int64 (**)(__int64))(*(_QWORD*)v4[3] + 16LL))(v4[3]),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v20 = COERCE_AS(__typeof__(v20),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v54[4] = (*(__int64 (**)(__int64))(*(_QWORD*)v23 + 32LL))(v23),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v20 = COERCE_AS(__typeof__(v20),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v54[5] = v24;
  v25 = (*(__int64 (**)(__int64))(*(_QWORD*)v4[4] + 16LL))(v4[4]),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v20 = COERCE_AS(__typeof__(v20),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v54[6] = (*(__int64 (**)(__int64))(*(_QWORD*)v25 + 32LL))(v25),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v20 = COERCE_AS(__typeof__(v20),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v54[7] = v26;
  v27 = (*(__int64 (**)(__int64))(*(_QWORD*)v4[5] + 16LL))(v4[5]),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v20 = COERCE_AS(__typeof__(v20),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v54[8] = (*(__int64 (**)(__int64))(*(_QWORD*)v27 + 32LL))(v27),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v20 = COERCE_AS(__typeof__(v20),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v54[9] = v28;
  (*(void (**)(_QWORD, __int64, _QWORD*))(*(_QWORD*)*a3 + 120LL))(*a3, 5, v54),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v29 = *a3;
  v53[0] = 0;
  v53[1] = 0x3F80000000000000LL;
  (*(void (**)(__int64, _QWORD, _QWORD*))(*(_QWORD*)v29 + 144LL))(v29, 0, v53),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v30 = *a3;
  v53[0] = 0x3F8000003F800000LL;
  v53[1] = 1055846127;
  (*(void (**)(__int64, __int64, _QWORD*))(*(_QWORD*)v30 + 144LL))(v30, 1, v53),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v31 = *a3;
  v53[0] = 0x3F80000000000000LL;
  v53[1] = 0;
  (*(void (**)(__int64, __int64, _QWORD*))(*(_QWORD*)v31 + 144LL))(v31, 2, v53),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v32 = *a3;
  v53[0] = 0;
  v53[1] = 0;
  (*(void (**)(__int64, __int64, _QWORD*))(*(_QWORD*)v32 + 144LL))(v32, 3, v53),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v33 = *a3;
  v53[0] = 0;
  v53[1] = 0;
  (*(void (**)(__int64, __int64, _QWORD*))(*(_QWORD*)v33 + 144LL))(v33, 4, v53),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v34 = v3[9];
  v35 = v3[1];
  v36 = *(_QWORD*)(v6 + 128);
  v37 = *(_DWORD*)(v34 + 24);
  v38 = v37 < -1;
  v39 = ((_BYTE)v37 + 1) & 1;
  if (v38) {
    v39 = -v39;
  }
  *(_DWORD*)(v34 + 24) = v39;
  v40 = *(_DWORD*)(v34 + 80);
  v38 = v40 < -1;
  v41 = ((_BYTE)v40 + 1) & 1;
  if (v38) {
    v41 = -v41;
  }
  *(_DWORD*)(v34 + 80) = v41;
  v42 = *(_DWORD*)(v34 + 136);
  v38 = v42 < -1;
  v43 = ((_BYTE)v42 + 1) & 1;
  if (v38) {
    v43 = -v43;
  }
  *(_DWORD*)(v34 + 136) = v43;
  v44 = *(_QWORD*)(v34 + 184);
  for (i = *(_QWORD*)(v34 + 192); v44 != i; v44 += 56) {
    v46 = *(_DWORD*)(v44 + 16);
    v38 = v46 < -1;
    v47 = ((_BYTE)v46 + 1) & 1;
    if (v38) {
      v47 = -v47;
    }
    *(_DWORD*)(v44 + 16) = v47;
  }
  v48 = *(_QWORD*)(v34 + 240);
  for (j = *(_QWORD*)(v34 + 248); v48 != j; v48 += 56) {
    v50 = *(_DWORD*)(v48 + 16);
    v38 = v50 < -1;
    v51 = ((_BYTE)v50 + 1) & 1;
    if (v38) {
      v51 = -v51;
    }
    *(_DWORD*)(v48 + 16) = v51;
  }
  return gfxa_LocalLightBuffers_updateLightBuffer(v34, v35, v36, v4 + 7,
                                                  v4 + 10);
}

__int64 TaskPassNodes_b98340(__int64 a1, __int64** a2, __int64 a3)
{
  __int64* v4;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  int v13;
  int v14;
  int v15;
  __int64 result;
  struct {
    __int64 v17;
    int v18;
    int v19;
    __int64 v20;
    char v21;
    char gap25_[3];
    int v22;
  } v17_;

  v4 = *a2;
  v6 = **(__int64***)(a1 + 8);
  v7 = v6[76];
  v8 = v6[83];
  v9 = v6[77];
  v10 = v6[79];
  v11 = v6[82];
  *v4 = GameRoutine_b4a3f0_alt1(a3, v6[63]);
  v4[1] = GameRoutine_b4f100_alt1(a3, v7);
  v4[2] = GameRoutine_b4f100_alt1(a3, v8);
  v17_.v22 = 0;
  v17_.v21 = 1;
  v12 = a2[1];
  v17_.v17 = 0x1200000002LL;
  v13 = GameData_22030f8 + 62;
  if (GameData_22030f8 >= -31) {
    v13 = GameData_22030f8 + 31;
  }
  v14 = v13 >> 5;
  v15 = GameData_22030fc + 62;
  if (GameData_22030fc >= -31) {
    v15 = GameData_22030fc + 31;
  }
  v17_.v18 = v14;
  v17_.v19 = v15 >> 5;
  v17_.v20 = 0x100000010LL;
  v12[3] = GameRoutine_b509c0_alt2(a3, "Lighting", &v17_.v17);
  *v12 = GameRoutine_b6bbe0_alt1(a3, v9);
  v12[1] = GameRoutine_b6bd00_alt1(a3, v10);
  result = GameRoutine_b6bd00_alt1(a3, v11);
  v12[2] = result;
  return result;
}

__int64 TaskPassNodes_b98580(__int64 a1, __int64 a2, _QWORD* a3)
{
  _QWORD* v3;
  __int64 v4;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  _DWORD* v15;
  __int64 v16;
  int v17;
  __int64 v18;
  int v19;
  __int64 v20;
  int v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  _DWORD* v27;
  int v28;
  __int64 v29;
  _QWORD* v30;
  _QWORD* v31;
  struct {
    __int64 v33;
    int v34;
    int v35;
    int v36;
  } v33_;
  _DWORD v37[27];

  v3 = *(_QWORD**)(a1 + 8);
  v4 = *(_QWORD*)(a2 + 24);
  v6 = (__int64*)(*v3 + 13304LL);
  if (*(_BYTE*)(*v3 + 16700LL) != 0) {
    v6 = (__int64*)(*(_QWORD*)(*v3 + 16672LL) + 24LL);
  }
  v7 = *v6;
  v33_.v36 = *(_DWORD*)(v4 + 108);
  v8 = *(_QWORD*)(v4 + 24);
  v33_.v33 = v7;
  v9 = *(_DWORD*)(v8 + 32);
  v33_.v34 = *(_DWORD*)(v3[9] + 176LL);
  v33_.v35 = v9;
  if (v9 >= 1) {
    v10 = *(_QWORD*)(v4 + 80);
    v11 = v9 & 3;
    if ((unsigned int)v9 < 4) {
      v12 = 0;
      if ((v9 & 3) == 0) {
        goto LABEL_12;
      }
      goto LABEL_10;
    }
    v13 = (__int64*)(v10 + 48);
    v14 = 0;
    v15 = v37;
    v16 = -(__int64)(v9 & 0x7FFFFFFC);
    do {
      v17 = *((_DWORD*)v13 - 10);
      v14 -= 4;
      *((_QWORD*)v15 - 12) = *(v13 - 6);
      v18 = *(__int64*)((char*)v13 - 36);
      *(v15 - 22) = v17;
      v19 = *((_DWORD*)v13 - 7);
      *(_QWORD*)v15 = v18;
      v20 = *(v13 - 3);
      v15[2] = v19;
      v21 = *((_DWORD*)v13 - 4);
      *(_QWORD*)(v15 - 21) = v20;
      LODWORD(v20) = *((_DWORD*)v13 - 1);
      *(v15 - 19) = v21;
      v22 = *(__int64*)((char*)v13 - 12);
      v15[5] = v20;
      v23 = *v13;
      *(_QWORD*)(v15 + 3) = v22;
      LODWORD(v22) = *((_DWORD*)v13 + 2);
      *((_QWORD*)v15 - 9) = v23;
      LODWORD(v23) = *((_DWORD*)v13 + 5);
      *(v15 - 16) = v22;
      v24 = *(__int64*)((char*)v13 + 36);
      v15[8] = v23;
      v25 = *(__int64*)((char*)v13 + 12);
      *(_QWORD*)(v15 + 9) = v24;
      *((_QWORD*)v15 + 3) = v25;
      *(v15 - 13) = *((_DWORD*)v13 + 8);
      *(_QWORD*)(v15 - 15) = v13[3];
      LODWORD(v25) = *((_DWORD*)v13 + 11);
      v13 += 12;
      v15[11] = v25;
      v15 += 12;
    } while (v16 != v14);
    v12 = -v14;
    if (v11 != 0) {
    LABEL_10:
      v26 = v10 + 24 * v12;
      v27 = &v37[3 * v12];
      do {
        --v11;
        *((_QWORD*)v27 - 12) = *(_QWORD*)v26;
        *(v27 - 22) = *(_DWORD*)(v26 + 8);
        *(_QWORD*)v27 = *(_QWORD*)(v26 + 12);
        v28 = *(_DWORD*)(v26 + 20);
        v26 += 24;
        v27[2] = v28;
        v27 += 3;
      } while (v11 != 0);
    }
  }
LABEL_12:
  v29 = v3[20];
  v30 = *(_QWORD**)a2;
  v31 = *(_QWORD**)(a2 + 8);
  *(_QWORD*)&v37[25] = *(_QWORD*)(v4 + 128);
  gfx_flow_b6bf20(v29, (__int64)&v33_.v33);
  return ResourceBuilder_b6c430(v29, v30, v31, a3, (int*)&v33_.v33);
}

__int64 TaskPassNodes_b98a90(__int64 a1, _QWORD** a2, __int64 a3)
{
  _QWORD* v4;
  __int64* v7;
  __int64 result;

  v4 = *a2;
  *v4 = GameRoutine_b4a3f0(a3, *(_QWORD*)(**(_QWORD**)(a1 + 8) + 504LL));
  v4[1] = GameRoutine_b4a3f0(a3, *(_QWORD*)(**(_QWORD**)(a1 + 8) + 520LL));
  v4[2] = GameRoutine_b4a3f0(a3, *(_QWORD*)(**(_QWORD**)(a1 + 8) + 528LL));
  v7 = a2[1];
  result = GameRoutine_b4a510(a3, *(_QWORD*)(**(_QWORD**)(a1 + 8) + 8LL));
  *v7 = result;
  return result;
}

__int64 TaskPassNodes_b98c30(__int64 a1, _QWORD** a2, __int64* a3)
{
  __int64 v3;
  __int64 v4;
  _QWORD* v7;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64 v11;
  struct {
    _QWORD v13[2];
    int v14;
  } v13_;

  v3 = *(_QWORD*)(a1 + 8);
  v4 = *a3;
  v7 = (_QWORD*)(*(_QWORD*)v3 + 13304LL);
  v8 = *(_QWORD*)(v3 + 40);
  if (*(_BYTE*)(*(_QWORD*)v3 + 16700LL) != 0) {
    v7 = (_QWORD*)(*(_QWORD*)(*(_QWORD*)v3 + 16672LL) + 24LL);
  }
  v13_.v13[0] = *v7;
  v13_.v13[1] = v8;
  v9 = *(_DWORD*)(v3 + 88);
  v10 = *(_QWORD*)(v3 + 56);
  v13_.v14 = v9;
  v11 = v10 + 16LL * *(int*)(v10 + 392);
  (*(void (**)(__int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v4 + 224LL))(v4, 3, 3, *(_QWORD*)(v11 + 400),
                             *(_QWORD*)(v11 + 408));
  return ResourceBuilder_b594d0_alt1(*a2, a2[1], a3, (unsigned int*)v13_.v13);
}

__int64 TaskPassNodes_b98ff0(__int64 a1, _QWORD** a2, __int64 a3)
{
  __int64 result;

  **a2 = GameRoutine_b4a3f0(a3, *(_QWORD*)(**(_QWORD**)(a1 + 8) + 504LL));
  (*a2)[1] = GameRoutine_b4a3f0(a3, *(_QWORD*)(**(_QWORD**)(a1 + 8) + 520LL));
  (*a2)[2] = GameRoutine_b4a3f0(a3, *(_QWORD*)(**(_QWORD**)(a1 + 8) + 528LL));
  (*a2)[3] = GameRoutine_b4a3f0(a3, *(_QWORD*)(**(_QWORD**)(a1 + 8) + 536LL));
  *a2[1] = GameRoutine_b48e70(a3, *(_QWORD*)(**(_QWORD**)(a1 + 8) + 40LL));
  a2[1][1] = GameRoutine_b48e70(a3, *(_QWORD*)(**(_QWORD**)(a1 + 8) + 48LL));
  a2[1][2] = GameRoutine_b48e70(a3, *(_QWORD*)(**(_QWORD**)(a1 + 8) + 56LL));
  a2[1][3] = GameRoutine_b48e70(a3, *(_QWORD*)(**(_QWORD**)(a1 + 8) + 64LL));
  a2[1][4] = GameRoutine_b48e70(a3, *(_QWORD*)(**(_QWORD**)(a1 + 8) + 72LL));
  result = GameRoutine_b4a510(a3, *(_QWORD*)(**(_QWORD**)(a1 + 8) + 8LL));
  a2[1][5] = result;
  return result;
}

__int64 TaskPassNodes_b99230(__int64 a1, __int64 a2, __int64* a3)
{
  __int64* v3;
  _QWORD* v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  struct {
    _QWORD v9[2];
    int v10;
    int v11;
    char v12;
  } v9_;

  v3 = *(__int64**)(a1 + 8);
  v9_.v11 = 0;
  v4 = *(_QWORD**)a2;
  v5 = *(_QWORD**)(a2 + 8);
  v6 = *v3;
  v7 = v3[5];
  v9_.v10 = *((_DWORD*)v3 + 24);
  v9_.v9[0] = v6;
  v9_.v9[1] = v7;
  v9_.v12 = 1;
  return gfxa_TaskGBuffer_Execute(v4, v5, a3, (__int64)v9_.v9);
}

__int64 TaskPassNodes_b995b0(__int64 a1, _QWORD** a2, __int64 a3)
{
  __int64 result;

  **a2 = GameRoutine_b4a3f0(a3, *(_QWORD*)(**(_QWORD**)(a1 + 8) + 504LL));
  (*a2)[1] = GameRoutine_b4a3f0(a3, *(_QWORD*)(**(_QWORD**)(a1 + 8) + 520LL));
  (*a2)[2] = GameRoutine_b4a3f0(a3, *(_QWORD*)(**(_QWORD**)(a1 + 8) + 528LL));
  (*a2)[3] = GameRoutine_b4a3f0(a3, *(_QWORD*)(**(_QWORD**)(a1 + 8) + 536LL));
  *a2[1] = GameRoutine_b48e70(a3, *(_QWORD*)(**(_QWORD**)(a1 + 8) + 40LL));
  a2[1][1] = GameRoutine_b48e70(a3, *(_QWORD*)(**(_QWORD**)(a1 + 8) + 48LL));
  a2[1][2] = GameRoutine_b48e70(a3, *(_QWORD*)(**(_QWORD**)(a1 + 8) + 56LL));
  a2[1][3] = GameRoutine_b48e70(a3, *(_QWORD*)(**(_QWORD**)(a1 + 8) + 64LL));
  a2[1][4] = GameRoutine_b48e70(a3, *(_QWORD*)(**(_QWORD**)(a1 + 8) + 72LL));
  result = GameRoutine_b4a510(a3, *(_QWORD*)(**(_QWORD**)(a1 + 8) + 8LL));
  a2[1][5] = result;
  return result;
}

__int64 TaskPassNodes_b99960(__int64 a1, __int64** a2, __int64 a3)
{
  __int64* v4;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64 result;

  v4 = *a2;
  v6 = **(__int64***)(a1 + 8);
  v7 = *v6;
  v8 = v6[65];
  *v4 = ResourceBuilder_b5a4b0(a3, v6[1]);
  v4[1] = GameRoutine_b4a3f0(a3, v8);
  v9 = a2[1];
  result = GameRoutine_b48e70(a3, v7);
  *v9 = result;
  return result;
}

__int64 TaskPassNodes_b9a290(__int64 a1, __int64** a2, __int64* a3)
{
  __int64* v4;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64* v13;
  __int64* v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64* v17;
  __int64 result;
  struct {
    __int64 v19;
    int v20;
    int v21;
    __int64 v22;
    char v23;
    char gap25_[3];
    int v24;
  } v19_;

  v4 = *a2;
  v6 = **(_QWORD***)(a1 + 8);
  v7 = **(_QWORD**)(a1 + 16);
  v8 = v6[63];
  v9 = v6[65];
  v10 = v6[1];
  v11 = *(_QWORD*)(v7 + 16672);
  LODWORD(v6) = *(unsigned __int8*)(v7 + 16700);
  v12 = (__int64*)(v7 + 13304);
  v13 = (__int64*)(v11 + 24);
  if ((_DWORD)v6 != 0) {
    v14 = v13;
  }
  else {
    v14 = v12;
  }
  v15 = *v14;
  v16 = HIDWORD(*v14);
  v4[1] = GameRoutine_b4a3f0_alt1((__int64)a3, v8);
  v4[2] = GameRoutine_b4a3f0_alt1((__int64)a3, v9);
  *v4 = ResourceBuilder_b5a4b0((__int64)a3, v10);
  v19_.v24 = 0;
  v19_.v20 = v15;
  v19_.v21 = v16;
  v17 = a2[1];
  v19_.v22 = 0x100000001LL;
  v19_.v23 = 1;
  v19_.v19 = 0x1500000000LL;
  result = GameRoutine_b66510_alt1(a3, "TransDepth", (__int64)&v19_.v19);
  *v17 = result;
  return result;
}

__int64 TaskPassNodes_b9a480(__int64 a1, __int64 a2, _QWORD* a3)
{
  _QWORD* v3;
  __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  _QWORD* v8;
  _QWORD v10[2];

  v3 = *(_QWORD**)(a1 + 8);
  v5 = v3[21];
  v10[1] = v3[5];
  v6 = *(_QWORD**)(a2 + 8);
  v7 = (_QWORD*)(*v3 + 13304LL);
  v8 = *(_QWORD**)a2;
  if (*(_BYTE*)(*v3 + 16700LL) != 0) {
    v7 = (_QWORD*)(*(_QWORD*)(*v3 + 16672LL) + 24LL);
  }
  v10[0] = *v7;
  return ResourceBuilder_b66cf0(v5, v8, v6, a3, (__int64)v10);
}

__int64 TaskPassNodes_b9aa80(_QWORD* a1, __int64 a2, __int64* a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int* v16;
  struct {
    _QWORD v18[9];
    _BYTE v19[13];
    char gap85_[3];
    __int64 v20;
    char gap96_[32];
    __int64 v21;
  } v18_;

  v3 = a1[9];
  v4 = a1[10];
  v5 = a1[11];
  v18_.v21 = 0;
  v18_.v18[8] = v4;
  *(_QWORD*)v18_.v19 = v5;
  v7 = *(_QWORD*)((char*)a1 + 93);
  v8 = a1[7];
  v18_.v18[6] = a1[8];
  v18_.v18[7] = v3;
  *(_QWORD*)&v18_.v19[5] = v7;
  v9 = a1[5];
  v11 = *(_QWORD**)(a2 + 8);
  v10 = *(_QWORD**)a2;
  v18_.v18[4] = a1[6];
  v18_.v18[5] = v8;
  v12 = a1[1];
  v13 = a1[2];
  v14 = a1[3];
  v18_.v18[2] = a1[4];
  v18_.v18[3] = v9;
  v15 = *(_QWORD*)(v12 + 40);
  v16 = *(int**)(v12 + 184);
  v18_.v18[0] = v13;
  v18_.v18[1] = v14;
  v18_.v20 = v15;
  TaskSSR_b7c060(v16, v10, v11, (__int64)v18_.v18);
  return gfxa_TaskSSR_Impl_draw((__int64)v16, (_QWORD**)v10, v11, a3,
                                (__int64)v18_.v18);
}

__int64 TaskPassNodes_b9b090(_QWORD* a1, __int64* a2, _QWORD* a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 result;
  __int64 v17;
  struct {
    _QWORD v18[9];
    _BYTE v19[13];
    char gap85_[3];
    __int64 v20;
  } v18_;
  struct {
    __int64 v21;
    char gap104_[24];
    __int64* v22;
  } v21_;

  v3 = a1[9];
  v4 = a1[10];
  v5 = a1[11];
  v18_.v20 = 0;
  v21_.v22 = nullptr;
  v18_.v18[8] = v4;
  *(_QWORD*)v18_.v19 = v5;
  v7 = *(_QWORD*)((char*)a1 + 93);
  v8 = a1[7];
  v18_.v18[6] = a1[8];
  v18_.v18[7] = v3;
  *(_QWORD*)&v18_.v19[5] = v7;
  v9 = a1[5];
  v18_.v18[4] = a1[6];
  v18_.v18[5] = v8;
  v10 = a1[1];
  v11 = a1[3];
  v12 = a1[4];
  v18_.v18[0] = a1[2];
  v18_.v18[1] = v11;
  v14 = *a2;
  v13 = a2[1];
  v15 = *(_QWORD*)(v10 + 184);
  v18_.v18[2] = v12;
  v18_.v18[3] = v9;
  TaskSSR_b7cee0(v15, v14, v13, a3, (__int64)v18_.v18);
  result = (__int64)v21_.v22;
  if (v21_.v22 == &v21_.v21) {
    v17 = 32;
  }
  else {
    if (v21_.v22 == nullptr) {
      return result;
    }
    v17 = 40;
  }
  return (*(__int64 (**)(__int64))(*v21_.v22 + v17))((__int64)v21_.v22);
}

__int64 TaskPassNodes_b9b260(__int64 a1, __int64* a2, __int64 a3)
{
  __int64 v3;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  _QWORD* v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  _QWORD* v28;
  __int64 v29;
  _QWORD* v30;
  __int64 v31;
  __int64 v32;
  __int64* v33;
  __int64 v34;
  __int64 result;
  _QWORD* v36;
  __int64* v37;
  __int64* v38;
  __int64 v39;
  __int64* v40;
  __int64* i;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  int v48;
  char v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  int v72;
  __int64 v73;
  char v74;
  float v75;
  __int64 v76;
  int v77;
  int v78;
  __int64 v79;
  char v80;
  int v81;

  v3 = *(_QWORD*)(a1 + 16);
  v7 = **(__int64***)(a1 + 8);
  v8 = v7[4];
  v43 = *v7;
  v44 = v8;
  v9 = v7[63];
  v10 = v7[65];
  v11 = v7[66];
  v45 = v9;
  v46 = v10;
  v47 = v11;
  v12 = GameRoutine_ad6000((__int64)"Forward", 7u, a3);
  v13 = *(_QWORD**)(a1 + 8);
  v49 = 0;
  v48 = v12;
  v14 = *(_QWORD*)(a1 + 24);
  v15 = (_QWORD*)*v13;
  v59 = v15[1];
  v17 = v15[42];
  v16 = v15[43];
  v18 = v15[40];
  v52 = v15[41];
  v53 = v17;
  v50 = v15[13];
  v51 = v18;
  v20 = v15[44];
  v19 = v15[45];
  v54 = v16;
  v55 = v20;
  v22 = v15[46];
  v21 = v15[47];
  v56 = v19;
  v57 = v22;
  v23 = v15[18];
  v24 = v15[19];
  v58 = v21;
  v61 = v23;
  v62 = v24;
  v25 = v15[21];
  v63 = v15[20];
  v64 = v25;
  v60 = v15[17];
  v26 = v15[80];
  v66 = v15[68];
  v67 = v26;
  v76 = v3 + 104;
  v27 = TaskPassNodes_b9b500(v14, "CBLightParams", 13, &v76);
  v28 = *(_QWORD**)(a1 + 8);
  v65 = v27;
  v29 = *a2;
  v30 = (_QWORD*)*v28;
  v31 = v30[77];
  v69 = v30[75];
  v70 = v31;
  v32 = *(_QWORD*)(a1 + 32);
  v68 = v30[79];
  LOBYTE(v32) = *(_BYTE*)(*(_QWORD*)v32 + 122LL);
  v72 = 13;
  v74 = v32;
  v75 = 0.5;
  v71 = v30[15];
  v33 = (__int64*)(*(_QWORD*)v3 + 13304LL);
  if (*(_BYTE*)(*(_QWORD*)v3 + 16700LL) != 0) {
    v33 = (__int64*)(*(_QWORD*)(*(_QWORD*)v3 + 16672LL) + 24LL);
  }
  v73 = *v33;
  ResourceBuilder_b662e0(v29, a3, (__int64)&v43);
  v34 = a2[1];
  *(_QWORD*)v34 = GameRoutine_b48e70(a3, v43);
  result = GameRoutine_b4a510(a3, v44);
  *(_QWORD*)(v34 + 8) = result;
  if (v74 == 1) {
    v81 = 0;
    v79 = 0x100000001LL;
    v80 = 1;
    v77 = (int)(float)(v75 * (float)(int)v73);
    v78 = (int)(float)(v75 * (float)SHIDWORD(v73));
    LODWORD(v76) = 0;
    HIDWORD(v76) = v72;
    result = GameRoutine_b4f340(a3, "BeforeForwardColor", &v76);
    *(_QWORD*)(v34 + 16) = result;
  }
  *(float*)(v34 + 24) = v75;
  v36 = **(_QWORD***)(a1 + 8);
  v37 = (__int64*)v36[48];
  v38 = (__int64*)v36[49];
  if (v37 != v38) {
    do {
      v39 = *v37++;
      result = ResourceBuilder_b5a4b0(a3, v39);
    } while (v37 != v38);
    v36 = **(_QWORD***)(a1 + 8);
  }
  v40 = (__int64*)v36[51];
  for (i = (__int64*)v36[52]; v40 != i;
       result = ResourceBuilder_b5a4b0(a3, v42)) {
    v42 = *v40++;
  }
  return result;
}

__int64 TaskPassNodes_b9b500(_QWORD* a1, __int64 a2, unsigned __int64 a3,
                             __int64* a4)
{
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  char* v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;

  v8 = (__int64*)fw_memory_g_heap_manager_ptr;
  v9 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
  if (a3 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0_alt1();
  }
  v10 = *a4;
  v11 = v9;
  if (a3 >= 0x17) {
    if ((a3 | 7) == 0x17) {
      v13 = 26;
    }
    else {
      v13 = (a3 | 7) + 1;
    }
    v12 = fw_memory_HeapManager_Allocate_alt1(*v8, v13, 16, 0);
    *(_QWORD*)(v11 + 16) = a3;
    *(_QWORD*)(v11 + 24) = v12;
    *(_QWORD*)(v11 + 8) = v13 | 1;
    goto LABEL_9;
  }
  v12 = v9 + 9;
  *(_BYTE*)(v9 + 8) = 2 * a3;
  if (a3 != 0) {
  LABEL_9:
    memmove_alt1(v12, a2, a3);
  }
  *(_BYTE*)(v12 + a3) = 0;
  *(_QWORD*)(v11 + 40) = v10;
  *(_BYTE*)(v11 + 32) = 1;
  *(_QWORD*)v11 = gfx_flow_ResourceBase_Destroy_ResourceBase_b32fd0_ptr;
  v15 = (__int64*)a1[4];
  v14 = a1[5];
  if ((unsigned __int64)v15 >= v14) {
    v17 = a1[3];
    v18 = (char*)v15 - v17;
    v19 = ((__int64)v15 - v17) >> 3;
    v20 = v19 + 1;
    if ((unsigned __int64)(v19 + 1) >> 61 != 0) {
      GameRoutine_b32fb0_alt1();
    }
    v21 = v14 - v17;
    if (v21 >> 2 > v20) {
      v20 = v21 >> 2;
    }
    if ((unsigned __int64)v21 >= 0x7FFFFFFFFFFFFFF8LL) {
      v22 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v22 = v20;
    }
    if (v22 != 0) {
      if (v22 >> 61 != 0) {
        GameRoutine_60a210_alt1();
      }
      v23 = fw_memory_HeapManager_Allocate_alt1(*v8, 8 * v22, 16, 0);
    }
    else {
      v23 = 0;
    }
    v24 = v23 + 8 * v22;
    v25 = (unsigned __int64)v15 - v17;
    v26 = (__int64)&v18[v23 + -8 * v19];
    *(_QWORD*)&v18[v23] = v11;
    v16 = (__int64)&v18[v23 + 8];
    memcpy_alt1(v26, v17, v25);
    a1[3] = v26;
    a1[4] = v16;
    a1[5] = v24;
    if (v17 != 0) {
      v27 = 128;
      if (*(_QWORD*)(*v8 + 200) == 0) {
        v27 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v8 + v27, v17);
    }
  }
  else {
    *v15 = v11;
    v16 = (__int64)(v15 + 1);
  }
  a1[4] = v16;
  return *(_QWORD*)(v16 - 8);
}

__int64 TaskPassNodes_b9b860(__int64 a1, __int64* a2, __int64* a3)
{

#pragma clang fp contract(off)
  _DWORD** v3;
  __int64 v4;
  int v7;
  _DWORD* v8;
  int* v9;
  int v10;
  int v11;
  int* v12;
  __int64 v13;
  int v14;
  __int64 v15;
  int v16;
  __int64 v17;
  float v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  struct {
    _QWORD v28[2];
    int v29;
    char gap28_[12];
    int v30;
    char gap44_[4];
    __int64 v31;
    int v32;
    char gap60_[4];
    __int64 v33;
    int v34;
  } v28_;
  struct {
    __int64 v35;
    int v36;
    int v37;
    int v38;
    int v39;
  } v35_;
  struct {
    __int64 v40;
    int v41;
    int v42;
    int v43;
    int v44;
  } v40_;

  v23 = COERCE_AS(__typeof__(v23),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v3 = *(_DWORD***)(a1 + 8);
  v4 = a2[3];
  v7 = *(_DWORD*)(v4 + 56);
  v8 = v3[5];
  v9 = (int*)(*((_QWORD*)*v3 + 2084) + 24LL);
  if (*((_BYTE*)*v3 + 16700) == 0) {
    v9 = *v3 + 3326;
  }
  v28_.v29 = 1;
  v28_.v28[1] = v8;
  v12 = v9;
  v11 = *v9;
  v10 = v12[1];
  v28_.v30 = 8;
  v13 = *(_QWORD*)(v4 + 48);
  v28_.v32 = v7;
  v14 = *(_DWORD*)(v4 + 72);
  v28_.v31 = v13;
  v15 = *(_QWORD*)(v4 + 64);
  v16 = *(unsigned __int8*)(v4 + 122);
  v28_.v28[0] = __PAIR64__(v10, v11);
  v28_.v34 = v14;
  v28_.v33 = v15;
  if (v16 == 1) {
    v17 = a2[1];
    v40_.v41 = 0;
    v40_.v42 = v11;
    v40_.v43 = v10;
    v40_.v44 = 1;
    v40_.v40 = 0;
    v18 = *(float*)(v17 + 24);
    v19 = *(_QWORD*)v17;
    v35_.v35 = 0;
    v35_.v36 = 0;
    v35_.v37 = (int)(float)(v18 * (float)v11);
    v35_.v38 = (int)(float)(v18 * (float)v10);
    v35_.v39 = 1;
    v20 = (*(__int64 (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19),
    v23 = COERCE_AS(__typeof__(v23),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v21 = (*(__int64 (**)(__int64))(*(_QWORD*)v20 + 32LL))(v20),
    v23 = COERCE_AS(__typeof__(v23),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v22 = *a3;
    v24 = v23;
    v25 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v17 + 16) + 16LL))(
        *(_QWORD*)(v17 + 16)),
    v23 = COERCE_AS(__typeof__(v23),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v26 = (*(__int64 (**)(__int64))(*(_QWORD*)v25 + 40LL))(v25),
    v23 = COERCE_AS(__typeof__(v23),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*(void (**)(__int64, __int64, __int64, __int64*, __int64, _QWORD, __int64*,
                 __int64))GameData_212e870[0])(v22 + 8, v21, v24, &v40_.v40,
                                               v26, 0, &v35_.v35, 1),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  return ResourceBuilder_b667c0_alt1(v3[21], *a2, (_QWORD*)a2[1], a3,
                                     (__int64)v28_.v28);
}

__int64 TaskPassNodes_b9bd10(__int64 a1, _QWORD** a2, __int64 a3)
{
  __int64 result;

  **a2 = GameRoutine_b48f90(a3, ***(_QWORD***)(a1 + 8));
  (*a2)[1] = ResourceBuilder_b5a4b0(a3, *(_QWORD*)(**(_QWORD**)(a1 + 8) + 8LL));
  *a2[1] = GameRoutine_b48e70(a3, *(_QWORD*)(**(_QWORD**)(a1 + 8) + 472LL));
  result = GameRoutine_b4a510(a3, *(_QWORD*)(**(_QWORD**)(a1 + 8) + 480LL));
  a2[1][1] = result;
  return result;
}

__int64 TaskPassNodes_b9be90(__int64 a1, _QWORD** a2, __int64* a3)
{
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 (**v14)(__int64);
  __int64 (**v15)(__int64);
  int v16;
  __int64 (*v17)(__int64);
  _UNKNOWN** v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 (*v25)(__int64);
  __int64 v26;
  __int64 v27;
  __int64 v28;
  int v29;
  __int64 (*v30)(__int64);
  int v31;
  __int64 (*v32)(__int64);
  int v33;
  __int64 (*v34)(__int64, __int64, __int64, __int64*, __int64, __int64, _QWORD*,
                 _QWORD);
  struct {
    _QWORD v36[2];
    __int64 v37;
  } v36_;
  struct {
    __int64 v38;
    __int64 v39;
    __int64 v40;
  } v38_;

  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v27 = COERCE_AS(__typeof__(v27),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v7 = COERCE_AS(__typeof__(v7),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v3 = *a3;
  v5 = (*(__int64 (**)(_QWORD))(*(_QWORD*)**a2 + 16LL))(**a2),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v27 = COERCE_AS(__typeof__(v27),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v7 = COERCE_AS(__typeof__(v7),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v6 = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 32LL))(v5),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v27 = COERCE_AS(__typeof__(v27),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v7 = COERCE_AS(__typeof__(v7),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v8 = v7;
  v9 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2[1] + 16LL))(*a2[1]),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v27 = COERCE_AS(__typeof__(v27),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v7 = COERCE_AS(__typeof__(v7),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v10 = (*(__int64 (**)(__int64))(*(_QWORD*)v9 + 32LL))(v9),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v27 = COERCE_AS(__typeof__(v27),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v7 = COERCE_AS(__typeof__(v7),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  LODWORD(v38_.v39) = 0;
  v38_.v38 = 0;
  v11 = v10;
  v13 = v12;
  v14 = (__int64 (**)(__int64))GameData_212e778[0],
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v27 = COERCE_AS(__typeof__(v27),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v7 = COERCE_AS(__typeof__(v7),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  HIDWORD(v38_.v39) = (*(__int64 (**)(__int64))GameData_212e778[0])(v6),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v27 = COERCE_AS(__typeof__(v27),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v7 = COERCE_AS(__typeof__(v7),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v15 = (__int64 (**)(__int64))GameData_212e780,
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v27 = COERCE_AS(__typeof__(v27),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v7 = COERCE_AS(__typeof__(v7),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v38_.v40 = ((unsigned int (*)(__int64))*GameData_212e780)(v6) | 0x100000000LL,
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v27 = COERCE_AS(__typeof__(v27),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v7 = COERCE_AS(__typeof__(v7),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v36_.v36[0] = 0;
  v36_.v36[1] = v38_.v39;
  v36_.v37 = v38_.v40;
  v16 = (*v14)(v11);
  v17 = *v15;
  HIDWORD(v36_.v36[1]) = v16;
  LODWORD(v36_.v37) = v17(v11),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v27 = COERCE_AS(__typeof__(v27),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v7 = COERCE_AS(__typeof__(v7),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v18 = GameData_212e870[0];
  (*(void (**)(__int64, __int64, __int64, __int64*, __int64, __int64, _QWORD*,
               _QWORD))GameData_212e870[0])(v3 + 8, v6, v8, &v38_.v38, v11, v13,
                                            v36_.v36, 0),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v27 = COERCE_AS(__typeof__(v27),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v7 = COERCE_AS(__typeof__(v7),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v19 = (*(__int64 (**)(_QWORD))(*(_QWORD*)(*a2)[1] + 16LL))((*a2)[1]),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v27 = COERCE_AS(__typeof__(v27),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v7 = COERCE_AS(__typeof__(v7),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v20 = (*(__int64 (**)(__int64))(*(_QWORD*)v19 + 32LL))(v19),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v27 = COERCE_AS(__typeof__(v27),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v7 = COERCE_AS(__typeof__(v7),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v22 = v21;
  v23 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[1][1] + 16LL))(a2[1][1]),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v27 = COERCE_AS(__typeof__(v27),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v7 = COERCE_AS(__typeof__(v7),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v24 = (*(__int64 (**)(__int64))(*(_QWORD*)v23 + 32LL))(v23),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v27 = COERCE_AS(__typeof__(v27),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v7 = COERCE_AS(__typeof__(v7),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v25 = *v14;
  v26 = v24;
  v28 = v27;
  LODWORD(v38_.v39) = 0;
  v38_.v38 = 0;
  v29 = v25(v20),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v27 = COERCE_AS(__typeof__(v27),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v7 = COERCE_AS(__typeof__(v7),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v30 = *v15;
  HIDWORD(v38_.v39) = v29;
  v38_.v40 = (unsigned int)v30(v20) | 0x100000000LL,
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v27 = COERCE_AS(__typeof__(v27),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v7 = COERCE_AS(__typeof__(v7),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v36_.v36[0] = v38_.v38;
  v36_.v36[1] = v38_.v39;
  v36_.v37 = v38_.v40;
  v31 = (*v14)(v26);
  v32 = *v15;
  HIDWORD(v36_.v36[1]) = v31;
  v33 = v32(v26),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v27 = COERCE_AS(__typeof__(v27),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v7 = COERCE_AS(__typeof__(v7),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v34 = (__int64 (*)(__int64, __int64, __int64, __int64*, __int64, __int64,
                     _QWORD*, _QWORD))*v18,
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v27 = COERCE_AS(__typeof__(v27),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v7 = COERCE_AS(__typeof__(v7),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  LODWORD(v36_.v37) = v33;
  return v34(v3 + 8, v20, v22, &v38_.v38, v26, v28, v36_.v36, 0);
}

__int64 TaskPassNodes_b9c3d0(__int64 a1, __int64* a2, __int64 a3)
{
  _QWORD* v3;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;
  __int64 (**v16)(__int64, __int64);
  _QWORD* v17;

  v3 = *(_QWORD**)(a1 + 8);
  v7 = v3[63];
  v8 = v3[65];
  v9 = v3[66];
  v10 = GameRoutine_ad6000((__int64)"MapCharaMask", 0xCu, a3);
  v11 = *(_QWORD*)(a1 + 8);
  v12 = *a2;
  v13 = v10;
  v14 = *(_QWORD*)(v11 + 32);
  v15 = *(_QWORD*)(v11 + 120);
  *(_QWORD*)v12 = GameRoutine_b4a3f0(a3, v7);
  *(_QWORD*)(v12 + 8) = GameRoutine_b4a3f0(a3, v8);
  *(_QWORD*)(v12 + 16) = GameRoutine_b4a3f0(a3, v9);
  *(_DWORD*)(v12 + 24) = v13;
  (*(void (**)(__int64))GameData_212e470[0])(v12 + 32);
  v16 = (__int64 (**)(__int64, __int64))GameData_212e488[0];
  (*(void (**)(__int64, __int64))GameData_212e488[0])(v12 + 32, 7);
  (*(void (**)(__int64, __int64))GameData_212e478[0])(v12 + 32, 1);
  (*(void (**)(__int64, _QWORD))GameData_212e480[0])(v12 + 32, 0);
  v17 = (_QWORD*)a2[1];
  *v17 = GameRoutine_b48e70(a3, v15);
  v17[1] = GameRoutine_b4a510(a3, v14);
  return (*v16)(*a2 + 32, 3);
}

__int64 TaskPassNodes_b9c620(__int64 a1, __int64 a2, __int64* a3)
{
  __int64* v3;
  _QWORD* v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  _QWORD* v10;
  _QWORD* v11;
  struct {
    _QWORD v13[2];
    int v14;
  } v13_;

  v3 = *(__int64**)(a1 + 8);
  v4 = *(_QWORD**)a2;
  v5 = *(_QWORD**)(a2 + 8);
  v6 = *v3;
  v7 = v3[5];
  v13_.v14 = 0;
  v13_.v13[1] = v7;
  v8 = *(_QWORD*)(v6 + 16672);
  LODWORD(v7) = *(unsigned __int8*)(v6 + 16700);
  v9 = (_QWORD*)(v6 + 13304);
  v10 = (_QWORD*)(v8 + 24);
  if ((_DWORD)v7 != 0) {
    v11 = v10;
  }
  else {
    v11 = v9;
  }
  v13_.v13[0] = *v11;
  return ResourceBuilder_b6f2d0_alt1(v4, v5, a3, (unsigned int*)v13_.v13);
}

void TaskPassNodes_b9c8f0(__int64* a1, __int64 a2, __int64* a3, __int64* a4,
                          __int64* a5, __int64* a6, __int64* a7)
{
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64* v16;
  _QWORD* v17;
  __int64 v18;
  __int64 v19;
  __int64* v20;
  _QWORD* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64* v26;
  _QWORD* v27;
  __int64 v28;
  __int64 v29;
  _QWORD* v30;
  _QWORD* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  _QWORD* v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  _QWORD* v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  _QWORD* v46;
  __int64 v47;
  __int64 v48;
  __int64* v49;
  _QWORD* v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  _QWORD* v54;
  __int64 v55;
  __int64 v56;
  __int64* v57;
  _QWORD* v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  _QWORD* v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  _QWORD* v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  _QWORD* v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  _QWORD* v77;
  __int64 v78;
  __int64 v79;
  __int64* v80;
  _QWORD* v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  _QWORD* v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  _QWORD* v93;
  __int64 v94;
  __int64 v95;
  __int64* v96;
  _QWORD* v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  _QWORD* v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  _QWORD* v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  _QWORD* v112;
  __int64 v113;

  *a1 = a2;
  a1[1] = *a3;
  v8 = a3[1];
  a1[2] = v8;
  if (v8 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                              memory_order_relaxed);
  }
  a1[3] = *a4;
  v9 = a4[1];
  a1[4] = v9;
  if (v9 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                              memory_order_relaxed);
  }
  a1[5] = *a5;
  v10 = a5[1];
  a1[6] = v10;
  if (v10 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                              memory_order_relaxed);
  }
  a1[7] = *a6;
  v11 = a6[1];
  a1[8] = v11;
  if (v11 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                              memory_order_relaxed);
  }
  a1[9] = *a7;
  v12 = a7[1];
  a1[10] = v12;
  if (v12 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 8), 1u,
                              memory_order_relaxed);
  }
  a1[30] = 0;
  a1[31] = 0;
  a1[28] = 0;
  a1[29] = 0;
  v13 = *a1;
  a1[26] = 0;
  a1[27] = 0;
  a1[24] = 0;
  a1[25] = 0;
  a1[22] = 0;
  a1[23] = 0;
  a1[20] = 0;
  a1[21] = 0;
  a1[18] = 0;
  a1[19] = 0;
  a1[16] = 0;
  a1[17] = 0;
  a1[14] = 0;
  a1[15] = 0;
  a1[13] = 0;
  v14 = (__int64*)fw_memory_g_heap_manager_ptr;
  v15 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
  a1[11] = 0;
  a1[12] = 0;
  v16 = (__int64*)fw_memory_HeapManager_Allocate_alt1(v15, 1096, 16, 0);
  gfxa_TaskExposure_Impl_Impl(v16, v13);
  v17 = (_QWORD*)a1[11];
  a1[11] = (__int64)v16;
  if (v17 != nullptr) {
    ResourceBuilder_b63990(v17);
    v18 = 128;
    if (*(_QWORD*)(*v14 + 200) == 0) {
      v18 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v14 + v18, (__int64)v17);
  }
  v19 = *a1;
  v20 = (__int64*)fw_memory_HeapManager_Allocate_alt1(*v14, 752, 16, 0);
  gfxa_TaskBloom_Impl_Impl(v20, v19);
  v21 = (_QWORD*)a1[12];
  a1[12] = (__int64)v20;
  if (v21 != nullptr) {
    GameRoutine_6040f0_alt1((__int64)(v21 + 1));
    ResourceBuilder_b4c220(v21 + 38);
    v22 = v21[32];
    v21[32] = 0;
    if (v22 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v22 + 8LL))(v22);
    }
    v23 = v21[31];
    v21[31] = 0;
    if (v23 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v23 + 8LL))(v23);
    }
    ResourceBuilder_b4c3d0((__int64)(v21 + 17));
    GameRoutine_604050(v21 + 1);
    v24 = 128;
    if (*(_QWORD*)(*v14 + 200) == 0) {
      v24 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v14 + v24, (__int64)v21);
  }
  v25 = *a1;
  v26 = (__int64*)fw_memory_HeapManager_Allocate_alt1(*v14, 464, 16, 0);
  gfxa_TaskColorGrading_Impl_Impl(v26, v25);
  v27 = (_QWORD*)a1[13];
  a1[13] = (__int64)v26;
  if (v27 != nullptr) {
    ResourceBuilder_b561b0(v27);
    v28 = 128;
    if (*(_QWORD*)(*v14 + 200) == 0) {
      v28 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v14 + v28, (__int64)v27);
  }
  v29 = *a1;
  v30 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v14, 256, 16, 0);
  gfxa_TaskDiffusion_Impl_Impl(v30, v29);
  v31 = (_QWORD*)a1[14];
  a1[14] = (__int64)v30;
  if (v31 != nullptr) {
    ResourceBuilder_b59ce0(v31);
    v32 = 128;
    if (*(_QWORD*)(*v14 + 200) == 0) {
      v32 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v14 + v32, (__int64)v31);
  }
  v33 = *a1;
  v34 = fw_memory_HeapManager_Allocate_alt1(*v14, 328, 16, 0);
  gfxa_TaskGradationFilter_Impl_Impl(v34, v33);
  v35 = (_QWORD*)a1[15];
  a1[15] = v34;
  if (v35 != nullptr) {
    ResourceBuilder_b68ae0(v35);
    v36 = 128;
    if (*(_QWORD*)(*v14 + 200) == 0) {
      v36 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v14 + v36, (__int64)v35);
  }
  v37 = *a1;
  v38 = fw_memory_HeapManager_Allocate_alt1(*v14, 208, 16, 0);
  gfxa_TaskRadialBlur_Impl_Impl(v38, v37);
  v39 = (_QWORD*)a1[16];
  a1[16] = v38;
  if (v39 != nullptr) {
    GameRoutine_6040f0_alt1((__int64)(v39 + 10));
    GameRoutine_604050(v39 + 10);
    v40 = v39[4];
    v39[4] = 0;
    if (v40 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v40 + 8LL))(v40);
    }
    v41 = v39[3];
    v39[3] = 0;
    if (v41 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v41 + 8LL))(v41);
    }
    v42 = v39[2];
    if (v42 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v42 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v42 + 16LL))(v42);
      std___1___shared_weak_count___release_weak_alt1(v42);
    }
    v43 = 128;
    if (*(_QWORD*)(*v14 + 200) == 0) {
      v43 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v14 + v43, (__int64)v39);
  }
  v44 = *a1;
  v45 = fw_memory_HeapManager_Allocate_alt1(*v14, 304, 16, 0);
  gfxa_TaskDoF_Impl_Impl(v45, v44);
  v46 = (_QWORD*)a1[17];
  a1[17] = v45;
  if (v46 != nullptr) {
    ResourceBuilder_b5b3c0(v46);
    v47 = 128;
    if (*(_QWORD*)(*v14 + 200) == 0) {
      v47 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v14 + v47, (__int64)v46);
  }
  v48 = *a1;
  v49 = (__int64*)fw_memory_HeapManager_Allocate_alt1(*v14, 584, 16, 0);
  gfxa_TaskSightMapRender_Impl_Impl(v49, v48);
  v50 = (_QWORD*)a1[18];
  a1[18] = (__int64)v49;
  if (v50 != nullptr) {
    ResourceBuilder_b73120(v50);
    v51 = 128;
    if (*(_QWORD*)(*v14 + 200) == 0) {
      v51 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v14 + v51, (__int64)v50);
  }
  v52 = *a1;
  v53 = fw_memory_HeapManager_Allocate_alt1(*v14, 184, 16, 0);
  ResourceBuilder_b6b150(v53, v52);
  v54 = (_QWORD*)a1[20];
  a1[20] = v53;
  if (v54 != nullptr) {
    ResourceBuilder_b6b430(v54);
    v55 = 128;
    if (*(_QWORD*)(*v14 + 200) == 0) {
      v55 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v14 + v55, (__int64)v54);
  }
  v56 = *a1;
  v57 = (__int64*)fw_memory_HeapManager_Allocate_alt1(*v14, 888, 16, 0);
  gfxa_TaskSkyBlur_Impl_Impl(v57, v56);
  v58 = (_QWORD*)a1[21];
  a1[21] = (__int64)v57;
  if (v58 != nullptr) {
    ResourceBuilder_b75a00(v58);
    v59 = 128;
    if (*(_QWORD*)(*v14 + 200) == 0) {
      v59 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v14 + v59, (__int64)v58);
  }
  v60 = *a1;
  v61 = fw_memory_HeapManager_Allocate_alt1(*v14, 288, 16, 0);
  gfxa_TaskGaussianBlur_Impl_Impl(v61, v60);
  v62 = (_QWORD*)a1[22];
  a1[22] = v61;
  if (v62 != nullptr) {
    ResourceBuilder_b67660(v62);
    v63 = 128;
    if (*(_QWORD*)(*v14 + 200) == 0) {
      v63 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v14 + v63, (__int64)v62);
  }
  v64 = *a1;
  v65 = fw_memory_HeapManager_Allocate_alt1(*v14, 216, 16, 0);
  gfxa_TaskMotionBlur_Impl_Impl(v65, v64);
  v66 = (_QWORD*)a1[23];
  a1[23] = v65;
  if (v66 != nullptr) {
    GameRoutine_6040f0_alt1((__int64)(v66 + 10));
    GameRoutine_604050(v66 + 10);
    v67 = v66[4];
    v66[4] = 0;
    if (v67 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v67 + 8LL))(v67);
    }
    v68 = v66[3];
    v66[3] = 0;
    if (v68 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v68 + 8LL))(v68);
    }
    v69 = v66[2];
    if (v69 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v69 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v69 + 16LL))(v69);
      std___1___shared_weak_count___release_weak_alt1(v69);
    }
    v70 = 128;
    if (*(_QWORD*)(*v14 + 200) == 0) {
      v70 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v14 + v70, (__int64)v66);
  }
  v71 = *a1;
  v72 = fw_memory_HeapManager_Allocate_alt1(*v14, 440, 16, 0);
  gfxa_TaskFog_Impl_Impl(v72, v71);
  v73 = (_QWORD*)a1[25];
  a1[25] = v72;
  if (v73 != nullptr) {
    ResourceBuilder_b65600(v73);
    v74 = 128;
    if (*(_QWORD*)(*v14 + 200) == 0) {
      v74 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v14 + v74, (__int64)v73);
  }
  v75 = *a1;
  v76 = fw_memory_HeapManager_Allocate_alt1(*v14, 472, 16, 0);
  gfxa_TaskHeightFog_Impl_Impl(v76, v75);
  v77 = (_QWORD*)a1[24];
  a1[24] = v76;
  if (v77 != nullptr) {
    ResourceBuilder_b69960(v77);
    v78 = 128;
    if (*(_QWORD*)(*v14 + 200) == 0) {
      v78 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v14 + v78, (__int64)v77);
  }
  v79 = *a1;
  v80 = (__int64*)fw_memory_HeapManager_Allocate_alt1(*v14, 256, 16, 0);
  ResourceBuilder_b6cef0(v80, v79);
  v81 = (_QWORD*)a1[26];
  a1[26] = (__int64)v80;
  if (v81 != nullptr) {
    GameRoutine_6040f0_alt1((__int64)(v81 + 1));
    v82 = v81[25];
    v81[25] = 0;
    if (v82 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v82 + 8LL))(v82);
    }
    v83 = v81[24];
    v81[24] = 0;
    if (v83 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v83 + 8LL))(v83);
    }
    v84 = v81[18];
    v81[18] = 0;
    if (v84 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v84 + 8LL))(v84);
    }
    v85 = v81[17];
    v81[17] = 0;
    if (v85 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v85 + 8LL))(v85);
    }
    GameRoutine_604050(v81 + 1);
    v86 = 128;
    if (*(_QWORD*)(*v14 + 200) == 0) {
      v86 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v14 + v86, (__int64)v81);
  }
  v87 = *a1;
  v88 = fw_memory_HeapManager_Allocate_alt1(*v14, 224, 16, 0);
  gfxa_TaskMirage_Impl_Impl(v88, v87);
  v89 = (_QWORD*)a1[27];
  a1[27] = v88;
  if (v89 != nullptr) {
    ResourceBuilder_b6daf0(v89);
    v90 = 128;
    if (*(_QWORD*)(*v14 + 200) == 0) {
      v90 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v14 + v90, (__int64)v89);
  }
  v91 = *a1;
  v92 = fw_memory_HeapManager_Allocate_alt1(*v14, 296, 16, 0);
  gfxa_TaskPainting_Impl_Impl(v92, v91);
  v93 = (_QWORD*)a1[28];
  a1[28] = v92;
  if (v93 != nullptr) {
    ResourceBuilder_b6f8b0(v93);
    v94 = 128;
    if (*(_QWORD*)(*v14 + 200) == 0) {
      v94 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v14 + v94, (__int64)v93);
  }
  v95 = *a1;
  v96 = (__int64*)fw_memory_HeapManager_Allocate_alt1(*v14, 352, 16, 0);
  gfxa_TaskDoFTemporalFilter_Impl_Impl(v96, v95);
  v97 = (_QWORD*)a1[30];
  a1[30] = (__int64)v96;
  if (v97 != nullptr) {
    TaskDoFTemporalFilter_b7d840(v97);
    v98 = 128;
    if (*(_QWORD*)(*v14 + 200) == 0) {
      v98 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v14 + v98, (__int64)v97);
  }
  v99 = *a1;
  v100 = fw_memory_HeapManager_Allocate_alt1(*v14, 208, 16, 0);
  gfxa_TaskTimeSlip_Impl_Impl(v100, v99);
  v101 = (_QWORD*)a1[29];
  a1[29] = v100;
  if (v101 != nullptr) {
    GameRoutine_6040f0_alt1((__int64)(v101 + 1));
    v102 = v101[20];
    v101[20] = 0;
    if (v102 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v102 + 8LL))(v102);
    }
    v103 = v101[19];
    v101[19] = 0;
    if (v103 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v103 + 8LL))(v103);
    }
    v104 = v101[18];
    if (v104 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v104 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v104 + 16LL))(v104);
      std___1___shared_weak_count___release_weak_alt1(v104);
    }
    GameRoutine_604050(v101 + 1);
    v105 = 128;
    if (*(_QWORD*)(*v14 + 200) == 0) {
      v105 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v14 + v105, (__int64)v101);
  }
  v106 = *a1;
  v107 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v14, 264, 16, 0);
  v108 = a1[19];
  *v107 = v106;
  a1[19] = (__int64)v107;
  if (v108 != 0) {
    v109 = 128;
    if (*(_QWORD*)(*v14 + 200) == 0) {
      v109 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v14 + v109, v108);
  }
  v110 = *a1;
  v111 = fw_memory_HeapManager_Allocate_alt1(*v14, 336, 16, 0);
  gfxa_TaskEffect_CompOffscreen_Impl_Impl(v111, v110);
  v112 = (_QWORD*)a1[31];
  a1[31] = v111;
  if (v112 != nullptr) {
    ResourceBuilder_b5c4b0(v112);
    v113 = 128;
    if (*(_QWORD*)(*v14 + 200) == 0) {
      v113 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v14 + v113, (__int64)v112);
  }
}

__int64 TaskPassNodes_b9d3a0(__int64 result)
{
  _QWORD* v1;
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  _QWORD* v22;
  __int64 v23;
  _QWORD* v24;
  __int64 v25;
  _QWORD* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  _QWORD* v31;
  __int64 v32;
  _QWORD* v33;
  __int64 v34;
  _QWORD* v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  _QWORD* v39;
  __int64 v40;
  _QWORD* v41;
  __int64 v42;
  _QWORD* v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  _QWORD* v48;
  __int64 v49;
  _QWORD* v50;
  __int64 v51;
  _QWORD* v52;
  __int64 v53;
  _QWORD* v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  _QWORD* v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;

  v1 = *(_QWORD**)(result + 248);
  *(_QWORD*)(result + 248) = 0;
  v2 = (_QWORD*)result;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != nullptr) {
    ResourceBuilder_b5c4b0(v1);
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v4 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v4, v1);
  }
  v5 = (_QWORD*)v2[30];
  v2[30] = 0;
  if (v5 != nullptr) {
    GameRoutine_b7d840(v5);
    v6 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v6 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v6, v5);
  }
  v7 = (_QWORD*)v2[29];
  v2[29] = 0;
  if (v7 != nullptr) {
    GameRoutine_6040f0(v7 + 1, game_g_frame_clock + 568);
    v8 = v7[20];
    v7[20] = 0;
    if (v8 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v8 + 8LL))(v8);
    }
    v9 = v7[19];
    v7[19] = 0;
    if (v9 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v9 + 8LL))(v9);
    }
    v10 = v7[18];
    if (v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
      std___1___shared_weak_count___release_weak(v10);
    }
    GameRoutine_604050(v7 + 1);
    v11 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v11 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v11, v7);
  }
  v12 = (_QWORD*)v2[28];
  v2[28] = 0;
  if (v12 != nullptr) {
    ResourceBuilder_b6f8b0(v12);
    v13 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v13 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v13, v12);
  }
  v14 = (_QWORD*)v2[27];
  v2[27] = 0;
  if (v14 != nullptr) {
    ResourceBuilder_b6daf0(v14);
    v15 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v15 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v15, v14);
  }
  v16 = (_QWORD*)v2[26];
  v2[26] = 0;
  if (v16 != nullptr) {
    GameRoutine_6040f0(v16 + 1, game_g_frame_clock + 568);
    v17 = v16[25];
    v16[25] = 0;
    if (v17 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v17 + 8LL))(v17);
    }
    v18 = v16[24];
    v16[24] = 0;
    if (v18 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v18 + 8LL))(v18);
    }
    v19 = v16[18];
    v16[18] = 0;
    if (v19 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v19 + 8LL))(v19);
    }
    v20 = v16[17];
    v16[17] = 0;
    if (v20 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v20 + 8LL))(v20);
    }
    GameRoutine_604050(v16 + 1);
    v21 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v21 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v21, v16);
  }
  v22 = (_QWORD*)v2[25];
  v2[25] = 0;
  if (v22 != nullptr) {
    ResourceBuilder_b65600(v22);
    v23 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v23 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v23, v22);
  }
  v24 = (_QWORD*)v2[24];
  v2[24] = 0;
  if (v24 != nullptr) {
    ResourceBuilder_b69960(v24);
    v25 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v25 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v25, v24);
  }
  v26 = (_QWORD*)v2[23];
  v2[23] = 0;
  if (v26 != nullptr) {
    GameRoutine_6040f0(v26 + 10, game_g_frame_clock + 568);
    GameRoutine_604050(v26 + 10);
    v27 = v26[4];
    v26[4] = 0;
    if (v27 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v27 + 8LL))(v27);
    }
    v28 = v26[3];
    v26[3] = 0;
    if (v28 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v28 + 8LL))(v28);
    }
    v29 = v26[2];
    if (v29 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v29 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v29 + 16LL))(v29);
      std___1___shared_weak_count___release_weak(v29);
    }
    v30 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v30 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v30, v26);
  }
  v31 = (_QWORD*)v2[22];
  v2[22] = 0;
  if (v31 != nullptr) {
    ResourceBuilder_b67660(v31);
    v32 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v32 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v32, v31);
  }
  v33 = (_QWORD*)v2[21];
  v2[21] = 0;
  if (v33 != nullptr) {
    ResourceBuilder_b75a00(v33);
    v34 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v34 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v34, v33);
  }
  v35 = (_QWORD*)v2[20];
  v2[20] = 0;
  if (v35 != nullptr) {
    ResourceBuilder_b6b430(v35);
    v36 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v36 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v36, v35);
  }
  v37 = v2[19];
  v2[19] = 0;
  if (v37 != 0) {
    v38 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v38 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v38, v37);
  }
  v39 = (_QWORD*)v2[18];
  v2[18] = 0;
  if (v39 != nullptr) {
    ResourceBuilder_b73120(v39);
    v40 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v40 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v40, v39);
  }
  v41 = (_QWORD*)v2[17];
  v2[17] = 0;
  if (v41 != nullptr) {
    ResourceBuilder_b5b3c0(v41);
    v42 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v42 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v42, v41);
  }
  v43 = (_QWORD*)v2[16];
  v2[16] = 0;
  if (v43 != nullptr) {
    GameRoutine_6040f0(v43 + 10, game_g_frame_clock + 568);
    GameRoutine_604050(v43 + 10);
    v44 = v43[4];
    v43[4] = 0;
    if (v44 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v44 + 8LL))(v44);
    }
    v45 = v43[3];
    v43[3] = 0;
    if (v45 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v45 + 8LL))(v45);
    }
    v46 = v43[2];
    if (v46 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v46 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v46 + 16LL))(v46);
      std___1___shared_weak_count___release_weak(v46);
    }
    v47 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v47 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v47, v43);
  }
  v48 = (_QWORD*)v2[15];
  v2[15] = 0;
  if (v48 != nullptr) {
    ResourceBuilder_b68ae0(v48);
    v49 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v49 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v49, v48);
  }
  v50 = (_QWORD*)v2[14];
  v2[14] = 0;
  if (v50 != nullptr) {
    ResourceBuilder_b59ce0(v50);
    v51 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v51 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v51, v50);
  }
  v52 = (_QWORD*)v2[13];
  v2[13] = 0;
  if (v52 != nullptr) {
    ResourceBuilder_b561b0(v52);
    v53 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v53 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v53, v52);
  }
  v54 = (_QWORD*)v2[12];
  v2[12] = 0;
  if (v54 != nullptr) {
    GameRoutine_6040f0(v54 + 1, game_g_frame_clock + 568);
    ResourceBuilder_b4c220(v54 + 38);
    v55 = v54[32];
    v54[32] = 0;
    if (v55 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v55 + 8LL))(v55);
    }
    v56 = v54[31];
    v54[31] = 0;
    if (v56 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v56 + 8LL))(v56);
    }
    ResourceBuilder_b4c3d0((__int64)(v54 + 17));
    GameRoutine_604050(v54 + 1);
    v57 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v57 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v57, v54);
  }
  v58 = (_QWORD*)v2[11];
  v2[11] = 0;
  if (v58 != nullptr) {
    ResourceBuilder_b63990(v58);
    v59 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v59 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v59, v58);
  }
  v60 = v2[10];
  if (v60 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v60 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v60 + 16LL))(v60);
    result = std___1___shared_weak_count___release_weak(v60);
  }
  v61 = v2[8];
  if (v61 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v61 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v61 + 16LL))(v61);
    result = std___1___shared_weak_count___release_weak(v61);
  }
  v62 = v2[6];
  if (v62 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v62 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v62 + 16LL))(v62);
    result = std___1___shared_weak_count___release_weak(v62);
  }
  v63 = v2[4];
  if (v63 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v63 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v63 + 16LL))(v63);
    result = std___1___shared_weak_count___release_weak(v63);
    v64 = v2[2];
    if (v64 == 0) {
      return result;
    }
  }
  else {
    v64 = v2[2];
    if (v64 == 0) {
      return result;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v64 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v64 + 16LL))(v64);
    return std___1___shared_weak_count___release_weak(v64);
  }
  return result;
}

__int64 TaskPassNodes_b9fd30(__int64 a1, __int64 a2, _QWORD* a3)
{
  __int64 v3;
  __int64 v4;
  int v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  signed __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  _QWORD** v24;
  __int64 result;
  struct {
    __int64 (**v26)();
    _QWORD** v27;
    __int64 v28;
    char gap24_[8];
    __int64 (***v29)();
  } v26_;
  _QWORD* v30;

  v30 = a3;
  v4 = *(_QWORD*)a2;
  v3 = *(_QWORD*)(a2 + 8);
  v7 = *(_DWORD*)(a2 + 96);
  v8 = (__int64*)fw_memory_g_heap_manager_ptr;
  v9 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 240, 16, 0);
  v26_.v28 = a1;
  *(_QWORD*)(v9 + 32) = 0;
  *(_QWORD*)(v9 + 40) = 0;
  *(_QWORD*)(v9 + 48) = 0;
  *(_QWORD*)(v9 + 56) = 0;
  *(_QWORD*)(v9 + 64) = 0;
  *(_QWORD*)(v9 + 72) = 0;
  *(_DWORD*)(v9 + 80) = v7;
  v26_.v26 = GameData_1fcb8d0;
  v26_.v27 = &v30;
  *(_QWORD*)(v9 + 104) = 0;
  *(_QWORD*)(v9 + 112) = 0;
  *(_QWORD*)(v9 + 88) = 0;
  *(_QWORD*)(v9 + 96) = 0;
  *(_QWORD*)(v9 + 128) = 0;
  *(_QWORD*)(v9 + 200) = a1;
  v26_.v29 = &v26_.v26;
  *(_BYTE*)(v9 + 8) = 22;
  *(_QWORD*)(v9 + 192) = GameData_1fcb960;
  *(_QWORD*)(v9 + 224) = v9 + 192;
  strcpy((char*)(v9 + 9), "MeshFogPass");
  *(_BYTE*)(v9 + 84) = 1;
  *(_QWORD*)v9 = GameData_1fcb9f0;
  *(_DWORD*)(v9 + 120) = -1;
  *(_QWORD*)(v9 + 144) = GameData_1fcb8d0;
  *(_QWORD*)(v9 + 176) = v9 + 144;
  v10 = v26_.v28;
  *(_QWORD*)(v9 + 152) = v26_.v27;
  *(_QWORD*)(v9 + 160) = v10;
  v12 = *(__int64**)(a2 + 8);
  v11 = *(_QWORD*)(a2 + 16);
  if ((unsigned __int64)v12 >= v11) {
    v14 = *(_QWORD*)a2;
    v15 = (signed __int64)v12 - *(_QWORD*)a2;
    v16 = (v15 >> 3) + 1;
    if (v16 >> 61 != 0) {
      GameRoutine_b32f30_alt1();
    }
    v17 = v11 - v14;
    if (v17 >> 2 > v16) {
      v16 = v17 >> 2;
    }
    if ((unsigned __int64)v17 >= 0x7FFFFFFFFFFFFFF8LL) {
      v18 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v18 = v16;
    }
    if (v18 != 0) {
      if (v18 >> 61 != 0) {
        GameRoutine_60a210_alt1();
      }
      v19 = v9;
      v20 = fw_memory_HeapManager_Allocate_alt1(*v8, 8 * v18, 16, 0);
      v9 = v19;
    }
    else {
      v20 = 0;
    }
    v21 = v20 + 8 * v18;
    v22 = v20 + v15 - 8 * (v15 >> 3);
    *(_QWORD*)(v20 + v15) = v9;
    v13 = v20 + v15 + 8;
    memcpy_alt1(v22, v14, v15);
    *(_QWORD*)a2 = v22;
    *(_QWORD*)(a2 + 8) = v13;
    *(_QWORD*)(a2 + 16) = v21;
    if (v14 != 0) {
      v23 = 128;
      if (*(_QWORD*)(*v8 + 200) == 0) {
        v23 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v8 + v23, v14);
    }
  }
  else {
    *v12 = v9;
    v13 = (__int64)(v12 + 1);
  }
  *(_QWORD*)(a2 + 8) = v13;
  v24 = *(_QWORD***)(v13 - 8);
  v26_.v26 = (__int64 (**)(void))a2;
  v26_.v27 = v24;
  result =
      ((__int64 (*)(_QWORD**, __int64 (***)(void)))(*v24)[2])(v24, &v26_.v26);
  *v30 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a2 + ((v3 - v4) & 0x7FFFFFFF8LL)) +
                    128LL);
  return result;
}

__int64 TaskPassNodes_b9ff60(__int64 result, __int64 a2, _QWORD* a3, _QWORD* a4)
{

#pragma clang fp contract(off)
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64* v12;
  __int64 v13;
  _QWORD* v14;
  _QWORD** v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  signed __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  _QWORD* v31;
  struct {
    __int64 (**v32)();
    __int64 v33;
    _QWORD** v34;
    _QWORD* v35;
    __int64 (***v36)();
  } v32_;
  _QWORD* v37;

  v4 = *a4;
  v37 = a3;
  v31 = a4;
  v5 = *(_QWORD*)(*(_QWORD*)(v4 + 8) + 296LL);
  v6 = 128;
  if (*(_BYTE*)(v5 + 96) != 0) {
    v6 = 92;
  }
  if (*(float*)(v5 + v6) > 0x0.0p+0f) {
    v8 = *(_QWORD*)a2;
    v7 = *(_QWORD*)(a2 + 8);
    v9 = *(_DWORD*)(a2 + 96);
    v10 = result;
    v12 = (__int64*)fw_memory_g_heap_manager_ptr;
    v13 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 320, 16, 0);
    *(_QWORD*)(v13 + 32) = 0;
    *(_QWORD*)(v13 + 40) = 0;
    *(_QWORD*)(v13 + 48) = 0;
    *(_QWORD*)(v13 + 56) = 0;
    v32_.v34 = &v37;
    v32_.v35 = &v31;
    *(_QWORD*)(v13 + 64) = 0;
    *(_QWORD*)(v13 + 72) = 0;
    v14 = v32_.v35;
    v32_.v36 = &v32_.v32;
    *(_DWORD*)(v13 + 80) = v9;
    *(_QWORD*)(v13 + 200) = 0;
    *(_QWORD*)(v13 + 208) = 0;
    *(_QWORD*)(v13 + 184) = 0;
    *(_QWORD*)(v13 + 192) = 0;
    *(_QWORD*)(v13 + 168) = 0;
    *(_QWORD*)(v13 + 176) = 0;
    *(_QWORD*)(v13 + 152) = 0;
    *(_QWORD*)(v13 + 160) = 0;
    *(_QWORD*)(v13 + 136) = 0;
    *(_QWORD*)(v13 + 144) = 0;
    *(_QWORD*)(v13 + 120) = 0;
    *(_QWORD*)(v13 + 128) = 0;
    *(_QWORD*)(v13 + 104) = 0;
    *(_QWORD*)(v13 + 112) = 0;
    *(_QWORD*)(v13 + 88) = 0;
    *(_QWORD*)(v13 + 96) = 0;
    *(_QWORD*)(v13 + 272) = GameData_1fcbac8;
    *(_QWORD*)(v13 + 280) = v10;
    *(_BYTE*)(v13 + 8) = 22;
    v32_.v32 = GameData_1fcba38;
    v32_.v33 = v10;
    strcpy((char*)(v13 + 9), "SkyBlurPass");
    *(_BYTE*)(v13 + 84) = 1;
    *(_QWORD*)v13 = GameData_1fcbb58;
    *(_QWORD*)(v13 + 224) = GameData_1fcba38;
    *(_QWORD*)(v13 + 248) = v14;
    *(_QWORD*)(v13 + 256) = v13 + 224;
    v16 = v32_.v33;
    v15 = v32_.v34;
    *(_QWORD*)(v13 + 304) = v13 + 272;
    *(_QWORD*)(v13 + 232) = v16;
    *(_QWORD*)(v13 + 240) = v15;
    v18 = *(__int64**)(a2 + 8);
    v17 = *(_QWORD*)(a2 + 16);
    if ((unsigned __int64)v18 >= v17) {
      v20 = *(_QWORD*)a2;
      v21 = (signed __int64)v18 - *(_QWORD*)a2;
      v22 = (v21 >> 3) + 1;
      if (v22 >> 61 != 0) {
        GameRoutine_b32f30_alt1();
      }
      v23 = v17 - v20;
      if (v23 >> 2 > v22) {
        v22 = v23 >> 2;
      }
      if ((unsigned __int64)v23 >= 0x7FFFFFFFFFFFFFF8LL) {
        v24 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v24 = v22;
      }
      if (v24 != 0) {
        if (v24 >> 61 != 0) {
          GameRoutine_60a210_alt1();
        }
        v25 = v13;
        v26 = fw_memory_HeapManager_Allocate_alt1(*v12, 8 * v24, 16, 0);
        v13 = v25;
      }
      else {
        v26 = 0;
      }
      v27 = v26 + 8 * v24;
      v28 = v26 + v21 - 8 * (v21 >> 3);
      *(_QWORD*)(v26 + v21) = v13;
      v19 = v26 + v21 + 8;
      memcpy_alt1(v28, v20, v21);
      *(_QWORD*)a2 = v28;
      *(_QWORD*)(a2 + 8) = v19;
      *(_QWORD*)(a2 + 16) = v27;
      if (v20 != 0) {
        v29 = 128;
        if (*(_QWORD*)(*v12 + 200) == 0) {
          v29 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*v12 + v29, v20);
      }
    }
    else {
      *v18 = v13;
      v19 = (__int64)(v18 + 1);
    }
    *(_QWORD*)(a2 + 8) = v19;
    v30 = *(_QWORD*)(v19 - 8);
    v32_.v32 = (__int64 (**)(void))a2;
    v32_.v33 = v30;
    result = (*(__int64 (**)(__int64, __int64 (***)(void)))(
        *(_QWORD*)v30 + 16LL))(v30, &v32_.v32);
    *v37 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a2 + ((v7 - v8) & 0x7FFFFFFF8LL)) +
                      136LL);
  }
  return result;
}

__int64 TaskPassNodes_ba01d0(__int64 result, __int64 a2, _QWORD* a3,
                             __int64* a4)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  signed __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  _QWORD** v28;
  struct {
    __int64 (**v29)();
    _QWORD** v30;
    __int64 v31;
    char gap24_[8];
    __int64 (***v32)();
  } v29_;
  _QWORD* v33;

  v4 = *a4;
  v33 = a3;
  v5 = *(_QWORD*)(*(_QWORD*)(v4 + 8) + 328LL);
  if (v5 != 0) {
    v6 = 120;
    if (*(_BYTE*)(v5 + 90) != 0) {
      v6 = 89;
    }
    if ((*(_BYTE*)(v5 + v6) & 1) != 0) {
      v8 = *(_QWORD*)a2;
      v7 = *(_QWORD*)(a2 + 8);
      v9 = *(_DWORD*)(a2 + 96);
      v11 = result;
      v12 = (__int64*)fw_memory_g_heap_manager_ptr;
      v13 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 224, 16, 0);
      v29_.v31 = v11;
      *(_QWORD*)(v13 + 32) = 0;
      *(_QWORD*)(v13 + 40) = 0;
      *(_QWORD*)(v13 + 48) = 0;
      *(_QWORD*)(v13 + 56) = 0;
      *(_QWORD*)(v13 + 64) = 0;
      *(_QWORD*)(v13 + 72) = 0;
      *(_DWORD*)(v13 + 80) = v9;
      *(_QWORD*)(v13 + 104) = 0;
      *(_QWORD*)(v13 + 112) = 0;
      v29_.v29 = GameData_1fcbba0;
      v29_.v30 = &v33;
      v29_.v32 = &v29_.v29;
      *(_BYTE*)(v13 + 8) = 20;
      *(_QWORD*)(v13 + 88) = 0;
      *(_QWORD*)(v13 + 96) = 0;
      *(_QWORD*)(v13 + 184) = v11;
      *(_QWORD*)v13 = GameData_1fcbcc0;
      *(_QWORD*)(v13 + 176) = GameData_1fcbc30;
      strcpy((char*)(v13 + 9), "MiragePass");
      *(_QWORD*)(v13 + 208) = v13 + 176;
      *(_BYTE*)(v13 + 84) = 1;
      *(_QWORD*)(v13 + 128) = GameData_1fcbba0;
      *(_QWORD*)(v13 + 160) = v13 + 128;
      v14 = v29_.v31;
      *(_QWORD*)(v13 + 136) = v29_.v30;
      *(_QWORD*)(v13 + 144) = v14;
      v16 = *(__int64**)(a2 + 8);
      v15 = *(_QWORD*)(a2 + 16);
      if ((unsigned __int64)v16 >= v15) {
        v18 = *(_QWORD*)a2;
        v19 = (signed __int64)v16 - *(_QWORD*)a2;
        v20 = (v19 >> 3) + 1;
        if (v20 >> 61 != 0) {
          GameRoutine_b32f30_alt1();
        }
        v21 = v15 - v18;
        if (v21 >> 2 > v20) {
          v20 = v21 >> 2;
        }
        if ((unsigned __int64)v21 >= 0x7FFFFFFFFFFFFFF8LL) {
          v22 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v22 = v20;
        }
        if (v22 != 0) {
          if (v22 >> 61 != 0) {
            GameRoutine_60a210_alt1();
          }
          v23 = v13;
          v24 = fw_memory_HeapManager_Allocate_alt1(*v12, 8 * v22, 16, 0);
          v13 = v23;
        }
        else {
          v24 = 0;
        }
        v25 = v24 + 8 * v22;
        v26 = v24 + v19 - 8 * (v19 >> 3);
        *(_QWORD*)(v24 + v19) = v13;
        v17 = v24 + v19 + 8;
        memcpy_alt1(v26, v18, v19);
        *(_QWORD*)a2 = v26;
        *(_QWORD*)(a2 + 8) = v17;
        *(_QWORD*)(a2 + 16) = v25;
        if (v18 != 0) {
          v27 = 128;
          if (*(_QWORD*)(*v12 + 200) == 0) {
            v27 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v12 + v27, v18);
        }
      }
      else {
        *v16 = v13;
        v17 = (__int64)(v16 + 1);
      }
      *(_QWORD*)(a2 + 8) = v17;
      v28 = *(_QWORD***)(v17 - 8);
      v29_.v29 = (__int64 (**)(void))a2;
      v29_.v30 = v28;
      result = ((__int64 (*)(_QWORD**, __int64 (***)(void)))(*v28)[2])(
          v28, &v29_.v29);
      *v33 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a2 + ((v7 - v8) & 0x7FFFFFFF8LL)) +
                        112LL);
    }
  }
  return result;
}

__int64 TaskPassNodes_ba09c0(__int64 result, __int64 a2, _QWORD* a3,
                             __int64* a4)
{

#pragma clang fp contract(off)
  __int64 v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 v15;
  __int64 v16;
  _QWORD** v17;
  unsigned __int64 v18;
  __int64* v19;
  __int64 v20;
  __int64 v21;
  signed __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  int v36;
  __int64* v37;
  __int64 v38;
  _QWORD** v39;
  unsigned __int64 v40;
  __int64* v41;
  __int64 v42;
  __int64 v43;
  signed __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  unsigned __int64 v47;
  __int64 v48;
  __int64 v49;
  unsigned __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  _QWORD* v54;
  struct {
    __int64 (**v55)();
    __int64 v56;
    _QWORD** v57;
    char gap40_[8];
    __int64 (***v58)();
  } v55_;

  v4 = *a4;
  v54 = a3;
  v6 = result;
  v7 = *(_QWORD*)(v4 + 8);
  v8 = *(_QWORD*)(v7 + 320);
  v9 = 208;
  if (*(_BYTE*)(v8 + 176) != 0) {
    v9 = 172;
  }
  if (*(float*)(v8 + v9) > 0x0.0p+0f) {
    v10 = 128;
    if (*(_BYTE*)(v8 + 96) != 0) {
      v10 = 92;
    }
    if (*(int*)(v8 + v10) >= 2 &&
        (*(_BYTE*)(*(_QWORD*)(result + 8) + 320LL) & 1) == 0) {
      v12 = *(_QWORD*)a2;
      v11 = *(_QWORD*)(a2 + 8);
      v13 = *(_DWORD*)(a2 + 96);
      v15 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 224, 16, 0);
      *(_QWORD*)(v15 + 32) = 0;
      *(_QWORD*)(v15 + 40) = 0;
      *(_QWORD*)(v15 + 48) = 0;
      *(_QWORD*)(v15 + 56) = 0;
      *(_QWORD*)(v15 + 64) = 0;
      *(_QWORD*)(v15 + 72) = 0;
      *(_DWORD*)(v15 + 80) = v13;
      *(_QWORD*)(v15 + 104) = 0;
      *(_QWORD*)(v15 + 112) = 0;
      v55_.v57 = &v54;
      v55_.v55 = GameData_1fcbfd8;
      v55_.v56 = v6;
      v55_.v58 = &v55_.v55;
      *(_QWORD*)(v15 + 88) = 0;
      *(_QWORD*)(v15 + 96) = 0;
      *(_QWORD*)(v15 + 184) = v6;
      *(_BYTE*)(v15 + 8) = 28;
      strcpy((char*)(v15 + 9), "MotionBlurPass");
      *(_BYTE*)(v15 + 84) = 1;
      *(_QWORD*)(v15 + 128) = GameData_1fcbfd8;
      *(_QWORD*)v15 = GameData_1fcc0f8;
      *(_QWORD*)(v15 + 160) = v15 + 128;
      v16 = v55_.v56;
      v17 = v55_.v57;
      *(_QWORD*)(v15 + 176) = GameData_1fcc068;
      *(_QWORD*)(v15 + 208) = v15 + 176;
      *(_QWORD*)(v15 + 136) = v16;
      *(_QWORD*)(v15 + 144) = v17;
      v19 = *(__int64**)(a2 + 8);
      v18 = *(_QWORD*)(a2 + 16);
      if ((unsigned __int64)v19 >= v18) {
        v21 = *(_QWORD*)a2;
        v22 = (signed __int64)v19 - *(_QWORD*)a2;
        v23 = (v22 >> 3) + 1;
        if (v23 >> 61 != 0) {
          goto LABEL_46;
        }
        v24 = v18 - v21;
        if (v24 >> 2 > v23) {
          v23 = v24 >> 2;
        }
        if ((unsigned __int64)v24 >= 0x7FFFFFFFFFFFFFF8LL) {
          v25 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v25 = v23;
        }
        if (v25 != 0) {
          if (v25 >> 61 != 0) {
            goto LABEL_47;
          }
          v26 = v15;
          v27 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v25, 16, 0);
          v15 = v26;
        }
        else {
          v27 = 0;
        }
        v28 = v27 + 8 * v25;
        v29 = v27 + v22 - 8 * (v22 >> 3);
        *(_QWORD*)(v27 + v22) = v15;
        v20 = v27 + v22 + 8;
        memcpy_alt1(v29, v21, v22);
        *(_QWORD*)a2 = v29;
        *(_QWORD*)(a2 + 8) = v20;
        *(_QWORD*)(a2 + 16) = v28;
        if (v21 != 0) {
          v30 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v30 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v30, v21);
        }
      }
      else {
        *v19 = v15;
        v20 = (__int64)(v19 + 1);
      }
      *(_QWORD*)(a2 + 8) = v20;
      v31 = *(_QWORD*)(v20 - 8);
      v55_.v55 = (__int64 (**)(void))a2;
      v55_.v56 = v31;
      result = (*(__int64 (**)(__int64, __int64 (***)(void)))(
          *(_QWORD*)v31 + 16LL))(v31, &v55_.v55);
      *v54 =
          *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a2 + ((v11 - v12) & 0x7FFFFFFF8LL)) +
                     112LL);
      v7 = *(_QWORD*)(*a4 + 8);
    }
  }
  v32 = *(_QWORD*)(v7 + 288);
  v33 = 120;
  if (*(_BYTE*)(v32 + 90) != 0) {
    v33 = 89;
  }
  if ((*(_BYTE*)(v32 + v33) & 1) != 0) {
    v35 = *(_QWORD*)a2;
    v34 = *(_QWORD*)(a2 + 8);
    v36 = *(_DWORD*)(a2 + 96);
    v37 = (__int64*)fw_memory_g_heap_manager_ptr;
    v38 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 208, 16, 0);
    *(_QWORD*)(v38 + 32) = 0;
    *(_QWORD*)(v38 + 40) = 0;
    *(_QWORD*)(v38 + 48) = 0;
    *(_QWORD*)(v38 + 56) = 0;
    *(_QWORD*)(v38 + 64) = 0;
    *(_QWORD*)(v38 + 72) = 0;
    *(_DWORD*)(v38 + 80) = v36;
    *(_QWORD*)(v38 + 96) = 0;
    *(_QWORD*)(v38 + 104) = 0;
    v55_.v57 = &v54;
    v55_.v55 = GameData_1fcc140;
    v55_.v56 = v6;
    v55_.v58 = &v55_.v55;
    *(_QWORD*)(v38 + 88) = 0;
    *(_QWORD*)(v38 + 168) = v6;
    *(_BYTE*)(v38 + 8) = 24;
    *(_QWORD*)(v38 + 160) = GameData_1fcc1d0;
    *(_QWORD*)(v38 + 192) = v38 + 160;
    strcpy((char*)(v38 + 9), "TimeSlipPass");
    *(_BYTE*)(v38 + 84) = 1;
    *(_QWORD*)v38 = GameData_1fcc260;
    *(_QWORD*)(v38 + 112) = GameData_1fcc140;
    *(_QWORD*)(v38 + 144) = v38 + 112;
    v39 = v55_.v57;
    *(_QWORD*)(v38 + 120) = v55_.v56;
    *(_QWORD*)(v38 + 128) = v39;
    v41 = *(__int64**)(a2 + 8);
    v40 = *(_QWORD*)(a2 + 16);
    if ((unsigned __int64)v41 < v40) {
      *v41 = v38;
      v42 = (__int64)(v41 + 1);
    LABEL_44:
      *(_QWORD*)(a2 + 8) = v42;
      v53 = *(_QWORD*)(v42 - 8);
      v55_.v55 = (__int64 (**)(void))a2;
      v55_.v56 = v53;
      result = (*(__int64 (**)(__int64, __int64 (***)(void)))(
          *(_QWORD*)v53 + 16LL))(v53, &v55_.v55);
      *v54 =
          *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a2 + ((v34 - v35) & 0x7FFFFFFF8LL)) +
                     104LL);
      return result;
    }
    v43 = *(_QWORD*)a2;
    v44 = (signed __int64)v41 - *(_QWORD*)a2;
    v45 = (v44 >> 3) + 1;
    if (v45 >> 61 == 0) {
      v46 = v40 - v43;
      if (v46 >> 2 > v45) {
        v45 = v46 >> 2;
      }
      if ((unsigned __int64)v46 >= 0x7FFFFFFFFFFFFFF8LL) {
        v47 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v47 = v45;
      }
      if (v47 == 0) {
        v49 = 0;
      LABEL_40:
        v50 = v49 + 8 * v47;
        v51 = v49 + v44 - 8 * (v44 >> 3);
        *(_QWORD*)(v49 + v44) = v38;
        v42 = v49 + v44 + 8;
        memcpy_alt1(v51, v43, v44);
        *(_QWORD*)a2 = v51;
        *(_QWORD*)(a2 + 8) = v42;
        *(_QWORD*)(a2 + 16) = v50;
        if (v43 != 0) {
          v52 = 128;
          if (*(_QWORD*)(*v37 + 200) == 0) {
            v52 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v37 + v52, v43);
        }
        goto LABEL_44;
      }
      if (v47 >> 61 == 0) {
        v48 = v38;
        v49 = fw_memory_HeapManager_Allocate_alt1(*v37, 8 * v47, 16, 0);
        v38 = v48;
        goto LABEL_40;
      }
    LABEL_47:
      GameRoutine_60a210_alt1();
    }
  LABEL_46:
    GameRoutine_b32f30_alt1();
  }
  return result;
}

_QWORD* TaskPassNodes_ba3910(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  _QWORD* result;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  _QWORD v15[2];
  int v16;
  int v17;
  char v18;
  __int16 v19;
  __int64 v20;
  __int64 v21;

  v2 = *(_QWORD*)(a1 + 240);
  v19 = 0;
  v15[0] = a2;
  v15[1] = 0x100000001LL;
  v16 = 0;
  v18 = 1;
  v17 = 10;
  v4 = *(_QWORD*)(*(_QWORD*)v2 + 552LL);
  v20 = *(_QWORD*)(*(_QWORD*)v2 + 360LL);
  v21 = *(_QWORD*)(v4 + 16);
  GameRoutine_53c20_alt1((void*)((__int64*)&v14), (__int64)v15);
  v5 = (__int64)v14;
  result = *(_QWORD**)(v2 + 8);
  v14 = nullptr;
  *(_QWORD*)(v2 + 8) = v5;
  if (result != nullptr) {
    (*(void (**)(_QWORD*))(*result + 8LL))(result);
    result = v14;
    v14 = nullptr;
    if (result != nullptr) {
      result = (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + 8LL))(result);
    }
  }
  *(_BYTE*)(v2 + 344) = 1;
  v7 = *(__int64**)(a1 + 176);
  v8 = v7[35];
  if (v8 != 0) {
    v9 = *v7;
    v10 = (__int64*)fw_memory_g_heap_manager_ptr;
    v11 = *v7 + 16592;
    v12 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 24, 16, 0);
    *(_DWORD*)(v12 + 8) = 2;
    *(_QWORD*)v12 = GameData_1fc6bd0;
    v7[35] = 0;
    *(_QWORD*)(v12 + 16) = v8;
    result = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v10, 24, 16, 0);
    result[1] = v11;
    result[2] = v12;
    v13 = *(_QWORD*)(v9 + 16592);
    *result = v13;
    *(_QWORD*)(v13 + 8) = result;
    *(_QWORD*)(v9 + 16592) = result;
    ++*(_QWORD*)(v9 + 16608);
  }
  return result;
}

__int64 TaskPassNodes_ba3b30(__int64 a1, __int64* a2, __int64 a3)
{
  _QWORD* v3;
  __int64 v4;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64* v18;
  __int64 result;
  struct {
    _QWORD v20[12];
    int v21;
  } v20_;
  struct {
    __int64 v22[3];
    char v23;
    char gap137_[3];
    int v24;
  } v22_;

  v3 = *(_QWORD**)(a1 + 8);
  v4 = *a2;
  v20_.v21 = 16;
  v7 = (_QWORD*)*v3;
  v8 = v7[23];
  v9 = v7[21];
  v10 = v7[19];
  v11 = v7[20];
  v20_.v20[0] = v7[22];
  v20_.v20[1] = v8;
  v12 = v7[63];
  v20_.v20[2] = v10;
  v20_.v20[3] = v11;
  v13 = v7[65];
  v20_.v20[4] = v9;
  v20_.v20[5] = v12;
  v14 = v7[68];
  v20_.v20[6] = v13;
  v20_.v20[7] = v14;
  v15 = v7[81];
  v16 = v7[79];
  v17 = v7[80];
  v20_.v20[8] = v15;
  v20_.v20[9] = v16;
  v20_.v20[10] = v17;
  v20_.v20[11] = 0x100000000DLL;
  ResourceBuilder_b62570(v4, a3, (__int64)v20_.v20);
  v18 = (__int64*)a2[1];
  v22_.v24 = 0;
  v22_.v23 = 1;
  v22_.v22[0] = 0xD00000000LL;
  v22_.v22[1] = 0x1000000010LL;
  v22_.v22[2] = 0x100000001LL;
  result = GameRoutine_b62660_alt1(a3, "Exposure_SpotLighting", v22_.v22);
  *v18 = result;
  return result;
}

__int64 TaskPassNodes_ba3d00(__int64 a1, __int64 a2, _QWORD* a3)
{
  _QWORD* v3;
  __int64 v4;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _DWORD* v13;
  __int64 v14;
  float v15;
  float* v16;
  _DWORD* v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v23;
  float v24;
  float v25;
  float v26;
  float v28;
  float v29;
  float v30;
  float v31;
  __int64* v33;
  _QWORD* v34;
  _QWORD* v35;
  struct {
    _QWORD v37[2];
    int v38;
    float v39;
    __int64 v40;
    int v41;
    char gap36_[4];
    __int64 v42;
    int v43;
    char gap52_[4];
    __int64 v44;
  } v37_;

  v3 = *(_QWORD**)(a1 + 8);
  v4 = *(_QWORD*)(a2 + 24);
  v37_.v42 = 0;
  v37_.v44 = 0;
  v37_.v43 = -1;
  v6 = v3[1];
  if (*(_BYTE*)(*v3 + 16700LL) != 0) {
    v7 = (__int64*)(*(_QWORD*)(*v3 + 16672LL) + 24LL);
  }
  else {
    v7 = (__int64*)(*v3 + 13304LL);
  }
  v8 = *v7;
  v37_.v40 = *(_QWORD*)(v4 + 48);
  v37_.v41 = *(_DWORD*)(v4 + 56);
  v9 = *(_QWORD*)(v4 + 8);
  v37_.v37[0] = v9;
  v37_.v37[1] = v8;
  v10 = 24;
  if (*(_BYTE*)(v9 + 113) != 0) {
    v10 = 32;
  }
  v37_.v38 = *(_DWORD*)(*(_QWORD*)(v4 + v10) + 32LL);
  v11 = *(_QWORD*)(v6 + 288);
  if ((*(_BYTE*)(v11 + 832) & 1) == 0 ||
      (v12 = *(_QWORD*)(v11 + 808), v13 = *(_DWORD**)(v11 + 816),
       (_DWORD*)v12 == v13)) {
  LABEL_23:
    v16 = (float*)(v11 + 836);
  }
  else {
    v14 = *(_QWORD*)(v9 + 68);
    v15 = *(float*)(v9 + 76);
    v16 = (float*)(v12 + 88);
    while (1) {
      v18 = *(v16 - 6);
      v19 = *(v16 - 3);
      v20 = v18 - (float)(v19 * 0x1.0000000000000p-1f);
      v21 = v18 + (float)(v19 * 0x1.0000000000000p-1f);
      if (v20 <= *(float*)&v14 && *(float*)&v14 <= v21) {
        v23 = *(v16 - 5);
        v24 = *(v16 - 2);
        v25 = v23 - (float)(v24 * 0x1.0000000000000p-1f);
        v26 = v23 + (float)(v24 * 0x1.0000000000000p-1f);
        if (v25 <= *((float*)&v14 + 1) && *((float*)&v14 + 1) <= v26) {
          v28 = *(v16 - 4);
          v29 = *(v16 - 1);
          v30 = v28 - (float)(v29 * 0x1.0000000000000p-1f);
          v31 = v28 + (float)(v29 * 0x1.0000000000000p-1f);
          if (v30 <= v15 && v15 <= v31) {
            break;
          }
        }
      }
      v17 = v16 + 1;
      v16 += 23;
      if (v17 == v13) {
        goto LABEL_23;
      }
    }
  }
  v33 = (__int64*)v3[11];
  v35 = *(_QWORD**)(a2 + 8);
  v34 = *(_QWORD**)a2;
  v37_.v39 = *v16;
  TaskExposure_b63e60(v33, v34, v37_.v37);
  return ResourceBuilder_b64090((__int64)v33, (__int64)v34, v35, a3,
                                (__int64)v37_.v37);
}

__int64 TaskPassNodes_ba41c0(__int64 a1, _QWORD** a2, __int64 a3)
{
  __int64 v3;
  _QWORD* v5;
  _QWORD** v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64 result;

  v3 = *(_QWORD*)(a1 + 24);
  v5 = *a2;
  if (*(_BYTE*)(*(_QWORD*)(**(_QWORD**)(a1 + 8) + 8LL) + 112LL) != 0) {
    v7 = (_QWORD**)(a1 + 16);
  }
  else {
    v7 = *(_QWORD***)(a1 + 24);
  }
  v8 = *(_QWORD*)(*(_QWORD*)v3 + 40LL);
  v9 = *(_QWORD*)(*(_QWORD*)v3 + 8LL);
  v10 = *(_QWORD*)(*(_QWORD*)v3 + 624LL);
  v11 = *(_QWORD*)(*(_QWORD*)v3 + 128LL);
  *v5 = GameRoutine_b48f90(a3, **v7);
  if (v8 != 0) {
    v5[1] = GameRoutine_b48f90(a3, v8);
  }
  if (v9 != 0) {
    v5[2] = ResourceBuilder_b5a4b0(a3, v9);
  }
  v5[3] = GameRoutine_b4f100(a3, v10);
  v12 = a2[1];
  result = GameRoutine_b48e70(a3, v11);
  *v12 = result;
  return result;
}

__int64 TaskPassNodes_ba43a0(__int64 a1, __int64 a2, _QWORD* a3)
{

#pragma clang fp contract(off)
  __int64 v3;
  _QWORD* v4;
  __int64 v6;
  int v7;
  int v8;
  int* v9;
  __int64 v10;
  _QWORD* v11;
  _QWORD* v12;
  int v13;
  bool v14;
  int v15;
  __int64 v16;
  __int64 v17;
  int v18;
  struct {
    _QWORD v20[3];
    int v21;
  } v20_;

  v3 = *(_QWORD*)(a2 + 24);
  v4 = *(_QWORD**)(a1 + 8);
  v20_.v20[2] = 0;
  v20_.v21 = -1;
  v6 = *(_QWORD*)(v3 + 8);
  if ((*(_BYTE*)(v6 + 112) & 1) != 0) {
    v7 = 16;
    v8 = 16;
  }
  else {
    v9 = (int*)(*v4 + 13304LL);
    if (*(_BYTE*)(*v4 + 16700LL) != 0) {
      v9 = (int*)(*(_QWORD*)(*v4 + 16672LL) + 24LL);
    }
    v7 = *v9;
    v8 = v9[1];
  }
  v10 = v4[11];
  v11 = *(_QWORD**)a2;
  v12 = *(_QWORD**)(a2 + 8);
  v20_.v20[0] = __PAIR64__(v8, v7);
  v20_.v20[1] = v6;
  v13 = *(_DWORD*)(v10 + 384);
  v14 = v13 < -1;
  v15 = ((_BYTE)v13 + 1) & 1;
  if (v14) {
    v15 = -v15;
  }
  *(_DWORD*)(v10 + 384) = v15;
  v16 = *(_QWORD*)(v10 + 8LL * v15 + 368);
  v17 = (*(__int64 (**)(__int64))(*(_QWORD*)v16 + 56LL))(v16);
  *(_DWORD*)v17 = v7;
  *(_DWORD*)(v17 + 4) = v8;
  *(_QWORD*)(v17 + 8) = 0x41CB3333C16A4D3CLL;
  *(_DWORD*)(v17 + 16) = 1025589893;
  *(_DWORD*)(v17 + 20) = *(_DWORD*)(v6 + 80);
  *(_DWORD*)(v17 + 24) = *(_DWORD*)(v6 + 84);
  *(_DWORD*)(v17 + 32) = *(_DWORD*)(v6 + 92);
  *(_DWORD*)(v17 + 36) = *(_DWORD*)(v6 + 96);
  *(_DWORD*)(v17 + 40) = *(_DWORD*)(v6 + 104);
  *(_DWORD*)(v17 + 44) = *(_DWORD*)(v6 + 108);
  *(_DWORD*)(v17 + 48) = *(_DWORD*)(v6 + 8);
  *(_DWORD*)(v17 + 52) = *(_DWORD*)(v6 + 20);
  *(_DWORD*)(v17 + 56) = *(_DWORD*)(v6 + 32);
  *(_DWORD*)(v17 + 60) = *(_DWORD*)(v6 + 44);
  v18 = *(_DWORD*)(v6 + 56);
  *(_QWORD*)(v17 + 68) = 0x40D49A7840400000LL;
  *(_DWORD*)(v17 + 64) = v18;
  *(float*)(v17 + 28) =
      (float)(*(float*)(v6 + 20) + *(float*)(v6 + 56)) + -0x1.8000000000000p+1f;
  (*(void (**)(__int64))(*(_QWORD*)v16 + 64LL))(v16);
  return ResourceBuilder_b642d0(v10, v11, v12, a3, (__int64)v20_.v20);
}

__int64 TaskPassNodes_ba4880(_QWORD** a1, __int64** a2, __int64 a3)
{
  __int64* v4;
  __int64 v6;
  __int64* v7;
  int v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  _QWORD v16[3];
  int v17;
  __int64 v18;
  char v19;

  v4 = *a2;
  v6 = *a1[1];
  v7 = (__int64*)*a1[2];
  v8 = *(unsigned __int8*)(v6 + 16700);
  v9 = *(_QWORD*)(v6 + 16672);
  v10 = (__int64*)(v6 + 13304);
  v11 = *v7;
  v12 = v7[16];
  v13 = v7[7];
  v17 = 20;
  v14 = (__int64*)(v9 + 24);
  v16[0] = v11;
  v16[1] = v12;
  v16[2] = v13;
  if (v8 != 0) {
    v10 = v14;
  }
  v18 = *v10;
  v19 = *(_BYTE*)(*(_QWORD*)(*a1[3] + 8LL) + 120LL);
  *v4 = GameRoutine_b48f90_alt1(a3, v11);
  v4[1] = GameRoutine_b48f90_alt1(a3, v12);
  v4[2] = GameRoutine_b48f90_alt1(a3, v13);
  return ResourceBuilder_b627b0(a2[1], a3, (__int64)v16);
}

__int64 TaskPassNodes_ba4a70(__int64 a1, __int64 a2, _QWORD* a3)
{
  _QWORD* v3;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  _QWORD* v8;
  _QWORD* v9;
  _QWORD v11[2];

  v3 = *(_QWORD**)(a1 + 8);
  v5 = *(_QWORD*)(*(_QWORD*)(a2 + 24) + 8LL);
  v6 = v3[11];
  v7 = *(_QWORD**)(a2 + 8);
  v8 = (_QWORD*)(*v3 + 13304LL);
  v9 = *(_QWORD**)a2;
  if (*(_BYTE*)(*v3 + 16700LL) != 0) {
    v8 = (_QWORD*)(*(_QWORD*)(*v3 + 16672LL) + 24LL);
  }
  v11[0] = *v8;
  v11[1] = v5;
  return GameRoutine_b64600(v6, v9, v7, a3, (unsigned int*)v11);
}

__int64 TaskPassNodes_ba4e10(__int64 a1, __int64** a2, __int64 a3)
{
  __int64* v4;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64* v15;
  __int64* v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64* v19;
  __int64 result;
  struct {
    __int64 v21;
    int v22;
    int v23;
    __int64 v24;
    char v25;
    char gap25_[3];
    int v26;
  } v21_;

  v4 = *a2;
  v6 = **(__int64***)(a1 + 8);
  v7 = **(_QWORD**)(a1 + 16);
  v8 = v6[6];
  v9 = *v6;
  v10 = v6[1];
  v11 = v6[63];
  v12 = v6[65];
  v13 = *(_QWORD*)(v7 + 16672);
  LODWORD(v6) = *(unsigned __int8*)(v7 + 16700);
  v14 = (__int64*)(v7 + 13304);
  v15 = (__int64*)(v13 + 24);
  if ((_DWORD)v6 != 0) {
    v16 = v15;
  }
  else {
    v16 = v14;
  }
  v17 = *v16;
  v18 = HIDWORD(*v16);
  *v4 = GameRoutine_b48f90_alt1(a3, v9);
  v4[1] = GameRoutine_b48f90_alt1(a3, v8);
  v4[2] = ResourceBuilder_b5a4b0(a3, v10);
  v4[3] = GameRoutine_b4a3f0_alt1(a3, v11);
  v4[4] = GameRoutine_b4a3f0_alt1(a3, v12);
  v21_.v26 = 0;
  v21_.v22 = v17;
  v21_.v23 = v18;
  v19 = a2[1];
  v21_.v21 = 0xD00000000LL;
  v21_.v24 = 0x100000001LL;
  v21_.v25 = 1;
  result = GameRoutine_b509c0_alt2(a3, "FogColor", &v21_.v21);
  *v19 = result;
  return result;
}

__int64 TaskPassNodes_ba5030(__int64 a1, __int64 a2, _QWORD* a3)
{

#pragma clang fp contract(off)
  __int64 v3;
  __int64* v4;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  long double v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  _DWORD* v20;
  int v21;
  __int64 v22;
  __int64* v23;
  __int64* v24;
  __int64 v25;
  _QWORD* v26;
  _QWORD* v27;
  struct {
    _QWORD v29[4];
    __int64 v30;
    int v31;
    char gap44_[4];
    __int64 v32;
    int v33;
    char gap60_[4];
    __int64 v34;
    int v35;
    char gap76_[4];
    __int64 v36;
    int v37;
  } v29_;

  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v3 = *(_QWORD*)(a2 + 24);
  v4 = *(__int64**)(a1 + 8);
  v7 = v4[3];
  v8 = *(_QWORD*)(*(_QWORD*)v3 + 8LL);
  v9 = *(_QWORD*)(v8 + 104);
  v10 = *(_QWORD*)(v8 + 8);
  v29_.v29[0] = v9;
  v29_.v29[1] = v10;
  v11 = ((long double (*)(__int64)) * (_QWORD*)(*(_QWORD*)v7 + 40LL))(v7),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v12 = v4[1];
  *(long double*)&v29_.v29[2] = v11;
  v13 = *(_QWORD*)(v12 + 288);
  v14 = *(_QWORD*)(v13 + 560);
  v29_.v31 = *(_DWORD*)(v13 + 568);
  v15 = *(_QWORD*)(v3 + 48);
  v29_.v30 = v14;
  v29_.v32 = v15;
  v29_.v33 = *(_DWORD*)(v3 + 56);
  v16 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v3 + 16) + 32LL) + 24LL);
  v17 = (*(__int64 (**)(__int64))(*(_QWORD*)v16 + 40LL))(v16),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v19 = *v4;
  v20 = (_DWORD*)v4[25];
  v29_.v34 = v17;
  v21 = *(unsigned __int8*)(v19 + 16700);
  v22 = *(_QWORD*)(v19 + 16672);
  v23 = (__int64*)(v19 + 13304);
  v29_.v35 = v18;
  v24 = (__int64*)(v22 + 24);
  if (v21 != 0) {
    v23 = v24;
  }
  v29_.v36 = *v23;
  v25 = *(_QWORD*)(v3 + 8);
  v27 = *(_QWORD**)a2;
  v26 = *(_QWORD**)(a2 + 8);
  v29_.v37 = *(_DWORD*)(v25 + 4);
  TaskFog_b65790(v20, v18, (float*)v29_.v29),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  return TaskFog_b65db0((__int64)v20, v27, v26, a3, (unsigned int*)v29_.v29);
}

__int64 TaskPassNodes_ba5aa0(__int64 a1, __int64* a2, _QWORD* a3)
{
  _QWORD* v3;
  __int64 v4;
  _QWORD* v5;
  _QWORD* v6;
  __int64 v8;
  __int64 v9;
  _DWORD* v10;
  __int64* v11;
  __int64 v12;
  _QWORD v14[2];

  v3 = *(_QWORD**)(a1 + 8);
  v4 = a2[3];
  v5 = (_QWORD*)*a2;
  v6 = (_QWORD*)a2[1];
  v8 = *a2;
  v9 = *(_QWORD*)(v4 + 8);
  v10 = (_DWORD*)v3[24];
  v11 = (__int64*)(*v3 + 13304LL);
  if (*(_BYTE*)(*v3 + 16700LL) != 0) {
    v11 = (__int64*)(*(_QWORD*)(*v3 + 16672LL) + 24LL);
  }
  v12 = *v11;
  v14[0] = v9;
  v14[1] = v12;
  GameRoutine_b69b80(v10, v8, (__int64)v14);
  return GameRoutine_b69dc0((__int64)v10, v5, v6, a3, (__int64)v14);
}

__int64 TaskPassNodes_ba5e70(__int64 a1, __int64* a2, __int64 a3)
{
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  int v12;
  __int64* v13;
  __int64 result;

  v5 = **(__int64***)(a1 + 8);
  v6 = v5[63];
  v7 = v5[65];
  v8 = *v5;
  v9 = v5[1];
  v10 = GameRoutine_ad6000((__int64)"MeshFog", 7u, a3);
  v11 = *a2;
  v12 = v10;
  *(_QWORD*)v11 = GameRoutine_b4a3f0(a3, v6);
  *(_QWORD*)(v11 + 8) = GameRoutine_b4a3f0(a3, v7);
  *(_QWORD*)(v11 + 16) = GameRoutine_b48f90(a3, v8);
  *(_QWORD*)(v11 + 24) = ResourceBuilder_b5a4b0(a3, v9);
  *(_DWORD*)(v11 + 32) = v12;
  v13 = (__int64*)a2[1];
  result = GameRoutine_b48e70(a3, v8);
  *v13 = result;
  return result;
}

__int64 TaskPassNodes_ba6030(__int64 a1, __int64 a2, _QWORD* a3)
{
  _QWORD* v3;
  __int64 v4;
  _DWORD* v6;
  _QWORD* v7;
  __int64 v8;
  _QWORD* v9;
  _QWORD* v10;
  struct {
    _QWORD v12[4];
    int v13;
  } v12_;

  v3 = *(_QWORD**)(a1 + 8);
  v12_.v13 = 0;
  v4 = *(_QWORD*)(a2 + 24);
  v6 = (_DWORD*)v3[26];
  v12_.v12[0] = v3[3];
  v7 = (_QWORD*)(*v3 + 13304LL);
  v8 = v3[5];
  v9 = *(_QWORD**)(a2 + 8);
  if (*(_BYTE*)(*v3 + 16700LL) != 0) {
    v7 = (_QWORD*)(*(_QWORD*)(*v3 + 16672LL) + 24LL);
  }
  v10 = *(_QWORD**)a2;
  v12_.v12[2] = *v7;
  v12_.v12[3] = v8;
  v12_.v12[1] = *(_QWORD*)(v4 + 8);
  return gfxa_TaskMeshFog_Impl_Execute(v6, v10, v9, a3, (int*)v12_.v12);
}

void TaskPassNodes_ba63f0(__int64 a1, __int64** a2, _QWORD* a3)
{
  __int64** v3;
  __int64* v5;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64* v10;
  __int64* v11;
  __int64* v12;
  _QWORD** v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  __int64 v20;
  int v21;
  __int64 v22;
  __int64 v23;
  struct {
    __int64 v24;
    char v25;
    char v26;
    char gap10_[6];
    __int64 v27;
    __int64 v28;
    __int64 v29;
    __int64 v30;
    __int64 v31;
    int v32;
  } v24_;

  v3 = *(__int64***)(a1 + 16);
  v5 = *a2;
  v7 = **(_QWORD**)(a1 + 8);
  v8 = *(unsigned __int8*)(v7 + 16700);
  v9 = *(_QWORD*)(v7 + 16672);
  v10 = (__int64*)(v7 + 13304);
  v11 = (__int64*)(v9 + 24);
  if (v8 != 0) {
    v10 = v11;
  }
  v24_.v24 = *v10;
  v12 = *v3;
  v13 = *(_QWORD***)(a1 + 24);
  v14 = *v12;
  v15 = v12[4];
  v16 = v12[63];
  v17 = v12[16];
  v18 = v12[54];
  v24_.v29 = v15;
  v24_.v30 = v16;
  v24_.v27 = v14;
  v24_.v28 = v17;
  v19 = *v13;
  v20 = v19[1];
  v24_.v31 = v18;
  v24_.v32 = 13;
  v21 = *(unsigned __int8*)(v20 + 120);
  v24_.v25 = *(_BYTE*)(v20 + 120);
  v22 = *(_QWORD*)(*(_QWORD*)(*v19 + 8LL) + 296LL);
  v23 = 760;
  if (*(_BYTE*)(v22 + 730) != 0) {
    v23 = 729;
  }
  v24_.v26 = *(_BYTE*)(v22 + v23);
  *v5 = GameRoutine_b48f90_alt1((__int64)a3, v14);
  v5[1] = ResourceBuilder_b5a4b0((__int64)a3, v15);
  v5[2] = GameRoutine_b4a3f0_alt1((__int64)a3, v16);
  v5[3] = GameRoutine_b48f90_alt1((__int64)a3, v17);
  if (v21 == 1) {
    v5[4] = GameRoutine_b48f90_alt1((__int64)a3, v18);
  }
  GameRoutine_b743b0_alt1(a2[1], a3, (int*)&v24_.v24);
}

void TaskPassNodes_ba6640(__int64 a1, __int64 a2, __int64* a3)
{

#pragma clang fp contract(off)
  __int64* v3;
  __int64* v4;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  _BYTE* v17;
  _QWORD* v18;
  bool v19;
  _QWORD* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  float v24;
  __int64 v25;
  float v26;
  __int64 v27;
  float v28;
  int v29;
  __int64 v30;
  int v31;
  __int64 v32;
  int v33;
  __int64 v34;
  int v35;
  __int64 v36;
  int v37;
  __int64 v38;
  int v39;
  __int64 v40;
  _DWORD* v41;
  _QWORD* v42;
  _QWORD* v43;
  struct {
    _QWORD v44[4];
    float v45;
    int v46;
    int v47;
    int v48;
    int v49;
    int v50;
    __int64 v51;
    __int64 v52;
    __int64 v53;
    int v54;
  } v44_;

  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v27 = COERCE_AS(__typeof__(v27),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v3 = *(__int64**)(a2 + 24);
  v4 = *(__int64**)(a1 + 8);
  v7 = *(_QWORD*)(*(_QWORD*)(v3[2] + 16) + 24LL);
  v8 = (*(__int64 (**)(__int64))(*(_QWORD*)v7 + 40LL))(v7),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v27 = COERCE_AS(__typeof__(v27),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v9 = *v3;
  v10 = v4[3];
  v11 = *v4;
  v12 = v4[1];
  v44_.v54 = v13;
  v14 = *(_QWORD**)(v9 + 8);
  v15 = v14[37];
  v18 = v14;
  v16 = *v14;
  v17 = (_BYTE*)v18[1];
  v44_.v44[0] = v15;
  v44_.v44[1] = v10;
  v19 = *(_BYTE*)(v11 + 16700) == 0;
  v20 = (_QWORD*)(v11 + 13304);
  v21 = *(_QWORD*)(v11 + 16672) + 24LL;
  if (!v19) {
    v20 = (_QWORD*)v21;
  }
  v22 = *(_QWORD*)(v4[7] + 1220);
  v44_.v44[2] = *v20;
  v44_.v44[3] = v22;
  v44_.v52 = v4[5];
  v44_.v53 = v8;
  v23 = 208;
  if (*(_BYTE*)(v16 + 176) != 0) {
    v23 = 172;
  }
  v24 = *(float*)(v16 + v23);
  v25 = 872;
  if (v17[840] != 0) {
    v25 = 836;
  }
  v26 = (float)(*(float*)(*(_QWORD*)(v12 + 288) + 376LL) /
                0x1.9000000000000p+6f) *
        v24;
  v28 = exp2f_alt1(*(float*)&v17[v25]),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v27 = COERCE_AS(__typeof__(v27),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v29 = (unsigned __int8)v17[920];
  v44_.v45 = v26 * v28;
  v19 = v29 == 0;
  v30 = 952;
  if (!v19) {
    v30 = 916;
  }
  v31 = *(_DWORD*)&v17[v30];
  v19 = v17[1160] == 0;
  v32 = 1192;
  v44_.v46 = v31;
  if (!v19) {
    v32 = 1156;
  }
  v33 = *(_DWORD*)&v17[v32];
  v34 = 1272;
  if (v17[1240] != 0) {
    v34 = 1236;
  }
  v35 = *(_DWORD*)&v17[v34];
  v36 = 1352;
  if (v17[1320] != 0) {
    v36 = 1316;
  }
  v37 = *(_DWORD*)&v17[v36];
  v38 = 1432;
  if (v17[1400] != 0) {
    v38 = 1396;
  }
  v39 = *(_DWORD*)&v17[v38];
  v40 = v3[1];
  v44_.v47 = v33;
  v44_.v48 = v35;
  v44_.v51 = v40;
  v44_.v49 = v37;
  v44_.v50 = v39;
  if (v15 != 0 && v40 != 0) {
    v41 = (_DWORD*)v4[21];
    v43 = *(_QWORD**)a2;
    v42 = *(_QWORD**)(a2 + 8);
    TaskSkyBlur_b75c60(v41, v27, (__int64)v44_.v44),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v42[2] != 0) {
      gfxa_TaskSkyBlur_Impl_drawMask((__int64)v41, (__int64)v43, (__int64)v42,
                                     a3, (__int64)v44_.v44),
          v13 = COERCE_AS(__typeof__(v13),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v27 = COERCE_AS(__typeof__(v27),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    TaskSkyBlur_b764b0((__int64)v41, v43, v42, a3, (__int64)v44_.v44),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
}

__int64 TaskPassNodes_ba7440(__int64 a1, __int64* a2, _QWORD* a3)
{
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  bool v11;
  __int64 v12;
  char v13;
  _QWORD v15[2];

  v3 = *(_QWORD**)(a1 + 8);
  v4 = *a2;
  v5 = a2[1];
  v7 = *a2;
  v8 = v3[18];
  v9 = (_QWORD*)(*v3 + 13304LL);
  v10 = *(_QWORD*)(*v3 + 16672LL) + 24LL;
  v11 = *(_BYTE*)(*v3 + 16700LL) == 0;
  v12 = v3[5];
  v13 = *(_BYTE*)(v8 + 561);
  if (!v11) {
    v9 = (_QWORD*)v10;
  }
  v15[0] = *v9;
  v15[1] = v12;
  *(_BYTE*)(v8 + 560) = v13 & (*(_BYTE*)(v4 + 1144) ^ 1);
  *(_BYTE*)(v8 + 561) = *(_BYTE*)(v4 + 1144);
  GameRoutine_b73380(v8, v7);
  return GameRoutine_b73720(v8, (_QWORD*)v4, v5, a3, (unsigned int*)v15);
}

__int64 TaskPassNodes_ba7820(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD* v4;
  __int64 v6;
  int v7;
  __int64 v8;
  unsigned __int64* v9;
  unsigned __int64* v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  _QWORD* v13;
  __int64 result;
  __int64 v15;
  int v16;
  int v17;
  __int64 v18;
  char v19;
  int v20;

  v6 = **(_QWORD**)(a1 + 8);
  v7 = *(unsigned __int8*)(v6 + 16700);
  v8 = *(_QWORD*)(v6 + 16672);
  v9 = (unsigned __int64*)(v6 + 13304);
  v10 = (unsigned __int64*)(v8 + 24);
  if (v7 != 0) {
    v9 = v10;
  }
  v11 = *v9;
  v12 = HIDWORD(*v9);
  v4 = *(_QWORD**)a2;
  *v4 = GameRoutine_b48f90(a3, ***(_QWORD***)(a1 + 16));
  v20 = 0;
  v16 = v11;
  v17 = v12;
  v13 = *(_QWORD**)(a2 + 8);
  v15 = 0x1400000000LL;
  v18 = 0x100000001LL;
  v19 = 1;
  v13[2] = GameRoutine_b509c0(a3, "DstColor", &v15);
  LODWORD(v4) = (int)v11 / 2;
  LODWORD(v11) = (int)(v12 + (v11 >> 63)) >> 1;
  v16 = (int)v4;
  v17 = v11;
  *v13 = GameRoutine_b50b10(a3, "TempHalfDownscale", &v15);
  v16 = (int)v4;
  v17 = v11;
  result = GameRoutine_b50c60(a3, "TempHalfBlur", &v15);
  v13[1] = result;
  return result;
}

__int64 TaskPassNodes_ba7a30(__int64 a1, __int64 a2, _QWORD* a3)
{
  _QWORD* v3;
  _QWORD* v4;
  _DWORD* v6;
  __int64 v7;
  int v8;
  bool v9;
  int v10;
  __int64 v11;
  __int64 v12;
  int* v13;
  float v14;
  __int64 v15;
  __int64 v16;
  int v17;

  v3 = *(_QWORD**)a2;
  v4 = *(_QWORD**)(a2 + 8);
  v6 = *(_DWORD**)(*(_QWORD*)(a1 + 8) + 112LL);
  v7 = *(_QWORD*)(*(_QWORD*)(**(_QWORD**)(a2 + 24) + 8LL) + 136LL);
  v8 = v6[54];
  v9 = v8 < -1;
  v10 = ((_BYTE)v8 + 1) & 1;
  if (v9) {
    v10 = -v10;
  }
  v6[54] = v10;
  v11 = *(_QWORD*)&v6[2 * v10 + 50];
  v12 = (*(__int64 (**)(__int64))(*(_QWORD*)v11 + 56LL))(v11);
  v13 = (int*)(*(_QWORD*)v6 + 13304LL);
  if (*(_BYTE*)(*(_QWORD*)v6 + 16700LL) != 0) {
    v13 = (int*)(*(_QWORD*)(*(_QWORD*)v6 + 16672LL) + 24LL);
  }
  v14 = 1.0 / (float)((float)v13[1] * 0.5);
  *(float*)v12 = 1.0 / (float)((float)*v13 * 0.5);
  *(float*)(v12 + 4) = v14;
  if (v7 != 0) {
    v15 = 128;
    if (*(_BYTE*)(v7 + 96) != 0) {
      v15 = 92;
    }
    *(_DWORD*)(v12 + 8) = *(_DWORD*)(v7 + v15);
    v16 = 208;
    if (*(_BYTE*)(v7 + 176) != 0) {
      v16 = 172;
    }
    v17 = *(_DWORD*)(v7 + v16);
  }
  else {
    v17 = 0;
    *(_DWORD*)(v12 + 8) = 1112014848;
  }
  *(_DWORD*)(v12 + 20) = v17;
  (*(void (**)(__int64))(*(_QWORD*)v11 + 64LL))(v11);
  return GameRoutine_b59e10((__int64)v6, v3, v4, a3);
}

__int64 TaskPassNodes_ba7ea0(__int64 a1, __int64** a2, __int64* a3)
{
  __int64** v3;
  __int64* v5;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64* v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64* v16;
  __int64 result;
  struct {
    __int64 v18;
    int v19;
    int v20;
    __int64 v21;
    char v22;
    char gap25_[3];
    int v23;
  } v18_;

  v3 = *(__int64***)(a1 + 16);
  v5 = *a2;
  v7 = **(_QWORD**)(a1 + 8);
  v8 = *(unsigned __int8*)(v7 + 16700);
  v9 = *(_QWORD*)(v7 + 16672);
  v10 = (__int64*)(v7 + 13304);
  v11 = (__int64*)(v9 + 24);
  if (v8 != 0) {
    v10 = v11;
  }
  v12 = *v10;
  v13 = (*v3)[1];
  v14 = (*v3)[9];
  v15 = HIDWORD(*v10);
  *v5 = GameRoutine_b48f90_alt1((__int64)a3, **v3);
  v5[1] = GameRoutine_b48f90_alt1((__int64)a3, v14);
  v5[2] = ResourceBuilder_b5a4b0((__int64)a3, v13);
  v18_.v23 = 0;
  v18_.v19 = v12;
  v18_.v20 = v15;
  v16 = a2[1];
  v18_.v18 = 0x1400000000LL;
  v18_.v21 = 0x100000001LL;
  v18_.v22 = 1;
  result = GameRoutine_b53d40_alt1(a3, "MotionBlurDst", (__int64)&v18_.v18);
  *v16 = result;
  return result;
}

__int64 TaskPassNodes_ba85a0(__int64 a1, __int64** a2, __int64 a3)
{
  __int64** v3;
  __int64* v5;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64* v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64* v15;
  __int64 result;
  struct {
    __int64 v17;
    int v18;
    int v19;
    __int64 v20;
    char v21;
    char gap25_[3];
    int v22;
  } v17_;

  v3 = *(__int64***)(a1 + 16);
  v5 = *a2;
  v7 = **(_QWORD**)(a1 + 8);
  v8 = *(unsigned __int8*)(v7 + 16700);
  v9 = *(_QWORD*)(v7 + 16672);
  v10 = (__int64*)(v7 + 13304);
  v11 = (__int64*)(v9 + 24);
  if (v8 != 0) {
    v10 = v11;
  }
  v12 = *v10;
  v13 = (*v3)[7];
  v14 = HIDWORD(*v10);
  *v5 = GameRoutine_b48f90_alt1(a3, **v3);
  v5[1] = GameRoutine_b48f90_alt1(a3, v13);
  v17_.v22 = 0;
  v17_.v18 = v12;
  v17_.v19 = v14;
  v15 = a2[1];
  v17_.v17 = 0x1400000000LL;
  v17_.v20 = 0x100000001LL;
  v17_.v21 = 1;
  result = GameRoutine_b4ba10_alt1(a3, "TimeSlipDst", &v17_.v17);
  *v15 = result;
  return result;
}

__int64 TaskPassNodes_ba8770(__int64 a1, __int64 a2, _QWORD* a3)
{
  _QWORD* v3;
  __int64 v4;
  _DWORD* v6;
  _QWORD* v7;
  _QWORD* v8;
  _QWORD* v9;
  _QWORD v11[2];

  v3 = *(_QWORD**)(a1 + 8);
  v4 = *(_QWORD*)(a2 + 24);
  v6 = (_DWORD*)v3[29];
  v7 = *(_QWORD**)(a2 + 8);
  v8 = (_QWORD*)(*v3 + 13304LL);
  v9 = *(_QWORD**)a2;
  if (*(_BYTE*)(*v3 + 16700LL) != 0) {
    v8 = (_QWORD*)(*(_QWORD*)(*v3 + 16672LL) + 24LL);
  }
  v11[0] = *v8;
  v11[1] = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v4 + 8LL) + 288LL);
  return GameRoutine_b7e1f0(v6, v9, v7, a3, (unsigned int*)v11);
}

__int64 TaskPassNodes_ba91a0(__int64 a1, __int64** a2, __int64 a3)
{
  __int64* v3;
  __int64 result;

  *a2[1] = ***(_QWORD***)(a1 + 8);
  v3 = *a2;
  result = GameRoutine_b48f90(a3, *(_QWORD*)(**(_QWORD**)(a1 + 8) + 96LL));
  *v3 = result;
  return result;
}

__int64 TaskPassNodes_ba92f0(__int64 a1, __int64 a2, __int64* a3)
{

#pragma clang fp contract(off)
  _QWORD* v3;
  __int64 v6;
  __int64* v7;
  float v8;
  __int64 v9;
  float v10;
  __int64 v11;
  _QWORD* v12;
  _QWORD* v13;
  struct {
    __int64 v15;
    float v16;
    float v17;
  } v15_;

  v3 = *(_QWORD**)(a1 + 8);
  v6 = v3[3];
  v7 = (__int64*)(*v3 + 13304LL);
  if (*(_BYTE*)(*v3 + 16700LL) != 0) {
    v7 = (__int64*)(*(_QWORD*)(*v3 + 16672LL) + 24LL);
  }
  v15_.v15 = *v7;
  v8 = (*(float (**)(__int64))(*(_QWORD*)v6 + 56LL))(v6);
  v9 = v3[3];
  v15_.v16 = v8;
  v10 = (*(float (**)(__int64))(*(_QWORD*)v9 + 64LL))(v9);
  v11 = v3[31];
  v12 = *(_QWORD**)a2;
  v13 = *(_QWORD**)(a2 + 8);
  v15_.v17 = v10;
  return TaskEffect_b5c580(v11, v12, v13, a3, (float*)&v15_.v15);
}

__int64 TaskPassNodes_ba9880(__int64 a1, __int64 a2, _QWORD* a3)
{

#pragma clang fp contract(off)
  _QWORD* v3;
  _QWORD* v4;
  _QWORD* v5;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64* v10;
  int v11;
  _BYTE* v12;
  __int64* v13;
  __int64 v14;
  int v15;
  bool v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  int v21;
  __int64 v22;
  int v23;
  __int64 v24;
  bool v25;
  int v26;
  int v27;
  __int64 v28;
  __int64 v29;
  struct {
    _QWORD v31[2];
    int v32;
    int v33;
  } v31_;

  v3 = *(_QWORD**)(a1 + 8);
  v4 = *(_QWORD**)a2;
  v5 = *(_QWORD**)(a2 + 8);
  v7 = v3[16];
  v8 = *(unsigned __int8*)(*v3 + 16700LL);
  v9 = *(_QWORD*)(*v3 + 16672LL);
  v10 = (__int64*)(*v3 + 13304LL);
  v11 = *(_DWORD*)(v7 + 40);
  v12 = *(_BYTE**)(*(_QWORD*)(**(_QWORD**)(a2 + 24) + 8LL) + 168LL);
  v13 = (__int64*)(v9 + 24);
  if (v8 != 0) {
    v10 = v13;
  }
  v14 = *v10;
  v15 = (unsigned __int8)v12[256];
  v31_.v31[0] = v14;
  v16 = v15 == 0;
  v17 = 288;
  if (!v16) {
    v17 = 252;
  }
  v18 = *(unsigned int*)&v12[v17];
  v19 = 368;
  if (v12[336] != 0) {
    v19 = 332;
  }
  v20 = v18 | ((unsigned __int64)*(unsigned int*)&v12[v19] << 32);
  v21 = (unsigned __int8)v12[176];
  v31_.v31[1] = v20;
  v16 = v21 == 0;
  v22 = 208;
  if (!v16) {
    v22 = 172;
  }
  v23 = *(_DWORD*)&v12[v22];
  v16 = v12[96] == 0;
  v24 = 128;
  v31_.v32 = v23;
  if (!v16) {
    v24 = 92;
  }
  v25 = v11 < -1;
  v26 = ((_BYTE)v11 + 1) & 1;
  v27 = *(_DWORD*)&v12[v24];
  if (v25) {
    v26 = -v26;
  }
  *(_DWORD*)(v7 + 40) = v26;
  v28 = *(_QWORD*)(v7 + 8LL * v26 + 24);
  v31_.v33 = v27;
  v29 = (*(__int64 (**)(__int64))(*(_QWORD*)v28 + 56LL))(v28);
  *(_QWORD*)v29 = v20;
  *(_DWORD*)(v29 + 8) = v23;
  *(_DWORD*)(v29 + 12) = v27;
  *(float*)(v29 + 16) = (float)(int)v14;
  *(float*)(v29 + 20) = (float)SHIDWORD(v14);
  *(float*)(v29 + 24) = 0x1.0000000000000p+0f / (float)(int)v14;
  *(float*)(v29 + 28) = 0x1.0000000000000p+0f / (float)SHIDWORD(v14);
  (*(void (**)(__int64))(*(_QWORD*)v28 + 64LL))(v28);
  return TaskRadialBlur_b71980(v7, v4, v5, a3, (unsigned int*)v31_.v31);
}

__int64 TaskPassNodes_ba9d50(__int64 a1, __int64** a2, __int64 a3)
{
  __int64* v3;
  __int64 v6;
  __int64* v7;
  int v8;
  __int64 v9;
  __int64* v10;
  __int64* v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64* v14;
  __int64 result;
  struct {
    __int64 v16;
    int v17;
    int v18;
    __int64 v19;
    char v20;
    char gap25_[3];
    int v21;
  } v16_;

  v3 = *(__int64**)(a1 + 16);
  if (*(_BYTE*)(**(_QWORD**)(a1 + 8) + 125LL) == 1) {
    *(_BYTE*)(*v3 + 16700) = 1;
  }
  v6 = *v3;
  v8 = *(unsigned __int8*)(v6 + 16700);
  v9 = *(_QWORD*)(v6 + 16672);
  v10 = (__int64*)(v6 + 13304);
  v11 = (__int64*)(v9 + 24);
  if (v8 != 0) {
    v10 = v11;
  }
  v12 = *v10;
  v13 = HIDWORD(*v10);
  v7 = *a2;
  *v7 = GameRoutine_b48f90_alt1(a3, ***(_QWORD***)(a1 + 24));
  v16_.v21 = 0;
  v16_.v17 = v12;
  v16_.v18 = v13;
  v14 = a2[1];
  v16_.v16 = 0x1400000000LL;
  v16_.v19 = 0x100000001LL;
  v16_.v20 = 1;
  *v14 = GameRoutine_b67250_alt1(a3, "GaussianBlurTemp", &v16_.v16);
  HIDWORD(v16_.v16) = 20;
  result = GameRoutine_b54ca0_alt2(a3, "GaussianBlurDst", &v16_.v16);
  v14[1] = result;
  return result;
}

__int64 TaskPassNodes_ba9f60(__int64 a1, __int64 a2, __int64* a3)
{

#pragma clang fp contract(off)
  _BYTE* v3;
  _QWORD* v4;
  __int64* v6;
  __int64 v7;
  unsigned __int8* v8;
  char v9;
  int v10;
  __int64 v11;
  bool v12;
  __int64 v13;
  int v14;
  __int64* v15;
  _QWORD* v16;
  __int64 v17;
  unsigned __int8* v18;
  float v19;
  unsigned __int8* v20;
  int v21;
  unsigned __int8* v22;
  bool v23;
  unsigned __int8 v24;
  int v25;
  __int64 v26;
  __int64 v27;
  float v28;
  int v29;
  int v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v35;
  int v36;
  float v37;
  char v38;

  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v3 = *(_BYTE**)(a2 + 24);
  v4 = *(_QWORD**)(a1 + 8);
  if (v3[125] == 1) {
    *(_BYTE*)(*v4 + 16700LL) = 1;
  }
  v6 = (__int64*)(*v4 + 13304LL);
  if (*(_BYTE*)(*v4 + 16700LL) != 0) {
    v6 = (__int64*)(*(_QWORD*)(*v4 + 16672LL) + 24LL);
  }
  v7 = *v6;
  v8 = *(unsigned __int8**)(*(_QWORD*)(*(_QWORD*)v3 + 8LL) + 304LL);
  if ((v3[126] & 1) != 0) {
    v9 = 1;
  }
  else {
    v9 = v3[125];
  }
  v10 = v8[96];
  v35 = v7;
  v11 = v4[22];
  v12 = v10 == 0;
  v13 = 128;
  v14 = *(_DWORD*)(v11 + 56);
  v15 = *(__int64**)a2;
  v16 = *(_QWORD**)(a2 + 8);
  if (!v12) {
    v13 = 92;
  }
  v36 = *(_DWORD*)&v8[v13];
  v17 = 208;
  if (v8[176] != 0) {
    v17 = 172;
  }
  v18 = v8 + 280;
  v19 = *(float*)&v8[v17];
  v20 = v8 + 249;
  v21 = v8[250];
  v37 = v19;
  if (v21 != 0) {
    v22 = v20;
  }
  else {
    v22 = v18;
  }
  v23 = v14 < -1;
  v24 = *v22;
  v25 = ((_BYTE)v14 + 1) & 1;
  if (v23) {
    v25 = -v25;
  }
  *(_DWORD*)(v11 + 56) = v25;
  v38 = v24 & v9;
  v26 = *(_QWORD*)(v11 + 8LL * v25 + 40);
  v27 = (*(__int64 (**)(__int64))(*(_QWORD*)v26 + 56LL))(v26),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  *(_DWORD*)(v27 + 12) = 0;
  *(float*)(v27 + 16) = v19;
  v28 = (float)SHIDWORD(v7);
  *(float*)v27 = (float)(int)v7;
  *(float*)(v27 + 4) = (float)SHIDWORD(v7);
  *(float*)(v27 + 8) = (float)(0x1.0000000000000p+0f / (float)(int)v7) * v19;
  (*(void (**)(__int64))(*(_QWORD*)v26 + 64LL))(v26),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v29 = *(_DWORD*)(v11 + 112);
  v23 = v29 < -1;
  v30 = ((_BYTE)v29 + 1) & 1;
  if (v23) {
    v30 = -v30;
  }
  *(_DWORD*)(v11 + 112) = v30;
  v31 = *(_QWORD*)(v11 + 8LL * v30 + 96);
  v32 = (*(__int64 (**)(__int64))(*(_QWORD*)v31 + 56LL))(v31),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  *(float*)v32 = (float)(int)v7;
  *(float*)(v32 + 4) = v28;
  *(_DWORD*)(v32 + 8) = 0;
  *(float*)(v32 + 12) = (float)(0x1.0000000000000p+0f / v28) * v19;
  *(float*)(v32 + 16) = v19;
  (*(void (**)(__int64))(*(_QWORD*)v31 + 64LL))(v31),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  ResourceBuilder_b677a0((_QWORD*)v11, v15, v33, a3, (__int64)&v35),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  return TaskGaussianBlur_b67a80(v11, v15, v16, a3, (unsigned int*)&v35);
}

__int64 TaskPassNodes_baa490(__int64 a1, __int64 a2, __int64 a3)
{
  __int64* v3;
  _QWORD** v4;
  __int64* v5;
  __int64 v6;
  int v7;
  __int64 v8;
  _QWORD* v9;
  _QWORD* v10;
  struct {
    _QWORD v12[2];
    int v13;
  } v12_;

  v3 = *(__int64**)(a1 + 8);
  v4 = *(_QWORD***)(a1 + 16);
  v5 = *(__int64**)(a2 + 8);
  v6 = *v3;
  v7 = *(unsigned __int8*)(v6 + 16700);
  v8 = *(_QWORD*)(v6 + 16672);
  v9 = (_QWORD*)(v6 + 13304);
  v10 = (_QWORD*)(v8 + 24);
  if (v7 != 0) {
    v9 = v10;
  }
  v12_.v12[0] = *v9;
  v12_.v12[1] = **v4;
  v12_.v13 = 20;
  return GameRoutine_b4af90(v5, a3, (__int64)v12_.v12);
}

__int64 TaskPassNodes_baa610(__int64 a1, __int64 a2, __int64* a3)
{
  _QWORD* v3;
  _DWORD* v5;
  __int64 v6;
  __int64 v8;

  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v3 = *(_QWORD**)(a2 + 8);
  v5 = *(_DWORD**)(*(_QWORD*)(a1 + 8) + 96LL);
  v8 = *(_QWORD*)(*(_QWORD*)(**(_QWORD**)(a2 + 24) + 8LL) + 176LL);
  TaskBloom_b4c560(v5, &v8),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  return TaskBloom_b4c7e0((__int64)v5, v6, v3, a3, (__int64)&v8);
}

__int64 TaskPassNodes_baa9b0(__int64 a1, _QWORD** a2, __int64 a3)
{
  _QWORD* v4;
  __int64* v6;
  __int64 v7;
  __int64* v8;
  __int64 result;

  v4 = *a2;
  v6 = **(__int64***)(a1 + 8);
  v7 = *v6;
  *v4 = GameRoutine_b48f90(a3, v6[56]);
  v8 = a2[1];
  result = GameRoutine_b48e70(a3, v7);
  *v8 = result;
  return result;
}

__int64 TaskPassNodes_baab10(__int64 a1, _QWORD** a2, _QWORD* a3)
{
  __int64 v3;
  __int64 v5;

  v3 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 96LL);
  v5 = *(_QWORD*)(*(_QWORD*)(*a2[3] + 8LL) + 176LL);
  return ResourceBuilder_b4d4e0(v3, *a2, a2[1], a3, (__int64)&v5);
}

__int64 TaskPassNodes_baae90(__int64 a1, _QWORD** a2, __int64 a3)
{
  _QWORD* v4;
  __int64 v6;
  int v7;
  __int64 v8;
  __int64* v9;
  __int64* v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64* v13;
  __int64 result;
  __int64 v15;
  int v16;
  int v17;
  __int64 v18;
  char v19;
  int v20;

  v6 = **(_QWORD**)(a1 + 8);
  v7 = *(unsigned __int8*)(v6 + 16700);
  v8 = *(_QWORD*)(v6 + 16672);
  v9 = (__int64*)(v6 + 13304);
  v10 = (__int64*)(v8 + 24);
  if (v7 != 0) {
    v9 = v10;
  }
  v11 = *v9;
  v12 = HIDWORD(*v9);
  v4 = *a2;
  *v4 = GameRoutine_b48f90(a3, ***(_QWORD***)(a1 + 16));
  v20 = 0;
  v16 = v11;
  v17 = v12;
  v13 = a2[1];
  v15 = 0x1400000000LL;
  v18 = 0x100000001LL;
  v19 = 1;
  result = GameRoutine_b68480(a3, "FxaaGradingDst", &v15);
  *v13 = result;
  return result;
}

__int64 TaskPassNodes_bab050(__int64 a1, __int64 a2, _QWORD* a3)
{
  _QWORD* v3;
  _QWORD* v4;
  _QWORD* v5;
  __int64* v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _QWORD v14[3];

  v3 = *(_QWORD**)(a1 + 8);
  v4 = *(_QWORD**)a2;
  v5 = *(_QWORD**)(a2 + 8);
  v7 = (__int64*)v3[15];
  v8 = *(_QWORD*)(**(_QWORD**)(a2 + 24) + 8LL);
  v9 = (__int64*)(*v3 + 13304LL);
  if (*(_BYTE*)(*v3 + 16700LL) != 0) {
    v9 = (__int64*)(*(_QWORD*)(*v3 + 16672LL) + 24LL);
  }
  v11 = v8 + 184;
  v10 = *(_QWORD*)(v8 + 184);
  v12 = *v9;
  v14[1] = *(_QWORD*)(v11 + 8);
  v14[2] = v10;
  v14[0] = v12;
  GameRoutine_b68c90(v7, (__int64)v14);
  return GameRoutine_b68fc0((__int64)v7, v4, v5, a3, (unsigned int*)v14);
}

__int64 TaskPassNodes_bab410(__int64 a1, __int64 a2, __int64 a3)
{
  __int64* v3;
  __int64 result;
  struct {
    __int64 v5[3];
    char v6;
    char gap25_[3];
    int v7;
  } v5_;

  v3 = *(__int64**)(a2 + 8);
  v5_.v7 = 0;
  v5_.v6 = 1;
  v5_.v5[0] = 0xD00000000LL;
  v5_.v5[1] = 0x4000001000LL;
  v5_.v5[2] = 0x100000001LL;
  result = GameRoutine_b50b10_alt2(a3, "RTColorGradingLut", v5_.v5);
  *v3 = result;
  return result;
}

__int64 TaskPassNodes_bab580(__int64 a1, __int64 a2, __int64* a3)
{
  __int64 v3;
  __int64 v4;
  struct {
    __int64 v6;
    char v7;
  } v6_;

  v3 = *(_QWORD*)(a1 + 8);
  v6_.v7 = 0;
  v4 = *(_QWORD*)(v3 + 104);
  v6_.v6 = *(_QWORD*)(*(_QWORD*)(**(_QWORD**)(a2 + 24) + 8LL) + 200LL);
  return ResourceBuilder_b564c0_alt1(v4, *(_QWORD*)a2, *(_QWORD**)(a2 + 8), a3,
                                     (__int64)&v6_.v6);
}

__int64 TaskPassNodes_bab910(__int64 a1, __int64** a2, __int64* a3)
{
  __int64* v4;
  __int64 v6;
  int v7;
  __int64* v8;
  __int64* v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64 result;
  struct {
    __int64 v15;
    int v16;
    int v17;
    __int64 v18;
    char v19;
    char gap25_[3];
    int v20;
  } v15_;

  v4 = *a2;
  v6 = **(_QWORD**)(a1 + 8);
  v7 = *(unsigned __int8*)(v6 + 16700);
  v8 = (__int64*)(v6 + 13304);
  v9 = (__int64*)(*(_QWORD*)(v6 + 16672) + 24LL);
  if (v7 == 0) {
    v9 = v8;
  }
  v10 = *v9;
  v11 = HIDWORD(*v9);
  v12 = **(_QWORD**)(a1 + 24);
  *v4 = GameRoutine_b48f90_alt1((__int64)a3, ***(_QWORD***)(a1 + 16));
  v4[1] = GameRoutine_b48f90_alt1((__int64)a3, v12);
  v15_.v20 = 0;
  v15_.v16 = v10;
  v15_.v17 = v11;
  v13 = a2[1];
  v15_.v15 = 0x1400000000LL;
  v15_.v18 = 0x100000001LL;
  v15_.v19 = 1;
  result = GameRoutine_b54ca0_alt1(a3, "ColorGradingDst", (__int64)&v15_.v15);
  *v13 = result;
  return result;
}

__int64 TaskPassNodes_babaf0(__int64 a1, __int64 a2, __int64* a3)
{
  _QWORD* v3;
  _DWORD* v5;
  _QWORD* v6;
  __int64 v7;
  __int64* v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  bool v13;
  __int64 v14;
  struct {
    _QWORD v16[3];
    char v17;
  } v16_;

  v3 = *(_QWORD**)(a1 + 8);
  v5 = (_DWORD*)v3[13];
  v6 = *(_QWORD**)(a2 + 8);
  v7 = *(_QWORD*)(**(_QWORD**)(a2 + 24) + 8LL);
  v8 = (__int64*)(*v3 + 13304LL);
  v9 = *(_QWORD**)a2;
  if (*(_BYTE*)(*v3 + 16700LL) != 0) {
    v8 = (__int64*)(*(_QWORD*)(*v3 + 16672LL) + 24LL);
  }
  v10 = *(_QWORD*)(v7 + 200);
  v11 = *(_QWORD*)(v7 + 280);
  v12 = *v8;
  v16_.v16[1] = v10;
  v16_.v16[2] = v11;
  LODWORD(v11) = *(unsigned __int8*)(v10 + 90);
  v16_.v16[0] = v12;
  v13 = (_DWORD)v11 == 0;
  v14 = 120;
  if (!v13) {
    v14 = 89;
  }
  v16_.v17 = *(_BYTE*)(v10 + v14);
  return TaskColorGrading_b565d0(v5, v9, v6, a3, (unsigned int*)v16_.v16);
}

__int64 TaskPassNodes_babec0(__int64 a1, __int64** a2, __int64 a3)
{
  __int64 v3;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64* v11;
  __int64 result;
  struct {
    __int64 v13[3];
    char v14;
    char gap25_[3];
    int v15;
  } v13_;

  v3 = *(_QWORD*)(a1 + 16);
  (*a2)[1] = GameRoutine_b48f90_alt1(a3, ***(_QWORD***)(a1 + 8));
  (*a2)[2] = ResourceBuilder_b5a4b0(a3, *(_QWORD*)(**(_QWORD**)(a1 + 8) + 8LL));
  v7 = (__int64*)(*(_QWORD*)v3 + 13304LL);
  if (*(_BYTE*)(*(_QWORD*)v3 + 16700LL) != 0) {
    v7 = (__int64*)(*(_QWORD*)(*(_QWORD*)v3 + 16672LL) + 24LL);
  }
  v8 = *v7;
  v9 = *(_QWORD*)(a1 + 8);
  v10 = *a2;
  *v10 = GameRoutine_b4a3f0_alt1(a3, *(_QWORD*)(*(_QWORD*)v9 + 520LL));
  v13_.v15 = 0;
  v13_.v13[1] = v8;
  v11 = a2[1];
  v13_.v13[0] = 0x1400000000LL;
  v13_.v13[2] = 0x100000001LL;
  v13_.v14 = 1;
  result = GameRoutine_b4ba10_alt1(a3, "PaintingDst", v13_.v13);
  *v11 = result;
  return result;
}

__int64 TaskPassNodes_bac0c0(__int64 a1, __int64 a2, _QWORD* a3)
{
  _QWORD* v3;
  _QWORD* v4;
  _QWORD* v5;
  _DWORD* v7;
  _QWORD* v8;
  __int64 v9;
  _QWORD v11[2];

  v3 = *(_QWORD**)(a1 + 8);
  v4 = *(_QWORD**)a2;
  v5 = *(_QWORD**)(a2 + 8);
  v7 = (_DWORD*)v3[28];
  v8 = (_QWORD*)(*v3 + 13304LL);
  v9 = *(_QWORD*)(*(_QWORD*)(**(_QWORD**)(a2 + 24) + 8LL) + 336LL);
  if (*(_BYTE*)(*v3 + 16700LL) != 0) {
    v8 = (_QWORD*)(*(_QWORD*)(*v3 + 16672LL) + 24LL);
  }
  v11[0] = *v8;
  v11[1] = v9;
  GameRoutine_b6f990(v7, (__int64)v11);
  return GameRoutine_b6fcd0((__int64)v7, v4, v5, a3, (unsigned int*)v11);
}

__int64 TaskPassNodes_bac490(__int64 a1, _QWORD* a2, __int64 a3)
{
  __int64 v3;
  __int64* v7;
  __int64* v8;
  __int64 v9;
  __int64 result;
  struct {
    __int64 v11[3];
    char v12;
    char gap25_[3];
    int v13;
  } v11_;

  v3 = *(_QWORD*)(a1 + 16);
  *(_QWORD*)*a2 =
      ResourceBuilder_b5a4b0(a3, *(_QWORD*)(**(_QWORD**)(a1 + 8) + 8LL));
  *(_QWORD*)(*a2 + 8LL) =
      GameRoutine_b4a3f0_alt1(a3, *(_QWORD*)(**(_QWORD**)(a1 + 8) + 504LL));
  *(_BYTE*)(*(_QWORD*)v3 + 16700LL) = 0;
  v7 = (__int64*)a2[1];
  v8 = (__int64*)(*(_QWORD*)v3 + 13304LL);
  if (*(_BYTE*)(*(_QWORD*)v3 + 16700LL) != 0) {
    v8 = (__int64*)(*(_QWORD*)(*(_QWORD*)v3 + 16672LL) + 24LL);
  }
  v9 = *v8;
  v11_.v11[0] = 0xA00000000LL;
  v11_.v12 = 1;
  v11_.v13 = 0;
  v11_.v11[2] = 0x100000001LL;
  v11_.v11[1] = v9;
  result = GameRoutine_b5acb0_alt1(a3, "tmpCoC", v11_.v11);
  *v7 = result;
  *(_BYTE*)(*(_QWORD*)v3 + 16700LL) = 1;
  return result;
}

__int64 TaskPassNodes_bac680(__int64 a1, __int64 a2, _QWORD* a3)
{

#pragma clang fp contract(off)
  _QWORD** v3;
  unsigned __int8* v6;
  float v7;
  int v8;
  float v9;
  float v10;
  bool v11;
  __int64 v12;
  float v13;
  __int64 v14;
  float v15;
  int v16;
  __int64 v17;
  __int64* v18;
  __int64* v19;
  __int64 v20;
  __int64 v21;
  float* v22;
  __int64 v23;
  _QWORD* v24;
  _QWORD* v25;
  float v26;
  float v27;
  int v28;
  bool v29;
  int v30;
  float v31;
  __int64 v32;
  float* v33;
  __int64 result;
  struct {
    char gap0_[4];
    _DWORD v35[3];
    __int64 v36;
    float v37;
    float v38;
  } v35_;

  v3 = *(_QWORD***)(a1 + 8);
  *((_BYTE*)*v3 + 16700) = 0;
  v6 = *(unsigned __int8**)(*(_QWORD*)(**(_QWORD**)(a2 + 24) + 8LL) + 128LL);
  v7 = (*(float (**)(_QWORD*))(*v3[3] + 120LL))(v3[3]);
  v8 = v6[176];
  *(float*)v35_.v35 = v7;
  v9 = 0x0.0p+0f;
  v10 = 0x0.0p+0f;
  v11 = v8 == 0;
  v12 = 208;
  if (!v11) {
    v12 = 172;
  }
  v13 = *(float*)&v6[v12];
  v11 = v6[256] == 0;
  v14 = 288;
  *(float*)&v35_.v35[1] = v13;
  if (!v11) {
    v14 = 252;
  }
  v15 = *(float*)&v6[v14];
  v16 = *((unsigned __int8*)*v3 + 16700);
  v17 = (*v3)[2084];
  v18 = *v3 + 1663;
  *(float*)&v35_.v35[2] = v15;
  v19 = (__int64*)(v17 + 24);
  if (v16 != 0) {
    v18 = v19;
  }
  v20 = *v18;
  v11 = v6[402] == 0;
  v21 = 432;
  v35_.v36 = v20;
  if (!v11) {
    v21 = 401;
  }
  if ((v6[v21] & 1) == 0) {
    v22 = (float*)v3[7];
    v10 = v22[305];
    v9 = v22[306];
  }
  v23 = (__int64)v3[17];
  v25 = *(_QWORD**)a2;
  v24 = *(_QWORD**)(a2 + 8);
  v35_.v37 = v10;
  v35_.v38 = v9;
  v26 = v7 * (float)(v7 / v13);
  v27 = (float)(v15 * 0x1.f400000000000p+9f) - v7;
  v28 = *(_DWORD*)(v23 + 136);
  if (v27 < 0x1.a36e2e0000000p-14f) {
    v27 = 0x1.a36e2e0000000p-14f;
  }
  v29 = v28 < -1;
  v30 = ((_BYTE)v28 + 1) & 1;
  if (v29) {
    v30 = -v30;
  }
  v31 = v26 / v27;
  *(_DWORD*)(v23 + 136) = v30;
  v32 = *(_QWORD*)(v23 + 8LL * v30 + 120);
  v33 = (float*)(*(__int64 (**)(__int64))(*(_QWORD*)v32 + 56LL))(v32);
  v33[4] = v31;
  v33[5] = v15;
  *v33 = (float)(int)v20;
  v33[1] = (float)SHIDWORD(v20);
  v33[2] = 0x1.0000000000000p+0f / (float)(int)v20;
  v33[3] = 0x1.0000000000000p+0f / (float)SHIDWORD(v20);
  v33[6] = v10 / (float)(int)v20;
  v33[7] = v9 / (float)SHIDWORD(v20);
  (*(void (**)(__int64))(*(_QWORD*)v32 + 64LL))(v32);
  result = TaskDoF_b5b5a0(v23, v25, v24, a3, (__int64)v35_.v35);
  *((_BYTE*)*v3 + 16700) = 1;
  return result;
}

__int64 TaskPassNodes_bacba0(__int64 a1, __int64** a2, __int64 a3)
{
  __int64 v3;
  __int64* v7;
  __int64 v8;
  __int64 result;
  struct {
    __int64 v10[3];
    char v11;
    char gap25_[3];
    int v12;
  } v10_;

  v3 = *(_QWORD*)(a1 + 16);
  **a2 = GameRoutine_b48f90_alt1(a3, *(_QWORD*)(**(_QWORD**)(a1 + 8) + 456LL));
  (*a2)[1] =
      GameRoutine_b48f90_alt1(a3, *(_QWORD*)(**(_QWORD**)(a1 + 8) + 72LL));
  (*a2)[2] = ResourceBuilder_b5a4b0(a3, *(_QWORD*)(**(_QWORD**)(a1 + 8) + 8LL));
  *(_BYTE*)(*(_QWORD*)v3 + 16700LL) = 0;
  v7 = (__int64*)(*(_QWORD*)v3 + 13304LL);
  if (*(_BYTE*)(*(_QWORD*)v3 + 16700LL) != 0) {
    v7 = (__int64*)(*(_QWORD*)(*(_QWORD*)v3 + 16672LL) + 24LL);
  }
  v10_.v10[0] = 0xA00000000LL;
  v8 = *v7;
  v10_.v10[2] = 0x100000001LL;
  v10_.v11 = 1;
  v10_.v12 = 0;
  v10_.v10[1] = v8;
  result = GameRoutine_b5acb0_alt1(a3, "Result", v10_.v10);
  *a2[1] = result;
  *(_BYTE*)(*(_QWORD*)v3 + 16700LL) = 1;
  return result;
}

__int64 TaskPassNodes_bad1b0(__int64 a1, __int64** a2, __int64 a3)
{
  __int64 v3;
  __int64* v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned int v11;
  unsigned int v12;
  unsigned __int64* v13;
  unsigned __int64 v14;
  __int64* v15;
  __int64 result;
  struct {
    __int64 v17;
    unsigned __int64 v18;
    __int64 v19;
    char v20;
    char gap25_[3];
    int v21;
  } v17_;

  v3 = *(_QWORD*)(a1 + 8);
  *(_BYTE*)(*(_QWORD*)v3 + 16700LL) = 0;
  v6 = *a2;
  v7 = **(__int64***)(a1 + 16);
  v8 = v7[9];
  v9 = v7[1];
  v10 = v7[11];
  v11 = *(_DWORD*)(*(_QWORD*)v3 + 13312LL);
  v12 = *(_DWORD*)(*(_QWORD*)v3 + 13316LL);
  if (*(_BYTE*)(*(_QWORD*)v3 + 16700LL) != 0) {
    v13 = (unsigned __int64*)(*(_QWORD*)(*(_QWORD*)v3 + 16672LL) + 24LL);
  }
  else {
    v13 = (unsigned __int64*)(*(_QWORD*)v3 + 13304LL);
  }
  v14 = *v13;
  *v6 = GameRoutine_b48f90_alt1(a3, *v7);
  v6[2] = ResourceBuilder_b5a4b0(a3, v9);
  v6[1] = GameRoutine_b48f90_alt1(a3, v8);
  if (v10 != 0) {
    v6[3] = GameRoutine_b48f90_alt1(a3, v10);
  }
  v15 = a2[1];
  v17_.v21 = 0;
  v17_.v17 = 0x1400000000LL;
  v17_.v19 = 0x100000001LL;
  v17_.v20 = 1;
  v17_.v18 = v14;
  v15[3] = GameRoutine_b5a5d0_alt1(a3, "DLSSInput", &v17_.v17);
  v17_.v18 = __PAIR64__(v12, v11);
  *v15 = GameRoutine_b494f0_alt1(a3, "DLSSOutput", &v17_.v17);
  v17_.v19 = 0x100000001LL;
  v17_.v21 = 0;
  v17_.v20 = 1;
  v17_.v18 = v14;
  v17_.v17 = 0x1500000000LL;
  v15[4] = GameRoutine_b5a720_alt1(a3, "DLSSInputDepth", &v17_.v17);
  v17_.v17 = 0x1500000000LL;
  v17_.v19 = 0x100000001LL;
  v17_.v20 = 1;
  v17_.v21 = 0;
  v17_.v18 = __PAIR64__(v12, v11);
  result = GameRoutine_b5a870_alt1(a3, "DLSSOutFullResolutionDepth", &v17_.v17);
  v15[2] = result;
  *(_BYTE*)(*(_QWORD*)v3 + 16700LL) = 1;
  return result;
}

__int64 TaskPassNodes_bada10(__int64 a1, _QWORD** a2, __int64* a3)
{
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 (**v14)(__int64);
  __int64 (**v15)(__int64);
  int v16;
  __int64 (*v17)(__int64);
  struct {
    _QWORD v19[2];
    __int64 v20;
  } v19_;
  struct {
    __int64 v21;
    __int64 v22;
    __int64 v23;
  } v21_;

  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v7 = COERCE_AS(__typeof__(v7),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v3 = *a3;
  v5 = (*(__int64 (**)(_QWORD))(*(_QWORD*)**a2 + 16LL))(**a2),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v7 = COERCE_AS(__typeof__(v7),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v6 = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 32LL))(v5),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v7 = COERCE_AS(__typeof__(v7),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v8 = v7;
  v9 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2[1] + 16LL))(*a2[1]),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v7 = COERCE_AS(__typeof__(v7),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v10 = (*(__int64 (**)(__int64))(*(_QWORD*)v9 + 32LL))(v9),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v7 = COERCE_AS(__typeof__(v7),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  LODWORD(v21_.v22) = 0;
  v21_.v21 = 0;
  v11 = v10;
  v13 = v12;
  v14 = (__int64 (**)(__int64))GameData_212e778[0],
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v7 = COERCE_AS(__typeof__(v7),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  HIDWORD(v21_.v22) = (*(__int64 (**)(__int64))GameData_212e778[0])(v6),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v7 = COERCE_AS(__typeof__(v7),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v15 = (__int64 (**)(__int64))GameData_212e780,
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v7 = COERCE_AS(__typeof__(v7),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v21_.v23 = ((unsigned int (*)(__int64))*GameData_212e780)(v6) | 0x100000000LL,
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v7 = COERCE_AS(__typeof__(v7),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v19_.v19[0] = 0;
  v19_.v19[1] = v21_.v22;
  v19_.v20 = v21_.v23;
  v16 = (*v14)(v11);
  v17 = *v15;
  HIDWORD(v19_.v19[1]) = v16;
  LODWORD(v19_.v20) = v17(v11),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v7 = COERCE_AS(__typeof__(v7),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  return (*(__int64 (**)(__int64, __int64, __int64, __int64*, __int64, __int64,
                         _QWORD*, _QWORD))GameData_212e870[0])(
      v3 + 8, v6, v8, &v21_.v21, v11, v13, v19_.v19, 0);
}

__int64 TaskPassNodes_bae080(__int64 a1, __int64 a2, _QWORD* a3)
{
  _QWORD* v3;
  __int64 v4;
  _DWORD* v6;
  _QWORD* v7;
  int* v8;
  _QWORD* v9;
  float v10;
  _QWORD v12[2];

  v3 = *(_QWORD**)(a1 + 8);
  v4 = *(_QWORD*)(a2 + 24);
  v6 = (_DWORD*)v3[29];
  v7 = *(_QWORD**)(a2 + 8);
  v8 = (int*)(*v3 + 13304LL);
  v9 = *(_QWORD**)a2;
  if (*(_BYTE*)(*v3 + 16700LL) != 0) {
    v8 = (int*)(*(_QWORD*)(*v3 + 16672LL) + 24LL);
  }
  v10 = (float)v8[1];
  LODWORD(v12[0]) =
      (int)(float)((float)((float)*v8 / v10) *
                   (float)(int)(((int)(float)(v10 * 0.7) + 1) & 0xFFFFFFFE));
  HIDWORD(v12[0]) = ((int)(float)(v10 * 0.7) + 1) & 0xFFFFFFFE;
  v12[1] = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v4 + 8LL) + 288LL);
  return GameRoutine_b7e1f0(v6, v9, v7, a3, (unsigned int*)v12);
}

__int64 TaskPassNodes_bae240(__int64 a1, __int64* a2, __int64 a3)
{

#pragma clang fp contract(off)
  __int64 v5;
  int v6;
  __int64 v7;
  int* v8;
  int* v9;
  bool v10;
  int v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  int v18;
  __int64 v19;
  __int64* v20;
  __int64 result;
  struct {
    _BYTE v22[12];
    int v23;
    __int64 v24;
    char v25;
    char gap25_[3];
    int v26;
  } v22_;

  v5 = **(_QWORD**)(a1 + 8);
  v6 = *(unsigned __int8*)(v5 + 16700);
  v7 = *(_QWORD*)(v5 + 16672);
  v8 = (int*)(v5 + 13304);
  v9 = (int*)(v7 + 24);
  v10 = v6 == 0;
  v11 = *(_DWORD*)(a1 + 32);
  if (!v10) {
    v8 = v9;
  }
  v12 = *v8;
  if (v11 == 1) {
    v13 = 328;
    v14 = 360;
    v15 = 324;
  }
  else {
    if (v11 != 2) {
      v18 = 0;
      goto LABEL_12;
    }
    v13 = 408;
    v14 = 440;
    v15 = 404;
  }
  v16 = *(_QWORD*)(a1 + 16);
  if (*(_BYTE*)(v16 + v13) != 0) {
    v17 = v15;
  }
  else {
    v17 = v14;
  }
  v18 = (int)(float)((float)((float)v12 / 0x1.9000000000000p+10f) *
                     (float)*(int*)(v16 + v17));
LABEL_12:
  v19 = *a2;
  *(_QWORD*)v19 =
      ResourceBuilder_b5a4b0(a3, *(_QWORD*)(*(_QWORD*)(a1 + 24) + 8LL));
  *(_DWORD*)(v19 + 8) = v18;
  v22_.v26 = 0;
  v20 = (__int64*)a2[1];
  *(_QWORD*)v22_.v22 = 0x400000000LL;
  v22_.v24 = 0x100000001LL;
  v22_.v25 = 1;
  *(_DWORD*)&v22_.v22[8] = v18;
  v22_.v23 = v18;
  *v20 = GameRoutine_b6b000_alt1(a3, "LensFlareOcclusionBuffer",
                                 (__int64*)v22_.v22);
  *(_QWORD*)&v22_.v22[4] = 0x100000001LL;
  v22_.v23 = 1;
  result =
      GameRoutine_b62660_alt1(a3, "LensFlareAverageAlpha", (__int64*)v22_.v22);
  v20[1] = result;
  return result;
}

void TaskPassNodes_bae7f0(__int64 a1, __int64 a2, _QWORD* a3, _QWORD* a4,
                          _QWORD* a5, __int64 a6, __int64 a7, __int64 a8,
                          __int64 a9, __int64 a10, __int64 a11, __int64 a12,
                          _QWORD* a13, _QWORD* a14)
{
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  _QWORD* v29;
  __int64 v30;
  __int64 v31;
  _QWORD* v32;
  _QWORD* v33;
  __int64 v34;
  __int64 v35;
  __int64* v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64* v41;
  __int64* v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  _QWORD* v49;
  _QWORD* v50;
  __int64 v51;
  __int64 v52;
  _QWORD* v53;
  _QWORD* v54;
  __int64 v55;

  *(_QWORD*)a1 = a2;
  *(_QWORD*)(a1 + 8) = *a3;
  v15 = a3[1];
  *(_QWORD*)(a1 + 16) = v15;
  if (v15 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v15 + 8), 1u,
                              memory_order_relaxed);
  }
  *(_QWORD*)(a1 + 24) = *a4;
  v16 = a4[1];
  *(_QWORD*)(a1 + 32) = v16;
  if (v16 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v16 + 8), 1u,
                              memory_order_relaxed);
  }
  *(_QWORD*)(a1 + 40) = *a5;
  v17 = a5[1];
  *(_QWORD*)(a1 + 48) = v17;
  if (v17 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v17 + 8), 1u,
                              memory_order_relaxed);
  }
  *(_QWORD*)(a1 + 56) = a6;
  *(_QWORD*)(a1 + 64) = a7;
  *(_QWORD*)(a1 + 72) = a9;
  *(_QWORD*)(a1 + 80) = a10;
  *(_QWORD*)(a1 + 88) = a11;
  *(_QWORD*)(a1 + 96) = a12;
  *(_QWORD*)(a1 + 104) = *a13;
  v18 = a13[1];
  *(_QWORD*)(a1 + 112) = v18;
  if (v18 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v18 + 8), 1u,
                              memory_order_relaxed);
  }
  *(_QWORD*)(a1 + 120) = *a14;
  v19 = a14[1];
  *(_QWORD*)(a1 + 128) = v19;
  if (v19 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v19 + 8), 1u,
                              memory_order_relaxed);
  }
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 160) = 0;
  *(_QWORD*)(a1 + 168) = 0;
  *(_QWORD*)(a1 + 176) = 0;
  *(_QWORD*)(a1 + 184) = 0;
  *(_QWORD*)(a1 + 192) = 0;
  *(_QWORD*)(a1 + 200) = 0;
  *(_QWORD*)(a1 + 136) = -1;
  *(_QWORD*)(a1 + 144) = -1;
  *(_DWORD*)(a1 + 136) = GameHr_ad6000((__int64)"ShadowCaster", 0xCu);
  *(_DWORD*)(a1 + 140) = GameHr_ad6000((__int64)"CharaShadowCaster", 0x11u);
  *(_DWORD*)(a1 + 144) = GameHr_ad6000((__int64)"LocalShadowCaster", 0x11u);
  *(_DWORD*)(a1 + 148) = GameHr_ad6000((__int64)"LocalOmniShadowCaster", 0x15u);
  v20 = *(_QWORD*)a1;
  v21 = (__int64*)fw_memory_g_heap_manager_ptr;
  v22 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 208, 16, 0);
  gfxa_TaskCharaShadow_Impl_Impl(v22, v20);
  v23 = *(_QWORD*)(a1 + 152);
  *(_QWORD*)(a1 + 152) = v22;
  if (v23 != 0) {
    GameRoutine_6040f0_alt1(v23 + 8);
    v24 = *(_QWORD*)(v23 + 144);
    *(_QWORD*)(v23 + 144) = 0;
    if (v24 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v24 + 8LL))(v24);
    }
    v25 = *(_QWORD*)(v23 + 136);
    *(_QWORD*)(v23 + 136) = 0;
    if (v25 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v25 + 8LL))(v25);
    }
    GameRoutine_604050(v23 + 8);
    v26 = 128;
    if (*(_QWORD*)(*v21 + 200) == 0) {
      v26 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v21 + v26, v23);
  }
  v27 = *(_QWORD*)a1;
  v28 = fw_memory_HeapManager_Allocate_alt1(*v21, 928, 16, 0);
  gfxa_TaskDeferredLit_Impl_Impl(v28, v27);
  v29 = *(_QWORD**)(a1 + 160);
  *(_QWORD*)(a1 + 160) = v28;
  if (v29 != nullptr) {
    ResourceBuilder_b57de0(v29);
    v30 = 128;
    if (*(_QWORD*)(*v21 + 200) == 0) {
      v30 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v21 + v30, (__int64)v29);
  }
  v31 = *(_QWORD*)a1;
  v32 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v21, 456, 16, 0);
  gfxa_TaskSSAO_Impl_Impl(v32, v31);
  v33 = *(_QWORD**)(a1 + 168);
  *(_QWORD*)(a1 + 168) = v32;
  if (v33 != nullptr) {
    TaskSSAO_b79df0(v33);
    v34 = 128;
    if (*(_QWORD*)(*v21 + 200) == 0) {
      v34 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v21 + v34, (__int64)v33);
  }
  v35 = *(_QWORD*)a1;
  v36 = (__int64*)fw_memory_HeapManager_Allocate_alt1(*v21, 48, 16, 0);
  gfxa_b56ec0(v36, v35);
  v37 = *(_QWORD*)(a1 + 184);
  *(_QWORD*)(a1 + 184) = v36;
  if (v37 != 0) {
    v38 = *(_QWORD*)(v37 + 40);
    if (v38 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v38 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v38 + 16LL))(v38);
      std___1___shared_weak_count___release_weak_alt1(v38);
    }
    v39 = *(_QWORD*)(v37 + 24);
    if (v39 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v39 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v39 + 16LL))(v39);
      std___1___shared_weak_count___release_weak_alt1(v39);
    }
    v40 = 128;
    if (*(_QWORD*)(*v21 + 200) == 0) {
      v40 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v21 + v40, v37);
  }
  v41 = (__int64*)fw_memory_HeapManager_Allocate_alt1(*v21, 40, 16, 0);
  GameHr_b52a20(v41);
  v42 = *(__int64**)(a1 + 192);
  *(_QWORD*)(a1 + 192) = v41;
  if (v42 != nullptr) {
    v43 = v42[4];
    if (v43 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v43 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v43 + 16LL))(v43);
      std___1___shared_weak_count___release_weak_alt1(v43);
    }
    v44 = *v42;
    if (*v42 != 0) {
      v45 = *v21;
      v42[1] = v44;
      v46 = 128;
      if (*(_QWORD*)(v45 + 200) == 0) {
        v46 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(v45 + v46, v44);
    }
    v47 = 128;
    if (*(_QWORD*)(*v21 + 200) == 0) {
      v47 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v21 + v47, (__int64)v42);
  }
  v48 = *(_QWORD*)a1;
  v49 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v21, 488, 16, 0);
  GameRoutine_18dfa20_alt1(v49, v48);
  v50 = *(_QWORD**)(a1 + 176);
  *(_QWORD*)(a1 + 176) = v49;
  if (v50 != nullptr) {
    TaskCapsuleAO_18dfe10(v50);
    v51 = 128;
    if (*(_QWORD*)(*v21 + 200) == 0) {
      v51 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v21 + v51, (__int64)v50);
  }
  v52 = *(_QWORD*)a1;
  v53 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v21, 464, 16, 0);
  GameRoutine_18e35d0_alt1(v53, v52);
  v54 = *(_QWORD**)(a1 + 200);
  *(_QWORD*)(a1 + 200) = v53;
  if (v54 != nullptr) {
    TaskContactShadow_18e3ac0(v54);
    v55 = 128;
    if (*(_QWORD*)(*v21 + 200) == 0) {
      v55 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v21 + v55, (__int64)v54);
  }
}

__int64 TaskPassNodes_baecd0(__int64 result)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  __int64 v18;
  _QWORD* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;

  v1 = *(_QWORD*)(result + 200);
  *(_QWORD*)(result + 200) = 0;
  v2 = (_QWORD*)result;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    GameRoutine_18e3ac0(v1);
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v4 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v4, v1);
  }
  v5 = (__int64*)v2[24];
  v2[24] = 0;
  if (v5 != nullptr) {
    v6 = v5[4];
    if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      std___1___shared_weak_count___release_weak(v6);
    }
    v7 = *v5;
    if (*v5 != 0) {
      v8 = *(_QWORD*)v3;
      v5[1] = v7;
      v9 = 128;
      if (*(_QWORD*)(v8 + 200) == 0) {
        v9 = 56;
      }
      nn_mem_StandardAllocator_Free(v8 + v9, v7);
    }
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v10 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v10, v5);
  }
  v11 = v2[23];
  v2[23] = 0;
  if (v11 != 0) {
    v12 = *(_QWORD*)(v11 + 40);
    if (v12 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
      std___1___shared_weak_count___release_weak(v12);
    }
    v13 = *(_QWORD*)(v11 + 24);
    if (v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
      std___1___shared_weak_count___release_weak(v13);
    }
    v14 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v14 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v14, v11);
  }
  v15 = v2[22];
  v2[22] = 0;
  if (v15 != 0) {
    GameRoutine_18dfe10(v15);
    v16 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v16 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v16, v15);
  }
  v17 = (_QWORD*)v2[21];
  v2[21] = 0;
  if (v17 != nullptr) {
    GameRoutine_b79df0(v17);
    v18 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v18 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v18, v17);
  }
  v19 = (_QWORD*)v2[20];
  v2[20] = 0;
  if (v19 != nullptr) {
    ResourceBuilder_b57de0(v19);
    v20 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v20 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v20, v19);
  }
  v21 = v2[19];
  v2[19] = 0;
  if (v21 != 0) {
    GameRoutine_6040f0(v21 + 8, *game_g_frame_clock_ptr[0] + 568);
    v22 = *(_QWORD*)(v21 + 144);
    *(_QWORD*)(v21 + 144) = 0;
    if (v22 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v22 + 8LL))(v22);
    }
    v23 = *(_QWORD*)(v21 + 136);
    *(_QWORD*)(v21 + 136) = 0;
    if (v23 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v23 + 8LL))(v23);
    }
    GameRoutine_604050(v21 + 8);
    v24 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v24 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v24, v21);
  }
  v25 = v2[16];
  if (v25 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
    result = std___1___shared_weak_count___release_weak(v25);
  }
  v26 = v2[14];
  if (v26 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v26 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26);
    result = std___1___shared_weak_count___release_weak(v26);
  }
  v27 = v2[6];
  if (v27 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v27 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
    result = std___1___shared_weak_count___release_weak(v27);
  }
  v28 = v2[4];
  if (v28 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v28 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
    result = std___1___shared_weak_count___release_weak(v28);
    v29 = v2[2];
    if (v29 == 0) {
      return result;
    }
  }
  else {
    v29 = v2[2];
    if (v29 == 0) {
      return result;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v29 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v29 + 16LL))(v29);
    return std___1___shared_weak_count___release_weak(v29);
  }
  return result;
}

__int64 TaskPassNodes_baf760(__int64 result, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64* v12;
  __int64 v13;
  __int64* v14;
  __int64* v15;
  unsigned __int64 v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  signed __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  struct {
    __int64 (**v31)();
    __int64 v32;
    __int64* v33;
    __int64* v34;
    __int64 (***v35)();
  } v31_;
  __int64 v36;

  v4 = *(_QWORD*)(a3 + 80);
  v36 = a3;
  v30 = v4;
  v5 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a4 + 8LL) + 64LL);
  v6 = 120;
  if (*(_BYTE*)(v5 + 90) != 0) {
    v6 = 89;
  }
  if ((*(_BYTE*)(v5 + v6) & 1) != 0) {
    v8 = *(_QWORD*)a2;
    v7 = *(_QWORD*)(a2 + 8);
    v9 = *(_DWORD*)(a2 + 96);
    v10 = result;
    v12 = (__int64*)fw_memory_g_heap_manager_ptr;
    v13 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 256, 16, 0);
    *(_QWORD*)(v13 + 32) = 0;
    *(_QWORD*)(v13 + 40) = 0;
    *(_QWORD*)(v13 + 48) = 0;
    *(_QWORD*)(v13 + 56) = 0;
    *(_QWORD*)(v13 + 64) = 0;
    *(_QWORD*)(v13 + 72) = 0;
    *(_DWORD*)(v13 + 80) = v9;
    *(_QWORD*)(v13 + 144) = 0;
    *(_QWORD*)(v13 + 152) = 0;
    *(_QWORD*)(v13 + 128) = 0;
    *(_QWORD*)(v13 + 136) = 0;
    *(_QWORD*)(v13 + 112) = 0;
    *(_QWORD*)(v13 + 120) = 0;
    *(_QWORD*)(v13 + 96) = 0;
    *(_QWORD*)(v13 + 104) = 0;
    v31_.v33 = &v36;
    v31_.v34 = &v30;
    v31_.v35 = &v31_.v31;
    *(_QWORD*)(v13 + 88) = 0;
    *(_QWORD*)(v13 + 216) = v10;
    *(_BYTE*)(v13 + 8) = 26;
    v31_.v31 = GameData_1fcddf8;
    v31_.v32 = v10;
    strcpy((char*)(v13 + 9), "CapsuleAOPass");
    *(_BYTE*)(v13 + 84) = 1;
    *(_QWORD*)v13 = GameData_1fcdf18;
    *(_QWORD*)(v13 + 160) = GameData_1fcddf8;
    v14 = v31_.v33;
    *(_QWORD*)(v13 + 168) = v31_.v32;
    *(_QWORD*)(v13 + 176) = v14;
    v15 = v31_.v34;
    *(_QWORD*)(v13 + 208) = GameData_1fcde88;
    *(_QWORD*)(v13 + 240) = v13 + 208;
    *(_QWORD*)(v13 + 184) = v15;
    *(_QWORD*)(v13 + 192) = v13 + 160;
    v17 = *(__int64**)(a2 + 8);
    v16 = *(_QWORD*)(a2 + 16);
    if ((unsigned __int64)v17 >= v16) {
      v19 = *(_QWORD*)a2;
      v20 = (signed __int64)v17 - *(_QWORD*)a2;
      v21 = (v20 >> 3) + 1;
      if (v21 >> 61 != 0) {
        GameRoutine_b32f30_alt1();
      }
      v22 = v16 - v19;
      if (v22 >> 2 > v21) {
        v21 = v22 >> 2;
      }
      if ((unsigned __int64)v22 >= 0x7FFFFFFFFFFFFFF8LL) {
        v23 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v23 = v21;
      }
      if (v23 != 0) {
        if (v23 >> 61 != 0) {
          GameRoutine_60a210_alt1();
        }
        v24 = v13;
        v25 = fw_memory_HeapManager_Allocate_alt1(*v12, 8 * v23, 16, 0);
        v13 = v24;
      }
      else {
        v25 = 0;
      }
      v26 = v25 + 8 * v23;
      v27 = v25 + v20 - 8 * (v20 >> 3);
      *(_QWORD*)(v25 + v20) = v13;
      v18 = v25 + v20 + 8;
      memcpy_alt1(v27, v19, v20);
      *(_QWORD*)a2 = v27;
      *(_QWORD*)(a2 + 8) = v18;
      *(_QWORD*)(a2 + 16) = v26;
      if (v19 != 0) {
        v28 = 128;
        if (*(_QWORD*)(*v12 + 200) == 0) {
          v28 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*v12 + v28, v19);
      }
    }
    else {
      *v17 = v13;
      v18 = (__int64)(v17 + 1);
    }
    *(_QWORD*)(a2 + 8) = v18;
    v29 = *(_QWORD*)(v18 - 8);
    v31_.v31 = (__int64 (**)(void))a2;
    v31_.v32 = v29;
    result = (*(__int64 (**)(__int64, __int64 (***)(void)))(
        *(_QWORD*)v29 + 16LL))(v29, &v31_.v31);
    *(_QWORD*)(v36 + 80) =
        *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a2 + ((v7 - v8) & 0x7FFFFFFF8LL)) +
                   136LL);
  }
  return result;
}

__int64 TaskPassNodes_baf9c0(__int64 a1, __int64 a2, _QWORD* a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  int v8;
  __int64* v9;
  __int64 v10;
  _QWORD** v11;
  __int64* v12;
  unsigned __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  signed __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  _QWORD** v26;
  __int64 result;
  __int64 v28;
  struct {
    __int64 (**v29)();
    _QWORD** v30;
    __int64* v31;
    char gap40_[8];
    __int64 (***v32)();
  } v29_;
  _QWORD* v33;

  v3 = a3[10];
  v33 = a3;
  v5 = *(_QWORD*)a2;
  v4 = *(_QWORD*)(a2 + 8);
  v8 = *(_DWORD*)(a2 + 96);
  v28 = v3;
  v9 = (__int64*)fw_memory_g_heap_manager_ptr;
  v10 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 368, 16, 0);
  *(_QWORD*)(v10 + 32) = 0;
  *(_QWORD*)(v10 + 40) = 0;
  *(_QWORD*)(v10 + 48) = 0;
  *(_QWORD*)(v10 + 56) = 0;
  *(_QWORD*)(v10 + 64) = 0;
  *(_QWORD*)(v10 + 72) = 0;
  *(_DWORD*)(v10 + 80) = v8;
  *(_QWORD*)(v10 + 248) = 0;
  *(_QWORD*)(v10 + 256) = 0;
  v29_.v29 = GameData_1fcdf60;
  v29_.v30 = &v33;
  v29_.v32 = &v29_.v29;
  *(_QWORD*)(v10 + 232) = 0;
  *(_QWORD*)(v10 + 240) = 0;
  *(_QWORD*)(v10 + 216) = 0;
  *(_QWORD*)(v10 + 224) = 0;
  *(_QWORD*)(v10 + 200) = 0;
  *(_QWORD*)(v10 + 208) = 0;
  *(_QWORD*)(v10 + 184) = 0;
  *(_QWORD*)(v10 + 192) = 0;
  *(_QWORD*)(v10 + 168) = 0;
  *(_QWORD*)(v10 + 176) = 0;
  *(_QWORD*)(v10 + 152) = 0;
  *(_QWORD*)(v10 + 160) = 0;
  *(_QWORD*)(v10 + 136) = 0;
  *(_QWORD*)(v10 + 144) = 0;
  *(_QWORD*)(v10 + 120) = 0;
  *(_QWORD*)(v10 + 128) = 0;
  *(_QWORD*)(v10 + 104) = 0;
  *(_QWORD*)(v10 + 112) = 0;
  v29_.v31 = &v28;
  *(_QWORD*)(v10 + 88) = 0;
  *(_QWORD*)(v10 + 96) = 0;
  *(_BYTE*)(v10 + 8) = 30;
  strcpy((char*)(v10 + 9), "DeferredLitPass");
  *(_BYTE*)(v10 + 84) = 1;
  *(_QWORD*)v10 = GameData_1fce080;
  *(_QWORD*)(v10 + 304) = v10 + 272;
  v11 = v29_.v30;
  v12 = v29_.v31;
  *(_QWORD*)(v10 + 272) = GameData_1fcdf60;
  *(_QWORD*)(v10 + 280) = v11;
  *(_QWORD*)(v10 + 288) = v12;
  *(_QWORD*)(v10 + 352) = v10 + 320;
  *(_QWORD*)(v10 + 320) = GameData_1fcdff0;
  *(_QWORD*)(v10 + 328) = a1;
  v14 = *(__int64**)(a2 + 8);
  v13 = *(_QWORD*)(a2 + 16);
  if ((unsigned __int64)v14 >= v13) {
    v16 = *(_QWORD*)a2;
    v17 = (signed __int64)v14 - *(_QWORD*)a2;
    v18 = (v17 >> 3) + 1;
    if (v18 >> 61 != 0) {
      GameRoutine_b32f30_alt1();
    }
    v19 = v13 - v16;
    if (v19 >> 2 > v18) {
      v18 = v19 >> 2;
    }
    if ((unsigned __int64)v19 >= 0x7FFFFFFFFFFFFFF8LL) {
      v20 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v20 = v18;
    }
    if (v20 != 0) {
      if (v20 >> 61 != 0) {
        GameRoutine_60a210_alt1();
      }
      v21 = v10;
      v22 = fw_memory_HeapManager_Allocate_alt1(*v9, 8 * v20, 16, 0);
      v10 = v21;
    }
    else {
      v22 = 0;
    }
    v23 = v22 + 8 * v20;
    v24 = v22 + v17 - 8 * (v17 >> 3);
    *(_QWORD*)(v22 + v17) = v10;
    v15 = v22 + v17 + 8;
    memcpy_alt1(v24, v16, v17);
    *(_QWORD*)a2 = v24;
    *(_QWORD*)(a2 + 8) = v15;
    *(_QWORD*)(a2 + 16) = v23;
    if (v16 != 0) {
      v25 = 128;
      if (*(_QWORD*)(*v9 + 200) == 0) {
        v25 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v9 + v25, v16);
    }
  }
  else {
    *v14 = v10;
    v15 = (__int64)(v14 + 1);
  }
  *(_QWORD*)(a2 + 8) = v15;
  v26 = *(_QWORD***)(v15 - 8);
  v29_.v29 = (__int64 (**)(void))a2;
  v29_.v30 = v26;
  result =
      ((__int64 (*)(_QWORD**, __int64 (***)(void)))(*v26)[2])(v26, &v29_.v29);
  *v33 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a2 + ((v4 - v5) & 0x7FFFFFFF8LL)) +
                    256LL);
  return result;
}

__int64 TaskPassNodes_bb0230(__int64 a1, __int64* a2, __int64 a3)
{
  int v3;
  _QWORD* v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  _QWORD v23[2];
  __int64 v24;

  v24 = a3;
  v3 = *((_DWORD*)a2 + 24);
  v6 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v7 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      192, 16, 0);
  *(_DWORD*)(v7 + 80) = v3;
  *(_QWORD*)(v7 + 32) = 0;
  *(_QWORD*)(v7 + 40) = 0;
  *(_QWORD*)(v7 + 48) = 0;
  *(_QWORD*)(v7 + 56) = 0;
  *(_QWORD*)(v7 + 64) = 0;
  *(_QWORD*)(v7 + 72) = 0;
  *(_BYTE*)(v7 + 8) = 30;
  *(_BYTE*)(v7 + 84) = 1;
  *(_QWORD*)v7 = GameData_1fce620;
  *(_QWORD*)(v7 + 96) = GameData_1fce500;
  *(_QWORD*)(v7 + 128) = v7 + 96;
  *(_QWORD*)(v7 + 144) = GameData_1fce590;
  *(_QWORD*)(v7 + 152) = a1;
  strcpy((char*)(v7 + 9), "LocalShadowPass");
  *(_QWORD*)(v7 + 104) = &v24;
  v9 = (__int64*)a2[1];
  v8 = a2[2];
  *(_QWORD*)(v7 + 176) = v7 + 144;
  if ((unsigned __int64)v9 >= v8) {
    v11 = *a2;
    v12 = (__int64)v9 - *a2;
    v13 = (v12 >> 3) + 1;
    if (v13 >> 61 != 0) {
      GameRoutine_b32f30(v7);
    }
    v14 = v8 - v11;
    if (v14 >> 2 > v13) {
      v13 = v14 >> 2;
    }
    if ((unsigned __int64)v14 >= 0x7FFFFFFFFFFFFFF8LL) {
      v15 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v15 = v13;
    }
    if (v15 != 0) {
      if (v15 >> 61 != 0) {
        GameRoutine_60a210(v7);
      }
      v16 = v7;
      v17 = fw_memory_HeapManager_Allocate(*v6, 8 * v15, 16, 0);
      v7 = v16;
    }
    else {
      v17 = 0;
    }
    v18 = v17 + 8 * v15;
    v19 = v17 + v12 - 8 * (v12 >> 3);
    *(_QWORD*)(v17 + v12) = v7;
    v10 = v17 + v12 + 8;
    memcpy(v19, v11, v12);
    *a2 = v19;
    a2[1] = v10;
    a2[2] = v18;
    if (v11 != 0) {
      v20 = 128;
      if (*(_QWORD*)(*v6 + 200LL) == 0) {
        v20 = 56;
      }
      nn_mem_StandardAllocator_Free(*v6 + v20, v11);
    }
  }
  else {
    *v9 = v7;
    v10 = (__int64)(v9 + 1);
  }
  a2[1] = v10;
  v21 = *(_QWORD*)(v10 - 8);
  v23[0] = a2;
  v23[1] = v21;
  return (*(__int64 (**)(__int64, _QWORD*))(*(_QWORD*)v21 + 16LL))(v21, v23);
}

__int64 TaskPassNodes_bb0980(__int64 a1, __int64** a2, __int64 a3)
{
  __int64 v5;
  __int64 v6;
  unsigned int v7;
  unsigned int v8;
  __int64* v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64 result;
  struct {
    __int64 v16;
    unsigned int v17;
    unsigned int v18;
    __int64 v19;
    char v20;
    char gap25_[3];
    int v21;
  } v16_;

  v5 = **(_QWORD**)(a1 + 8);
  if ((*(_BYTE*)(v5 + 16700) & 1) != 0) {
    v6 = *(_QWORD*)(v5 + 16672);
    v7 = *(_DWORD*)(v6 + 24);
    v8 = *(_DWORD*)(v6 + 28);
  }
  else {
    v7 = *(_DWORD*)(v5 + 13304);
    v8 = *(_DWORD*)(v5 + 13308);
  }
  v9 = *a2;
  v10 = **(__int64***)(a1 + 16);
  v11 = v10[63];
  v12 = v10[6];
  v13 = v10[7];
  v9[1] = ResourceBuilder_b5a4b0(a3, v10[1]);
  *v9 = GameRoutine_b48f90_alt1(a3, v12);
  v9[3] = GameRoutine_b4a3f0_alt1(a3, v11);
  v9[2] = GameRoutine_b48f90_alt1(a3, v13);
  v16_.v21 = 0;
  v16_.v17 = v7;
  v16_.v18 = v8;
  v14 = a2[1];
  v16_.v19 = 0x100000001LL;
  v16_.v20 = 1;
  v16_.v16 = 0x400000000LL;
  *v14 = GameRoutine_b50c60_alt2(a3, "OcclusionDst", &v16_.v16);
  v16_.v17 = (v7 + 1) & 0xFFFFFFFE;
  v16_.v18 = (v8 + 1) & 0xFFFFFFFE;
  HIDWORD(v16_.v16) = 11;
  v14[4] = GameRoutine_b509c0_alt2(a3, "BlurHDst", &v16_.v16);
  v14[3] = GameRoutine_b509c0_alt2(a3, "BlurVDst", &v16_.v16);
  v16_.v17 = (int)(v7 + 1) >> 1;
  v16_.v18 = (int)(v8 + 1) >> 1;
  v16_.v20 = 1;
  v16_.v16 = 0xE00000001LL;
  LODWORD(v16_.v19) = 4;
  v14[1] = GameRoutine_b62660_alt1(a3, "CameraSpaceDepthArray", &v16_.v16);
  HIDWORD(v16_.v16) = 11;
  result = GameRoutine_b79740_alt1(a3, "IntermediateOcclusionArray", &v16_.v16);
  v14[2] = result;
  return result;
}

__int64 TaskPassNodes_bb1210(__int64 a1, __int64 a2, _QWORD* a3)
{
  __int64 v3;
  __int64 v5;
  int v6;
  __int64 v7;
  unsigned int* v8;
  unsigned int* v9;
  unsigned int v10;
  unsigned int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD v17[2];

  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v3 = *a3;
  v5 = **(_QWORD**)(a1 + 8);
  v6 = *(unsigned __int8*)(v5 + 16700);
  v7 = *(_QWORD*)(v5 + 16672);
  v8 = (unsigned int*)(v5 + 13304);
  v9 = (unsigned int*)(v7 + 24);
  if (v6 != 0) {
    v8 = v9;
  }
  v11 = *v8;
  v10 = v8[1];
  v12 = (*(__int64 (**)(_QWORD))(***(_QWORD***)(a2 + 8) + 16LL))(
      **(_QWORD**)(a2 + 8)),
  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v13 = (*(__int64 (**)(__int64))(*(_QWORD*)v12 + 32LL))(v12),
  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, __int64))(*(_QWORD*)v3 + 96LL))(v3, v13, v14),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a3 + 72LL))(
      *a3, 0, 0, v11, v10),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a3 + 88LL))(
      *a3, 0, 0, v11, v10),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v15 = *a3;
  v17[0] = 0x3F8000003F800000LL;
  v17[1] = 0x3F8000003F800000LL;
  return (*(__int64 (**)(__int64, _QWORD, _QWORD*))(*(_QWORD*)v15 + 144LL))(
      v15, 0, v17);
}

__int64 TaskPassNodes_bb1410(__int64 a1, _QWORD** a2, __int64 a3)
{
  _QWORD* v4;
  __int64* v7;
  __int64 result;

  v4 = *a2;
  v4[1] = ResourceBuilder_b5a4b0(a3, *(_QWORD*)(**(_QWORD**)(a1 + 8) + 8LL));
  *v4 = GameRoutine_b48f90(a3, *(_QWORD*)(**(_QWORD**)(a1 + 8) + 56LL));
  v4[2] = GameRoutine_b4a3f0(a3, *(_QWORD*)(**(_QWORD**)(a1 + 8) + 504LL));
  v4[3] = GameRoutine_b4a3f0(a3, *(_QWORD*)(**(_QWORD**)(a1 + 8) + 520LL));
  v4[4] = GameRoutine_b4a3f0(a3, *(_QWORD*)(**(_QWORD**)(a1 + 8) + 544LL));
  v7 = a2[1];
  result = GameRoutine_b48e70(a3, **(_QWORD**)(a1 + 16));
  *v7 = result;
  return result;
}

__int64 TaskPassNodes_bb1ac0(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD* v4;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  __int64 result;

  v4 = *(_QWORD**)a2;
  v6 = **(_QWORD***)(a1 + 16);
  v7 = **(_QWORD**)(a1 + 24);
  v8 = v6[1];
  v9 = v6[65];
  v10 = v6[66];
  *v4 = GameRoutine_b4a3f0(a3, v6[63]);
  v4[1] = GameRoutine_b4a3f0(a3, v9);
  v4[2] = GameRoutine_b4a3f0(a3, v10);
  v11 = *(_QWORD**)(a2 + 8);
  *v11 = GameRoutine_b48e70(a3, v7);
  result = GameRoutine_b4a510(a3, v8);
  v11[1] = result;
  return result;
}

__int64 TaskPassNodes_bb1c70(__int64 a1, __int64 a2, __int64* a3)
{
  _QWORD* v3;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  _QWORD* v8;
  _QWORD* v9;
  struct {
    _QWORD v11[2];
    int v12;
  } v11_;

  v3 = *(_QWORD**)(a1 + 8);
  v11_.v12 = 0;
  v5 = v3[23];
  v6 = (_QWORD*)(*v3 + 13304LL);
  v7 = v3[5];
  v8 = *(_QWORD**)(a2 + 8);
  if (*(_BYTE*)(*v3 + 16700LL) != 0) {
    v6 = (_QWORD*)(*(_QWORD*)(*v3 + 16672LL) + 24LL);
  }
  v9 = *(_QWORD**)a2;
  v11_.v11[0] = *v6;
  v11_.v11[1] = v7;
  return gfxa_TaskDecal_Impl_draw(v5, v9, v8, a3, (unsigned int*)v11_.v11);
}

__int64 TaskPassNodes_bb26e0(__int64 a1, _QWORD** a2, __int64 a3)
{
  _QWORD* v4;
  _QWORD* v7;
  __int64* v8;
  __int64* v9;
  __int64 v10;
  __int64* v11;
  __int64* v12;
  __int64 v13;
  __int64* v14;
  __int64 result;

  v4 = *a2;
  *v4 = GameRoutine_b48f90(a3, *(_QWORD*)(**(_QWORD**)(a1 + 8) + 40LL));
  v4[1] = GameRoutine_b48f90(a3, *(_QWORD*)(**(_QWORD**)(a1 + 8) + 48LL));
  v4[2] = GameRoutine_b48f90(a3, *(_QWORD*)(**(_QWORD**)(a1 + 8) + 56LL));
  v4[3] = GameRoutine_b48f90(a3, *(_QWORD*)(**(_QWORD**)(a1 + 8) + 64LL));
  v4[4] = GameRoutine_b48f90(a3, *(_QWORD*)(**(_QWORD**)(a1 + 8) + 72LL));
  v4[5] = ResourceBuilder_b5a4b0(a3, *(_QWORD*)(**(_QWORD**)(a1 + 8) + 8LL));
  v4[6] = GameRoutine_b48f90(a3, *(_QWORD*)(**(_QWORD**)(a1 + 8) + 104LL));
  v4[7] = ResourceBuilder_b5a4b0(a3, *(_QWORD*)(**(_QWORD**)(a1 + 8) + 136LL));
  v4[8] = ResourceBuilder_b5a4b0(a3, *(_QWORD*)(**(_QWORD**)(a1 + 8) + 144LL));
  v4[9] = ResourceBuilder_b5a4b0(a3, *(_QWORD*)(**(_QWORD**)(a1 + 8) + 152LL));
  v4[10] = ResourceBuilder_b5a4b0(a3, *(_QWORD*)(**(_QWORD**)(a1 + 8) + 160LL));
  v4[11] = ResourceBuilder_b5a4b0(a3, *(_QWORD*)(**(_QWORD**)(a1 + 8) + 168LL));
  v4[12] = GameRoutine_b48f90(a3, **(_QWORD**)(a1 + 16));
  v4[13] = GameRoutine_b4a3f0(a3, *(_QWORD*)(**(_QWORD**)(a1 + 8) + 504LL));
  v4[14] = GameRoutine_b4a3f0(a3, *(_QWORD*)(**(_QWORD**)(a1 + 8) + 520LL));
  v4[15] = GameRoutine_b4a3f0(a3, *(_QWORD*)(**(_QWORD**)(a1 + 8) + 544LL));
  v4[17] = GameRoutine_b4f100(a3, *(_QWORD*)(**(_QWORD**)(a1 + 8) + 600LL));
  v4[18] = GameRoutine_b4f100(a3, *(_QWORD*)(**(_QWORD**)(a1 + 8) + 616LL));
  v4[19] = GameRoutine_b4f220(a3, *(_QWORD*)(**(_QWORD**)(a1 + 8) + 632LL));
  v4[20] = GameRoutine_b4a3f0(a3, *(_QWORD*)(**(_QWORD**)(a1 + 8) + 640LL));
  v7 = **(_QWORD***)(a1 + 8);
  v8 = (__int64*)v7[48];
  v9 = (__int64*)v7[49];
  if (v8 != v9) {
    do {
      v10 = *v8++;
      ResourceBuilder_b5a4b0(a3, v10);
    } while (v8 != v9);
    v7 = **(_QWORD***)(a1 + 8);
  }
  v11 = (__int64*)v7[51];
  v12 = (__int64*)v7[52];
  if (v11 != v12) {
    do {
      v13 = *v11++;
      ResourceBuilder_b5a4b0(a3, v13);
    } while (v11 != v12);
    v7 = **(_QWORD***)(a1 + 8);
  }
  v14 = a2[1];
  result = GameRoutine_b48e70(a3, *v7);
  *v14 = result;
  return result;
}

__int64 TaskPassNodes_bb2ee0(__int64 a1, __int64* a2, __int64* a3)
{
  __int64* v3;
  __int64 v4;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  float v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  float v17;
  float v18;
  int v19;
  float v20;
  unsigned __int64 i;
  _DWORD v23[6];
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  int v31;
  int v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;

  v4 = *(_QWORD*)(a1 + 8);
  v3 = *(__int64**)(a1 + 16);
  v36 = 0;
  v37 = 0;
  v34 = 0;
  v35 = 0;
  v33 = 0;
  v7 = *a2;
  v8 = *(unsigned int*)(*(_QWORD*)v4 + 104LL);
  v31 = *(_DWORD*)(*(_QWORD*)v4 + 104LL);
  v32 = 5;
  v9 = *v3;
  v10 = *(_QWORD*)(v9 + 16616);
  v11 = *(_QWORD*)(v9 + 16632);
  if (v10 != 0) {
    v11 = v10;
  }
  v12 = (float)*(int*)(v11 + 16);
  v23[0] = (int)(float)(*(float*)(v11 + 20) * v12);
  v13 = **(_QWORD***)(a1 + 24);
  v14 = v13[71];
  v15 = v13[65];
  v16 = v13[67];
  v24 = v13[70];
  v17 = *(float*)(v11 + 24);
  v25 = v14;
  LODWORD(v14) = (int)(float)(*(float*)(v11 + 28) * v12);
  v23[1] = (int)(float)(v17 * v12);
  v23[2] = v14;
  v26 = v13[72];
  v18 = *(float*)(v11 + 32);
  v27 = v13[73];
  v19 = (int)(float)(v18 * v12);
  v20 = *(float*)(v11 + 36);
  v30 = v16;
  v23[3] = v19;
  v23[4] = (int)(float)(v20 * v12);
  v28 = v13[74];
  v29 = v15;
  if ((int)v8 >= 1) {
    for (i = 0; i < v8; ++i) {
      *(_QWORD*)(v7 + 8 * i + 24) =
          GameRoutine_b4a3f0(a3, *(_QWORD*)&v23[2 * i + 6]);
      *(_DWORD*)(v7 + 4 * i) = v23[i];
    }
  }
  *(_DWORD*)(v7 + 80) = v8;
  *(_QWORD*)(v7 + 64) = GameRoutine_b4a3f0(a3, v15);
  if (v16 != 0) {
    *(_QWORD*)(v7 + 72) = GameRoutine_b4a3f0(a3, v16);
  }
  return ResourceBuilder_b71cc0(a2[1], a3, (__int64)v23);
}

__int64 TaskPassNodes_bb3a20(__int64 a1, _QWORD** a2, __int64* a3)
{
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 (**v10)(void);
  unsigned int (**v11)(__int64);
  _UNKNOWN** v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 (*v17)(void);
  __int64 v18;
  int v19;
  unsigned int (*v20)(__int64);
  struct {
    _QWORD v22[2];
    __int64 v23;
  } v22_;
  struct {
    __int64 v24;
    __int64 v25;
    __int64 v26;
  } v24_;

  v3 = *a3;
  v5 = (*(__int64 (**)(_QWORD))(*(_QWORD*)**a2 + 16LL))(**a2);
  v6 = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 40LL))(v5);
  v7 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2[1] + 16LL))(*a2[1]);
  v8 = (*(__int64 (**)(__int64))(*(_QWORD*)v7 + 40LL))(v7);
  LODWORD(v24_.v25) = 0;
  v24_.v24 = 0;
  v9 = v8;
  v10 = (__int64 (**)(void))GameData_212e778[0];
  HIDWORD(v24_.v25) = (*(__int64 (**)(void))GameData_212e778[0])();
  v11 = (unsigned int (**)(__int64))GameData_212e780;
  v24_.v26 = ((unsigned int (*)(__int64))*GameData_212e780)(v9) | 0x100000000LL;
  v22_.v22[0] = 0;
  v22_.v22[1] = v24_.v25;
  v22_.v23 = v24_.v26;
  v12 = GameData_212e870[0];
  (*(void (**)(__int64, __int64, _QWORD, _QWORD*, __int64, _QWORD, __int64*,
               _QWORD))GameData_212e870[0])(v3 + 8, v6, 0, v22_.v22, v9, 0,
                                            &v24_.v24, 0);
  v13 = (*(__int64 (**)(_QWORD))(*(_QWORD*)(*a2)[1] + 16LL))((*a2)[1]);
  v14 = (*(__int64 (**)(__int64))(*(_QWORD*)v13 + 40LL))(v13);
  v15 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[1][1] + 16LL))(a2[1][1]);
  v16 = (*(__int64 (**)(__int64))(*(_QWORD*)v15 + 40LL))(v15);
  v17 = *v10;
  v18 = v16;
  LODWORD(v24_.v25) = 0;
  v24_.v24 = 0;
  v19 = v17();
  v20 = *v11;
  HIDWORD(v24_.v25) = v19;
  v24_.v26 = v20(v18) | 0x100000000LL;
  v22_.v22[0] = v24_.v24;
  v22_.v22[1] = v24_.v25;
  v22_.v23 = v24_.v26;
  return ((__int64 (*)(__int64, __int64, _QWORD, _QWORD*, __int64, _QWORD,
                       __int64*, _QWORD))*v12)(v3 + 8, v14, 0, v22_.v22, v18, 0,
                                               &v24_.v24, 0);
}

__int64 TaskPassNodes_bb4400(__int64 a1, __int64 a2, _QWORD* a3)
{

#pragma clang fp contract(off)
  __int64 v3;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;

  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v20 = COERCE_AS(__typeof__(v20),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v3 = *a3;
  v6 = (*(__int64 (**)(_QWORD))(***(_QWORD***)(a2 + 8) + 16LL))(
      **(_QWORD**)(a2 + 8)),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v20 = COERCE_AS(__typeof__(v20),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v7 = (*(__int64 (**)(__int64))(*(_QWORD*)v6 + 32LL))(v6),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v20 = COERCE_AS(__typeof__(v20),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, __int64))(*(_QWORD*)v3 + 112LL))(v3, v7, v8),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
      *(_QWORD*)*a3 + 72LL))(*a3, 0, 0, 1, 1),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
      *(_QWORD*)*a3 + 88LL))(*a3, 0, 0, 1, 1),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, _QWORD, _QWORD, float))(*(_QWORD*)*a3 + 152LL))(
      *a3, 0, 0, 0x1.0000000000000p+0f),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v9 = *a3;
  v10 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(*(_QWORD*)(a2 + 8) + 8LL) +
                                 16LL))(*(_QWORD*)(*(_QWORD*)(a2 + 8) + 8LL)),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v20 = COERCE_AS(__typeof__(v20),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v11 = (*(__int64 (**)(__int64))(*(_QWORD*)v10 + 32LL))(v10),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v20 = COERCE_AS(__typeof__(v20),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, __int64))(*(_QWORD*)v9 + 112LL))(v9, v11, v12),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
      *(_QWORD*)*a3 + 72LL))(*a3, 0, 0, 1, 1),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
      *(_QWORD*)*a3 + 88LL))(*a3, 0, 0, 1, 1),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, _QWORD, _QWORD, float))(*(_QWORD*)*a3 + 152LL))(
      *a3, 0, 0, 0x1.0000000000000p+0f),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v13 = *a3;
  v14 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(*(_QWORD*)(a2 + 8) + 16LL) +
                                 16LL))(*(_QWORD*)(*(_QWORD*)(a2 + 8) + 16LL)),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v20 = COERCE_AS(__typeof__(v20),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v15 = (*(__int64 (**)(__int64))(*(_QWORD*)v14 + 32LL))(v14),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v20 = COERCE_AS(__typeof__(v20),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, __int64))(*(_QWORD*)v13 + 112LL))(v13, v15,
                                                                   v16),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
      *(_QWORD*)*a3 + 72LL))(*a3, 0, 0, 1, 1),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
      *(_QWORD*)*a3 + 88LL))(*a3, 0, 0, 1, 1),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, _QWORD, _QWORD, float))(*(_QWORD*)*a3 + 152LL))(
      *a3, 0, 0, 0x1.0000000000000p+0f),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v17 = *a3;
  v18 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(*(_QWORD*)(a2 + 8) + 24LL) +
                                 16LL))(*(_QWORD*)(*(_QWORD*)(a2 + 8) + 24LL)),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v20 = COERCE_AS(__typeof__(v20),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v19 = (*(__int64 (**)(__int64))(*(_QWORD*)v18 + 32LL))(v18),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v20 = COERCE_AS(__typeof__(v20),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, __int64))(*(_QWORD*)v17 + 112LL))(v17, v19,
                                                                   v20),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
      *(_QWORD*)*a3 + 72LL))(*a3, 0, 0, 1, 1),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
      *(_QWORD*)*a3 + 88LL))(*a3, 0, 0, 1, 1),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, _QWORD, _QWORD, float))(*(_QWORD*)*a3 + 152LL))(
      *a3, 0, 0, 0x1.0000000000000p+0f),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v21 = *a3;
  v22 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(*(_QWORD*)(a2 + 8) + 32LL) +
                                 16LL))(*(_QWORD*)(*(_QWORD*)(a2 + 8) + 32LL)),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v20 = COERCE_AS(__typeof__(v20),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v23 = (*(__int64 (**)(__int64))(*(_QWORD*)v22 + 32LL))(v22),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v20 = COERCE_AS(__typeof__(v20),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, __int64))(*(_QWORD*)v21 + 112LL))(v21, v23,
                                                                   v24),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
      *(_QWORD*)*a3 + 72LL))(*a3, 0, 0, 1, 1),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
      *(_QWORD*)*a3 + 88LL))(*a3, 0, 0, 1, 1),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, _QWORD, _QWORD, float))(*(_QWORD*)*a3 + 152LL))(
      *a3, 0, 0, 0x1.0000000000000p+0f),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v25 = *a3;
  v26 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(*(_QWORD*)(a2 + 8) + 40LL) +
                                 16LL))(*(_QWORD*)(*(_QWORD*)(a2 + 8) + 40LL)),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v20 = COERCE_AS(__typeof__(v20),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v27 = (*(__int64 (**)(__int64))(*(_QWORD*)v26 + 32LL))(v26),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v20 = COERCE_AS(__typeof__(v20),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, __int64))(*(_QWORD*)v25 + 112LL))(v25, v27,
                                                                   v28),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
      *(_QWORD*)*a3 + 72LL))(*a3, 0, 0, 1, 1),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
      *(_QWORD*)*a3 + 88LL))(*a3, 0, 0, 1, 1),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, _QWORD, _QWORD, float))(*(_QWORD*)*a3 + 152LL))(
      *a3, 0, 0, 0x1.0000000000000p+0f),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v29 = *(_QWORD*)(a2 + 8);
  v30 = *a3;
  v31 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v29 + 48) + 16LL))(
      *(_QWORD*)(v29 + 48)),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v20 = COERCE_AS(__typeof__(v20),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v32 = (*(__int64 (**)(__int64))(*(_QWORD*)v31 + 32LL))(v31),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v20 = COERCE_AS(__typeof__(v20),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, __int64))(*(_QWORD*)v30 + 112LL))(v30, v32,
                                                                   v33),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
      *(_QWORD*)*a3 + 72LL))(*a3, 0, 0, 1, 1),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(
      *(_QWORD*)*a3 + 88LL))(*a3, 0, 0, 1, 1),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  return (*(__int64 (**)(_QWORD, _QWORD, _QWORD, float))(
      *(_QWORD*)*a3 + 152LL))(*a3, 0, 0, 0x1.0000000000000p+0f);
}

__int64 TaskPassNodes_bb4bc0(__int64 result, __int64 a2, __int64 a3)
{
  _QWORD* v4;
  __int64* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64* i;
  __int64 v11;

  v4 = **(_QWORD***)(result + 8);
  v5 = (__int64*)v4[48];
  v6 = (__int64*)v4[49];
  if (v5 != v6) {
    v7 = result;
    do {
      v8 = *v5++;
      result = GameRoutine_b4a510(a3, v8);
    } while (v5 != v6);
    v4 = **(_QWORD***)(v7 + 8);
  }
  v9 = (__int64*)v4[51];
  for (i = (__int64*)v4[52]; v9 != i; result = GameRoutine_b4a510(a3, v11)) {
    v11 = *v9++;
  }
  return result;
}

__int64 TaskPassNodes_bb51a0(__int64 result, __int64* a2, __int64 a3)
{

#pragma clang fp contract(off)
  __int64* v3;
  __int64 v4;
  __int64 v6;
  __int64 v7;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64 v13;
  _QWORD* v14;
  float v15;
  _DWORD* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  _QWORD* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  _QWORD* v28;
  __int64 v29;
  struct {
    _DWORD v31[16];
    int v32;
  } v31_;
  struct {
    __int64 v33;
    __int64 v34;
    __int64 v35;
    __int64 v36;
    __int64 v37;
  } v33_;

  v4 = *(_QWORD*)(result + 8);
  v3 = *(__int64**)(result + 16);
  memset(&v31_.v31[6], 0, 40);
  LODWORD(v6) = *(_DWORD*)(*(_QWORD*)v4 + 104LL);
  v31_.v32 = v6;
  if ((int)v6 < 1) {
    v19 = *a2;
    v24 = **(_QWORD***)(result + 24);
    v25 = v24[20];
    v33_.v35 = v24[19];
    v33_.v36 = v25;
    v33_.v37 = v24[21];
    v26 = v24[18];
    v33_.v33 = v24[17];
    v33_.v34 = v26;
    goto LABEL_14;
  }
  v7 = *v3;
  v9 = 0;
  v10 = *(_QWORD*)(v7 + 16616);
  v11 = *(_QWORD*)(v7 + 16632);
  if (v10 != 0) {
    v11 = v10;
  }
  v12 = *(_DWORD*)(v11 + 16);
  v13 = v11 + 20;
  v14 = **(_QWORD***)(result + 24);
  v15 = (float)v12;
  do {
    v16 = &v31_.v31[2 * v9];
    v31_.v31[v9] = (int)(float)(*(float*)(v13 + 4 * v9) * v15);
    v17 = v9++;
    *((_QWORD*)v16 + 3) = v14[v17 + 70];
    v6 = v31_.v32;
  } while (v9 < v31_.v32);
  v18 = v14[20];
  v19 = *a2;
  v33_.v35 = v14[19];
  v33_.v36 = v18;
  v33_.v37 = v14[21];
  v20 = v14[18];
  v33_.v33 = v14[17];
  v33_.v34 = v20;
  if (v31_.v32 <= 0) {
  LABEL_14:
    *(_DWORD*)(v19 + 64) = v6;
    v23 = a2[1];
    if ((unsigned int)v6 > 4) {
      return result;
    }
    goto LABEL_15;
  }
  v21 = 0;
  do {
    *(_QWORD*)(v19 + 8 * v21 + 24) =
        GameRoutine_b4a3f0_alt1(a3, *(_QWORD*)&v31_.v31[2 * v21 + 6]);
    *(_DWORD*)(v19 + 4 * v21) = v31_.v31[v21];
    ++v21;
  } while (v6 != v21);
  *(_DWORD*)(v19 + 64) = v6;
  v22 = 0;
  v23 = a2[1];
  do {
    result = GameRoutine_b4a510_alt1(a3, *(__int64*)((char*)&v33_.v33 + v22));
    *(_QWORD*)(v23 + v22) = result;
    v22 += 8;
  } while (8 * v6 != v22);
  if ((unsigned int)v6 <= 4) {
  LABEL_15:
    v27 = (unsigned int)v6 + 1LL;
    v28 = (_QWORD*)(v23 + 8LL * (unsigned int)v6);
    v29 = *(&v33_.v33 + (int)v6 - 1);
    do {
      *v28++ = v29;
    } while ((_DWORD)v27++ != 5);
  }
  return result;
}

__int64 TaskPassNodes_bb5480(__int64 a1, __int64* a2, _QWORD* a3)
{
  __int64 v3;
  __int64 v4;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64* v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  char v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  _QWORD v24[5];
  _QWORD v25[2];
  int v26;
  char v27;

  v3 = *(_QWORD*)(a1 + 8);
  v4 = a2[3];
  v25[0] = 0;
  v25[1] = 0;
  memset(&v24[2], 0, 24);
  v6 = *(_DWORD*)(v4 + 104);
  v24[0] = *(_QWORD*)v3;
  if (v6 >= 1) {
    v7 = *(_QWORD*)(v3 + 56);
    v8 = v6 & 7;
    if ((unsigned int)v6 < 8) {
      v9 = 0;
      if (v8 == 0) {
        goto LABEL_10;
      }
      goto LABEL_8;
    }
    v10 = (_QWORD*)(v7 + 64);
    v11 = 0;
    v12 = -(__int64)(v6 & 0x7FFFFFF8);
    v13 = v25;
    do {
      v11 -= 8;
      *(v13 - 3) = *(v10 - 8);
      *(v13 - 2) = *(v10 - 6);
      *(v13 - 1) = *(v10 - 4);
      *v13 = *(v10 - 2);
      v13[1] = *v10;
      v13[2] = v10[2];
      v13[3] = v10[4];
      v14 = v10[6];
      v10 += 16;
      v13[4] = v14;
      v13 += 8;
    } while (v12 != v11);
    v9 = -v11;
    if (v8 != 0) {
    LABEL_8:
      v15 = (__int64*)(v7 + 16 * v9);
      v16 = &v24[v9 + 2];
      do {
        v17 = *v15;
        v15 += 2;
        --v8;
        *v16++ = v17;
      } while (v8 != 0);
    }
  }

LABEL_10:
  v18 = *(_QWORD*)(v4 + 96);
  v19 = *(_BYTE*)(v4 + 124);
  v20 = *(_QWORD*)(v3 + 152);
  v24[1] = v18;
  LODWORD(v18) = *(_DWORD*)(v3 + 140);
  v22 = *a2;
  v21 = a2[1];
  v27 = v19;
  v26 = v18;
  return ResourceBuilder_b538b0(v20, v22, v21, a3, (__int64)v24);
}

__int64 TaskPassNodes_bb58f0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;

  v3 = **(_QWORD**)(a1 + 8);
  v4 = *(_QWORD*)(v3 + 16616);
  v5 = *(_QWORD*)(v3 + 16632);
  if (v4 != 0) {
    v5 = v4;
  }
  LODWORD(v12) = vcvts_n_s32_f32(*(float*)(v5 + 48), 0xBu);
  HIDWORD(v12) = (int)v12 / 2;
  LODWORD(v13) = (int)v12 / 2;
  HIDWORD(v13) = (int)v12 / 2;
  LODWORD(v14) = (int)v12 / 2;
  HIDWORD(v14) = (int)v12 / 2;
  LODWORD(v15) = (int)v12 / 4;
  HIDWORD(v15) = (int)v12 / 4;
  LODWORD(v16) = (int)v12 / 4;
  HIDWORD(v16) = (int)v12 / 4;
  LODWORD(v17) = (int)v12 / 4;
  HIDWORD(v17) = (int)v12 / 4;
  LODWORD(v18) = (int)v12 / 4;
  HIDWORD(v18) = (int)v12 / 4;
  LODWORD(v19) = (int)v12 / 4;
  HIDWORD(v19) = (int)v12 / 4;
  v6 = *(_QWORD**)a2;
  v7 = v15;
  v6[2] = v14;
  v6[3] = v7;
  v8 = v13;
  *v6 = v12;
  v6[1] = v8;
  v9 = v17;
  v6[4] = v16;
  v6[5] = v9;
  v10 = v19;
  v6[6] = v18;
  v6[7] = v10;
  return GameRoutine_b52720(*(_QWORD*)(a2 + 8), a3, (__int64)&v12);
}

__int64 TaskPassNodes_bb5aa0(__int64 a1, __int64 a2, _QWORD* a3)
{
  __int64* v3;
  __int64 v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  struct {
    __int64 v11;
    int v12;
    char gap12_[4];
    __int64 v13;
    __int64 v14;
  } v11_;

  v3 = *(__int64**)(a1 + 8);
  v4 = *(_QWORD*)(a1 + 16);
  v6 = *(_QWORD*)(a2 + 8);
  v7 = v3[24];
  v8 = v3[1];
  v11_.v11 = *v3;
  v9 = *((_DWORD*)v3 + 35);
  v11_.v13 = v4;
  v11_.v14 = v8;
  v11_.v12 = v9;
  return gfxa_TaskCharaSelfShadow_Impl_draw(v7, a2, v6, a3, (__int64)&v11_.v11);
}

__int64 TaskPassNodes_bbc570(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  unsigned int v4;
  unsigned int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 result;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  _DWORD v25[4];
  __int64 v26;
  __int64 v27;

  v1 = *(_QWORD*)(a1 + 8);
  *(_BYTE*)(a1 + 1664) = 1;
  *(_DWORD*)(a1 + 1676) = 3;
  if ((*(_BYTE*)(v1 + 16700) & 1) != 0) {
    v3 = *(_QWORD*)(v1 + 16672);
    v4 = *(_DWORD*)(v3 + 24);
    v5 = *(_DWORD*)(v3 + 28);
  }
  else {
    v4 = *(_DWORD*)(v1 + 13304);
    v5 = *(_DWORD*)(v1 + 13308);
  }
  v21 = __PAIR64__(v5, v4);
  *(_BYTE*)(a1 + 1667) = 0;
  GameRoutine_bb8af0(a1, (int*)&v21);
  v6 = v21;
  TaskPassNodes_ba3910(*(_QWORD*)(a1 + 1552), v21);
  v7 = *(_QWORD*)(a1 + 1520);
  v24 = 0x100000001LL;
  memset(v25, 0, 11);
  v23 = v6;
  v8 = *(_QWORD*)(v7 + 184);
  v25[1] = 13;
  v9 = *(_QWORD*)(*(_QWORD*)v8 + 552LL);
  v26 = *(_QWORD*)(*(_QWORD*)v8 + 360LL);
  v10 = *(_QWORD*)(v9 + 16);
  LOBYTE(v25[2]) = 1;
  v27 = v10;
  GameRoutine_53c20((void*)(&v22), &v23);
  v11 = v22;
  v12 = *(_QWORD*)(v8 + 8);
  v22 = 0;
  *(_QWORD*)(v8 + 8) = v11;
  if (v12 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 8LL))(v12);
    v13 = v22;
    v22 = 0;
    if (v13 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v13 + 8LL))(v13);
    }
  }
  *(_BYTE*)(v8 + 1032) = 1;
  v24 = 0x100000001LL;
  memset(v25, 0, 11);
  v14 = 0;
  v15 = *(__int64**)(a1 + 1568);
  v16 = *v15;
  v17 = *(unsigned int*)(*v15 + 13240);
  if ((unsigned int)v17 <= 6) {
    v14 = GameData_1b7bcc8[v17];
  }
  v25[1] = v14;
  v23 = *(_QWORD*)(v16 + 13312);
  v18 = *(_QWORD*)(game_g_frame_clock + 552);
  v26 = *(_QWORD*)(game_g_frame_clock + 360);
  v27 = *(_QWORD*)(v18 + 16);
  LOBYTE(v25[2]) = 1;
  GameRoutine_53c20((void*)(&v22), &v23);
  v19 = v22;
  result = v15[6];
  v22 = 0;
  v15[6] = v19;
  if (result != 0) {
    (*(void (**)(__int64))(*(_QWORD*)result + 8LL))(result);
    result = v22;
    v22 = 0;
    if (result != 0) {
      result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
    }
  }
  *((_BYTE*)v15 + 56) = 0;
  return result;
}

__int64 TaskPassNodes_bbd3f0(__int64 a1, __int64 a2, _QWORD* a3)
{
  return (*(__int64 (**)(__int64, _QWORD))GameData_212e938)(*a3 + 8LL, 0);
}

__int64 TaskPassNodes_bbd840(__int64 result)
{
  __int64 v1;
  __int64 v2;

  v1 = *(_QWORD*)(result + 24);
  if (v1 != 0) {
    v2 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v2 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v2, v1);
  }
  return result;
}

__int64 TaskPassNodes_bbd920(__int64 result)
{
  __int64* v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v1 = *(__int64**)(result + 24);
  if (v1 != nullptr) {
    v2 = *v1;
    v3 = fw_memory_g_heap_manager_ptr;
    if (*v1 != 0) {
      v4 = v1[1];
      if (v2 == v4) {
        goto LABEL_11;
      }
      do {
        v5 = *(_QWORD*)(v4 - 72);
        if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
          std___1___shared_weak_count___release_weak(v5);
        }
        v4 -= 80;
      } while (v4 != v2);
      v6 = *v1;
      v1[1] = v2;
      v2 = v6;
      if (v6 != 0) {
      LABEL_11:
        v7 = 128;
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
          v7 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v7, v2);
      }
    }
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v8 = 56;
    }
    return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v8, v1);
  }
  return result;
}

void TaskPassNodes_bbdb10(__int64 a1, __int64 a2)
{
  *(_WORD*)a2 = 514;
  *(_BYTE*)(a2 + 2) = 2;
  *(_WORD*)(a2 + 6) = 42;
}

void TaskPassNodes_bbdc00(__int64 a1, __int64 a2)
{
  *(_WORD*)a2 = 514;
  *(_BYTE*)(a2 + 2) = 2;
  *(_WORD*)(a2 + 6) = 21;
}

void TaskPassNodes_bbdcf0(__int64 a1, __int64 a2)
{
  *(_BYTE*)(a2 + 4) = 0;
  *(_WORD*)a2 = 771;
  *(_WORD*)(a2 + 6) = 42;
}

__int64 TaskPassNodes_bbdfa0(__int64 a1, __int64** a2, __int64 a3)
{
  __int64 v6;
  __int64 v7;
  int v8;
  __int64* v9;
  __int64* v10;
  __int64 v11;
  __int64 result;
  struct {
    __int64 v13[3];
    char v14;
    char gap25_[3];
    int v15;
  } v13_;

  if (*(_BYTE*)(a1 + 8) == 1) {
    v6 = *(_QWORD*)(a1 + 16);
    v13_.v15 = 0;
    v13_.v13[2] = 0x100000001LL;
    v13_.v14 = 1;
    v7 = *(_QWORD*)(v6 + 8);
    v8 = *(unsigned __int8*)(v7 + 16700);
    v9 = (__int64*)(v7 + 13304);
    v10 = (__int64*)(*(_QWORD*)(v7 + 16672) + 24LL);
    if (v8 == 0) {
      v10 = v9;
    }
    v11 = *v10;
    v13_.v13[0] = 0x1400000000LL;
    v13_.v13[1] = v11;
    *a2[1] = GameRoutine_b494f0_alt1(a3, "3DFinalDst", v13_.v13);
  }
  **a2 = GameRoutine_b48f90_alt1(a3, ***(_QWORD***)(a1 + 24));
  result = ResourceBuilder_b5a4b0(a3, *(_QWORD*)(**(_QWORD**)(a1 + 24) + 8LL));
  (*a2)[1] = result;
  return result;
}

__int64 TaskPassNodes_bbe570(__int64 a1, __int64** a2, __int64 a3)
{
  __int64* v4;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  int v11;
  __int64 v12;
  __int64 result;
  __int64* v14;
  struct {
    __int64 v15;
    int v16;
    int v17;
    __int64 v18;
    char v19;
    char gap25_[3];
    int v20;
  } v15_;

  v4 = *a2;
  v6 = **(__int64***)(a1 + 8);
  v7 = *v6;
  v8 = v6[1];
  v9 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 8LL);
  v10 = *(_DWORD*)(v9 + 13312);
  v11 = *(_DWORD*)(v9 + 13316);
  v12 = *(_QWORD*)(v9 + 456);
  *v4 = GameRoutine_b48f90_alt1(a3, v7);
  result = ResourceBuilder_b5a4b0(a3, v8);
  v4[1] = result;
  v14 = a2[1];
  if (v12 != 0) {
    v14[1] = v12;
  }
  else {
    v15_.v20 = 0;
    v15_.v16 = v10;
    v15_.v17 = v11;
    v15_.v15 = 0x1400000000LL;
    v15_.v18 = 0x100000001LL;
    v15_.v19 = 1;
    result = GameRoutine_b5a5d0_alt1(a3, "NISOutput", &v15_.v15);
    *v14 = result;
  }
  return result;
}

__int64 TaskPassNodes_bbeaf0(__int64 a1, __int64** a2, __int64 a3)
{
  __int64* v3;
  __int64 result;

  v3 = *a2;
  result = GameRoutine_b48f90(a3, ***(_QWORD***)(a1 + 8));
  *v3 = result;
  return result;
}

__int64 TaskPassNodes_bbec30(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  int v6;
  bool v7;
  int v8;
  float v9;
  __int64 v10;

  v2 = *(_QWORD*)(a1 + 8);
  (*(void (**)(_QWORD))(**(_QWORD**)(*(_QWORD*)(v2 + 8) + 456LL) + 32LL))(
      *(_QWORD*)(*(_QWORD*)(v2 + 8) + 456LL));
  v4 = *(_QWORD*)(v2 + 1512);
  v5 = *a2;
  v6 = *(_DWORD*)(v4 + 168);
  v7 = v6 < -1;
  v8 = ((_BYTE)v6 + 1) & 1;
  v9 = *(float*)&GameData_21675cc / *(float*)&GameData_21675c0;
  if (v7) {
    v8 = -v8;
  }
  *(_DWORD*)(v4 + 168) = v8;
  v10 = *(_QWORD*)(v4 + 8LL * v8 + 152);
  *(float*)(*(__int64 (**)(__int64))(*(_QWORD*)v10 + 56LL))(v10) = v9;
  (*(void (**)(__int64))(*(_QWORD*)v10 + 64LL))(v10);
  return ResourceBuilder_b49250(v4, v5);
}

__int64 TaskPassNodes_bbef70(__int64 result, __int64 a2, __int64 a3)
{
  __int64 v3;

  if ((*(_BYTE*)(result + 32) & 1) != 0) {
    **(_BYTE**)(result + 48) = 0;
    *(_QWORD*)(result + 40) = 0;
  }
  else {
    *(_WORD*)(result + 32) = 0;
  }
  *(_BYTE*)(result + 60) = 0;
  *(_DWORD*)(result + 56) = 0;
  *(_QWORD*)(result + 64) = a2;
  *(_QWORD*)(result + 72) = a3;
  if (a2 != 0) {
    *(_BYTE*)(result + 80) = *(_BYTE*)(a2 + 48);
  }
  if (*(_BYTE*)(result + 84) != 0) {
    if (a2 != 0) {
      return GameRoutine_60a020();
    }
  }
  else {
    v3 = result;
    GameRoutine_191eec0(result + 81);
    result = v3;
    if (*(_QWORD*)(v3 + 64) != 0) {
      return GameRoutine_60a020();
    }
  }
  if ((*(_BYTE*)result & 1) != 0) {
    **(_BYTE**)(result + 16) = 0;
    *(_QWORD*)(result + 8) = 0;
  }
  else {
    *(_WORD*)result = 0;
  }
  return result;
}

__int64 TaskPassNodes_bbf550(__int64 result, unsigned __int8* a2)
{
  __int64 v2;
  unsigned __int64 v4;
  __int64 v5;
  __int64 v6;
  bool v7;
  unsigned __int64 v8;
  unsigned __int8* v9;
  unsigned __int64 v10;
  int v11;
  char v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  bool v16;
  unsigned __int64 v17;
  unsigned __int8* v18;
  unsigned __int64 v19;
  __int64 v20;

  v2 = result;
  if (*((_QWORD*)a2 + 8) == 0) {
    if ((*(_BYTE*)result & 1) != 0) {
      **(_BYTE**)(result + 16) = 0;
      *(_QWORD*)(result + 8) = 0;
      if ((*(_BYTE*)(result + 32) & 1) != 0) {
        goto LABEL_8;
      }
    }
    else {
      *(_WORD*)result = 0;
      if ((*(_BYTE*)(result + 32) & 1) != 0) {
      LABEL_8:
        **(_BYTE**)(result + 48) = 0;
        *(_QWORD*)(result + 40) = 0;
      LABEL_19:
        v11 = 1;
        *(_BYTE*)(result + 60) = 0;
        *(_DWORD*)(result + 56) = 0;
        *(_QWORD*)(result + 64) = 0;
        *(_QWORD*)(result + 72) = 0;
        *(_QWORD*)(result + 80) = 0;
        *(_QWORD*)(result + 88) = 0;
        *(_BYTE*)(result + 96) = 0;
        goto LABEL_33;
      }
    }
    *(_WORD*)(result + 32) = 0;
    goto LABEL_19;
  }
  if ((unsigned __int8*)result == a2) {
    *(_QWORD*)(result + 64) = *((_QWORD*)a2 + 8);
    *(_QWORD*)(result + 72) = *((_QWORD*)a2 + 9);
  }
  else {
    v4 = *a2;
    if ((*(_BYTE*)result & 1) != 0) {
      v7 = (v4 & 1) == 0;
      v8 = v4 >> 1;
      if (v7) {
        v9 = a2 + 1;
      }
      else {
        v9 = *((unsigned __int8**)a2 + 2);
      }
      if (v7) {
        v10 = v8;
      }
      else {
        v10 = *((_QWORD*)a2 + 1);
      }
      SpineModel_64dde0(result, v9, v10);
    }
    else if ((v4 & 1) != 0) {
      GameRoutine_64df20(result, *((_QWORD*)a2 + 2), *((_QWORD*)a2 + 1));
    }
    else {
      v5 = *(_QWORD*)a2;
      v6 = *((_QWORD*)a2 + 2);
      *(_QWORD*)(result + 8) = *((_QWORD*)a2 + 1);
      *(_QWORD*)(result + 16) = v6;
      *(_QWORD*)result = v5;
    }
    result = v2 + 32;
    v12 = *(_BYTE*)(v2 + 32);
    *(_QWORD*)(v2 + 64) = *((_QWORD*)a2 + 8);
    *(_QWORD*)(v2 + 72) = *((_QWORD*)a2 + 9);
    v13 = a2[32];
    if ((v12 & 1) != 0) {
      v16 = (v13 & 1) == 0;
      v17 = v13 >> 1;
      if (v16) {
        v18 = a2 + 33;
      }
      else {
        v18 = *((unsigned __int8**)a2 + 6);
      }
      if (v16) {
        v19 = v17;
      }
      else {
        v19 = *((_QWORD*)a2 + 5);
      }
      result = SpineModel_64dde0(result, v18, v19);
    }
    else if ((v13 & 1) != 0) {
      result =
          GameRoutine_64df20(result, *((_QWORD*)a2 + 6), *((_QWORD*)a2 + 5));
    }
    else {
      v14 = *((_QWORD*)a2 + 4);
      v15 = *((_QWORD*)a2 + 6);
      *(_QWORD*)(v2 + 40) = *((_QWORD*)a2 + 5);
      *(_QWORD*)(v2 + 48) = v15;
      *(_QWORD*)result = v14;
    }
  }
  *(_BYTE*)(v2 + 56) = a2[56];
  *(_BYTE*)(v2 + 57) = a2[57];
  *(_BYTE*)(v2 + 58) = a2[58];
  *(_BYTE*)(v2 + 59) = a2[59];
  *(_BYTE*)(v2 + 60) = a2[60];
  *(_BYTE*)(v2 + 80) = a2[80];
  v20 = *(_QWORD*)(a2 + 81);
  *(_QWORD*)(v2 + 89) = *(_QWORD*)(a2 + 89);
  *(_QWORD*)(v2 + 81) = v20;
  v11 = *((_DWORD*)a2 + 25);

LABEL_33:
  *(_DWORD*)(v2 + 100) = v11;
  return result;
}

__int64 TaskPassNodes_bc0b70(__int64 a1, __int64 a2, __int64* a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 (**v12)(__int64);
  __int64 (**v13)(__int64);
  int v14;
  __int64 (*v15)(__int64);
  __int64 result;
  struct {
    _QWORD v17[2];
    __int64 v18;
  } v17_;
  struct {
    __int64 v19;
    __int64 v20;
    __int64 v21;
  } v19_;

  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v3 = *(_QWORD*)(a1 + 8);
  v4 = *a3;
  v5 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(*(_QWORD*)v3 + 456LL) + 32LL))(
      *(_QWORD*)(*(_QWORD*)v3 + 456LL)),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v7 = v6;
  v8 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v3 + 48) + 32LL))(
      *(_QWORD*)(v3 + 48)),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  LODWORD(v19_.v20) = 0;
  v19_.v19 = 0;
  v9 = v8;
  v11 = v10;
  v12 = (__int64 (**)(__int64))GameData_212e778[0],
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  HIDWORD(v19_.v20) = (*(__int64 (**)(__int64))GameData_212e778[0])(v5),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v13 = (__int64 (**)(__int64))GameData_212e780,
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v19_.v21 = ((unsigned int (*)(__int64))*GameData_212e780)(v5) | 0x100000000LL,
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v17_.v17[0] = 0;
  v17_.v17[1] = v19_.v20;
  v17_.v18 = v19_.v21;
  v14 = (*v12)(v9);
  v15 = *v13;
  HIDWORD(v17_.v17[1]) = v14;
  LODWORD(v17_.v18) = v15(v9),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  result = (*(__int64 (**)(__int64, __int64, __int64, __int64*, __int64,
                           __int64, _QWORD*, _QWORD))GameData_212e870[0])(
      v4 + 8, v5, v7, &v19_.v19, v9, v11, v17_.v17, 0),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(_BYTE*)(v3 + 56) = 1;
  return result;
}

__int64 TaskPassNodes_bc10b0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4;
  __int64 v5;
  _QWORD v7[4];
  _QWORD* v8;

  v4 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL);
  v8 = v7;
  v7[0] = GameData_1fc7590;
  v7[1] = v4;
  GameRoutine_1992aa0(game_map_MapColorPalette_g_texture_archives, v7);
  if (v8 == v7) {
    v5 = 32;
    goto LABEL_5;
  }
  if (v8 != nullptr) {
    v5 = 40;
  LABEL_5:
    (*(void (**)(__int64))(*v8 + v5))((__int64)v8);
  }
  return GameRoutine_1996450(
      *(_QWORD*)game_map_MapColorPalette_g_texture_archives, a3);
}

__int64 TaskPassNodes_bc1650(__int64 a1, __int64 a2, _QWORD* a3)
{
  __int64 v3;
  __int64 (**v6)(__int64);
  __int64 (**v7)(__int64);
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned int v11;
  unsigned int v12;
  __int64 v13;
  unsigned int v14;
  unsigned int v15;
  __int64 v16;
  __int64 v17;
  _QWORD* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned int v26;
  unsigned int v27;
  __int64 v28;
  unsigned int v29;
  unsigned int v30;
  __int64 v31;
  __int64 v33[2];
  _QWORD v34[2];

  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v9 = COERCE_AS(__typeof__(v9),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v3 = *(_QWORD*)(a1 + 8);
  v6 = (__int64 (**)(__int64))GameData_212e778[0],
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v9 = COERCE_AS(__typeof__(v9),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v7 = (__int64 (**)(__int64))GameData_212e780,
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v9 = COERCE_AS(__typeof__(v9),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((*(_BYTE*)(v3 + 56) & 1) == 0) {
    v8 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v3 + 48) + 32LL))(
        *(_QWORD*)(v3 + 48)),
    v19 = COERCE_AS(__typeof__(v19),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v21 = COERCE_AS(__typeof__(v21),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v24 = COERCE_AS(__typeof__(v24),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v9 = COERCE_AS(__typeof__(v9),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*(void (**)(_QWORD, __int64, __int64))(*(_QWORD*)*a3 + 96LL))(*a3, v8, v9),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v9 = COERCE_AS(__typeof__(v9),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v10 = *a3;
    v11 = (*v6)(v8);
    v12 = (*v7)(v8);
    (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(
        *(_QWORD*)v10 + 72LL))(v10, 0, 0, v11, v12),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v9 = COERCE_AS(__typeof__(v9),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v13 = *a3;
    v14 = (*v6)(v8);
    v15 = (*v7)(v8);
    (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(
        *(_QWORD*)v13 + 88LL))(v13, 0, 0, v14, v15),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v9 = COERCE_AS(__typeof__(v9),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v16 = *a3;
    v34[0] = 0;
    v34[1] = 0;
    (*(void (**)(__int64, _QWORD, _QWORD*))(*(_QWORD*)v16 + 144LL))(v16, 0,
                                                                    v34),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v9 = COERCE_AS(__typeof__(v9),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v17 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v3 + 48) + 32LL))(
      *(_QWORD*)(v3 + 48)),
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v9 = COERCE_AS(__typeof__(v9),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v18 = *(_QWORD**)(a2 + 8);
  v34[0] = v17;
  v34[1] = v19;
  v20 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*v18 + 16LL))(*v18),
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v9 = COERCE_AS(__typeof__(v9),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v33[0] = (*(__int64 (**)(__int64))(*(_QWORD*)v20 + 32LL))(v20),
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v9 = COERCE_AS(__typeof__(v9),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v33[1] = v21;
  ResourceBuilder_b5fa20_alt1((__int64)a3, v34, v33, 327680),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v22 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(*(_QWORD*)(a2 + 8) + 8LL) +
                                 16LL))(*(_QWORD*)(*(_QWORD*)(a2 + 8) + 8LL)),
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v9 = COERCE_AS(__typeof__(v9),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v23 = (*(__int64 (**)(__int64))(*(_QWORD*)v22 + 32LL))(v22),
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v9 = COERCE_AS(__typeof__(v9),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, __int64, __int64))(*(_QWORD*)*a3 + 96LL))(*a3, v23, v24),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v25 = *a3;
  v26 = (*v6)(v23);
  v27 = (*v7)(v23);
  (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)v25 + 72LL))(
      v25, 0, 0, v26, v27),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v28 = *a3;
  v29 = (*v6)(v23);
  v30 = (*v7)(v23);
  (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)v28 + 88LL))(
      v28, 0, 0, v29, v30),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v31 = *a3;
  v34[0] = 0;
  v34[1] = 0;
  return (*(__int64 (**)(__int64, _QWORD, _QWORD*))(*(_QWORD*)v31 + 144LL))(
      v31, 0, v34);
}

__int64 TaskPassNodes_bc1bc0(__int64 a1, _QWORD** a2, __int64 a3)
{
  __int64 result;

  **a2 = GameRoutine_b48f90(a3, *(_QWORD*)(**(_QWORD**)(a1 + 8) + 16LL));
  result = GameRoutine_b48e70(a3, *(_QWORD*)(**(_QWORD**)(a1 + 8) + 24LL));
  *a2[1] = result;
  return result;
}

__int64 TaskPassNodes_bc1d20(__int64 a1, _QWORD** a2, _QWORD* a3)
{
  __int64 v3;
  _QWORD* v4;
  __int64* v5;
  __int64 v7;
  bool v8;
  int v9;
  __int64 v10;
  int32x4_t* v11;
  int32x4_t v12;
  int32x4_t v13;
  int32x4_t v14;
  int32x4_t v15;
  int32x4_t v16;
  int32x4_t v17;
  _QWORD v19[2];
  char v20;
  unsigned int v21;
  char v22;

  v3 = *(_QWORD*)(a1 + 8);
  v4 = *a2;
  v5 = a2[1];
  v19[0] = 0x43800000780LL;
  v21 = 0x80000000;
  v7 = *(_QWORD*)(v3 + 16);
  v19[1] = 0x40000;
  v20 = 1;
  v22 = 1;
  LODWORD(v3) = *(_DWORD*)(v7 + 56);
  v8 = (int)v3 < -1;
  v9 = ((_BYTE)v3 + 1) & 1;
  if (v8) {
    v9 = -v9;
  }
  *(_DWORD*)(v7 + 56) = v9;
  v10 = *(_QWORD*)(v7 + 8LL * v9 + 40);
  v11 = (int32x4_t*)(*(__int64 (**)(__int64))(*(_QWORD*)v10 + 56LL))(v10);
  v12 = *((int32x4_t*)GameData_212c2a0 + 1);
  v13 = *(int32x4_t*)((char*)((char*)0x20LL) + (_QWORD)GameData_212c2a0);
  v14 = *(int32x4_t*)((char*)((char*)0x20LL) + (_QWORD)GameData_212c2a0 + 16);
  v15 = vzip1q_s32(*(int32x4_t*)GameData_212c2a0, v13);
  v16 = vzip2q_s32(*(int32x4_t*)GameData_212c2a0, v13);
  v17 = vzip1q_s32(v12, v14);
  *v11 = vzip1q_s32(v15, v17);
  v11[1] = vzip2q_s32(v15, v17);
  v11[2] = vzip1q_s32(v16, vzip2q_s32(v12, v14));
  (*(void (**)(__int64))(*(_QWORD*)v10 + 64LL))(v10);
  return gfxa_b60140(v7, v4, v5, a3, (__int64)v19);
}

__int64 TaskPassNodes_bc1f10(__int64 a1, _QWORD** a2, __int64 a3)
{
  __int64 result;

  **a2 = GameRoutine_b48f90(a3, *(_QWORD*)(**(_QWORD**)(a1 + 8) + 16LL));
  result = GameRoutine_b48e70(a3, *(_QWORD*)(**(_QWORD**)(a1 + 8) + 24LL));
  *a2[1] = result;
  return result;
}

__int64 TaskPassNodes_bc2070(__int64 a1, _QWORD** a2, _QWORD* a3)
{
  __int64 v3;
  _QWORD* v4;
  __int64* v5;
  __int64 v7;
  bool v8;
  int v9;
  __int64 v10;
  int32x4_t* v11;
  int32x4_t v12;
  int32x4_t v13;
  int32x4_t v14;
  int32x4_t v15;
  int32x4_t v16;
  int32x4_t v17;
  _QWORD v19[2];
  char v20;
  char v21;
  char v22;

  v3 = *(_QWORD*)(a1 + 8);
  v4 = *a2;
  v5 = a2[1];
  v21 = 0;
  v22 = 0;
  v19[0] = 0x43800000780LL;
  v7 = *(_QWORD*)(v3 + 16);
  v19[1] = 0x10000;
  v20 = 1;
  LODWORD(v3) = *(_DWORD*)(v7 + 56);
  v8 = (int)v3 < -1;
  v9 = ((_BYTE)v3 + 1) & 1;
  if (v8) {
    v9 = -v9;
  }
  *(_DWORD*)(v7 + 56) = v9;
  v10 = *(_QWORD*)(v7 + 8LL * v9 + 40);
  v11 = (int32x4_t*)(*(__int64 (**)(__int64))(*(_QWORD*)v10 + 56LL))(v10);
  v12 = *((int32x4_t*)GameData_212c2a0 + 1);
  v13 = *(int32x4_t*)((char*)((char*)0x20LL) + (_QWORD)GameData_212c2a0);
  v14 = *(int32x4_t*)((char*)((char*)0x20LL) + (_QWORD)GameData_212c2a0 + 16);
  v15 = vzip1q_s32(*(int32x4_t*)GameData_212c2a0, v13);
  v16 = vzip2q_s32(*(int32x4_t*)GameData_212c2a0, v13);
  v17 = vzip1q_s32(v12, v14);
  *v11 = vzip1q_s32(v15, v17);
  v11[1] = vzip2q_s32(v15, v17);
  v11[2] = vzip1q_s32(v16, vzip2q_s32(v12, v14));
  (*(void (**)(__int64))(*(_QWORD*)v10 + 64LL))(v10);
  return gfxa_b60140(v7, v4, v5, a3, (__int64)v19);
}

__int64 TaskPassNodes_bc2360(__int64 a1, __int64 a2, _QWORD* a3, __int64 a4)
{
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64* v11;
  __int64 v13;
  __int64 v14;
  __int64 result;
  __int64 v16;
  _QWORD v17[4];
  _QWORD* v18;
  _BYTE v19[32];
  _BYTE* v20;

  v4 = *(_QWORD*)(a1 + 8);
  v5 = a3[2];
  v6 = v17;
  v7 = *a3 + 8LL;
  v8 = *(_QWORD*)(v4 + 32);
  v20 = nullptr;
  v18 = v17;
  v17[2] = v7;
  v17[3] = a3;
  v9 = *game_spine_g_resource_releaser_ptr;
  v17[0] = GameData_1fc7b10;
  v17[1] = v8;
  v10 = *(__int64**)(v9 + 24);
  v11 = *(__int64**)(v9 + 32);
  if (v10 == v11) {
    goto LABEL_6;
  }
  do {
    v13 = *v10;
    v10 += 2;
    GameRoutine_19132c0(v13, a3, v5, v19, v17);
  } while (v10 != v11);
  v6 = v18;
  if (v18 == v17) {
  LABEL_6:
    v14 = 32;
  }
  else {
    if (v18 == nullptr) {
      goto LABEL_8;
    }
    v14 = 40;
  }
  (*(void (**)(_QWORD*, __int64, _QWORD*, __int64))(*v6 + v14))(v6, a2, a3, a4);

LABEL_8:
  result = (__int64)v20;
  if (v20 == v19) {
    v16 = 32;
  }
  else {
    if (v20 == nullptr) {
      return result;
    }
    v16 = 40;
  }
  return (*(__int64 (**)(_BYTE*, __int64, _QWORD*, __int64))(
      *(_QWORD*)v20 + v16))(v20, a2, a3, a4);
}

unsigned __int64 TaskPassNodes_bc32f0(__int64 a1, __int64* a2, __int64 a3)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  struct {
    _QWORD v8[3];
    int v9;
  } v8_;

  v4 = a2[1];
  v5 = *a2;
  v6 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 24LL);
  v8_.v8[0] = 0;
  v8_.v8[1] = 0;
  v8_.v8[2] = 0x3E8000003F800000LL;
  v8_.v9 = 1040187392;
  return ResourceBuilder_b4dd70_alt1(v6, v5, v4, a3, (__int64)v8_.v8);
}

__int64 TaskPassNodes_bc3670(__int64 a1, _QWORD* a2, __int64 a3)
{
  __int64* v3;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  _QWORD* v25;
  __int64 v26;
  unsigned int v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64* v36;
  __int64 result;
  struct {
    __int64 v38;
    int v39;
    int v40;
    int v41;
    int v42;
    char v43;
    char gap25_[3];
    int v44;
  } v38_;

  v3 = *(__int64**)(a1 + 8);
  v38_.v44 = 0;
  v38_.v38 = 0x500000000LL;
  v38_.v41 = 1;
  v7 = *v3;
  v38_.v43 = 0;
  v38_.v42 = 1;
  v8 = *(_DWORD*)(v7 + 13312);
  LODWORD(v7) = *(_DWORD*)(v7 + 13316);
  v38_.v39 = v8;
  v38_.v40 = v7;
  v9 = GameRoutine_b6b000_alt1(a3, "2DOffscreenRenderTexture", &v38_.v38);
  v10 = *(_QWORD*)(a1 + 16);
  v11 = v9;
  v12 = *(_QWORD**)v10;
  v13 = *(_QWORD*)(*(_QWORD*)v10 + 16LL);
  if (v13 != 0) {
    *(_QWORD*)*a2 = GameRoutine_b48f90_alt1(a3, v13);
    v12 = **(_QWORD***)(a1 + 16);
  }
  v14 = v12[3];
  if (v14 != 0) {
    *(_QWORD*)(*a2 + 8LL) = GameRoutine_b48f90_alt1(a3, v14);
    v12 = **(_QWORD***)(a1 + 16);
  }
  v15 = v12[5];
  if (v15 != 0) {
    v16 = 1;
    *(_QWORD*)(a2[1] + 24LL) = GameRoutine_b48e70_alt1(a3, v15);
    v17 = v12[6];
    if (v17 == 0) {
      goto LABEL_8;
    }
    goto LABEL_7;
  }
  v16 = 0;
  v17 = v12[6];
  if (v17 != 0) {
  LABEL_7:
    v18 = GameRoutine_b48e70_alt1(a3, v17);
    v19 = a2[1] + 8LL * v16++;
    *(_QWORD*)(v19 + 24) = v18;
  }
LABEL_8:
  v20 = v12[7];
  if (v20 != 0) {
    v21 = GameRoutine_b48e70_alt1(a3, v20);
    v22 = a2[1] + 8LL * v16++;
    *(_QWORD*)(v22 + 24) = v21;
  }
  v23 = v12[8];
  if (v23 != 0) {
    *(_QWORD*)(a2[1] + 8LL * v16 + 24) = GameRoutine_b48e70_alt1(a3, v23);
  }
  v24 = *(_QWORD*)(a1 + 16);
  v25 = *(_QWORD**)v24;
  v26 = *(_QWORD*)(*(_QWORD*)v24 + 72LL);
  if (v26 != 0) {
    v27 = 1;
    *(_QWORD*)(a2[1] + 56LL) = GameRoutine_b48e70_alt1(a3, v26);
    v28 = v25[10];
    if (v28 == 0) {
      goto LABEL_15;
    }
    goto LABEL_14;
  }
  v27 = 0;
  v28 = v25[10];
  if (v28 != 0) {
  LABEL_14:
    v29 = GameRoutine_b48e70_alt1(a3, v28);
    v30 = a2[1] + 8LL * v27++;
    *(_QWORD*)(v30 + 56) = v29;
  }
LABEL_15:
  v31 = v25[11];
  if (v31 != 0) {
    v32 = GameRoutine_b48e70_alt1(a3, v31);
    v33 = a2[1] + 8LL * v27++;
    *(_QWORD*)(v33 + 56) = v32;
  }
  v34 = v25[12];
  if (v34 != 0) {
    *(_QWORD*)(a2[1] + 8LL * v27 + 56) = GameRoutine_b48e70_alt1(a3, v34);
  }
  v35 = *(_QWORD*)(**(_QWORD**)(a1 + 16) + 32LL);
  if (v35 != 0) {
    *(_QWORD*)(a2[1] + 16LL) = GameRoutine_b48e70_alt1(a3, v35);
  }
  v36 = (__int64*)a2[1];
  result = GameRoutine_b48e70_alt1(a3, v11);
  *v36 = result;
  return result;
}

__int64 TaskPassNodes_bc3990(__int64 a1, __int64 a2, __int64* a3)
{
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  unsigned int v8;
  __int64 v9;
  _QWORD v11[2];
  struct {
    _QWORD v12[2];
    unsigned int v13;
    unsigned int v14;
  } v12_;

  v5 = COERCE_AS(__typeof__(v5),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v4 = (*(__int64 (**)(_QWORD))(***(_QWORD***)(a2 + 8) + 16LL))(
      **(_QWORD**)(a2 + 8)),
  v5 = COERCE_AS(__typeof__(v5),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v12_.v12[0] = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 32LL))(v4),
  v5 = COERCE_AS(__typeof__(v5),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v12_.v12[1] = v5;
  v6 = game_g_frame_clock_ptr[0];
  v7 = *a3;
  v8 = *(_DWORD*)(*game_g_frame_clock_ptr[0] + 13316);
  v12_.v13 = *(_DWORD*)(*game_g_frame_clock_ptr[0] + 13312);
  v12_.v14 = v8;
  (*(void (**)(__int64, _QWORD, __int64))(*(_QWORD*)v7 + 96LL))(v7, v12_.v12[0],
                                                                v5),
      v5 = COERCE_AS(__typeof__(v5),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a3 + 72LL))(
      *a3, 0, 0, v12_.v13, v8),
      v5 = COERCE_AS(__typeof__(v5),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a3 + 88LL))(
      *a3, 0, 0, v12_.v13, v8),
      v5 = COERCE_AS(__typeof__(v5),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v9 = *a3;
  v11[0] = 0;
  v11[1] = 0x3F80000000000000LL;
  (*(void (**)(__int64, _QWORD, _QWORD*))(*(_QWORD*)v9 + 144LL))(v9, 0, v11),
      v5 = COERCE_AS(__typeof__(v5),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  return GameRoutine_beecc0_alt1(*(__int64**)(*v6 + 16664), a3,
                                 (__int64)v12_.v12);
}

#pragma GCC visibility pop
