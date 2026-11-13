#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
__int64 GameRoutine_14a1390(_QWORD, _QWORD);
__int64 GameRoutine_174e4e0(__int64, int);
__int64 GameRoutine_174f600(__int64, int);
__int64 LayoutAccessor_155cda0(_QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_155d940(_QWORD);
__int64 LayoutAccessor_155fbe0(_QWORD, _QWORD);
__int64 LayoutAccessor_1562680(_QWORD, _QWORD, long double);
__int64 ProcInOutAnim_173fac0(__int64, char);
__int64 Registration_a4da40(_QWORD, _QWORD);
__int64 TelopSequence_1374cc0(_QWORD, _QWORD);
__int64 game_telop_TelopSequence_Unknown45(void);
__int64 game_util_Format(const char*, ...);
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_g_game_setting;
extern __int64 game_g_game_setting_ptr;
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64* ui_LayoutAccessor_empty__ptr[3];
__int64 TelopResult_1760380(_QWORD* a1);
__int64 TelopResult_1760680(__int64 a1);
__int64 TelopResult_17609c0(_QWORD* a1);
__int64 TelopResult_1760aa0(__int64 a1);
__attribute__((swiftcall)) void GameRoutine_9b8fe0(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, _QWORD,
                                                       _QWORD);
__attribute__((swiftcall)) void TextBoxEx_188aa00(PSEUDO_X8, _QWORD, _QWORD,
                                                  long double);
__int64 Alignment_56b600(_QWORD);
__int64 ControlCreator_13633c0(_QWORD);
__int64 EmbeddedImage_1889bf0(_QWORD, _QWORD, long double);
__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1760e40(_QWORD, _QWORD);
__int64 GameRoutine_17633b0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1842180(_QWORD, _QWORD);
__int64 GameRoutine_18899f0(_QWORD);
__int64 GameRoutine_190a0c0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 GameRoutine_6ed030(_QWORD);
__int64 GameRoutine_92b880(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_155e830(_QWORD, _QWORD);
__int64 LayoutAccessor_1562cf0(_QWORD, _QWORD);
__int64 Manager_136a920(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 Manager_a51e10(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 TelopResult_175fac0(_QWORD);
__int64 TextBoxEx_188ab20(_QWORD, _QWORD, long double);
__int64 Unit_931120(_QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_gameui_1592340(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 strlen(_QWORD);
__int64 ui_LayoutAccessor_FindAlignment(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
__n128 std___1___shared_weak_count___release_weak();
extern _UNKNOWN* GameData_212da30;
extern __int64 (*msg_TagSelector_vtable[])();
extern __int64* GameData_212c880[5];
extern __int64* GameData_212c8a0;
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 ui_Manager_instance_;
extern char* GameData_20bd060[20];
extern char** msg_MessageManager_empty_text__ptr;
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, _QWORD, _QWORD,
                                               _QWORD, _QWORD, _QWORD, _QWORD,
                                               double, float);
void GameRoutine_17356e0(_QWORD*, __int64);
void GameRoutine_174f240(_QWORD*, __int64*, signed int, unsigned int);
void GameRoutine_175ff40(__int64);
void __attribute__((noreturn)) String_60a1d0(_QWORD);
void TelopResult_17604a0(__int64 a1);
__attribute__((swiftcall)) void TelopResult_17619f0(PSEUDO_X8 x8_, __int64 a1,
                                                    int a2);
__n128 TelopResult_1762890_alt1(__int64 a1,
                                unsigned int a2) __asm__("TelopResult_1762890");
void TelopResult_1762ce0_alt1(__int64 a1, __int64 a2, unsigned int a3,
                              __int64 a4) __asm__("TelopResult_1762ce0");
__n128 TelopResult_17630f0_alt1(__int64 a1, unsigned __int8* a2,
                                __int64 a3) __asm__("TelopResult_17630f0");
__n128 TelopResult_1763ac0_alt1(__int64 a1, signed int a2,
                                unsigned int a3) __asm__("TelopResult_1763ac0");
__int64 GameHr_1562680(__int64 result, const char*, float);
__int64 GaugeUtil_174e4e0(__int64, int);
__int64 GaugeUtil_174f600(__int64, int);
__int64
LayoutAccessor_155cda0_alt1(__int64 result, const char*,
                            const char*) __asm__("LayoutAccessor_155cda0");
__int64 Registration_a4da40_alt1(__int64,
                                 __int64) __asm__("Registration_a4da40");
__int64 TelopSequence_1374cc0_alt1(__int64,
                                   char) __asm__("TelopSequence_1374cc0");
float LayoutAccessor_155d940_alt1(__int64*) __asm__("LayoutAccessor_155d940");
__int64* GameRoutine_1760e40_alt1(__int64,
                                  unsigned int) __asm__("GameRoutine_1760e40");
__int64 GameRoutine_174f240_alt1(__int64*, __int64*, signed int,
                                 unsigned int) __asm__("GameRoutine_174f240");
__int64
LayoutAccessor_1562cf0_alt1(__int64 result,
                            const char*) __asm__("LayoutAccessor_1562cf0");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 ui_LayoutAccessor_FindTextBox_alt1(__int64*, __int64) __asm__(
    "ui_LayoutAccessor_FindTextBox");
char* GameRoutine_a4dbe0_alt1(__int64, const char*,
                              char) __asm__("GameRoutine_a4dbe0");
void GameRoutine_156c5d0_alt1(__int64, __int64,
                              char) __asm__("GameRoutine_156c5d0");
__int64 TelopResult_1763ac0(__int64 a1, signed int a2, unsigned int a3);
__int64*
LayoutAccessor_155fbe0_alt1(__int64*,
                            const char*) __asm__("LayoutAccessor_155fbe0");
__int64
ControlCreator_13633c0_alt1(__int64 result) __asm__("ControlCreator_13633c0");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
__int64 ui_LayoutAccessor_GetPaneAlpha(__int64*, const char*);
__int64 ui_LayoutAccessor_SetPaneAlpha(__int64 result, const char*, char);
char* game_util_Format_alt1(const char*, ...) __asm__("game_util_Format");
double ui_LayoutAccessor_GetPaneTranslate(__int64*, const char*);
float ui_LayoutAccessor_SetPaneTranslate(__int64*, const char*, __int64);
void TelopResult_175ff40(__int64 a1);
__attribute__((swiftcall)) void
GameRoutine_9b8fe0_alt1(PSEUDO_X8, __int64*,
                        _QWORD*) __asm__("GameRoutine_9b8fe0");
__attribute__((swiftcall)) void
TextBoxEx_188aa00_alt1(PSEUDO_X8, __int64, int) __asm__("TextBoxEx_188aa00");
__int64 Alignment_56b600_alt1(__int64 result) __asm__("Alignment_56b600");
__int64 EmbeddedImage_1889bf0_alt1(__int64,
                                   __int64) __asm__("EmbeddedImage_1889bf0");
__int64 GameHr_17633b0(__int64*, const char*, __int64);
__int64 GameRoutine_1842180_alt1(__int64, int) __asm__("GameRoutine_1842180");
__int64 GameRoutine_18899f0_alt1(__int64) __asm__("GameRoutine_18899f0");
__int64 GameRoutine_60a020_alt1(__int64,
                                const char*) __asm__("GameRoutine_60a020");
__int64
LayoutAccessor_1562cf0_alt2(__int64 result,
                            unsigned int*) __asm__("LayoutAccessor_1562cf0");
__int64 Manager_136a920_alt1(__int64, __int64, int, unsigned int,
                             _BYTE*) __asm__("Manager_136a920");
__int64 game_17356e0(__int64*, const char*);
__int64 ui_LayoutAccessor_FindAlignment_alt1(__int64*, const char*) __asm__(
    "ui_LayoutAccessor_FindAlignment");
__int64 ui_LayoutAccessor_FindPane_alt1(__int64*, const char*) __asm__(
    "ui_LayoutAccessor_FindPane");
__int64 ui_LayoutAccessor_FindTextBox_alt2(__int64*, const char*) __asm__(
    "ui_LayoutAccessor_FindTextBox");
char* GameHr_6ed030(__int64);
int* GameRoutine_92b880_alt1(__int64, int,
                             unsigned __int8) __asm__("GameRoutine_92b880");
unsigned __int8* Unit_931120_alt1(unsigned __int8*) __asm__("Unit_931120");
void GameHr_a51e10(__int64, unsigned int, int, int);
void GameRoutine_190a0c0_alt1(float*, __int64, float*, _QWORD*,
                              __int64) __asm__("GameRoutine_190a0c0");
void TextBoxEx_188ab20_alt1(__int64, const char*) __asm__("TextBoxEx_188ab20");
void game_gameui_1592340_alt1(__int64*, __int64,
                              int) __asm__("game_gameui_1592340");
__int64 TelopResult_1762890(__int64 a1, int a2);
__int64 TelopResult_1762ce0(__int64 a1, __int64 a2, int a3, const char* a4);
__int64 TelopResult_17630f0(__int64 a1, unsigned __int8* a2, const char* a3);
__attribute__((swiftcall)) void
LayoutAccessor_1560070_alt1(PSEUDO_X8, __int64*,
                            const char*) __asm__("LayoutAccessor_1560070");
__int64 GameHr_173f310(__int64, __int64*, char, __int64*, __int64*, float);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 snd_Fade_Destroy_Fade_alt1(_QWORD*) __asm__("snd_Fade_Destroy_Fade");
__attribute__((swiftcall)) void
snd_play_ff2d0_alt1(PSEUDO_X8, __int64, __int64, __int64, unsigned int,
                    unsigned int, int, float, float) __asm__("snd_play_ff2d0");
const char* game_HashString32(const char* result);
extern _UNKNOWN GameData_216de68;
extern __int64* GameData_212d460[6];
unsigned __int64 GameRoutine_1130770(__int64, const char*, __int64*);
void snd_Fade_Fade_10c830_alt1(__int64, float) __asm__("snd_Fade_Fade_10c830");
__int64 TelopResult_1760100(__int64 a1);
__int64 TelopResult_1760c40(__int64 a1);
__int64 GameHr_173ff00(__int64, const char*);
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void TelopResult_175fce0(__int64 a1);

void TelopResult_175fce0(__int64 a1)
{
  unsigned __int64 v1;
  unsigned __int64 v3;
  const char* v4;
  __int64 v5;
  __int64* v6;
  __int64 v10;
  __int64 v11;
  const char* v13;
  __int64 v14;
  char* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20[2];
  __int64 v21[2];
  struct {
    __int64 v22;
    __int64 v23;
  } v22_;

  {
    v1 = *(unsigned __int8*)(a1 + 960);
    __asm__ volatile("" ::"r"(v1));
  }
  if ((v1 & 1) != 0) {
    v3 = *(_QWORD*)(a1 + 968);
    __asm__ volatile("" ::"r"(v3));
  }
  else {
    v3 = v1 >> 1;
  }
  if (v3 == 0) {
    goto LABEL_42;
  }
  LayoutAccessor_1560070_alt1((void*)(&v22_.v22), (__int64*)(a1 + 168),
                              "L_Title");
  if ((*(_BYTE*)(a1 + 960) & 1) != 0) {
    v4 = *(const char**)(a1 + 976);
    __asm__ volatile("" ::"r"(v4));
  }
  else {
    v4 = (const char*)(a1 + 961);
  }
  v21[0] = (__int64)v4;
  v21[1] = strlen_alt1(v4);
  v20[0] = (__int64)"Out";
  v20[1] = 3;
  *(_QWORD*)(a1 + 792) =
      GameHr_173f310(a1, &v22_.v22, 0, v21, v20, -0x1.0000000000000p+0f);
  if (v22_.v23 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v22_.v23);
  }
  {
    v5 = *(_QWORD*)(a1 + 968);
    __asm__ volatile("" ::"r"(v5));
  }
  if ((*(_BYTE*)(a1 + 960) & 1) == 0) {
    v5 = *(_BYTE*)(a1 + 960) >> 1;
    __asm__ volatile("" ::"r"(v5));
  }
  if (v5 == 11) {
    if ((*(_BYTE*)(a1 + 960) & 1) != 0) {
      v6 = *(__int64**)(a1 + 976);
      __asm__ volatile("" ::"r"(v6));
    }
    else {
      v6 = (__int64*)(a1 + 961);
    }
    if (*v6 == 0x676564754A5F6E49LL &&
        *(__int64*)((char*)v6 + 3) == 0x303065676564754ALL) {
      v13 = "TitleTxt_Judege00";
    }
    else if (*v6 == 0x676564754A5F6E49LL &&
             *(__int64*)((char*)v6 + 3) == 0x313065676564754ALL) {
      v13 = "TitleTxt_Judege01";
    }
    else if (*v6 == 0x676564754A5F6E49LL &&
             *(__int64*)((char*)v6 + 3) == 0x323065676564754ALL) {
      v13 = "TitleTxt_Judege02";
    }
    else {
      {
        v10 = *v6;
        __asm__ volatile("" ::"r"(v10));
      }
      {
        v11 = *(__int64*)((char*)v6 + 3);
        __asm__ volatile("" ::"r"(v11));
      }
      if (v10 != 0x676564754A5F6E49LL || v11 != 0x333065676564754ALL) {
        goto LABEL_38;
      }
      v13 = "TitleTxt_Judege03";
    }
    GameHr_173ff00(*(_QWORD*)(a1 + 792), v13);
  }
LABEL_38:
  {
    v14 = *(_QWORD*)(a1 + 792);
    __asm__ volatile("" ::"r"(v14));
  }
  if ((*(_BYTE*)(v14 + 248) & 1) != 0) {
    *(_QWORD*)(v14 + 256) = 12;
    {
      v15 = *(char**)(v14 + 264);
      __asm__ volatile("" ::"r"(v15));
    }
  }
  else {
    *(_BYTE*)(v14 + 248) = 24;
    v15 = (char*)(v14 + 249);
  }
  strcpy(v15, "TitleTxt_Out");
LABEL_42:
  {
    v16 = *(_QWORD*)(a1 + 176);
    __asm__ volatile("" ::"r"(v16));
  }
  if (v16 != 0) {
    v17 = std___1___shared_weak_count_lock_alt1(v16);
    if (v17 != 0) {
      v18 = v17;
      {
        v19 = *(_QWORD*)(a1 + 168);
        __asm__ volatile("" ::"r"(v19));
      }
      if (v19 != 0) {
        ControlCreator_13633c0_alt1(v19);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
        std___1___shared_weak_count___release_weak_alt1(v18);
      }
    }
  }
  TelopResult_175ff40(a1);
}

void TelopResult_175ff40(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  double v6;
  int v7;
  int v8;
  double v9;
  __int64 v10;
  __int64 v11;
  int v12;
  int v13;
  int v14;
  const char* v15;
  char* v16;
  __int64* v17;
  char v18;
  char v19;
  _DWORD v20[3];
  _DWORD v21[3];

  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s1", "=w")),
  v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s2", "=w")),
  v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s1", "=w")),
  v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s2", "=w"));
  v2 = *(_QWORD*)(a1 + 176);
  if (v2 != 0) {
    v3 = std___1___shared_weak_count_lock_alt1(v2),
    v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s1", "=w")),
    v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s2", "=w")),
    v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s1", "=w")),
    v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s2", "=w"));
    if (v3 != 0) {
      v4 = v3;
      v5 = *(_QWORD*)(a1 + 168);
      if (v5 != 0) {
        ControlCreator_13633c0_alt1(v5),
            v12 =
                COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s1", "=w")),
            v13 =
                COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s2", "=w")),
            v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s1", "=w")),
            v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s2", "=w"));
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4),
            v12 =
                COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s1", "=w")),
            v13 =
                COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s2", "=w")),
            v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s1", "=w")),
            v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s2", "=w"));
        std___1___shared_weak_count___release_weak_alt1(v4),
            v12 =
                COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s1", "=w")),
            v13 =
                COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s2", "=w")),
            v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s1", "=w")),
            v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s2", "=w"));
      }
    }
  }
  v19 =
      ui_LayoutAccessor_GetPaneAlpha((__int64*)(a1 + 168), "N_TlpIO_Contents"),
  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s1", "=w")),
  v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s2", "=w")),
  v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s1", "=w")),
  v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s2", "=w"));
  v18 = ui_LayoutAccessor_GetPaneAlpha((__int64*)(a1 + 168), "N_TlpIO_Overlay"),
  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s1", "=w")),
  v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s2", "=w")),
  v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s1", "=w")),
  v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s2", "=w"));
  v6 = ui_LayoutAccessor_GetPaneTranslate((__int64*)(a1 + 168),
                                          "N_TlpIO_Contents"),
  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s1", "=w")),
  v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s2", "=w")),
  v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s1", "=w")),
  v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s2", "=w"));
  v21[0] = LODWORD(v6);
  v21[1] = v7;
  v21[2] = v8;
  v9 = ui_LayoutAccessor_GetPaneTranslate((__int64*)(a1 + 168),
                                          "N_TlpIO_Overlay"),
  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s1", "=w")),
  v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s2", "=w")),
  v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s1", "=w")),
  v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s2", "=w"));
  v10 = a1 + 864;
  v11 = 0;
  v20[0] = LODWORD(v9);
  v20[1] = v12;
  v20[2] = v13;
  do {
    if (*(int*)(v10 + 4 * v11) >= 1) {
      v14 = 0;
      v15 = GameData_20bd060[v11];
      do {
        v16 = game_util_Format_alt1("%s_%02d", v15, v14),
        v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s1", "=w")),
        v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s2", "=w")),
        v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s1", "=w")),
        v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s2", "=w"));
        v17 = LayoutAccessor_155fbe0_alt1((__int64*)(a1 + 168), v16),
        v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s1", "=w")),
        v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s2", "=w")),
        v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s1", "=w")),
        v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s2", "=w"));
        ui_LayoutAccessor_SetPaneAlpha((__int64)v17, "N_Contents", v19),
            v12 =
                COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s1", "=w")),
            v13 =
                COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s2", "=w")),
            v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s1", "=w")),
            v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s2", "=w"));
        ui_LayoutAccessor_SetPaneAlpha((__int64)v17, "N_Overlay", v18),
            v12 =
                COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s1", "=w")),
            v13 =
                COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s2", "=w")),
            v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s1", "=w")),
            v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s2", "=w"));
        ui_LayoutAccessor_SetPaneTranslate(v17, "N_Contents", (__int64)v21),
            v12 =
                COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s1", "=w")),
            v13 =
                COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s2", "=w")),
            v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s1", "=w")),
            v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s2", "=w"));
        ui_LayoutAccessor_SetPaneTranslate(v17, "N_Overlay", (__int64)v20),
            v12 =
                COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s1", "=w")),
            v13 =
                COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s2", "=w")),
            v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s1", "=w")),
            v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s2", "=w"));
        ++v14;
      } while (v14 < (signed __int32)*(_DWORD*)(v10 + 4 * v11));
    }
    ++v11;
  } while (v11 != 20);
}

__int64 TelopResult_1760100(__int64 a1)
{
  _QWORD handle[2];
  const char* v2;
  __int64 result;
  int v4;
  __int64 v5;
  const char* v6;
  __int64 v7[2];
  __int64 v8[2];
  struct {
    const char* v9;
    __int64 v10;
  } v9_;

  v2 = (const char*)(*(__int64 (**)(__int64))(*(_QWORD*)a1 + 224LL))(a1);
  result = GameHr_1562680(a1 + 168, v2, 0x1.0000000000000p+0f);
  v4 = *(unsigned __int8*)(a1 + 1152);
  *(_DWORD*)(a1 + 420) = 0;
  if (v4 == 1) {
    LayoutAccessor_1560070_alt1((void*)(&v9_.v9), (__int64*)(a1 + 168),
                                "L_Stamp");
    result = v9_.v10;
    if (v9_.v10 != 0) {
      v5 = std___1___shared_weak_count_lock_alt1(v9_.v10);
      result = v9_.v10;
      if (v5 != 0) {
        v6 = v9_.v9;
      }
      else {
        v6 = nullptr;
      }
      if (v9_.v10 != 0) {
        result = std___1___shared_weak_count___release_weak_alt1(v9_.v10);
      }
      if (v6 != nullptr) {
        v7[0] = (__int64)v6;
        v7[1] = v5;
        if (v5 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 16), 1u,
                                    memory_order_relaxed);
        }
        v9_.v9 = "In";
        v9_.v10 = 2;
        v8[0] = (__int64)"Out";
        v8[1] = 3;
        *(_QWORD*)(a1 + 1160) = GameHr_173f310(a1, v7, 0, (__int64*)&v9_.v9, v8,
                                               -0x1.0000000000000p+0f);
        if (v5 != 0) {
          std___1___shared_weak_count___release_weak_alt1(v5);
        }
        snd_Fade_Fade_10c830_alt1((__int64)&v9_.v9, 0x0.0p+0f);
        snd_play_ff2d0_alt1((void*)(handle), (__int64)"SE_SYS_Stamp",
                            (__int64)"SE_SYS_Stamp", (__int64)&v9_.v9, 0,
                            0x10001u, 0, 0x0.0p+0f, 0x1.0000000000000p+0f);
        result = snd_Fade_Destroy_Fade_alt1(&v9_.v9);
      }
      if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        return std___1___shared_weak_count___release_weak_alt1(v5);
      }
    }
  }
  return result;
}

__int64 TelopResult_1760380(_QWORD* a1)
{
  _DWORD* v1;
  __int64 v3;
  unsigned __int64 v4;
  __int64* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  long double v9;
  __int64 result;

  v1 = (_DWORD*)a1[106];
  if (*(_QWORD*)v1 != 0 && *(_DWORD*)(*(_QWORD*)v1 + 16LL) == v1[2]) {
    GameRoutine_14a1390(a1 + 106, 1);
  }
  v3 = a1[118];
  if (v3 != 0) {
    if (*(_QWORD*)(v3 + 216) != *(_QWORD*)(v3 + 208)) {
      v4 = 0;
      v5 = ui_LayoutAccessor_empty__ptr[0];
      do {
        if (*(_QWORD*)(v3 + 168) != 0) {
          v6 = *(__int64**)(v3 + 168);
        }
        else {
          v6 = v5;
        }
        v7 = game_util_Format("L_MotivationGauge%02d", (unsigned int)v4);
        v8 = LayoutAccessor_155fbe0(v6, v7);
        LODWORD(v9) = 1.0;
        LayoutAccessor_1562680(v8, "Out", v9);
        ++v4;
      } while (
          0xAAAAAAAAAAAAAAABLL *
              ((__int64)(*(_QWORD*)(v3 + 216) - *(_QWORD*)(v3 + 208)) >> 3) >
          v4);
    }
    *(_DWORD*)(v3 + 232) = 6;
  }
  result = a1[145];
  if (result != 0) {
    return ProcInOutAnim_173fac0(result, 0);
  }
  return result;
}

void TelopResult_17604a0(__int64 a1)
{
  char v2;
  __int64 v3;
  unsigned __int8* v4;
  unsigned int v5;
  bool v6;
  int v7;
  __int16 v9;
  __int64 v10;
  long double v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _BYTE v17[200];

  GameRoutine_175ff40(a1);
  v2 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 328LL))(a1);
  v3 = *(_QWORD*)a1;
  if ((v2 & 1) != 0) {
    if (((*(__int64 (**)(__int64))(v3 + 440))(a1) & 1) != 0) {
      LayoutAccessor_155e830(a1 + 168, 0);
      v4 = *(unsigned __int8**)(a1 + 16);
      if (v4 != nullptr) {
        v5 = *v4;
        v6 = v5 > 0x10;
        v7 = (1 << v5) & 0x1CE00;
        if (!v6 && v7 != 0) {
          *(_WORD*)(a1 + 136) |= 0x80u;
        }
      }
      v9 = *(_WORD*)(a1 + 136) | 8;
    LABEL_27:
      *(_WORD*)(a1 + 136) = v9;
    }
    else {
      (*(void (**)(__int64))(*(_QWORD*)a1 + 456LL))(a1);
      TelopResult_175fac0(a1);
      v10 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 208LL))(a1);
      LODWORD(v11) = 1.0;
      LayoutAccessor_1562680(a1 + 168, v10, v11);
      GameRoutine_175ff40(a1);
      v13 = *(_QWORD*)(a1 + 344);
      v12 = *(_QWORD*)(a1 + 352);
      while (v13 != v12) {
        if ((*(_BYTE*)v13 & 1) != 0) {
          v14 = *(_QWORD*)(v13 + 16);
        }
        else {
          v14 = v13 + 1;
        }
        if (v14 != 0) {
          snd_Fade_Fade_10c830(v17, 0.0);
          snd_play_ff2d0((void*)(&v16), v14, v14, v17, 0, 65537, 0, 0.0, 1.0);
          snd_Fade_Destroy_Fade(v17);
        }
        v13 += 24;
      }
      v15 = *(_QWORD*)(a1 + 8);
      if (v15 != 0) {
        while (1) {
          if (*(_BYTE*)v15 == 2) {
            if (*(_DWORD*)(v15 + 32) == 2) {
              *(_QWORD*)(a1 + 16) = v15;
              v9 = *(_WORD*)(a1 + 136) & 0xFF7F;
              goto LABEL_27;
            }
          }
          else if (*(_BYTE*)v15 == 0) {
            return;
          }
          v15 += 64;
        }
      }
    }
  }
  else {
    (*(void (**)(__int64))(v3 + 400))(a1);
  }
}

