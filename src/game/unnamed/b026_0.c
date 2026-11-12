#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern char GameData_1a9f09e;
extern _UNKNOWN GameData_1ac690d;
extern _UNKNOWN* GameData_1f50948;
extern _UNKNOWN* GameData_1fa8308;
extern __int64 (*GameData_210eb10[])();
extern __int64 (*GameData_210ef80[])();
extern __int64 (*GameData_210f050[])();
extern __int64 (*GameData_2110448[])();
extern _UNKNOWN GameData_21109e8;
extern char* GameData_2110a28[7];
extern __int64 (*GameData_2116180[])();
extern __int64 GameData_21175a8;
extern __int64 GameData_212bf68;
extern __int64* GameData_212c010[3];
extern __int64 GameData_212c610;
extern __int64* GameData_212c738[2];
extern __int64* GameData_212c880[5];
extern __int64* GameData_212cc60[59];
extern __int64* GameData_212cce0[43];
extern __int64* GameData_212d480[2];
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64 GameData_212d690;
extern __int64* GameData_212d6a8;
extern __int64* GameData_212dcd0;
extern char** GameData_212def8;
extern __int64* GameData_212e008[9];
extern __int64* GameData_212e030[4];
extern __int64* GameData_212e348;
extern __int64* GameData_212fab0[5];
extern __int64* GameData_212fc98[3];
extern __int64* GameData_2130618[3];
extern __int64 GameData_2131c18[55];
extern __int64* GameData_21322d8[4];
extern char* GameData_2175a08[4];
extern char* GameData_2175a10[3];
extern char* GameData_2175a18[2];
extern char* GameData_2175a20;
extern char* GameData_2175a28;
extern __int64 GameData_2175a40;
extern int GameData_2175a48;
extern __int64 GameData_21c9730;
extern __int64 GameData_21c9738;
extern __int64 GameData_21c9748;
extern __int64 GameData_21c9b20;
extern __int64 GameData_21ca018;
extern __int64 GameData_21caab0;
extern __int64 GameData_22416f0;
extern __int64 GameData_226b6b0;
extern __int64 GameData_226b6b8;
extern __int64 GameData_226b6c0;
extern __int64 GameData_226b6c8;
extern __int64 GameData_226b6d0;
extern __int64 GameData_226b6d8;
extern __int64 GameData_226b6e0;
extern __int64 GameData_226b6e8;
extern __int64 GameData_226b6f0;
extern __int64 GameData_226b6f8;
extern __int64 GameData_226b700;
extern __int64 GameData_226b708;
extern __int64 GameData_226b710;
extern __int64 GameData_226b718;
extern __int64 GameData_226b720;
extern __int64 GameData_226b728;
extern __int64 GameData_226b730;
extern __int64 GameData_226b738;
extern __int64 GameData_226b740;
extern __int64 GameData_226b748;
extern __int64 GameData_226b750;
extern __int64 GameData_226b758;
extern __int64 GameData_226b760;
extern __int64 GameData_226b768;
extern __int64 GameData_226b770;
extern __int64 GameData_226b778;
extern __int64 GameData_226b780;
extern __int64 GameData_226b788;
extern __int64 GameData_226b790;
extern __int64 GameData_226b798;
extern __int64 GameData_226b7a0;
extern __int64 GameData_226b7a8;
extern __int64 GameData_226b7b0;
extern __int64 GameData_226b7b8;
extern __int64 GameData_226b7c0;
extern __int64 GameData_226b7c8;
extern __int64 GameData_226b7d0;
extern __int64 GameData_226b7d8;
extern __int64 GameData_226b7e0;
extern __int64 GameData_226b7e8;
extern __int64 GameData_226b7f0;
extern __int64 GameData_226b7f8;
extern __int64 GameData_226b800;
extern __int64 GameData_226b808;
extern __int64 GameData_226b810;
extern __int64 GameData_226b818;
extern __int64 GameData_226b820;
extern __int64 GameData_226b828;
extern __int64 GameData_226b830;
extern __int64 GameData_226b838;
extern __int64 GameData_226b840;
extern __int64 GameData_226b848;
extern __int64 GameData_226b850;
extern __int64 GameData_226b858;
extern __int64 GameData_226b860;
extern __int64 GameData_226b880;
extern __int64 GameData_226b888;
extern __int64 GameData_226b8a0;
extern __int64 GameData_226b8a8;
extern __int64 GameData_226b8b0;
extern __int64 GameData_226b8b8;
extern __int64 GameData_226b8c0;
extern __int64 GameData_226b8c8;
extern __int64 GameData_226b8d0;
extern __int64 GameData_226b8d8;
extern __int64 GameData_226b8e0;
extern __int64 GameData_226b8e8;
__int64 GameRoutine_1014c50(_QWORD);
__int64 GameRoutine_1014fa0(_QWORD, _QWORD);
__int64 GameRoutine_10520(void);
__int64 GameRoutine_111a620(_QWORD);
__int64 GameRoutine_111a720(void);
__int64 GameRoutine_111b520(_QWORD, _QWORD);
__int64 GameRoutine_111bd80(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_111c720(_QWORD);
__int64 GameRoutine_112180(_QWORD, _QWORD);
__int64 GameRoutine_11c20(_QWORD, _QWORD);
__int64 GameRoutine_136a920(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_13e4ce0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_155e830(_QWORD, _QWORD);
__int64 GameRoutine_155ea30(_QWORD);
__int64 GameRoutine_155f480(_QWORD, _QWORD);
__attribute__((swiftcall)) void GameRoutine_1560070(PSEUDO_X8, _QWORD, _QWORD);
float GameRoutine_15610b0(_QWORD, _QWORD);
__int64 GameRoutine_15621a0(_QWORD, _QWORD);
__int64 GameRoutine_1562680(_QWORD, _QWORD, float);
__int64 GameRoutine_1562cf0(_QWORD, _QWORD);
__int64 GameRoutine_1567590(_QWORD, _QWORD);
__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_156c910(_QWORD, const char*, ...);
__int64 GameRoutine_15717a0(_QWORD, _QWORD);
__int64 GameRoutine_15740c0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1575e70(_QWORD, _QWORD);
__int64 GameRoutine_1584200(_QWORD, _QWORD);
__int64 GameRoutine_159e890(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_15ebb10(_QWORD, _QWORD);
__int64 GameRoutine_16dcd30(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16e66c0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16e6880(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1840740(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1842430(_QWORD, _QWORD);
__int64 GameRoutine_1902000(__int64);
__int64 GameRoutine_1904750(_QWORD, _QWORD);
__int64 GameRoutine_1905e40(void);
__int64 GameRoutine_1907d20(__int64 result, __int64, __int64*);
__int64 GameRoutine_1909c50(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1909d60(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_190a960(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_190aaf0(void);
__int64 GameRoutine_190c920(_QWORD, _QWORD);
__int64 GameRoutine_190e8c0(_QWORD, _QWORD);
__int64 GameRoutine_19119d0(void);
__int64 GameRoutine_1916be0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1917900(__int64 result, _QWORD*);
__int64 GameRoutine_1917b30(_QWORD, _QWORD);
__int64 GameRoutine_1917d70(_QWORD, _QWORD);
_QWORD* GameRoutine_1919040(_QWORD*, _QWORD*);
__int64* GameRoutine_1919a80(__int64* result);
__int64 GameRoutine_191e700(__int64 result);
__int64 GameRoutine_191f280(_QWORD, _QWORD);
__int64 GameRoutine_1920610(void);
__int64 GameRoutine_19220e0(_QWORD);
__int64 GameRoutine_1922c00(_QWORD, _QWORD);
__int64 GameRoutine_19233d0(_QWORD);
__int64 GameRoutine_1923640(_QWORD, _QWORD);
__int64 GameRoutine_19332a0(__int64 result);
__int64 GameRoutine_19353a0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1935e90(_QWORD, _QWORD);
__int64 GameRoutine_1939d80(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1939ec0(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_193b220(_QWORD);
__int64 GameRoutine_193b240(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_193b3e0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64* GameRoutine_193bdc0(__int64* result);
__int64 GameRoutine_193c000(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_193c370(__int64);
__int64 GameRoutine_193c760(__int64);
__int64 GameRoutine_193cec0(__int64 result);
__int64 GameRoutine_1942c80(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1944d10(_QWORD, _QWORD);
long double GameRoutine_19ee0(float, double, float);
__int64 GameRoutine_1a09b70(_QWORD);
__int64 GameRoutine_1a09b80(_QWORD);
__int64 GameRoutine_1a09c50(_QWORD);
__int64 GameRoutine_1a09c60(_QWORD, _QWORD);
__int64 GameRoutine_1a09c70(_QWORD);
__int64 GameRoutine_1a09ce0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a09cf0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a09d30(_QWORD, _QWORD);
__int64 GameRoutine_1a09f60(_QWORD);
__int64 GameRoutine_1a0a0c0(long double, double);
__int64 GameRoutine_1a0a4e0(_QWORD);
__int64 GameRoutine_1a0a540(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0a6c0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0b940(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0b950(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1eb20(_QWORD);
__int64 GameRoutine_1f620(_QWORD);
__int64 GameRoutine_1f640(void);
__int64 GameRoutine_2b0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_4d790(_QWORD);
__int64 GameRoutine_4e1b0(_QWORD);
__int64 GameRoutine_4e1d0(_QWORD);
__int64 GameRoutine_4e570(_QWORD);
__int64 GameRoutine_4e590(_QWORD);
__int64 GameRoutine_4e8a0(_QWORD);
__int64 GameRoutine_566d50(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 GameRoutine_60a060(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60a230(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
__int64 GameRoutine_60abc0(_QWORD, _QWORD);
__int64 GameRoutine_64dde0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_64df20(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_657850(void);
void __attribute__((noreturn)) GameRoutine_65c760(_QWORD);
__int64 GameRoutine_6fbd80(void);
__int64 GameRoutine_7a7dc0(const char*, ...);
__int64 GameRoutine_7a86e0(_QWORD);
__int64 GameRoutine_7e74e0(_QWORD);
__int64 GameRoutine_90dc20(_QWORD, _QWORD);
__int64 GameRoutine_957180(_QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a9a7e0(void);
__int64 GameRoutine_eae0(_QWORD, float);
__int64 GameRoutine_eb80(float);
__int64 GameRoutine_ebb0(double);
__int64 GameRoutine_ff20(_QWORD, float);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64* GameRoutine_1939d80_alt1(__int64* result, __int64*, __int64*, __int64*,
                                  __int64) __asm__("GameRoutine_1939d80");
__int64* cspine_SpineModel_AsyncArgument_Assign(__int64* result, __int64);
__int64 GameRoutine_15ebb10_alt1(__int64 result,
                                 __int64) __asm__("GameRoutine_15ebb10");
__int64 GameRoutine_190a960_alt1(__int64*,
                                 __int64) __asm__("GameRoutine_190a960");
__int64 GameRoutine_60a020_alt1(__int64,
                                const char*) __asm__("GameRoutine_60a020");
__int64 LayoutAccessor_15740c0(__int64*, __int64, char, _BYTE*, char);
__int64 NoticeInfoDialog_1904750(__int64, int);
__int64 PageTab_16e6880(__int64, int, int, int);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_menu_PageTab_SetupImage(int*, __int64, __int64, int, int, int);
__int64 spine_Skeleton_getSlots(_QWORD);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
bool GameRoutine_1939ec0_alt1(__int64*, char*,
                              __int64) __asm__("GameRoutine_1939ec0");
bool game_159e890(__int64, char, __int64);
char* TextSelector_1907d20(char* result, __int64, __int64*);
extern __int64 fw_memory_g_heap_manager_ptr;
float TextTagProcessor_1909d60(__int64, unsigned __int8*, unsigned __int8*,
                               __int64*);
void GameRoutine_193c000_alt1(__int64*, unsigned __int64,
                              __int64*) __asm__("GameRoutine_193c000");
void TextTagProcessor_1909c50(__int64, unsigned int, __int64);
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
void cspine_SpineModel_AsyncArgument_Destroy_AsyncArgument(__int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 GameHr_1904650(__int64 a1);
__int64 GameHr_1905e40(_QWORD* a1, unsigned __int8* a2);
void GameHr_1909a50(__int64 a1, __int64* a2, __int64* a3, __int64 a4);
void GameHr_1909ba0(__int64 a1, __int64* a2, __int64* a3, __int64 a4);
__int64 GameHr_1916ab0(__int64 a1, const char* a2, __int64 a3, __int64* a4);
__int64 GameHr_1917600(__int64 result, __int64 a2);
__int64 GameHr_192d3d0(__int64 a1);
__int64 GameHr_1931560(__int64 a1);
__int64* GameHr_19390c0(__int64* result, __int64* a2, __int64 a3, __int64 a4,
                        char a5);
void GameHr_193bea0(int a1);

__int64 GameHr_1902180(__int64 a1, unsigned __int8 a2)
{
  const char* v2;
  const char* v3;
  __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v8;
  unsigned __int64 v9;
  _QWORD* v10;
  _QWORD* v11;
  unsigned __int64 v12;
  unsigned int v13;
  __int64 v14;

  v2 = (const char*)*(&GameData_1fa8308 + a2);
  if ((*(_BYTE*)a1 & 1) != 0) {
    v3 = *(const char**)(a1 + 16);
  }
  else {
    v3 = (const char*)(a1 + 1);
  }
  v4 = GameRoutine_7a7dc0("%s_%s", v3, v2);
  v5 = GameRoutine_7a86e0(v4);
  if (v5 != 0) {
    v6 = *(_QWORD*)(GameData_21ca018 + 96);
    if (v6 != 0 && *(_QWORD*)(GameData_21ca018 + 112) != 0) {
      v8 = v6 - 1;
      if ((v6 & (v6 - 1)) != 0) {
        v9 = v5;
        if (v5 >= v6) {
          v9 = v5 % v6;
        }
      }
      else {
        v9 = v8 & v5;
      }
      v10 = *(_QWORD**)(*(_QWORD*)(GameData_21ca018 + 88) + 8 * v9);
      if (v10 != nullptr) {
        v11 = (_QWORD*)*v10;
        if (v11 != nullptr) {
          if ((v6 & v8) == 0) {
            while (1) {
              v14 = v11[1];
              if (v14 == v5) {
                if (v11[2] == v5) {
                  return v11[3] != 0;
                }
              }
              else if ((v14 & v8) != v9) {
                return 0;
              }
              v11 = (_QWORD*)*v11;
              v13 = 0;
              if (v11 == nullptr) {
                return v13;
              }
            }
          }
          do {
            v12 = v11[1];
            if (v12 == v5) {
              if (v11[2] == v5) {
                return v11[3] != 0;
              }
            }
            else {
              if (v12 >= v6) {
                v12 %= v6;
              }
              if (v12 != v9) {
                return 0;
              }
            }
            v11 = (_QWORD*)*v11;
          } while (v11 != nullptr);
        }
      }
    }
  }
  return 0;
}

__int64 GameHr_19023d0(__int64 a1, __int64 a2)
{
  __int64 result;
  _QWORD* v4;
  _QWORD* v5;
  __int64* v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;

  result = GameRoutine_1902000(a2);
  if ((result & 1) != 0) {
    v4 = (_QWORD*)GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 1248, 16, 0);
    v9 = 0;
    v10 = 0;
    GameRoutine_16dcd30(v4, "GmapShopGuideMenu", &v9, 0);
    v5 = v4;
    v6 = GameData_212d6a8;
    *v4 = GameData_212d6a8 + 2;
    v4[22] = v6 + 143;
    v4[132] = v6 + 169;
    v7 = v10;
    if (v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      v8 = v5;
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      GameRoutine_1a09c50(v7);
      v5 = v8;
    }
    *((_DWORD*)v5 + 270) = 0;
    v5[136] = 0;
    v5[137] = 0;
    v5[138] = 0;
    v5[134] = 0xFFFFFFFFLL;
    *v5 = GameData_210eb10;
    v5[144] = 0;
    v5[146] = 0;
    v5[147] = 0;
    *((_BYTE*)v5 + 1184) = 0;
    *((_DWORD*)v5 + 300) = 0;
    v5[151] = a2;
    v5[152] = 0;
    v5[153] = 0;
    v5[22] = GameData_210ef80;
    v5[132] = GameData_210f050;
    v5[154] = 0;
    *((_DWORD*)v5 + 278) = 2;
    *((_BYTE*)v5 + 361) = 1;
    return GameRoutine_657850();
  }
  return result;
}

__int64 GameHr_1904650(__int64 a1)
{
  int v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  struct {
    __int64 v9;
    __int64 v10;
  } v9_;

  LayoutAccessor_1560070((void*)(&v9_.v9), (__int64*)(a1 + 848), "L_PageTab");
  v2 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 192LL))(a1);
  if (v9_.v10 != 0) {
    v3 = std___1___shared_weak_count_lock(v9_.v10);
    if (v3 != 0) {
      v4 = v9_.v9;
      v5 = v3;
      if (v9_.v9 != 0) {
        *(_DWORD*)(a1 + 1096) = 1;
        v6 = v9_.v10;
        if (v9_.v10 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v9_.v10 + 16), 1u,
                                    memory_order_relaxed);
        }
        v7 = *(_QWORD*)(a1 + 1160);
        *(_QWORD*)(a1 + 1152) = v4;
        *(_QWORD*)(a1 + 1160) = v6;
        if (v7 != 0) {
          std___1___shared_weak_count___release_weak(v7);
        }
        PageTab_16e6880(a1 + 1056, v2, 14, 15);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        std___1___shared_weak_count___release_weak(v5);
      }
    }
    if (v9_.v10 != 0) {
      std___1___shared_weak_count___release_weak(v9_.v10);
    }
  }
  return NoticeInfoDialog_1904750(a1, 0);
}

unsigned __int64* GameHr_1905100(unsigned __int64* result)
{
  unsigned __int64 v1;
  unsigned __int64 v2;
  unsigned __int64 v3;
  unsigned __int64* v4;
  __int64* v5;
  unsigned __int64* v6;
  unsigned __int64 v7;
  char* v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  unsigned __int64 v14;

  v1 = *result;
  v2 = result[2] - *result;
  v3 = result[1] - *result;
  if (v2 > v3) {
    v4 = result;
    v5 = GameData_212d480[0];
    if ((unsigned __int64)(0x6DB6DB6DB6DB6DB7LL * ((__int64)v3 >> 3) -
                           0x492492492492493LL) >= 0xFB6DB6DB6DB6DB6ELL) {
      result = (unsigned __int64*)(*(
          __int64 (**)(_QWORD, unsigned __int64, __int64))(
          **(_QWORD**)GameData_212d480[0] + 16LL))(*GameData_212d480[0], v3,
                                                   32);
      v1 = *v4;
      v6 = result;
      if (v3 >= v4[2] - *v4) {
      LABEL_4:
        if (v6 == nullptr) {
          return result;
        }
        return (unsigned __int64*)(*(__int64 (**)(__int64))(*(_QWORD*)*v5 +
                                                            24LL))(*v5);
      }
    }
    else {
      v6 = nullptr;
      if (v3 >= v2) {
        goto LABEL_4;
      }
    }
    v7 = v4[1];
    v8 = (char*)v6 + v3;
    v9 = (unsigned __int64)v6 + v3 + v1 - v7;
    if (v1 != v7) {
      v10 = (unsigned __int64)v6 + v3 + v1 - v7;
      do {
        *(_QWORD*)v10 = *(_QWORD*)v1;
        *(_DWORD*)(v10 + 8) = *(_DWORD*)(v1 + 8);
        v11 = *(_QWORD*)(v1 + 16);
        v12 = *(_QWORD*)(v1 + 24);
        v13 = *(_DWORD*)(v1 + 32);
        *(_QWORD*)(v10 + 40) = 0;
        v14 = v10 + 40;
        *(_DWORD*)(v14 + 8) = 0x2000;
        *(_DWORD*)(v14 - 8) = v13;
        *(_QWORD*)(v14 - 24) = v11;
        *(_QWORD*)(v14 - 16) = v12;
        result = (unsigned __int64*)GameRoutine_112180(v14, v1 + 40);
        v1 += 56LL;
        v10 = v14 + 16;
      } while (v1 != v7);
      v1 = *v4;
    }
    *v4 = v9;
    v4[1] = (unsigned __int64)v8;
    v4[2] = (unsigned __int64)v8;
    if (v1 != 0) {
      return (unsigned __int64*)(*(__int64 (**)(__int64))(*(_QWORD*)*v5 +
                                                          24LL))(*v5);
    }
  }
  return result;
}

__int64 GameHr_1905b10(int a1, _DWORD* a2)
{
  int v2;
  int v3;
  int v4;
  unsigned int v5;

  if (a1 == 4) {
    v2 = 204;
    v3 = 38656;
    v4 = 2424832;
    v5 = -16777216;
  }
  else if (a1 == 5) {
    v2 = 55;
    v3 = 13312;
    v4 = 3145728;
    v5 = -16777216;
  }
  else {
    v5 = *a2 & 0xFF000000;
    v4 = *a2 & 0xFF0000;
    v3 = *a2 & 0xFF00;
    v2 = (unsigned __int8)*a2;
  }
  return v4 | v5 | v3 | v2;
}

char* GameHr_1905ba0(char** a1, char* a2)
{
  char* v2;
  char* v3;
  int v4;
  char** v5;
  unsigned __int16 v6;
  char* i;
  char* j;
  unsigned int v10;
  unsigned int v11;

  v2 = a1[2];
  v3 = a1[3];
  *a1 = nullptr;
  for (a1[1] = nullptr; v3 != v2; *((_WORD*)v3 + 8) = 0) {
    *((_DWORD*)v3 - 6) = 0;
    v3 -= 24;
    *((_QWORD*)v3 + 1) = 0;
  }
  a1[3] = v2;
  if (a2 == nullptr) {
    return nullptr;
  }
  v4 = (unsigned __int8)*a2;
  if (*a2 < 0) {
    if ((v4 & 0xC0) != 0x80 &&
        ((v4 & 0xE0) == 0xC0 && a2[1] <= -65 ||
         (v4 & 0xF0) == 0xE0 && a2[1] <= -65 && a2[2] < -64 ||
         (v4 & 0xF8) == 0xF0 && a2[1] <= -65 && a2[2] <= -65 && a2[3] < -64)) {
      v6 = 0;
      for (i = a2;; v4 = (unsigned __int8)*i) {
        if ((v4 & 0x80) != 0) {
          if ((v4 & 0xC0) == 0x80) {
            goto LABEL_58;
          }
          if ((v4 & 0xE0) == 0xC0 && i[1] < -64) {
            v11 = 2;
          }
          else if ((v4 & 0xF0) == 0xE0 && i[1] <= -65 && i[2] < -64) {
            v11 = 3;
          }
          else {
            if ((v4 & 0xF8) != 0xF0 || i[1] > -65 || i[2] > -65 ||
                i[3] >= -64) {
            LABEL_58:
              if (v6 != 0) {
                *a1 = a2;
                a1[1] = (char*)v6;
              }
              else {
                *a1 = nullptr;
                a1[1] = nullptr;
              }
              return a1[1];
            }
            v11 = 4;
          }
        }
        else {
          if (v4 == 0 || v4 == 14) {
            goto LABEL_58;
          }
          v11 = 1;
        }
        i += v11;
        v6 += v11;
      }
    }
    return nullptr;
  }
  if (*a2 != 0) {
    if (v4 != 14 && v4 != 15) {
      v6 = 0;
      for (j = a2;; v4 = (unsigned __int8)*j) {
        if ((v4 & 0x80) != 0) {
          if ((v4 & 0xC0) == 0x80) {
            goto LABEL_58;
          }
          if ((v4 & 0xE0) == 0xC0 && j[1] < -64) {
            v10 = 2;
          }
          else if ((v4 & 0xF0) == 0xE0 && j[1] <= -65 && j[2] < -64) {
            v10 = 3;
          }
          else {
            if ((v4 & 0xF8) != 0xF0 || j[1] > -65 || j[2] > -65 ||
                j[3] >= -64) {
              goto LABEL_58;
            }
            v10 = 4;
          }
        }
        else {
          if (v4 == 0 || v4 == 14) {
            goto LABEL_58;
          }
          v10 = 1;
        }
        j += v10;
        v6 += v10;
      }
    }
    v5 = a1;
    GameRoutine_1905e40();
    a1 = v5;
  }
  return a1[1];
}

__int64 GameHr_1905e40(_QWORD* a1, unsigned __int8* a2)
{
  unsigned __int64 v2;
  __int64 v3;
  __int64* i;
  int v7;
  int v8;
  unsigned __int8* v9;
  unsigned int v10;
  __int16 v11;
  unsigned __int8* v12;
  int v13;
  int v14;
  __int64 v15;
  unsigned __int64 v16;
  char v17;
  __int64 v18;
  int v19;
  int v20;
  __int64 v21;
  unsigned __int64 v22;
  unsigned __int8* v23;
  unsigned __int64 v24;
  unsigned __int8* v25;
  int v26;
  __int16 v27;
  __int16 v28;
  unsigned __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  unsigned __int8* v33;
  unsigned __int64 v34;
  __int16 v35;
  unsigned __int16 v36;
  __int64 v37;
  unsigned __int64 v38;
  unsigned __int8* v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  unsigned __int8* v42;
  int v43;
  __int16 v44;
  __int16 v45;
  unsigned __int64 v46;
  unsigned __int64 v47;
  unsigned __int8* v48;
  __int16 v49;
  struct {
    int v51;
    char gap12_[4];
    unsigned __int8* v52;
    __int16 v53;
  } v51_;

  v2 = a1[2];
  v3 = a1[3];
  for (i = a1 + 2; v3 != v2; *(_WORD*)(v3 + 16) = 0) {
    *(_DWORD*)(v3 - 24) = 0;
    v3 -= 24;
    *(_QWORD*)(v3 + 8) = 0;
  }
  a1[3] = v2;
  v51_.v51 = 0;
  v7 = *a2;
  v9 = a2 + 1;
  v8 = *(unsigned __int16*)(a2 + 1);
  v10 = *(unsigned __int16*)(a2 + 3);
  v51_.v52 = nullptr;
  v51_.v53 = 0;
  if (v7 == 14) {
    v11 = (_WORD)a2 + 7;
  }
  else {
    if ((v7 & 0xFE) != 0xE) {
      goto LABEL_14;
    }
    v11 = (_WORD)a2 + 5;
  }
  v12 = nullptr;
  v13 = 0;
  if (v8 <= 1) {
    if (v8 == 0 || v10 < 8) {
      goto LABEL_10;
    }
    goto LABEL_14;
  }
  if (v8 == 2) {
    if (v10 != 0) {
      goto LABEL_14;
    }
  LABEL_10:
    v14 = 1;
    v51_.v52 = a2;
    v12 = a2;
    v51_.v51 = 1;
    v13 = (unsigned __int16)(v11 - (_WORD)a2);
    v51_.v53 = v11 - (_WORD)a2;
    v15 = (unsigned __int16)(v11 - (_WORD)a2);
    goto LABEL_15;
  }
  v14 = 0;
  v15 = 0;
  if (v8 == 3) {
    if ((v10 & 0xFFFFFFEF) == 0) {
      goto LABEL_10;
    }
  LABEL_14:
    v13 = 0;
    v12 = nullptr;
    v14 = 0;
    v15 = 0;
  }
LABEL_15:
  if (v2 >= a1[4]) {
    v16 = GameRoutine_190a960_alt1(a1 + 2, (__int64)&v51_.v51);
  }
  else {
    *(_DWORD*)v2 = v14;
    *(_QWORD*)(v2 + 8) = v12;
    v16 = v2 + 24;
    *(_WORD*)(v2 + 16) = v13;
  }
  v17 = v14 ^ 1;
  a1[3] = v16;
  if (v12 == nullptr) {
    v17 = 1;
  }
  if ((v17 & 1) != 0 || v13 == 0) {
    return a1[1];
  }
  if (*v12 == 14) {
    v18 = *(unsigned __int16*)(v12 + 5);
  }
  else {
    v18 = 0;
  }
  v19 = *(unsigned __int16*)(v12 + 1);
  v20 = *(unsigned __int16*)(v12 + 3);
  v21 = v18 + v15;
  if (v21 != 0) {
    *a1 = a2;
    a1[1] = v21;
    if (v19 != 3) {
      goto LABEL_27;
    }
  LABEL_34:
    if (v20 == 16) {
      v25 = &a2[v15];
      v26 = 9;
      v28 = 8;
      v51_.v51 = 9;
      v51_.v52 = &a2[v15];
    }
    else {
      if (v20 != 0) {
        return a1[1];
      }
      v25 = &a2[v15];
      v26 = 13;
      v27 = *(_WORD*)&a2[v15];
      v51_.v51 = 13;
      v51_.v52 = &a2[v15];
      v28 = v27 + 2;
    }
    v29 = a1[4];
    v51_.v53 = v28;
    if (v16 < v29) {
      *(_DWORD*)v16 = v26;
      *(_QWORD*)(v16 + 8) = v25;
      v30 = v16 + 24;
      *(_WORD*)(v16 + 16) = v28;
    LABEL_63:
      a1[3] = v30;
      return a1[1];
    }
    goto LABEL_62;
  }
  *a1 = 0;
  a1[1] = 0;
  if (v19 == 3) {
    goto LABEL_34;
  }
LABEL_27:
  if (v19 != 0) {
    return a1[1];
  }
  switch (v20) {
  case 16:
    v33 = &a2[v15];
    v34 = a1[4];
    v35 = *(_WORD*)v33;
    v51_.v51 = 13;
    v51_.v52 = v33;
    v36 = v35 + 2;
    v37 = v36;
    v51_.v53 = v36;
    if (v16 >= v34) {
      v24 = GameRoutine_190a960_alt1(i, (__int64)&v51_.v51);
    }
    else {
      *(_DWORD*)v16 = 13;
      *(_QWORD*)(v16 + 8) = v33;
      v24 = v16 + 24;
      *(_WORD*)(v16 + 16) = v36;
    }
    a1[3] = v24;
    v42 = &v33[v37];
    v43 = 13;
    v45 = *(_WORD*)&v33[v37];
    v51_.v51 = 13;
    v51_.v52 = &v33[v37];
    v44 = v45 + 2;
  LABEL_56:
    v46 = a1[4];
    v51_.v53 = v44;
    if (v24 < v46) {
      *(_DWORD*)v24 = v43;
      *(_QWORD*)(v24 + 8) = v42;
    LABEL_61:
      v30 = v24 + 24;
      *(_WORD*)(v24 + 16) = v44;
      goto LABEL_63;
    }
  LABEL_62:
    v30 = GameRoutine_190a960_alt1(i, (__int64)&v51_.v51);
    goto LABEL_63;
  case 3:
    v31 = a1[4];
    v51_.v51 = 3;
    v51_.v52 = &a2[v15];
    v51_.v53 = 1;
    if (v16 >= v31) {
      v32 = GameRoutine_190a960_alt1(i, (__int64)&v51_.v51);
    }
    else {
      *(_DWORD*)v16 = 3;
      *(_QWORD*)(v16 + 8) = &a2[v15];
      v32 = v16 + 24;
      *(_WORD*)(v16 + 16) = 1;
    }
    v38 = a1[4];
    v39 = &v9[v15];
    a1[3] = v32;
    v51_.v51 = 3;
    v51_.v52 = &v9[v15];
    v51_.v53 = 1;
    if (v32 >= v38) {
      v40 = GameRoutine_190a960_alt1(i, (__int64)&v51_.v51);
    }
    else {
      *(_DWORD*)v32 = 3;
      *(_QWORD*)(v32 + 8) = v39;
      v40 = v32 + 24;
      *(_WORD*)(v32 + 16) = 1;
    }
    v41 = a1[4];
    a1[3] = v40;
    v51_.v51 = 3;
    v51_.v52 = v39 + 1;
    v51_.v53 = 1;
    if (v40 >= v41) {
      v24 = GameRoutine_190a960_alt1(i, (__int64)&v51_.v51);
    }
    else {
      *(_DWORD*)v40 = 3;
      *(_QWORD*)(v40 + 8) = v39 + 1;
      v24 = v40 + 24;
      *(_WORD*)(v40 + 16) = 1;
    }
    v42 = v39 + 2;
    v43 = 3;
    a1[3] = v24;
    v44 = 1;
    v51_.v51 = 3;
    v51_.v52 = v39 + 2;
    goto LABEL_56;
  case 0:
    v22 = a1[4];
    v23 = &a2[v15];
    v51_.v51 = 5;
    v51_.v52 = v23;
    v51_.v53 = 2;
    if (v16 >= v22) {
      v24 = GameRoutine_190a960_alt1(i, (__int64)&v51_.v51);
    }
    else {
      *(_DWORD*)v16 = 5;
      *(_QWORD*)(v16 + 8) = v23;
      v24 = v16 + 24;
      *(_WORD*)(v16 + 16) = 2;
    }
    a1[3] = v24;
    v47 = a1[4];
    v49 = *((_WORD*)v23 + 1);
    v48 = v23 + 2;
    v51_.v51 = 13;
    v51_.v52 = v48;
    v44 = v49 + 2;
    v51_.v53 = v49 + 2;
    if (v24 < v47) {
      *(_DWORD*)v24 = 13;
      *(_QWORD*)(v24 + 8) = v48;
      goto LABEL_61;
    }
    goto LABEL_62;
  default:
    break;
  }
  return a1[1];
}

__int64 GameHr_1907d20(__int64 result, __int64 a2, __int64* a3)
{
  __int64 v3;
  __int64 v4;
  int v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v16;
  int v17;
  __int64 v21;
  int v22;
  __int64 v23;
  unsigned __int16* v24;
  __int64 v25;
  int v26;
  __int64 v27;
  __int64 v29;

  v3 = *a3;
  if (a3[1] != *a3) {
    v4 = *(_QWORD*)(v3 + 8);
    if (*(_DWORD*)v3 != 0 && v4 != 0 && *(_DWORD*)v3 == 1 &&
        *(_WORD*)(v3 + 16) != 0 && (*(_BYTE*)v4 & 0xFE) == 0xE &&
        *(_WORD*)(v4 + 1) == 0) {
      v8 = *(unsigned __int16*)(v4 + 3);
      if (v8 == 16) {
        v17 = *(_DWORD*)(v3 + 24);
        if (v17 != 0 && *(_QWORD*)(v3 + 32) != 0 && v17 != 1 &&
            *(_WORD*)(v3 + 40) != 0) {
          v21 = a2;
          if ((*(_BYTE*)result & 1) != 0) {
            **(_BYTE**)(result + 16) = 0;
            *(_QWORD*)(result + 8) = 0;
          }
          else {
            *(_WORD*)result = 0;
          }
          result = ((__int64 (*)(void))GameRoutine_1a09ce0)();
          v3 = *a3;
          a2 = v21;
        }
        v26 = *(_DWORD*)(v3 + 48);
        v27 = *(_QWORD*)(v3 + 56);
        if (v26 != 0 && v27 != 0) {
          v29 = *(unsigned __int16*)(v3 + 64);
          if (v26 != 1 && (_DWORD)v29 != 0) {
            if ((*(_BYTE*)a2 & 1) != 0) {
              **(_BYTE**)(a2 + 16) = 0;
              *(_QWORD*)(a2 + 8) = 0;
            }
            else {
              *(_WORD*)a2 = 0;
            }
            return GameRoutine_1a09ce0(a2, v27 + 2, v29 - 2);
          }
        }
      }
      else if (v8 == 0) {
        v9 = *(_DWORD*)(v3 + 48);
        v10 = *(_QWORD*)(v3 + 56);
        v11 = *(unsigned __int16*)(v3 + 64);
        if (v9 != 0 && v10 != 0 && v9 != 1 && (_DWORD)v11 != 0) {
          v16 = a2;
          if ((*(_BYTE*)result & 1) != 0) {
            **(_BYTE**)(result + 16) = 0;
            *(_QWORD*)(result + 8) = 0;
          }
          else {
            *(_WORD*)result = 0;
          }
          GameRoutine_1a09ce0(result, v10 + 2, v11 - 2);
          v3 = *a3;
          a2 = v16;
        }
        v22 = *(_DWORD*)(v3 + 24);
        v23 = 0;
        if (v22 != 0) {
          v24 = *(unsigned __int16**)(v3 + 32);
          v25 = a2;
          if (v24 != nullptr) {
            v23 = 0;
            if (v22 != 1 && *(_WORD*)(v3 + 40) != 0) {
              v23 = *v24;
            }
          }
        }
        else {
          v25 = a2;
        }
        return GameRoutine_60a060(v25, v10 + v11, v23);
      }
    }
  }
  return result;
}

void GameHr_1909a50(__int64 a1, __int64* a2, __int64* a3, __int64 a4)
{
  __int64 v8;
  struct {
    _QWORD v9[2];
    __int64 v10;
  } v9_;

  if (a4 == 0) {
    v9_.v9[1] = 0;
    v9_.v10 = 0;
    v9_.v9[0] = 0;
    TextSelector_1907d20((char*)(a1 + 152), (__int64)v9_.v9, a2);
    TextTagProcessor_1909d60(a1, (unsigned __int8*)(a1 + 152),
                             (unsigned __int8*)v9_.v9, a3);
    TextTagProcessor_1909c50(a1, 4u, (__int64)a3);
    if ((v9_.v9[0] & 1) != 0 && v9_.v10 != 0) {
      v8 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v8 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v8,
                                    v9_.v10);
    }
  }
}

_QWORD* GameHr_1909b00(_QWORD* result, __int64 a2, _DWORD** a3, __int64 a4)
{
  _QWORD* v4;
  _DWORD* v5;
  int v6;
  unsigned __int16* v7;
  bool v8;
  bool v9;
  int v10;
  int v11;

  if (a4 == 0) {
    v4 = (_QWORD*)result[34];
    if (v4 != nullptr) {
      v5 = *a3;
      v6 = *(_DWORD*)(*(_QWORD*)a2 + 24LL);
      v7 = *(unsigned __int16**)(*(_QWORD*)a2 + 32LL);
      v8 = v6 == 0 || v7 == nullptr;
      if (v8 || (v6 != 1 ? (v9 = *(unsigned __int16*)(*(_QWORD*)a2 + 40LL) == 0)
                         : (v9 = true),
                 v9)) {
        v10 = 0;
      }
      else {
        v10 = *v7;
      }
      if ((v10 & 0xFFFC) != 4) {
        v10 = 255;
      }
      v11 = v10;
      result = X8CALL_X0(_QWORD*,
                         (*(__attribute__((swiftcall)) void (**)(
                             PSEUDO_X8, _QWORD*, int*, __int64))(*v4 + 48LL))(
                             (void*)v4, v4, &v11, (__int64)result + 177));
      *v5 = (_DWORD)result;
      v5[1] = (_DWORD)result;
    }
  }
  return result;
}

void GameHr_1909ba0(__int64 a1, __int64* a2, __int64* a3, __int64 a4)
{
  __int64 v8;
  struct {
    _QWORD v9[2];
    __int64 v10;
  } v9_;

  if (a4 == 0) {
    v9_.v9[1] = 0;
    v9_.v10 = 0;
    v9_.v9[0] = 0;
    TextSelector_1907d20((char*)(a1 + 152), (__int64)v9_.v9, a2);
    TextTagProcessor_1909d60(a1, (unsigned __int8*)(a1 + 152),
                             (unsigned __int8*)v9_.v9, a3);
    TextTagProcessor_1909c50(a1, 0, (__int64)a3);
    if ((v9_.v9[0] & 1) != 0 && v9_.v10 != 0) {
      v8 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v8 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v8,
                                    v9_.v10);
    }
  }
}

__int64 GameHr_1909c50(__int64 result, __int64 a2, __int64 a3)
{
  __int64 v3;
  __int64 v4;
  unsigned int v6;
  float v7;
  float v8;
  float v9;
  __int64 v10;
  __int64 v11;

  if (*(_BYTE*)(result + 176) == 1) {
    v3 = result;
    v4 = *(_QWORD*)(result + 224);
    if (v4 == 0) {
      GameRoutine_60a310(0, a2);
    }
    v6 = a2;
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 48LL))(v4);
    if (v6 == (_DWORD)result) {
      if (v6 >= 2) {
        v7 = *(float*)(*(_QWORD*)a3 + 20LL);
        v8 = *(float*)(v3 + 144) +
             (float)((float)(*(float*)(v3 + 136) - *(float*)(v3 + 128)) * 0.5);
        v9 = (float)(*(float*)(v3 + 120) - *(float*)(v3 + 112)) * 0.5;
        if (v6 == 3) {
          if ((float)(v8 + v9) >= v7) {
            return result;
          }
        }
        else {
          if (v6 == 2) {
            v8 = v8 - v9;
          }
          if (v8 >= v7) {
            return result;
          }
        }
      }
      if ((*(_BYTE*)(v3 + 152) & 1) != 0) {
        v10 = *(_QWORD*)(v3 + 168);
      }
      else {
        v10 = v3 + 153;
      }
      v11 = GameRoutine_1a09c70(v10);
      result = GameRoutine_566d50(v3 + 8, v10, v11);
      if ((*(_BYTE*)(v3 + 152) & 1) != 0) {
        **(_BYTE**)(v3 + 168) = 0;
        *(_QWORD*)(v3 + 160) = 0;
      }
      else {
        *(_WORD*)(v3 + 152) = 0;
      }
      *(_BYTE*)(v3 + 176) = 0;
    }
  }
  return result;
}

__int64 GameHr_190ab40(__int64 result, _QWORD* a2, _QWORD* a3)
{
  _QWORD* v5;
  _QWORD* v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int16 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;

  if ((_QWORD*)result != a2) {
    v5 = (_QWORD*)result;
    v6 = (_QWORD*)result;
    v7 = (_QWORD*)GameData_212bf68;
    do {
      *a3 = 0;
      a3[1] = 0;
      v8 = v6[1];
      if (*v6 != 0 && v8 != 0) {
        *a3 = *v6;
        a3[1] = v8;
      }
      a3[3] = 0;
      a3[4] = 0;
      a3[2] = 0;
      v10 = v6[2];
      v11 = v6[3];
      v12 = v11 - v10;
      if (v11 != v10) {
        if (0xAAAAAAAAAAAAAAABLL * (v12 >> 3) >= 0xAAAAAAAAAAAAAABLL) {
          GameRoutine_190aaf0();
        }
        result = GameRoutine_651b90(*v7, v11 - v10, 16, 0);
        a3[2] = result;
        a3[3] = result;
        a3[4] = result + v12;
        do {
          *(_DWORD*)result = *(_DWORD*)v10;
          *(_QWORD*)(result + 8) = *(_QWORD*)(v10 + 8);
          v13 = *(_WORD*)(v10 + 16);
          v10 += 24;
          *(_WORD*)(result + 16) = v13;
          result += 24;
        } while (v10 != v11);
        a3[3] = result;
        v10 = v6[2];
        v11 = v6[3];
      }
      *v6 = 0;
      for (v6[1] = 0; v11 != v10; *(_WORD*)(v11 + 16) = 0) {
        *(_DWORD*)(v11 - 24) = 0;
        v11 -= 24;
        *(_QWORD*)(v11 + 8) = 0;
      }
      v6[3] = v10;
      v6 += 5;
      a3 += 5;
    } while (v6 != a2);
    do {
      v15 = v5[2];
      v16 = v5[3];
      *v5 = 0;
      v5[1] = 0;
      v17 = v15;
      if (v15 != v16) {
        do {
          *(_DWORD*)(v16 - 24) = 0;
          v16 -= 24;
          *(_QWORD*)(v16 + 8) = 0;
          *(_WORD*)(v16 + 16) = 0;
        } while (v16 != v15);
        v17 = v5[2];
      }
      v5[3] = v15;
      if (v17 == 0) {
        goto LABEL_23;
      }
      if (v17 == v15) {
        v5[3] = v17;
      }
      else {
        do {
          *(_DWORD*)(v15 - 24) = 0;
          v15 -= 24;
          *(_QWORD*)(v15 + 8) = 0;
          *(_WORD*)(v15 + 16) = 0;
        } while (v15 != v17);
        v18 = v5[2];
        v5[3] = v17;
        if (v18 == 0) {
          goto LABEL_23;
        }
      }
      if (*(_QWORD*)(*v7 + 200LL) != 0) {
        v14 = 128;
      }
      else {
        v14 = 56;
      }
      result = GameRoutine_1a0a4e0(*v7 + v14);
    LABEL_23:
      *v5 = 0;
      v5[1] = 0;
      v5 += 5;
    } while (v5 != a2);
  }
  return result;
}

__int64 GameHr_190b6a0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6;
  __int64 result;
  __int16 v10;
  __int64 v11;
  unsigned __int64 v12;
  bool v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64 v16;

  GameRoutine_60a060(a1 + 1432, a2, a3);
  v6 = GameRoutine_1a09c70(a2);
  result = GameRoutine_1916be0(a1, 1, a2, v6, 1);
  if (result != 0) {
    return GameRoutine_ebb0(0.0);
  }
  if (a3 == 6) {
    if (*(_DWORD*)a2 == 1701011782 && *(_WORD*)(a2 + 4) == 14384) {
      if ((*(_BYTE*)(a1 + 1432) & 1) != 0) {
        *(_QWORD*)(a1 + 1440) = 6;
        v11 = *(_QWORD*)(a1 + 1448);
      }
      else {
        *(_BYTE*)(a1 + 1432) = 12;
        v11 = a1 + 1433;
      }
      v10 = 12592;
    }
    else {
      if (*(_DWORD*)a2 != 1701011782 || *(_WORD*)(a2 + 4) != 14640) {
        return result;
      }
      v10 = 12336;
      if ((*(_BYTE*)(a1 + 1432) & 1) != 0) {
        *(_QWORD*)(a1 + 1440) = 6;
        v11 = *(_QWORD*)(a1 + 1448);
      }
      else {
        *(_BYTE*)(a1 + 1432) = 12;
        v11 = a1 + 1433;
      }
    }
    *(_WORD*)(v11 + 4) = v10;
    *(_BYTE*)(v11 + 6) = 0;
    *(_DWORD*)v11 = 1701011782;
    v12 = *(unsigned __int8*)(a1 + 1432);
    v13 = (v12 & 1) == 0;
    v14 = v12 >> 1;
    if (v13) {
      v15 = a1 + 1433;
    }
    else {
      v15 = *(_QWORD*)(a1 + 1448);
    }
    if (v13) {
      v16 = v14;
    }
    else {
      v16 = *(_QWORD*)(a1 + 1440);
    }
    result = GameRoutine_1916be0(a1, 1, v15, v16, 1);
    if (result != 0) {
      return GameRoutine_ebb0(0.0);
    }
  }
  return result;
}

__int64 GameHr_190bf00(__int64 a1, _QWORD* a2)
{
  unsigned __int64 v4;
  __int64 v5;
  __int64 result;
  __int64* v7;
  __int64* v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64* v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;

  if (*(_QWORD*)(*a2 + 8LL) != 0) {
    GameRoutine_19119d0();
  }
  v4 = *(_QWORD*)(a1 + 56);
  if (v4 >= *(_QWORD*)(a1 + 64)) {
    result = GameRoutine_190c920(a1 + 48, a2);
  }
  else {
    *(_QWORD*)v4 = *a2;
    v5 = a2[1];
    *(_QWORD*)(v4 + 8) = v5;
    if (v5 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8), 1u,
                                memory_order_relaxed);
    }
    result = v4 + 24;
    *(_DWORD*)(v4 + 16) = 2;
  }
  v8 = *(__int64**)a1;
  v7 = *(__int64**)(a1 + 8);
  *(_QWORD*)(a1 + 56) = result;
  if (v8 != v7) {
    while (*v8 != *a2) {
      v8 += 2;
      if (v8 == v7) {
        goto LABEL_27;
      }
    }
  }
  if (v8 != v7) {
    v9 = v8 + 2;
    if (v8 + 2 != v7) {
      do {
        v11 = *v9;
        v10 = v9[1];
        v12 = *(v9 - 1);
        *v9 = 0;
        v9[1] = 0;
        *(v9 - 2) = v11;
        *(v9 - 1) = v10;
        if (v12 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
          result = GameRoutine_1a09c50(v12);
        }
        v9 += 2;
      } while (v9 != v7);
      v7 = *(__int64**)(a1 + 8);
      v8 = v9 - 2;
    }
    for (; v7 != v8; v7 -= 2) {
      v13 = *(v7 - 1);
      if (v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
        result = GameRoutine_1a09c50(v13);
      }
    }
    *(_QWORD*)(a1 + 8) = v8;
  }
LABEL_27:
  v15 = *(__int64**)(a1 + 24);
  v14 = *(__int64**)(a1 + 32);
  if (v15 != v14) {
    while (*v15 != *a2) {
      v15 += 2;
      if (v15 == v14) {
        return result;
      }
    }
  }
  if (v15 != v14) {
    v16 = v15 + 2;
    if (v15 + 2 != v14) {
      do {
        v18 = *v16;
        v17 = v16[1];
        v19 = *(v16 - 1);
        *v16 = 0;
        v16[1] = 0;
        *(v16 - 2) = v18;
        *(v16 - 1) = v17;
        if (v19 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
          result = GameRoutine_1a09c50(v19);
        }
        v16 += 2;
      } while (v16 != v14);
      v14 = *(__int64**)(a1 + 32);
      v15 = v16 - 2;
    }
    for (; v14 != v15; v14 -= 2) {
      v20 = *(v14 - 1);
      if (v20 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
        result = GameRoutine_1a09c50(v20);
      }
    }
    *(_QWORD*)(a1 + 32) = v15;
  }
  return result;
}

void GameHr_190e7b0()
{
  __int64 v0;
  char** v1;
  char* v2;
  __int64 v3;
  char* v4;
  __int64 v5;
  char* v6;
  __int64 v7;
  char* v8;
  __int64 v9;
  char* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  if (GameData_21c9748 == 0) {
    v0 = GameData_212bf68;
    v1 = (char**)GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 80, 16, 0);
    v2 = GameData_2175a08[0];
    v3 = GameRoutine_1a09c70(GameData_2175a08[0]);
    *v1 = v2;
    v1[1] = (char*)v3;
    v4 = GameData_2175a10[0];
    v5 = GameRoutine_1a09c70(GameData_2175a10[0]);
    v1[2] = v4;
    v1[3] = (char*)v5;
    v6 = GameData_2175a18[0];
    v7 = GameRoutine_1a09c70(GameData_2175a18[0]);
    v1[4] = v6;
    v1[5] = (char*)v7;
    v8 = GameData_2175a20;
    v9 = GameRoutine_1a09c70(GameData_2175a20);
    v1[6] = v8;
    v1[7] = (char*)v9;
    v10 = GameData_2175a28;
    v11 = GameRoutine_1a09c70(GameData_2175a28);
    v12 = GameData_21c9748;
    v1[8] = v10;
    v1[9] = (char*)v11;
    GameData_21c9748 = (__int64)v1;
    if (v12 != 0) {
      v13 = 128;
      if (*(_QWORD*)(*(_QWORD*)v0 + 200LL) == 0) {
        v13 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)v0 + v13);
    }
  }
}

__int64 GameHr_19131f0(__int64 a1, float a2)
{
  __int64 result;
  float v5;
  float v6;

  result = *(_QWORD*)(a1 + 8);
  if (result != 0) {
    result = GameRoutine_190e8c0(result, a1);
  }
  if (*(_BYTE*)(a1 + 1041) == 1) {
    result = *(_QWORD*)(a1 + 104);
    if (*(_OWORD*)(a1 + 96) != 0) {
      v5 = 1.0 / *(float*)(a1 + 856);
      v6 = a2 + *(float*)(a1 + 860);
      *(float*)(a1 + 860) = v6;
      if (v6 >= v5) {
        *(float*)(a1 + 860) = v6 - v5;
        GameRoutine_10520();
        GameRoutine_1eb20(*(_QWORD*)(a1 + 96));
        result = *(_QWORD*)(a1 + 104);
      }
      else {
        v5 = 0.0;
      }
      GameRoutine_ff20(result, v5 + 0.0001);
      return (*(__int64 (**)(__int64, float))(*(_QWORD*)a1 + 24LL))(a1, v5);
    }
  }
  return result;
}

__int64 GameHr_1916360(_QWORD* a1, int* a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 result;

  v5 = 32 * a5;
  if (a1[20] == a1[21]) {
    GameRoutine_1917b30(a1, 32 * a5);
  }
  *a2 = -1;
  v10 = a1[20];
  if (a1[21] != v10) {
    v11 = 8 * a3;
    v12 = 0;
    while (1) {
      v13 = *(_QWORD*)(a1[23] + 8 * v12) + v5;
      if (v13 < (*(__int64 (**)(_QWORD))(**(_QWORD**)(v10 + v11) + 40LL))(
                    *(_QWORD*)(v10 + v11))) {
        break;
      }
      v10 = a1[20];
      ++v12;
      v11 += 16;
      if (v12 >= (a1[21] - v10) >> 4) {
        LODWORD(v12) = *a2;
        if (*a2 != -1) {
          goto LABEL_11;
        }
        goto LABEL_10;
      }
    }
    *a2 = v12;
    if ((_DWORD)v12 != -1) {
      goto LABEL_11;
    }
  }
LABEL_10:
  GameRoutine_1917b30(a1, v5);
  LODWORD(v12) = ((a1[21] - a1[20]) >> 4) - 1;
  *a2 = v12;
LABEL_11:
  v14 = *(_QWORD*)(a1[20] + 16LL * (int)v12 + 8 * a3);
  v15 = (*(__int64 (**)(__int64))(*(_QWORD*)v14 + 56LL))(v14);
  GameRoutine_1a0b950(v15 + *(_QWORD*)(a1[23] + 8LL * *a2), a4, v5);
  result = (*(__int64 (**)(__int64))(*(_QWORD*)v14 + 64LL))(v14);
  *(_QWORD*)(a1[23] + 8LL * *a2) += v5;
  return result;
}

__int64 GameHr_19164c0(_QWORD* a1, int* a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 result;

  v5 = 2 * a5;
  if (a1[26] == a1[27]) {
    GameRoutine_1917d70(a1, 2 * a5);
  }
  *a2 = -1;
  v10 = a1[26];
  if (a1[27] != v10) {
    v11 = 8 * a3;
    v12 = 0;
    while (1) {
      v13 = *(_QWORD*)(a1[29] + 8 * v12) + v5;
      if (v13 < (*(__int64 (**)(_QWORD))(**(_QWORD**)(v10 + v11) + 40LL))(
                    *(_QWORD*)(v10 + v11))) {
        break;
      }
      v10 = a1[26];
      ++v12;
      v11 += 16;
      if (v12 >= (a1[27] - v10) >> 4) {
        LODWORD(v12) = *a2;
        if (*a2 != -1) {
          goto LABEL_11;
        }
        goto LABEL_10;
      }
    }
    *a2 = v12;
    if ((_DWORD)v12 != -1) {
      goto LABEL_11;
    }
  }
LABEL_10:
  GameRoutine_1917d70(a1, v5);
  LODWORD(v12) = ((a1[27] - a1[26]) >> 4) - 1;
  *a2 = v12;
LABEL_11:
  v14 = *(_QWORD*)(a1[26] + 16LL * (int)v12 + 8 * a3);
  v15 = (*(__int64 (**)(__int64))(*(_QWORD*)v14 + 56LL))(v14);
  GameRoutine_1a0b950(v15 + *(_QWORD*)(a1[29] + 8LL * *a2), a4, v5);
  result = (*(__int64 (**)(__int64))(*(_QWORD*)v14 + 64LL))(v14);
  *(_QWORD*)(a1[29] + 8LL * *a2) += v5;
  return result;
}

__int64 GameHr_1916ab0(__int64 a1, const char* a2, __int64 a3, __int64* a4)
{
  int* v6;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  struct {
    __int64* v16;
    __int16 v17;
    char gap10_[22];
    __int16 v18;
    char gap34_[22];
    __int16 v19;
  } v16_;
  struct {
    __int16 v20[12];
    int v21;
    char gap108_[4];
    __int64 v22;
    __int64 v23;
  } v20_;

  if (*(_BYTE*)(a1 + 1041) != 1) {
    return 0;
  }
  v6 = *(int**)(a1 + 8);
  if (v6 == nullptr || *v6 > 3) {
    return 0;
  }
  v16_.v17 = 0;
  v20_.v21 = 1065353216;
  v16_.v18 = 0;
  v16_.v19 = 0;
  if (a2 == nullptr) {
    a2 = &GameData_1a9f09e;
  }
  v20_.v20[0] = 0;
  v20_.v22 = 0;
  v20_.v23 = 0;
  v16_.v16 = GameData_212fc98[0] + 2;
  GameRoutine_60a020_alt1((__int64)v20_.v20, a2);
  v11 = *a4;
  v10 = a4[1];
  if (v10 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                              memory_order_relaxed);
  }
  v12 = v20_.v23;
  v20_.v22 = v11;
  v20_.v23 = v10;
  v13 = a1;
  if (v12 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    std___1___shared_weak_count___release_weak(v12);
    v13 = a1;
  }
  v14 = *(_QWORD*)(v13 + 8);
  v15 = v13;
  cspine_SpineModel_AsyncArgument_Assign((__int64*)(v14 + 8),
                                         (__int64)&v16_.v16);
  *(_DWORD*)v14 = 1;
  LODWORD(v14) = **(_DWORD**)(v15 + 8) != 0;
  cspine_SpineModel_AsyncArgument_Destroy_AsyncArgument((__int64)&v16_.v16);
  return (unsigned int)v14;
}

__int64 GameHr_1916fe0(__int64 result, int a2, float a3)
{
  if (*(_BYTE*)(result + 1041) == 1) {
    result = *(_QWORD*)(result + 104);
    if (result != 0) {
      result = GameRoutine_11c20(result, a2);
      if (result != 0) {
        return GameRoutine_eb80(a3);
      }
    }
  }
  return result;
}

__int64 GameHr_1917040(__int64 result, int a2, float a3)
{
  if (*(_BYTE*)(result + 1041) == 1) {
    result = *(_QWORD*)(result + 104);
    if (result != 0) {
      result = GameRoutine_11c20(result, a2);
      if (result != 0) {
        return GameRoutine_eae0(result, a3);
      }
    }
  }
  return result;
}

__int64 GameHr_1917600(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v4;
  unsigned __int64 v5;
  __int64 v6;

  if (*(_BYTE*)(result + 1041) == 1) {
    v2 = result;
    result = *(_QWORD*)(result + 96);
    if (result != 0 && *(_QWORD*)(a2 + 32) != 0) {
      result = spine_Skeleton_getSlots(result);
      if (*(_QWORD*)(result + 8) != 0) {
        v4 = result;
        v5 = 0;
        do {
          v6 = *(_QWORD*)(a2 + 32);
          if (v6 == 0) {
            GameRoutine_60a310_alt1();
          }
          result =
              (*(__int64 (**)(__int64, __int64, _QWORD))(*(_QWORD*)v6 + 48LL))(
                  v6, v2, *(_QWORD*)(*(_QWORD*)(v4 + 24) + 8 * v5));
          if ((result & 1) == 0) {
            break;
          }
          ++v5;
        } while (*(_QWORD*)(v4 + 8) > v5);
      }
    }
  }
  return result;
}

__int64* GameHr_1919a80(__int64* result)
{
  __int64 v1;
  __int64 v2;

  v1 = *result;
  *result = 0;
  if (v1 != 0) {
    GameRoutine_111a620(v1);
    v2 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v2 = 56;
    }
    return (__int64*)GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v2);
  }
  return result;
}

__int64 GameHr_1919df0()
{
  __int64 result;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  result = GameData_226b6b0;
  if (GameData_226b6b0 != 0) {
    result = GameRoutine_111a720();
    v1 = GameData_226b6b0;
    GameData_226b6b0 = 0;
    if (v1 != 0) {
      GameRoutine_111a620(v1);
      v2 = GameData_212bf68;
      v3 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v3 = 56;
      }
      result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v3);
      v4 = GameData_226b6b0;
      GameData_226b6b0 = 0;
      if (v4 != 0) {
        GameRoutine_111a620(v4);
        v5 = 128;
        if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
          v5 = 56;
        }
        result = GameRoutine_1a0a4e0(*(_QWORD*)v2 + v5);
      }
    }
  }
  v6 = GameData_21c9738;
  GameData_21c9730 = 0;
  GameData_21c9738 = 0;
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    return GameRoutine_1a09c50(v6);
  }
  return result;
}

__int64 GameHr_1919fb0(__int64 a1, unsigned int a2)
{
  __int64 v3;
  _BYTE* v4;
  char v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD v13[2];
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

  if (a1 != 0) {
    v3 = a1;
    a1 = ((__int64 (*)(void))GameRoutine_7e74e0)();
    if (a1 != 0) {
      v22 = 0;
      v23 = 0;
      v20 = 0;
      v21 = 0;
      v18 = 0;
      v19 = 0;
      v16 = 0;
      v17 = 0;
      v4 = *(_BYTE**)(a1 + 40);
      v14 = 0;
      v15 = 0;
      v13[0] = 0;
      v13[1] = 0;
      if (v4 != nullptr && *v4 != 0) {
        GameRoutine_19220e0(v13);
      }
      v5 = GameRoutine_111c720(v13);
      if ((v21 & 1) != 0 && v23 != 0) {
        v6 = 128;
        if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
          v6 = 56;
        }
        GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v6);
      }
      if ((v18 & 1) != 0 && v20 != 0) {
        v7 = 128;
        if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
          v7 = 56;
        }
        GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v7);
      }
      if ((v15 & 1) != 0 && v17 != 0) {
        v8 = 128;
        if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
          v8 = 56;
        }
        GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v8);
      }
      if ((v13[0] & 1) != 0 && v14 != 0) {
        v9 = 128;
        if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
          v9 = 56;
        }
        GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v9);
      }
      v10 = GameData_226b6b0;
      if ((v5 & 1) != 0) {
        v11 = GameRoutine_7e74e0(v3);
        LOBYTE(a1) = GameRoutine_111bd80(v10, v3 + 2104, v11, a2);
      }
      else {
        LOBYTE(a1) = GameRoutine_111b520(GameData_226b6b0, v3);
      }
    }
  }
  return a1 & 1;
}

