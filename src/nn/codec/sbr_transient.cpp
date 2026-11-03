/*
  Third-Party Modified Version of the Fraunhofer FDK AAC Codec
  Library for Android. Modified 2026-11-03 for the recovered SDK ABI.
  Copyright 1995-2012 Fraunhofer-Gesellschaft. All rights reserved.
  Original license: https://android.googlesource.com/platform/external/aac/+/203e3f28fbebec7011342017fafc2a0bda0ce530/NOTICE
  Full license text: include/nn/codec/bitstream.hpp.
*/

#include "nn/codec/intensity.hpp"
#include "nn/codec/quantization.hpp"
#include "nn/codec/sbr_envelope.hpp"
#include "nn/codec/sbr_frequency.hpp"
#include "nn/codec/sbr_transient.hpp"
#include "nn/codec/tns_detection.hpp"

namespace nn::codec {

using FIXP_DBL = int32_t;
using INT = int;
using UINT = unsigned int;
using LONG = int32_t;
using SCHAR = int8_t;
using UCHAR = uint8_t;
extern const int32_t invCount[80];
void FDKmemclear(void*, unsigned int);
void* FDKmemmove(void*, const void*, unsigned int);
constexpr int32_t fixed_dbl(double v) {
  double value = v * 2147483648.0 + (v >= 0 ? 0.5 : -0.5);
  return value >= 2147483647.0    ? 2147483647
         : value <= -2147483648.0 ? (-2147483647 - 1)
                                  : int32_t(value);
}

static int fixMin(int a, int b) {
  return a < b ? a : b;
}

static int fixMax(int a, int b) {
  return a > b ? a : b;
}

static int32_t fMult(int32_t a, int32_t b) {
  return static_cast<int32_t>(
    static_cast<uint32_t>((static_cast<int64_t>(a) * b) >> 32) << 1);
}

static int32_t fPow2(int32_t a) {
  return fMult(a, a);
}

static int32_t fMultI(int32_t a, int16_t b) {
  return static_cast<int32_t>(
    (16384 +
     ((static_cast<int64_t>(a) * (static_cast<int32_t>(b) << 16)) >> 32)) >>
    15);
}

static int32_t scaleValue(int32_t v, int shift) {
  return shift >= 0 ? v << shift : v >> -shift;
}

static int CountLeadingBits(int32_t value) {
  uint32_t bits = value ^ (value >> 31);
  return (bits ? __builtin_clz(bits) : 32) - 1;
}

static int fNormz(int32_t value) {
  return value ? __builtin_clz(static_cast<uint32_t>(value)) : 32;
}

int32_t FDKabs(int32_t value) {
  return value < 0 ? static_cast<int32_t>(0U - static_cast<uint32_t>(value))
                   : value;
}

static int32_t GetInvInt(int value) {
  return invCount[value];
}

static INT fIsLessThan(FIXP_DBL a_m, INT a_e, FIXP_DBL b_m, INT b_e) {
  if (a_e > b_e) {
    return (b_m >> fixMin(a_e - b_e, 32 - 1) > a_m);
  }
  else {
    return (a_m >> fixMin(b_e - a_e, 32 - 1) < b_m);
  }
}

static FIXP_DBL scaleValueSaturate(const FIXP_DBL value, INT scalefactor) {
  if (scalefactor > 0) {
    if (CountLeadingBits(value) < scalefactor && value != (FIXP_DBL)0) {
      if (value > (FIXP_DBL)0) {
        return (FIXP_DBL)2147483647;
      }
      else {
        return (FIXP_DBL)(-2147483647 - 1);
      }
    }
    else {
      return (value << scalefactor);
    }
  }
  else {
    if (-(32 - 1) > scalefactor) {
      return (FIXP_DBL)0;
    }
    else {
      return (value >> (-scalefactor));
    }
  }
}

FIXP_DBL fLog2(FIXP_DBL x_m, INT x_e) {
  if (x_m <= fixed_dbl(0.0f)) {
    x_m = fixed_dbl(-1.0f);
  }
  else {
    INT result_e;
    x_m = fLog2(x_m, x_e, &result_e);
    x_m = scaleValue(x_m, result_e - 6);
  }
  return x_m;
}

FIXP_DBL fDivNorm(FIXP_DBL num, FIXP_DBL denom) {
  INT e;
  FIXP_DBL res;
  res = fDivNorm(num, denom, &e);
  if (res == (FIXP_DBL)(1 << (32 - 2)) && e == 1) {
    res = (FIXP_DBL)2147483647;
  }
  else {
    res = scaleValue(res, e);
  }
  return res;
}

static FIXP_DBL spectralChange(FIXP_DBL Energies[18][48], INT* scaleEnergies,
                               FIXP_DBL EnergyTotal, INT nSfb, INT start,
                               INT border, INT YBufferWriteOffset, INT stop,
                               INT* result_e) {
  INT i, j;
  INT len1, len2;
  SCHAR energies_e_diff[18], energies_e, energyTotal_e = 19, energies_e_add;
  SCHAR prevEnergies_e_diff, newEnergies_e_diff;
  FIXP_DBL tmp0, tmp1;
  FIXP_DBL accu1, accu2, accu1_init, accu2_init;
  FIXP_DBL delta, delta_sum;
  INT accu_e, tmp_e;
  delta_sum = fixed_dbl(0.0f);
  *result_e = 0;
  len1 = border - start;
  len2 = stop - border;
  FIXP_DBL pos_weight;
  pos_weight = fixed_dbl(0.5f) - (len1 * GetInvInt(len1 + len2));
  pos_weight = (FIXP_DBL)2147483647 - (fMult(pos_weight, pos_weight) << 2);
  energies_e = 19 - fixMin(scaleEnergies[0], scaleEnergies[1]);
  if (energies_e < -10) {
    energies_e_add = -10 - energies_e;
    energies_e = -10;
  }
  else if (energies_e > 17) {
    energies_e_add = energies_e - 17;
    energies_e = 17;
  }
  else {
    energies_e_add = 0;
  }
  prevEnergies_e_diff = scaleEnergies[0] -
                        fixMin(scaleEnergies[0], scaleEnergies[1]) +
                        energies_e_add + 3;
  newEnergies_e_diff = scaleEnergies[1] -
                       fixMin(scaleEnergies[0], scaleEnergies[1]) +
                       energies_e_add + 3;
  prevEnergies_e_diff = fixMin(prevEnergies_e_diff, 32 - 1);
  newEnergies_e_diff = fixMin(newEnergies_e_diff, 32 - 1);
  for (i = start; i < YBufferWriteOffset; i++) {
    energies_e_diff[i] = prevEnergies_e_diff;
  }
  for (i = YBufferWriteOffset; i < stop; i++) {
    energies_e_diff[i] = newEnergies_e_diff;
  }
  accu1_init =
    scaleValue((fixed_dbl((1.0e6 * 9.31322574615479E-10))), -energies_e);
  accu2_init =
    scaleValue((fixed_dbl((1.0e6 * 9.31322574615479E-10))), -energies_e);
  accu1_init = fMult(accu1_init, (FIXP_DBL)len1 << ((32 - 1) - 3 - 1)) << 1;
  accu2_init = fMult(accu2_init, (FIXP_DBL)len2 << ((32 - 1) - 3 - 1)) << 1;
  for (j = 0; j < nSfb; j++) {
    accu1 = accu1_init;
    accu2 = accu2_init;
    accu_e = energies_e + 3;
    for (i = start; i < border; i++) {
      accu1 += scaleValue(Energies[i][j], -energies_e_diff[i]);
    }
    for (i = border; i < stop; i++) {
      accu2 += scaleValue(Energies[i][j], -energies_e_diff[i]);
    }
    tmp0 = fLog2(accu2, accu_e) - fLog2(accu1, accu_e);
    tmp1 = fLog2((FIXP_DBL)len1, 31) - fLog2((FIXP_DBL)len2, 31);
    delta = fMult(fixed_dbl(0.6931471806f), (tmp0 + tmp1));
    delta = (FIXP_DBL)FDKabs(delta);
    accu_e++;
    accu1 >>= 1;
    accu2 >>= 1;
    if (accu_e & 1) {
      accu_e++;
      accu1 >>= 1;
      accu2 >>= 1;
    }
    delta_sum += fMult(sqrtFixp(accu1 + accu2), delta);
    *result_e = ((accu_e >> 1) + 6);
  }
  energyTotal_e += 1;
  EnergyTotal <<= 1;
  delta_sum = fMult(delta_sum, invSqrtNorm2(EnergyTotal, &tmp_e));
  *result_e = *result_e + (tmp_e - (energyTotal_e >> 1));
  return fMult(delta_sum, pos_weight);
}

static FIXP_DBL addLowbandEnergies(FIXP_DBL** Energies, int* scaleEnergies,
                                   int YBufferWriteOffset, int nrgSzShift,
                                   int tran_off, UCHAR* freqBandTable,
                                   int slots) {
  FIXP_DBL nrgTotal;
  FIXP_DBL accu1 = fixed_dbl(0.0f);
  FIXP_DBL accu2 = fixed_dbl(0.0f);
  int tran_offdiv2 = tran_off >> nrgSzShift;
  int ts, k;
  for (ts = tran_offdiv2; ts < YBufferWriteOffset; ts++) {
    for (k = 0; k < freqBandTable[0]; k++) {
      accu1 += Energies[ts][k] >> 6;
    }
  }
  for (; ts < tran_offdiv2 + (slots >> nrgSzShift); ts++) {
    for (k = 0; k < freqBandTable[0]; k++) {
      accu2 += Energies[ts][k] >> 9;
    }
  }
  nrgTotal = (scaleValueSaturate(accu1, 1 - scaleEnergies[0])) +
             (scaleValueSaturate(accu2, 4 - scaleEnergies[1]));
  return (nrgTotal);
}

static FIXP_DBL addHighbandEnergies(FIXP_DBL** Energies, INT* scaleEnergies,
                                    INT YBufferWriteOffset,
                                    FIXP_DBL EnergiesM[18][48],
                                    UCHAR* freqBandTable, INT nSfb,
                                    INT sbrSlots, INT timeStep) {
  INT i, j, k, slotIn, slotOut, scale[2];
  INT li, ui;
  FIXP_DBL nrgTotal;
  FIXP_DBL accu = fixed_dbl(0.0f);
  for (slotOut = 0; slotOut < sbrSlots; slotOut++) {
    slotIn = timeStep * slotOut;
    for (j = 0; j < nSfb; j++) {
      accu = fixed_dbl(0.0f);
      li = freqBandTable[j];
      ui = freqBandTable[j + 1];
      for (k = li; k < ui; k++) {
        for (i = 0; i < timeStep; i++) {
          accu += (Energies[(slotIn + i) >> 1][k] >> 5);
        }
      }
      EnergiesM[slotOut][j] = accu;
    }
  }
  scale[0] = fixMin(8, scaleEnergies[0]);
  scale[1] = fixMin(8, scaleEnergies[1]);
  if ((scaleEnergies[0] - scale[0]) > (32 - 1) ||
      (scaleEnergies[1] - scale[0]) > (32 - 1)) {
    nrgTotal = fixed_dbl(0.0f);
  }
  else {
    accu = fixed_dbl(0.0f);
    for (slotOut = 0; slotOut < YBufferWriteOffset; slotOut++) {
      for (j = 0; j < nSfb; j++) {
        accu += (EnergiesM[slotOut][j] >> scale[0]);
      }
    }
    nrgTotal = accu >> (scaleEnergies[0] - scale[0]);
    for (slotOut = YBufferWriteOffset; slotOut < sbrSlots; slotOut++) {
      for (j = 0; j < nSfb; j++) {
        accu += (EnergiesM[slotOut][j] >> scale[0]);
      }
    }
    nrgTotal = accu >> (scaleEnergies[1] - scale[1]);
  }
  return (nrgTotal);
}

void FDKsbrEnc_frameSplitter(
  FIXP_DBL** Energies, INT* scaleEnergies,
  HANDLE_SBR_TRANSIENT_DETECTOR h_sbrTransientDetector, UCHAR* freqBandTable,
  UCHAR* tran_vector, int YBufferWriteOffset, int YBufferSzShift, int nSfb,
  int timeStep, int no_cols, FIXP_DBL* tonality) {
  if (tran_vector[1] == 0) {
    FIXP_DBL delta;
    INT delta_e;
    FIXP_DBL(*EnergiesM)[48];
    FIXP_DBL EnergyTotal, newLowbandEnergy, newHighbandEnergy;
    INT border;
    INT sbrSlots = fMultI(GetInvInt(timeStep), no_cols);
    FIXP_DBL _EnergiesM[18 * 48] = {};
    EnergiesM = (FIXP_DBL(*)[48])_EnergiesM;
    newLowbandEnergy = addLowbandEnergies(
      Energies, scaleEnergies, YBufferWriteOffset, YBufferSzShift,
      h_sbrTransientDetector->tran_off, freqBandTable, no_cols);
    newHighbandEnergy =
      addHighbandEnergies(Energies, scaleEnergies, YBufferWriteOffset,
                          EnergiesM, freqBandTable, nSfb, sbrSlots, timeStep);
    {
      EnergyTotal =
        (newLowbandEnergy + h_sbrTransientDetector->prevLowBandEnergy) >> 1;
      EnergyTotal += newHighbandEnergy;
      border = (sbrSlots + 1) >> 1;
      if ((INT)EnergyTotal & 0xffffffe0 &&
          (scaleEnergies[0] < 32 || scaleEnergies[1] < 32)) {
        delta = spectralChange(EnergiesM, scaleEnergies, EnergyTotal, nSfb, 0,
                               border, YBufferWriteOffset, sbrSlots, &delta_e);
      }
      else {
        delta = fixed_dbl(0.0f);
        delta_e = 0;
        *tonality = fixed_dbl(0.0f);
      }
      if (fIsLessThan(h_sbrTransientDetector->split_thr_m,
                      h_sbrTransientDetector->split_thr_e, delta, delta_e)) {
        tran_vector[0] = 1;
      }
      else {
        tran_vector[0] = 0;
      }
    }
    h_sbrTransientDetector->prevLowBandEnergy = newLowbandEnergy;
    h_sbrTransientDetector->prevHighBandEnergy = newHighbandEnergy;
  }
}

static void calculateThresholds(FIXP_DBL** Energies, INT* scaleEnergies,
                                FIXP_DBL* thresholds, int YBufferWriteOffset,
                                int YBufferSzShift, int noCols, int noRows,
                                int tran_off) {
  FIXP_DBL mean_val, std_val, temp;
  FIXP_DBL i_noCols;
  FIXP_DBL i_noCols1;
  FIXP_DBL accu, accu0, accu1;
  int scaleFactor0, scaleFactor1, commonScale;
  int i, j;
  i_noCols = GetInvInt(noCols + tran_off) << YBufferSzShift;
  i_noCols1 = GetInvInt(noCols + tran_off - 1) << YBufferSzShift;
  commonScale = fixMin(scaleEnergies[0], scaleEnergies[1]);
  scaleFactor0 = fixMin((scaleEnergies[0] - commonScale), (32 - 1));
  scaleFactor1 = fixMin((scaleEnergies[1] - commonScale), (32 - 1));
  for (i = 0; i < noRows; i++) {
    int startEnergy = (tran_off >> YBufferSzShift);
    int endEnergy = ((noCols >> YBufferSzShift) + tran_off);
    int shift;
    accu0 = accu1 = fixed_dbl(0.0f);
    for (j = startEnergy; j < YBufferWriteOffset; j++) {
      accu0 += fMult(Energies[j][i], i_noCols);
    }
    for (; j < endEnergy; j++) {
      accu1 += fMult(Energies[j][i], i_noCols);
    }
    mean_val = (accu0 >> scaleFactor0) + (accu1 >> scaleFactor1);
    shift = fixMax(0, CountLeadingBits(mean_val) - 6);
    accu = fixed_dbl(0.0f);
    for (j = startEnergy; j < YBufferWriteOffset; j++) {
      temp = ((FIXP_DBL)mean_val - ((FIXP_DBL)Energies[j][i] >> scaleFactor0))
             << shift;
      temp = fPow2(temp);
      temp = fMult(temp, i_noCols1);
      accu += temp;
    }
    for (; j < endEnergy; j++) {
      temp = ((FIXP_DBL)mean_val - ((FIXP_DBL)Energies[j][i] >> scaleFactor1))
             << shift;
      temp = fPow2(temp);
      temp = fMult(temp, i_noCols1);
      accu += temp;
    }
    std_val = sqrtFixp(accu) >> shift;
    temp = (commonScale <= (32 - 1))
             ? fMult(fixed_dbl(0.66f), thresholds[i]) +
                 (fMult(fixed_dbl(0.34f), std_val) >> commonScale)
             : (FIXP_DBL)0;
    thresholds[i] = fixMax(((FIXP_DBL)16), temp);
  }
}

static void extractTransientCandidates(
  FIXP_DBL** Energies, INT* scaleEnergies, FIXP_DBL* thresholds,
  FIXP_DBL* transients, int YBufferWriteOffset, int YBufferSzShift, int noCols,
  int start_band, int stop_band, int tran_off, int addPrevSamples) {
  FIXP_DBL i_thres;
  FIXP_DBL EnergiesTemp[2 * 32] = {};
  FIXP_DBL* pEnergiesTemp = EnergiesTemp;
  int tmpScaleEnergies0, tmpScaleEnergies1;
  int endCond;
  int startEnerg, endEnerg;
  int i, j, jIndex, jpBM;
  tmpScaleEnergies0 = scaleEnergies[0];
  tmpScaleEnergies1 = scaleEnergies[1];
  tmpScaleEnergies0 = fixMin(tmpScaleEnergies0, 31);
  tmpScaleEnergies1 = fixMin(tmpScaleEnergies1, 31);
  FDKmemmove(transients, transients + noCols - addPrevSamples,
             (tran_off + addPrevSamples) * sizeof(FIXP_DBL));
  FDKmemclear(transients + tran_off + addPrevSamples,
              noCols * sizeof(FIXP_DBL));
  endCond = noCols;
  startEnerg = (tran_off - 3) >> YBufferSzShift;
  endEnerg =
    ((noCols + (YBufferWriteOffset << YBufferSzShift)) - 1) >> YBufferSzShift;
  for (i = start_band; i < stop_band; i++) {
    FIXP_DBL thres = thresholds[i];
    if ((LONG)thresholds[i] >= 256) {
      i_thres = (LONG)((LONG)2147483647 / ((((LONG)thresholds[i])) + 1))
                << (32 - 24);
    }
    else {
      i_thres = (LONG)2147483647;
    }
    if (YBufferSzShift == 1) {
      for (j = startEnerg; j < YBufferWriteOffset; j++) {
        FIXP_DBL tmp = Energies[j][i];
        EnergiesTemp[(j << 1) + 1] = EnergiesTemp[j << 1] =
          tmp >> tmpScaleEnergies0;
      }
      for (; j <= endEnerg; j++) {
        FIXP_DBL tmp = Energies[j][i];
        EnergiesTemp[(j << 1) + 1] = EnergiesTemp[j << 1] =
          tmp >> tmpScaleEnergies1;
      }
    }
    else {
      for (j = startEnerg; j < YBufferWriteOffset; j++) {
        FIXP_DBL tmp = Energies[j][i];
        EnergiesTemp[j] = tmp >> tmpScaleEnergies0;
      }
      for (; j <= endEnerg; j++) {
        FIXP_DBL tmp = Energies[j][i];
        EnergiesTemp[j] = tmp >> tmpScaleEnergies1;
      }
    }
    jIndex = tran_off;
    jpBM = jIndex + addPrevSamples;
    for (j = endCond; j--; jIndex++, jpBM++) {
      FIXP_DBL delta, tran;
      int d;
      delta = (FIXP_DBL)0;
      tran = (FIXP_DBL)0;
      for (d = 1; d < 4; d++) {
        delta += pEnergiesTemp[jIndex + d];
        delta -= pEnergiesTemp[jIndex - d];
        delta -= thres;
        if (delta > (FIXP_DBL)0) {
          tran += fMult(i_thres, delta);
        }
      }
      transients[jpBM] += tran;
    }
  }
}

void FDKsbrEnc_transientDetect(HANDLE_SBR_TRANSIENT_DETECTOR h_sbrTran,
                               FIXP_DBL** Energies, INT* scaleEnergies,
                               UCHAR* transient_info, int YBufferWriteOffset,
                               int YBufferSzShift, int timeStep,
                               int frameMiddleBorder) {
  int no_cols = h_sbrTran->no_cols;
  int qmfStartSample;
  int addPrevSamples;
  int timeStepShift = 0;
  int i, cond;
  qmfStartSample = timeStep * frameMiddleBorder;
  addPrevSamples = (qmfStartSample > 0) ? 0 : 1;
  switch (timeStep) {
    case 1:
      timeStepShift = 0;
      break;
    case 2:
      timeStepShift = 1;
      break;
    case 4:
      timeStepShift = 2;
      break;
  }
  calculateThresholds(Energies, scaleEnergies, h_sbrTran->thresholds,
                      YBufferWriteOffset, YBufferSzShift, h_sbrTran->no_cols,
                      h_sbrTran->no_rows, h_sbrTran->tran_off);
  extractTransientCandidates(
    Energies, scaleEnergies, h_sbrTran->thresholds, h_sbrTran->transients,
    YBufferWriteOffset, YBufferSzShift, h_sbrTran->no_cols, 0,
    h_sbrTran->no_rows, h_sbrTran->tran_off, addPrevSamples);
  transient_info[0] = 0;
  transient_info[1] = 0;
  transient_info[2] = 0;
  qmfStartSample += addPrevSamples;
  for (i = qmfStartSample; i < qmfStartSample + no_cols; i++) {
    cond = (h_sbrTran->transients[i] <
            fMult(fixed_dbl(0.9f), h_sbrTran->transients[i - 1])) &&
           (h_sbrTran->transients[i - 1] > h_sbrTran->tran_thr);
    if (cond) {
      transient_info[0] = (i - qmfStartSample) >> timeStepShift;
      transient_info[1] = 1;
      break;
    }
  }
  if (h_sbrTran->frameShift != 0) {
    for (i = qmfStartSample + no_cols;
         i < qmfStartSample + no_cols + h_sbrTran->frameShift; i++) {
      cond = (h_sbrTran->transients[i] <
              fMult(fixed_dbl(0.9f), h_sbrTran->transients[i - 1])) &&
             (h_sbrTran->transients[i - 1] > h_sbrTran->tran_thr);
      if (cond) {
        int pos = (int)((i - qmfStartSample - no_cols) >> timeStepShift);
        if ((pos < 3) && (transient_info[1] == 0)) {
          transient_info[2] = 1;
        }
        break;
      }
    }
  }
}

int FDKsbrEnc_InitSbrTransientDetector(
  HANDLE_SBR_TRANSIENT_DETECTOR h_sbrTransientDetector, UINT sbrSyntaxFlags,
  INT frameSize, INT sampleFreq, sbrConfigurationPtr params, int tran_fc,
  int no_cols, int no_rows, int, int, int frameShift, int tran_off) {
  INT totalBitrate =
    params->codecSettings.standardBitrate * params->codecSettings.nChannels;
  INT codecBitrate = params->codecSettings.bitRate;
  FIXP_DBL bitrateFactor_m, framedur_fix;
  INT bitrateFactor_e, tmp_e;
  FDKmemclear(h_sbrTransientDetector, sizeof(SBR_TRANSIENT_DETECTOR));
  h_sbrTransientDetector->frameShift = frameShift;
  h_sbrTransientDetector->tran_off = tran_off;
  if (codecBitrate) {
    bitrateFactor_m = fDivNorm((FIXP_DBL)totalBitrate,
                               (FIXP_DBL)(codecBitrate << 2), &bitrateFactor_e);
    bitrateFactor_e += 2;
  }
  else {
    bitrateFactor_m = fixed_dbl(1.0 / 4.0);
    bitrateFactor_e = 2;
  }
  framedur_fix = fDivNorm(frameSize, sampleFreq);
  FIXP_DBL tmp = framedur_fix - fixed_dbl(0.010);
  tmp = fixMax(tmp, fixed_dbl(0.0001));
  tmp = fDivNorm(fixed_dbl(0.000075), fPow2(tmp), &tmp_e);
  bitrateFactor_e = (tmp_e + bitrateFactor_e);
  if (sbrSyntaxFlags & 1) {
    bitrateFactor_e--;
  }
  h_sbrTransientDetector->no_cols = no_cols;
  h_sbrTransientDetector->tran_thr =
    (FIXP_DBL)((params->tran_thr << (32 - 24 - 1)) / no_rows);
  h_sbrTransientDetector->tran_fc = tran_fc;
  h_sbrTransientDetector->split_thr_m = fMult(tmp, bitrateFactor_m);
  h_sbrTransientDetector->split_thr_e = bitrateFactor_e;
  h_sbrTransientDetector->no_rows = no_rows;
  h_sbrTransientDetector->mode = params->tran_det_mode;
  h_sbrTransientDetector->prevLowBandEnergy = fixed_dbl(0.0f);
  return (0);
}

INT FDKsbrEnc_InitSbrFastTransientDetector(
  HANDLE_FAST_TRAN_DET h_sbrFastTransientDetector,
  const INT time_slots_per_frame, const INT bandwidth_qmf_slot,
  const INT no_qmf_channels, const INT sbr_qmf_1st_band) {
  int i, e;
  int buff_size;
  FIXP_DBL myExp;
  FIXP_DBL myExpSlot;
  h_sbrFastTransientDetector->lookahead = 2;
  h_sbrFastTransientDetector->nTimeSlots = time_slots_per_frame;
  buff_size = h_sbrFastTransientDetector->nTimeSlots +
              h_sbrFastTransientDetector->lookahead;
  for (i = 0; i < buff_size; i++) {
    h_sbrFastTransientDetector->delta_energy[i] = fixed_dbl(0.0f);
    h_sbrFastTransientDetector->energy_timeSlots[i] = fixed_dbl(0.0f);
    h_sbrFastTransientDetector->lowpass_energy[i] = fixed_dbl(0.0f);
    h_sbrFastTransientDetector->transientCandidates[i] = 0;
  }
  h_sbrFastTransientDetector->stopBand =
    fixMin(13500 / bandwidth_qmf_slot, no_qmf_channels);
  h_sbrFastTransientDetector->startBand =
    fixMin(sbr_qmf_1st_band, h_sbrFastTransientDetector->stopBand - 4);
  myExp = fMultNorm(fixed_dbl(0.00075275f), (FIXP_DBL)bandwidth_qmf_slot, &e);
  myExp = scaleValueSaturate(myExp, e + 0 + 32 - 1 - 7);
  myExpSlot = myExp;
  for (i = 0; i < 64; i++) {
    FIXP_DBL dBf_m;
    INT dBf_e;
    INT tmp;
    INT dBf_int;
    FIXP_DBL dBf_fract;
    FIXP_DBL myExp_int =
      (myExpSlot & (FIXP_DBL)0xfe000000) + (FIXP_DBL)0x02000000;
    FIXP_DBL myExp_fract = myExp_int - myExpSlot;
    dBf_int = CalcInvLdData(myExp_int);
    dBf_int *= dBf_int;
    dBf_fract = CalcInvLdData(-myExp_fract);
    dBf_fract = fMultNorm(dBf_fract, dBf_fract, &tmp);
    dBf_e = (32 - 1 - tmp) - CountLeadingBits(dBf_int);
    dBf_m = fMultNorm(dBf_int, dBf_fract, &e);
    dBf_m = scaleValueSaturate(dBf_m, e + 32 - 1 + tmp - dBf_e);
    myExpSlot += myExp;
    h_sbrFastTransientDetector->dBf_m[i] = dBf_m;
    h_sbrFastTransientDetector->dBf_e[i] = dBf_e;
  }
  return 0;
}

void FDKsbrEnc_fastTransientDetect(
  const HANDLE_FAST_TRAN_DET h_sbrFastTransientDetector,
  const FIXP_DBL* const* Energies, const int* const scaleEnergies,
  const INT YBufferWriteOffset, UCHAR* const tran_vector) {
  int timeSlot, band;
  FIXP_DBL max_delta_energy;
  int max_delta_energy_scale;
  int ind_max = 0;
  int isTransientInFrame = 0;
  const int nTimeSlots = h_sbrFastTransientDetector->nTimeSlots;
  const int lookahead = h_sbrFastTransientDetector->lookahead;
  const int startBand = h_sbrFastTransientDetector->startBand;
  const int stopBand = h_sbrFastTransientDetector->stopBand;
  int* transientCandidates = h_sbrFastTransientDetector->transientCandidates;
  FIXP_DBL* energy_timeSlots = h_sbrFastTransientDetector->energy_timeSlots;
  int* energy_timeSlots_scale =
    h_sbrFastTransientDetector->energy_timeSlots_scale;
  FIXP_DBL* delta_energy = h_sbrFastTransientDetector->delta_energy;
  int* delta_energy_scale = h_sbrFastTransientDetector->delta_energy_scale;
  const FIXP_DBL thr = fixed_dbl(3.2f / 4.f);
  const INT thr_scale = 2;
  tran_vector[2] = 0;
  FDKmemclear(transientCandidates + lookahead, nTimeSlots * sizeof(int));
  for (timeSlot = lookahead; timeSlot < nTimeSlots + lookahead; timeSlot++) {
    int i, norm;
    FIXP_DBL tmpE = fixed_dbl(0.0f);
    int headroomEnSlot = 32 - 1;
    FIXP_DBL smallNRG = fixed_dbl(1e-2f);
    FIXP_DBL denominator;
    INT denominator_scale;
    for (band = startBand; band < stopBand; band++) {
      int tmp_headroom = fNormz(Energies[timeSlot][band]) - 1;
      if (tmp_headroom < headroomEnSlot) {
        headroomEnSlot = tmp_headroom;
      }
    }
    for (i = 0, band = startBand; band < stopBand; band++, i++) {
      FIXP_DBL weightedEnergy =
        fMult(Energies[timeSlot][band] << headroomEnSlot,
              h_sbrFastTransientDetector->dBf_m[i]);
      tmpE +=
        weightedEnergy >> (6 + (10 - h_sbrFastTransientDetector->dBf_e[i]));
    }
    energy_timeSlots[timeSlot] = tmpE;
    if (timeSlot < YBufferWriteOffset) {
      energy_timeSlots_scale[timeSlot] =
        (-scaleEnergies[0] + 2 * 7) + (10 + 6) - headroomEnSlot;
    }
    else {
      energy_timeSlots_scale[timeSlot] =
        (-scaleEnergies[1] + 2 * 7) + (10 + 6) - headroomEnSlot;
    }
    if (-energy_timeSlots_scale[timeSlot - 1] + 1 > 5) {
      denominator = smallNRG;
      denominator_scale = 0;
    }
    else {
      smallNRG =
        scaleValue(smallNRG, -(energy_timeSlots_scale[timeSlot - 1] + 1));
      denominator = (energy_timeSlots[timeSlot - 1] >> 1) + smallNRG;
      denominator_scale = energy_timeSlots_scale[timeSlot - 1] + 1;
    }
    delta_energy[timeSlot] =
      fDivNorm(energy_timeSlots[timeSlot], denominator, &norm);
    delta_energy_scale[timeSlot] =
      energy_timeSlots_scale[timeSlot] - denominator_scale + norm;
  }
  for (timeSlot = lookahead; timeSlot < nTimeSlots + lookahead; timeSlot++) {
    FIXP_DBL energy_cur_slot_weighted =
      fMult(energy_timeSlots[timeSlot], fixed_dbl(1.0f / 1.4f));
    if (!fIsLessThan(delta_energy[timeSlot], delta_energy_scale[timeSlot], thr,
                     thr_scale) &&
        (((transientCandidates[timeSlot - 2] == 0) &&
          (transientCandidates[timeSlot - 1] == 0)) ||
         !fIsLessThan(energy_cur_slot_weighted,
                      energy_timeSlots_scale[timeSlot],
                      energy_timeSlots[timeSlot - 1],
                      energy_timeSlots_scale[timeSlot - 1]) ||
         !fIsLessThan(energy_cur_slot_weighted,
                      energy_timeSlots_scale[timeSlot],
                      energy_timeSlots[timeSlot - 2],
                      energy_timeSlots_scale[timeSlot - 2]))) {
      transientCandidates[timeSlot] = 1;
    }
  }
  max_delta_energy = fixed_dbl(0.0f);
  max_delta_energy_scale = 0;
  ind_max = 0;
  isTransientInFrame = 0;
  for (timeSlot = 0; timeSlot < nTimeSlots; timeSlot++) {
    int scale = fixMax(delta_energy_scale[timeSlot], max_delta_energy_scale);
    if (transientCandidates[timeSlot] &&
        ((delta_energy[timeSlot] >> (scale - delta_energy_scale[timeSlot])) >
         (max_delta_energy >> (scale - max_delta_energy_scale)))) {
      max_delta_energy = delta_energy[timeSlot];
      max_delta_energy_scale = scale;
      ind_max = timeSlot;
      isTransientInFrame = 1;
    }
  }
  if (isTransientInFrame) {
    tran_vector[0] = ind_max;
    tran_vector[1] = 1;
  }
  else {
    tran_vector[0] = tran_vector[1] = 0;
  }
  for (timeSlot = nTimeSlots; timeSlot < nTimeSlots + lookahead; timeSlot++) {
    if (transientCandidates[timeSlot]) {
      tran_vector[2] = 1;
    }
  }
  for (timeSlot = 0; timeSlot < lookahead; timeSlot++) {
    transientCandidates[timeSlot] = transientCandidates[nTimeSlots + timeSlot];
    energy_timeSlots[timeSlot] = energy_timeSlots[nTimeSlots + timeSlot];
    energy_timeSlots_scale[timeSlot] =
      energy_timeSlots_scale[nTimeSlots + timeSlot];
    delta_energy[timeSlot] = delta_energy[nTimeSlots + timeSlot];
    delta_energy_scale[timeSlot] = delta_energy_scale[nTimeSlots + timeSlot];
  }
}

}