__int64 TelopResult_1760680(__int64 a1)
{
  int v2;
  char v3;
  int v4;
  __int64 v5;
  int v6;
  __int64 v7;
  unsigned __int64 v8;
  char v9;
  __int64 v10;
  int v11;
  const char* v12;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  int v17;

  v2 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 344LL))(a1);
  v3 = 1;
  v4 = GaugeUtil_174f600(a1 + 984, 1);
  v5 = *(_QWORD*)(a1 + 1128);
  v6 = v4 ^ 1;
  if (v5 != *(_QWORD*)(a1 + 1136)) {
    v7 = 0;
    v8 = 0;
    do {
      v9 = GaugeUtil_174e4e0(v5 + v7, 1);
      ++v8;
      v7 += 184;
      v3 &= v9 ^ 1;
      v5 = *(_QWORD*)(a1 + 1128);
    } while (0xD37A6F4DE9BD37A7LL * ((*(_QWORD*)(a1 + 1136) - v5) >> 3) > v8);
  }
  if ((v2 & v6 & 1) != 0 && (v3 & 1) != 0) {
    if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 440LL))(a1) & 1) == 0) {
      v11 = *(_DWORD*)(game_g_game_setting + 952);
      if ((v11 & 1) == 0 &&
          (*(_BYTE*)(a1 + 336) != 1 ||
           (v11 & 2) == 0 && (*(_BYTE*)(game_g_game_setting + 944) & 8) == 0)) {
        goto LABEL_52;
      }
      LayoutAccessor_155d940_alt1((__int64*)(a1 + 440));
      LayoutAccessor_155cda0_alt1(a1 + 440, "Out", nullptr);
      v12 = (const char*)(*(__int64 (**)(__int64))(*(_QWORD*)a1 + 216LL))(a1);
      GameHr_1562680(a1 + 168, v12, 0x1.0000000000000p+0f);
      v13 = *(_QWORD*)(a1 + 8);
      if (v13 == 0) {
        goto LABEL_52;
      }
      while (1) {
        if (*(_BYTE*)v13 == 2) {
          if (*(_DWORD*)(v13 + 32) == 7) {
          LABEL_51:
            *(_QWORD*)(a1 + 16) = v13;
            *(_WORD*)(a1 + 136) &= ~0x80u;
            goto LABEL_52;
          }
        }
        else if (*(_BYTE*)v13 == 0) {
          goto LABEL_52;
        }
        v13 += 64;
      }
    }
    if (*(_QWORD*)(a1 + 944) != 0) {
      v10 = *(_QWORD*)(a1 + 8);
      if (v10 != 0) {
        while (1) {
          if (*(_BYTE*)v10 == 2) {
            if (*(_DWORD*)(v10 + 32) == 4) {
              goto LABEL_54;
            }
          }
          else if (*(_BYTE*)v10 == 0) {
            break;
          }
          v10 += 64;
        }
      }
    }
    else {
      v14 = *(unsigned __int8*)(a1 + 824);
      v15 = *(_QWORD*)(a1 + 832);
      if ((v14 & 1) == 0) {
        v15 = v14 >> 1;
      }
      if (v15 != 0) {
        v16 = (v14 & 1) != 0 ? *(_QWORD*)(a1 + 840) : a1 + 825;
        if ((Registration_a4da40_alt1(*msg_MessageManager_instance__ptr[0],
                                      v16) &
             1) != 0) {
          v10 = *(_QWORD*)(a1 + 8);
          if (v10 == 0) {
            goto LABEL_55;
          }
          while (1) {
            if (*(_BYTE*)v10 == 2) {
              if (*(_DWORD*)(v10 + 32) == 5) {
              LABEL_54:
                *(_QWORD*)(a1 + 16) = v10;
                *(_WORD*)(a1 + 136) &= ~0x80u;
                goto LABEL_55;
              }
            }
            else if (*(_BYTE*)v10 == 0) {
              goto LABEL_55;
            }
            v10 += 64;
          }
        }
      }
      v17 = *(_DWORD*)(game_g_game_setting + 952);
      if ((v17 & 1) != 0 ||
          *(_BYTE*)(a1 + 336) == 1 &&
              ((v17 & 2) != 0 ||
               (*(_BYTE*)(game_g_game_setting + 944) & 8) != 0)) {
        LayoutAccessor_155d940_alt1((__int64*)(a1 + 440));
        LayoutAccessor_155cda0_alt1(a1 + 440, "Out", nullptr);
        v13 = *(_QWORD*)(a1 + 8);
        if (v13 != 0) {
          while (1) {
            if (*(_BYTE*)v13 == 2) {
              if (*(_DWORD*)(v13 + 32) == 6) {
                goto LABEL_51;
              }
            }
            else if (*(_BYTE*)v13 == 0) {
              break;
            }
            v13 += 64;
          }
        }
      }
    LABEL_52:
      if (*(_DWORD*)(a1 + 320) == 2) {
        TelopSequence_1374cc0_alt1(a1, 1);
      }
    }
  }