__int64 GameHr_191a150()
{
  return GameRoutine_2b0(GameRoutine_1919a80, &GameData_226b6b0,
                         &GameData_1f50948);
}

_QWORD* GameHr_191ae50(_QWORD* result, __int64 a2)
{
  __int64 v2;
  _QWORD* v4;
  _BYTE* v5;
  char* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD v11[2];
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD v16[2];
  char* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;

  if (a2 != 0) {
    v2 = *result;
    result[10] = a2;
    v4 = result;
    (*(void (**)(_QWORD*, _QWORD))(v2 + 32))(result,
                                             *(unsigned __int8*)(a2 + 48));
    v5 = *(_BYTE**)(a2 + 40);
    v19 = 0;
    v20 = 0;
    v17 = nullptr;
    v18 = 0;
    v16[0] = 0;
    v16[1] = 0;
    v14 = 0;
    v15 = 0;
    v12 = 0;
    v13 = 0;
    v11[0] = 0;
    v11[1] = 0;
    if (v5 != nullptr && *v5 != 0) {
      GameRoutine_19220e0(v11);
      if ((v16[0] & 1) != 0) {
        v6 = v17;
      }
      else {
        v6 = (char*)v16 + 1;
      }
    }
    else {
      v6 = (char*)v16 + 1;
    }
    result = (_QWORD*)(*(__int64 (**)(_QWORD*, char*))(*v4 + 56LL))(v4, v6);
    if ((v18 & 1) != 0 && v20 != 0) {
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v7 = 56;
      }
      result = (_QWORD*)GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v7);
    }
    if ((v16[0] & 1) != 0 && v17 != nullptr) {
      v8 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v8 = 56;
      }
      result = (_QWORD*)GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v8);
    }
    if ((v13 & 1) != 0 && v15 != 0) {
      v9 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v9 = 56;
      }
      result = (_QWORD*)GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v9);
    }
    if ((v11[0] & 1) != 0 && v12 != 0) {
      v10 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v10 = 56;
      }
      return (_QWORD*)GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v10);
    }
  }
  return result;
}

