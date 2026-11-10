#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_260a40(PSEUDO_X8, __int64, __int64);
__attribute__((swiftcall)) void asCDataType_CreateAuto(PSEUDO_X8, char);
__attribute__((swiftcall)) void asCDataType_CreatePrimitive(PSEUDO_X8, int,
                                                            char);
__attribute__((swiftcall)) void asCDataType_CreateType(PSEUDO_X8, __int64,
                                                       char);
__attribute__((swiftcall)) void asCDataType_Format(PSEUDO_X8, __int64, __int64,
                                                   char);
__attribute__((swiftcall)) void asCString_SubString(PSEUDO_X8, unsigned int*,
                                                    unsigned __int64,
                                                    unsigned __int64);
__int64 CastToObjectType(__int64 result);
__int64 CastToTypedefType(__int64 result);
__int64 GameRoutine_1bd280(__int64 result, __int64);
__int64 GameRoutine_25fba0(__int64 result, unsigned int*);
__int64 asCBuilder_GetNameSpaceFromNode(__int64, __int64, __int64, __int64,
                                        _QWORD*, __int64*);
__int64 asCBuilder_GetObjectType(__int64, __int64, unsigned __int64);
__int64 asCBuilder_GetTemplateInstanceFromNode(__int64, __int64, __int64,
                                               __int64, __int64, __int64,
                                               __int64*);
__int64 asCBuilder_GetType(__int64, __int64, unsigned __int64, __int64);
__int64 asCBuilder_GetTypeFromTypesKnownByObject(__int64, __int64, __int64);
__int64 asCBuilder_WriteError(__int64, __int64, unsigned int*, __int64);
__int64 asCCompiler_Destroy_asCCompiler(__int64);
__int64 asCCompiler_DetermineNameSpace(__int64, __int64);
__int64 asCCompiler_asCCompiler(__int64);
__int64 asCDataType_CanBeInstantiated(__int64);
__int64 asCDataType_Destroy_asCDataType(_QWORD);
__int64 asCDataType_IsInterface(__int64);
__int64 asCDataType_MakeArray(__int64, __int64, __int64);
__int64 asCDataType_MakeHandle(__int64, char, char);
__int64 asCDataType_MakeReadOnly(__int64, char);
__int64 asCDataType_asCDataType_1bcc50(__int64 result);
__int64 asCDataType_asCDataType_1bcc70(__int64 result, __int64);
__int64 asCScriptCode_ConvertPosToRowCol(__int64 result, unsigned __int64,
                                         _DWORD*, int*);
__int64 asCScriptEngine_GetParentNameSpace(__int64, unsigned int*);
__int64 asCScriptEngine_GetRegisteredType(__int64, __int64, unsigned __int64);
__int64 asCString_Assign(unsigned int*, __int64, unsigned __int64);
__int64 asCString_Destroy_asCString(__int64 result);
__int64 asCString_Format(_QWORD*, __int64, ...);
__int64 asCString_asCString_25f460(__int64 result);
__int64 asCString_asCString_25f470(unsigned int*, unsigned int*);
__int64 asCString_asCString_25f730(unsigned int*, __int64);
bool GameRoutine_2606c0(__int64, __int64);
bool GameRoutine_2606f0(__int64, __int64);
bool GameRoutine_260720(unsigned int*, __int64);
bool asCBuilder_DoesGlobalPropertyExist(__int64, __int64, __int64, __int64*,
                                        __int64*, _BYTE*);
bool asCDataType_IsAbstractClass(__int64);
extern char GameData_1a9f09e;
unsigned int* GameRoutine_25f940(unsigned int*, __int64);
__int64 asCBuilder_CheckNameConflict(__int64 a1, __int64 a2, __int64 a3,
                                     unsigned int* a4, unsigned __int64 a5,
                                     char a6, char a7);
__attribute__((swiftcall)) void
asCBuilder_CreateDataTypeFromNode(PSEUDO_X8 x8_, __int64 a1, __int64 a2,
                                  __int64 a3, __int64 a4, char a5, __int64 a6,
                                  char a7, _BYTE* a8);