LABEL_55:
  if (*(_BYTE*)(a1 + 335) == 1 &&
      (*(_BYTE*)(*(_QWORD*)game_g_game_setting_ptr + 944LL) & 0xB) != 0) {
    (*(void (**)(__int64))(*(_QWORD*)a1 + 360LL))(a1);
  }
  return (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 400LL))(a1);
}

__int64 TelopResult_17609c0(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  unsigned __int64 v4;

  game_telop_TelopSequence_Unknown45();
  GameRoutine_174f600((__int64)(a1 + 123), 2);
  v2 = a1[141];
  if (a1[142] != v2) {
    v3 = 0;
    v4 = 0;
    do {
      GameRoutine_174e4e0(v2 + v3, 2);
      v2 = a1[141];
      ++v4;
      v3 += 184;
    } while (0xD37A6F4DE9BD37A7LL * ((a1[142] - v2) >> 3) > v4);
  }
  return (*(__int64 (**)(_QWORD*))(*a1 + 488LL))(a1);
}

__int64 TelopResult_1760aa0(__int64 a1)
{
  unsigned __int64 v2;
  unsigned __int64 v3;
  __int64 v4;
  __int64 v5;
  int v6;
  int v7;
  int v8;
  __int64 v9;

  if (*(int*)(*(_QWORD*)(a1 + 944) + 232LL) > 4 ||
      game_ProcGameSkipView_instance_ != 0 &&
          *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3 &&
          (((v6 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
               ? (v7 = 2)
               : (v7 = 3),
           (v7 & v6) == 0)) {
    v2 = *(unsigned __int8*)(a1 + 824);
    v3 = *(_QWORD*)(a1 + 832);
    if ((v2 & 1) == 0) {
      v3 = v2 >> 1;
    }
    if (v3 != 0) {
      v4 = (v2 & 1) != 0 ? *(_QWORD*)(a1 + 840) : a1 + 825;
      if ((Registration_a4da40(*msg_MessageManager_instance__ptr[0], v4) & 1) !=
          0) {
        v5 = *(_QWORD*)(a1 + 8);
        if (v5 == 0) {
          return (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 400LL))(a1);
        }
        while (1) {
          if (*(_BYTE*)v5 == 2) {
            if (*(_DWORD*)(v5 + 32) == 5) {
              *(_QWORD*)(a1 + 16) = v5;
              *(_WORD*)(a1 + 136) &= ~0x80u;
              return (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 400LL))(a1);
            }
          }
          else if (*(_BYTE*)v5 == 0) {
            return (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 400LL))(a1);
          }
          v5 += 64;
        }
      }
    }
    v8 = *(_DWORD*)(game_g_game_setting + 952);
    if ((v8 & 1) != 0 ||
        *(_BYTE*)(a1 + 336) == 1 &&
            ((v8 & 2) != 0 ||
             (*(_BYTE*)(game_g_game_setting + 944) & 8) != 0)) {
      LayoutAccessor_155d940(a1 + 440);
      LayoutAccessor_155cda0(a1 + 440, "Out", 0);
      v9 = *(_QWORD*)(a1 + 8);
      if (v9 != 0) {
        while (1) {
          if (*(_BYTE*)v9 == 2) {
            if (*(_DWORD*)(v9 + 32) == 6) {
              *(_QWORD*)(a1 + 16) = v9;
              *(_WORD*)(a1 + 136) &= ~0x80u;
              break;
            }
          }
          else if (*(_BYTE*)v9 == 0) {
            break;
          }
          v9 += 64;
        }
      }
    }
    if (*(_DWORD*)(a1 + 320) == 2) {
      TelopSequence_1374cc0(a1, 1);
    }
  }
  return (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 400LL))(a1);
}