__int64 GameHr_191aff0(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v4;
  _BYTE v5[16];

  if (a2 != 0) {
    v2 = result;
    v4 = GameRoutine_7e74e0(a2);
    (*(void (**)(__int64, __int64))(*(_QWORD*)v2 + 64LL))(v2, v4);
    GameRoutine_191f280(v5, a2);
    return (*(__int64 (**)(__int64, _BYTE*))(*(_QWORD*)v2 + 40LL))(v2, v5);
  }
  return result;
}

__int64 GameHr_191bee0(__int64 a1)
{
  _BYTE* v2;
  unsigned int v3;
  __int64 v4;
  unsigned __int8* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int16* v14;
  __int64 v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v24;
  __int64 v25;
  unsigned __int8* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;

  v34 = 0;
  v35 = 0;
  v32 = 0;
  v33 = 0;
  v30 = 0;
  v31 = 0;
  v28 = 0;
  v29 = 0;
  v26 = nullptr;
  v27 = 0;
  v24 = 0;
  v25 = 0;
  if (a1 != 0 && (v2 = *(_BYTE**)(a1 + 40)) != nullptr) {
    v3 = (unsigned __int8)*v2;
    if (*v2 != 0) {
      GameRoutine_19220e0(&v24);
      v3 = (unsigned __int8)v24;
      v4 = v25;
    }
    else {
      v4 = 0;
    }
  }
  else {
    v4 = 0;
    v3 = 0;
  }
  if ((v3 & 1) == 0) {
    v4 = v3 >> 1;
  }
  if (v4 == 0 ||
      ((v3 & 1) == 0 ? (v5 = (unsigned __int8*)&v24 + 1) : (v5 = v26),
       (unsigned int)*v5 - 51 > 1 ||
           (v6 = *(__int64**)(GameData_21c9b20 + 64),
            (int)(v7 = (*(_QWORD*)(GameData_21c9b20 + 72) - (_QWORD)v6) >> 3) <
                1))) {
  LABEL_29:
    v10 = 0;
    if ((v33 & 1) == 0) {
      goto LABEL_38;
    }
    goto LABEL_34;
  }
  v8 = *v6;
  if (*v6 == 0) {
    v10 = 0;
  LABEL_33:
    if ((v33 & 1) == 0) {
      goto LABEL_38;
    }
  LABEL_34:
    if (v35 != 0) {
      v19 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v19 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v19);
    }
    goto LABEL_38;
  }
  while (1) {
    if (a1 == *(_QWORD*)(v8 + 352)) {
      v11 = *(unsigned __int16*)(v8 + 32);
      if (*(_WORD*)(v8 + 32) != 0) {
        break;
      }
    }
  LABEL_16:
    v9 = *(unsigned __int16*)(v8 + 16) + 1LL;
    if ((int)v9 >= (int)v7) {
      goto LABEL_29;
    }
    v8 = v6[v9];
    v10 = 0;
    if (v8 == 0) {
      goto LABEL_33;
    }
  }
  v12 = *(_QWORD*)(v8 + 40);
  v13 = 0;
  while (1) {
    v14 = (unsigned __int16*)(v12 + 16 * v13);
    v15 = *v14;
    if (*v14 != 0) {
      break;
    }
  LABEL_21:
    if (++v13 == v11) {
      goto LABEL_16;
    }
  }
  v16 = *((__int64**)v14 + 1);
  while (1) {
    v18 = *v16++;
    v17 = v18;
    if (v18 != 0 && (unsigned int)GameRoutine_1a09d30(v17, "Spine") == 0) {
      break;
    }
    if (--v15 == 0) {
      goto LABEL_21;
    }
  }
  v10 = v8;
  if ((v33 & 1) != 0) {
    goto LABEL_34;
  }
LABEL_38:
  if ((v30 & 1) != 0 && v32 != 0) {
    v20 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v20 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v20);
  }
  if ((v27 & 1) != 0 && v29 != 0) {
    v21 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v21 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v21);
  }
  if ((v24 & 1) != 0 && v26 != nullptr) {
    v22 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v22 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v22);
  }
  return v10;
}

__int64 GameHr_191c200(__int64 result)
{
  char v1;

  v1 = *(_BYTE*)(result + 56);
  *(_DWORD*)(result + 47) = 0;
  *(_QWORD*)(result + 32) = 0;
  *(_QWORD*)(result + 40) = 0;
  *(_QWORD*)(result + 8) = 0;
  *(_QWORD*)(result + 16) = 0;
  *(_BYTE*)(result + 24) = 0;
  if ((v1 & 1) != 0) {
    **(_BYTE**)(result + 72) = 0;
    *(_QWORD*)(result + 64) = 0;
  }
  else {
    *(_WORD*)(result + 56) = 0;
  }
  return result;
}

__int64 GameHr_191c250(__int64 result, __int64 a2)
{
  __int64 v2;

  v2 = *(_QWORD*)(a2 + 8);
  *(_QWORD*)(result + 32) = *(_QWORD*)a2;
  *(_QWORD*)(result + 40) = v2;
  *(_BYTE*)(result + 48) = *(_BYTE*)(a2 + 16);
  *(_BYTE*)(result + 49) = *(_BYTE*)(a2 + 17);
  *(_BYTE*)(result + 50) = *(_BYTE*)(a2 + 18);
  return result;
}

__int64 GameHr_191c280(__int64 a1, char* a2)
{
  __int64 v2;

  v2 = a1 + 56;
  if (a2 == nullptr) {
    a2 = &GameData_1a9f09e;
  }
  return GameRoutine_60a020(v2, a2);
}

__int64 GameHr_191c670(__int64 result)
{
  __int64 v1;

  *(_QWORD*)result = GameData_2110448;
  if ((*(_BYTE*)(result + 56) & 1) != 0 && *(_QWORD*)(result + 72) != 0) {
    v1 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v1 = 56;
    }
    return GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v1);
  }
  return result;
}

__int64 GameHr_191c750(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  int v9;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  float* v19;
  float v20;
  long double v21;
  long double v22;
  long double v23;
  long double v24;
  _QWORD v26[2];

  v4 = GameRoutine_4e1b0(a2);
  v5 = *(_QWORD*)(GameRoutine_4e570(v4) + 16);
  v6 = GameRoutine_1a09c70(v5);
  v7 = v6;
  if (v6 >= 6) {
    v8 = 6;
  }
  else {
    v8 = v6;
  }
  v9 = GameRoutine_1a09cf0(v5, "Render", v8);
  if (v7 != 6 || v9 != 0) {
    v11 = GameRoutine_4e1b0(a2);
    v12 = GameRoutine_4e570(v11);
    v13 = *(_QWORD*)(v12 + 16);
    if (v13 != 0) {
      v14 = GameRoutine_1a09c70(*(_QWORD*)(v12 + 16));
      v26[0] = v13;
      v26[1] = v14;
      v15 = GameRoutine_1919040((_QWORD*)(a1 + 1280), v26);
      if (v15 != nullptr) {
        *((_DWORD*)v15 + 22) = 0;
        *((_DWORD*)v15 + 24) = 2;
      }
      v26[0] = v13;
      v26[1] = v14;
      v16 = GameRoutine_1919040((_QWORD*)(a1 + 1280), v26);
      if (v16 != nullptr) {
        *(_QWORD*)((char*)v16 + 92) = 0x23F800000LL;
      }
      v17 = GameRoutine_4e1d0(a2);
      v18 = GameRoutine_4e1b0(a2);
      v19 = (float*)GameRoutine_4e590(v18);
      v20 = v19[2];
      *(float*)(v17 + 8) = v20;
      *(float*)(v17 + 12) = v19[3];
      *(float*)(v17 + 16) = v19[4];
      *(float*)(v17 + 20) = v19[5];
      v21 = GameRoutine_19ee0(v20, 0.0, 1.0);
      *(_DWORD*)(v17 + 8) = LODWORD(v21);
      v22 = GameRoutine_19ee0(*(float*)(v17 + 12), 0.0, 1.0);
      *(_DWORD*)(v17 + 12) = LODWORD(v22);
      v23 = GameRoutine_19ee0(*(float*)(v17 + 16), 0.0, 1.0);
      *(_DWORD*)(v17 + 16) = LODWORD(v23);
      v24 = GameRoutine_19ee0(*(float*)(v17 + 20), 0.0, 1.0);
      *(_DWORD*)(v17 + 20) = LODWORD(v24);
    }
  }
  return 1;
}

void GameHr_191d070(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  float* v4;
  float v5;
  long double v6;
  long double v7;
  long double v8;
  long double v9;

  v2 = GameRoutine_4e1d0(a1);
  v3 = GameRoutine_4e1b0(a1);
  v4 = (float*)GameRoutine_4e590(v3);
  v5 = v4[2];
  *(float*)(v2 + 8) = v5;
  *(float*)(v2 + 12) = v4[3];
  *(float*)(v2 + 16) = v4[4];
  *(float*)(v2 + 20) = v4[5];
  v6 = GameRoutine_19ee0(v5, 0.0, 1.0);
  *(_DWORD*)(v2 + 8) = LODWORD(v6);
  v7 = GameRoutine_19ee0(*(float*)(v2 + 12), 0.0, 1.0);
  *(_DWORD*)(v2 + 12) = LODWORD(v7);
  v8 = GameRoutine_19ee0(*(float*)(v2 + 16), 0.0, 1.0);
  *(_DWORD*)(v2 + 16) = LODWORD(v8);
  v9 = GameRoutine_19ee0(*(float*)(v2 + 20), 0.0, 1.0);
  *(_DWORD*)(v2 + 20) = LODWORD(v9);
}

__int64 GameHr_191d220(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  float v6;
  __int64 v7;
  long double v8;
  long double v9;
  long double v10;
  long double v11;
  __int64* v13;
  __int64 v14;
  int v15;
  int v16;

  v2 = GameRoutine_4e1b0(a1);
  v3 = GameRoutine_4e590(v2);
  v4 = *(_QWORD*)(v3 + 16);
  v14 = *(_QWORD*)(v3 + 8);
  v15 = v4;
  v16 = 1065353216;
  v13 = GameData_21322d8[0] + 2;
  v5 = GameRoutine_4e1d0(a1);
  LODWORD(v6) = v14;
  v7 = v5;
  *(_DWORD*)(v5 + 20) = 1065353216;
  *(_QWORD*)(v5 + 8) = __PAIR64__(HIDWORD(v14), LODWORD(v6));
  *(_DWORD*)(v5 + 16) = v15;
  v8 = GameRoutine_19ee0(v6, 0.0, 1.0);
  *(_DWORD*)(v7 + 8) = LODWORD(v8);
  v9 = GameRoutine_19ee0(*(float*)(v7 + 12), 0.0, 1.0);
  *(_DWORD*)(v7 + 12) = LODWORD(v9);
  v10 = GameRoutine_19ee0(*(float*)(v7 + 16), 0.0, 1.0);
  *(_DWORD*)(v7 + 16) = LODWORD(v10);
  v11 = GameRoutine_19ee0(*(float*)(v7 + 20), 0.0, 1.0);
  *(_DWORD*)(v7 + 20) = LODWORD(v11);
  return GameRoutine_4e8a0(&v13);
}

