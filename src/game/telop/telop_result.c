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
__int64 nn_mem_StandardAllocator_Free(_QWORD);
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
struct PseudoSret snd_play_ff2d0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                 double, float);
void GameRoutine_17356e0(_QWORD*, __int64);
void GameRoutine_174f240(_QWORD*, __int64*, signed int, unsigned int);
void GameRoutine_175ff40(__int64);
void __attribute__((noreturn)) String_60a1d0(_QWORD);
void TelopResult_17604a0(__int64 a1);
__attribute__((swiftcall)) void TelopResult_17619f0(PSEUDO_X8 x8_, __int64 a1,
                                                    int a2);
__n128 TelopResult_1762890(__int64 a1, unsigned int a2);
void TelopResult_1762ce0(__int64 a1, __int64 a2, unsigned int a3, __int64 a4);
__n128 TelopResult_17630f0(__int64 a1, unsigned __int8* a2, __int64 a3);
__n128 TelopResult_1763ac0(__int64 a1, signed int a2, unsigned int a3);

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
          *(struct PseudoSret*)(&v16) =
              snd_play_ff2d0(v14, v14, v17, 0, 65537, 0, 0.0, 1.0);
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
  __int64 v12;
  long double v13;
  __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  int v18;

  v2 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 344LL))(a1);
  v3 = 1;
  v4 = GameRoutine_174f600(a1 + 984, 1);
  v5 = *(_QWORD*)(a1 + 1128);
  v6 = v4 ^ 1;
  if (v5 != *(_QWORD*)(a1 + 1136)) {
    v7 = 0;
    v8 = 0;
    do {
      v9 = GameRoutine_174e4e0(v5 + v7, 1);
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
      LayoutAccessor_155d940(a1 + 440);
      LayoutAccessor_155cda0(a1 + 440, "Out", 0);
      v12 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 216LL))(a1);
      LODWORD(v13) = 1.0;
      LayoutAccessor_1562680(a1 + 168, v12, v13);
      v14 = *(_QWORD*)(a1 + 8);
      if (v14 == 0) {
        goto LABEL_52;
      }
      while (1) {
        if (*(_BYTE*)v14 == 2) {
          if (*(_DWORD*)(v14 + 32) == 7) {
          LABEL_51:
            *(_QWORD*)(a1 + 16) = v14;
            *(_WORD*)(a1 + 136) &= ~0x80u;
            goto LABEL_52;
          }
        }
        else if (*(_BYTE*)v14 == 0) {
          goto LABEL_52;
        }
        v14 += 64;
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
      v15 = *(unsigned __int8*)(a1 + 824);
      v16 = *(_QWORD*)(a1 + 832);
      if ((v15 & 1) == 0) {
        v16 = v15 >> 1;
      }
      if (v16 != 0) {
        v17 = (v15 & 1) != 0 ? *(_QWORD*)(a1 + 840) : a1 + 825;
        if ((Registration_a4da40(*msg_MessageManager_instance__ptr[0], v17) &
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
      v18 = *(_DWORD*)(game_g_game_setting + 952);
      if ((v18 & 1) != 0 ||
          *(_BYTE*)(a1 + 336) == 1 &&
              ((v18 & 2) != 0 ||
               (*(_BYTE*)(game_g_game_setting + 944) & 8) != 0)) {
        LayoutAccessor_155d940(a1 + 440);
        LayoutAccessor_155cda0(a1 + 440, "Out", 0);
        v14 = *(_QWORD*)(a1 + 8);
        if (v14 != 0) {
          while (1) {
            if (*(_BYTE*)v14 == 2) {
              if (*(_DWORD*)(v14 + 32) == 6) {
                goto LABEL_51;
              }
            }
            else if (*(_BYTE*)v14 == 0) {
              break;
            }
            v14 += 64;
          }
        }
      }
    LABEL_52:
      if (*(_DWORD*)(a1 + 320) == 2) {
        TelopSequence_1374cc0(a1, 1);
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
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v12);
      return;
    }
  }
  {
    result;
    return;
  }
}

__n128 TelopResult_1762890(__int64 a1, unsigned int a2)
{
  __int64 v3;
  __n128 result;
  __int64 v5;
  _QWORD* v6;
  long double v7;
  long double v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  int v12;
  __int64 v13;
  _QWORD v14[2];
  _QWORD* v15;
  __int64 v16;

  v3 = GameRoutine_1760e40(a1, 0);
  v14[0] = "L_Txt";
  v14[1] = 5;
  GameRoutine_9b8fe0((void*)(&v15), v3, v14);
  if (v16 != 0) {
    v5 = std___1___shared_weak_count_lock(v16);
    v6 = v15;
    if (v16 != 0) {
      result = std___1___shared_weak_count___release_weak();
    }
    if (v5 == 0 || v6 == nullptr) {
      if (v5 == 0) {
        return result;
      }
      goto LABEL_22;
    }
    Manager_a51e10(*msg_MessageManager_instance__ptr[0] + 14704, 0, a2, 2);
    TextBoxEx_188ab20(v6, "MID_Sys_Result_Msg_GetGold", v7);
    TextBoxEx_188aa00((void*)(&v15), v6, 0, v8);
    if (v16 != 0) {
      v9 = std___1___shared_weak_count_lock(v16);
      v10 = v15;
      if (v16 != 0) {
        result = std___1___shared_weak_count___release_weak();
      }
      if (v9 != 0 && v10 != nullptr) {
        v11 = v10[10];
        if (v11 != 0) {
          v12 = *(int*)((char*)((int*)0x24LL) + (_QWORD)GameData_212da30);
          v13 = (*(__int64 (**)(_QWORD, _QWORD, long double))(
              *(_QWORD*)v11 + 88LL))(v10[10], 0, *(long double*)&result);
          if (v13 != 0) {
            *(_DWORD*)(v13 + 12) = v12;
          }
          if ((Manager_136a920(ui_Manager_instance_ + 1264, v11, 0, 7) & 1) !=
              0) {
            GameRoutine_18899f0(v10);
          }
        }
        (*(void (**)(_QWORD*, __int64, long double))(*v10 + 40LL))(
            v10, 1, *(long double*)&result);
        goto LABEL_20;
      }
      if (v9 != 0) {
      LABEL_20:
        if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
          result = std___1___shared_weak_count___release_weak();
        }
      }
    }
  LABEL_22:
    if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64, long double))(*(_QWORD*)v5 + 16LL))(
          v5, *(long double*)&result);
      return std___1___shared_weak_count___release_weak();
    }
  }
  return result;
}

