#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 game_HashString(_QWORD);
extern _UNKNOWN GameData_1a90df5;
extern _UNKNOWN GameData_1a9ca3f;
extern _UNKNOWN GameData_1aa0aa7;
extern _UNKNOWN GameData_1aa8580;
extern _UNKNOWN GameData_1aafff7;
extern _UNKNOWN GameData_1ab3bd9;
extern _UNKNOWN GameData_1ada589;
extern _UNKNOWN GameData_1af900a;
extern __int64 game_GameModeData_instance_;
float GameRoutine_143f400(_QWORD);
__int64 VolunteerArgs_9582f0(__int64 a1, char a2);
__int64 VolunteerArgs_958d60(__int64 a1, char a2);

__int64 VolunteerArgs_9582f0(__int64 a1, char a2)
{
  float v2;
  unsigned __int64 v3;
  _QWORD* v4;
  unsigned __int64 v5;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  _QWORD* v10;
  unsigned __int64 v11;
  unsigned __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  _QWORD* v16;
  unsigned __int64 v17;
  unsigned __int64 v19;
  unsigned __int64 v20;
  _QWORD* v21;
  _QWORD* v22;
  unsigned __int64 v23;
  __int64 v24;
  _QWORD* v25;
  unsigned __int64 v26;
  __int64 v27;
  _QWORD* v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64 v31;
  _QWORD v33[2];

  v2 = 0.0;
  switch (a2) {
  case 1:
    v15 = game_HashString(&GameData_1a9ca3f);
    if (v15 != 0 && game_GameModeData_instance_ != 0) {
      v16 = *(_QWORD**)(game_GameModeData_instance_ + 48);
      v17 = v16[2];
      if (v17 != 0 && v16[4] != 0) {
        v19 = v17 - 1;
        if ((v17 & (v17 - 1)) != 0) {
          v20 = v15;
          if (v15 >= v17) {
            v20 = v15 % v17;
          }
        }
        else {
          v20 = v19 & v15;
        }
        v25 = *(_QWORD**)(v16[1] + 8 * v20);
        if (v25 != nullptr) {
          v22 = (_QWORD*)*v25;
          if (v22 != nullptr) {
            if ((v17 & v19) == 0) {
              while (1) {
                v27 = v22[1];
                if (v15 == v27) {
                  if (v22[2] == v15) {
                    goto LABEL_82;
                  }
                }
                else if ((v27 & v19) != v20) {
                  goto LABEL_84;
                }
                v22 = (_QWORD*)*v22;
                if (v22 == nullptr) {
                  goto LABEL_84;
                }
              }
            }
            do {
              v26 = v22[1];
              if (v15 == v26) {
                if (v22[2] == v15) {
                LABEL_82:
                  v31 = v22[3];
                  if (v31 != 0) {
                    v2 = (float)*(int*)(v31 + 32);
                  }
                  goto LABEL_84;
                }
              }
              else {
                if (v26 >= v17) {
                  v26 %= v17;
                }
                if (v26 != v20) {
                  goto LABEL_84;
                }
              }
              v22 = (_QWORD*)*v22;
            } while (v22 != nullptr);
          }
        }
      }
    }
    break;
  case 2:
    v9 = game_HashString(&GameData_1ab3bd9);
    if (v9 != 0 && game_GameModeData_instance_ != 0) {
      v10 = *(_QWORD**)(game_GameModeData_instance_ + 48);
      v11 = v10[2];
      if (v11 != 0 && v10[4] != 0) {
        v13 = v11 - 1;
        if ((v11 & (v11 - 1)) != 0) {
          v14 = v9;
          if (v9 >= v11) {
            v14 = v9 % v11;
          }
        }
        else {
          v14 = v13 & v9;
        }
        v21 = *(_QWORD**)(v10[1] + 8 * v14);
        if (v21 != nullptr) {
          v22 = (_QWORD*)*v21;
          if (v22 != nullptr) {
            if ((v11 & v13) == 0) {
              while (1) {
                v24 = v22[1];
                if (v9 == v24) {
                  if (v22[2] == v9) {
                    goto LABEL_82;
                  }
                }
                else if ((v24 & v13) != v14) {
                  goto LABEL_84;
                }
                v22 = (_QWORD*)*v22;
                if (v22 == nullptr) {
                  goto LABEL_84;
                }
              }
            }
            do {
              v23 = v22[1];
              if (v9 == v23) {
                if (v22[2] == v9) {
                  goto LABEL_82;
                }
              }
              else {
                if (v23 >= v11) {
                  v23 %= v11;
                }
                if (v23 != v14) {
                  goto LABEL_84;
                }
              }
              v22 = (_QWORD*)*v22;
            } while (v22 != nullptr);
          }
        }
      }
    }
    break;
  case 3:
    v3 = game_HashString(&GameData_1a90df5);
    if (v3 != 0 && game_GameModeData_instance_ != 0) {
      v4 = *(_QWORD**)(game_GameModeData_instance_ + 48);
      v5 = v4[2];
      if (v5 != 0 && v4[4] != 0) {
        v7 = v5 - 1;
        if ((v5 & (v5 - 1)) != 0) {
          v8 = v3;
          if (v3 >= v5) {
            v8 = v3 % v5;
          }
        }
        else {
          v8 = v7 & v3;
        }
        v28 = *(_QWORD**)(v4[1] + 8 * v8);
        if (v28 != nullptr) {
          v22 = (_QWORD*)*v28;
          if (v22 != nullptr) {
            if ((v5 & v7) == 0) {
              while (1) {
                v30 = v22[1];
                if (v3 == v30) {
                  if (v22[2] == v3) {
                    goto LABEL_82;
                  }
                }
                else if ((v30 & v7) != v8) {
                  goto LABEL_84;
                }
                v22 = (_QWORD*)*v22;
                if (v22 == nullptr) {
                  goto LABEL_84;
                }
              }
            }
            do {
              v29 = v22[1];
              if (v3 == v29) {
                if (v22[2] == v3) {
                  goto LABEL_82;
                }
              }
              else {
                if (v29 >= v5) {
                  v29 %= v5;
                }
                if (v29 != v8) {
                  goto LABEL_84;
                }
              }
              v22 = (_QWORD*)*v22;
            } while (v22 != nullptr);
          }
        }
      }
    }
    break;
  default:
    break;
  }

LABEL_84:
  v33[1] = &GameData_1aa0aa7;
  v33[0] = game_HashString(&GameData_1aa0aa7);
  return (unsigned int)(int)(float)(GameRoutine_143f400(v33) * v2);
}