__int64 GameHr_191e700(__int64 result)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  _QWORD* v22;
  __int64 v23;
  _QWORD* v24;
  __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;

  v1 = result;
  if (*(_QWORD*)(result + 24) != 0) {
    v2 = *(_QWORD**)(result + 16);
    if (v2 != nullptr) {
      v3 = GameData_212bf68;
      do {
        v4 = (_QWORD*)*v2;
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v5 = 128;
        }
        else {
          v5 = 56;
        }
        result = GameRoutine_1a0a4e0(*(_QWORD*)v3 + v5);
        v2 = v4;
      } while (v4 != nullptr);
    }
    v6 = *(_QWORD*)(v1 + 8);
    *(_QWORD*)(v1 + 16) = 0;
    if (v6 != 0) {
      v7 = v6 & 7;
      if (v6 >= 8) {
        v9 = v6 & 0xFFFFFFFFFFFFFFF8LL;
        v8 = 0;
        do {
          *(_QWORD*)(*(_QWORD*)v1 + 8 * v8) = 0;
          *(_QWORD*)(*(_QWORD*)v1 + 8 * v8 + 8) = 0;
          *(_QWORD*)(*(_QWORD*)v1 + 8 * v8 + 16) = 0;
          *(_QWORD*)(*(_QWORD*)v1 + 8 * v8 + 24) = 0;
          *(_QWORD*)(*(_QWORD*)v1 + 8 * v8 + 32) = 0;
          *(_QWORD*)(*(_QWORD*)v1 + 8 * v8 + 40) = 0;
          *(_QWORD*)(*(_QWORD*)v1 + 8 * v8 + 48) = 0;
          v10 = *(_QWORD*)v1 + 8 * v8;
          v8 += 8;
          *(_QWORD*)(v10 + 56) = 0;
        } while (v9 != v8);
      }
      else {
        v8 = 0;
      }
      if (v7 != 0) {
        v11 = 8 * v8;
        do {
          --v7;
          *(_QWORD*)(*(_QWORD*)v1 + v11) = 0;
          v11 += 8;
        } while (v7 != 0);
      }
    }
    *(_QWORD*)(v1 + 24) = 0;
  }
  if (*(_QWORD*)(v1 + 64) != 0) {
    v12 = *(_QWORD**)(v1 + 56);
    if (v12 != nullptr) {
      v13 = GameData_212bf68;
      do {
        v14 = (_QWORD*)*v12;
        if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) != 0) {
          v15 = 128;
        }
        else {
          v15 = 56;
        }
        result = GameRoutine_1a0a4e0(*(_QWORD*)v13 + v15);
        v12 = v14;
      } while (v14 != nullptr);
    }
    v16 = *(_QWORD*)(v1 + 48);
    *(_QWORD*)(v1 + 56) = 0;
    if (v16 != 0) {
      v17 = v16 & 7;
      if (v16 >= 8) {
        v19 = v16 & 0xFFFFFFFFFFFFFFF8LL;
        v18 = 0;
        do {
          *(_QWORD*)(*(_QWORD*)(v1 + 40) + 8 * v18) = 0;
          *(_QWORD*)(*(_QWORD*)(v1 + 40) + 8 * v18 + 8) = 0;
          *(_QWORD*)(*(_QWORD*)(v1 + 40) + 8 * v18 + 16) = 0;
          *(_QWORD*)(*(_QWORD*)(v1 + 40) + 8 * v18 + 24) = 0;
          *(_QWORD*)(*(_QWORD*)(v1 + 40) + 8 * v18 + 32) = 0;
          *(_QWORD*)(*(_QWORD*)(v1 + 40) + 8 * v18 + 40) = 0;
          *(_QWORD*)(*(_QWORD*)(v1 + 40) + 8 * v18 + 48) = 0;
          v20 = *(_QWORD*)(v1 + 40) + 8 * v18;
          v18 += 8;
          *(_QWORD*)(v20 + 56) = 0;
        } while (v19 != v18);
      }
      else {
        v18 = 0;
      }
      if (v17 != 0) {
        v21 = 8 * v18;
        do {
          --v17;
          *(_QWORD*)(*(_QWORD*)(v1 + 40) + v21) = 0;
          v21 += 8;
        } while (v17 != 0);
      }
    }
    *(_QWORD*)(v1 + 64) = 0;
  }
  if (*(_QWORD*)(v1 + 104) != 0) {
    v22 = *(_QWORD**)(v1 + 96);
    if (v22 != nullptr) {
      v23 = GameData_212bf68;
      do {
        v24 = (_QWORD*)*v22;
        if (*(_QWORD*)(*(_QWORD*)v23 + 200LL) != 0) {
          v25 = 128;
        }
        else {
          v25 = 56;
        }
        result = GameRoutine_1a0a4e0(*(_QWORD*)v23 + v25);
        v22 = v24;
      } while (v24 != nullptr);
    }
    v26 = *(_QWORD*)(v1 + 88);
    *(_QWORD*)(v1 + 96) = 0;
    if (v26 != 0) {
      v27 = v26 & 7;
      if (v26 >= 8) {
        v29 = v26 & 0xFFFFFFFFFFFFFFF8LL;
        v28 = 0;
        do {
          *(_QWORD*)(*(_QWORD*)(v1 + 80) + 8 * v28) = 0;
          *(_QWORD*)(*(_QWORD*)(v1 + 80) + 8 * v28 + 8) = 0;
          *(_QWORD*)(*(_QWORD*)(v1 + 80) + 8 * v28 + 16) = 0;
          *(_QWORD*)(*(_QWORD*)(v1 + 80) + 8 * v28 + 24) = 0;
          *(_QWORD*)(*(_QWORD*)(v1 + 80) + 8 * v28 + 32) = 0;
          *(_QWORD*)(*(_QWORD*)(v1 + 80) + 8 * v28 + 40) = 0;
          *(_QWORD*)(*(_QWORD*)(v1 + 80) + 8 * v28 + 48) = 0;
          v30 = *(_QWORD*)(v1 + 80) + 8 * v28;
          v28 += 8;
          *(_QWORD*)(v30 + 56) = 0;
        } while (v29 != v28);
      }
      else {
        v28 = 0;
      }
      if (v27 != 0) {
        v31 = 8 * v28;
        do {
          --v27;
          *(_QWORD*)(*(_QWORD*)(v1 + 80) + v31) = 0;
          v31 += 8;
        } while (v27 != 0);
      }
    }
    *(_QWORD*)(v1 + 104) = 0;
  }
  v32 = *(_QWORD*)(v1 + 120);
  *(_BYTE*)(v1 + 216) = 0;
  *(_QWORD*)(v1 + 128) = v32;
  *(_QWORD*)(v1 + 152) = *(_QWORD*)(v1 + 144);
  *(_QWORD*)(v1 + 176) = *(_QWORD*)(v1 + 168);
  *(_QWORD*)(v1 + 200) = *(_QWORD*)(v1 + 192);
  return result;
}

__int64 GameHr_191eb80(_QWORD* a1, unsigned __int8* a2, char a3)
{
  unsigned __int64 v3;
  unsigned __int64 v4;
  _QWORD* v5;
  _QWORD* v6;
  unsigned __int8* v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  int v12;
  unsigned __int64 v14;
  unsigned __int64 v15;
  unsigned __int8* v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  int v19;

  if (a3 != 2) {
    if (a3 == 1) {
      v3 = *a2;
      v4 = (v3 & 1) != 0 ? *((_QWORD*)a2 + 1) : v3 >> 1;
      if (v4 != 0) {
        v5 = (_QWORD*)a1[18];
        v6 = (_QWORD*)a1[19];
        if (v5 != v6) {
          if ((v3 & 1) != 0) {
            v7 = *((unsigned __int8**)a2 + 2);
          }
          else {
            v7 = a2 + 1;
          }
          while (1) {
            v8 = *v5;
            v9 = GameRoutine_1a09c70(*v5);
            if (v9 == -1) {
              break;
            }
            v10 = v9;
            if (v9 >= v4) {
              v11 = v4;
            }
            else {
              v11 = v9;
            }
            v12 = GameRoutine_1a09cf0(v7, v8, v11);
            if (v4 == v10 && v12 == 0) {
              goto LABEL_39;
            }
            v5 += 2;
            if (v5 == v6) {
              return 0;
            }
          }
        LABEL_42:
          GameRoutine_60a230(v9);
        }
      }
    }
    return 0;
  }
  v14 = *a2;
  if ((v14 & 1) != 0) {
    v15 = *((_QWORD*)a2 + 1);
  }
  else {
    v15 = v14 >> 1;
  }
  if (v15 == 0) {
    return 0;
  }
  v5 = (_QWORD*)a1[21];
  v6 = (_QWORD*)a1[22];
  if (v5 == v6) {
    return 0;
  }
  v16 = (v14 & 1) != 0 ? *((unsigned __int8**)a2 + 2) : a2 + 1;
  while (1) {
    v8 = *v5;
    v9 = GameRoutine_1a09c70(*v5);
    if (v9 == -1) {
      goto LABEL_42;
    }
    v17 = v9;
    v18 = v9 >= v15 ? v15 : v9;
    v19 = GameRoutine_1a09cf0(v16, v8, v18);
    if (v15 == v17 && v19 == 0) {
      break;
    }
    v5 += 2;
    if (v5 == v6) {
      return 0;
    }
  }
LABEL_39:
  if (v5 == v6) {
    return 0;
  }
  return v8;
}

bool GameHr_191eea0(_QWORD* a1, _QWORD* a2)
{
  return *a1 == *a2 && a1[1] == a2[1];
}

__int64 GameHr_191f780(_QWORD* a1)
{
  __int64 result;
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
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  _QWORD* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  _QWORD* v21;
  _QWORD* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  _QWORD* v26;
  _QWORD* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;

  result = GameRoutine_191e700((__int64)(a1 + 3));
  v3 = a1[27];
  v4 = GameData_212bf68;
  if (v3 != 0) {
    v5 = *(_QWORD*)GameData_212bf68;
    a1[28] = v3;
    v6 = 128;
    if (*(_QWORD*)(v5 + 200) == 0) {
      v6 = 56;
    }
    result = GameRoutine_1a0a4e0(v5 + v6);
  }
  v7 = a1[24];
  if (v7 != 0) {
    v8 = *(_QWORD*)v4;
    a1[25] = v7;
    v9 = 128;
    if (*(_QWORD*)(v8 + 200) == 0) {
      v9 = 56;
    }
    result = GameRoutine_1a0a4e0(v8 + v9);
  }
  v10 = a1[21];
  if (v10 != 0) {
    v11 = *(_QWORD*)v4;
    a1[22] = v10;
    v12 = 128;
    if (*(_QWORD*)(v11 + 200) == 0) {
      v12 = 56;
    }
    result = GameRoutine_1a0a4e0(v11 + v12);
  }
  v13 = a1[18];
  if (v13 != 0) {
    v14 = *(_QWORD*)v4;
    a1[19] = v13;
    v15 = 128;
    if (*(_QWORD*)(v14 + 200) == 0) {
      v15 = 56;
    }
    result = GameRoutine_1a0a4e0(v14 + v15);
  }
  v16 = (_QWORD*)a1[15];
  if (v16 != nullptr) {
    do {
      v17 = (_QWORD*)*v16;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
        v18 = 128;
      }
      else {
        v18 = 56;
      }
      result = GameRoutine_1a0a4e0(*(_QWORD*)v4 + v18);
      v16 = v17;
    } while (v17 != nullptr);
  }
  v19 = a1[13];
  a1[13] = 0;
  if (v19 != 0) {
    v20 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v20 = 56;
    }
    result = GameRoutine_1a0a4e0(*(_QWORD*)v4 + v20);
  }
  v21 = (_QWORD*)a1[10];
  if (v21 != nullptr) {
    do {
      v22 = (_QWORD*)*v21;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
        v23 = 128;
      }
      else {
        v23 = 56;
      }
      result = GameRoutine_1a0a4e0(*(_QWORD*)v4 + v23);
      v21 = v22;
    } while (v22 != nullptr);
  }
  v24 = a1[8];
  a1[8] = 0;
  if (v24 != 0) {
    v25 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v25 = 56;
    }
    result = GameRoutine_1a0a4e0(*(_QWORD*)v4 + v25);
  }
  v26 = (_QWORD*)a1[5];
  if (v26 != nullptr) {
    do {
      v27 = (_QWORD*)*v26;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
        v28 = 128;
      }
      else {
        v28 = 56;
      }
      result = GameRoutine_1a0a4e0(*(_QWORD*)v4 + v28);
      v26 = v27;
    } while (v27 != nullptr);
  }
  v29 = a1[3];
  a1[3] = 0;
  if (v29 != 0) {
    v30 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v30 = 56;
    }
    return GameRoutine_1a0a4e0(*(_QWORD*)v4 + v30);
  }
  return result;
}

__int64 GameHr_1920490(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  result = GameRoutine_1920610();
  v3 = *(_QWORD*)(a1 + 168);
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    result = GameRoutine_1a09c50(v3);
  }
  v4 = *(_QWORD*)(a1 + 152);
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    result = GameRoutine_1a09c50(v4);
    if ((*(_BYTE*)(a1 + 72) & 1) == 0) {
      goto LABEL_12;
    }
  }
  else if ((*(_BYTE*)(a1 + 72) & 1) == 0) {
    goto LABEL_12;
  }
  if (*(_QWORD*)(a1 + 88) != 0) {
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v5 = 56;
    }
    result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v5);
  }
LABEL_12:
  if ((*(_BYTE*)(a1 + 48) & 1) != 0 && *(_QWORD*)(a1 + 64) != 0) {
    v6 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v6 = 56;
    }
    result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v6);
  }
  if ((*(_BYTE*)(a1 + 24) & 1) != 0 && *(_QWORD*)(a1 + 40) != 0) {
    v7 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v7 = 56;
    }
    result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v7);
  }
  if ((*(_BYTE*)a1 & 1) != 0 && *(_QWORD*)(a1 + 16) != 0) {
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v8 = 56;
    }
    return GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v8);
  }
  return result;
}

__int64 GameHr_1920610(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v1 = result;
  if ((*(_BYTE*)result & 1) != 0) {
    **(_BYTE**)(result + 16) = 0;
    *(_QWORD*)(result + 8) = 0;
    if ((*(_BYTE*)(result + 24) & 1) != 0) {
    LABEL_3:
      **(_BYTE**)(result + 40) = 0;
      *(_QWORD*)(result + 32) = 0;
      if ((*(_BYTE*)(result + 48) & 1) != 0) {
        goto LABEL_4;
      }
    LABEL_8:
      *(_WORD*)(result + 48) = 0;
      if ((*(_BYTE*)(result + 72) & 1) != 0) {
        goto LABEL_5;
      }
    LABEL_9:
      *(_WORD*)(result + 72) = 0;
      goto LABEL_10;
    }
  }
  else {
    *(_WORD*)result = 0;
    if ((*(_BYTE*)(result + 24) & 1) != 0) {
      goto LABEL_3;
    }
  }
  *(_WORD*)(result + 24) = 0;
  if ((*(_BYTE*)(result + 48) & 1) == 0) {
    goto LABEL_8;
  }
LABEL_4:
  **(_BYTE**)(result + 64) = 0;
  *(_QWORD*)(result + 56) = 0;
  if ((*(_BYTE*)(result + 72) & 1) == 0) {
    goto LABEL_9;
  }
LABEL_5:
  **(_BYTE**)(result + 88) = 0;
  *(_QWORD*)(result + 80) = 0;
LABEL_10:
  *(_QWORD*)(result + 96) = 0;
  *(_QWORD*)(result + 104) = 0;
  *(_QWORD*)(result + 112) = 0;
  v2 = GameData_2175a40;
  *(_DWORD*)(result + 136) = GameData_2175a48;
  *(_QWORD*)(result + 128) = v2;
  *(_DWORD*)(result + 140) = -1082130432;
  v3 = *(_QWORD*)(result + 144);
  if (v3 != 0) {
    v4 = *(_QWORD*)(v3 + 1328);
    *(_QWORD*)(v3 + 1320) = 0;
    *(_QWORD*)(v3 + 1328) = 0;
    if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      result = GameRoutine_1a09c50(v4);
    }
  }
  v5 = *(_QWORD*)(v1 + 152);
  *(_QWORD*)(v1 + 144) = 0;
  *(_QWORD*)(v1 + 152) = 0;
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    result = GameRoutine_1a09c50(v5);
  }
  v6 = *(_QWORD*)(v1 + 168);
  *(_QWORD*)(v1 + 160) = 0;
  *(_QWORD*)(v1 + 168) = 0;
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    result = GameRoutine_1a09c50(v6);
  }
  *(_WORD*)(v1 + 192) = 0;
  *(_QWORD*)(v1 + 176) = 0;
  *(_QWORD*)(v1 + 184) = 0;
  return result;
}

unsigned __int8* GameHr_1920790(unsigned __int8* result, unsigned __int8* a2)
{
  unsigned __int8* v3;
  unsigned __int64 v4;
  __int64 v5;
  __int64 v6;
  bool v7;
  unsigned __int64 v8;
  unsigned __int8* v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  bool v15;
  unsigned __int64 v16;
  unsigned __int8* v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  _QWORD* v20;
  __int64 v21;
  __int64 v22;
  bool v23;
  unsigned __int64 v24;
  unsigned __int8* v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  bool v30;
  unsigned __int64 v31;
  unsigned __int8* v32;
  unsigned __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;

  v3 = result;
  if (result != a2) {
    v4 = *a2;
    if ((*result & 1) != 0) {
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
      GameRoutine_64dde0(result, v9, v10);
    }
    else if ((v4 & 1) != 0) {
      GameRoutine_64df20(result, *((_QWORD*)a2 + 2), *((_QWORD*)a2 + 1));
    }
    else {
      v5 = *(_QWORD*)a2;
      v6 = *((_QWORD*)a2 + 2);
      *((_QWORD*)result + 1) = *((_QWORD*)a2 + 1);
      *((_QWORD*)result + 2) = v6;
      *(_QWORD*)result = v5;
    }
    v11 = a2[24];
    v12 = v3 + 24;
    if ((v3[24] & 1) != 0) {
      v15 = (v11 & 1) == 0;
      v16 = v11 >> 1;
      if (v15) {
        v17 = a2 + 25;
      }
      else {
        v17 = *((unsigned __int8**)a2 + 5);
      }
      if (v15) {
        v18 = v16;
      }
      else {
        v18 = *((_QWORD*)a2 + 4);
      }
      GameRoutine_64dde0(v12, v17, v18);
    }
    else if ((v11 & 1) != 0) {
      GameRoutine_64df20(v12, *((_QWORD*)a2 + 5), *((_QWORD*)a2 + 4));
    }
    else {
      v13 = *((_QWORD*)a2 + 3);
      v14 = *((_QWORD*)a2 + 5);
      *((_QWORD*)v3 + 4) = *((_QWORD*)a2 + 4);
      *((_QWORD*)v3 + 5) = v14;
      *v12 = v13;
    }
    v19 = a2[48];
    v20 = v3 + 48;
    if ((v3[48] & 1) != 0) {
      v23 = (v19 & 1) == 0;
      v24 = v19 >> 1;
      if (v23) {
        v25 = a2 + 49;
      }
      else {
        v25 = *((unsigned __int8**)a2 + 8);
      }
      if (v23) {
        v26 = v24;
      }
      else {
        v26 = *((_QWORD*)a2 + 7);
      }
      GameRoutine_64dde0(v20, v25, v26);
    }
    else if ((v19 & 1) != 0) {
      GameRoutine_64df20(v20, *((_QWORD*)a2 + 8), *((_QWORD*)a2 + 7));
    }
    else {
      v21 = *((_QWORD*)a2 + 6);
      v22 = *((_QWORD*)a2 + 8);
      *((_QWORD*)v3 + 7) = *((_QWORD*)a2 + 7);
      *((_QWORD*)v3 + 8) = v22;
      *v20 = v21;
    }
    v27 = a2[72];
    result = v3 + 72;
    if ((v3[72] & 1) != 0) {
      v30 = (v27 & 1) == 0;
      v31 = v27 >> 1;
      if (v30) {
        v32 = a2 + 73;
      }
      else {
        v32 = *((unsigned __int8**)a2 + 11);
      }
      if (v30) {
        v33 = v31;
      }
      else {
        v33 = *((_QWORD*)a2 + 10);
      }
      result = (unsigned __int8*)GameRoutine_64dde0(result, v32, v33);
    }
    else if ((v27 & 1) != 0) {
      result = (unsigned __int8*)GameRoutine_64df20(result, *((_QWORD*)a2 + 11),
                                                    *((_QWORD*)a2 + 10));
    }
    else {
      v28 = *((_QWORD*)a2 + 9);
      v29 = *((_QWORD*)a2 + 11);
      *((_QWORD*)v3 + 10) = *((_QWORD*)a2 + 10);
      *((_QWORD*)v3 + 11) = v29;
      *(_QWORD*)result = v28;
    }
  }
  *((_QWORD*)v3 + 12) = *((_QWORD*)a2 + 12);
  *((_QWORD*)v3 + 13) = *((_QWORD*)a2 + 13);
  *((_QWORD*)v3 + 14) = *((_QWORD*)a2 + 14);
  *((_QWORD*)v3 + 16) = *((_QWORD*)a2 + 16);
  *((_DWORD*)v3 + 34) = *((_DWORD*)a2 + 34);
  *((_DWORD*)v3 + 35) = *((_DWORD*)a2 + 35);
  v35 = *((_QWORD*)a2 + 18);
  v34 = *((_QWORD*)a2 + 19);
  if (v34 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v34 + 8), 1u,
                              memory_order_relaxed);
  }
  v36 = *((_QWORD*)v3 + 19);
  *((_QWORD*)v3 + 18) = v35;
  *((_QWORD*)v3 + 19) = v34;
  if (v36 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v36 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v36 + 16LL))(v36);
    result = (unsigned __int8*)GameRoutine_1a09c50(v36);
  }
  v38 = *((_QWORD*)a2 + 20);
  v37 = *((_QWORD*)a2 + 21);
  if (v37 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v37 + 8), 1u,
                              memory_order_relaxed);
  }
  v39 = *((_QWORD*)v3 + 21);
  *((_QWORD*)v3 + 20) = v38;
  *((_QWORD*)v3 + 21) = v37;
  if (v39 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v39 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v39 + 16LL))(v39);
    result = (unsigned __int8*)GameRoutine_1a09c50(v39);
  }
  v3[192] = a2[192];
  v3[193] = a2[193];
  v40 = *((_QWORD*)a2 + 23);
  *((_QWORD*)v3 + 22) = *((_QWORD*)a2 + 22);
  *((_QWORD*)v3 + 23) = v40;
  return result;
}

__int64 GameHr_1922310(__int64 result, _QWORD* a2, char a3)
{
  __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  char* v9;
  _QWORD v10[2];
  __int64 v11;

  v4 = result;
  if ((*(_BYTE*)result & 1) == 0) {
    *(_WORD*)result = 0;
    if ((*(_BYTE*)(result + 24) & 1) != 0) {
      goto LABEL_3;
    }
  LABEL_6:
    *(_WORD*)(result + 24) = 0;
    if ((*(_BYTE*)(result + 48) & 1) != 0) {
      goto LABEL_4;
    }
    goto LABEL_7;
  }
  **(_BYTE**)(result + 16) = 0;
  *(_QWORD*)(result + 8) = 0;
  if ((*(_BYTE*)(result + 24) & 1) == 0) {
    goto LABEL_6;
  }
LABEL_3:
  **(_BYTE**)(result + 40) = 0;
  *(_QWORD*)(result + 32) = 0;
  if ((*(_BYTE*)(result + 48) & 1) != 0) {
  LABEL_4:
    **(_BYTE**)(result + 64) = 0;
    *(_QWORD*)(result + 56) = 0;
    goto LABEL_8;
  }
LABEL_7:
  *(_WORD*)(result + 48) = 0;
LABEL_8:
  if ((*(_BYTE*)(result + 72) & 1) != 0) {
    **(_BYTE**)(result + 88) = 0;
    *(_QWORD*)(result + 80) = 0;
  }
  else {
    *(_WORD*)(result + 72) = 0;
  }
  v5 = *(unsigned __int8*)a2;
  if ((v5 & 1) != 0) {
    v6 = a2[1];
  }
  else {
    v6 = v5 >> 1;
  }
  if (v6 != 0) {
    v10[1] = 0;
    v11 = 0;
    v10[0] = 0;
    v7 = GameRoutine_1917900((__int64)v10, a2);
    GameRoutine_1922c00(v4, v7);
    if ((v10[0] & 1) != 0 && v11 != 0) {
      v8 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v8 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v8);
    }
    if ((unsigned __int8)(a3 - 1) > 6u) {
      v9 = &GameData_1a9f09e;
    }
    else {
      v9 = GameData_2110a28[(unsigned __int8)(a3 - 1)];
    }
    return GameRoutine_60a020(v4 + 72, v9);
  }
  return result;
}

__int64 GameHr_1922460(__int64 result, __int64 a2)
{
  __int64 v3;
  char* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int8 v15;
  __int64 v16;
  __int64 v17;
  _QWORD v18[2];
  __int64 v19;
  _QWORD v20[2];
  char* v21;
  _QWORD v22[2];
  __int64 v23;

  v3 = result;
  if ((*(_BYTE*)result & 1) == 0) {
    *(_WORD*)result = 0;
    if ((*(_BYTE*)(result + 24) & 1) != 0) {
      goto LABEL_3;
    }
  LABEL_6:
    *(_WORD*)(result + 24) = 0;
    if ((*(_BYTE*)(result + 48) & 1) != 0) {
      goto LABEL_4;
    }
    goto LABEL_7;
  }
  **(_BYTE**)(result + 16) = 0;
  *(_QWORD*)(result + 8) = 0;
  if ((*(_BYTE*)(result + 24) & 1) == 0) {
    goto LABEL_6;
  }
LABEL_3:
  **(_BYTE**)(result + 40) = 0;
  *(_QWORD*)(result + 32) = 0;
  if ((*(_BYTE*)(result + 48) & 1) != 0) {
  LABEL_4:
    **(_BYTE**)(result + 64) = 0;
    *(_QWORD*)(result + 56) = 0;
    goto LABEL_8;
  }
LABEL_7:
  *(_WORD*)(result + 48) = 0;
LABEL_8:
  if ((*(_BYTE*)(result + 72) & 1) != 0) {
    **(_BYTE**)(result + 88) = 0;
    *(_QWORD*)(result + 80) = 0;
    if (a2 == 0) {
      return result;
    }
  }
  else {
    *(_WORD*)(result + 72) = 0;
    if (a2 == 0) {
      return result;
    }
  }
  v20[1] = 0;
  v21 = nullptr;
  v19 = 0;
  v20[0] = 0;
  v18[0] = 0;
  v18[1] = 0;
  GameRoutine_1917900((__int64)v20, (_QWORD*)(a2 + 40));
  if ((v20[0] & 1) != 0) {
    v4 = v21;
  }
  else {
    v4 = (char*)v20 + 1;
  }
  GameRoutine_1923640(v18, v4);
  if (*(_BYTE*)(a2 + 1041) == 1 && *(_QWORD*)(a2 + 96) != 0) {
    v5 = GameRoutine_1f640();
    if (v5 != 0) {
      v6 = v5;
      if (*(_QWORD*)(((__int64 (*)(void))GameRoutine_4d790)() + 8) != 0) {
        v7 = GameRoutine_4d790(v6);
        if ((unsigned int)GameRoutine_1a0a540("Default", *(_QWORD*)(v7 + 16),
                                              7) != 0) {
          v8 = GameRoutine_4d790(v6);
          if ((unsigned int)GameRoutine_1a0a540("default", *(_QWORD*)(v8 + 16),
                                                7) != 0) {
            v9 = GameRoutine_1a09ce0(v18, &GameData_1ac690d, 1);
            v10 = *(_QWORD*)(GameRoutine_4d790(v6) + 16);
            v11 = GameRoutine_1a09c70(v10);
            GameRoutine_1a09ce0(v9, v10, v11);
          }
        }
      }
    }
  }
  v22[1] = 0;
  v23 = 0;
  v22[0] = 0;
  v12 = GameRoutine_1917900((__int64)v22, v18);
  GameRoutine_1922c00(v3, v12);
  if ((v22[0] & 1) != 0 && v23 != 0) {
    v13 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v13 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v13);
  }
  if ((*(_BYTE*)(a2 + 64) & 1) != 0) {
    v14 = *(_QWORD*)(a2 + 80);
  }
  else {
    v14 = a2 + 65;
  }
  v15 = GameRoutine_19233d0(v14);
  result = GameRoutine_60a020(v3 + 72, *((_QWORD*)&GameData_21109e8 + v15));
  if ((v18[0] & 1) != 0 && v19 != 0) {
    v16 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v16 = 56;
    }
    result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v16);
  }
  if ((v20[0] & 1) != 0 && v21 != nullptr) {
    v17 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v17 = 56;
    }
    return GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v17);
  }
  return result;
}