void TelopResult_1762ce0(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  long double v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  char v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  _QWORD v24[2];
  __int64 v25;
  __int64 v26;
  _BYTE v27[4];

  v7 = (_QWORD*)GameRoutine_1760e40(a1, 19);
  v24[0] = "L_Txt";
  v24[1] = 5;
  GameRoutine_9b8fe0((void*)(&v25), v7, v24);
  if (v26 != 0) {
    v8 = std___1___shared_weak_count_lock(v26);
    v9 = v25;
    if (v26 != 0) {
      std___1___shared_weak_count___release_weak();
    }
    if (v8 != 0 && v9 != 0) {
      v10 = *msg_MessageManager_instance__ptr[0];
      v11 = GameRoutine_6ed030(a2);
      if (v11 != 0) {
        v12 = v11;
      }
      else {
        v12 = (__int64)*msg_MessageManager_empty_text__ptr;
      }
      GameRoutine_60a020(v10 + 14704, v12);
      TextBoxEx_188ab20(v9, a4, v13);
    }
    else if (v8 == 0) {
      goto LABEL_13;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
      std___1___shared_weak_count___release_weak();
    }
  }
LABEL_13:
  v14 = LayoutAccessor_155fbe0(v7, "L_InfoDetail");
  game_gameui_1592340(v14, a2, a3);
  LayoutAccessor_1562cf0(v7, "ArrowOff");
  v15 = ui_LayoutAccessor_FindTextBox(v7, "L_Txt/T_Txt");
  if (v15 != 0) {
    v16 = v15;
    v17 = ui_LayoutAccessor_FindTextBox(v7, "L_Txt/T_Txt");
    if (v17 != 0) {
      GameRoutine_190a0c0(&v25, v24, v27, v17, *(_QWORD*)(v17 + 216));
      v18 = v24[0];
    }
    else {
      v18 = 0;
    }
    v19 = *(_BYTE*)(v16 + 88);
    *(_QWORD*)(v16 + 80) = v18;
    *(_BYTE*)(v16 + 88) = v19 | 0x10;
  }
  v20 = ui_LayoutAccessor_FindAlignment(v7, "A_Contents");
  if (v20 != 0) {
    Alignment_56b600(v20);
    v21 = v7[1];
    if (v21 != 0) {
      v22 = std___1___shared_weak_count_lock(v21);
      if (v22 != 0) {
        v23 = v22;
        if (*v7 != 0) {
          ControlCreator_13633c0(*v7);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
          std___1___shared_weak_count___release_weak();
        }
      }
    }
  }
  GameRoutine_17356e0(v7, (__int64)"A_Contents");
}