__int64 asCBuilder_CheckNameConflict(__int64 a1, __int64 a2, __int64 a3,
                                     unsigned int* a4, unsigned __int64 a5,
                                     char a6, char a7)
{
  __int64 v7;
  __int64 v15;
  unsigned int v28;
  const char* v29;
  _QWORD* v30;
  __int64 v31;
  __int64 v32;
  _QWORD* v33;
  _QWORD* v34;
  __int64* v35;
  __int64 result;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  bool v52;
  __int64 v59;
  __int64 v60;
  bool v61;
  __int64 v68;
  __int64 v75;
  __int64 v82;
  __int64 v89;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  bool v106;
  unsigned __int64 v107;
  __int64 v108;
  unsigned int v115;
  _QWORD* v116;
  const char* v117;
  _QWORD* v118;
  _DWORD v119[6];
  __int64 v120;
  _QWORD v121[2];
  __int64 v122;
  _QWORD v123[2];
  unsigned int v124;

  v7 = *(_QWORD*)(a1 + 16);
  asCString_asCString_25f730((unsigned int*)&v122, a2);
  v15 = asCScriptEngine_GetRegisteredType(v7, (__int64)&v122, a5);
  asCString_Destroy_asCString((__int64)&v122);
  if (v15 == 0) {
    if ((a7 & 1) != 0) {
      if ((a6 & 1) != 0) {
        goto LABEL_41;
      }
    }
    else if (asCBuilder_DoesGlobalPropertyExist(a1, a2, a5, nullptr, nullptr,
                                                nullptr)) {
      if (a4 == nullptr) {
        return 0xFFFFFFFFLL;
      }
      asCString_asCString_25f460((__int64)&v120);
      if (GameRoutine_2606f0(a5, (__int64)&GameData_1a9f09e)) {
        GameRoutine_260a40((void*)((__int64)v119), a5, (__int64)"::");
        GameRoutine_260a40((void*)((__int64)&v122), (__int64)v119, a2);
        GameRoutine_25fba0((__int64)&v120, (unsigned int*)&v122);
        asCString_Destroy_asCString((__int64)&v122);
        asCString_Destroy_asCString((__int64)v119);
      }
      else {
        GameRoutine_25f940((unsigned int*)&v120, a2);
      }
      v28 = v120;
      v29 = "Name conflict. '%s' is a global property.";
      goto LABEL_10;
    }
    v43 = *(_QWORD*)(a1 + 16);
    if (*(_DWORD*)(v43 + 1504) != 0) {
      v44 = 0;
      do {
        v45 = *(_QWORD*)(*(_QWORD*)(v43 + 1472) + 8 * v44);
        if (((*(__int64 (**)(__int64))(*(_QWORD*)v45 + 184LL))(v45) & 1) != 0 &&
            *(_QWORD*)(v45 + 288) == a5) {
          asCString_SubString((void*)((unsigned int*)&v122),
                              (unsigned int*)(v45 + 72), 4u,
                              0xFFFFFFFFFFFFFFFFLL);
          v52 = GameRoutine_2606c0((__int64)&v122, a2);
          asCString_Destroy_asCString((__int64)&v122);
          if (v52) {
            goto LABEL_37;
          }
        }
        v43 = *(_QWORD*)(a1 + 16);
      } while (++v44 < (unsigned __int64)*(unsigned int*)(v43 + 1504));
    }
    if ((a6 & 1) == 0) {
    LABEL_49:
      if (*(_DWORD*)(a1 + 256) != 0) {
        v68 = 0;
        while (
            !GameRoutine_2606c0(
                *(_QWORD*)(*(_QWORD*)(a1 + 248) + 8 * v68) + 16LL, a2) ||
            *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 248) + 8 * v68) +
                                  48LL) +
                       32LL) != a5) {
          if (++v68 >= (unsigned __int64)*(unsigned int*)(a1 + 256)) {
            goto LABEL_57;
          }
        }
        if (a4 == nullptr) {
          return 0xFFFFFFFFLL;
        }
        asCString_asCString_25f460((__int64)&v120);
        if (GameRoutine_2606f0(a5, (__int64)&GameData_1a9f09e)) {
          GameRoutine_260a40((void*)((__int64)v119), a5, (__int64)"::");
          GameRoutine_260a40((void*)((__int64)&v122), (__int64)v119, a2);
          GameRoutine_25fba0((__int64)&v120, (unsigned int*)&v122);
          asCString_Destroy_asCString((__int64)&v122);
          asCString_Destroy_asCString((__int64)v119);
        }
        else {
          GameRoutine_25f940((unsigned int*)&v120, a2);
        }
        v28 = v120;
        v29 = "Name conflict. '%s' is a class.";
        goto LABEL_10;
      }
    LABEL_57:
      if (*(_DWORD*)(a1 + 320) != 0) {
        v75 = 0;
        while (
            !GameRoutine_2606c0(
                *(_QWORD*)(*(_QWORD*)(a1 + 312) + 8 * v75) + 16LL, a2) ||
            *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 312) + 8 * v75) +
                                  48LL) +
                       32LL) != a5) {
          if (++v75 >= (unsigned __int64)*(unsigned int*)(a1 + 320)) {
            goto LABEL_65;
          }
        }
        if (a4 == nullptr) {
          return 0xFFFFFFFFLL;
        }
        asCString_asCString_25f460((__int64)&v120);
        if (GameRoutine_2606f0(a5, (__int64)&GameData_1a9f09e)) {
          GameRoutine_260a40((void*)((__int64)v119), a5, (__int64)"::");
          GameRoutine_260a40((void*)((__int64)&v122), (__int64)v119, a2);
          GameRoutine_25fba0((__int64)&v120, (unsigned int*)&v122);
          asCString_Destroy_asCString((__int64)&v122);
          asCString_Destroy_asCString((__int64)v119);
        }
        else {
          GameRoutine_25f940((unsigned int*)&v120, a2);
        }
        v28 = v120;
        v29 = "Name conflict. '%s' is a named type.";
        goto LABEL_10;
      }
    LABEL_65:
      if (*(_DWORD*)(a1 + 352) != 0) {
        v82 = 0;
        while (
            !GameRoutine_2606c0(
                *(_QWORD*)(*(_QWORD*)(a1 + 344) + 8 * v82) + 16LL, a2) ||
            *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 24) + 600LL) +
                                  8LL *
                                      *(unsigned int*)(*(_QWORD*)(*(_QWORD*)(a1 +
                                                                             344) +
                                                                  8 * v82) +
                                                       40LL)) +
                       32LL) != a5) {
          if (++v82 >= (unsigned __int64)*(unsigned int*)(a1 + 352)) {
            goto LABEL_73;
          }
        }
        if (a4 == nullptr) {
          return 0xFFFFFFFFLL;
        }
        asCString_asCString_25f460((__int64)&v122);
        if (GameRoutine_2606f0(a5, (__int64)&GameData_1a9f09e)) {
          GameRoutine_260a40((void*)((__int64)v119), a5, (__int64)"::");
          GameRoutine_260a40((void*)((__int64)&v120), (__int64)v119, a2);
          GameRoutine_25fba0((__int64)&v122, (unsigned int*)&v120);
          asCString_Destroy_asCString((__int64)&v120);
          asCString_Destroy_asCString((__int64)v119);
        }
        else {
          GameRoutine_25f940((unsigned int*)&v122, a2);
        }
        v115 = v122;
        v116 = (_QWORD*)v123[0];
        v117 = "Name conflict. '%s' is a funcdef.";
      }
      else {
      LABEL_73:
        if (*(_DWORD*)(a1 + 384) != 0) {
          v89 = 0;
          while (!GameRoutine_2606c0(
                     *(_QWORD*)(*(_QWORD*)(a1 + 376) + 8 * v89) + 16LL, a2) ||
                 *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 376) + 8 * v89) +
                            40LL) != a5) {
            if (++v89 >= (unsigned __int64)*(unsigned int*)(a1 + 384)) {
              goto LABEL_81;
            }
          }
          if (a4 == nullptr) {
            return 0xFFFFFFFFLL;
          }
          asCString_asCString_25f460((__int64)&v122);
          if (GameRoutine_2606f0(a5, (__int64)&GameData_1a9f09e)) {
            GameRoutine_260a40((void*)((__int64)v119), a5, (__int64)"::");
            GameRoutine_260a40((void*)((__int64)&v120), (__int64)v119, a2);
            GameRoutine_25fba0((__int64)&v122, (unsigned int*)&v120);
            asCString_Destroy_asCString((__int64)&v120);
            asCString_Destroy_asCString((__int64)v119);
          }
          else {
            GameRoutine_25f940((unsigned int*)&v122, a2);
          }
          v115 = v122;
          v116 = (_QWORD*)v123[0];
          v117 = "Name conflict. '%s' is a mixin class.";
        }
        else {
        LABEL_81:
          if ((a6 & 1) == 0 && (a7 & 1) == 0 && *(_DWORD*)(a1 + 72) != 0) {
            v96 = 0;
            while (1) {
              v97 = *(_QWORD*)(*(_QWORD*)(a1 + 64) + 8 * v96);
              if (v97 != 0) {
                v97 = *(unsigned int*)(v97 + 80);
              }
              v98 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 1928LL);
              v99 = *(_QWORD*)(v98 + 8 * v97);
              if (v99 != 0 &&
                  ((*(__int64 (**)(_QWORD))(*(_QWORD*)v99 + 184LL))(
                       *(_QWORD*)(v98 + 8 * v97)) &
                   1) != 0 &&
                  *(_QWORD*)(v99 + 256) == 0 && *(_QWORD*)(v99 + 288) == a5) {
                asCString_SubString((void*)((unsigned int*)&v122),
                                    (unsigned int*)(v99 + 72), 4u,
                                    0xFFFFFFFFFFFFFFFFLL);
                v106 = GameRoutine_2606c0((__int64)&v122, a2);
                asCString_Destroy_asCString((__int64)&v122);
                if (v106) {
                  break;
                }
              }
              if (++v96 >= (unsigned __int64)*(unsigned int*)(a1 + 72)) {
                goto LABEL_94;
              }
            }
          LABEL_37:
            if (a4 == nullptr) {
              return 0xFFFFFFFFLL;
            }
            asCString_asCString_25f460((__int64)&v120);
            if (GameRoutine_2606f0(a5, (__int64)&GameData_1a9f09e)) {
              GameRoutine_260a40((void*)((__int64)v119), a5, (__int64)"::");
              GameRoutine_260a40((void*)((__int64)&v122), (__int64)v119, a2);
              GameRoutine_25fba0((__int64)&v120, (unsigned int*)&v122);
              asCString_Destroy_asCString((__int64)&v122);
              asCString_Destroy_asCString((__int64)v119);
            }
            else {
              GameRoutine_25f940((unsigned int*)&v120, a2);
            }
            v28 = v120;
            v29 = "Name conflict. '%s' is a virtual property.";
            goto LABEL_10;
          }
        LABEL_94:
          if ((a6 & 1) == 0 || *(_DWORD*)(a1 + 72) == 0) {
            return 0;
          }
          v107 = 0;
          while (1) {
            v108 = *(_QWORD*)(*(_QWORD*)(a1 + 64) + 8 * v107);
            if (v108 != 0 && *(_QWORD*)(v108 + 40) == 0 &&
                GameRoutine_2606c0(v108 + 16, a2) &&
                *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 1928LL) +
                                      8LL *
                                          *(unsigned int*)(*(_QWORD*)(*(_QWORD*)(a1 +
                                                                                 64) +
                                                                      8 * v107) +
                                                           80LL)) +
                           288LL) == a5) {
              break;
            }
            ++v107;
            result = 0;
            if (v107 >= *(unsigned int*)(a1 + 72)) {
              return result;
            }
          }
          if (a4 == nullptr) {
            return 0xFFFFFFFFLL;
          }
          asCString_asCString_25f460((__int64)&v122);
          if (GameRoutine_2606f0(a5, (__int64)&GameData_1a9f09e)) {
            GameRoutine_260a40((void*)((__int64)v119), a5, (__int64)"::");
            GameRoutine_260a40((void*)((__int64)&v120), (__int64)v119, a2);
            GameRoutine_25fba0((__int64)&v122, (unsigned int*)&v120);
            asCString_Destroy_asCString((__int64)&v120);
            asCString_Destroy_asCString((__int64)v119);
          }
          else {
            GameRoutine_25f940((unsigned int*)&v122, a2);
          }
          v115 = v122;
          v116 = (_QWORD*)v123[0];
          v117 = "Name conflict. '%s' is a global function.";
        }
      }
      if (v115 >= 0xC) {
        v118 = v116;
      }
      else {
        v118 = v123;
      }
      asCString_Format(&v122, (__int64)v117, v118);
      asCBuilder_WriteError(a1, (__int64)&v122, a4, a3);
      v35 = &v122;
    LABEL_24:
      asCString_Destroy_asCString((__int64)v35);
      return 0xFFFFFFFFLL;
    }
  LABEL_41:
    v59 = *(_QWORD*)(a1 + 16);
    if (*(_DWORD*)(v59 + 1504) != 0) {
      v60 = 0;
      while (1) {
        v61 = GameRoutine_2606c0(
            *(_QWORD*)(*(_QWORD*)(v59 + 1472) + 8 * v60) + 72LL, a2);
        v59 = *(_QWORD*)(a1 + 16);
        if (v61 && *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v59 + 1472) + 8 * v60) +
                              288LL) == a5) {
          break;
        }
        if (++v60 >= (unsigned __int64)*(unsigned int*)(v59 + 1504)) {
          goto LABEL_49;
        }
      }
      if (a4 == nullptr) {
        return 0xFFFFFFFFLL;
      }
      asCString_asCString_25f460((__int64)&v120);
      if (GameRoutine_2606f0(a5, (__int64)&GameData_1a9f09e)) {
        GameRoutine_260a40((void*)((__int64)v119), a5, (__int64)"::");
        GameRoutine_260a40((void*)((__int64)&v122), (__int64)v119, a2);
        GameRoutine_25fba0((__int64)&v120, (unsigned int*)&v122);
        asCString_Destroy_asCString((__int64)&v122);
        asCString_Destroy_asCString((__int64)v119);
      }
      else {
        GameRoutine_25f940((unsigned int*)&v120, a2);
      }
      v28 = v120;
      v29 = "Name conflict. '%s' is a global function.";
      goto LABEL_10;
    }
    goto LABEL_49;
  }
  if (a4 != nullptr) {
    asCString_asCString_25f460((__int64)&v120);
    if (GameRoutine_2606f0(a5, (__int64)&GameData_1a9f09e)) {
      GameRoutine_260a40((void*)((__int64)v119), a5, (__int64)"::");
      GameRoutine_260a40((void*)((__int64)&v122), (__int64)v119, a2);
      GameRoutine_25fba0((__int64)&v120, (unsigned int*)&v122);
      asCString_Destroy_asCString((__int64)&v122);
      asCString_Destroy_asCString((__int64)v119);
    }
    else {
      GameRoutine_25f940((unsigned int*)&v120, a2);
    }
    v28 = v120;
    v29 = "Name conflict. '%s' is an extended data type.";
  LABEL_10:
    if (v28 >= 0xC) {
      v30 = (_QWORD*)v121[0];
    }
    else {
      v30 = v121;
    }
    asCString_Format(&v120, (__int64)v29, v30);
    v119[0] = 0;
    v124 = 0;
    if (a3 != 0) {
      asCScriptCode_ConvertPosToRowCol((__int64)a4, *(_QWORD*)(a3 + 8), v119,
                                       (int*)&v124);
    }
    asCString_asCString_25f470((unsigned int*)&v122, a4);
    v31 = v119[0];
    v32 = v124;
    ++*(_DWORD*)a1;
    if ((*(_BYTE*)(a1 + 8) & 1) == 0) {
      if ((unsigned int)v122 >= 0xC) {
        v33 = (_QWORD*)v123[0];
      }
      else {
        v33 = v123;
      }
      if ((unsigned int)v120 >= 0xC) {
        v34 = (_QWORD*)v121[0];
      }
      else {
        v34 = v121;
      }
      (*(void (**)(_QWORD, _QWORD*, __int64, __int64, _QWORD, _QWORD*))(
          **(_QWORD**)(a1 + 16) + 56LL))(*(_QWORD*)(a1 + 16), v33, v31, v32, 0,
                                         v34);
    }
    asCString_Destroy_asCString((__int64)&v122);
    v35 = &v120;
    goto LABEL_24;
  }
  return 0xFFFFFFFFLL;
}

