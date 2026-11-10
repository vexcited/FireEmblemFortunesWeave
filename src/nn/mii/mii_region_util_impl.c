#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_detail_UnexpectedDefaultImpl_plt_857150(_QWORD);
__int64 nn_mii_IsEnabledSpecialMii_plt(void);
__int64 nn_mii_Nickname_Set_plt(_QWORD, _QWORD);
__int64 nn_mii_detail_CharInfoRaw_IsValid_plt(void* this_);
__int64 nn_mii_detail_CharInfoRaw_SetDefaultMii_plt(_QWORD, _QWORD, _QWORD,
                                                    _QWORD, _QWORD, _QWORD);
__int64 nn_settings_system_GetRegionCode_plt(_QWORD);
__int64 nn_mii_detail_ReplaceCharInfoIfNecessary(void* this_, void* a2);

__int64 nn_mii_detail_ReplaceCharInfoIfNecessary(void* this_, void* a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v7;
  int v9;
  __int64 v10;
  __int64 v11;
  bool v12;
  unsigned int v13;
  int v14;
  unsigned int v15;
  _QWORD v16[3];
  _QWORD v17[3];
  _QWORD v18[2];

  if ((nn_mii_detail_CharInfoRaw_IsValid_plt(this_) & 1) == 0) {
    return 0;
  }
  v3 = *((_QWORD*)this_ + 3);
  v4 = *(_QWORD*)((char*)this_ + 30);
  v17[0] = *((_QWORD*)this_ + 2);
  v17[1] = v3;
  *(_QWORD*)((char*)&v17[1] + 6) = v4;
  if (LOWORD(v17[0]) == 64 || WORD1(v17[0]) == 64 || WORD2(v17[0]) == 64 ||
      HIWORD(v17[0]) == 64 || (unsigned __int16)v3 == 64 ||
      WORD1(v17[1]) == 64 || WORD2(v17[1]) == 64 || HIWORD(v17[1]) == 64 ||
      LOWORD(v17[2]) == 64 || WORD1(v17[2]) == 64 || WORD2(v17[2]) == 64) {
    nn_mii_Nickname_Set_plt(v17, L"???");
    v5 = v17[1];
    *((_QWORD*)this_ + 2) = v17[0];
    *((_QWORD*)this_ + 3) = v5;
    *(_QWORD*)((char*)this_ + 30) = *(_QWORD*)((char*)&v17[1] + 6);
    if (*((_BYTE*)this_ + 43) != 1) {
      return 0;
    }
  }
  else if (*((_BYTE*)this_ + 43) != 1) {
    return 0;
  }
  if ((nn_mii_IsEnabledSpecialMii_plt() & 1) == 0) {
    goto LABEL_26;
  }
  v6 = *((unsigned __int8*)this_ + 44);
  LODWORD(v17[0]) = 0;
  v7 = nn_settings_system_GetRegionCode_plt(v17);
  if (v6 > 1) {
    if (v6 != 2) {
      if (v6 != 3) {
        nn_detail_UnexpectedDefaultImpl_plt_857150(v7);
      }
      if (((LODWORD(v17[0]) > 3uLL) | (3u >> SLOBYTE(v17[0])) & 1) == 0) {
        return 0;
      }
      goto LABEL_26;
    }
    if (((LODWORD(v17[0]) > 3uLL) | (0xDu >> SLOBYTE(v17[0])) & 1) != 0) {
      goto LABEL_26;
    }
    return 0;
  }
  if (v6 == 0 ||
      ((LODWORD(v17[0]) > 3uLL) | (0xEu >> SLOBYTE(v17[0])) & 1) == 0) {
    return 0;
  }
LABEL_26:
  v9 = *((unsigned __int8*)this_ + 15);
  v10 = *(_QWORD*)this_;
  v11 = *((_QWORD*)this_ + 1);
  v12 = *((_BYTE*)this_ + 40) == 0;
  v13 = *((unsigned __int8*)this_ + 39);
  memset(v17, 0, 22);
  if (v12) {
    v14 = 0;
  }
  else {
    v14 = 3;
  }
  v15 = v14 + (unsigned __int8)(v9 - 3 * ((unsigned int)(171 * v9) >> 9));
  v18[0] = 0x690069004DLL;
  v18[1] = 0;
  nn_mii_Nickname_Set_plt(v17, v18);
  v16[0] = v17[0];
  v16[1] = v17[1];
  *(_QWORD*)((char*)&v16[1] + 6) = *(_QWORD*)((char*)&v17[1] + 6);
  nn_mii_detail_CharInfoRaw_SetDefaultMii_plt(this_, v15, v10, v11, v13, v16);
  return 1;
}

#pragma GCC visibility pop
