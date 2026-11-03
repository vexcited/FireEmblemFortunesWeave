#include "nn/audio/reverb.hpp"

extern "C" void* memcpy(void*, const void*, size_t);
extern "C" void* memset(void*, int, size_t);

namespace nn::audio {
namespace {

static constexpr int32_t PowerTable[257] = {
  1073741824, 1023565304, 975733559, 930137017, 886671225, 845236613,
  805738262, 768085689, 732192641, 697976894, 665360067, 634267442,
  604627791, 576373216, 549438993, 523763420, 499287680, 475955704,
  453714044, 432511748, 412300247, 393033240, 374666590, 357158223,
  340468032, 324557781, 309391026, 294933021, 281150645, 268012328,
  255487971, 243548884, 232167716, 221318397, 210976072, 201117049,
  191718744, 182759626, 174219173, 166077819, 158316915, 150918683,
  143866173, 137143231, 130734456, 124625166, 118801367, 113249716,
  107957498, 102912587, 98103428, 93519003, 89148811, 84982840,
  81011547, 77225835, 73617031, 70176868, 66897466, 63771313,
  60791246, 57950439, 55242384, 52660879, 50200008, 47854135,
  45617886, 43486139, 41454008, 39516841, 37670198, 35909850,
  34231764, 32632095, 31107180, 29653525, 28267801, 26946831,
  25687592, 24487197, 23342897, 22252072, 21212221, 20220962,
  19276026, 18375247, 17516562, 16698004, 15917698, 15173855,
  14464773, 13788826, 13144467, 12530219, 11944676, 11386495,
  10854398, 10347166, 9863637, 9402704, 8963311, 8544451,
  8145164, 7764536, 7401696, 7055810, 6726089, 6411775,
  6112149, 5826525, 5554249, 5294696, 5047272, 4811410,
  4586570, 4372237, 4167920, 3973151, 3787484, 3610493,
  3441773, 3280937, 3127617, 2981462, 2842136, 2709322,
  2582714, 2462022, 2346970, 2237295, 2132745, 2033081,
  1938074, 1847507, 1761172, 1678871, 1600417, 1525628,
  1454335, 1386373, 1321587, 1259829, 1200956, 1144835,
  1091336, 1040337, 991722, 945378, 901200, 859086,
  818941, 780671, 744190, 709414, 676262, 644660,
  614535, 585817, 558442, 532345, 507469, 483754,
  461148, 439599, 419056, 399473, 380805, 363010,
  346047, 329876, 314460, 299765, 285757, 272404,
  259674, 247539, 235972, 224945, 214433, 204412,
  194860, 185754, 177073, 168799, 160911, 153391,
  146223, 139390, 132876, 126667, 120748, 115105,
  109726, 104598, 99710, 95051, 90609, 86375,
  82339, 78491, 74823, 71326, 67993, 64816,
  61787, 58900, 56147, 53523, 51022, 48638,
  46365, 44198, 42133, 40164, 38287, 36498,
  34792, 33166, 31616, 30139, 28730, 27388,
  26108, 24888, 23725, 22616, 21559, 20552,
  19591, 18676, 17803, 16971, 16178, 15422,
  14701, 14014, 13359, 12735, 12140, 11573,
  11032, 10516, 10025, 9556, 9110, 8684,
  8278, 7891, 7522, 7171, 6836, 6516,
  6212, 5922, 5645, 5381, 5130,
};

static constexpr int32_t CosineTable[257] = {
  0, 26350944, 52686016, 78989352, 105245104, 131437464,
  157550640, 183568928, 209476640, 235258160, 260897984, 286380640,
  311690784, 336813216, 361732736, 386434368, 410903200, 435124544,
  459083776, 482766496, 506158400, 529245408, 552013632, 574449344,
  596539008, 618269312, 639627264, 660599872, 681174592, 701339008,
  721080960, 740388544, 759250112, 777654400, 795590208, 813046784,
  830013632, 846480512, 862437504, 877875008, 892783680, 907154624,
  920979072, 934248768, 946955776, 959092288, 970651136, 981625280,
  992008064, 1001793408, 1010975232, 1019548096, 1027506880, 1034846656,
  1041563136, 1047652160, 1053110144, 1057933824, 1062120192, 1065666816,
  1068571456, 1070832448, 1072448448, 1073418432, 1073741824, 1073418432,
  1072448448, 1070832448, 1068571456, 1065666816, 1062120192, 1057933824,
  1053110144, 1047652160, 1041563136, 1034846656, 1027506880, 1019548096,
  1010975232, 1001793408, 992008064, 981625280, 970651136, 959092288,
  946955776, 934248768, 920979072, 907154624, 892783680, 877875008,
  862437504, 846480512, 830013632, 813046784, 795590208, 777654400,
  759250112, 740388544, 721080960, 701339008, 681174592, 660599872,
  639627264, 618269312, 596539008, 574449344, 552013632, 529245408,
  506158400, 482766496, 459083776, 435124544, 410903200, 386434368,
  361732736, 336813216, 311690784, 286380640, 260897984, 235258160,
  209476640, 183568928, 157550640, 131437464, 105245104, 78989352,
  52686016, 26350944, 0, -26350944, -52686016, -78989352,
  -105245104, -131437464, -157550640, -183568928, -209476640, -235258160,
  -260897984, -286380640, -311690784, -336813216, -361732736, -386434368,
  -410903200, -435124544, -459083776, -482766496, -506158400, -529245408,
  -552013632, -574449344, -596539008, -618269312, -639627264, -660599872,
  -681174592, -701339008, -721080960, -740388544, -759250112, -777654400,
  -795590208, -813046784, -830013632, -846480512, -862437504, -877875008,
  -892783680, -907154624, -920979072, -934248768, -946955776, -959092288,
  -970651136, -981625280, -992008064, -1001793408, -1010975232, -1019548096,
  -1027506880, -1034846656, -1041563136, -1047652160, -1053110144, -1057933824,
  -1062120192, -1065666816, -1068571456, -1070832448, -1072448448, -1073418432,
  -1073741824, -1073418432, -1072448448, -1070832448, -1068571456, -1065666816,
  -1062120192, -1057933824, -1053110144, -1047652160, -1041563136, -1034846656,
  -1027506880, -1019548096, -1010975232, -1001793408, -992008064, -981625280,
  -970651136, -959092288, -946955776, -934248768, -920979072, -907154624,
  -892783680, -877875008, -862437504, -846480512, -830013632, -813046784,
  -795590208, -777654400, -759250112, -740388544, -721080960, -701339008,
  -681174592, -660599872, -639627264, -618269312, -596539008, -574449344,
  -552013632, -529245408, -506158400, -482766496, -459083776, -435124544,
  -410903200, -386434368, -361732736, -336813216, -311690784, -286380640,
  -260897984, -235258160, -209476640, -183568928, -157550640, -131437464,
  -105245104, -78989352, -52686016, -26350944, 0,
};

static constexpr int32_t LateLengths[20] = {
  883970, 1297491, 1904456, 2140001, 883970, 1297491,
  1904456, 2795361, 81920, 163840, 81920, 163840,
  770539, 1163264, 1687552, 2785280, 883970, 1297491,
  1904456, 2795361,
};

static constexpr int32_t AllpassLengths[20] = {
  114688, 147456, 212992, 278528, 114688, 147456,
  212992, 278528, 16384, 16384, 16384, 16384,
  114688, 114688, 212992, 147456, 114688, 147456,
  212992, 278528,
};

static constexpr int32_t EarlyLengths[55] = {
  0, 57344, 45875, 63897, 44236, 219545,
  129433, 137625, 162201, 196608, 204800, 0,
  193331, 90112, 183500, 170393, 624230, 363724,
  484966, 347340, 406323, 655360, 0, 679936,
  335872, 676659, 0, 483328, 553779, 740556,
  766771, 0, 819200, 542310, 709427, 373555,
  620953, 244121, 578355, 293273, 560332, 0,
  709427, 819200, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0,
  0,
};

static constexpr int32_t EarlyGains[50] = {
  11468, 11141, 11468, 11141, 11468, 11141,
  11468, 11141, 11141, 11141, 11468, 11141,
  11468, 11141, 11468, 11141, 11141, 11141,
  11141, 11141, 8192, 11468, 11468, 11141,
  8192, 11141, 11141, 11468, 11141, 0,
  15237, 15073, 14254, 14090, 15400, 13271,
  13107, 12615, 12451, 10649, 0, 0,
  0, 0, 0, 0, 0, 0,
  0, 0,
};

}

namespace detail {

int32_t ReverbFixedDivide(int32_t numerator, int32_t denominator) {
  if (numerator == 0 || denominator == 0) {
    return 0;
  }

  uint32_t first = numerator < 0 ? 0u - uint32_t(numerator) : numerator;
  uint32_t second = denominator < 0 ? 0u - uint32_t(denominator) : denominator;
  unsigned firstShift = 0;
  unsigned secondShift = 15;

  while ((first >> 30) == 0 && firstShift < 31) {
    first *= 2;
    ++firstShift;
  }

  while ((second >> 30) == 0 && secondShift < 46) {
    second *= 2;
    ++secondShift;
  }

  if (secondShift < firstShift) {
    return 0;
  }

  unsigned remaining = secondShift - firstShift;
  uint32_t result = 0;

  while (remaining != 0 && first != 0) {
    bool subtract = second <= first;
    result = result * 2 + subtract;
    first = (first - (subtract ? second : 0)) * 2;
    --remaining;
  }

  result += second <= first;
  result <<= remaining & 31;
  return (numerator ^ denominator) < 0 ? int32_t(0u - result) :
    int32_t(result);
}

int32_t ReverbFixedCosine(int32_t phase) {
  uint32_t index = ((uint32_t(phase) + 0x100000) >> 14) & 255;
  uint32_t fraction = uint32_t(phase) & 0x3FFF;
  uint32_t difference = uint32_t(CosineTable[index + 1]) -
    uint32_t(CosineTable[index]);
  uint32_t value = uint32_t(CosineTable[index]) +
    uint32_t(int32_t(difference) >> 14) * fraction +
    ((difference & 0x3FFF) * fraction >> 14);
  return int32_t(value) >> 16;
}

}

namespace {

static uint32_t Scale(int32_t value, int32_t gain) {
  return uint64_t(int64_t(value) * gain) >> 14;
}

static void Advance(ReverbDelayLine& delay) {
  ++delay.position;

  if (uintptr_t(delay.position) > uintptr_t(delay.end)) {
    delay.position = delay.begin;
  }
}

static int32_t Tap(const ReverbDelayLine& delay, int32_t offset) {
  uintptr_t address = uintptr_t(delay.position) - int64_t(offset) * 4;

  if (address < uintptr_t(delay.begin)) {
    address += uint64_t(uint32_t(delay.length)) * 4;
  }

  return *reinterpret_cast<const int32_t*>(address);
}

static uint32_t Allpass(ReverbDelayLine& delay, uint32_t input) {
  int32_t previous = *delay.position;
  uint32_t value = input - Scale(previous, delay.coefficient);
  *delay.position = int32_t(value);
  Advance(delay);
  return uint32_t(previous) + Scale(int32_t(value), delay.coefficient);
}

static int32_t Round(uint32_t value) {
  return (int32_t(value) >> 14) + ((value >> 13) & 1);
}

static int32_t Power(int32_t exponent) {
  if (exponent >= 0) {
    return 16384;
  }

  if (exponent < -86834) {
    return 0;
  }

  uint32_t phase = uint64_t(int64_t(exponent)) * 0x3FFFFFF3ECAEull >> 14;
  uint32_t index = phase >> 14;
  uint32_t fraction = phase & 0x3FFF;
  uint32_t difference = uint32_t(PowerTable[index + 1]) -
    uint32_t(PowerTable[index]);
  uint32_t value = uint32_t(PowerTable[index]) +
    uint32_t(int32_t(difference) >> 14) * fraction +
    ((difference & 0x3FFF) * fraction >> 14);
  return int32_t(value) >> 16;
}

static int32_t Root(int32_t value) {
  int32_t integral = value >> 14;
  unsigned shift = 0;
  uint32_t estimate;

  if (integral > 1) {
    shift = 1;

    for (int32_t threshold = 4; shift < 9 && integral > threshold;
      threshold *= 4) {
      ++shift;
    }

    estimate = uint32_t(value) >> shift;
  }
  else {
    if (value <= 8192) {
      shift = 1;

      for (int32_t threshold = 4096; shift < 6 && value <= threshold;
        threshold /= 4) {
        ++shift;
      }
    }

    estimate = uint32_t(value) << shift;
  }

  if (value == 0) {
    return 0;
  }

  for (unsigned iteration = 0; iteration < 7; ++iteration) {
    uint32_t quotient = detail::ReverbFixedDivide(value, int32_t(estimate));
    uint32_t next = uint32_t(int32_t(quotient + estimate) >> 1);

    if (next == estimate) {
      return int32_t(next);
    }

    estimate = next;
  }

  return int32_t(estimate);
}

static void InitializeDelay(ReverbDelayLine& delay, int32_t*& buffer,
  int32_t length, int32_t coefficient) {
  delay.capacity = length;
  delay.length = length;
  delay.begin = buffer;
  delay.position = buffer;
  delay.end = reinterpret_cast<int32_t*>(uintptr_t(buffer) +
    uint64_t(uint32_t(length)) * 4 - 4);
  delay.coefficient = coefficient;
  buffer = reinterpret_cast<int32_t*>(uintptr_t(buffer) + int64_t(length) * 4);
}

static void SetLength(ReverbDelayLine& delay, uint32_t length) {
  if (length >= uint32_t(delay.capacity)) {
    length = delay.capacity;
  }

  delay.length = int32_t(length);
  delay.position = delay.begin;
  delay.end = reinterpret_cast<int32_t*>(uintptr_t(delay.begin) +
    uint64_t(length) * 4 - 4);
}

}

void UpdateReverbEffectParameter(const ReverbParameter* parameter,
  ReverbState* state) {
  for (unsigned index = 0; index < 11; ++index) {
    int64_t duration = int64_t(EarlyLengths[parameter->early_mode * 11 +
      index]) + parameter->early_delay;
    uint32_t fixed = uint64_t(duration * parameter->sample_rate) >> 14;
    int32_t length = Round(fixed);

    if (length >= state->early.capacity) {
      length = state->early.capacity;
    }

    if (index == 10) {
      state->late_delay = length;
    }
    else {
      state->early_taps[index] = int32_t(uint32_t(length) + 1);
      state->early_gains[index] = int32_t(Scale(parameter->early_gain,
        EarlyGains[parameter->early_mode * 10 + index]));
    }
  }

  if (parameter->channel_count == 2) {
    state->early_gains[4] >>= 1;
    state->early_gains[5] >>= 1;
  }

  int32_t coloration = uint64_t(int64_t(9830) *
    (int64_t(16384) - parameter->coloration)) >> 14;
  static const int32_t cosine = detail::ReverbFixedCosine(
    detail::ReverbFixedDivide(20971520, parameter->sample_rate));

  for (unsigned index = 0; index < 4; ++index) {
    SetLength(state->late[index], Round(Scale(parameter->sample_rate,
      LateLengths[parameter->late_mode * 4 + index])));
    SetLength(state->allpass[index], Round(Scale(parameter->sample_rate,
      AllpassLengths[parameter->late_mode * 4 + index])));
    uint32_t length = uint32_t(state->late[index].length) +
      uint32_t(state->allpass[index].length);
    int32_t numerator = int32_t(length * uint32_t(-49152));
    int32_t denominator = int32_t(Scale(parameter->sample_rate,
      parameter->decay_time));
    int32_t exponent = detail::ReverbFixedDivide(numerator, denominator);
    int32_t feedback = 0;

    if (parameter->high_frequency_ratio <= 16301) {
      int32_t decay = detail::ReverbFixedDivide(exponent, 163840);
      uint32_t ratio = uint32_t(detail::ReverbFixedDivide(16384,
        parameter->high_frequency_ratio)) * 2 - 32768;
      int32_t adjustment = detail::ReverbFixedDivide(int32_t(ratio),
        1638400);
      int32_t attenuation = Power(int32_t(Scale(adjustment, decay)));
      uint32_t difference = 16384u - uint32_t(attenuation);
      uint32_t coefficient = 32768 - Scale(cosine,
        int32_t(uint32_t(attenuation) * 2));
      uint32_t discriminant = Scale(int32_t(coefficient),
        int32_t(coefficient)) - (Scale(int32_t(difference),
          int32_t(difference)) * 4);
      int32_t root = Root(int32_t(discriminant));

      if (attenuation != 16384) {
        feedback = detail::ReverbFixedDivide(
          int32_t(coefficient - uint32_t(root)), int32_t(difference * 2));
      }
    }

    int32_t decay = Power(detail::ReverbFixedDivide(exponent, 16384000));
    int32_t gain = int32_t(Scale(decay,
      int32_t(16384u - uint32_t(feedback))));
    state->filter_feedback[index] = feedback;
    state->filter_input[index] = int32_t(Scale(gain, 11585));
    state->allpass[index].coefficient = coloration;
    state->filter_history[index] = 0;
  }
}

void InitializeReverbEffect(const ReverbParameter* parameter,
  ReverbState* state, void* workBuffer, bool extended) {
  memset(state, 0, sizeof(*state));
  auto buffer = static_cast<int32_t*>(workBuffer);
  constexpr int32_t lateLengths[4] = {883970, 1297491, 1904456, 2795361};
  constexpr int32_t allpassLengths[4] = {7, 9, 13, 17};

  for (unsigned index = 0; index < 4; ++index) {
    InitializeDelay(state->late[index], buffer,
      Round(Scale(parameter->sample_rate, lateLengths[index])), 16384);
    InitializeDelay(state->allpass[index], buffer,
      Round(uint32_t(parameter->sample_rate) * allpassLengths[index]), 0);
  }

  InitializeDelay(state->early, buffer,
    Round(Scale(parameter->sample_rate, extended ? 5734400 : 2457600)),
    16384);
  InitializeDelay(state->center, buffer,
    Round(uint32_t(parameter->sample_rate) * 5), 16384);
  UpdateReverbEffectParameter(parameter, state);
  memset(state->early.begin, 0, uint64_t(uint32_t(state->early.length)) * 4);

  if (parameter->channel_count == 6) {
    memset(state->center.begin, 0,
      uint64_t(uint32_t(state->center.length)) * 4);
  }

  for (unsigned index = 0; index < 4; ++index) {
    memset(state->late[index].begin, 0,
      uint64_t(uint32_t(state->late[index].length)) * 4);
    memset(state->allpass[index].begin, 0,
      uint64_t(uint32_t(state->allpass[index].length)) * 4);
  }
}

size_t ReverbGetRequiredDelayLineBufferSize(int sampleRate, int channels) {
  constexpr int32_t lateLengths[4] = {883970, 1297491, 1904456, 2795361};
  constexpr int32_t allpassLengths[4] = {7, 9, 13, 17};
  uint32_t first = 0;

  for (unsigned index = 0; index < 3; ++index) {
    first += uint32_t(Round(Scale(sampleRate, lateLengths[index])));
    first += uint32_t(Round(uint32_t(sampleRate) * allpassLengths[index]));
  }

  int64_t length = int32_t(first);
  length += Round(Scale(sampleRate, lateLengths[3]));
  length += Round(uint32_t(sampleRate) * 17);
  length += Round(uint32_t(sampleRate) * 350);

  if (channels == 6) {
    length += Round(uint32_t(sampleRate) * 5);
  }

  return uint64_t(length) * 4;
}

void ApplyReverbEffect(const ReverbParameter* parameter, ReverbState* state,
  bool enabled, const int32_t** input, int32_t** output, unsigned count) {
  unsigned channels = parameter->channel_count;

  if (!enabled || (channels != 1 && channels != 2 && channels != 4 &&
    channels != 6)) {
    for (unsigned channel = 0; channel < channels; ++channel) {
      if (output[channel] != input[channel]) {
        memcpy(output[channel], input[channel], size_t(int32_t(count)) * 4);
      }
    }

    return;
  }

  uint32_t history[4];

  for (unsigned index = 0; index < 4; ++index) {
    history[index] = state->filter_history[index];
  }

  for (int sample = 0; sample < int32_t(count); ++sample) {
    uint32_t early[10];

    for (unsigned index = 0; index < 10; ++index) {
      early[index] = Scale(Tap(state->early, state->early_taps[index]),
        state->early_gains[index]);
    }

    uint32_t excitation = 0;

    for (unsigned channel = 0; channel < channels; ++channel) {
      uint32_t value = input[channel][sample];
      excitation += channels == 6 ? value :
        Scale(int32_t(value << 6), parameter->input_gain);
    }

    if (channels == 6) {
      excitation = Scale(int32_t(excitation << 6), parameter->input_gain);
    }

    *state->early.position = int32_t(excitation);
    Advance(state->early);
    uint32_t delay = uint32_t(state->late_delay) >=
      uint32_t(state->early.length) ? uint32_t(state->early.length) :
      uint32_t(state->late_delay) + 1;
    uint32_t late = Scale(Tap(state->early, int32_t(delay)),
      parameter->late_gain);

    for (unsigned index = 0; index < 4; ++index) {
      history[index] = Scale(int32_t(history[index]),
        state->filter_feedback[index]) +
        Scale(*state->late[index].position, state->filter_input[index]);
    }

    uint32_t feedback[4] = {
      late + history[1] + history[2],
      late - history[0] - history[3],
      late + history[0] - history[3],
      late + history[1] - history[2]
    };
    uint32_t reverberation[4];

    for (unsigned index = 0; index < 4; ++index) {
      reverberation[index] = Allpass(state->allpass[index], feedback[index]);
      *state->late[index].position = int32_t(reverberation[index]);
      Advance(state->late[index]);
    }

    uint32_t wet[6] = {};
    int64_t centerWet = 0;

    if (channels == 1) {
      for (auto value : early) {
        wet[0] += value;
      }

      for (auto value : reverberation) {
        wet[0] += value;
      }
    }
    else if (channels == 2) {
      wet[0] = early[0] + early[1] + early[4] + early[6] + early[7] +
        reverberation[0] + reverberation[2];
      wet[1] = early[2] + early[3] + early[5] + early[8] + early[9] +
        reverberation[1] + reverberation[3];
    }
    else if (channels == 4) {
      wet[0] = early[0] + early[1] + early[4] + reverberation[0];
      wet[1] = early[2] + early[3] + early[5] + reverberation[1];
      wet[2] = early[6] + early[7] + reverberation[2];
      wet[3] = early[8] + early[9] + reverberation[3];
    }
    else {
      int32_t center = *state->center.position;
      *state->center.position =
        int32_t(reverberation[2] - reverberation[3]) >> 1;
      Advance(state->center);
      uint32_t sum = 0;

      for (auto value : early) {
        sum += value;
      }

      wet[0] = early[0] + early[1] + reverberation[0];
      wet[1] = early[2] + early[3] + reverberation[1];
      centerWet = int64_t(center) + int32_t(early[4] + early[5]);
      wet[3] = Scale(int32_t(sum), 3276) + reverberation[3];
      wet[4] = early[6] + early[7] + reverberation[2];
      wet[5] = early[8] + early[9] + reverberation[3];
    }

    for (unsigned channel = 0; channel < channels; ++channel) {
      uint32_t dry = Scale(input[channel][sample], parameter->dry_gain);
      uint32_t scaled = channels == 6 && channel == 2 ?
        uint64_t(centerWet) * uint64_t(int64_t(parameter->wet_gain)) >> 14 :
        Scale(int32_t(wet[channel]), parameter->wet_gain);
      int32_t value = int32_t(scaled) >> 6;
      output[channel][sample] = int32_t(dry + uint32_t(value));
    }
  }

  for (unsigned index = 0; index < 4; ++index) {
    state->filter_history[index] = int32_t(history[index]);
  }
}

}