__attribute__((swiftcall)) void

asCBuilder_CreateDataTypeFromNode(PSEUDO_X8 x8_, __int64 a1, __int64 a2,
                                  __int64 a3, __int64 a4, char a5, __int64 a6,
                                  char a7, _BYTE* a8)
{
  __int64 a9 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v16;
  int v17;
  __int64 v18;
  __int64 v19;
  bool v20;
  _QWORD* v21;
  __int64 v22;
  int v23;
  _QWORD* v30;
  __int64 v31;
  unsigned int* v32;
  unsigned __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  unsigned __int64 i;
  __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  int v44;
  unsigned __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v60;
  bool v67;
  unsigned int* v68;
  const char* v69;
  _BYTE* v70;
  char v71;
  _BOOL4 v72;
  __int64 v73;
  int v74;
  __int64 v75;
  unsigned int v76;
  _QWORD* v77;
  const char* v78;
  _QWORD* v79;
  unsigned int* v80;
  int v81;
  __int64 v82;
  int v83;
  __int64 v84;
  const char* v85;
  int v87;
  __int64 v88;
  _QWORD* v89;
  __int64 v90;
  _DWORD* v91;
  __int64 v92;
  __int64 v93;
  _QWORD* v94;
  __int64 v95;
  __int64 v96;
  _QWORD* v97;
  _QWORD* v98;
  unsigned int v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  _QWORD* v104;
  int v105;
  _QWORD* v106;
  __int64 v107;
  unsigned int* v108;
  __int64 v109;
  __int64 v111;
  _BYTE* v112;
  unsigned int v114;
  _QWORD* v115;
  unsigned int v116[6];
  _QWORD v117[68];
  unsigned int v118;
  _QWORD v119[2];
  __int64 v120;
  __int64 v121;
  struct {
    _DWORD v122[4];
    char v123;
  } v122_;

  asCDataType_asCDataType_1bcc50((__int64)v122_.v122);
  v16 = *(_QWORD*)(a2 + 48);
  v121 = v16;
  if (a8 != nullptr) {
    *a8 = 1;
  }
  if (*(_DWORD*)a2 != 4) {
    v121 = a2;
    v16 = a2;
  }
  v17 = *(_DWORD*)(v16 + 4);
  v112 = a8;
  if (v17 == 90) {
    v16 = *(_QWORD*)(v16 + 32);
    v121 = v16;
  }
  v120 = 0;
  v18 = asCBuilder_GetNameSpaceFromNode(a1, v16, a3, a4, &v121, &v120);
  v19 = v120;
  v20 = v18 == 0;
  if ((v18 | v120) == 0) {
    asCDataType_CreatePrimitive((void*)((__int64)v117), 68, 0);
    GameRoutine_1bd280((__int64)v122_.v122, (__int64)v117);
    asCDataType_Destroy_asCDataType(v117);
    if (a8 != nullptr) {
      *a8 = 0;
    }
    goto LABEL_139;
  }
  v111 = a3;
  v21 = (_QWORD*)v121;
  v22 = v18;
  v23 = *(_DWORD*)(v121 + 4);
  if (v23 == 108) {
    asCDataType_CreateAuto((void*)((__int64)v117), v17 == 90);
    goto LABEL_67;
  }
  if (v23 != 5) {
    asCDataType_CreatePrimitive((void*)((__int64)v117), v23, v17 == 90);
  LABEL_67:
    GameRoutine_1bd280((__int64)v122_.v122, (__int64)v117);
    asCDataType_Destroy_asCDataType(v117);
    v32 = (unsigned int*)v22;
    v70 = a8;
    v71 = a7;
    v72 = false;
    v73 = v21[4];
    v121 = v73;
    if (v73 != 0) {
      goto LABEL_72;
    }
    goto LABEL_94;
  }
  v105 = v17;
  asCString_asCString_25f460((__int64)&v118);
  asCString_Assign(&v118, *(_QWORD*)(v111 + 24) + v21[1], v21[2]);
  v30 = v119;
  v31 = v19;
  v32 = (unsigned int*)v22;
  v107 = a9;
  while (1) {
    v109 = v31;
    if (a6 == 0) {
      goto LABEL_45;
    }
    v108 = v32;
    if ((*(_BYTE*)(a6 + 48) & 0x40) != 0) {
      v33 = *(unsigned int*)(a6 + 464);
      if ((_DWORD)v33 != 0) {
        break;
      }
    }
  LABEL_21:
    v106 = v30;
    v37 = a6;
    if (v118 >= 0xC) {
      v38 = v119[0];
    }
    else {
      v38 = (__int64)v30;
    }
    do {
      v39 = *(unsigned int*)(v37 + 304);
      if ((_DWORD)v39 != 0) {
        for (i = 0; i < v39; ++i) {
          v41 = *(_QWORD*)(*(_QWORD*)(v37 + 296) + 8 * i);
          if (v41 != 0) {
            if (GameRoutine_2606c0(v41 + 8, v38)) {
              asCDataType_CreateType((void*)((__int64)v117), v41, 0);
              GameRoutine_1bd280((__int64)v122_.v122, (__int64)v117);
              asCDataType_Destroy_asCDataType(v117);
              a9 = v107;
              v32 = v108;
              v70 = v112;
              v72 = false;
              goto LABEL_70;
            }
            v39 = *(unsigned int*)(v37 + 304);
          }
        }
      }
      v37 = *(_QWORD*)(v37 + 256);
    } while (v37 != 0);
    asCCompiler_asCCompiler((__int64)v117);
    v117[17] = *(_QWORD*)(a1 + 16);
    if (*(_DWORD*)(a1 + 504) != 0) {
      v42 = 0;
      v43 = 0;
      v44 = 0;
      v36 = 0;
      do {
        asCString_asCString_25f470(v116,
                                   (unsigned int*)(*(_QWORD*)(a1 + 496) + v42));
        v51 = asCCompiler_DetermineNameSpace((__int64)v117, (__int64)v116);
        if (v51 != 0) {
          v52 = v118 >= 0xC ? v119[0] : (__int64)v106;
          v36 = asCBuilder_GetObjectType(a1, v52, v51);
          if (v36 != 0) {
            ++v44;
          }
        }
        asCString_Destroy_asCString((__int64)v116);
        ++v43;
        v42 += 24;
      } while (v43 < *(unsigned int*)(a1 + 504));
      v32 = v108;
      if (v44 >= 2) {
        asCString_asCString_25f460((__int64)v116);
        if (v118 >= 0xC) {
          v104 = (_QWORD*)v119[0];
        }
        else {
          v104 = v106;
        }
        asCString_Format(v116, (__int64)"type to '%s' is ambiguous", v104);
        asCBuilder_WriteError(a1, (__int64)v116, (unsigned int*)v111, v121);
        asCDataType_CreatePrimitive((void*)(v107), 68, 0);
        asCString_Destroy_asCString((__int64)v116);
        asCCompiler_Destroy_asCCompiler((__int64)v117);
        goto LABEL_186;
      }
      asCCompiler_Destroy_asCCompiler((__int64)v117);
      v30 = v106;
      a9 = v107;
      if (v36 != 0) {
        goto LABEL_143;
      }
    }
    else {
      asCCompiler_Destroy_asCCompiler((__int64)v117);
      a9 = v107;
      v32 = v108;
      v30 = v106;
    }
  LABEL_45:
    if (v118 >= 0xC) {
      v53 = v119[0];
    }
    else {
      v53 = (__int64)v30;
    }
    v54 = asCBuilder_GetType(a1, v53, (unsigned __int64)v32, v109);
    if (v54 != 0 || a6 != 0 && *(_QWORD*)(a1 + 24) == 0 &&
                        (v118 >= 0xC ? (v60 = v119[0]) : (v60 = (__int64)v30),
                         (v54 = asCBuilder_GetTypeFromTypesKnownByObject(
                              a1, v60, a6)) != 0)) {
      v36 = v54;
      goto LABEL_143;
    }
    if (v20) {
      v120 = 0;
    LABEL_58:
      if ((a7 & 1) != 0) {
        asCString_asCString_25f460((__int64)v117);
        if (v22 != 0) {
          v67 = GameRoutine_2606c0(v22, (__int64)&GameData_1a9f09e);
          v68 = (unsigned int*)v111;
          if (v118 >= 0xC) {
            v69 = (const char*)v119[0];
          }
          else {
            v69 = (const char*)v119;
          }
          if (v67) {
            asCString_Format(v117,
                             (__int64)"Identifier '%s' is not a data type in "
                                      "global namespace",
                             v69);
          }
          else {
            v99 = *(_DWORD*)v22;
            v102 = *(_QWORD*)(v22 + 8);
            v101 = v22 + 8;
            v100 = v102;
            if (v99 >= 0xC) {
              v103 = v100;
            }
            else {
              v103 = v101;
            }
            asCString_Format(v117,
                             (__int64)"Identifier '%s' is not a data type in "
                                      "namespace '%s' or parent",
                             v69, v103);
          }
        }
        else {
          asCDataType_CreateType((void*)((__int64)v116), v19, 0);
          if (v118 >= 0xC) {
            v97 = (_QWORD*)v119[0];
          }
          else {
            v97 = v119;
          }
          asCDataType_Format((void*)(&v114), (__int64)v116,
                             *(_QWORD*)((char*)((char*)0x20LL) + v19), 0);
          if (v114 >= 0xC) {
            v98 = v115;
          }
          else {
            v98 = &v115;
          }
          asCString_Format(v117,
                           (__int64)"Identifier '%s' is not a data type in "
                                    "namespace '%s' or parent",
                           v97, v98);
          asCString_Destroy_asCString((__int64)&v114);
          asCDataType_Destroy_asCDataType(v116);
          v68 = (unsigned int*)v111;
        }
        asCBuilder_WriteError(a1, (__int64)v117, v68, v121);
        asCString_Destroy_asCString((__int64)v117);
      }
      asCDataType_CreatePrimitive((void*)((__int64)v117), 68, v105 == 90);
      GameRoutine_1bd280((__int64)v122_.v122, (__int64)v117);
      asCDataType_Destroy_asCDataType(v117);
      if (v112 != nullptr) {
        *v112 = 0;
      }
      asCDataType_asCDataType_1bcc70(a9, (__int64)v122_.v122);
    LABEL_186:
      asCString_Destroy_asCString((__int64)&v118);
      {
        asCDataType_Destroy_asCDataType(v122_.v122);
        return;
      }
    }
    v32 = (unsigned int*)asCScriptEngine_GetParentNameSpace(*(_QWORD*)(a1 + 16),
                                                            v32);
    v31 = 0;
    v20 = false;
    v120 = 0;
    if (v32 == nullptr) {
      goto LABEL_58;
    }
  }
  v34 = 8;
  v35 = 0;
  while (1) {
    v36 = *(_QWORD*)(*(_QWORD*)(a6 + 456) + v34);
    if (v36 != 0) {
      break;
    }
  LABEL_17:
    ++v35;
    v34 += 24;
    if (v35 >= v33) {
      goto LABEL_21;
    }
  }
  if (!GameRoutine_260720(&v118, v36 + 8)) {
    v33 = *(unsigned int*)(a6 + 464);
    goto LABEL_17;
  }
  a9 = v107;
  v32 = v108;
LABEL_143:
  v87 = *(_DWORD*)(v36 + 48);
  v88 = *(_QWORD*)(a1 + 24);
  v89 = v30;
  v72 = (v87 & 0x100000) != 0;
  if (v88 != 0 && (*(_DWORD*)(v36 + 52) & *(_DWORD*)(v88 + 80)) == 0) {
    v70 = v112;
    v71 = a7;
    if ((a7 & 1) != 0) {
      asCString_asCString_25f460((__int64)v117);
      if (v118 >= 0xC) {
        v94 = (_QWORD*)v119[0];
      }
      else {
        v94 = v89;
      }
      asCString_Format(
          v117, (__int64)"Type '%s' is not available for this module", v94);
      asCBuilder_WriteError(a1, (__int64)v117, (unsigned int*)v111, v121);
      asCString_Destroy_asCString((__int64)v117);
    }
    v122_.v122[0] = 68;
    if (v112 != nullptr) {
      *v112 = 0;
    }
    goto LABEL_71;
  }
  v70 = v112;
  if ((v87 & 0x10000000) != 0) {
    v93 = CastToTypedefType(v36);
    GameRoutine_1bd280((__int64)v122_.v122, v93 + 128);
    asCDataType_MakeReadOnly((__int64)v122_.v122, v105 == 90);
  LABEL_70:
    v71 = a7;
    goto LABEL_71;
  }
  v90 = v121;
  if ((v87 & 0x40) != 0) {
    v95 = CastToObjectType(v36);
    v96 = asCBuilder_GetTemplateInstanceFromNode(a1, v90, v111, v95, a4, a6,
                                                 &v121);
    v71 = a7;
    v36 = v96;
    if (v96 != 0) {
      goto LABEL_170;
    }
    if (v112 != nullptr) {
      *v112 = 0;
    }
    asCDataType_CreatePrimitive((void*)(a9), 68, 0);
    goto LABEL_186;
  }
  if (v121 != 0) {
    v91 = *(_DWORD**)(v121 + 32);
    v71 = a7;
    if (v91 != nullptr && *v91 == 4) {
      if ((a7 & 1) != 0) {
        asCString_asCString_25f460((__int64)v117);
        if (*(_DWORD*)(v36 + 8) >= 0xCu) {
          v92 = *(_QWORD*)(v36 + 16);
        }
        else {
          v92 = v36 + 16;
        }
        asCString_Format(v117, (__int64)"Type '%s' is not a template type",
                         v92);
        asCBuilder_WriteError(a1, (__int64)v117, (unsigned int*)v111, v121);
        asCString_Destroy_asCString((__int64)v117);
      }
      if (v112 != nullptr) {
        *v112 = 0;
      }
    }
  }
  else {
    v71 = a7;
  }
LABEL_170:
  asCDataType_CreateType((void*)((__int64)v117), v36, v105 == 90);
  GameRoutine_1bd280((__int64)v122_.v122, (__int64)v117);
  asCDataType_Destroy_asCDataType(v117);
LABEL_71:
  asCString_Destroy_asCString((__int64)&v118);
  v73 = *(_QWORD*)(v121 + 32);
  v121 = v73;
  if (v73 == 0) {
  LABEL_94:
    v80 = (unsigned int*)v111;
    goto LABEL_133;
  }
LABEL_72:
  if ((v71 & 1) != 0) {
    while (1) {
      v74 = *(_DWORD*)(v73 + 4);
      if (v74 == 44) {
        if ((asCDataType_CanBeInstantiated((__int64)v122_.v122) & 1) == 0) {
          asCString_asCString_25f460((__int64)v117);
          if (asCDataType_IsAbstractClass((__int64)v122_.v122)) {
            asCDataType_Format((void*)(&v118), (__int64)v122_.v122,
                               (__int64)v32, 0);
            v76 = v118;
            v77 = (_QWORD*)v119[0];
            v78 = "Abstract class '%s' cannot be instantiated";
          }
          else if ((asCDataType_IsInterface((__int64)v122_.v122) & 1) != 0) {
            asCDataType_Format((void*)(&v118), (__int64)v122_.v122,
                               (__int64)v32, 0);
            v76 = v118;
            v77 = (_QWORD*)v119[0];
            v78 = "Interface '%s' cannot be instantiated";
          }
          else {
            asCDataType_Format((void*)(&v118), (__int64)v122_.v122,
                               (__int64)v32, 0);
            v76 = v118;
            v77 = (_QWORD*)v119[0];
            v78 = "Data type can't be '%s'";
          }
          v79 = v76 >= 0xC ? v77 : v119;
          asCString_Format(v117, (__int64)v78, v79);
          asCString_Destroy_asCString((__int64)&v118);
          v73 = v121;
          asCBuilder_WriteError(a1, (__int64)v117, (unsigned int*)v111, v121);
          asCString_Destroy_asCString((__int64)v117);
          if (v70 != nullptr) {
            *v70 = 0;
          }
        }
        if ((asCDataType_MakeArray((__int64)v122_.v122, *(_QWORD*)(a1 + 16),
                                   *(_QWORD*)(a1 + 24)) &
             0x80000000) != 0) {
          goto LABEL_120;
        }
      }
      else {
        if (v74 != 20) {
          goto LABEL_94;
        }
        if ((v122_.v123 & 4) != 0) {
          v80 = (unsigned int*)v111;
          goto LABEL_124;
        }
        if ((asCDataType_MakeHandle((__int64)v122_.v122, 1, a5 & 1) &
             0x80000000) != 0) {
          v80 = (unsigned int*)v111;
          goto LABEL_128;
        }
        v75 = *(_QWORD*)(v73 + 32);
        if (v75 != 0 && *(_DWORD*)(v75 + 4) == 90) {
          asCDataType_MakeReadOnly((__int64)v122_.v122, 1);
        }
      }
      v73 = *(_QWORD*)(v73 + 32);
      v121 = v73;
      if (v73 == 0) {
        goto LABEL_94;
      }
    }
  }
  v80 = (unsigned int*)v111;
  if (v70 == nullptr) {
    while (1) {
      v83 = *(_DWORD*)(v73 + 4);
      if (v83 == 44) {
        asCDataType_CanBeInstantiated((__int64)v122_.v122);
        if ((asCDataType_MakeArray((__int64)v122_.v122, *(_QWORD*)(a1 + 16),
                                   *(_QWORD*)(a1 + 24)) &
             0x80000000) != 0) {
          goto LABEL_119;
        }
      }
      else {
        if (v83 != 20) {
          goto LABEL_118;
        }
        if ((v122_.v123 & 4) != 0) {
          goto LABEL_123;
        }
        if ((asCDataType_MakeHandle((__int64)v122_.v122, 1, a5 & 1) &
             0x80000000) != 0) {
          goto LABEL_127;
        }
        v84 = *(_QWORD*)(v73 + 32);
        if (v84 != 0 && *(_DWORD*)(v84 + 4) == 90) {
          asCDataType_MakeReadOnly((__int64)v122_.v122, 1);
        }
      }
      v73 = *(_QWORD*)(v73 + 32);
      if (v73 == 0) {
        goto LABEL_117;
      }
    }
  }
  while (1) {
    v81 = *(_DWORD*)(v73 + 4);
    if (v81 == 20) {
      break;
    }
    if (v81 != 44) {
    LABEL_118:
      v121 = v73;
      goto LABEL_133;
    }
    if ((asCDataType_CanBeInstantiated((__int64)v122_.v122) & 1) == 0) {
      *v70 = 0;
    }
    if ((asCDataType_MakeArray((__int64)v122_.v122, *(_QWORD*)(a1 + 16),
                               *(_QWORD*)(a1 + 24)) &
         0x80000000) != 0) {
    LABEL_119:
      v121 = v73;
    LABEL_120:
      v80 = (unsigned int*)v111;
      if ((v71 & 1) != 0) {
        v85 = "The application doesn't support the default array type.";
      LABEL_130:
        asCString_asCString_25f730((unsigned int*)v117, (__int64)v85);
        asCBuilder_WriteError(a1, (__int64)v117, v80, v73);
        asCString_Destroy_asCString((__int64)v117);
        goto LABEL_131;
      }
      goto LABEL_131;
    }
  LABEL_98:
    v73 = *(_QWORD*)(v73 + 32);
    if (v73 == 0) {
    LABEL_117:
      v73 = 0;
      v121 = 0;
      goto LABEL_133;
    }
  }
  if ((v122_.v123 & 4) == 0) {
    if ((asCDataType_MakeHandle((__int64)v122_.v122, 1, a5 & 1) & 0x80000000) !=
        0) {
    LABEL_127:
      v121 = v73;
    LABEL_128:
      if ((v71 & 1) != 0) {
        v85 = "Object handle is not supported for this type";
        goto LABEL_130;
      }
      goto LABEL_131;
    }
    v82 = *(_QWORD*)(v73 + 32);
    if (v82 != 0 && *(_DWORD*)(v82 + 4) == 90) {
      asCDataType_MakeReadOnly((__int64)v122_.v122, 1);
    }
    goto LABEL_98;
  }
LABEL_123:
  v121 = v73;
LABEL_124:
  if ((v71 & 1) != 0) {
    v85 = "Handle to handle is not allowed";
    goto LABEL_130;
  }
LABEL_131:
  if (v70 != nullptr) {
    *v70 = 0;
  }
LABEL_133:
  if (v72 && (asCDataType_MakeHandle((__int64)v122_.v122, 1, a5 & 1) &
              0x80000000) != 0) {
    if ((v71 & 1) != 0) {
      asCString_asCString_25f730(
          (unsigned int*)v117,
          (__int64)"Object handle is not supported for this type");
      asCBuilder_WriteError(a1, (__int64)v117, v80, v73);
      asCString_Destroy_asCString((__int64)v117);
    }
    if (v70 != nullptr) {
      *v70 = 0;
    }
  }
LABEL_139:
  asCDataType_asCDataType_1bcc70(a9, (__int64)v122_.v122);
  {
    asCDataType_Destroy_asCDataType(v122_.v122);
    return;
  }
}

#pragma GCC visibility pop