__int64 GameHr_19227e0(__int64* a1, char a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v9;
  __int64 v11;
  __int64 v12;
  __int64 v14;

  v2 = a1[1];
  if (v2 == 0) {
    return 0;
  }
  v3 = *a1;
  v4 = *a1 + v2;
  if (a2 == 2) {
    if (v2 >= 3) {
      v9 = *a1;
      do {
        v6 = GameRoutine_1a09c60(v9, 48);
        if (v6 == 0) {
          break;
        }
        if (*(_WORD*)v6 == 12592 && *(_BYTE*)(v6 + 2) == 54) {
          return v6 != v4 && v6 - v3 != -1;
        }
        v9 = v6 + 1;
      } while (v4 - v9 > 2);
    }
  }
  else if (a2 == 1) {
    if (v2 >= 3) {
      v5 = *a1;
      do {
        v6 = GameRoutine_1a09c60(v5, 48);
        if (v6 == 0) {
          break;
        }
        if (*(_WORD*)v6 == 12592 && *(_BYTE*)(v6 + 2) == 53) {
          return v6 != v4 && v6 - v3 != -1;
        }
        v5 = v6 + 1;
      } while (v4 - v5 > 2);
    }
  }
  else {
    if (v2 >= 3) {
      v11 = *a1;
      do {
        v12 = GameRoutine_1a09c60(v11, 48);
        if (v12 == 0) {
          break;
        }
        if (*(_WORD*)v12 == 12592 && *(_BYTE*)(v12 + 2) == 53) {
          if (v12 != v4 && v12 - v3 != -1) {
            return 1;
          }
          break;
        }
        v11 = v12 + 1;
      } while (v4 - v11 > 2);
    }
    if (v2 >= 3) {
      v14 = v3;
      do {
        v6 = GameRoutine_1a09c60(v14, 48);
        if (v6 == 0) {
          break;
        }
        if (*(_WORD*)v6 == 12592 && *(_BYTE*)(v6 + 2) == 54) {
          return v6 != v4 && v6 - v3 != -1;
        }
        v14 = v6 + 1;
      } while (v4 - v14 > 2);
    }
  }
  v6 = v4;
  return v6 != v4 && v6 - v3 != -1;
}

__int64 GameHr_1925800(__int64 a1)
{
  __int64* v2;
  __int64* v3;
  long double v4;
  double v5;
  __int64 v6;
  __int64* v7;
  _BYTE* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64* v17;
  __int64 v18;
  int v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64* v28;
  __int64 v29;
  long double v30;
  double v31;
  __int64 v32;
  __int64* v33;
  __int64 v34;
  __int64 v35;
  int v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  int v40;
  _DWORD* v41;
  int v42;
  __int64 v46;
  const char* v47;
  _QWORD* v48;
  _QWORD* v49;
  unsigned int v50;
  unsigned int v51;
  __int64 v52;
  __int64* v53;
  __int64 v54;
  long double v55;
  double v56;
  __int64 v57;
  __int64* v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  const char* v64;
  __int64* v65;
  long double v66;
  double v67;
  __int64 result;
  __int64 v69;
  __int64* v70;
  _QWORD* v71;
  __int64 v72;
  __int64 v73;
  __int64* v74;
  unsigned __int64 v75;
  unsigned __int64 v76;
  unsigned __int64 v77;
  int v78;
  int v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;

  v2 = GameData_2130618[0];
  if (*(_QWORD*)(a1 + 168) != 0) {
    v3 = *(__int64**)(a1 + 168);
  }
  else {
    v3 = GameData_2130618[0];
  }
  GameRoutine_1560070((void*)&v74, v3, "L_Bg");
  if (v75 == 0) {
    goto LABEL_23;
  }
  v6 = GameRoutine_1a0a0c0(v4, v5);
  v7 = v74;
  if (v75 != 0) {
    GameRoutine_1a09c50(v75);
  }
  if (v6 == 0 || v7 == nullptr) {
    if (v6 == 0) {
      goto LABEL_23;
    }
    goto LABEL_21;
  }
  v9 = *(_BYTE**)(*(_QWORD*)(a1 + 208) + 32LL);
  if (v9 == nullptr || *v9 == 0) {
    v11 = (__int64)*GameData_212def8;
    if (*GameData_212def8 == nullptr) {
      goto LABEL_21;
    }
  LABEL_19:
    v12 = GameRoutine_15621a0(v7, "T_Title");
    if (v12 != 0) {
      GameRoutine_156c5d0(v12, v11, 0);
    }
    goto LABEL_21;
  }
  v80 = -1;
  v81 = -1;
  v82 = -1;
  v83 = -1;
  v10 = *GameData_212c738[0];
  v84 = -1;
  v85 = -1;
  v86 = -1;
  v87 = -1;
  v88 = -1;
  v89 = -1;
  v90 = -1;
  v91 = -1;
  v74 = GameData_212e348 + 2;
  v75 = 0xFFFF0001FFFF0000LL;
  v76 = 0xFFFF0004FFFF0002LL;
  v77 = 0xFFFF0006FFFF0005LL;
  v92 = 8;
  v78 = -65529;
  v79 = -65528;
  v11 = GameRoutine_a4dbe0(v10, v9, 0, &v74);
  if (v11 != 0) {
    goto LABEL_19;
  }
LABEL_21:
  if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    GameRoutine_1a09c50(v6);
  }
LABEL_23:
  if (*(_QWORD*)(a1 + 168) != 0) {
    v13 = *(__int64**)(a1 + 168);
  }
  else {
    v13 = v2;
  }
  v14 = GameRoutine_155f480(v13, "IconGod");
  if (v14 != 0) {
    v15 = GameRoutine_1a0a6c0(v14, GameData_212d670[0], GameData_212d678[0], 0);
    v71 = (_QWORD*)(a1 + 208);
    v16 = GameRoutine_957180(*(_QWORD*)(a1 + 208));
    if (v15 != 0) {
      GameRoutine_136a920(GameData_22416f0 + 1264, v15, 0, 7, v16);
    }
  }
  else {
    v71 = (_QWORD*)(a1 + 208);
    GameRoutine_957180(*(_QWORD*)(a1 + 208));
  }
  if (*(_QWORD*)(a1 + 168) != 0) {
    v17 = *(__int64**)(a1 + 168);
  }
  else {
    v17 = v2;
  }
  GameRoutine_1560070((void*)&v72, v17, "L_MiracleLv");
  GameRoutine_1584200(&v72, *(_QWORD*)(a1 + 208));
  if (v73 != 0) {
    GameRoutine_1a09c50(v73);
  }
  v18 = GameData_21caab0;
  v19 = GameRoutine_90dc20(GameData_21caab0 + 152, *(_QWORD*)(*v71 + 112LL));
  v20 = *(_QWORD*)(v18 + 160);
  v21 = v20 + 32;
  v22 = *(_QWORD*)(v20 + 8) + 32LL * (unsigned int)v19;
  if (v19 >= 0) {
    v23 = v22;
  }
  else {
    v23 = v21;
  }
  v24 = *(_QWORD*)(*(_QWORD*)(v23 + 16) + 24LL);
  if (*(int*)(v24 + 420) >= 1) {
    v25 = 0;
    do {
      v26 = v24 + 4 * v25;
      v27 = v25 + 1;
      if ((*(_WORD*)(v26 + 4) & 0xFFF) != 0) {
        v28 = *(_QWORD*)(a1 + 168) != 0 ? *(__int64**)(a1 + 168) : v2;
        v29 = GameRoutine_7a7dc0("L_Miracle%02d", (unsigned int)v25);
        GameRoutine_1560070((void*)&v74, v28, v29);
        if (v75 != 0) {
          v32 = GameRoutine_1a0a0c0(v30, v31);
          v33 = v74;
          if (v75 != 0) {
            GameRoutine_1a09c50(v75);
          }
          if (v32 != 0 && v33 != nullptr) {
            v34 = GameRoutine_155f480(v33, "T_LvNum");
            if (v34 != 0) {
              v35 = GameRoutine_1a0a6c0(v34, GameData_212d670[0],
                                        GameData_212d690, 0);
              if (v35 != 0) {
                GameRoutine_156c910(v35, "%d", 1);
              }
            }
            v36 = *(_DWORD*)(v26 + 4);
            if ((v36 & 0xFFF) != 0 &&
                *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                           8LL * (v36 & 0xFFF)) != 0) {
              v37 = GameRoutine_6fbd80();
              if (v37 != 0) {
                v38 = v37;
                v39 = GameRoutine_15621a0(v33, "T_Txt");
                if (v39 != 0) {
                  GameRoutine_156c5d0(v39, v38, 0);
                }
              }
            }
            v40 = *(_DWORD*)(v23 + 4);
            v41 = *(_DWORD**)(*(_QWORD*)(v23 + 16) + 24LL);
            v42 = v41[105];
            if (v42 > 2 && v41[103] <= v40) {
              v46 = 3;
            }
            else if (v42 > 1 && v41[102] <= v40) {
              v46 = 2;
            }
            else if (v42 >= 1 && v41[101] <= v40) {
              v46 = 1;
            }
            else {
              v46 = (int)v41[104];
            }
            if (v46 >= v27) {
              v47 = "UnLock";
            }
            else {
              v47 = "Lock";
            }
            GameRoutine_1562680(v33, v47, 1.0);
          LABEL_80:
            if (atomic_fetch_add((atomic_ullong* volatile)(v32 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v32 + 16LL))(v32);
              GameRoutine_1a09c50(v32);
            }
            goto LABEL_40;
          }
          if (v32 != 0) {
            goto LABEL_80;
          }
        }
      }
    LABEL_40:
      v25 = v27;
      v24 = *(_QWORD*)(*(_QWORD*)(v23 + 16) + 24LL);
    } while (v27 < *(int*)(v24 + 420));
  }
  v49 = *(_QWORD**)(*GameData_212cc60[0] + 64);
  v48 = *(_QWORD**)(*GameData_212cc60[0] + 72);
  if (v49 != v48) {
    v50 = 0;
    do {
      v52 = *v49;
      if (GameRoutine_957180(*v49) != 0) {
        v51 = v50 + 1;
        if (*(_QWORD*)(a1 + 168) != 0) {
          v53 = *(__int64**)(a1 + 168);
        }
        else {
          v53 = v2;
        }
        v54 = GameRoutine_7a7dc0("L_Week%02d", v50);
        GameRoutine_1560070((void*)&v74, v53, v54);
        if (v75 != 0) {
          v57 = GameRoutine_1a0a0c0(v55, v56);
          v58 = v74;
          if (v75 != 0) {
            GameRoutine_1a09c50(v75);
          }
          if (v57 != 0 && v58 != nullptr) {
            v59 = GameRoutine_155f480(v58, "IconGod");
            if (v59 != 0) {
              v60 = GameRoutine_1a0a6c0(v59, GameData_212d670[0],
                                        GameData_212d678[0], 0);
              v61 = GameRoutine_957180(v52);
              if (v60 != 0) {
                GameRoutine_136a920(GameData_22416f0 + 1264, v60, 0, 7, v61);
              }
            }
            else {
              GameRoutine_957180(v52);
            }
            v62 = GameRoutine_957180(*v71);
            v63 = GameRoutine_957180(v52);
            if ((unsigned int)GameRoutine_1a09d30(v62, v63) != 0) {
              v64 = "Default";
            }
            else {
              v64 = "Special";
            }
            GameRoutine_1562680(v58, v64, 1.0);
          LABEL_105:
            if (atomic_fetch_add((atomic_ullong* volatile)(v57 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v57 + 16LL))(v57);
              GameRoutine_1a09c50(v57);
            }
            goto LABEL_85;
          }
          if (v57 != 0) {
            goto LABEL_105;
          }
        }
      }
      else {
        v51 = v50;
      }
    LABEL_85:
      ++v49;
      v50 = v51;
    } while (v49 != v48);
  }
  if (*(_QWORD*)(a1 + 168) != 0) {
    v65 = *(__int64**)(a1 + 168);
  }
  else {
    v65 = v2;
  }
  GameRoutine_1560070((void*)&v74, v65, "L_Week06");
  result = v75;
  if (v75 != 0) {
    v69 = GameRoutine_1a0a0c0(v66, v67);
    v70 = v74;
    result = v75;
    if (v75 != 0) {
      result = GameRoutine_1a09c50(v75);
    }
    if (v69 != 0 && v70 != nullptr) {
      result = GameRoutine_1562680(v70, "Special", 1.0);
    }
    else if (v69 == 0) {
      return result;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v69 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v69 + 16LL))(v69);
      return GameRoutine_1a09c50(v69);
    }
  }
  return result;
}

__int64 GameHr_1929960(_QWORD* a1)
{
  unsigned __int64 v2;
  const char* v3;
  unsigned __int64 v4;
  __int64 v5;
  long double v6;
  double v7;
  __int64 result;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  const char* v15;
  const char* v16;
  __int64 v17;
  __int64 v18;
  const char* v19;
  unsigned int v20;
  __int64 v21;
  unsigned int v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;

  v2 = 0;
  v3 = "Select";
  do {
    v5 = GameRoutine_7a7dc0("L_Cast%02d", v2);
    GameRoutine_1560070((void*)&v26, a1 + 106, v5);
    result = v27;
    if (v27 == 0) {
      goto LABEL_2;
    }
    v9 = GameRoutine_1a0a0c0(v6, v7);
    v10 = v26;
    result = v27;
    if (v27 != 0) {
      result = GameRoutine_1a09c50(v27);
    }
    if (v9 == 0 || v10 == 0) {
      if (v9 == 0) {
        goto LABEL_2;
      }
      goto LABEL_34;
    }
    v11 = a1[149];
    v12 = a1[148];
    if (v11 == v12) {
    LABEL_15:
      v14 = 0xFFFFFFFFLL;
    }
    else {
      v13 = (v11 - v12) >> 3;
      v14 = 0;
      while (*(_QWORD*)(v12 + 8 * v14) != 0) {
        if (v13 == ++v14) {
          goto LABEL_15;
        }
      }
      v14 = (unsigned int)v14;
    }
    v15 = v3;
    if (v2 == v14) {
      goto LABEL_33;
    }
    if (*(_QWORD*)(v12 + 8 * v2) != 0) {
      v16 = "Decide";
    }
    else {
      v16 = "Default";
    }
    result = GameRoutine_1562cf0(v10, v16);
    v17 = *(_QWORD*)(a1[148] + 8 * v2);
    if (v17 != 0) {
      v18 = a1[152];
      v19 = v3;
      v26 = *(_QWORD*)(v17 + 392);
      v20 = GameRoutine_13e4ce0(v18, &v26, (unsigned int)v2);
      if ((unsigned __int8)v20 == 6) {
        v21 = GameRoutine_155f480(v10, "Face");
        if (v21 != 0) {
          v21 = GameRoutine_1a0a6c0(v21, GameData_212d670[0],
                                    GameData_212d678[0], 0);
        }
        GameRoutine_1840740(v21, 0, v17, 6, 1);
        v15 = "FaceDefault";
      }
      else {
        v22 = v20;
        GameRoutine_1560070((void*)&v24, v10, "L_Favor");
        GameRoutine_15717a0(&v24, v22);
        if (v25 != 0) {
          GameRoutine_1a09c50(v25);
        }
        v23 = GameRoutine_155f480(v10, "Face");
        if (v23 != 0) {
          v23 = GameRoutine_1a0a6c0(v23, GameData_212d670[0],
                                    GameData_212d678[0], 0);
        }
        GameRoutine_1840740(v23, 0, v17, v22, 1);
        v15 = "FaceDefault";
        v3 = v19;
      }
    LABEL_33:
      result = GameRoutine_1562cf0(v10, v15);
    }
  LABEL_34:
    if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
      result = GameRoutine_1a09c50(v9);
    }
  LABEL_2:
    ++v2;
    if (*(_BYTE*)(a1[152] + 72LL) == 3) {
      v4 = 5;
    }
    else {
      v4 = 3;
    }
  } while (v2 < v4);
  return result;
}

__int64 GameHr_192d3d0(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  bool v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD v10[6];
  struct {
    __int64* v11;
    __int64 v12;
  } v11_;

  v2 = *(__int64**)(*GameData_212dcd0 + 48);
  if (*(__int64**)(*GameData_212dcd0 + 56) == v2) {
    v3 = 0;
  }
  else {
    v3 = *v2;
  }
  LayoutAccessor_1560070((void*)(&v11_.v11), (__int64*)(a1 + 848),
                         "L_MaterialPool/L_Pool/L_UnitInfo");
  v10[4] = 0;
  v4 = game_159e890(v3, 0, (__int64)v10);
  if (v11_.v12 != 0) {
    v5 = std___1___shared_weak_count_lock(v11_.v12);
    if (v5 != 0) {
      v6 = v5;
      if (v11_.v11 != nullptr) {
        LayoutAccessor_15740c0(v11_.v11, v3, 0, nullptr, v4);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
        std___1___shared_weak_count___release_weak(v6);
      }
    }
    if (v11_.v12 != 0) {
      std___1___shared_weak_count___release_weak(v11_.v12);
    }
  }
  v7 = *(_QWORD*)(a1 + 152);
  if (v7 == 0) {
    v7 = a1;
  }
  v8 = *(_QWORD*)(v7 + 32);
  if (v8 != 0) {
    v8 = __dynamic_cast(v8, GameData_212c610, GameData_2131c18[0], 0);
    if (v8 != 0) {
      v8 = __dynamic_cast(v8, GameData_2131c18[0], GameData_212e030[0], 0);
    }
  }
  if (v8 == 0) {
    v8 = a1;
  }
  return GameRoutine_15ebb10_alt1(v8, v3);
}

__int64 GameHr_1931560(__int64 a1)
{
  __int64 v2;
  int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 result;
  struct {
    _QWORD v8[4];
    _QWORD* v9;
  } v8_;
  struct {
    __int64 v10;
    __int64 v11;
  } v10_;

  LayoutAccessor_1560070((void*)(&v10_.v10), (__int64*)(a1 + 848), "L_PageTab");
  v8_.v8[0] = GameData_2116180;
  v2 = *(_QWORD*)a1;
  v8_.v9 = v8_.v8;
  v3 = (*(__int64 (**)(__int64))(v2 + 192))(a1);
  game_menu_PageTab_SetupImage((int*)(a1 + 656), (__int64)&v10_.v10,
                               (__int64)v8_.v8, v3, 14, 15);
  if (v8_.v9 == v8_.v8) {
    v4 = 32;
  }
  else {
    if (v8_.v9 == nullptr) {
      goto LABEL_6;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v8_.v9 + v4))((__int64)v8_.v9);
LABEL_6:
  if (v10_.v11 != 0) {
    std___1___shared_weak_count___release_weak(v10_.v11);
  }
  v5 = *(_QWORD*)(a1 + 152);
  if (v5 == 0) {
    v5 = a1;
  }
  v6 = *(_QWORD*)(v5 + 32);
  if (v6 != 0) {
    v6 = __dynamic_cast(v6, GameData_212c610, GameData_2131c18[0], 0);
    if (v6 != 0) {
      v6 = __dynamic_cast(v6, GameData_2131c18[0], GameData_212e030[0], 0);
    }
  }
  if (v6 == 0) {
    v6 = a1;
  }
  result = __dynamic_cast(v6, GameData_212e030[0], GameData_212fab0[0], 0);
  if (result != 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)(result + 1056) + 56LL))(
        result + 1056);
  }
  *(_BYTE*)(a1 + 1065) = result;
  return result;
}

__int64 GameHr_19332a0(__int64 result)
{
  __int64 v1;
  __int64 v2;
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
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;

  v1 = result;
  if ((*(_BYTE*)(result + 408) & 1) != 0 && *(_QWORD*)(result + 424) != 0) {
    v2 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v2 = 56;
    }
    result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v2);
  }
  if ((*(_BYTE*)(v1 + 384) & 1) != 0 && *(_QWORD*)(v1 + 400) != 0) {
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v3 = 56;
    }
    result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v3);
  }
  if ((*(_BYTE*)(v1 + 360) & 1) != 0 && *(_QWORD*)(v1 + 376) != 0) {
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v4 = 56;
    }
    result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v4);
  }
  if ((*(_BYTE*)(v1 + 336) & 1) != 0 && *(_QWORD*)(v1 + 352) != 0) {
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v5 = 56;
    }
    result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v5);
  }
  if ((*(_BYTE*)(v1 + 312) & 1) != 0 && *(_QWORD*)(v1 + 328) != 0) {
    v6 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v6 = 56;
    }
    result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v6);
  }
  if ((*(_BYTE*)(v1 + 288) & 1) != 0 && *(_QWORD*)(v1 + 304) != 0) {
    v7 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v7 = 56;
    }
    result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v7);
  }
  if ((*(_BYTE*)(v1 + 264) & 1) != 0 && *(_QWORD*)(v1 + 280) != 0) {
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v8 = 56;
    }
    result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v8);
  }
  if ((*(_BYTE*)(v1 + 240) & 1) != 0 && *(_QWORD*)(v1 + 256) != 0) {
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v9 = 56;
    }
    result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v9);
  }
  if ((*(_BYTE*)(v1 + 216) & 1) != 0 && *(_QWORD*)(v1 + 232) != 0) {
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v10 = 56;
    }
    result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v10);
  }
  if ((*(_BYTE*)(v1 + 192) & 1) != 0 && *(_QWORD*)(v1 + 208) != 0) {
    v11 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v11 = 56;
    }
    result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v11);
  }
  if ((*(_BYTE*)(v1 + 168) & 1) != 0 && *(_QWORD*)(v1 + 184) != 0) {
    v12 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v12 = 56;
    }
    result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v12);
  }
  if ((*(_BYTE*)(v1 + 144) & 1) != 0 && *(_QWORD*)(v1 + 160) != 0) {
    v13 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v13 = 56;
    }
    result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v13);
  }
  if ((*(_BYTE*)(v1 + 120) & 1) != 0 && *(_QWORD*)(v1 + 136) != 0) {
    v14 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v14 = 56;
    }
    result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v14);
  }
  if ((*(_BYTE*)(v1 + 96) & 1) != 0 && *(_QWORD*)(v1 + 112) != 0) {
    v15 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v15 = 56;
    }
    result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v15);
  }
  if ((*(_BYTE*)(v1 + 72) & 1) != 0 && *(_QWORD*)(v1 + 88) != 0) {
    v16 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v16 = 56;
    }
    result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v16);
  }
  if ((*(_BYTE*)(v1 + 48) & 1) != 0 && *(_QWORD*)(v1 + 64) != 0) {
    v17 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v17 = 56;
    }
    result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v17);
  }
  if ((*(_BYTE*)(v1 + 24) & 1) != 0 && *(_QWORD*)(v1 + 40) != 0) {
    v18 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v18 = 56;
    }
    result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v18);
  }
  if ((*(_BYTE*)v1 & 1) != 0 && *(_QWORD*)(v1 + 16) != 0) {
    v19 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v19 = 56;
    }
    return GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v19);
  }
  return result;
}

