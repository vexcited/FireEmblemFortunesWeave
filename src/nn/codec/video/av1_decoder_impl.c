#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

unsigned int* nn_sm_detail_CloseSession(unsigned int* result);
unsigned int* av1_decoder_330470(__int64 a1);

unsigned int* av1_decoder_330470(__int64 a1)
{
  unsigned int* result;
  unsigned int* v3;

  if (*(_BYTE*)(a1 + 176) == 1) {
    nn_sm_detail_CloseSession((unsigned int*)(a1 + 180));
    if (*(_BYTE*)(a1 + 168) != 1) {
    LABEL_3:
      if (*(_BYTE*)(a1 + 160) != 1) {
        goto LABEL_4;
      }
      goto LABEL_10;
    }
  }
  else if (*(_BYTE*)(a1 + 168) != 1) {
    goto LABEL_3;
  }
  nn_sm_detail_CloseSession((unsigned int*)(a1 + 172));
  if (*(_BYTE*)(a1 + 160) != 1) {
  LABEL_4:
    if (*(_BYTE*)(a1 + 152) != 1) {
      goto LABEL_5;
    }
    goto LABEL_11;
  }
LABEL_10:
  nn_sm_detail_CloseSession((unsigned int*)(a1 + 164));
  if (*(_BYTE*)(a1 + 152) != 1) {
  LABEL_5:
    if (*(_BYTE*)(a1 + 144) != 1) {
      goto LABEL_6;
    }
  LABEL_12:
    nn_sm_detail_CloseSession((unsigned int*)(a1 + 148));
    if (*(_BYTE*)(a1 + 136) != 1) {
      goto LABEL_7;
    }
    goto LABEL_13;
  }
LABEL_11:
  nn_sm_detail_CloseSession((unsigned int*)(a1 + 156));
  if (*(_BYTE*)(a1 + 144) == 1) {
    goto LABEL_12;
  }
LABEL_6:
  if (*(_BYTE*)(a1 + 136) != 1) {
  LABEL_7:
    result = (unsigned int*)(a1 + 4);
    goto LABEL_14;
  }
LABEL_13:
  nn_sm_detail_CloseSession((unsigned int*)(a1 + 140));
  result = (unsigned int*)(a1 + 4);
LABEL_14:
  v3 = result;
  if (*((_BYTE*)result + 120) == 1) {
    result = nn_sm_detail_CloseSession(result + 31);
    if (*((_BYTE*)v3 + 112) != 1) {
    LABEL_16:
      if (*((_BYTE*)v3 + 104) != 1) {
        goto LABEL_17;
      }
      goto LABEL_33;
    }
  }
  else if (*((_BYTE*)result + 112) != 1) {
    goto LABEL_16;
  }
  result = nn_sm_detail_CloseSession(v3 + 29);
  if (*((_BYTE*)v3 + 104) != 1) {
  LABEL_17:
    if (*((_BYTE*)v3 + 96) != 1) {
      goto LABEL_18;
    }
    goto LABEL_34;
  }
LABEL_33:
  result = nn_sm_detail_CloseSession(v3 + 27);
  if (*((_BYTE*)v3 + 96) != 1) {
  LABEL_18:
    if (*((_BYTE*)v3 + 88) != 1) {
      goto LABEL_19;
    }
    goto LABEL_35;
  }
LABEL_34:
  result = nn_sm_detail_CloseSession(v3 + 25);
  if (*((_BYTE*)v3 + 88) != 1) {
  LABEL_19:
    if (*((_BYTE*)v3 + 80) != 1) {
      goto LABEL_20;
    }
    goto LABEL_36;
  }
LABEL_35:
  result = nn_sm_detail_CloseSession(v3 + 23);
  if (*((_BYTE*)v3 + 80) != 1) {
  LABEL_20:
    if (*((_BYTE*)v3 + 72) != 1) {
      goto LABEL_21;
    }
    goto LABEL_37;
  }
LABEL_36:
  result = nn_sm_detail_CloseSession(v3 + 21);
  if (*((_BYTE*)v3 + 72) != 1) {
  LABEL_21:
    if (*((_BYTE*)v3 + 64) != 1) {
      goto LABEL_22;
    }
    goto LABEL_38;
  }
LABEL_37:
  result = nn_sm_detail_CloseSession(v3 + 19);
  if (*((_BYTE*)v3 + 64) != 1) {
  LABEL_22:
    if (*((_BYTE*)v3 + 56) != 1) {
      goto LABEL_23;
    }
    goto LABEL_39;
  }
LABEL_38:
  result = nn_sm_detail_CloseSession(v3 + 17);
  if (*((_BYTE*)v3 + 56) != 1) {
  LABEL_23:
    if (*((_BYTE*)v3 + 48) != 1) {
      goto LABEL_24;
    }
    goto LABEL_40;
  }
LABEL_39:
  result = nn_sm_detail_CloseSession(v3 + 15);
  if (*((_BYTE*)v3 + 48) != 1) {
  LABEL_24:
    if (*((_BYTE*)v3 + 40) != 1) {
      goto LABEL_25;
    }
    goto LABEL_41;
  }
LABEL_40:
  result = nn_sm_detail_CloseSession(v3 + 13);
  if (*((_BYTE*)v3 + 40) != 1) {
  LABEL_25:
    if (*((_BYTE*)v3 + 32) != 1) {
      goto LABEL_26;
    }
    goto LABEL_42;
  }
LABEL_41:
  result = nn_sm_detail_CloseSession(v3 + 11);
  if (*((_BYTE*)v3 + 32) != 1) {
  LABEL_26:
    if (*((_BYTE*)v3 + 24) != 1) {
      goto LABEL_27;
    }
    goto LABEL_43;
  }
LABEL_42:
  result = nn_sm_detail_CloseSession(v3 + 9);
  if (*((_BYTE*)v3 + 24) != 1) {
  LABEL_27:
    if (*((_BYTE*)v3 + 16) != 1) {
      goto LABEL_28;
    }
    goto LABEL_44;
  }
LABEL_43:
  result = nn_sm_detail_CloseSession(v3 + 7);
  if (*((_BYTE*)v3 + 16) != 1) {
  LABEL_28:
    if (*((_BYTE*)v3 + 8) != 1) {
      goto LABEL_29;
    }
    goto LABEL_45;
  }
LABEL_44:
  result = nn_sm_detail_CloseSession(v3 + 5);
  if (*((_BYTE*)v3 + 8) != 1) {
  LABEL_29:
    if (*(_BYTE*)v3 != 1) {
      return result;
    }
    return nn_sm_detail_CloseSession(v3 + 1);
  }
LABEL_45:
  result = nn_sm_detail_CloseSession(v3 + 3);
  if (*(_BYTE*)v3 == 1) {
    return nn_sm_detail_CloseSession(v3 + 1);
  }
  return result;
}

#pragma GCC visibility pop
