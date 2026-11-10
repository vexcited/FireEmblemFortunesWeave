#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 exp_plt(void* this_, double);
double fabs_plt(double);
double scalbn_plt(_QWORD, double, long double, long double);
extern double SdkData_bb1ab0[2];
void erfc2_7aa560(unsigned int a1, double a2);

void erfc2_7aa560(unsigned int a1, double a2)
{
  unsigned __int64 v3;
  double v4;
  long double v5;
  long double v6;
  double v7;
  double v8;
  double v9;
  double v10;
  double v11;
  double v12;
  double v13;
  double v14;
  __int64 v15;
  double v16;
  double v17;
  double v18;
  double v19;

  v3 = COERCE_AS(__typeof__(v3),
                 PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v4 = fabs_plt(a2),
  v3 = COERCE_AS(__typeof__(v3),
                 PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v7 = v4;
  if (a1 >> 18 > 0xFFC) {
    v8 = 0x1.0000000000000p+0 / (v4 * v4);
    if (a1 > 0x4006DB6C) {
      v9 = v8 * (v8 * (v8 * (v8 * (v8 * (v8 * -0x1.e384e9bdc383fp+8 +
                                         -0x1.004616a2e5992p+10) +
                                   -0x1.3ec881375f228p+9) +
                             -0x1.4145d43c5ed98p+7) +
                       -0x1.1c209555f995ap+4) +
                 -0x1.993ba70c285dep-1) +
           -0x1.4341239e86f4ap-7;
      v10 = v8 * (v8 * (v8 * (v8 * (v8 * -0x1.670e242712d62p+4 +
                                    0x1.da874e79fe763p+8) +
                              0x1.3f219cedf3be6p+11) +
                        0x1.8ffb7688c246ap+11) +
                  0x1.802eb189d5118p+10) +
            0x1.45cae221b9f0ap+8;
      v11 = 0x1.e568b261d5190p+4;
    }
    else {
      v9 = v8 * (v8 * (v8 * (v8 * (v8 * (v8 * (v8 * -0x1.3a0efc69ac25cp+3 +
                                               -0x1.4526557e4d2f2p+6) +
                                         -0x1.7135cebccabb2p+7) +
                                   -0x1.44cb184282266p+7) +
                             -0x1.f300ae4cba38dp+5) +
                       -0x1.51e0441b0e726p+3) +
                 -0x1.63416e4ba7360p-1) +
           -0x1.43412600d6435p-7;
      v10 = v8 * (v8 * (v8 * (v8 * (v8 * (v8 * -0x1.eeff2ee749a62p-5 +
                                          0x1.a47ef8e484a93p+2) +
                                    0x1.b28a3ee48ae2cp+6) +
                              0x1.ad02157700314p+8) +
                        0x1.42b1921ec2868p+9) +
                  0x1.b290dd58a1a71p+8) +
            0x1.1350c526ae721p+7;
      v11 = 0x1.3a6b9bd707687p+4;
    }
    *(_QWORD*)&v12 = *(_QWORD*)&v7 & 0xFFFFFFFF00000000LL;
    v13 = v8 * (v11 + v8 * v10) + 0x1.0000000000000p+0;
    v14 = -0x1.2000000000000p-1 - v12 * v12;
    v15 = HIDWORD(*(_QWORD*)&v14) & 0x7FFFFFFFLL;
    if ((unsigned int)v15 < 0x4086232B) {
      if ((unsigned int)v15 < 0x3FD62E43) {
        if ((unsigned int)v15 <= 0x3E300000) {
        LABEL_20:
          exp_plt((void*)v3, v9 / v13 + (v12 - v7) * (v7 + v12)),
              v3 = COERCE_AS(__typeof__(v3),
                             PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
          return;
        }
        v16 = 0x0.0p+0;
        v17 = -0x1.2000000000000p-1 - v12 * v12;
        v3 = 0;
      LABEL_18:
        v18 = v17 - PSEUDO_UNFUSED(v17 * v17) *
                        (v17 * v17 *
                             (v17 * v17 *
                                  (v17 * v17 *
                                       (v17 * v17 * 0x1.6376972bea4d0p-25 +
                                        -0x1.bbd41c5d26bf1p-20) +
                                   0x1.1566aaf25de2cp-14) +
                              -0x1.6c16c16bebd93p-9) +
                         0x1.555555555553ep-3);
        *(double*)&v6 = v17 * v18 / (0x1.0000000000000p+1 - v18);
        v19 = v14 + *(double*)&v6 - v16;
        *(_QWORD*)&v5 = 0x1.0000000000000p+0;
        if ((_DWORD)v3 != 0) {
          scalbn_plt(v3, v19 + 0x1.0000000000000p+0, v5, v6),
              v3 = COERCE_AS(__typeof__(v3),
                             PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        }
        goto LABEL_20;
      }
      if ((unsigned int)v15 < 0x3FF0A2B2) {
        v3 = (v14 >= 0.0) - (unsigned int)(*(_QWORD*)&v14 >> 63);
      LABEL_17:
        v14 = v14 + (double)(int)v3 * -0x1.62e42fee00000p-1;
        v16 = (double)(int)v3 * 0x1.a39ef35793c76p-33;
        v17 = v14 - v16;
        goto LABEL_18;
      }
    }
    else if (COERCE_UNSIGNED_INT64(fabs(-0x1.2000000000000p-1 - v12 * v12)) >
                 0x7FF0000000000000LL ||
             v14 > 0x1.62e42fefa39efp+9 ||
             v14 < -0x1.6232bdd7abcd2p+9 && v14 < -0x1.74910d52d3051p+9) {
      goto LABEL_20;
    }
    v3 = (unsigned int)(int)(SdkData_bb1ab0[*(_QWORD*)&v14 >> 63] +
                             v14 * 0x1.71547652b82fep+0);
    goto LABEL_17;
  }
}

#pragma GCC visibility pop