__int64 VolunteerArgs_958d60(__int64 a1, char a2)
{
  unsigned __int64 v3;
  _QWORD* v5;
  unsigned __int64 v6;
  unsigned __int64 v8;
  unsigned __int64 v9;
  _QWORD* v10;
  _QWORD* v11;
  int v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  _QWORD* v18;
  unsigned __int64 v19;
  unsigned __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  _QWORD* v24;
  unsigned __int64 v25;
  unsigned __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  _QWORD* v30;
  unsigned __int64 v31;
  unsigned __int64 v34;
  unsigned __int64 v35;
  _QWORD* v36;
  unsigned __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  __int64 v42;

  v3 = game_HashString(&GameData_1aa8580);
  if (v3 == 0 || game_GameModeData_instance_ == 0) {
    goto LABEL_31;
  }
  v5 = *(_QWORD**)(game_GameModeData_instance_ + 48);
  v6 = v5[2];
  if (v6 == 0 || v5[4] == 0) {
    goto LABEL_31;
  }
  v8 = v6 - 1;
  if ((v6 & (v6 - 1)) != 0) {
    v9 = v3;
    if (v3 >= v6) {
      v9 = v3 % v6;
    }
  }
  else {
    v9 = v8 & v3;
  }
  v10 = *(_QWORD**)(v5[1] + 8 * v9);
  if (v10 == nullptr) {
    goto LABEL_31;
  }
  v11 = (_QWORD*)*v10;
  if (v11 == nullptr) {
    goto LABEL_31;
  }
  if ((v6 & v8) == 0) {
    while (1) {
      v14 = v11[1];
      if (v3 == v14) {
        if (v11[2] == v3) {
          goto LABEL_29;
        }
      }
      else if ((v14 & v8) != v9) {
        goto LABEL_31;
      }
      v11 = (_QWORD*)*v11;
      v12 = 0;
      if (v11 == nullptr) {
        goto LABEL_32;
      }
    }
  }
  while (1) {
    v13 = v11[1];
    if (v3 == v13) {
      break;
    }
    if (v13 >= v6) {
      v13 %= v6;
    }
    if (v13 != v9) {
      goto LABEL_31;
    }
  LABEL_18:
    v11 = (_QWORD*)*v11;
    v12 = 0;
    if (v11 == nullptr) {
      goto LABEL_32;
    }
  }
  if (v11[2] != v3) {
    goto LABEL_18;
  }

LABEL_29:
  v15 = v11[3];
  if (v15 != 0) {
    v12 = *(_DWORD*)(v15 + 32);
    goto LABEL_32;
  }

LABEL_31:
  v12 = 0;

LABEL_32:
  if (a2 == 1) {
    v29 = game_HashString(&GameData_1ada589);
    LODWORD(v17) = 0;
    if (v29 == 0 || game_GameModeData_instance_ == 0) {
      return (unsigned int)(v17 + v12);
    }
    v30 = *(_QWORD**)(game_GameModeData_instance_ + 48);
    v31 = v30[2];
    if (v31 != 0 && v30[4] != 0) {
      v34 = v31 - 1;
      if ((v31 & (v31 - 1)) != 0) {
        v35 = v29;
        if (v29 >= v31) {
          v35 = v29 % v31;
        }
      }
      else {
        v35 = v34 & v29;
      }
      v17 = *(_QWORD*)(v30[1] + 8 * v35);
      if (v17 == 0) {
        return (unsigned int)(v17 + v12);
      }
      v36 = *(_QWORD**)v17;
      if (*(_QWORD*)v17 != 0) {
        if ((v31 & v34) == 0) {
          while (1) {
            v40 = v36[1];
            if (v29 == v40) {
              if (v36[2] == v29) {
                goto LABEL_118;
              }
            }
            else if ((v40 & v34) != v35) {
              goto LABEL_60;
            }
            v36 = (_QWORD*)*v36;
            LODWORD(v17) = 0;
            if (v36 == nullptr) {
              return (unsigned int)(v17 + v12);
            }
          }
        }
        while (1) {
          v39 = v36[1];
          if (v29 == v39) {
            if (v36[2] == v29) {
            LABEL_118:
              v17 = v36[3];
              if (v17 != 0) {
                LODWORD(v17) = *(_DWORD*)(v17 + 32);
              }
              return (unsigned int)(v17 + v12);
            }
          }
          else {
            if (v39 >= v31) {
              v39 %= v31;
            }
            if (v39 != v35) {
              goto LABEL_60;
            }
          }
          v36 = (_QWORD*)*v36;
          LODWORD(v17) = 0;
          if (v36 == nullptr) {
            return (unsigned int)(v17 + v12);
          }
        }
      }
    }
    goto LABEL_60;
  }
  if (a2 == 2) {
    v23 = game_HashString(&GameData_1af900a);
    LODWORD(v17) = 0;
    if (v23 == 0 || game_GameModeData_instance_ == 0) {
      return (unsigned int)(v17 + v12);
    }
    v24 = *(_QWORD**)(game_GameModeData_instance_ + 48);
    v25 = v24[2];
    if (v25 != 0 && v24[4] != 0) {
      v27 = v25 - 1;
      if ((v25 & (v25 - 1)) != 0) {
        v28 = v23;
        if (v23 >= v25) {
          v28 = v23 % v25;
        }
      }
      else {
        v28 = v27 & v23;
      }
      v17 = *(_QWORD*)(v24[1] + 8 * v28);
      if (v17 != 0) {
        v36 = *(_QWORD**)v17;
        if (*(_QWORD*)v17 != 0) {
          if ((v25 & v27) == 0) {
            while (1) {
              v38 = v36[1];
              if (v23 == v38) {
                if (v36[2] == v23) {
                  goto LABEL_118;
                }
              }
              else if ((v38 & v27) != v28) {
                goto LABEL_60;
              }
              v36 = (_QWORD*)*v36;
              LODWORD(v17) = 0;
              if (v36 == nullptr) {
                return (unsigned int)(v17 + v12);
              }
            }
          }
          while (1) {
            v37 = v36[1];
            if (v23 == v37) {
              if (v36[2] == v23) {
                goto LABEL_118;
              }
            }
            else {
              if (v37 >= v25) {
                v37 %= v25;
              }
              if (v37 != v28) {
                goto LABEL_60;
              }
            }
            v36 = (_QWORD*)*v36;
            LODWORD(v17) = 0;
            if (v36 == nullptr) {
              return (unsigned int)(v17 + v12);
            }
          }
        }
        goto LABEL_60;
      }
      return (unsigned int)(v17 + v12);
    }
    goto LABEL_60;
  }
  if (a2 != 3) {
    return 0;
  }
  v16 = game_HashString(&GameData_1aafff7);
  LODWORD(v17) = 0;
  if (v16 == 0 || game_GameModeData_instance_ == 0) {
    return (unsigned int)(v17 + v12);
  }
  v18 = *(_QWORD**)(game_GameModeData_instance_ + 48);
  v19 = v18[2];
  if (v19 == 0 || v18[4] == 0) {
  LABEL_60:
    LODWORD(v17) = 0;
    return (unsigned int)(v17 + v12);
  }
  v21 = v19 - 1;
  if ((v19 & (v19 - 1)) != 0) {
    v22 = v16;
    if (v16 >= v19) {
      v22 = v16 % v19;
    }
  }
  else {
    v22 = v21 & v16;
  }
  v17 = *(_QWORD*)(v18[1] + 8 * v22);
  if (v17 != 0) {
    v36 = *(_QWORD**)v17;
    if (*(_QWORD*)v17 != 0) {
      if ((v19 & v21) == 0) {
        while (1) {
          v42 = v36[1];
          if (v16 == v42) {
            if (v36[2] == v16) {
              goto LABEL_118;
            }
          }
          else if ((v42 & v21) != v22) {
            goto LABEL_60;
          }
          v36 = (_QWORD*)*v36;
          LODWORD(v17) = 0;
          if (v36 == nullptr) {
            return (unsigned int)(v17 + v12);
          }
        }
      }
      while (1) {
        v41 = v36[1];
        if (v16 == v41) {
          if (v36[2] == v16) {
            goto LABEL_118;
          }
        }
        else {
          if (v41 >= v19) {
            v41 %= v19;
          }
          if (v41 != v22) {
            goto LABEL_60;
          }
        }
        v36 = (_QWORD*)*v36;
        LODWORD(v17) = 0;
        if (v36 == nullptr) {
          return (unsigned int)(v17 + v12);
        }
      }
    }
    goto LABEL_60;
  }
  return (unsigned int)(v17 + v12);
}

#pragma GCC visibility pop
