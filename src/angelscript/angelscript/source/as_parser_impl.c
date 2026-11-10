#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* asCParser_ParseOptionalScope(__int64, _QWORD*);
_QWORD* asCParser_ParseParameterList(__int64);
_QWORD* asCParser_ParseType(__int64, char, char, char);
_QWORD* asCParser_ParseTypeMod(__int64, char);
_QWORD* asCScriptNode_AddChildLast(_QWORD* result, _QWORD*);
__int64 asCMemoryMgr_AllocScriptNode(__int64);
__int64 asCParser_ParseIdentifier(__int64);
__int64 asCParser_ParseMethodAttributes(__int64 result, _QWORD*);
__int64 asCParser_ParseToken(__int64, unsigned int);
__int64 asCScriptNode_asCScriptNode(__int64 result, int);
__int64 asCTokenizer_GetToken(__int64, __int64, __int64, _QWORD*, _DWORD*);
bool asCScriptCode_TokenEquals(__int64, __int64, __int64, __int64);
_QWORD* asCParser_ParseFunctionDefinition_1f7200(__int64 a1);

_QWORD* asCParser_ParseFunctionDefinition_1f7200(__int64 a1)
{
  __int64 v2;
  _QWORD* v3;
  unsigned __int64 v4;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  _QWORD* v14;
  _QWORD* v15;
  _QWORD* v16;
  _QWORD* v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  _QWORD* v23;
  __int64 v25;
  __int64 v26;
  struct {
    __int64 v27;
    __int64 v28;
    __int64 v29;
  } v27_;
  __int64 v30;

  v2 = asCMemoryMgr_AllocScriptNode(*(_QWORD*)(a1 + 8) + 16LL);
  v3 = (_QWORD*)v2;
  if (v2 == 0) {
    *(_BYTE*)a1 = 1;
    return v3;
  }
  asCScriptNode_asCScriptNode(v2, 2);
  v4 = *(_QWORD*)(a1 + 88);
  v5 = *(_QWORD*)(a1 + 72);
  do {
    if (v5 != v4) {
      v9 = *(_QWORD*)(*(_QWORD*)(a1 + 24) + 32LL);
      while (v9 > v4) {
        v6 = asCTokenizer_GetToken(*(_QWORD*)(a1 + 8) + 10344LL,
                                   *(_QWORD*)(*(_QWORD*)(a1 + 24) + 24LL) + v4,
                                   v9 - v4, &v30, nullptr);
        v8 = v30;
        v10 = *(_QWORD*)(a1 + 88);
        LODWORD(v27_.v28) = v6;
        v27_.v29 = v10;
        v4 = v10 + v30;
        *(_QWORD*)(a1 + 88) = v4;
        if ((unsigned int)(v6 - 2) >= 3) {
          goto LABEL_10;
        }
      }
      v27_.v29 = v4;
      v30 = 0;
      LODWORD(v27_.v28) = 1;
      goto LABEL_15;
    }
    v7 = *(_QWORD*)(a1 + 72);
    v8 = *(_QWORD*)(a1 + 80);
    v27_.v28 = *(_QWORD*)(a1 + 64);
    v6 = v27_.v28;
    v27_.v29 = v7;
    v4 = v5 + v8;
    v30 = v8;
    *(_QWORD*)(a1 + 88) = v5 + v8;
  } while ((unsigned int)(v6 - 2) < 3);
LABEL_10:
  if (v6 != 5 || !asCScriptCode_TokenEquals(*(_QWORD*)(a1 + 24), v27_.v29, v8,
                                            (__int64)"shared")) {
  LABEL_15:
    v13 = v27_.v29;
    *(_QWORD*)(a1 + 64) = v27_.v28;
    *(_QWORD*)(a1 + 72) = v13;
    *(_QWORD*)(a1 + 80) = v30;
    *(_QWORD*)(a1 + 88) = v13;
    goto LABEL_16;
  }
  v11 = v27_.v29;
  *(_QWORD*)(a1 + 64) = v27_.v28;
  *(_QWORD*)(a1 + 72) = v11;
  *(_QWORD*)(a1 + 80) = v30;
  *(_QWORD*)(a1 + 88) = v11;
  v12 = (_QWORD*)asCParser_ParseIdentifier(a1);
  asCScriptNode_AddChildLast(v3, v12);
  if ((*(_BYTE*)(a1 + 1) & 1) != 0) {
    return v3;
  }
LABEL_16:
  v14 = asCParser_ParseType(a1, 1, 0, 0);
  asCScriptNode_AddChildLast(v3, v14);
  if ((*(_BYTE*)(a1 + 1) & 1) == 0) {
    v15 = asCParser_ParseTypeMod(a1, 0);
    asCScriptNode_AddChildLast(v3, v15);
    if ((*(_BYTE*)(a1 + 1) & 1) == 0) {
      asCParser_ParseOptionalScope(a1, v3);
      v16 = (_QWORD*)asCParser_ParseIdentifier(a1);
      asCScriptNode_AddChildLast(v3, v16);
      if ((*(_BYTE*)(a1 + 1) & 1) == 0) {
        v17 = asCParser_ParseParameterList(a1);
        asCScriptNode_AddChildLast(v3, v17);
        if ((*(_BYTE*)(a1 + 1) & 1) == 0) {
          v18 = *(_QWORD*)(a1 + 88);
          v19 = *(_QWORD*)(a1 + 72);
          while (v19 == v18) {
            v20 = *(_QWORD*)(a1 + 64);
            v25 = v20;
            v26 = *(_QWORD*)(a1 + 72);
            v27_.v27 = *(_QWORD*)(a1 + 80);
            v18 = v19 + v27_.v27;
            *(_QWORD*)(a1 + 88) = v19 + v27_.v27;
            if ((unsigned int)(v20 - 2) >= 3) {
              v21 = v26;
            LABEL_27:
              *(_QWORD*)(a1 + 64) = v25;
              *(_QWORD*)(a1 + 72) = v26;
              *(_QWORD*)(a1 + 80) = v27_.v27;
              *(_QWORD*)(a1 + 88) = v21;
              if ((_DWORD)v20 == 90) {
                v23 = (_QWORD*)asCParser_ParseToken(a1, 0x5Au);
                asCScriptNode_AddChildLast(v3, v23);
              }
              goto LABEL_30;
            }
          }
          v22 = *(_QWORD*)(*(_QWORD*)(a1 + 24) + 32LL);
          while (v22 > v18) {
            LODWORD(v20) = asCTokenizer_GetToken(
                *(_QWORD*)(a1 + 8) + 10344LL,
                *(_QWORD*)(*(_QWORD*)(a1 + 24) + 24LL) + v18, v22 - v18,
                &v27_.v27, nullptr);
            v21 = *(_QWORD*)(a1 + 88);
            LODWORD(v25) = v20;
            v18 = v21 + v27_.v27;
            v26 = v21;
            *(_QWORD*)(a1 + 88) = v21 + v27_.v27;
            if ((unsigned int)(v20 - 2) >= 3) {
              goto LABEL_27;
            }
          }
          v27_.v27 = 0;
          *(_QWORD*)(a1 + 80) = 0;
          *(_QWORD*)(a1 + 88) = v18;
          LODWORD(v25) = 1;
          *(_QWORD*)(a1 + 64) = v25;
          *(_QWORD*)(a1 + 72) = v18;
        LABEL_30:
          asCParser_ParseMethodAttributes(a1, v3);
        }
      }
    }
  }
  return v3;
}

#pragma GCC visibility pop
