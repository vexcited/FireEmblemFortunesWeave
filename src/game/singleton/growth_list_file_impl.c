#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 game_HashString(_QWORD);
extern _UNKNOWN GameData_1a86c13;
extern _UNKNOWN GameData_1a9e087;
extern _UNKNOWN GameData_1aa215f;
extern _UNKNOWN GameData_1aa9c13;
extern _UNKNOWN GameData_1af66f4;
extern __int64 GameData_21c9b30;
unsigned __int64 GrowthListFile_127c740(unsigned __int64 result);

unsigned __int64 GrowthListFile_127c740(unsigned __int64 result)
{
  int v1;
  unsigned __int64 v2;
  unsigned __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  _QWORD* v27;
  _QWORD* v28;
  unsigned __int64 v29;
  __int64 v30;
  _QWORD* v31;
  unsigned __int64 v32;
  __int64 v33;
  _QWORD* v34;
  unsigned __int64 v35;
  __int64 v36;
  _QWORD* v37;
  unsigned __int64 v38;
  __int64 v39;
  _QWORD* v40;
  unsigned __int64 v41;
  __int64 v42;

  if (result != 0) {
    v1 = *(unsigned __int8*)(result + 32);
    result = 0;
    if (v1 <= 2) {
      if (v1 == 1) {
        result = game_HashString(&GameData_1af66f4);
        if (result == 0) {
          return result;
        }
        v22 = *(_QWORD*)(GameData_21c9b30 + 96);
        if (v22 != 0 && *(_QWORD*)(GameData_21c9b30 + 112) != 0) {
          v24 = v22 - 1;
          v25 = result;
          if ((v22 & (v22 - 1)) != 0) {
            v26 = result;
            if (result >= v22) {
              v26 = result % v22;
            }
          }
          else {
            v26 = v24 & result;
          }
          v34 = *(_QWORD**)(*(_QWORD*)(GameData_21c9b30 + 88) + 8 * v26);
          if (v34 != nullptr) {
            v28 = (_QWORD*)*v34;
            if (v28 != nullptr) {
              if ((v22 & v24) == 0) {
                while (1) {
                  v36 = v28[1];
                  if (v36 == v25) {
                    if (v28[2] == v25) {
                      return v28[3];
                    }
                  }
                  else if ((v36 & v24) != v26) {
                    return 0;
                  }
                  v28 = (_QWORD*)*v28;
                  result = 0;
                  if (v28 == nullptr) {
                    return result;
                  }
                }
              }
              while (1) {
                v35 = v28[1];
                if (v35 == v25) {
                  if (v28[2] == v25) {
                    return v28[3];
                  }
                }
                else {
                  if (v35 >= v22) {
                    v35 %= v22;
                  }
                  if (v35 != v26) {
                    return 0;
                  }
                }
                v28 = (_QWORD*)*v28;
                result = 0;
                if (v28 == nullptr) {
                  return result;
                }
              }
            }
          }
        }
        return 0;
      }
      if (v1 == 2) {
        result = game_HashString(&GameData_1aa215f);
        if (result != 0) {
          v7 = *(_QWORD*)(GameData_21c9b30 + 96);
          if (v7 != 0 && *(_QWORD*)(GameData_21c9b30 + 112) != 0) {
            v9 = v7 - 1;
            v10 = result;
            if ((v7 & (v7 - 1)) != 0) {
              v11 = result;
              if (result >= v7) {
                v11 = result % v7;
              }
            }
            else {
              v11 = v9 & result;
            }
            v40 = *(_QWORD**)(*(_QWORD*)(GameData_21c9b30 + 88) + 8 * v11);
            if (v40 != nullptr) {
              v28 = (_QWORD*)*v40;
              if (v28 != nullptr) {
                if ((v7 & v9) == 0) {
                  while (1) {
                    v42 = v28[1];
                    if (v42 == v10) {
                      if (v28[2] == v10) {
                        return v28[3];
                      }
                    }
                    else if ((v42 & v9) != v11) {
                      return 0;
                    }
                    v28 = (_QWORD*)*v28;
                    result = 0;
                    if (v28 == nullptr) {
                      return result;
                    }
                  }
                }
                while (1) {
                  v41 = v28[1];
                  if (v41 == v10) {
                    if (v28[2] == v10) {
                      return v28[3];
                    }
                  }
                  else {
                    if (v41 >= v7) {
                      v41 %= v7;
                    }
                    if (v41 != v11) {
                      return 0;
                    }
                  }
                  v28 = (_QWORD*)*v28;
                  result = 0;
                  if (v28 == nullptr) {
                    return result;
                  }
                }
              }
            }
          }
          return 0;
        }
      }
    }
    else {
      switch (v1) {
      case 3:
        result = game_HashString(&GameData_1aa9c13);
        if (result == 0) {
          return result;
        }
        v12 = *(_QWORD*)(GameData_21c9b30 + 96);
        if (v12 != 0 && *(_QWORD*)(GameData_21c9b30 + 112) != 0) {
          v14 = v12 - 1;
          v15 = result;
          if ((v12 & (v12 - 1)) != 0) {
            v16 = result;
            if (result >= v12) {
              v16 = result % v12;
            }
          }
          else {
            v16 = v14 & result;
          }
          v27 = *(_QWORD**)(*(_QWORD*)(GameData_21c9b30 + 88) + 8 * v16);
          if (v27 != nullptr) {
            v28 = (_QWORD*)*v27;
            if (v28 != nullptr) {
              if ((v12 & v14) == 0) {
                while (1) {
                  v30 = v28[1];
                  if (v30 == v15) {
                    if (v28[2] == v15) {
                      return v28[3];
                    }
                  }
                  else if ((v30 & v14) != v16) {
                    return 0;
                  }
                  v28 = (_QWORD*)*v28;
                  result = 0;
                  if (v28 == nullptr) {
                    return result;
                  }
                }
              }
              while (1) {
                v29 = v28[1];
                if (v29 == v15) {
                  if (v28[2] == v15) {
                    return v28[3];
                  }
                }
                else {
                  if (v29 >= v12) {
                    v29 %= v12;
                  }
                  if (v29 != v16) {
                    return 0;
                  }
                }
                v28 = (_QWORD*)*v28;
                result = 0;
                if (v28 == nullptr) {
                  return result;
                }
              }
            }
          }
        }
        return 0;
      case 4:
        result = game_HashString(&GameData_1a9e087);
        if (result == 0) {
          return result;
        }
        v17 = *(_QWORD*)(GameData_21c9b30 + 96);
        if (v17 != 0 && *(_QWORD*)(GameData_21c9b30 + 112) != 0) {
          v19 = v17 - 1;
          v20 = result;
          if ((v17 & (v17 - 1)) != 0) {
            v21 = result;
            if (result >= v17) {
              v21 = result % v17;
            }
          }
          else {
            v21 = v19 & result;
          }
          v31 = *(_QWORD**)(*(_QWORD*)(GameData_21c9b30 + 88) + 8 * v21);
          if (v31 != nullptr) {
            v28 = (_QWORD*)*v31;
            if (v28 != nullptr) {
              if ((v17 & v19) == 0) {
                while (1) {
                  v33 = v28[1];
                  if (v33 == v20) {
                    if (v28[2] == v20) {
                      return v28[3];
                    }
                  }
                  else if ((v33 & v19) != v21) {
                    return 0;
                  }
                  v28 = (_QWORD*)*v28;
                  result = 0;
                  if (v28 == nullptr) {
                    return result;
                  }
                }
              }
              while (1) {
                v32 = v28[1];
                if (v32 == v20) {
                  if (v28[2] == v20) {
                    return v28[3];
                  }
                }
                else {
                  if (v32 >= v17) {
                    v32 %= v17;
                  }
                  if (v32 != v21) {
                    return 0;
                  }
                }
                v28 = (_QWORD*)*v28;
                result = 0;
                if (v28 == nullptr) {
                  return result;
                }
              }
            }
          }
        }
        return 0;
      case 5:
        result = game_HashString(&GameData_1a86c13);
        if (result != 0) {
          v2 = *(_QWORD*)(GameData_21c9b30 + 96);
          if (v2 != 0 && *(_QWORD*)(GameData_21c9b30 + 112) != 0) {
            v4 = v2 - 1;
            v5 = result;
            if ((v2 & (v2 - 1)) != 0) {
              v6 = result;
              if (result >= v2) {
                v6 = result % v2;
              }
            }
            else {
              v6 = v4 & result;
            }
            v37 = *(_QWORD**)(*(_QWORD*)(GameData_21c9b30 + 88) + 8 * v6);
            if (v37 != nullptr) {
              v28 = (_QWORD*)*v37;
              if (v28 != nullptr) {
                if ((v2 & v4) == 0) {
                  while (1) {
                    v39 = v28[1];
                    if (v39 == v5) {
                      if (v28[2] == v5) {
                        return v28[3];
                      }
                    }
                    else if ((v39 & v4) != v6) {
                      return 0;
                    }
                    v28 = (_QWORD*)*v28;
                    result = 0;
                    if (v28 == nullptr) {
                      return result;
                    }
                  }
                }
                while (1) {
                  v38 = v28[1];
                  if (v38 == v5) {
                    if (v28[2] == v5) {
                      return v28[3];
                    }
                  }
                  else {
                    if (v38 >= v2) {
                      v38 %= v2;
                    }
                    if (v38 != v6) {
                      return 0;
                    }
                  }
                  v28 = (_QWORD*)*v28;
                  result = 0;
                  if (v28 == nullptr) {
                    return result;
                  }
                }
              }
            }
          }
          return 0;
        }
        break;
      default:
        break;
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
