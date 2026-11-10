#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_os_ClearEvent_plt(_QWORD);
__int64 nn_os_FinalizeEvent_plt(_QWORD);
__int64 nn_os_InitializeEvent_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_os_SdkRecursiveMutexType_Lock_plt(void* this_);
__int64 nn_movie_detail_EventManager_AcquireEvent(__int64 a1, __int64 a2);
__int64 nn_movie_detail_EventManager_ReleaseEvent(__int64 a1, __int64 a2);

__int64 nn_movie_detail_EventManager_AcquireEvent(__int64 a1, __int64 a2)
{
  unsigned int v4;
  __int64 v5;

  nn_os_SdkRecursiveMutexType_Lock_plt((void*)a1);
  if (*(_DWORD*)(a1 + 520) != 64) {
    nn_os_InitializeEvent_plt(a2, 0, 1);
    v5 = *(_QWORD*)(a1 + 8);
    if (v5 != 0) {
      if (*(_QWORD*)(a1 + 16) != 0) {
        if (*(_QWORD*)(a1 + 24) != 0) {
          if (*(_QWORD*)(a1 + 32) != 0) {
            if (*(_QWORD*)(a1 + 40) != 0) {
              if (*(_QWORD*)(a1 + 48) != 0) {
                if (*(_QWORD*)(a1 + 56) != 0) {
                  if (*(_QWORD*)(a1 + 64) != 0) {
                    if (*(_QWORD*)(a1 + 72) != 0) {
                      if (*(_QWORD*)(a1 + 80) != 0) {
                        if (*(_QWORD*)(a1 + 88) != 0) {
                          if (*(_QWORD*)(a1 + 96) != 0) {
                            if (*(_QWORD*)(a1 + 104) != 0) {
                              if (*(_QWORD*)(a1 + 112) != 0) {
                                if (*(_QWORD*)(a1 + 120) != 0) {
                                  if (*(_QWORD*)(a1 + 128) != 0) {
                                    if (*(_QWORD*)(a1 + 136) != 0) {
                                      if (*(_QWORD*)(a1 + 144) != 0) {
                                        if (*(_QWORD*)(a1 + 152) != 0) {
                                          if (*(_QWORD*)(a1 + 160) != 0) {
                                            if (*(_QWORD*)(a1 + 168) != 0) {
                                              if (*(_QWORD*)(a1 + 176) != 0) {
                                                if (*(_QWORD*)(a1 + 184) != 0) {
                                                  if (*(_QWORD*)(a1 + 192) !=
                                                      0) {
                                                    if (*(_QWORD*)(a1 + 200) !=
                                                        0) {
                                                      if (*(_QWORD*)(a1 +
                                                                     208) !=
                                                          0) {
                                                        if (*(_QWORD*)(a1 +
                                                                       216) !=
                                                            0) {
                                                          if (*(_QWORD*)(a1 +
                                                                         224) !=
                                                              0) {
                                                            if (*(_QWORD*)(a1 +
                                                                           232) !=
                                                                0) {
                                                              if (*(_QWORD*)(a1 +
                                                                             240) !=
                                                                  0) {
                                                                if (*(_QWORD*)(a1 +
                                                                               248) !=
                                                                    0) {
                                                                  if (*(_QWORD*)(a1 +
                                                                                 256) !=
                                                                      0) {
                                                                    if (*(_QWORD*)(a1 +
                                                                                   264) !=
                                                                        0) {
                                                                      if (*(_QWORD*)(a1 +
                                                                                     272) !=
                                                                          0) {
                                                                        if (*(_QWORD*)(a1 +
                                                                                       280) !=
                                                                            0) {
                                                                          if (*(_QWORD*)(a1 +
                                                                                         288) !=
                                                                              0) {
                                                                            if (*(_QWORD*)(a1 +
                                                                                           296) !=
                                                                                0) {
                                                                              if (*(_QWORD*)(a1 +
                                                                                             304) !=
                                                                                  0) {
                                                                                if (*(_QWORD*)(a1 +
                                                                                               312) !=
                                                                                    0) {
                                                                                  if (*(_QWORD*)(a1 +
                                                                                                 320) !=
                                                                                      0) {
                                                                                    if (*(_QWORD*)(a1 +
                                                                                                   328) !=
                                                                                        0) {
                                                                                      if (*(_QWORD*)(a1 +
                                                                                                     336) !=
                                                                                          0) {
                                                                                        if (*(_QWORD*)(a1 +
                                                                                                       344) !=
                                                                                            0) {
                                                                                          if (*(_QWORD*)(a1 +
                                                                                                         352) !=
                                                                                              0) {
                                                                                            if (*(_QWORD*)(a1 +
                                                                                                           360) !=
                                                                                                0) {
                                                                                              if (*(_QWORD*)(a1 +
                                                                                                             368) !=
                                                                                                  0) {
                                                                                                if (*(_QWORD*)(a1 +
                                                                                                               376) !=
                                                                                                    0) {
                                                                                                  if (*(_QWORD*)(a1 +
                                                                                                                 384) !=
                                                                                                      0) {
                                                                                                    if (*(_QWORD*)(a1 +
                                                                                                                   392) !=
                                                                                                        0) {
                                                                                                      if (*(_QWORD*)(a1 +
                                                                                                                     400) !=
                                                                                                          0) {
                                                                                                        if (*(_QWORD*)(a1 +
                                                                                                                       408) !=
                                                                                                            0) {
                                                                                                          if (*(_QWORD*)(a1 +
                                                                                                                         416) !=
                                                                                                              0) {
                                                                                                            if (*(_QWORD*)(a1 +
                                                                                                                           424) !=
                                                                                                                0) {
                                                                                                              if (*(_QWORD*)(a1 +
                                                                                                                             432) !=
                                                                                                                  0) {
                                                                                                                if (*(_QWORD*)(a1 +
                                                                                                                               440) !=
                                                                                                                    0) {
                                                                                                                  if (*(_QWORD*)(a1 +
                                                                                                                                 448) !=
                                                                                                                      0) {
                                                                                                                    if (*(_QWORD*)(a1 +
                                                                                                                                   456) !=
                                                                                                                        0) {
                                                                                                                      if (*(_QWORD*)(a1 +
                                                                                                                                     464) !=
                                                                                                                          0) {
                                                                                                                        if (*(_QWORD*)(a1 +
                                                                                                                                       472) !=
                                                                                                                            0) {
                                                                                                                          if (*(_QWORD*)(a1 +
                                                                                                                                         480) !=
                                                                                                                              0) {
                                                                                                                            if (*(_QWORD*)(a1 +
                                                                                                                                           488) !=
                                                                                                                                0) {
                                                                                                                              if (*(_QWORD*)(a1 +
                                                                                                                                             496) !=
                                                                                                                                  0) {
                                                                                                                                if (*(_QWORD*)(a1 +
                                                                                                                                               504) !=
                                                                                                                                    0) {
                                                                                                                                  if (*(_QWORD*)(a1 +
                                                                                                                                                 512) !=
                                                                                                                                      0) {
                                                                                                                                    v4 =
                                                                                                                                        0;
                                                                                                                                    goto LABEL_132;
                                                                                                                                  }
                                                                                                                                  v5 =
                                                                                                                                      63;
                                                                                                                                }
                                                                                                                                else {
                                                                                                                                  v5 =
                                                                                                                                      62;
                                                                                                                                }
                                                                                                                              }
                                                                                                                              else {
                                                                                                                                v5 =
                                                                                                                                    61;
                                                                                                                              }
                                                                                                                            }
                                                                                                                            else {
                                                                                                                              v5 =
                                                                                                                                  60;
                                                                                                                            }
                                                                                                                          }
                                                                                                                          else {
                                                                                                                            v5 =
                                                                                                                                59;
                                                                                                                          }
                                                                                                                        }
                                                                                                                        else {
                                                                                                                          v5 =
                                                                                                                              58;
                                                                                                                        }
                                                                                                                      }
                                                                                                                      else {
                                                                                                                        v5 =
                                                                                                                            57;
                                                                                                                      }
                                                                                                                    }
                                                                                                                    else {
                                                                                                                      v5 =
                                                                                                                          56;
                                                                                                                    }
                                                                                                                  }
                                                                                                                  else {
                                                                                                                    v5 =
                                                                                                                        55;
                                                                                                                  }
                                                                                                                }
                                                                                                                else {
                                                                                                                  v5 =
                                                                                                                      54;
                                                                                                                }
                                                                                                              }
                                                                                                              else {
                                                                                                                v5 =
                                                                                                                    53;
                                                                                                              }
                                                                                                            }
                                                                                                            else {
                                                                                                              v5 =
                                                                                                                  52;
                                                                                                            }
                                                                                                          }
                                                                                                          else {
                                                                                                            v5 =
                                                                                                                51;
                                                                                                          }
                                                                                                        }
                                                                                                        else {
                                                                                                          v5 =
                                                                                                              50;
                                                                                                        }
                                                                                                      }
                                                                                                      else {
                                                                                                        v5 =
                                                                                                            49;
                                                                                                      }
                                                                                                    }
                                                                                                    else {
                                                                                                      v5 =
                                                                                                          48;
                                                                                                    }
                                                                                                  }
                                                                                                  else {
                                                                                                    v5 =
                                                                                                        47;
                                                                                                  }
                                                                                                }
                                                                                                else {
                                                                                                  v5 =
                                                                                                      46;
                                                                                                }
                                                                                              }
                                                                                              else {
                                                                                                v5 =
                                                                                                    45;
                                                                                              }
                                                                                            }
                                                                                            else {
                                                                                              v5 =
                                                                                                  44;
                                                                                            }
                                                                                          }
                                                                                          else {
                                                                                            v5 =
                                                                                                43;
                                                                                          }
                                                                                        }
                                                                                        else {
                                                                                          v5 =
                                                                                              42;
                                                                                        }
                                                                                      }
                                                                                      else {
                                                                                        v5 =
                                                                                            41;
                                                                                      }
                                                                                    }
                                                                                    else {
                                                                                      v5 =
                                                                                          40;
                                                                                    }
                                                                                  }
                                                                                  else {
                                                                                    v5 =
                                                                                        39;
                                                                                  }
                                                                                }
                                                                                else {
                                                                                  v5 =
                                                                                      38;
                                                                                }
                                                                              }
                                                                              else {
                                                                                v5 =
                                                                                    37;
                                                                              }
                                                                            }
                                                                            else {
                                                                              v5 =
                                                                                  36;
                                                                            }
                                                                          }
                                                                          else {
                                                                            v5 =
                                                                                35;
                                                                          }
                                                                        }
                                                                        else {
                                                                          v5 =
                                                                              34;
                                                                        }
                                                                      }
                                                                      else {
                                                                        v5 = 33;
                                                                      }
                                                                    }
                                                                    else {
                                                                      v5 = 32;
                                                                    }
                                                                  }
                                                                  else {
                                                                    v5 = 31;
                                                                  }
                                                                }
                                                                else {
                                                                  v5 = 30;
                                                                }
                                                              }
                                                              else {
                                                                v5 = 29;
                                                              }
                                                            }
                                                            else {
                                                              v5 = 28;
                                                            }
                                                          }
                                                          else {
                                                            v5 = 27;
                                                          }
                                                        }
                                                        else {
                                                          v5 = 26;
                                                        }
                                                      }
                                                      else {
                                                        v5 = 25;
                                                      }
                                                    }
                                                    else {
                                                      v5 = 24;
                                                    }
                                                  }
                                                  else {
                                                    v5 = 23;
                                                  }
                                                }
                                                else {
                                                  v5 = 22;
                                                }
                                              }
                                              else {
                                                v5 = 21;
                                              }
                                            }
                                            else {
                                              v5 = 20;
                                            }
                                          }
                                          else {
                                            v5 = 19;
                                          }
                                        }
                                        else {
                                          v5 = 18;
                                        }
                                      }
                                      else {
                                        v5 = 17;
                                      }
                                    }
                                    else {
                                      v5 = 16;
                                    }
                                  }
                                  else {
                                    v5 = 15;
                                  }
                                }
                                else {
                                  v5 = 14;
                                }
                              }
                              else {
                                v5 = 13;
                              }
                            }
                            else {
                              v5 = 12;
                            }
                          }
                          else {
                            v5 = 11;
                          }
                        }
                        else {
                          v5 = 10;
                        }
                      }
                      else {
                        v5 = 9;
                      }
                    }
                    else {
                      v5 = 8;
                    }
                  }
                  else {
                    v5 = 7;
                  }
                }
                else {
                  v5 = 6;
                }
              }
              else {
                v5 = 5;
              }
            }
            else {
              v5 = 4;
            }
          }
          else {
            v5 = 3;
          }
        }
        else {
          v5 = 2;
        }
      }
      else {
        v5 = 1;
      }
    }
    *(_QWORD*)(a1 + 8 + 8 * v5) = a2;
    v4 = 0;
    ++*(_DWORD*)(a1 + 520);
    goto LABEL_132;
  }
  v4 = 260352;
LABEL_132:
  _runlock_0_0((void*)a1);
  return v4;
}