__int64 GameHr_19336c0()
{
  _QWORD* v0;
  __int64 v1;
  __int64 v2;
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
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;

  v0 = (_QWORD*)GameData_212bf68;
  v1 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 32, 16, 0);
  *(_WORD*)(v1 + 24) = 183;
  GameData_226b6c0 = 25;
  GameData_226b6c8 = v1;
  GameData_226b6b8 = 33;
  *(_QWORD*)v1 = 0xE3A482E35F444946LL;
  *(_QWORD*)(v1 + 8) = 0x9E83E3A583E3B782LL;
  *(_QWORD*)(v1 + 16) = 0x94E7AB83E3BC83E3LL;
  v2 = GameRoutine_651b90(*v0, 32, 16, 0);
  *(_BYTE*)(v2 + 26) = 0;
  GameData_226b6d0 = 33;
  *(_WORD*)(v2 + 24) = 16823;
  GameData_226b6d8 = 26;
  GameData_226b6e0 = v2;
  *(_QWORD*)v2 = 0xE3A482E35F444946LL;
  *(_QWORD*)(v2 + 8) = 0x9E83E3A583E3B782LL;
  *(_QWORD*)(v2 + 16) = 0x94E7AB83E3BC83E3LL;
  v3 = GameRoutine_651b90(*v0, 40, 16, 0);
  *(_BYTE*)(v3 + 35) = 0;
  GameData_226b6f0 = 35;
  GameData_226b6f8 = v3;
  GameData_226b6e8 = 41;
  *(_DWORD*)(v3 + 31) = -1987845188;
  *(_QWORD*)v3 = 0xE3A482E35F444946LL;
  *(_QWORD*)(v3 + 8) = 0x9E83E3A583E3B782LL;
  *(_QWORD*)(v3 + 16) = 0x94E7AB83E3BC83E3LL;
  *(_QWORD*)(v3 + 24) = 0xBC83E39583E341B7LL;
  v4 = GameRoutine_651b90(*v0, 32, 16, 0);
  GameData_226b708 = 26;
  GameData_226b710 = v4;
  *(_BYTE*)(v4 + 26) = 0;
  GameData_226b700 = 33;
  *(_WORD*)(v4 + 24) = 17079;
  *(_QWORD*)v4 = 0xE3A482E35F444946LL;
  *(_QWORD*)(v4 + 8) = 0x9E83E3A583E3B782LL;
  *(_QWORD*)(v4 + 16) = 0x94E7AB83E3BC83E3LL;
  v5 = GameRoutine_651b90(*v0, 40, 16, 0);
  GameData_226b720 = 35;
  GameData_226b728 = v5;
  *(_DWORD*)(v5 + 31) = -1987845188;
  *(_BYTE*)(v5 + 35) = 0;
  GameData_226b718 = 41;
  *(_QWORD*)v5 = 0xE3A482E35F444946LL;
  *(_QWORD*)(v5 + 8) = 0x9E83E3A583E3B782LL;
  *(_QWORD*)(v5 + 16) = 0x94E7AB83E3BC83E3LL;
  *(_QWORD*)(v5 + 24) = 0xBC83E39583E342B7LL;
  v6 = GameRoutine_651b90(*v0, 32, 16, 0);
  GameData_226b738 = 26;
  GameData_226b740 = v6;
  *(_BYTE*)(v6 + 26) = 0;
  GameData_226b730 = 33;
  *(_WORD*)(v6 + 24) = 17335;
  *(_QWORD*)v6 = 0xE3A482E35F444946LL;
  *(_QWORD*)(v6 + 8) = 0x9E83E3A583E3B782LL;
  *(_QWORD*)(v6 + 16) = 0x94E7AB83E3BC83E3LL;
  v7 = GameRoutine_651b90(*v0, 40, 16, 0);
  GameData_226b750 = 35;
  GameData_226b758 = v7;
  *(_DWORD*)(v7 + 31) = -1987845188;
  *(_BYTE*)(v7 + 35) = 0;
  GameData_226b748 = 41;
  *(_QWORD*)v7 = 0xE3A482E35F444946LL;
  *(_QWORD*)(v7 + 8) = 0x9E83E3A583E3B782LL;
  *(_QWORD*)(v7 + 16) = 0x94E7AB83E3BC83E3LL;
  *(_QWORD*)(v7 + 24) = 0xBC83E39583E343B7LL;
  v8 = GameRoutine_651b90(*v0, 32, 16, 0);
  GameData_226b768 = 26;
  GameData_226b770 = v8;
  *(_BYTE*)(v8 + 26) = 0;
  GameData_226b760 = 33;
  *(_WORD*)(v8 + 24) = 17591;
  *(_QWORD*)v8 = 0xE3A482E35F444946LL;
  *(_QWORD*)(v8 + 8) = 0x9E83E3A583E3B782LL;
  *(_QWORD*)(v8 + 16) = 0x94E7AB83E3BC83E3LL;
  v9 = GameRoutine_651b90(*v0, 40, 16, 0);
  GameData_226b780 = 35;
  GameData_226b788 = v9;
  *(_DWORD*)(v9 + 31) = -1987845188;
  *(_BYTE*)(v9 + 35) = 0;
  GameData_226b778 = 41;
  *(_QWORD*)v9 = 0xE3A482E35F444946LL;
  *(_QWORD*)(v9 + 8) = 0x9E83E3A583E3B782LL;
  *(_QWORD*)(v9 + 16) = 0x94E7AB83E3BC83E3LL;
  *(_QWORD*)(v9 + 24) = 0xBC83E39583E344B7LL;
  v10 = GameRoutine_651b90(*v0, 32, 16, 0);
  GameData_226b798 = 25;
  GameData_226b7a0 = v10;
  GameData_226b790 = 33;
  *(_WORD*)(v10 + 24) = 179;
  *(_QWORD*)v10 = 0xE3A482E35F444946LL;
  *(_QWORD*)(v10 + 8) = 0x9E83E3A583E3B782LL;
  *(_QWORD*)(v10 + 16) = 0xA5E5AB83E3BC83E3LL;
  v11 = GameRoutine_651b90(*v0, 32, 16, 0);
  GameData_226b7b0 = 26;
  GameData_226b7b8 = v11;
  *(_BYTE*)(v11 + 26) = 0;
  GameData_226b7a8 = 33;
  *(_WORD*)(v11 + 24) = 16819;
  *(_QWORD*)v11 = 0xE3A482E35F444946LL;
  *(_QWORD*)(v11 + 8) = 0x9E83E3A583E3B782LL;
  *(_QWORD*)(v11 + 16) = 0xA5E5AB83E3BC83E3LL;
  v12 = GameRoutine_651b90(*v0, 40, 16, 0);
  GameData_226b7c8 = 35;
  GameData_226b7d0 = v12;
  *(_DWORD*)(v12 + 31) = -1987845188;
  *(_BYTE*)(v12 + 35) = 0;
  GameData_226b7c0 = 41;
  *(_QWORD*)v12 = 0xE3A482E35F444946LL;
  *(_QWORD*)(v12 + 8) = 0x9E83E3A583E3B782LL;
  *(_QWORD*)(v12 + 16) = 0xA5E5AB83E3BC83E3LL;
  *(_QWORD*)(v12 + 24) = 0xBC83E39583E341B3LL;
  v13 = GameRoutine_651b90(*v0, 32, 16, 0);
  GameData_226b7e0 = 26;
  GameData_226b7e8 = v13;
  *(_BYTE*)(v13 + 26) = 0;
  GameData_226b7d8 = 33;
  *(_WORD*)(v13 + 24) = 17075;
  *(_QWORD*)v13 = 0xE3A482E35F444946LL;
  *(_QWORD*)(v13 + 8) = 0x9E83E3A583E3B782LL;
  *(_QWORD*)(v13 + 16) = 0xA5E5AB83E3BC83E3LL;
  v14 = GameRoutine_651b90(*v0, 40, 16, 0);
  GameData_226b7f8 = 35;
  GameData_226b800 = v14;
  *(_DWORD*)(v14 + 31) = -1987845188;
  *(_BYTE*)(v14 + 35) = 0;
  GameData_226b7f0 = 41;
  *(_QWORD*)v14 = 0xE3A482E35F444946LL;
  *(_QWORD*)(v14 + 8) = 0x9E83E3A583E3B782LL;
  *(_QWORD*)(v14 + 16) = 0xA5E5AB83E3BC83E3LL;
  *(_QWORD*)(v14 + 24) = 0xBC83E39583E342B3LL;
  v15 = GameRoutine_651b90(*v0, 32, 16, 0);
  GameData_226b810 = 26;
  GameData_226b818 = v15;
  *(_BYTE*)(v15 + 26) = 0;
  GameData_226b808 = 33;
  *(_WORD*)(v15 + 24) = 17331;
  *(_QWORD*)v15 = 0xE3A482E35F444946LL;
  *(_QWORD*)(v15 + 8) = 0x9E83E3A583E3B782LL;
  *(_QWORD*)(v15 + 16) = 0xA5E5AB83E3BC83E3LL;
  v16 = GameRoutine_651b90(*v0, 40, 16, 0);
  GameData_226b828 = 35;
  GameData_226b830 = v16;
  *(_DWORD*)(v16 + 31) = -1987845188;
  *(_BYTE*)(v16 + 35) = 0;
  GameData_226b820 = 41;
  *(_QWORD*)v16 = 0xE3A482E35F444946LL;
  *(_QWORD*)(v16 + 8) = 0x9E83E3A583E3B782LL;
  *(_QWORD*)(v16 + 16) = 0xA5E5AB83E3BC83E3LL;
  *(_QWORD*)(v16 + 24) = 0xBC83E39583E343B3LL;
  v17 = GameRoutine_651b90(*v0, 32, 16, 0);
  GameData_226b840 = 26;
  GameData_226b848 = v17;
  *(_BYTE*)(v17 + 26) = 0;
  GameData_226b838 = 33;
  *(_WORD*)(v17 + 24) = 17587;
  *(_QWORD*)v17 = 0xE3A482E35F444946LL;
  *(_QWORD*)(v17 + 8) = 0x9E83E3A583E3B782LL;
  *(_QWORD*)(v17 + 16) = 0xA5E5AB83E3BC83E3LL;
  v18 = GameRoutine_651b90(*v0, 40, 16, 0);
  GameData_226b850 = 41;
  GameData_226b858 = 35;
  GameData_226b860 = v18;
  *(_DWORD*)(v18 + 31) = -1987845188;
  *(_BYTE*)(v18 + 35) = 0;
  *(_QWORD*)v18 = 0xE3A482E35F444946LL;
  *(_QWORD*)(v18 + 8) = 0x9E83E3A583E3B782LL;
  *(_QWORD*)(v18 + 16) = 0xA5E5AB83E3BC83E3LL;
  *(_QWORD*)(v18 + 24) = 0xBC83E39583E344B3LL;
  return GameRoutine_2b0(GameRoutine_19332a0, &GameData_226b6b8,
                         &GameData_1f50948);
}

__int64 GameHr_1934970(__int64 a1)
{
  long double v2;
  double v3;
  __int64 v4;
  __int64 v5;
  float v7;
  float v8;
  float v9;
  float v10;
  __int64 v11;
  __int64 v12;
  char v13;
  __int64 v14;
  __int64 v15;
  char v16;
  __int64 v17;
  __int64 v18;
  char v19;
  __int64 v20;
  __int64 v21;
  char v22;
  __int64 v23;
  __int64 v24;
  char v25;
  __int64 v26;
  __int64 v27;
  char v28;
  __int64 v29;
  __int64 v30;
  char v31;
  __int64 v32;
  __int64 v33;
  char v34;
  __int64 v35;
  __int64 v36;
  char v37;
  __int64 v38;
  __int64 v39;
  char v40;
  float v41;
  __int64 v42;
  __int64 v43;
  char v44;
  __int64 v45;
  __int64 v46;
  char v47;
  __int64 v48;
  __int64 v49;
  char v50;
  __int64 v51;
  __int64 v52;
  char v53;
  __int64 v54;
  __int64 v55;
  char v56;
  __int64* v57;
  unsigned __int8* v58;
  unsigned __int8* v59;
  unsigned __int8* v60;
  __int64 v62;
  __int64 v63;

  GameRoutine_1560070((void*)&v62, a1 + 200, "L_Table");
  if (v63 != 0) {
    v4 = GameRoutine_1a0a0c0(v2, v3);
    v5 = v62;
    if (v63 != 0) {
      GameRoutine_1a09c50(v63);
    }
    if (v4 == 0 || v5 == 0) {
      if (v4 == 0) {
        goto LABEL_43;
      }
    }
    else {
      v7 = GameRoutine_15610b0(v5, "N_Icon00_W");
      GameRoutine_15610b0(v5, "N_Icon00_H");
      v9 = v8;
      v10 = v7 * 0.0;
      v11 = GameRoutine_7a7dc0("Icon%02d_%02d", 0, 0);
      v12 = GameRoutine_155f480(v5, v11);
      if (v12 != 0) {
        v13 = *(_BYTE*)(v12 + 88);
        *(_DWORD*)(v12 + 56) = 0;
        *(float*)(v12 + 48) = v10;
        *(float*)(v12 + 52) = v9 * 0.0;
        *(_BYTE*)(v12 + 88) = v13 | 0x10;
      }
      v14 = GameRoutine_7a7dc0("Icon%02d_%02d", 0, 1);
      v15 = GameRoutine_155f480(v5, v14);
      if (v15 != 0) {
        v16 = *(_BYTE*)(v15 + 88);
        *(float*)(v15 + 48) = v10;
        *(float*)(v15 + 52) = v9;
        *(_DWORD*)(v15 + 56) = 0;
        *(_BYTE*)(v15 + 88) = v16 | 0x10;
      }
      v17 = GameRoutine_7a7dc0("Icon%02d_%02d", 0, 2);
      v18 = GameRoutine_155f480(v5, v17);
      if (v18 != 0) {
        v19 = *(_BYTE*)(v18 + 88);
        *(_DWORD*)(v18 + 56) = 0;
        *(float*)(v18 + 48) = v10;
        *(float*)(v18 + 52) = v9 + v9;
        *(_BYTE*)(v18 + 88) = v19 | 0x10;
      }
      v20 = GameRoutine_7a7dc0("Icon%02d_%02d", 0, 3);
      v21 = GameRoutine_155f480(v5, v20);
      if (v21 != 0) {
        v22 = *(_BYTE*)(v21 + 88);
        *(_DWORD*)(v21 + 56) = 0;
        *(float*)(v21 + 48) = v10;
        *(float*)(v21 + 52) = v9 * 3.0;
        *(_BYTE*)(v21 + 88) = v22 | 0x10;
      }
      v23 = GameRoutine_7a7dc0("Icon%02d_%02d", 0, 4);
      v24 = GameRoutine_155f480(v5, v23);
      if (v24 != 0) {
        v25 = *(_BYTE*)(v24 + 88);
        *(_DWORD*)(v24 + 56) = 0;
        *(float*)(v24 + 48) = v10;
        *(float*)(v24 + 52) = v9 * 4.0;
        *(_BYTE*)(v24 + 88) = v25 | 0x10;
      }
      v26 = GameRoutine_7a7dc0("Icon%02d_%02d", 1, 0);
      v27 = GameRoutine_155f480(v5, v26);
      if (v27 != 0) {
        v28 = *(_BYTE*)(v27 + 88);
        *(_DWORD*)(v27 + 56) = 0;
        *(float*)(v27 + 48) = v7;
        *(float*)(v27 + 52) = v9 * 0.0;
        *(_BYTE*)(v27 + 88) = v28 | 0x10;
      }
      v29 = GameRoutine_7a7dc0("Icon%02d_%02d", 1, 1);
      v30 = GameRoutine_155f480(v5, v29);
      if (v30 != 0) {
        v31 = *(_BYTE*)(v30 + 88);
        *(float*)(v30 + 48) = v7;
        *(float*)(v30 + 52) = v9;
        *(_DWORD*)(v30 + 56) = 0;
        *(_BYTE*)(v30 + 88) = v31 | 0x10;
      }
      v32 = GameRoutine_7a7dc0("Icon%02d_%02d", 1, 2);
      v33 = GameRoutine_155f480(v5, v32);
      if (v33 != 0) {
        v34 = *(_BYTE*)(v33 + 88);
        *(_DWORD*)(v33 + 56) = 0;
        *(float*)(v33 + 48) = v7;
        *(float*)(v33 + 52) = v9 + v9;
        *(_BYTE*)(v33 + 88) = v34 | 0x10;
      }
      v35 = GameRoutine_7a7dc0("Icon%02d_%02d", 1, 3);
      v36 = GameRoutine_155f480(v5, v35);
      if (v36 != 0) {
        v37 = *(_BYTE*)(v36 + 88);
        *(_DWORD*)(v36 + 56) = 0;
        *(float*)(v36 + 48) = v7;
        *(float*)(v36 + 52) = v9 * 3.0;
        *(_BYTE*)(v36 + 88) = v37 | 0x10;
      }
      v38 = GameRoutine_7a7dc0("Icon%02d_%02d", 1, 4);
      v39 = GameRoutine_155f480(v5, v38);
      if (v39 != 0) {
        v40 = *(_BYTE*)(v39 + 88);
        *(_DWORD*)(v39 + 56) = 0;
        *(float*)(v39 + 48) = v7;
        *(float*)(v39 + 52) = v9 * 4.0;
        *(_BYTE*)(v39 + 88) = v40 | 0x10;
      }
      v41 = v7 + v7;
      v42 = GameRoutine_7a7dc0("Icon%02d_%02d", 2, 0);
      v43 = GameRoutine_155f480(v5, v42);
      if (v43 != 0) {
        v44 = *(_BYTE*)(v43 + 88);
        *(_DWORD*)(v43 + 56) = 0;
        *(float*)(v43 + 48) = v41;
        *(float*)(v43 + 52) = v9 * 0.0;
        *(_BYTE*)(v43 + 88) = v44 | 0x10;
      }
      v45 = GameRoutine_7a7dc0("Icon%02d_%02d", 2, 1);
      v46 = GameRoutine_155f480(v5, v45);
      if (v46 != 0) {
        v47 = *(_BYTE*)(v46 + 88);
        *(float*)(v46 + 48) = v41;
        *(float*)(v46 + 52) = v9;
        *(_DWORD*)(v46 + 56) = 0;
        *(_BYTE*)(v46 + 88) = v47 | 0x10;
      }
      v48 = GameRoutine_7a7dc0("Icon%02d_%02d", 2, 2);
      v49 = GameRoutine_155f480(v5, v48);
      if (v49 != 0) {
        v50 = *(_BYTE*)(v49 + 88);
        *(_DWORD*)(v49 + 56) = 0;
        *(float*)(v49 + 48) = v41;
        *(float*)(v49 + 52) = v9 + v9;
        *(_BYTE*)(v49 + 88) = v50 | 0x10;
      }
      v51 = GameRoutine_7a7dc0("Icon%02d_%02d", 2, 3);
      v52 = GameRoutine_155f480(v5, v51);
      if (v52 != 0) {
        v53 = *(_BYTE*)(v52 + 88);
        *(_DWORD*)(v52 + 56) = 0;
        *(float*)(v52 + 48) = v41;
        *(float*)(v52 + 52) = v9 * 3.0;
        *(_BYTE*)(v52 + 88) = v53 | 0x10;
      }
      v54 = GameRoutine_7a7dc0("Icon%02d_%02d", 2, 4);
      v55 = GameRoutine_155f480(v5, v54);
      if (v55 != 0) {
        v56 = *(_BYTE*)(v55 + 88);
        *(_DWORD*)(v55 + 56) = 0;
        *(float*)(v55 + 48) = v41;
        *(float*)(v55 + 52) = v9 * 4.0;
        *(_BYTE*)(v55 + 88) = v56 | 0x10;
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      GameRoutine_1a09c50(v4);
    }
  }
LABEL_43:
  v57 = GameData_212cce0[0];
  v58 = *(unsigned __int8**)(*(_QWORD*)(*GameData_212cce0[0] + 64) + 8LL);
  GameRoutine_19353a0(a1, v58[42], 0, 0);
  GameRoutine_19353a0(a1, v58[44], 0, 1);
  GameRoutine_19353a0(a1, v58[46], 0, 2);
  GameRoutine_19353a0(a1, v58[48], 0, 3);
  GameRoutine_19353a0(a1, v58[72], 0, 4);
  v59 = *(unsigned __int8**)(*(_QWORD*)(*v57 + 64) + 16LL);
  GameRoutine_19353a0(a1, v59[42], 1, 0);
  GameRoutine_19353a0(a1, v59[44], 1, 1);
  GameRoutine_19353a0(a1, v59[46], 1, 2);
  GameRoutine_19353a0(a1, v59[48], 1, 3);
  GameRoutine_19353a0(a1, v59[72], 1, 4);
  v60 = *(unsigned __int8**)(*(_QWORD*)(*v57 + 64) + 24LL);
  GameRoutine_19353a0(a1, v60[42], 2, 0);
  GameRoutine_19353a0(a1, v60[44], 2, 1);
  GameRoutine_19353a0(a1, v60[46], 2, 2);
  GameRoutine_19353a0(a1, v60[48], 2, 3);
  return GameRoutine_19353a0(a1, v60[72], 2, 4);
}

__int64 GameHr_19353a0(__int64 a1, unsigned __int8 a2, int a3, int a4)
{
  long double v7;
  double v8;
  __int64 result;
  __int64 v10;
  __int64 v11;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;

  GameRoutine_1560070((void*)&v16, a1 + 200, "L_Table");
  result = v17;
  if (v17 != 0) {
    v10 = GameRoutine_1a0a0c0(v7, v8);
    v11 = v16;
    result = v17;
    if (v17 != 0) {
      result = GameRoutine_1a09c50(v17);
    }
    if (v10 == 0 || v11 == 0) {
      if (v10 == 0) {
        return result;
      }
    }
    else {
      v13 = GameRoutine_7a7dc0("Icon%02d_%02d", a3, a4);
      v14 = GameRoutine_155f480(v11, v13);
      if (v14 != 0) {
        v15 = GameRoutine_1a0a6c0(v14, GameData_212d670[0], GameData_212d678[0],
                                  0);
      }
      else {
        v15 = 0;
      }
      result = GameRoutine_1842430(v15, a2);
      *(_BYTE*)(v15 + 88) = *(_BYTE*)(v15 + 88) & 0xFE | result & 1;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
      return GameRoutine_1a09c50(v10);
    }
  }
  return result;
}

__int64 GameHr_1935790(__int64 a1)
{
  long double v2;
  double v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  long double v14;
  double v15;
  __int64 v16;
  __int64 v17;
  _QWORD v18[2];
  __int64 v19;
  __int64 v20;

  GameRoutine_1560070((void*)&v19, *(_QWORD*)(a1 + 1056) + 200LL,
                      "L_UnitInfo00");
  if (v20 == 0) {
    return GameRoutine_1935e90(*(_QWORD*)(a1 + 1056), 0);
  }
  v4 = GameRoutine_1a0a0c0(v2, v3);
  v5 = v19;
  if (v4 != 0) {
    v6 = v19;
  }
  else {
    v6 = 0;
  }
  if (v20 != 0) {
    GameRoutine_1a09c50(v20);
  }
  if (v6 == 0 ||
      (GameRoutine_155e830(v5, 0), (v7 = *(_QWORD*)(a1 + 336)) == 0) ||
      (v8 = GameRoutine_1a0a6c0(v7, GameData_212e008[0], &GameData_21175a8,
                                0)) == 0 ||
      (v9 = v8,
       ((*(__int64 (**)(__int64))(*(_QWORD*)v8 + 480LL))(v8) & 1) != 0)) {
    if (v4 == 0) {
      return GameRoutine_1935e90(*(_QWORD*)(a1 + 1056), 0);
    }
    goto LABEL_12;
  }
  GameRoutine_155e830(v5, 1);
  v18[0] = v6;
  v18[1] = v4;
  if (v4 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                              memory_order_relaxed);
  }
  v11 = *(int*)(v9 + 40);
  v12 = *(_QWORD*)(*GameData_212dcd0 + 48);
  if (v11 >= (*(_QWORD*)(*GameData_212dcd0 + 56) - v12) >> 3) {
    v13 = 0;
  }
  else {
    v13 = *(_QWORD*)(v12 + 8 * v11);
  }
  GameRoutine_1575e70(v18, v13);
  if (v4 != 0) {
    GameRoutine_1a09c50(v4);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                              memory_order_relaxed);
    v16 = GameRoutine_1a0a0c0(v14, v15);
    if (v16 != 0) {
      v17 = v16;
      GameRoutine_1562cf0(v5, "Info00");
      if (atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
        GameRoutine_1a09c50(v17);
      }
    }
    GameRoutine_1a09c50(v4);
  LABEL_12:
    if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      GameRoutine_1a09c50(v4);
    }
  }
  return GameRoutine_1935e90(*(_QWORD*)(a1 + 1056), 0);
}

__int64 GameHr_1935e90(__int64 a1, char a2)
{
  long double v3;
  double v4;
  __int64 v5;
  __int64 v6;
  char v8;
  __int64 v10;
  __int64 v11;

  GameRoutine_1560070((void*)&v10, a1 + 200, "L_UnitInfo00");
  if (v11 != 0) {
    v5 = GameRoutine_1a0a0c0(v3, v4);
    v6 = v10;
    if (v11 != 0) {
      GameRoutine_1a09c50(v11);
    }
    if (v5 == 0 || v6 == 0) {
      v8 = 1;
      if (v5 == 0) {
        return GameRoutine_1567590("ItemChange", (v8 & 1) == 0);
      }
    }
    else {
      v8 = GameRoutine_155ea30(v6) & (a2 ^ 1);
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
      GameRoutine_1a09c50(v5);
    }
  }
  else {
    v8 = 1;
  }
  return GameRoutine_1567590("ItemChange", (v8 & 1) == 0);
}

_BYTE* GameHr_19378a0(_BYTE* result, char a2, __int64 a3)
{
  char v3;
  _BYTE* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  int v12;
  float v13;
  int v14;
  int v15;
  float v16;
  int v17;
  int v18;
  __int64* v19;
  __int64* i;
  __int64 v21;
  __int64* v22;
  __int64* j;
  __int64 v24;

  v3 = a2 & 1;
  v6 = result;
  v7 = *(_QWORD*)(*GameData_212c010[0] + 13224);
  v9 = *(_QWORD*)(v7 + 48);
  v8 = *(_QWORD*)(v7 + 56);
  if (v8 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                              memory_order_relaxed);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
      result = (_BYTE*)GameRoutine_1a09c50(v8);
    }
    v10 = *(_QWORD*)(*(_QWORD*)(v9 + 8) + 128LL);
    if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
      result = (_BYTE*)GameRoutine_1a09c50(v8);
    }
    *v6 = v3;
    if ((a2 & 1) != 0) {
      goto LABEL_7;
    }
  }
  else {
    v10 = *(_QWORD*)(*(_QWORD*)(v9 + 8) + 128LL);
    *result = v3;
    if ((a2 & 1) != 0) {
    LABEL_7:
      if (a3 != 0) {
        v12 = *(_DWORD*)(a3 + 32);
        v11 = *(_DWORD*)(a3 + 36);
        v13 = *(float*)(a3 + 48);
        v15 = *(_DWORD*)(a3 + 40);
        v14 = *(_DWORD*)(a3 + 44);
        v16 = 0.0;
        v17 = v12;
        v18 = v11;
        v6[52] = *(_BYTE*)(a3 + 52);
        *((_DWORD*)v6 + 1) = v12;
        *((_DWORD*)v6 + 7) = v11;
        if (v13 <= 0.0) {
          v16 = 1.0;
          v17 = v15;
          *((_DWORD*)v6 + 1) = v15;
          *((_DWORD*)v6 + 7) = v14;
          v13 = 1.0;
          v18 = v14;
        }
        *((_DWORD*)v6 + 2) = v17;
        *((_DWORD*)v6 + 3) = v15;
        *((float*)v6 + 4) = v16;
        *((float*)v6 + 5) = v13;
        *((_DWORD*)v6 + 8) = v18;
        *((_DWORD*)v6 + 9) = v14;
        *((float*)v6 + 10) = v16;
        *((float*)v6 + 11) = v13;
        *((_DWORD*)v6 + 6) = 5;
        *((_DWORD*)v6 + 12) = 5;
        v19 = *(__int64**)(v10 + 32);
        for (i = *(__int64**)(v10 + 40); v19 != i;
             result = (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)v21 + 72LL))(
                 v21)) {
          v21 = *v19++;
        }
        *(_DWORD*)(v10 + 172) = v12;
        *(_DWORD*)(v10 + 252) = v11;
        *(_DWORD*)(v10 + 92) = 1;
        *(_BYTE*)(v10 + 96) = 1;
        *(_BYTE*)(v10 + 176) = 1;
        *(_BYTE*)(v10 + 256) = 1;
        *(_WORD*)(v10 + 329) = *(unsigned __int8*)(v10 + 360) | 0x100;
        *(_WORD*)(v10 + 329) = (unsigned __int8)v6[52] | 0x100;
      }
      return result;
    }
  }
  v22 = *(__int64**)(v10 + 32);
  for (j = *(__int64**)(v10 + 40); v22 != j;
       result = (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)v24 + 72LL))(v24)) {
    v24 = *v22++;
  }
  return result;
}