__int64 TelopResult_1760c40(__int64 a1)
{
  __int64 result;
  unsigned __int64 v3;
  unsigned __int64 v4;
  const char* v5;
  __int64 v7;
  __int64 v8;
  _BYTE* v9;
  char v10;

  result = TelopSequence_1374cc0_alt1(a1, 0);
  v3 = *(unsigned __int8*)(a1 + 824);
  v4 = *(_QWORD*)(a1 + 832);
  if ((v3 & 1) == 0) {
    v4 = v3 >> 1;
  }
  if (v4 != 0) {
    v5 = (v3 & 1) != 0 ? *(const char**)(a1 + 840) : (const char*)(a1 + 825);
    if (*GameData_212d460[0] == 0 && v5 != nullptr) {
      v7 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 1376, 16, 0);
      GameRoutine_1130770(v7, v5, nullptr);
      v8 = *(_QWORD*)(a1 + 40);
      if (v8 != 0) {
        *(_QWORD*)(v8 + 48) = v7;
        *(_QWORD*)(v7 + 56) = *(_QWORD*)(a1 + 40);
      }
      *(_QWORD*)(a1 + 40) = v7;
      *(_QWORD*)(v7 + 24) = "talk::Seq";
      *(_QWORD*)(v7 + 32) = a1;
      *(_DWORD*)(v7 + 140) = (unsigned int)game_HashString32("talk::Seq");
      *(_QWORD*)(v7 + 64) = 0;
      *(_QWORD*)(v7 + 72) = 24;
      *(_QWORD*)(v7 + 80) = 1;
      *(_QWORD*)(v7 + 8) = &GameData_216de68;
      *(_QWORD*)(v7 + 16) = &GameData_216de68;
      (*(void (**)(__int64))(*(_QWORD*)v7 + 32LL))(v7);
      result = (*(__int64 (**)(__int64))(*(_QWORD*)v7 + 136LL))(v7);
      if ((result & 1) != 0 && (*(_WORD*)(v7 + 136) & 0x100) == 0) {
        *(_WORD*)(v7 + 136) |= 0x100u;
      }
      v9 = *(_BYTE**)(v7 + 32);
      v10 = v9[138];
      if (v10 == 0) {
        result =
            (*(__int64 (**)(_QWORD))(*(_QWORD*)v9 + 64LL))(*(_QWORD*)(v7 + 32));
        v10 = v9[138];
      }
      v9[138] = v10 + 1;
      *(_WORD*)(v7 + 136) |= 2u;
    }
  }
  return result;
}