__int64 nn_movie_detail_EventManager_ReleaseEvent(__int64 a1, __int64 a2)
{
  unsigned int v4;
  __int64 v5;
  int v6;

  nn_os_SdkRecursiveMutexType_Lock_plt((void*)a1);
  if (*(_QWORD*)(a1 + 8) == a2) {
    v5 = 0;
  LABEL_130:
    nn_os_ClearEvent_plt(a2);
    nn_os_FinalizeEvent_plt(a2);
    v6 = *(_DWORD*)(a1 + 520);
    v4 = 0;
    *(_QWORD*)(a1 + 8 + 8 * v5) = 0;
    *(_DWORD*)(a1 + 520) = v6 - 1;
    goto LABEL_131;
  }
  if (*(_QWORD*)(a1 + 16) == a2) {
    v5 = 1;
    goto LABEL_130;
  }
  if (*(_QWORD*)(a1 + 24) == a2) {
    v5 = 2;
    goto LABEL_130;
  }
  if (*(_QWORD*)(a1 + 32) == a2) {
    v5 = 3;
    goto LABEL_130;
  }
  if (*(_QWORD*)(a1 + 40) == a2) {
    v5 = 4;
    goto LABEL_130;
  }
  if (*(_QWORD*)(a1 + 48) == a2) {
    v5 = 5;
    goto LABEL_130;
  }
  if (*(_QWORD*)(a1 + 56) == a2) {
    v5 = 6;
    goto LABEL_130;
  }
  if (*(_QWORD*)(a1 + 64) == a2) {
    v5 = 7;
    goto LABEL_130;
  }
  if (*(_QWORD*)(a1 + 72) == a2) {
    v5 = 8;
    goto LABEL_130;
  }
  if (*(_QWORD*)(a1 + 80) == a2) {
    v5 = 9;
    goto LABEL_130;
  }
  if (*(_QWORD*)(a1 + 88) == a2) {
    v5 = 10;
    goto LABEL_130;
  }
  if (*(_QWORD*)(a1 + 96) == a2) {
    v5 = 11;
    goto LABEL_130;
  }
  if (*(_QWORD*)(a1 + 104) == a2) {
    v5 = 12;
    goto LABEL_130;
  }
  if (*(_QWORD*)(a1 + 112) == a2) {
    v5 = 13;
    goto LABEL_130;
  }
  if (*(_QWORD*)(a1 + 120) == a2) {
    v5 = 14;
    goto LABEL_130;
  }
  if (*(_QWORD*)(a1 + 128) == a2) {
    v5 = 15;
    goto LABEL_130;
  }
  if (*(_QWORD*)(a1 + 136) == a2) {
    v5 = 16;
    goto LABEL_130;
  }
  if (*(_QWORD*)(a1 + 144) == a2) {
    v5 = 17;
    goto LABEL_130;
  }
  if (*(_QWORD*)(a1 + 152) == a2) {
    v5 = 18;
    goto LABEL_130;
  }
  if (*(_QWORD*)(a1 + 160) == a2) {
    v5 = 19;
    goto LABEL_130;
  }
  if (*(_QWORD*)(a1 + 168) == a2) {
    v5 = 20;
    goto LABEL_130;
  }
  if (*(_QWORD*)(a1 + 176) == a2) {
    v5 = 21;
    goto LABEL_130;
  }
  if (*(_QWORD*)(a1 + 184) == a2) {
    v5 = 22;
    goto LABEL_130;
  }
  if (*(_QWORD*)(a1 + 192) == a2) {
    v5 = 23;
    goto LABEL_130;
  }
  if (*(_QWORD*)(a1 + 200) == a2) {
    v5 = 24;
    goto LABEL_130;
  }
  if (*(_QWORD*)(a1 + 208) == a2) {
    v5 = 25;
    goto LABEL_130;
  }
  if (*(_QWORD*)(a1 + 216) == a2) {
    v5 = 26;
    goto LABEL_130;
  }
  if (*(_QWORD*)(a1 + 224) == a2) {
    v5 = 27;
    goto LABEL_130;
  }
  if (*(_QWORD*)(a1 + 232) == a2) {
    v5 = 28;
    goto LABEL_130;
  }
  if (*(_QWORD*)(a1 + 240) == a2) {
    v5 = 29;
    goto LABEL_130;
  }
  if (*(_QWORD*)(a1 + 248) == a2) {
    v5 = 30;
    goto LABEL_130;
  }
  if (*(_QWORD*)(a1 + 256) == a2) {
    v5 = 31;
    goto LABEL_130;
  }
  if (*(_QWORD*)(a1 + 264) == a2) {
    v5 = 32;
    goto LABEL_130;
  }
  if (*(_QWORD*)(a1 + 272) == a2) {
    v5 = 33;
    goto LABEL_130;
  }
  if (*(_QWORD*)(a1 + 280) == a2) {
    v5 = 34;
    goto LABEL_130;
  }
  if (*(_QWORD*)(a1 + 288) == a2) {
    v5 = 35;
    goto LABEL_130;
  }
  if (*(_QWORD*)(a1 + 296) == a2) {
    v5 = 36;
    goto LABEL_130;
  }
  if (*(_QWORD*)(a1 + 304) == a2) {
    v5 = 37;
    goto LABEL_130;
  }
  if (*(_QWORD*)(a1 + 312) == a2) {
    v5 = 38;
    goto LABEL_130;
  }
  if (*(_QWORD*)(a1 + 320) == a2) {
    v5 = 39;
    goto LABEL_130;
  }
  if (*(_QWORD*)(a1 + 328) == a2) {
    v5 = 40;
    goto LABEL_130;
  }
  if (*(_QWORD*)(a1 + 336) == a2) {
    v5 = 41;
    goto LABEL_130;
  }
  if (*(_QWORD*)(a1 + 344) == a2) {
    v5 = 42;
    goto LABEL_130;
  }
  if (*(_QWORD*)(a1 + 352) == a2) {
    v5 = 43;
    goto LABEL_130;
  }
  if (*(_QWORD*)(a1 + 360) == a2) {
    v5 = 44;
    goto LABEL_130;
  }
  if (*(_QWORD*)(a1 + 368) == a2) {
    v5 = 45;
    goto LABEL_130;
  }
  if (*(_QWORD*)(a1 + 376) == a2) {
    v5 = 46;
    goto LABEL_130;
  }
  if (*(_QWORD*)(a1 + 384) == a2) {
    v5 = 47;
    goto LABEL_130;
  }
  if (*(_QWORD*)(a1 + 392) == a2) {
    v5 = 48;
    goto LABEL_130;
  }
  if (*(_QWORD*)(a1 + 400) == a2) {
    v5 = 49;
    goto LABEL_130;
  }
  if (*(_QWORD*)(a1 + 408) == a2) {
    v5 = 50;
    goto LABEL_130;
  }
  if (*(_QWORD*)(a1 + 416) == a2) {
    v5 = 51;
    goto LABEL_130;
  }
  if (*(_QWORD*)(a1 + 424) == a2) {
    v5 = 52;
    goto LABEL_130;
  }
  if (*(_QWORD*)(a1 + 432) == a2) {
    v5 = 53;
    goto LABEL_130;
  }
  if (*(_QWORD*)(a1 + 440) == a2) {
    v5 = 54;
    goto LABEL_130;
  }
  if (*(_QWORD*)(a1 + 448) == a2) {
    v5 = 55;
    goto LABEL_130;
  }
  if (*(_QWORD*)(a1 + 456) == a2) {
    v5 = 56;
    goto LABEL_130;
  }
  if (*(_QWORD*)(a1 + 464) == a2) {
    v5 = 57;
    goto LABEL_130;
  }
  if (*(_QWORD*)(a1 + 472) == a2) {
    v5 = 58;
    goto LABEL_130;
  }
  if (*(_QWORD*)(a1 + 480) == a2) {
    v5 = 59;
    goto LABEL_130;
  }
  if (*(_QWORD*)(a1 + 488) == a2) {
    v5 = 60;
    goto LABEL_130;
  }
  if (*(_QWORD*)(a1 + 496) == a2) {
    v5 = 61;
    goto LABEL_130;
  }
  if (*(_QWORD*)(a1 + 504) == a2) {
    v5 = 62;
    goto LABEL_130;
  }
  if (*(_QWORD*)(a1 + 512) == a2) {
    v5 = 63;
    goto LABEL_130;
  }
  v4 = 258304;
LABEL_131:
  _runlock_0_0((void*)a1);
  return v4;
}

#pragma GCC visibility pop