__n128 TelopResult_17630f0(__int64 a1, unsigned __int8* a2, __int64 a3)
{
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  _DWORD* v11;
  __int64* v12;
  _DWORD* v13;
  __n128 result;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  long double v20;
  long double v21;
  __int64 v22;
  __int64 v23;
  _QWORD v24[2];
  __int64 v25;
  __int64 v26;

  v5 = (_QWORD*)GameRoutine_1760e40(a1, 4);
  LayoutAccessor_1562cf0(v5, "Success");
  v6 = LayoutAccessor_155fbe0(v5, "L_RelianceLv_00");
  v7 = ui_LayoutAccessor_FindPane(v6, "Icon");
  if (v7 != 0) {
    v7 = __dynamic_cast(v7, GameData_212d670[0], GameData_212d678[0], 0);
  }
  GameRoutine_1842180(v7, 3);
  v8 = LayoutAccessor_155fbe0(v5, "L_RelianceLv_01");
  v9 = ui_LayoutAccessor_FindPane(v8, "Icon");
  if (v9 != 0) {
    v9 = __dynamic_cast(v9, GameData_212d670[0], GameData_212d678[0], 0);
  }
  GameRoutine_1842180(v9, 5);
  v10 = GameData_212c8a0;
  v11 = (_DWORD*)GameRoutine_92b880(
      *(_QWORD*)(*(_QWORD*)(*GameData_212c8a0 + 64) + 8LL * *a2), 3, a2[1]);
  v12 = GameData_212c880[0];
  GameRoutine_17633b0(
      v5, "L_SkillInfoTitle_00",
      *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * (*v11 & 0xFFF)));
  v13 = (_DWORD*)GameRoutine_92b880(
      *(_QWORD*)(*(_QWORD*)(*v10 + 64) + 8LL * *a2), 5, a2[1]);
  GameRoutine_17633b0(v5, "L_SkillInfoTitle_01",
                      *(_QWORD*)(*(_QWORD*)(*v12 + 64) + 8LL * (*v13 & 0xFFF)));
  GameRoutine_17356e0(v5, (__int64)"A_Contents");
  v24[0] = "L_Txt";
  v24[1] = 5;
  GameRoutine_9b8fe0((void*)(&v25), v5, v24);
  if (v26 != 0) {
    v15 = std___1___shared_weak_count_lock(v26);
    v16 = v25;
    if (v26 != 0) {
      result = std___1___shared_weak_count___release_weak();
    }
    if (v15 == 0 || v16 == 0) {
      if (v15 == 0) {
        return result;
      }
      goto LABEL_24;
    }
    v17 = *msg_MessageManager_instance__ptr[0];
    v18 = Unit_931120(a2);
    if (v18 != 0) {
      v19 = v18;
    }
    else {
      v19 = (__int64)*msg_MessageManager_empty_text__ptr;
    }
    GameRoutine_60a020(v17 + 14704, v19);
    TextBoxEx_188ab20(v16, a3, v20);
    TextBoxEx_188aa00((void*)(&v25), v16, 0, v21);
    if (v26 != 0) {
      v22 = std___1___shared_weak_count_lock(v26);
      v23 = v25;
      if (v26 != 0) {
        result = std___1___shared_weak_count___release_weak();
      }
      if (v22 != 0 && v23 != 0) {
        EmbeddedImage_1889bf0(v23,
                              *(_QWORD*)(*(_QWORD*)(*v10 + 64) + 8LL * *a2),
                              *(long double*)&result);
        (*(void (**)(__int64, __int64))(*(_QWORD*)v23 + 40LL))(v23, 1);
        goto LABEL_22;
      }
      if (v22 != 0) {
      LABEL_22:
        if (atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
          result = std___1___shared_weak_count___release_weak();
        }
      }
    }
  LABEL_24:
    if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64, long double))(*(_QWORD*)v15 + 16LL))(
          v15, *(long double*)&result);
      return std___1___shared_weak_count___release_weak();
    }
  }
  return result;
}

__n128 TelopResult_1763ac0(__int64 a1, signed int a2, unsigned int a3)
{
  __int64 v6;
  const char* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __n128 result;
  __int64 v14[2];
  _QWORD v15[4];
  int v16;
  int v17;
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

  v6 = GameRoutine_1760e40(a1, 16);
  v7 = "MID_Sys_HonorLv";
  v8 = v6;
  if (game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
    v7 = "MID_Sys_HonorLV_Part3";
  }
  v18 = -1;
  v19 = -1;
  v20 = -1;
  v21 = -1;
  v9 = *msg_MessageManager_instance__ptr[0];
  v22 = -1;
  v23 = -1;
  v24 = -1;
  v25 = -1;
  v26 = -1;
  v27 = -1;
  v28 = -1;
  v29 = -1;
  v15[0] = msg_TagSelector_vtable;
  v15[1] = 0xFFFF0001FFFF0000LL;
  v15[2] = 0xFFFF0004FFFF0002LL;
  v15[3] = 0xFFFF0006FFFF0005LL;
  v30 = 8;
  v16 = -65529;
  v17 = -65528;
  v10 = GameRoutine_a4dbe0(v9, v7, 0, v15);
  if (v10 != 0) {
    v11 = v10;
    v12 = ui_LayoutAccessor_FindTextBox(v8, "T_Title");
    if (v12 != 0) {
      GameRoutine_156c5d0(v12, v11, 0);
    }
  }
  LayoutAccessor_1562cf0(v8, "Type_00");
  TelopResult_17619f0((void*)(v14), a1, 16);
  GameRoutine_174f240((_QWORD*)(a1 + 984), v14, a2, a3);
  if (v14[1] != 0) {
    return std___1___shared_weak_count___release_weak();
  }
  return result;
}

#pragma GCC visibility pop