__attribute__((swiftcall)) void TelopResult_17619f0(PSEUDO_X8 x8_, __int64 a1,
                                                    int a2)
{
  _QWORD* a3 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  char* v8;
  __int64 v9;
  char* v10;
  _QWORD* result;
  __int64 v12;
  _QWORD v13[2];
  char* v14;

  v5 = game_util_Format("%s_%02d", GameData_20bd060[a2], 0);
  v6 = strlen(v5);
  if (v6 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(v6);
  }
  v7 = v6;
  if (v6 >= 0x17) {
    if ((v6 | 7) == 0x17) {
      v9 = 26;
    }
    else {
      v9 = (v6 | 7) + 1;
    }
    v8 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v9, 16,
                                               0);
    v13[1] = v7;
    v14 = v8;
    v13[0] = v9 | 1;
    goto LABEL_9;
  }
  LOBYTE(v13[0]) = 2 * v6;
  v8 = (char*)v13 + 1;
  if (v6 != 0) {
  LABEL_9:
    memmove(v8, v5, v7);
  }
  v8[v7] = 0;
  if ((v13[0] & 1) != 0) {
    v10 = v14;
  }
  else {
    v10 = (char*)v13 + 1;
  }
  result = (LayoutAccessor_1560070((void*)(a3), a1 + 168, v10), (void*)(a3));
  if ((v13[0] & 1) != 0 && v14 != nullptr) {
    v12 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v12 = 56;
    }
    {
      (_QWORD*)nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v12, (_QWORD)(v14));
      return;
    }
  }
  {
    result;
    return;
  }
}