__int64 GameHr_1938c00(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 result;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  *(_QWORD*)(a1 + 144) = 0;
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 128) = 0;
  *(_QWORD*)(a1 + 136) = 0;
  *(_QWORD*)(a1 + 112) = 0;
  *(_QWORD*)(a1 + 120) = 0;
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)a1 = 0;
  *(_QWORD*)(a1 + 8) = 0;
  *(_DWORD*)(a1 + 160) = 1036831949;
  *(_QWORD*)(a1 + 176) = 0;
  *(_QWORD*)(a1 + 184) = 0x43800000780LL;
  v2 = (_QWORD*)GameData_212bf68;
  *(_QWORD*)(a1 + 192) = 0;
  *(_QWORD*)(a1 + 200) = 0;
  v3 = *v2;
  *(_QWORD*)(a1 + 208) = 0;
  v4 = GameRoutine_651b90(v3, 96, 16, 0);
  result = GameRoutine_1942c80(v4, 2, 4, 32);
  *(_QWORD*)(a1 + 216) = v4;
  *(_QWORD*)(a1 + 224) = 0;
  v6 = *(_QWORD*)(a1 + 192);
  *(_QWORD*)(a1 + 232) = 10000;
  *(_BYTE*)(a1 + 240) = 1;
  if ((unsigned __int64)(*(_QWORD*)(a1 + 208) - v6) <= 0x63F) {
    v7 = *(_QWORD*)(a1 + 200) - v6;
    v8 = GameRoutine_651b90(*v2, 1600, 16, 0);
    result = GameRoutine_1a0b950(v8, v6, v7);
    *(_QWORD*)(a1 + 192) = v8;
    *(_QWORD*)(a1 + 200) = v8 + v7;
    *(_QWORD*)(a1 + 208) = v8 + 1600;
    if (v6 != 0) {
      v9 = 128;
      if (*(_QWORD*)(*v2 + 200LL) == 0) {
        v9 = 56;
      }
      return GameRoutine_1a0a4e0(*v2 + v9);
    }
  }
  return result;
}

__int64* GameHr_19390c0(__int64* result, __int64* a2, __int64 a3, __int64 a4,
                        char a5)
{

#pragma clang fp contract(off)
  __int64* v9;
  __int64* v10;
  __int64* v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  float v15;
  float v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  float v20;
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
  __int64 v37;
  __int64* v38;
  __int64* v39;
  __int64 v40;
  float v41;
  float v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64* v56;
  __int64* v57;
  __int64 v58;
  float v59;
  float v60;
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
  __int64 v72;
  float v73;
  float v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  unsigned __int64 v95;
  __int64 v96;
  float v97;
  float v98;
  __int64* v99;
  __int64 v100;
  __int64* v101;
  float v102;
  __int64* v103;
  __int64 v104;
  __int64* v105;
  float v106;
  __int64* v107;
  __int64* v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  float v113;
  float v114;
  __int64 v115;
  float v116;
  __int64* v117;
  __int64 v118;
  __int64 v119;
  bool v120;
  bool v121;
  __int64 v122;
  float v123;
  __int64* v124;
  float v125;
  unsigned __int64 v126;
  float v127;
  __int64* v128;
  __int64 v129;
  __int64* v130;
  float v131;
  __int64 v132;
  __int64 v133;
  __int64 v134;
  __int64 v135;
  float v136;
  float v137;
  __int64 v138;
  float v139;
  __int64* v140;
  __int64 v141;
  __int64 v142;
  __int64* v143;
  __int64* v144;
  __int64* v145;
  __int64 v146;
  __int64 v147;
  __int64 v148;
  __int64 v149;
  __int64 v150;
  __int64 v151;
  __int64 v152;
  __int64 v153;
  __int64 v154;
  __int64 v155;
  __int64 v156;
  __int64 v157;
  __int64 v158;
  __int64 v159;
  __int64 v160;
  __int64* v161;
  __int64 v162;
  float v163;
  float v164;
  __int64 v165;
  __int64 v166;
  __int64 v167;
  __int64* v168;
  bool v170;
  __int64 v171;
  __int64* v172;
  __int64* v173;
  __int64 v174;
  __int64 v175;
  float v176;
  __int64 v177;
  __int64 v178;
  char* v179;
  __int64 v180;
  unsigned __int64 v181;
  unsigned __int64 v182;
  __int64 v183;
  bool v184;
  __int64 v185;
  __int64* v186;
  __int64 v187;
  __int64* v188;
  __int64 v189;
  float v190;
  float v191;
  __int64* v192;
  __int64 v193;
  __int64 v194;
  __int64 v195;
  __int64 v196;
  __int64* v197;
  __int64 v198;
  __int64* v199;
  __int64* v200;
  __int64 v201;
  __int64* v202;
  __int64 v203;
  __int64 v204;
  unsigned __int64 v205;
  unsigned __int64 v206;
  __int64* v207;
  __int64 v208;
  __int64* v209;
  __int64 v210;
  __int64 v211;
  float v212;
  float v213;
  __int64 v214;
  __int64 v215;
  __int64 v216;
  __int64 v217;
  __int64 v218;
  __int64 v219;
  __int64 v220;
  __int64 v221;
  __int64* v222;
  __int64 v223;
  float v224;
  __int64 v225;
  __int64* v226;
  __int64 v227;
  __int64 v228;
  float v229;
  __int64 v230;
  __int64 v231;
  __int64 v232;
  __int64 v233;
  __int64* v234;
  __int64* v235;
  __int64 v236;
  __int64 v237;
  __int64 v238;
  __int64 v239;

  v9 = result;
LABEL_2:
  v10 = a2 - 2;
  v11 = v9;
  v234 = a2 - 6;
  v235 = a2 - 4;
  while (1) {
    v9 = v11;
    v12 = ((char*)a2 - (char*)v11) >> 4;
    if (v12 <= 2) {
      if ((unsigned __int64)v12 < 2) {
        return result;
      }
      if (v12 == 2) {
        if (*(float*)((char*)v10 + **(_QWORD**)(a3 + 8)) >
            *(float*)((char*)v11 + **(_QWORD**)(a3 + 8))) {
          v158 = *v11;
          v159 = v11[1];
          v160 = *(a2 - 1);
          *v11 = *v10;
          v11[1] = v160;
          *(a2 - 2) = v158;
          *(a2 - 1) = v159;
        }
        return result;
      }
      goto LABEL_10;
    }
    if (v12 == 3) {
      break;
    }
    if (v12 == 4) {
      return GameRoutine_1939d80_alt1(v11, v11 + 2, v11 + 4, a2 - 2, a3);
    }
    if (v12 == 5) {
      v143 = v11 + 2;
      v144 = v11 + 4;
      v145 = v11 + 6;
      result = GameRoutine_1939d80_alt1(v9, v9 + 2, v9 + 4, v9 + 6, a3);
      if (*(float*)((char*)v10 + **(_QWORD**)(a3 + 8)) >
          *(float*)((char*)v145 + **(_QWORD**)(a3 + 8))) {
        v146 = v9[6];
        v147 = v9[7];
        v148 = *(a2 - 1);
        *v145 = *v10;
        v9[7] = v148;
        *(a2 - 2) = v146;
        *(a2 - 1) = v147;
        if (*(float*)((char*)v145 + **(_QWORD**)(a3 + 8)) >
            *(float*)((char*)v144 + **(_QWORD**)(a3 + 8))) {
          v149 = v9[4];
          v150 = v9[5];
          v151 = v9[7];
          *v144 = *v145;
          v9[5] = v151;
          v9[6] = v149;
          v9[7] = v150;
          if (*(float*)((char*)v144 + **(_QWORD**)(a3 + 8)) >
              *(float*)((char*)v143 + **(_QWORD**)(a3 + 8))) {
            v152 = v9[2];
            v153 = v9[3];
            v154 = v9[5];
            *v143 = *v144;
            v9[3] = v154;
            v9[4] = v152;
            v9[5] = v153;
            if (*(float*)((char*)v143 + **(_QWORD**)(a3 + 8)) >
                *(float*)((char*)v9 + **(_QWORD**)(a3 + 8))) {
              v155 = *v9;
              v156 = v9[1];
              v157 = v9[3];
              *v9 = *v143;
              v9[1] = v157;
              v9[2] = v155;
              v9[3] = v156;
            }
          }
        }
      }
      return result;
    }
  LABEL_10:
    if (v12 <= 23) {
      v168 = v11 + 2;
      v170 = v11 == a2 || v168 == a2;
      if ((a5 & 1) != 0) {
        if (!v170) {
          v171 = 0;
          v172 = v11;
          do {
            v175 = **(_QWORD**)(a3 + 8);
            v176 = *(float*)((char*)v172 + v175);
            v172 = v168;
            if (*(float*)((char*)v168 + v175) > v176) {
              v177 = v168[1];
              v238 = *v168;
              v239 = v177;
              v178 = v171;
              do {
                v179 = (char*)v11 + v178;
                v180 = *(__int64*)((char*)v11 + v178 + 8);
                *((_QWORD*)v179 + 2) = *(__int64*)((char*)v11 + v178);
                *((_QWORD*)v179 + 3) = v180;
                if (v178 == 0) {
                  v173 = v11;
                  goto LABEL_128;
                }
                v178 -= 16;
              } while (*(float*)((char*)&v238 + **(_QWORD**)(a3 + 8)) >
                       *(float*)&v179[**(_QWORD**)(a3 + 8) - 16]);
              v173 = (__int64*)((char*)v11 + v178 + 16);
            LABEL_128:
              v174 = v239;
              *v173 = v238;
              v173[1] = v174;
            }
            v168 = v172 + 2;
            v171 += 16;
          } while (v172 + 2 != a2);
        }
      }
      else if (!v170) {
        v222 = v11 - 2;
        do {
          v223 = **(_QWORD**)(a3 + 8);
          v224 = *(float*)((char*)v9 + v223);
          v9 = v168;
          if (*(float*)((char*)v168 + v223) > v224) {
            v225 = v168[1];
            v238 = *v168;
            v239 = v225;
            v226 = v222;
            do {
              v227 = v226[3];
              v226[4] = v226[2];
              v226[5] = v227;
              v228 = **(_QWORD**)(a3 + 8);
              v229 = *(float*)((char*)v226 + v228);
              v226 -= 2;
            } while (*(float*)((char*)&v238 + v228) > v229);
            v230 = v239;
            v226[4] = v238;
            v226[5] = v230;
          }
          v168 = v9 + 2;
          v222 += 2;
        } while (v9 + 2 != a2);
      }
      return result;
    }
    if (a4 == 0) {
      if (v11 != a2) {
        v181 = (unsigned __int64)(v12 - 2) >> 1;
        v182 = v181;
        do {
          if (v181 >= v182) {
            v185 = (2 * (v182 & 0x3FFFFFFFFFFFFFFFLL)) | 1;
            v186 = &v11[2 * v185];
            if ((__int64)(2 * v182 + 2) >= v12) {
              v187 = **(_QWORD**)(a3 + 8);
            }
            else {
              v187 = **(_QWORD**)(a3 + 8);
              if (*(float*)((char*)v186 + v187) >
                  *(float*)((char*)v186 + v187 + 16)) {
                v186 += 2;
                v185 = 2 * v182 + 2;
              }
            }
            v188 = &v11[2 * v182];
            if (*(float*)((char*)v186 + v187) <=
                *(float*)((char*)v188 + v187)) {
              v189 = v188[1];
              v238 = *v188;
              v239 = v189;
              do {
                v192 = v186;
                v193 = v186[1];
                *v188 = *v186;
                v188[1] = v193;
                if ((__int64)v181 < v185) {
                  break;
                }
                v194 = 2 * v185 + 2;
                v185 = (2 * (v185 & 0x3FFFFFFFFFFFFFFFLL)) | 1;
                v186 = &v11[2 * v185];
                v195 = **(_QWORD**)(a3 + 8);
                if (v194 < v12 && *(float*)((char*)v186 + v195) >
                                      *(float*)((char*)v186 + v195 + 16)) {
                  v186 += 2;
                  v185 = v194;
                }
                v190 = *(float*)((char*)v186 + v195);
                v191 = *(float*)((char*)&v238 + v195);
                v188 = v192;
              } while (v190 <= v191);
              v183 = v239;
              *v192 = v238;
              v192[1] = v183;
            }
          }
          v184 = (__int64)v182-- <= 0;
        } while (!v184);
        do {
          v196 = 0;
          v236 = *v11;
          v237 = v11[1];
          v197 = v11;
          do {
            v199 = &v197[2 * v196];
            v200 = v197;
            v197 = v199 + 2;
            v201 = 2 * v196 + 2;
            v196 = (2 * v196) | 1;
            if (v201 < v12) {
              v202 = v199 + 4;
              if (*(float*)((char*)v197 + **(_QWORD**)(a3 + 8)) >
                  *(float*)((char*)v202 + **(_QWORD**)(a3 + 8))) {
                v197 = v202;
                v196 = v201;
              }
            }
            v198 = v197[1];
            *v200 = *v197;
            v200[1] = v198;
          } while (v196 <= (__int64)((unsigned __int64)(v12 - 2) >> 1));
          a2 -= 2;
          if (v197 == a2) {
            *v197 = v236;
            v197[1] = v237;
          }
          else {
            v203 = a2[1];
            *v197 = *a2;
            v197[1] = v203;
            *a2 = v236;
            a2[1] = v237;
            v204 = ((char*)v197 - (char*)v11 + 16) >> 4;
            v184 = v204 < 2;
            v205 = v204 - 2;
            if (!v184) {
              v206 = v205 >> 1;
              v207 = &v11[2 * v206];
              if (*(float*)((char*)v207 + **(_QWORD**)(a3 + 8)) >
                  *(float*)((char*)v197 + **(_QWORD**)(a3 + 8))) {
                v208 = v197[1];
                v238 = *v197;
                v239 = v208;
                do {
                  v209 = v207;
                  v210 = v207[1];
                  *v197 = *v207;
                  v197[1] = v210;
                  if (v206 == 0) {
                    break;
                  }
                  v206 = (v206 - 1) >> 1;
                  v207 = &v11[2 * v206];
                  v211 = **(_QWORD**)(a3 + 8);
                  v212 = *(float*)((char*)v207 + v211);
                  v213 = *(float*)((char*)&v238 + v211);
                  v197 = v209;
                } while (v212 > v213);
                v214 = v239;
                *v209 = v238;
                v209[1] = v214;
              }
            }
          }
          v184 = v12-- <= 2;
        } while (!v184);
      }
      return result;
    }
    v13 = &v11[2 * ((unsigned __int64)v12 >> 1)];
    v14 = **(_QWORD**)(a3 + 8);
    v15 = *(float*)((char*)v10 + v14);
    if ((unsigned __int64)v12 >= 0x81) {
      v16 = *(float*)((char*)v13 + v14);
      if (v16 <= *(float*)((char*)v11 + v14)) {
        if (v15 > v16) {
          v24 = *v13;
          v25 = v13[1];
          v26 = *(a2 - 1);
          *v13 = *v10;
          v13[1] = v26;
          *(a2 - 2) = v24;
          *(a2 - 1) = v25;
          if (*(float*)((char*)v13 + **(_QWORD**)(a3 + 8)) >
              *(float*)((char*)v11 + **(_QWORD**)(a3 + 8))) {
            v27 = *v11;
            v28 = v11[1];
            v29 = v13[1];
            *v11 = *v13;
            v11[1] = v29;
            *v13 = v27;
            v13[1] = v28;
          }
        }
      }
      else {
        v18 = *v11;
        v17 = v11[1];
        if (v15 > v16) {
          v19 = *(a2 - 1);
          *v11 = *v10;
          v11[1] = v19;
          goto LABEL_27;
        }
        v36 = v13[1];
        *v11 = *v13;
        v11[1] = v36;
        *v13 = v18;
        v13[1] = v17;
        if (*(float*)((char*)v10 + **(_QWORD**)(a3 + 8)) >
            *(float*)((char*)v13 + **(_QWORD**)(a3 + 8))) {
          v37 = *(a2 - 1);
          *v13 = *v10;
          v13[1] = v37;
        LABEL_27:
          *(a2 - 2) = v18;
          *(a2 - 1) = v17;
        }
      }
      v38 = v11 + 2;
      v39 = v13 - 2;
      v40 = **(_QWORD**)(a3 + 8);
      v41 = *(float*)((char*)v13 + v40 - 16);
      v42 = *(float*)((char*)v235 + v40);
      if (v41 <= *(float*)((char*)v11 + v40 + 16)) {
        if (v42 > v41) {
          v46 = *(v13 - 2);
          v47 = *(v13 - 1);
          v48 = *(a2 - 3);
          *v39 = *v235;
          *(v13 - 1) = v48;
          *(a2 - 4) = v46;
          *(a2 - 3) = v47;
          if (*(float*)((char*)v39 + **(_QWORD**)(a3 + 8)) >
              *(float*)((char*)v38 + **(_QWORD**)(a3 + 8))) {
            v49 = v11[2];
            v50 = v11[3];
            v51 = *(v13 - 1);
            *v38 = *v39;
            v11[3] = v51;
            *(v13 - 2) = v49;
            *(v13 - 1) = v50;
          }
        }
      }
      else {
        v44 = v11[2];
        v43 = v11[3];
        if (v42 > v41) {
          v45 = *(a2 - 3);
          *v38 = *v235;
          v11[3] = v45;
          goto LABEL_39;
        }
        v54 = *(v13 - 1);
        *v38 = *v39;
        v11[3] = v54;
        *(v13 - 2) = v44;
        *(v13 - 1) = v43;
        if (*(float*)((char*)v235 + **(_QWORD**)(a3 + 8)) >
            *(float*)((char*)v39 + **(_QWORD**)(a3 + 8))) {
          v55 = *(a2 - 3);
          *v39 = *v235;
          *(v13 - 1) = v55;
        LABEL_39:
          *(a2 - 4) = v44;
          *(a2 - 3) = v43;
        }
      }
      v56 = v11 + 4;
      v57 = v13 + 2;
      v58 = **(_QWORD**)(a3 + 8);
      v59 = *(float*)((char*)v13 + v58 + 16);
      v60 = *(float*)((char*)v234 + v58);
      if (v59 <= *(float*)((char*)v11 + v58 + 32)) {
        if (v60 > v59) {
          v64 = v13[2];
          v65 = v13[3];
          v66 = *(a2 - 5);
          *v57 = *v234;
          v13[3] = v66;
          *(a2 - 6) = v64;
          *(a2 - 5) = v65;
          if (*(float*)((char*)v57 + **(_QWORD**)(a3 + 8)) >
              *(float*)((char*)v56 + **(_QWORD**)(a3 + 8))) {
            v67 = v11[4];
            v68 = v11[5];
            v69 = v13[3];
            *v56 = *v57;
            v11[5] = v69;
            v13[2] = v67;
            v13[3] = v68;
          }
        }
      }
      else {
        v62 = v11[4];
        v61 = v11[5];
        if (v60 > v59) {
          v63 = *(a2 - 5);
          *v56 = *v234;
          v11[5] = v63;
          goto LABEL_48;
        }
        v70 = v13[3];
        *v56 = *v57;
        v11[5] = v70;
        v13[2] = v62;
        v13[3] = v61;
        if (*(float*)((char*)v234 + **(_QWORD**)(a3 + 8)) >
            *(float*)((char*)v57 + **(_QWORD**)(a3 + 8))) {
          v71 = *(a2 - 5);
          *v57 = *v234;
          v13[3] = v71;
        LABEL_48:
          *(a2 - 6) = v62;
          *(a2 - 5) = v61;
        }
      }
      v72 = **(_QWORD**)(a3 + 8);
      v73 = *(float*)((char*)v13 + v72);
      v74 = *(float*)((char*)v57 + v72);
      if (v73 <= *(float*)((char*)v39 + v72)) {
        if (v74 > v73) {
          v79 = *v13;
          v80 = v13[1];
          v82 = *v57;
          v81 = v13[3];
          *v13 = v82;
          v13[1] = v81;
          v13[2] = v79;
          v13[3] = v80;
          if (*(float*)((char*)v13 + **(_QWORD**)(a3 + 8)) >
              *(float*)((char*)v39 + **(_QWORD**)(a3 + 8))) {
            v83 = *(v13 - 2);
            v84 = *(v13 - 1);
            v85 = v13[1];
            *v39 = *v13;
            *(v13 - 1) = v85;
            *v13 = v83;
            v13[1] = v84;
          }
        }
      }
      else {
        v76 = *(v13 - 2);
        v75 = *(v13 - 1);
        if (v74 > v73) {
          v78 = *v57;
          v77 = v13[3];
          *v39 = v78;
          *(v13 - 1) = v77;
          goto LABEL_57;
        }
        v86 = *v13;
        v87 = v13[1];
        *v13 = v76;
        v13[1] = v75;
        *v39 = v86;
        *(v13 - 1) = v87;
        if (*(float*)((char*)v57 + **(_QWORD**)(a3 + 8)) >
            *(float*)((char*)v13 + **(_QWORD**)(a3 + 8))) {
          v88 = *v57;
          v89 = v13[3];
          *v13 = v88;
          v13[1] = v89;
        LABEL_57:
          v13[2] = v76;
          v13[3] = v75;
        }
      }
      v90 = *v11;
      v91 = v11[1];
      v92 = v13[1];
      *v11 = *v13;
      v11[1] = v92;
      *v13 = v90;
      v13[1] = v91;
      goto LABEL_59;
    }
    v20 = *(float*)((char*)v11 + v14);
    if (v20 <= *(float*)((char*)v13 + v14)) {
      if (v15 > v20) {
        v30 = *v11;
        v31 = v11[1];
        v32 = *(a2 - 1);
        *v11 = *v10;
        v11[1] = v32;
        *(a2 - 2) = v30;
        *(a2 - 1) = v31;
        if (*(float*)((char*)v11 + **(_QWORD**)(a3 + 8)) >
            *(float*)((char*)v13 + **(_QWORD**)(a3 + 8))) {
          v33 = *v13;
          v34 = v13[1];
          v35 = v11[1];
          *v13 = *v11;
          v13[1] = v35;
          *v11 = v33;
          v11[1] = v34;
        }
      }
      goto LABEL_59;
    }
    v22 = *v13;
    v21 = v13[1];
    if (v15 <= v20) {
      v52 = v11[1];
      *v13 = *v11;
      v13[1] = v52;
      *v11 = v22;
      v11[1] = v21;
      if (*(float*)((char*)v10 + **(_QWORD**)(a3 + 8)) <=
          *(float*)((char*)v11 + **(_QWORD**)(a3 + 8))) {
        goto LABEL_59;
      }
      v53 = *(a2 - 1);
      *v11 = *v10;
      v11[1] = v53;
    }
    else {
      v23 = *(a2 - 1);
      *v13 = *v10;
      v13[1] = v23;
    }
    *(a2 - 2) = v22;
    *(a2 - 1) = v21;
  LABEL_59:
    --a4;
    v93 = **(_QWORD**)(a3 + 8);
    if ((a5 & 1) != 0 ||
        *(float*)((char*)v11 + v93 - 16) > *(float*)((char*)v11 + v93)) {
      v94 = v11[1];
      v95 = 0;
      v238 = *v11;
      v239 = v94;
      v96 = v93 + 16;
      v97 = *(float*)((char*)&v238 + v93);
      do {
        v98 = *(float*)((char*)v11 + v96);
        v95 -= 16LL;
        v96 += 16;
      } while (v98 > v97);
      v99 = &v11[v95 / 0xFFFFFFFFFFFFFFF8LL];
      if (v95 == -16) {
        v104 = v93 - 16;
        v105 = a2;
        while (v99 < v105) {
          v106 = *(float*)((char*)v105 + v104);
          v103 = v105 - 2;
          v105 -= 2;
          if (v106 > v97) {
            goto LABEL_70;
          }
        }
        v103 = v105;
      LABEL_80:
        v117 = v99 - 2;
        if (v11 == v99 - 2) {
          goto LABEL_82;
        }
      LABEL_81:
        v118 = v117[1];
        *v11 = *v117;
        v11[1] = v118;
        goto LABEL_82;
      }
      v100 = v93 - 16;
      v101 = a2;
      do {
        v102 = *(float*)((char*)v101 + v100);
        v103 = v101 - 2;
        v101 -= 2;
      } while (v102 <= v97);
    LABEL_70:
      if (v99 >= v103) {
        goto LABEL_80;
      }
      v107 = v99;
      v108 = v103;
      do {
        v109 = *v107;
        v110 = v107[1];
        v111 = v108[1];
        *v107 = *v108;
        v107[1] = v111;
        *v108 = v109;
        v108[1] = v110;
        v112 = **(_QWORD**)(a3 + 8);
        v113 = *(float*)((char*)&v238 + v112);
        do {
          v114 = *(float*)((char*)v107 + v112 + 16);
          v107 += 2;
        } while (v114 > v113);
        v115 = v112 - 16;
        do {
          v116 = *(float*)((char*)v108 + v115);
          v108 -= 2;
        } while (v116 <= v113);
      } while (v107 < v108);
      v117 = v107 - 2;
      if (v11 != v107 - 2) {
        goto LABEL_81;
      }
    LABEL_82:
      v119 = v239;
      *v117 = v238;
      v117[1] = v119;
      if (v99 < v103) {
        goto LABEL_85;
      }
      v120 = GameRoutine_1939ec0_alt1(v11, (char*)v117, a3);
      v11 = v117 + 2;
      v121 = v120;
      result = (__int64*)GameRoutine_1939ec0_alt1(v117 + 2, (char*)a2, a3);
      if (((unsigned __int8)result & 1) != 0) {
        a2 = v117;
        if (!v121) {
          goto LABEL_2;
        }
        return result;
      }
      if (!v121) {
      LABEL_85:
        result = GameHr_19390c0(v9, v117, a3, a4, a5 & 1);
        a5 = 0;
        v11 = v117 + 2;
      }
    }
    else {
      v122 = v11[1];
      v238 = *v11;
      v239 = v122;
      v123 = *(float*)((char*)&v238 + v93);
      if (v123 <= *(float*)((char*)v10 + v93)) {
        v126 = (unsigned __int64)(v11 + 2);
        do {
          v11 = (__int64*)v126;
          if (v126 >= (unsigned __int64)a2) {
            break;
          }
          v127 = *(float*)(v126 + v93);
          v126 += 16LL;
        } while (v123 <= v127);
      }
      else {
        v124 = v11;
        do {
          v125 = *(float*)((char*)v124 + v93 + 16);
          v11 = v124 + 2;
          v124 += 2;
        } while (v123 <= v125);
      }
      v128 = a2;
      if (v11 < a2) {
        v129 = v93 - 16;
        v130 = a2;
        do {
          v131 = *(float*)((char*)v130 + v129);
          v128 = v130 - 2;
          v130 -= 2;
        } while (v123 > v131);
      }
      while (v11 < v128) {
        v132 = *v11;
        v133 = v11[1];
        v134 = v128[1];
        *v11 = *v128;
        v11[1] = v134;
        *v128 = v132;
        v128[1] = v133;
        v135 = **(_QWORD**)(a3 + 8);
        v136 = *(float*)((char*)&v238 + v135);
        do {
          v137 = *(float*)((char*)v11 + v135 + 16);
          v11 += 2;
        } while (v136 <= v137);
        v138 = v135 - 16;
        do {
          v139 = *(float*)((char*)v128 + v138);
          v128 -= 2;
        } while (v136 > v139);
      }
      v140 = v11 - 2;
      if (v9 != v11 - 2) {
        v141 = *(v11 - 1);
        *v9 = *v140;
        v9[1] = v141;
      }
      v142 = v239;
      a5 = 0;
      *v140 = v238;
      *(v11 - 1) = v142;
    }
  }
  v161 = v11 + 2;
  v162 = **(_QWORD**)(a3 + 8);
  v163 = *(float*)((char*)v11 + v162 + 16);
  v164 = *(float*)((char*)v10 + v162);
  if (v163 <= *(float*)((char*)v11 + v162)) {
    if (v164 > v163) {
      v215 = v11[2];
      v216 = v11[3];
      v217 = *(a2 - 1);
      *v161 = *v10;
      v11[3] = v217;
      *(a2 - 2) = v215;
      *(a2 - 1) = v216;
      if (*(float*)((char*)v161 + **(_QWORD**)(a3 + 8)) >
          *(float*)((char*)v11 + **(_QWORD**)(a3 + 8))) {
        v218 = *v11;
        v219 = v11[1];
        v221 = *v161;
        v220 = v11[3];
        *v11 = v221;
        v11[1] = v220;
        v11[2] = v218;
        v11[3] = v219;
      }
    }
  }
  else {
    v166 = *v11;
    v165 = v11[1];
    if (v164 <= v163) {
      v231 = *v161;
      v232 = v11[3];
      v11[2] = v166;
      v11[3] = v165;
      *v11 = v231;
      v11[1] = v232;
      if (*(float*)((char*)v10 + **(_QWORD**)(a3 + 8)) <=
          *(float*)((char*)v161 + **(_QWORD**)(a3 + 8))) {
        return result;
      }
      v233 = *(a2 - 1);
      *v161 = *v10;
      v11[3] = v233;
    }
    else {
      v167 = *(a2 - 1);
      *v11 = *v10;
      v11[1] = v167;
    }
    *(a2 - 2) = v166;
    *(a2 - 1) = v165;
  }
  return result;
}

