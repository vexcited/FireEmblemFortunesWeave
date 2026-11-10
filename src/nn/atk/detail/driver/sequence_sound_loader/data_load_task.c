#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_286270(__int64, unsigned int, __int64, unsigned int,
                           __int64);
__int64 GameRoutine_288010(_QWORD*, unsigned int);
__int64 GameRoutine_2a5520(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 PlayerHeapDataManager_2915a0(_QWORD, _QWORD);
unsigned int* GameRoutine_288140(_QWORD*, __int64, __int64);
__int64 DataLoadTask_Unknown2_290b20(__int64 a1);
__int64 BaseNx_286270(__int64, unsigned int, __int64, unsigned int, __int64);
__int64 PlayerHeapDataManager_2915a0_alt1(__int64 result) __asm__(
    "PlayerHeapDataManager_2915a0");
__int64 SoundArchivePlayer_288010(_QWORD*, __int64);
__int64 SoundArchivePlayer_2a5520(__int64, _BYTE*, __int64, __int64, __int64);
unsigned int* nn_atk_detail_288140(__int64, __int64, __int64);

__int64 DataLoadTask_Unknown2_290b20(__int64 a1)
{
  __int64 result;
  __int64 v3;
  unsigned int v5;
  unsigned int v6;
  __int64 v7;
  unsigned int v8;
  __int64 v9;
  unsigned int v10;
  __int64 v11;
  unsigned int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  char v21;
  struct {
    __int64 v22;
    __int64 v23;
  } v22_;
  struct {
    _DWORD v24[2];
    __int64 v25;
  } v24_;
  struct {
    _DWORD v26[2];
    __int64 v27;
  } v26_;
  struct {
    _DWORD v28[2];
    __int64 v29;
  } v28_;
  int v30;

  result = PlayerHeapDataManager_2915a0_alt1(*(_QWORD*)(a1 + 264));
  if (*(_QWORD*)(a1 + 104) != 0 || (v5 = *(_DWORD*)(a1 + 96)) == -1) {
  LABEL_2:
    v3 = *(_QWORD*)(a1 + 120);
    v26_.v27 = 0;
    v28_.v28[1] = 0;
    v24_.v25 = 0;
    v26_.v26[1] = 0;
    v22_.v23 = 0;
    v24_.v24[1] = 0;
    v28_.v29 = 0;
    v30 = 0;
    v22_.v22 = 0xFFFFFFFFLL;
    v24_.v24[0] = -1;
    v26_.v26[0] = -1;
    v28_.v28[0] = -1;
    if (v3 != 0) {
      if (*(_DWORD*)(a1 + 112) == -1) {
        goto LABEL_18;
      }
    }
    else {
      v6 = *(_DWORD*)(a1 + 112);
      if (v6 == -1) {
        goto LABEL_18;
      }
      result = BaseNx_286270(*(_QWORD*)(a1 + 264) + 24LL, v6,
                             *(_QWORD*)(a1 + 256), 4u, 0);
      if ((result & 1) == 0) {
        goto LABEL_49;
      }
      result =
          SoundArchivePlayer_288010((_QWORD*)(*(_QWORD*)(a1 + 264) + 24LL), v6);
      v3 = result;
      *(_QWORD*)(a1 + 120) = result;
      if (*(_DWORD*)(a1 + 112) == -1) {
        goto LABEL_18;
      }
    }
    if (v3 != 0) {
      result = SoundArchivePlayer_2a5520((__int64)&v22_.v22, &v30, v3,
                                         *(_QWORD*)(a1 + 72),
                                         *(_QWORD*)(a1 + 80) + 24LL);
      if ((_DWORD)result == 2 || (_DWORD)result == -1) {
        result = (__int64)nn_atk_detail_288140(*(_QWORD*)(a1 + 264) + 24LL,
                                               *(_QWORD*)(a1 + 120),
                                               *(_QWORD*)(a1 + 256));
        if ((result & 1) == 0) {
          goto LABEL_49;
        }
        result = SoundArchivePlayer_2a5520(
            (__int64)&v22_.v22, &v30, *(_QWORD*)(a1 + 120), *(_QWORD*)(a1 + 72),
            *(_QWORD*)(a1 + 264) + 24LL);
      }
    }
  LABEL_18:
    v7 = *(_QWORD*)(a1 + 136);
    if (v7 != 0) {
      if (*(_DWORD*)(a1 + 128) == -1) {
        goto LABEL_28;
      }
    }
    else {
      v8 = *(_DWORD*)(a1 + 128);
      if (v8 == -1) {
        goto LABEL_28;
      }
      result = BaseNx_286270(*(_QWORD*)(a1 + 264) + 24LL, v8,
                             *(_QWORD*)(a1 + 256), 4u, 0);
      if ((result & 1) == 0) {
        goto LABEL_49;
      }
      result =
          SoundArchivePlayer_288010((_QWORD*)(*(_QWORD*)(a1 + 264) + 24LL), v8);
      v7 = result;
      *(_QWORD*)(a1 + 136) = result;
      if (*(_DWORD*)(a1 + 128) == -1) {
        goto LABEL_28;
      }
    }
    if (v7 != 0) {
      result = SoundArchivePlayer_2a5520((__int64)v24_.v24, (_BYTE*)&v30 + 1,
                                         v7, *(_QWORD*)(a1 + 72),
                                         *(_QWORD*)(a1 + 80) + 24LL);
      if ((_DWORD)result == 2 || (_DWORD)result == -1) {
        result = (__int64)nn_atk_detail_288140(*(_QWORD*)(a1 + 264) + 24LL,
                                               *(_QWORD*)(a1 + 136),
                                               *(_QWORD*)(a1 + 256));
        if ((result & 1) == 0) {
          goto LABEL_49;
        }
        result = SoundArchivePlayer_2a5520(
            (__int64)v24_.v24, (_BYTE*)&v30 + 1, *(_QWORD*)(a1 + 136),
            *(_QWORD*)(a1 + 72), *(_QWORD*)(a1 + 264) + 24LL);
      }
    }
  LABEL_28:
    v9 = *(_QWORD*)(a1 + 152);
    if (v9 != 0) {
      if (*(_DWORD*)(a1 + 144) == -1) {
        goto LABEL_38;
      }
    }
    else {
      v10 = *(_DWORD*)(a1 + 144);
      if (v10 == -1) {
        goto LABEL_38;
      }
      result = BaseNx_286270(*(_QWORD*)(a1 + 264) + 24LL, v10,
                             *(_QWORD*)(a1 + 256), 4u, 0);
      if ((result & 1) == 0) {
        goto LABEL_49;
      }
      result = SoundArchivePlayer_288010((_QWORD*)(*(_QWORD*)(a1 + 264) + 24LL),
                                         v10);
      v9 = result;
      *(_QWORD*)(a1 + 152) = result;
      if (*(_DWORD*)(a1 + 144) == -1) {
        goto LABEL_38;
      }
    }
    if (v9 != 0) {
      result = SoundArchivePlayer_2a5520((__int64)v26_.v26, (_BYTE*)&v30 + 2,
                                         v9, *(_QWORD*)(a1 + 72),
                                         *(_QWORD*)(a1 + 80) + 24LL);
      if ((_DWORD)result == 2 || (_DWORD)result == -1) {
        result = (__int64)nn_atk_detail_288140(*(_QWORD*)(a1 + 264) + 24LL,
                                               *(_QWORD*)(a1 + 152),
                                               *(_QWORD*)(a1 + 256));
        if ((result & 1) == 0) {
          goto LABEL_49;
        }
        result = SoundArchivePlayer_2a5520(
            (__int64)v26_.v26, (_BYTE*)&v30 + 2, *(_QWORD*)(a1 + 152),
            *(_QWORD*)(a1 + 72), *(_QWORD*)(a1 + 264) + 24LL);
      }
    }
  LABEL_38:
    v11 = *(_QWORD*)(a1 + 168);
    if (v11 != 0) {
      if (*(_DWORD*)(a1 + 160) == -1) {
      LABEL_48:
        v13 = *(_QWORD*)(a1 + 104);
        v14 = *(_QWORD*)(a1 + 120);
        v15 = *(_QWORD*)(a1 + 136);
        *(_WORD*)(a1 + 248) = v30;
        v16 = *(_QWORD*)(a1 + 152);
        *(_QWORD*)(a1 + 176) = v13;
        *(_QWORD*)(a1 + 184) = v14;
        v17 = v24_.v25;
        v18 = v22_.v23;
        *(_QWORD*)(a1 + 192) = v15;
        *(_QWORD*)(a1 + 200) = v16;
        v19 = v26_.v27;
        v20 = v28_.v29;
        *(_QWORD*)(a1 + 224) = v17;
        *(_QWORD*)(a1 + 232) = v19;
        LOBYTE(v17) = BYTE2(v30);
        *(_QWORD*)(a1 + 240) = v20;
        *(_BYTE*)(a1 + 250) = v17;
        *(_QWORD*)(a1 + 208) = *(_QWORD*)(a1 + 168);
        *(_QWORD*)(a1 + 216) = v18;
        *(_BYTE*)(a1 + 251) = HIBYTE(v30);
        v21 = 1;
      LABEL_50:
        *(_BYTE*)(*(_QWORD*)(a1 + 256) + 40LL) = 2;
        *(_BYTE*)(a1 + 272) = v21;
        return result;
      }
    }
    else {
      v12 = *(_DWORD*)(a1 + 160);
      if (v12 == -1) {
        goto LABEL_48;
      }
      result = BaseNx_286270(*(_QWORD*)(a1 + 264) + 24LL, v12,
                             *(_QWORD*)(a1 + 256), 4u, 0);
      if ((result & 1) == 0) {
        goto LABEL_49;
      }
      result = SoundArchivePlayer_288010((_QWORD*)(*(_QWORD*)(a1 + 264) + 24LL),
                                         v12);
      v11 = result;
      *(_QWORD*)(a1 + 168) = result;
      if (*(_DWORD*)(a1 + 160) == -1) {
        goto LABEL_48;
      }
    }
    if (v11 == 0) {
      goto LABEL_48;
    }
    result = SoundArchivePlayer_2a5520((__int64)v28_.v28, (_BYTE*)&v30 + 3, v11,
                                       *(_QWORD*)(a1 + 72),
                                       *(_QWORD*)(a1 + 80) + 24LL);
    if ((_DWORD)result != 2 && (_DWORD)result != -1) {
      goto LABEL_48;
    }
    result = (__int64)nn_atk_detail_288140(*(_QWORD*)(a1 + 264) + 24LL,
                                           *(_QWORD*)(a1 + 168),
                                           *(_QWORD*)(a1 + 256));
    if ((result & 1) != 0) {
      result = SoundArchivePlayer_2a5520(
          (__int64)v28_.v28, (_BYTE*)&v30 + 3, *(_QWORD*)(a1 + 168),
          *(_QWORD*)(a1 + 72), *(_QWORD*)(a1 + 264) + 24LL);
      goto LABEL_48;
    }
  LABEL_49:
    v21 = 0;
    goto LABEL_50;
  }
  result = BaseNx_286270(*(_QWORD*)(a1 + 264) + 24LL, v5, *(_QWORD*)(a1 + 256),
                         1u, 0);
  if ((result & 1) != 0) {
    result =
        SoundArchivePlayer_288010((_QWORD*)(*(_QWORD*)(a1 + 264) + 24LL), v5);
    *(_QWORD*)(a1 + 104) = result;
    goto LABEL_2;
  }
  *(_BYTE*)(*(_QWORD*)(a1 + 256) + 40LL) = 2;
  *(_BYTE*)(a1 + 272) = 0;
  return result;
}

#pragma GCC visibility pop