__int64 TelopResult_1762890(__int64 a1, int a2)
{
  __int64* v3;
  __int64 result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  int v10;
  __int64 v11;
  _QWORD v12[2];
  struct {
    _QWORD* v13;
    __int64 v14;
  } v13_;

  v3 = GameRoutine_1760e40_alt1(a1, 0);
  v12[0] = "L_Txt";
  v12[1] = 5;
  GameRoutine_9b8fe0_alt1((void*)(&v13_.v13), v3, v12);
  result = v13_.v14;
  if (v13_.v14 != 0) {
    v5 = std___1___shared_weak_count_lock_alt1(v13_.v14);
    v6 = (__int64)v13_.v13;
    result = v13_.v14;
    if (v13_.v14 != 0) {
      result = std___1___shared_weak_count___release_weak_alt1(v13_.v14);
    }
    if (v5 == 0 || v6 == 0) {
      if (v5 == 0) {
        return result;
      }
      goto LABEL_22;
    }
    GameHr_a51e10(*msg_MessageManager_instance__ptr[0] + 14704, 0, a2, 2);
    TextBoxEx_188ab20_alt1(v6, "MID_Sys_Result_Msg_GetGold");
    TextBoxEx_188aa00_alt1((void*)(&v13_.v13), v6, 0);
    result = v13_.v14;
    if (v13_.v14 != 0) {
      v7 = std___1___shared_weak_count_lock_alt1(v13_.v14);
      v8 = v13_.v13;
      result = v13_.v14;
      if (v13_.v14 != 0) {
        result = std___1___shared_weak_count___release_weak_alt1(v13_.v14);
      }
      if (v7 != 0 && v8 != nullptr) {
        v9 = v8[10];
        if (v9 != 0) {
          v10 = *(int*)((char*)((int*)0x24LL) + (_QWORD)GameData_212da30);
          v11 =
              (*(__int64 (**)(_QWORD, _QWORD))(*(_QWORD*)v9 + 88LL))(v8[10], 0);
          if (v11 != 0) {
            *(_DWORD*)(v11 + 12) = v10;
          }
          if ((Manager_136a920_alt1(ui_Manager_instance_ + 1264, v9, 0, 7u,
                                    "IconStock_Gold") &
               1) != 0) {
            GameRoutine_18899f0_alt1((__int64)v8);
          }
        }
        result = (*(__int64 (**)(_QWORD*, __int64))(*v8 + 40LL))(v8, 1);
        goto LABEL_20;
      }
      if (v7 != 0) {
      LABEL_20:
        if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
          result = std___1___shared_weak_count___release_weak_alt1(v7);
        }
      }
    }
  LABEL_22:
    if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
      return std___1___shared_weak_count___release_weak_alt1(v5);
    }
  }
  return result;
}