__int64* GameHr_1939d80(__int64* result, __int64* a2, __int64* a3, __int64* a4,
                        __int64 a5)
{
  __int64 v5;
  float v6;
  float v7;
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

  v5 = **(_QWORD**)(a5 + 8);
  v6 = *(float*)((char*)a2 + v5);
  v7 = *(float*)((char*)a3 + v5);
  if (v6 <= *(float*)((char*)result + v5)) {
    if (v7 > v6) {
      v11 = *a2;
      v12 = a2[1];
      v13 = a3[1];
      *a2 = *a3;
      a2[1] = v13;
      *a3 = v11;
      a3[1] = v12;
      if (*(float*)((char*)a2 + **(_QWORD**)(a5 + 8)) >
          *(float*)((char*)result + **(_QWORD**)(a5 + 8))) {
        v14 = *result;
        v15 = result[1];
        v16 = a2[1];
        *result = *a2;
        result[1] = v16;
        *a2 = v14;
        a2[1] = v15;
      }
    }
  }
  else {
    v9 = *result;
    v8 = result[1];
    if (v7 > v6) {
      v10 = a3[1];
      *result = *a3;
      result[1] = v10;
    LABEL_9:
      *a3 = v9;
      a3[1] = v8;
      goto LABEL_10;
    }
    v17 = a2[1];
    *result = *a2;
    result[1] = v17;
    *a2 = v9;
    a2[1] = v8;
    if (*(float*)((char*)a3 + **(_QWORD**)(a5 + 8)) >
        *(float*)((char*)a2 + **(_QWORD**)(a5 + 8))) {
      v18 = a3[1];
      *a2 = *a3;
      a2[1] = v18;
      goto LABEL_9;
    }
  }
LABEL_10:
  if (*(float*)((char*)a4 + **(_QWORD**)(a5 + 8)) >
      *(float*)((char*)a3 + **(_QWORD**)(a5 + 8))) {
    v19 = *a3;
    v20 = a3[1];
    v21 = a4[1];
    *a3 = *a4;
    a3[1] = v21;
    *a4 = v19;
    a4[1] = v20;
    if (*(float*)((char*)a3 + **(_QWORD**)(a5 + 8)) >
        *(float*)((char*)a2 + **(_QWORD**)(a5 + 8))) {
      v22 = *a2;
      v23 = a2[1];
      v24 = a3[1];
      *a2 = *a3;
      a2[1] = v24;
      *a3 = v22;
      a3[1] = v23;
      if (*(float*)((char*)a2 + **(_QWORD**)(a5 + 8)) >
          *(float*)((char*)result + **(_QWORD**)(a5 + 8))) {
        v25 = *result;
        v26 = result[1];
        v27 = a2[1];
        *result = *a2;
        result[1] = v27;
        *a2 = v25;
        a2[1] = v26;
      }
    }
  }
  return result;
}

__int64 GameHr_193ab40(__int64 a1)
{
  __int64 result;
  _QWORD* v3;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  result = *(_QWORD*)a1;
  v3 = (_QWORD*)(a1 + 8);
  if (result != 0 && *(_QWORD*)(a1 + 8) != *(_QWORD*)(a1 + 16)) {
    GameRoutine_a9a7e0();
    *(_QWORD*)a1 = 0;
    GameRoutine_193b240(a1 + 8, 0, 0, 0);
    result = GameRoutine_193b3e0(a1 + 32, 0, 0, 0);
    *(_DWORD*)(a1 + 64) = 0;
  }
  v5 = *(_QWORD*)(a1 + 32);
  v6 = (__int64*)GameData_212bf68;
  if (v5 != 0) {
    v7 = *(_QWORD*)GameData_212bf68;
    *(_QWORD*)(a1 + 40) = v5;
    v8 = 128;
    if (*(_QWORD*)(v7 + 200) == 0) {
      v8 = 56;
    }
    result = GameRoutine_1a0a4e0(v7 + v8);
  }
  if (*v3 != 0) {
    v9 = *v6;
    *(_QWORD*)(a1 + 16) = *v3;
    v10 = 128;
    if (*(_QWORD*)(v9 + 200) == 0) {
      v10 = 56;
    }
    return GameRoutine_1a0a4e0(v9 + v10);
  }
  return result;
}

__int64 GameHr_193ac30(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  if (a1 != a2) {
    v4 = *(_QWORD*)(a1 + 8);
    if (*(_QWORD*)a1 != 0 && v4 != *(_QWORD*)(a1 + 16)) {
      GameRoutine_a9a7e0();
      *(_QWORD*)a1 = 0;
      GameRoutine_193b240(a1 + 8, 0, 0, 0);
      GameRoutine_193b3e0(a1 + 32, 0, 0, 0);
      v4 = *(_QWORD*)(a1 + 8);
      *(_DWORD*)(a1 + 64) = 0;
    }
    *(_QWORD*)a1 = *(_QWORD*)a2;
    v6 = (__int64*)GameData_212bf68;
    if (v4 != 0) {
      v7 = *(_QWORD*)GameData_212bf68;
      *(_QWORD*)(a1 + 16) = v4;
      v8 = 128;
      if (*(_QWORD*)(v7 + 200) == 0) {
        v8 = 56;
      }
      GameRoutine_1a0a4e0(v7 + v8);
      *(_QWORD*)(a1 + 16) = 0;
      *(_QWORD*)(a1 + 24) = 0;
      *(_QWORD*)(a1 + 8) = 0;
    }
    *(_QWORD*)(a1 + 8) = *(_QWORD*)(a2 + 8);
    *(_QWORD*)(a1 + 16) = *(_QWORD*)(a2 + 16);
    *(_QWORD*)(a1 + 24) = *(_QWORD*)(a2 + 24);
    *(_QWORD*)(a2 + 16) = 0;
    *(_QWORD*)(a2 + 24) = 0;
    *(_QWORD*)(a2 + 8) = 0;
    v9 = *(_QWORD*)(a1 + 32);
    if (v9 != 0) {
      v10 = *v6;
      *(_QWORD*)(a1 + 40) = v9;
      v11 = 128;
      if (*(_QWORD*)(v10 + 200) == 0) {
        v11 = 56;
      }
      GameRoutine_1a0a4e0(v10 + v11);
      *(_QWORD*)(a1 + 40) = 0;
      *(_QWORD*)(a1 + 48) = 0;
      *(_QWORD*)(a1 + 32) = 0;
    }
    *(_QWORD*)(a1 + 32) = *(_QWORD*)(a2 + 32);
    *(_QWORD*)(a1 + 40) = *(_QWORD*)(a2 + 40);
    *(_QWORD*)(a1 + 48) = *(_QWORD*)(a2 + 48);
    *(_QWORD*)(a2 + 40) = 0;
    *(_QWORD*)(a2 + 48) = 0;
    *(_QWORD*)(a2 + 32) = 0;
    *(_DWORD*)(a1 + 64) = *(_DWORD*)(a2 + 64);
    *(_QWORD*)a2 = 0;
    GameRoutine_193b240(a2 + 8, 0, 0, 0);
    GameRoutine_193b3e0(a2 + 32, 0, 0, 0);
    *(_DWORD*)(a2 + 64) = 0;
  }
  return a1;
}

char** GameHr_193b240(char** result, char* a2, char* a3, unsigned __int64 a4)
{
  __int64 v4;
  char* v5;
  _QWORD* v7;
  _QWORD* v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  char** v15;
  unsigned __int64 v16;
  char* v17;
  char* v18;
  char* v19;
  char* v20;
  char* v21;
  __int64 v22;
  char* v23;
  char* v24;

  v4 = (__int64)result[2];
  v5 = *result;
  v7 = result;
  if (a4 <= (v4 - (__int64)*result) >> 3) {
    v17 = result[1];
    v18 = (char*)(v17 - v5);
    if (a4 <= (v17 - v5) >> 3) {
      v24 = (char*)(a3 - a2);
      if (v24 != nullptr) {
        result = (char**)GameRoutine_1a0b940(*result, a2, v24);
      }
      v23 = &v24[(_QWORD)v5];
    }
    else {
      v19 = &v18[(_QWORD)a2];
      if (v17 != v5) {
        result = (char**)GameRoutine_1a0b940(*result, a2, v18);
        v17 = (char*)v7[1];
      }
      v20 = v17;
      if (v19 != a3) {
        v20 = v17;
        v21 = v17;
        do {
          v22 = *(_QWORD*)v19;
          v19 += 8;
          v20 += 8;
          *(_QWORD*)v21 = v22;
          v21 += 8;
        } while (v19 != a3);
      }
      v23 = v20;
    }
    v7[1] = v23;
  }
  else {
    v9 = (_QWORD*)GameData_212bf68;
    if (v5 != nullptr) {
      v10 = *(_QWORD*)GameData_212bf68;
      result[1] = v5;
      v11 = a4;
      v12 = 128;
      if (*(_QWORD*)(v10 + 200) == 0) {
        v12 = 56;
      }
      result = (char**)GameRoutine_1a0a4e0(v10 + v12);
      a4 = v11;
      v4 = 0;
      v7[1] = 0;
      v7[2] = 0;
      *v7 = 0;
    }
    if (a4 >> 61 != 0) {
      goto LABEL_28;
    }
    v13 = v4 >> 2;
    if (v4 >> 2 <= a4) {
      v13 = a4;
    }
    v14 = (unsigned __int64)v4 >= 0x7FFFFFFFFFFFFFF8LL ? 0x1FFFFFFFFFFFFFFFLL
                                                       : v13;
    if (v14 >> 61 != 0) {
    LABEL_28:
      GameRoutine_65c760(result);
    }
    result = (char**)GameRoutine_651b90(*v9, 8 * v14, 16, 0);
    v15 = result;
    *v7 = result;
    v7[1] = result;
    v7[2] = &result[v14];
    if (a2 != a3) {
      v16 = (a3 - a2) & 0xFFFFFFFFFFFFFFF8LL;
      result = (char**)GameRoutine_1a0b950(result, a2, v16);
      v15 = (char**)((char*)v15 + v16);
    }
    v7[1] = v15;
  }
  return result;
}

char** GameHr_193b3e0(char** result, char* a2, char* a3, unsigned __int64 a4)
{
  __int64 v4;
  char* v5;
  _QWORD* v7;
  _QWORD* v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  char** v15;
  unsigned __int64 v16;
  char* v17;
  char* v18;
  char* v19;
  char* v20;
  char* v21;
  __int64 v22;
  __int64 v23;
  char* v24;
  char* v25;

  v4 = (__int64)result[2];
  v5 = *result;
  v7 = result;
  if (a4 <= (v4 - (__int64)*result) >> 4) {
    v17 = result[1];
    v18 = (char*)(v17 - v5);
    if (a4 <= (v17 - v5) >> 4) {
      v25 = (char*)(a3 - a2);
      if (v25 != nullptr) {
        result = (char**)GameRoutine_1a0b940(*result, a2, v25);
      }
      v24 = &v25[(_QWORD)v5];
    }
    else {
      v19 = &v18[(_QWORD)a2];
      if (v17 != v5) {
        result = (char**)GameRoutine_1a0b940(*result, a2, v18);
        v17 = (char*)v7[1];
      }
      v20 = v17;
      if (v19 != a3) {
        v20 = v17;
        v21 = v17;
        do {
          v22 = *(_QWORD*)v19;
          v23 = *((_QWORD*)v19 + 1);
          v19 += 16;
          v20 += 16;
          *(_QWORD*)v21 = v22;
          *((_QWORD*)v21 + 1) = v23;
          v21 += 16;
        } while (v19 != a3);
      }
      v24 = v20;
    }
    v7[1] = v24;
  }
  else {
    v9 = (_QWORD*)GameData_212bf68;
    if (v5 != nullptr) {
      v10 = *(_QWORD*)GameData_212bf68;
      result[1] = v5;
      v11 = a4;
      v12 = 128;
      if (*(_QWORD*)(v10 + 200) == 0) {
        v12 = 56;
      }
      result = (char**)GameRoutine_1a0a4e0(v10 + v12);
      a4 = v11;
      v4 = 0;
      v7[1] = 0;
      v7[2] = 0;
      *v7 = 0;
    }
    if (a4 >> 60 != 0) {
      goto LABEL_28;
    }
    v13 = v4 >> 3;
    if (v4 >> 3 <= a4) {
      v13 = a4;
    }
    v14 = (unsigned __int64)v4 >= 0x7FFFFFFFFFFFFFF0LL ? 0xFFFFFFFFFFFFFFFLL
                                                       : v13;
    if (v14 >> 60 != 0) {
    LABEL_28:
      GameRoutine_193b220(result);
    }
    result = (char**)GameRoutine_651b90(*v9, 16 * v14, 16, 0);
    v15 = result;
    *v7 = result;
    v7[1] = result;
    v7[2] = &result[2 * v14];
    if (a2 != a3) {
      v16 = (a3 - a2) & 0xFFFFFFFFFFFFFFF0LL;
      result = (char**)GameRoutine_1a0b950(result, a2, v16);
      v15 = (char**)((char*)v15 + v16);
    }
    v7[1] = v15;
  }
  return result;
}

__int64* GameHr_193bdc0(__int64* result)
{
  __int64 v1;
  __int64 v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  char v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v1 = *result;
  if (*result != 0) {
    v2 = result[1];
    v3 = result;
    v4 = GameData_212bf68;
    if (v1 == v2) {
      goto LABEL_12;
    }
    v5 = result[1];
    do {
      v6 = *(_BYTE*)(v5 - 112);
      v5 -= 112;
      if ((v6 & 1) != 0 && *(_QWORD*)(v2 - 96) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
          v7 = 128;
        }
        else {
          v7 = 56;
        }
        result = (__int64*)GameRoutine_1a0a4e0(*(_QWORD*)v4 + v7);
      }
      v2 = v5;
    } while (v5 != v1);
    v8 = *v3;
    v3[1] = v1;
    if (v8 != 0) {
    LABEL_12:
      v9 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v9 = 56;
      }
      return (__int64*)GameRoutine_1a0a4e0(*(_QWORD*)v4 + v9);
    }
  }
  return result;
}

void GameHr_193bea0(int a1)
{
  __int64 v1;
  unsigned __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  char v7;
  __int64 v8;
  __int64 v9;
  struct {
    __int64 v10;
    char gap8_[8];
    __int64 v11;
    char gap24_[8];
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
  } v10_;

  LOWORD(v10_.v10) = 0;
  v10_.v18 = GameData_226b8d0;
  v10_.v19 = GameData_226b8d8;
  v10_.v20 = GameData_226b8e0;
  v10_.v21 = GameData_226b8e8;
  v10_.v14 = GameData_226b8b0;
  v10_.v15 = GameData_226b8b8;
  v10_.v16 = GameData_226b8c0;
  v10_.v17 = GameData_226b8c8;
  v10_.v12 = GameData_226b8a0;
  v10_.v13 = GameData_226b8a8;
  v1 = GameData_226b888;
  v2 = 0x6DB6DB6DB6DB6DB7LL * ((GameData_226b888 - GameData_226b880) >> 4);
  if (a1 <= v2) {
    if (a1 < v2) {
      v4 = GameData_226b880 + 112LL * a1;
      if (v4 != GameData_226b888) {
        v5 = GameData_226b888;
        v6 = fw_memory_g_heap_manager_ptr;
        do {
          v7 = *(_BYTE*)(v5 - 112);
          v5 -= 112;
          if ((v7 & 1) != 0) {
            v8 = *(_QWORD*)(v1 - 96);
            if (v8 != 0) {
              if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) != 0) {
                v9 = 128;
              }
              else {
                v9 = 56;
              }
              nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v9, v8);
            }
          }
          v1 = v5;
        } while (v5 != v4);
      }
      GameData_226b888 = v4;
    }
  }
  else {
    GameRoutine_193c000_alt1(&GameData_226b880, a1 - v2, &v10_.v10);
    if ((v10_.v10 & 1) != 0 && v10_.v11 != 0) {
      v3 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v3 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3,
                                    v10_.v11);
    }
  }
}

__int64 GameHr_193c300()
{
  __int64 result;

  result = GameRoutine_2b0(GameRoutine_193bdc0, &GameData_226b880,
                           &GameData_1f50948);
  *(__int64*)((char*)&GameData_226b8b0 + 4) = 1023410176;
  LODWORD(GameData_226b8a0) = 0;
  HIDWORD(GameData_226b8b8) = 0;
  *(__int64*)((char*)&GameData_226b8a8 + 4) = 0x3D8000003E000000LL;
  *(__int64*)((char*)&GameData_226b8a0 + 4) = 0x3E8000003F000000LL;
  GameData_226b8c0 = 0x437A000000000005LL;
  LOWORD(GameData_226b8e0) = 256;
  return result;
}

__int64 GameHr_193cec0(__int64 result)
{
  __int64 v1;
  __int64* v2;
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
  __int64 v13;
  __int64 v14;

  v1 = *(_QWORD*)(result + 16);
  *(_QWORD*)(result + 16) = 0;
  v2 = (__int64*)result;
  v3 = GameData_212bf68;
  if (v1 != 0) {
    GameRoutine_193c760(v1);
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v4 = 56;
    }
    result = GameRoutine_1a0a4e0(*(_QWORD*)v3 + v4);
  }
  v5 = *v2;
  *v2 = 0;
  if (v5 != 0) {
    GameRoutine_193c370(v5);
    v6 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v6 = 56;
    }
    result = GameRoutine_1a0a4e0(*(_QWORD*)v3 + v6);
  }
  v7 = v2[1];
  v2[1] = 0;
  if (v7 != 0) {
    GameRoutine_193c370(v7);
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v8 = 56;
    }
    result = GameRoutine_1a0a4e0(*(_QWORD*)v3 + v8);
  }
  v9 = v2[2];
  v2[2] = 0;
  if (v9 != 0) {
    GameRoutine_193c760(v9);
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v10 = 56;
    }
    result = GameRoutine_1a0a4e0(*(_QWORD*)v3 + v10);
  }
  v11 = v2[1];
  v2[1] = 0;
  if (v11 != 0) {
    GameRoutine_193c370(v11);
    v12 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v12 = 56;
    }
    result = GameRoutine_1a0a4e0(*(_QWORD*)v3 + v12);
  }
  v13 = *v2;
  *v2 = 0;
  if (v13 != 0) {
    GameRoutine_193c370(v13);
    v14 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v14 = 56;
    }
    return GameRoutine_1a0a4e0(*(_QWORD*)v3 + v14);
  }
  return result;
}

__int64* GameHr_193d050(__int64* result)
{
  __int64 v1;
  __int64 v2;

  v1 = *result;
  *result = 0;
  if (v1 != 0) {
    GameRoutine_193cec0(v1);
    v2 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v2 = 56;
    }
    return (__int64*)GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v2);
  }
  return result;
}

__int64 GameHr_1943280(__int64 result)
{
  __int64 v1;
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

  v1 = *(_QWORD*)(result + 88);
  *(_QWORD*)(result + 88) = 0;
  v2 = (_QWORD*)result;
  v3 = GameData_212bf68;
  if (v1 != 0) {
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v4 = 56;
    }
    result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v4);
  }
  v5 = v2[8];
  if (v5 != 0) {
    v6 = *(_QWORD*)v3;
    v2[9] = v5;
    v7 = 128;
    if (*(_QWORD*)(v6 + 200) == 0) {
      v7 = 56;
    }
    result = GameRoutine_1a0a4e0(v6 + v7);
  }
  v8 = v2[5];
  if (v8 != 0) {
    v9 = *(_QWORD*)v3;
    v2[6] = v8;
    v10 = 128;
    if (*(_QWORD*)(v9 + 200) == 0) {
      v10 = 56;
    }
    result = GameRoutine_1a0a4e0(v9 + v10);
  }
  v11 = v2[4];
  v2[4] = 0;
  if (v11 != 0) {
    v12 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v12 = 56;
    }
    return GameRoutine_1a0a4e0(*(_QWORD*)v3 + v12);
  }
  return result;
}

_QWORD* GameHr_1944620(_QWORD* result)
{
  _QWORD* v1;
  __int64 v2;
  _QWORD* v3;
  _QWORD* v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;

  v1 = (_QWORD*)*result;
  *result = 0;
  if (v1 != nullptr) {
    v2 = GameData_212bf68;
    if (v1[9] != 0) {
      v3 = (_QWORD*)v1[8];
      v4 = *(_QWORD**)(v1[7] + 8LL);
      *(_QWORD*)(*v3 + 8LL) = v4;
      *v4 = *v3;
      v1[9] = 0;
      if (v3 != v1 + 7) {
        do {
          v5 = (_QWORD*)v3[1];
          if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) != 0) {
            v6 = 128;
          }
          else {
            v6 = 56;
          }
          GameRoutine_1a0a4e0(*(_QWORD*)v2 + v6);
          v3 = v5;
        } while (v5 != v1 + 7);
      }
    }
    GameRoutine_1944d10(v1 + 4, v1[5]);
    GameRoutine_1a09f60(v1);
    v7 = 128;
    if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
      v7 = 56;
    }
    return (_QWORD*)GameRoutine_1a0a4e0(*(_QWORD*)v2 + v7);
  }
  return result;
}

__int64 GameHr_1944880(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  int v8;
  int v9;
  _BOOL4 v10;
  _BOOL4 v11;
  bool v12;
  _BOOL4 v13;
  _QWORD* v14;
  __int64 v15;
  _QWORD* v16;

  GameRoutine_1a09b70(a1);
  v4 = *(_QWORD*)(a2 + 8);
  v6 = (_QWORD*)(a1 + 40);
  v5 = *(_QWORD*)(a1 + 40);
  if (v5 != 0) {
    while (1) {
      while (1) {
        v7 = (_QWORD*)v5;
        v8 = *(_DWORD*)(v5 + 36);
        v9 = *(_DWORD*)(v5 + 32);
        v10 = v8 > SHIDWORD(v4);
        if (v9 != (_DWORD)v4) {
          v10 = v9 > (int)v4;
        }
        if (!v10) {
          break;
        }
        v5 = *v7;
        v6 = v7;
        if (*v7 == 0) {
          goto LABEL_13;
        }
      }
      v11 = v8 < SHIDWORD(v4);
      v12 = v9 == (_DWORD)v4;
      v13 = v9 < (int)v4;
      if (v12) {
        v13 = v11;
      }
      if (!v13) {
        break;
      }
      v5 = v7[1];
      if (v5 == 0) {
        v6 = v7 + 1;
        goto LABEL_13;
      }
    }
  }
  else {
    v7 = (_QWORD*)(a1 + 40);
  LABEL_13:
    v14 = (_QWORD*)GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 48, 16, 0);
    v14[4] = v4;
    v14[5] = a2;
    *v14 = 0;
    v14[1] = 0;
    v14[2] = v7;
    *v6 = v14;
    v15 = **(_QWORD**)(a1 + 32);
    if (v15 != 0) {
      *(_QWORD*)(a1 + 32) = v15;
      v16 = (_QWORD*)*v6;
    }
    else {
      v16 = v14;
    }
    GameRoutine_60abc0(*(_QWORD*)(a1 + 40), v16);
    ++*(_QWORD*)(a1 + 48);
  }
  GameRoutine_1a09b80(a1);
  return v4;
}

__int64 GameHr_1944d10(__int64 result, _QWORD* a2)
{
  __int64 v2;
  __int64 v4;

  if (a2 != nullptr) {
    v2 = result;
    GameHr_1944d10(result, *a2);
    GameHr_1944d10(v2, a2[1]);
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v4 = 56;
    }
    return GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v4);
  }
  return result;
}

#pragma GCC visibility pop