__int64 TelopResult_1762ce0(__int64 a1, __int64 a2, int a3, const char* a4)
{

#pragma clang fp contract(off)
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  char* v11;
  const char* v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  char v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  _QWORD v24[2];
  struct {
    __int64 v25;
    __int64 v26;
  } v25_;
  float v27;

  v7 = GameRoutine_1760e40_alt1(a1, 0x13u);
  v24[0] = "L_Txt";
  v24[1] = 5;
  GameRoutine_9b8fe0_alt1((void*)(&v25_.v25), v7, v24);
  if (v25_.v26 != 0) {
    v8 = std___1___shared_weak_count_lock_alt1(v25_.v26);
    v9 = v25_.v25;
    if (v25_.v26 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v25_.v26);
    }
    if (v8 != 0 && v9 != 0) {
      v10 = *msg_MessageManager_instance__ptr[0];
      v11 = GameHr_6ed030(a2);
      if (v11 != nullptr) {
        v12 = v11;
      }
      else {
        v12 = *msg_MessageManager_empty_text__ptr;
      }
      GameRoutine_60a020_alt1(v10 + 14704, v12);
      TextBoxEx_188ab20_alt1(v9, a4);
    }
    else if (v8 == 0) {
      goto LABEL_13;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
      std___1___shared_weak_count___release_weak_alt1(v8);
    }
  }
LABEL_13:
  v13 = LayoutAccessor_155fbe0_alt1(v7, "L_InfoDetail");
  game_gameui_1592340_alt1(v13, a2, a3);
  LayoutAccessor_1562cf0_alt2((__int64)v7, (unsigned int*)"ArrowOff");
  v14 = ui_LayoutAccessor_FindTextBox_alt2(v7, "L_Txt/T_Txt");
  if (v14 != 0) {
    v15 = v14;
    v16 = (_QWORD*)ui_LayoutAccessor_FindTextBox_alt2(v7, "L_Txt/T_Txt");
    if (v16 != nullptr) {
      GameRoutine_190a0c0_alt1((float*)&v25_.v25, (__int64)v24, &v27, v16,
                               v16[27]);
      v17 = v24[0];
    }
    else {
      v17 = 0;
    }
    v18 = *(_BYTE*)(v15 + 88);
    *(_QWORD*)(v15 + 80) = v17;
    *(_BYTE*)(v15 + 88) = v18 | 0x10;
  }
  v19 = ui_LayoutAccessor_FindAlignment_alt1(v7, "A_Contents");
  if (v19 != 0) {
    Alignment_56b600_alt1(v19);
    v20 = v7[1];
    if (v20 != 0) {
      v21 = std___1___shared_weak_count_lock_alt1(v20);
      if (v21 != 0) {
        v22 = v21;
        if (*v7 != 0) {
          ControlCreator_13633c0_alt1(*v7);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
          std___1___shared_weak_count___release_weak_alt1(v22);
        }
      }
    }
  }
  return game_17356e0(v7, "A_Contents");
}

__int64 TelopResult_17630f0(__int64 a1, unsigned __int8* a2, const char* a3)
{
  __int64* v5;
  __int64* v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64* v10;
  int* v11;
  __int64* v12;
  int* v13;
  __int64 result;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int8* v18;
  const char* v19;
  __int64 v20;
  __int64 v21;
  _QWORD v22[2];
  struct {
    __int64 v23;
    __int64 v24;
  } v23_;

  v5 = GameRoutine_1760e40_alt1(a1, 4u);
  LayoutAccessor_1562cf0_alt2((__int64)v5, (unsigned int*)"Success");
  v6 = LayoutAccessor_155fbe0_alt1(v5, "L_RelianceLv_00");
  v7 = ui_LayoutAccessor_FindPane_alt1(v6, "Icon");
  if (v7 != 0) {
    v7 = __dynamic_cast(v7, GameData_212d670[0], GameData_212d678[0], 0);
  }
  GameRoutine_1842180_alt1(v7, 3);
  v8 = LayoutAccessor_155fbe0_alt1(v5, "L_RelianceLv_01");
  v9 = ui_LayoutAccessor_FindPane_alt1(v8, "Icon");
  if (v9 != 0) {
    v9 = __dynamic_cast(v9, GameData_212d670[0], GameData_212d678[0], 0);
  }
  GameRoutine_1842180_alt1(v9, 5);
  v10 = GameData_212c8a0;
  v11 = GameRoutine_92b880_alt1(
      *(_QWORD*)(*(_QWORD*)(*GameData_212c8a0 + 64) + 8LL * *a2), 3, a2[1]);
  v12 = GameData_212c880[0];
  GameHr_17633b0(
      v5, "L_SkillInfoTitle_00",
      *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * (*v11 & 0xFFF)));
  v13 = GameRoutine_92b880_alt1(*(_QWORD*)(*(_QWORD*)(*v10 + 64) + 8LL * *a2),
                                5, a2[1]);
  GameHr_17633b0(v5, "L_SkillInfoTitle_01",
                 *(_QWORD*)(*(_QWORD*)(*v12 + 64) + 8LL * (*v13 & 0xFFF)));
  game_17356e0(v5, "A_Contents");
  v22[0] = "L_Txt";
  v22[1] = 5;
  GameRoutine_9b8fe0_alt1((void*)(&v23_.v23), v5, v22);
  result = v23_.v24;
  if (v23_.v24 != 0) {
    v15 = std___1___shared_weak_count_lock_alt1(v23_.v24);
    v16 = v23_.v23;
    result = v23_.v24;
    if (v23_.v24 != 0) {
      result = std___1___shared_weak_count___release_weak_alt1(v23_.v24);
    }
    if (v15 == 0 || v16 == 0) {
      if (v15 == 0) {
        return result;
      }
      goto LABEL_24;
    }
    v17 = *msg_MessageManager_instance__ptr[0];
    v18 = Unit_931120_alt1(a2);
    if (v18 != nullptr) {
      v19 = (const char*)v18;
    }
    else {
      v19 = *msg_MessageManager_empty_text__ptr;
    }
    GameRoutine_60a020_alt1(v17 + 14704, v19);
    TextBoxEx_188ab20_alt1(v16, a3);
    TextBoxEx_188aa00_alt1((void*)(&v23_.v23), v16, 0);
    result = v23_.v24;
    if (v23_.v24 != 0) {
      v20 = std___1___shared_weak_count_lock_alt1(v23_.v24);
      v21 = v23_.v23;
      result = v23_.v24;
      if (v23_.v24 != 0) {
        result = std___1___shared_weak_count___release_weak_alt1(v23_.v24);
      }
      if (v20 != 0 && v21 != 0) {
        EmbeddedImage_1889bf0_alt1(
            v21, *(_QWORD*)(*(_QWORD*)(*v10 + 64) + 8LL * *a2));
        result =
            (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v21 + 40LL))(v21, 1);
        goto LABEL_22;
      }
      if (v20 != 0) {
      LABEL_22:
        if (atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
          result = std___1___shared_weak_count___release_weak_alt1(v20);
        }
      }
    }
  LABEL_24:
    if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
      return std___1___shared_weak_count___release_weak_alt1(v15);
    }
  }
  return result;
}

__int64 TelopResult_1763ac0(__int64 a1, signed int a2, unsigned int a3)
{
  __int64* v6;
  const char* v7;
  __int64* v8;
  __int64 v9;
  char* v10;
  __int64 v11;
  __int64 v12;
  __int64 result;
  struct {
    __int64 v14;
    __int64 v15;
    __int64 (**v16)();
    unsigned __int64 v17;
    unsigned __int64 v18;
    unsigned __int64 v19;
    int v20;
    int v21;
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
  } v14_;

  v6 = GameRoutine_1760e40_alt1(a1, 0x10u);
  v7 = "MID_Sys_HonorLv";
  v8 = v6;
  if (game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
    v7 = "MID_Sys_HonorLV_Part3";
  }
  v14_.v22 = -1;
  v14_.v23 = -1;
  v14_.v24 = -1;
  v14_.v25 = -1;
  v9 = *msg_MessageManager_instance__ptr[0];
  v14_.v26 = -1;
  v14_.v27 = -1;
  v14_.v28 = -1;
  v14_.v29 = -1;
  v14_.v30 = -1;
  v14_.v31 = -1;
  v14_.v32 = -1;
  v14_.v33 = -1;
  v14_.v16 = msg_TagSelector_vtable;
  v14_.v17 = 0xFFFF0001FFFF0000LL;
  v14_.v18 = 0xFFFF0004FFFF0002LL;
  v14_.v19 = 0xFFFF0006FFFF0005LL;
  v14_.v34 = 8;
  v14_.v20 = -65529;
  v14_.v21 = -65528;
  v10 = GameRoutine_a4dbe0_alt1(v9, v7, 0);
  if (v10 != nullptr) {
    v11 = (__int64)v10;
    v12 = ui_LayoutAccessor_FindTextBox_alt1(v8, (__int64)"T_Title");
    if (v12 != 0) {
      GameRoutine_156c5d0_alt1(v12, v11, 0);
    }
  }
  LayoutAccessor_1562cf0_alt1((__int64)v8, "Type_00");
  TelopResult_17619f0((void*)(&v14_.v14), a1, 16);
  GameRoutine_174f240_alt1((__int64*)(a1 + 984), &v14_.v14, a2, a3);
  result = v14_.v15;
  if (v14_.v15 != 0) {
    return std___1___shared_weak_count___release_weak_alt1(v14_.v15);
  }
  return result;
}

#pragma GCC visibility pop
