#include "nn/audio/i3dl2_reverb.hpp"

#include <arm_neon.h>

#pragma clang fp contract(off)

namespace nn::audio::i3dl2_detail {

void* Fill(void*, int, size_t) asm("memset");

static const uint32_t PowerTable[] = {
  0x40000000, 0x3d025df8, 0x3a288337, 0x3770c3b9, 0x34d98779, 0x32614985,
  0x30069716, 0x2dc80eb9, 0x2ba45f81, 0x299a483e, 0x27a896c3, 0x25ce2732,
  0x2409e34f, 0x225ac1e0, 0x20bfc611, 0x1f37fedc, 0x1dc28680, 0x1c5e81f8,
  0x1b0b207c, 0x19c79b04, 0x189333d7, 0x176d3618, 0x1654f55e, 0x1549cd4f,
  0x144b2140, 0x13585bd5, 0x1270eeb2, 0x1194521d, 0x10c204b5, 0x0ff98b28,
  0x0f3a6fe3, 0x0e8442d4, 0x0dd69924, 0x0d310cfd, 0x0c933d48, 0x0bfccd79,
  0x0b6d6558, 0x0ae4b0ca, 0x0a625fa5, 0x09e6257b, 0x096fb973, 0x08fed61b,
  0x0893393d, 0x082ca3bf, 0x07cad978, 0x076da10e, 0x0714c3d7, 0x06c00db4,
  0x066f4cfa, 0x0622524b, 0x05d8f084, 0x0592fc9b, 0x05504d8b, 0x0510bc38,
  0x04d4235b, 0x049a5f6b, 0x04634e87, 0x042ed064, 0x03fcc63a, 0x03cd12b1,
  0x039f99ce, 0x037440e7, 0x034aee90, 0x03238a8f, 0x02fdfdc8, 0x02da3237,
  0x02b812de, 0x02978bbb, 0x027889b8, 0x025afaa9, 0x023ecd36, 0x0223f0da,
  0x020a55d4, 0x01f1ed1f, 0x01daa86c, 0x01c47a15, 0x01af5519, 0x019b2d0f,
  0x0187f628, 0x0175a51d, 0x01642f31, 0x01538a28, 0x0143ac3d, 0x01348c22,
  0x012620fa, 0x0118624f, 0x010b4812, 0x00feca94, 0x00f2e282, 0x00e788df,
  0x00dcb705, 0x00d2669a, 0x00c89193, 0x00bf322b, 0x00b642e4, 0x00adbe7f,
  0x00a59ffe, 0x009de29e, 0x009681d5, 0x008f7950, 0x0088c4ef, 0x008260c3,
  0x007c490c, 0x00767a38, 0x0070f0e0, 0x006ba9c2, 0x0066a1c9, 0x0061d5ff,
  0x005d4395, 0x0058e7dd, 0x0054c049, 0x0050ca68, 0x004d03e8, 0x00496a92,
  0x0045fc4a, 0x0042b70d, 0x003f98f0, 0x003ca01f, 0x0039cadc, 0x0037177d,
  0x0034846d, 0x00321029, 0x002fb941, 0x002d7e56, 0x002b5e18, 0x0029574a,
  0x002768ba, 0x00259146, 0x0023cfda, 0x0022236f, 0x00208b09, 0x001f05b9,
  0x001d929a, 0x001c30d3, 0x001adf94, 0x00199e17, 0x00186ba1, 0x0017477c,
  0x001630ff, 0x00152785, 0x00142a73, 0x00133935, 0x0012533c, 0x00117803,
  0x0010a708, 0x000fdfd1, 0x000f21ea, 0x000e6ce2, 0x000dc050, 0x000d1bce,
  0x000c7efd, 0x000be97f, 0x000b5afe, 0x000ad326, 0x000a51a6, 0x0009d634,
  0x00096087, 0x0008f059, 0x0008856a, 0x00081f79, 0x0007be4d, 0x000761aa,
  0x0007095c, 0x0006b52f, 0x000664f0, 0x00061871, 0x0005cf85, 0x00058a02,
  0x000547bf, 0x00050894, 0x0004cc5c, 0x000492f5, 0x00045c3d, 0x00042814,
  0x0003f65a, 0x0003c6f3, 0x000399c4, 0x00036eb1, 0x000345a1, 0x00031e7c,
  0x0002f92c, 0x0002d59a, 0x0002b3b1, 0x0002935f, 0x0002748f, 0x0002572f,
  0x00023b2f, 0x0002207e, 0x0002070c, 0x0001eecb, 0x0001d7ac, 0x0001c1a1,
  0x0001ac9e, 0x00019896, 0x0001857e, 0x0001734b, 0x000161f1, 0x00015167,
  0x000141a3, 0x0001329b, 0x00012447, 0x0001169e, 0x00010999, 0x0000fd30,
  0x0000f15b, 0x0000e614, 0x0000db53, 0x0000d113, 0x0000c74e, 0x0000bdfe,
  0x0000b51d, 0x0000aca6, 0x0000a495, 0x00009ce4, 0x0000958f, 0x00008e92,
  0x000087e8, 0x0000818e, 0x00007b80, 0x000075bb, 0x0000703a, 0x00006afc,
  0x000065fc, 0x00006138, 0x00005cad, 0x00005858, 0x00005437, 0x00005048,
  0x00004c87, 0x000048f4, 0x0000458b, 0x0000424b, 0x00003f32, 0x00003c3e,
  0x0000396d, 0x000036be, 0x0000342f, 0x000031bf, 0x00002f6c, 0x00002d35,
  0x00002b18, 0x00002914, 0x00002729, 0x00002554, 0x00002396, 0x000021ec,
  0x00002056, 0x00001ed3, 0x00001d62, 0x00001c03, 0x00001ab4, 0x00001974,
  0x00001844, 0x00001722, 0x0000160d, 0x00001505, 0x0000140a,
};

static const uint32_t SineTable[] = {
  0x00000000, 0x01921560, 0x0323ecc0, 0x04b54828, 0x0645e9b0, 0x07d59398,
  0x09640830, 0x0af10a20, 0x0c7c5c20, 0x0e05c130, 0x0f8cfcc0, 0x1111d260,
  0x12940620, 0x14135ca0, 0x158f9a80, 0x17088540, 0x187de2a0, 0x19ef7940,
  0x1b5d1000, 0x1cc66ea0, 0x1e2b5d40, 0x1f8ba4e0, 0x20e70f40, 0x223d66c0,
  0x238e7680, 0x24da0a80, 0x261ff000, 0x275ff440, 0x2899e640, 0x29cd9580,
  0x2afad280, 0x2c216ec0, 0x2d413cc0, 0x2e5a1080, 0x2f6bbe40, 0x30761c00,
  0x317900c0, 0x32744480, 0x3367c080, 0x34534f40, 0x3536cc40, 0x361214c0,
  0x36e50680, 0x37af8140, 0x38716600, 0x392a9640, 0x39daf600, 0x3a8269c0,
  0x3b20d780, 0x3bb62780, 0x3c424200, 0x3cc511c0, 0x3d3e82c0, 0x3dae81c0,
  0x3e14fe00, 0x3e71e740, 0x3ec52f80, 0x3f0eca00, 0x3f4eab00, 0x3f84c900,
  0x3fb11b40, 0x3fd39b40, 0x3fec43c0, 0x3ffb10c0, 0x40000000, 0x3ffb10c0,
  0x3fec43c0, 0x3fd39b40, 0x3fb11b40, 0x3f84c900, 0x3f4eab00, 0x3f0eca00,
  0x3ec52f80, 0x3e71e740, 0x3e14fe00, 0x3dae81c0, 0x3d3e82c0, 0x3cc511c0,
  0x3c424200, 0x3bb62780, 0x3b20d780, 0x3a8269c0, 0x39daf600, 0x392a9640,
  0x38716600, 0x37af8140, 0x36e50680, 0x361214c0, 0x3536cc40, 0x34534f40,
  0x3367c080, 0x32744480, 0x317900c0, 0x30761c00, 0x2f6bbe40, 0x2e5a1080,
  0x2d413cc0, 0x2c216ec0, 0x2afad280, 0x29cd9580, 0x2899e640, 0x275ff440,
  0x261ff000, 0x24da0a80, 0x238e7680, 0x223d66c0, 0x20e70f40, 0x1f8ba4e0,
  0x1e2b5d40, 0x1cc66ea0, 0x1b5d1000, 0x19ef7940, 0x187de2a0, 0x17088540,
  0x158f9a80, 0x14135ca0, 0x12940620, 0x1111d260, 0x0f8cfcc0, 0x0e05c130,
  0x0c7c5c20, 0x0af10a20, 0x09640830, 0x07d59398, 0x0645e9b0, 0x04b54828,
  0x0323ecc0, 0x01921560, 0x00000000, 0xfe6deaa0, 0xfcdc1340, 0xfb4ab7d8,
  0xf9ba1650, 0xf82a6c68, 0xf69bf7d0, 0xf50ef5e0, 0xf383a3e0, 0xf1fa3ed0,
  0xf0730340, 0xeeee2da0, 0xed6bf9e0, 0xebeca360, 0xea706580, 0xe8f77ac0,
  0xe7821d60, 0xe61086c0, 0xe4a2f000, 0xe3399160, 0xe1d4a2c0, 0xe0745b20,
  0xdf18f0c0, 0xddc29940, 0xdc718980, 0xdb25f580, 0xd9e01000, 0xd8a00bc0,
  0xd76619c0, 0xd6326a80, 0xd5052d80, 0xd3de9140, 0xd2bec340, 0xd1a5ef80,
  0xd09441c0, 0xcf89e400, 0xce86ff40, 0xcd8bbb80, 0xcc983f80, 0xcbacb0c0,
  0xcac933c0, 0xc9edeb40, 0xc91af980, 0xc8507ec0, 0xc78e9a00, 0xc6d569c0,
  0xc6250a00, 0xc57d9640, 0xc4df2880, 0xc449d880, 0xc3bdbe00, 0xc33aee40,
  0xc2c17d40, 0xc2517e40, 0xc1eb0200, 0xc18e18c0, 0xc13ad080, 0xc0f13600,
  0xc0b15500, 0xc07b3700, 0xc04ee4c0, 0xc02c64c0, 0xc013bc40, 0xc004ef40,
  0xc0000000, 0xc004ef40, 0xc013bc40, 0xc02c64c0, 0xc04ee4c0, 0xc07b3700,
  0xc0b15500, 0xc0f13600, 0xc13ad080, 0xc18e18c0, 0xc1eb0200, 0xc2517e40,
  0xc2c17d40, 0xc33aee40, 0xc3bdbe00, 0xc449d880, 0xc4df2880, 0xc57d9640,
  0xc6250a00, 0xc6d569c0, 0xc78e9a00, 0xc8507ec0, 0xc91af980, 0xc9edeb40,
  0xcac933c0, 0xcbacb0c0, 0xcc983f80, 0xcd8bbb80, 0xce86ff40, 0xcf89e400,
  0xd09441c0, 0xd1a5ef80, 0xd2bec340, 0xd3de9140, 0xd5052d80, 0xd6326a80,
  0xd76619c0, 0xd8a00bc0, 0xd9e01000, 0xdb25f580, 0xdc718980, 0xddc29940,
  0xdf18f0c0, 0xe0745b20, 0xe1d4a2c0, 0xe3399160, 0xe4a2f000, 0xe61086c0,
  0xe7821d60, 0xe8f77ac0, 0xea706580, 0xebeca360, 0xed6bf9e0, 0xeeee2da0,
  0xf0730340, 0xf1fa3ed0, 0xf383a3e0, 0xf50ef5e0, 0xf69bf7d0, 0xf82a6c68,
  0xf9ba1650, 0xfb4ab7d8, 0xfcdc1340, 0xfe6deaa0, 0x00000000,
};

static const uint32_t ReflectionTimes[] = {
  0x3c8c60cc, 0x3d724b77, 0x3e259d56, 0x3ec7c676, 0x3ed9bbf1, 0x3ee92ba1,
  0x3f30929b, 0x3f3ef3f5, 0x3f5576cd, 0x3f5c0853, 0x00000000, 0x3d99a62f,
  0x3e2cd6c3, 0x3e998ca0, 0x3eacc554, 0x3ebe6a12, 0x3f1958c9, 0x3f377c57,
  0x3f515f35, 0x3f5a06a7,
};

static const uint32_t DenseTimes[] = {
  0x4236d11a, 0x42a5903b, 0x4315f034, 0x4387c9b4,
};

static const uint32_t SparseTimes[] = {
  0x40a00000, 0x40c00000, 0x41500000, 0x41600000,
};

static float FloatBits(uint32_t bits) {
  float value;
  __builtin_memcpy(&value, &bits, sizeof(value));
  return value;
}

static float Fma(float first, float second, float addend) {
  float result;
  asm("fmadd %s0, %s1, %s2, %s3" : "=w"(result)
      : "w"(first), "w"(second), "w"(addend));
  return result;
}

static float Fmsub(float first, float second, float addend) {
  float result;
  asm("fmsub %s0, %s1, %s2, %s3" : "=w"(result)
      : "w"(first), "w"(second), "w"(addend));
  return result;
}

static int32_t Fixed(float value) {
  return vcvts_n_s32_f32(value, 14);
}

static float Float(int32_t value) {
  return vcvts_n_f32_s32(value, 14);
}

static int32_t RoundedProduct(int32_t first, int32_t second) {
  uint32_t product = uint64_t(int64_t(first) * second) >> 14;
  return (int32_t(product) >> 14) + ((product >> 13) & 1);
}

static int32_t DelayLength(uint32_t rate, uint32_t scale) {
  return int32_t(rate * scale) >> 14;
}

static float Lookup(const uint32_t* table, uint32_t index,
                     uint32_t fraction) {
  int32_t difference = table[index + 1] - table[index];
  uint32_t interpolated = table[index]
    + uint32_t(difference >> 14) * fraction
    + (((uint32_t(difference) & 0x3fff) * fraction) >> 14);
  return Float(int32_t(interpolated) >> 16);
}

static float Power(float value) {
  int32_t fixed = Fixed(value);

  if (fixed >= 0) {
    return 1.0f;
  }

  if (fixed < -86834) {
    return 0.0f;
  }

  uint32_t phase = uint64_t(int64_t(fixed) * -791378) >> 14;
  return Lookup(PowerTable, phase >> 14, phase & 0x3fff);
}

static float Sine(uint32_t phase) {
  return Lookup(SineTable, (phase >> 14) & 255, phase & 0x3fff);
}

static uint32_t Magnitude(int32_t value) {
  return value < 0 ? uint32_t{0} - uint32_t(value) : uint32_t(value);
}

static unsigned Normalize(uint32_t& value) {
  for (unsigned shift = 0; shift <= 30; ++shift) {
    uint32_t previous = value;
    value <<= 1;

    if ((previous & 0x20000000) != 0 || shift == 30) {
      return shift + 1;
    }
  }

  return 31;
}

static int32_t DivideFixed(int32_t value, uint32_t magnitude,
                           bool normalize, int32_t denominator) {
  if (denominator == 0) {
    return 0;
  }

  uint32_t divisor = Magnitude(denominator);
  unsigned numerator_shift = normalize ? Normalize(magnitude) : 0;
  unsigned denominator_shift = 15;

  if ((divisor >> 30) == 0) {
    denominator_shift += Normalize(divisor);
  }

  if (denominator_shift < numerator_shift) {
    return 0;
  }

  unsigned shift = denominator_shift - numerator_shift;
  uint32_t quotient = 0;

  while (magnitude != 0 && shift != 0) {
    bool subtract = divisor <= magnitude;
    --shift;
    quotient = (quotient << 1) | subtract;
    magnitude = (magnitude - (subtract ? divisor : 0)) << 1;
  }

  quotient += divisor <= magnitude;
  quotient <<= shift & 31;

  if ((value ^ denominator) < 0) {
    quotient = uint32_t{0} - quotient;
  }

  return int32_t(quotient);
}

static float SquareRootFixed(int32_t value) {
  if (value == 0) {
    return 0.0f;
  }

  int32_t whole = value >> 14;
  int32_t estimate;
  uint32_t magnitude = uint32_t(value);
  bool normalize;

  if (whole > 1) {
    unsigned shift = 1;
    int32_t threshold = 4;

    while (shift < 9 && whole > threshold) {
      ++shift;
      threshold *= 4;
    }

    estimate = uint32_t(value) >> shift;
    normalize = (uint32_t(value) >> 30) == 0;
  }
  else {
    unsigned shift = value > 8192 ? 0 : value > 4096 ? 1
      : value > 1024 ? 2 : value > 256 ? 3 : value > 64 ? 4
      : value > 16 ? 5 : 6;
    estimate = uint32_t(value) << shift;
    magnitude = Magnitude(value);
    normalize = (magnitude >> 30) == 0;
  }

  for (unsigned iteration = 0; iteration <= 6; ++iteration) {
    int32_t quotient = DivideFixed(value, magnitude, normalize, estimate);
    int32_t next = int32_t(uint32_t(quotient) + uint32_t(estimate)) >> 1;

    if (next == estimate || iteration == 6) {
      return Float(next);
    }

    estimate = next;
  }

  return Float(estimate);
}

static float* InitializeDelay(I3dl2DelayLine& line, float* buffer,
                               int32_t length, bool use_or = false) {
  int32_t capacity = use_or ? length | 1 : length + 1;
  line.length = length;
  line.delay = length;
  line.begin = buffer;
  line.end = buffer + length;
  line.write = buffer + length % capacity;
  line.read = buffer;
  Fill(buffer, 0, int64_t(capacity) * 4);
  return line.end + 1;
}

}

namespace nn::audio {

using namespace i3dl2_detail;

size_t GetRequiredI3dl2ReverbEffectWorkBufferSize(int sample_rate, int) {
  uint32_t rate = uint32_t(sample_rate / 1000);
  int32_t fixed_rate = rate << 14;
  uint32_t total = 14;

  const uint32_t simple_scales[] = {6553600, 278528, 311296, 212992,
    180224, 147456, 163840, 114688, 98304, 81920};

  for (uint32_t scale : simple_scales) {
    total += DelayLength(rate, scale);
  }

  const int32_t rounded_scales[] = {748817, 1356295, 2456589, 4449498};

  for (int32_t scale : rounded_scales) {
    total += RoundedProduct(fixed_rate, scale);
  }

  return int64_t(int32_t(total)) * 4;
}

void InitializeI3dl2ReverbEffect(const I3dl2ReverbParameter& parameter,
                                I3dl2ReverbState* state, void* work) {
  Fill(state, 0, sizeof(*state));
  uint32_t rate = parameter.sample_rate / 1000;
  int32_t fixed_rate = rate << 14;
  float* buffer = static_cast<float*>(work);
  buffer = InitializeDelay(state->early, buffer,
    DelayLength(rate, 6553600), true);
  const int32_t late_scales[] = {748817, 1356295, 2456589, 4449498};
  const uint32_t first_scales[] = {278528, 212992, 147456, 114688};
  const uint32_t second_scales[] = {311296, 180224, 163840, 98304};

  for (unsigned index = 0; index < 4; ++index) {
    buffer = InitializeDelay(state->late[index], buffer,
      RoundedProduct(fixed_rate, late_scales[index]));
    buffer = InitializeDelay(state->allpass_a[index], buffer,
      DelayLength(rate, first_scales[index]));
    state->allpass_a[index].coefficient = 0.0f;
    buffer = InitializeDelay(state->allpass_b[index], buffer,
      DelayLength(rate, second_scales[index]), index >= 2);
    state->allpass_b[index].coefficient = 0.0f;
  }

  InitializeDelay(state->center, buffer, DelayLength(rate, 81920));
  UpdateI3dl2ReverbEffectParameter(parameter, state, true);
}

void UpdateI3dl2ReverbEffectParameter(const I3dl2ReverbParameter& parameter,
                                     I3dl2ReverbState* state, bool reset) {
  state->dry_gain = parameter.dry_gain;
  float room = Power(parameter.room_hf_gain / 2000.0f);

  if (room < 1.0f) {
    uint32_t phase = Fixed((parameter.hf_reference * 256.0f)
      / float(parameter.sample_rate));
    float angle = Sine(phase + 0x100000);
    float difference = 1.0f - room;
    float linear = Fma(room * -2.0f, angle, 2.0f);
    float squared = (difference * -4.0f) * difference;
    float root = SquareRootFixed(Fixed(Fma(linear, linear, squared)));
    float feedback = __builtin_fminf((linear - root)
      / (difference + difference), FloatBits(0x3f7f4a2b));
    state->input_gain = 1.0f - feedback;
    state->input_feedback = feedback;
  }
  else {
    state->input_gain = 1.0f;
    state->input_feedback = 0.0f;
  }

  uint32_t fixed_rate = uint32_t((uint64_t(parameter.sample_rate)
    * 274877907) >> 32) << 8;
  fixed_rate &= 0xffffc000;
  float spread = Fma(parameter.late_delay,
    FloatBits(0x3f7ff2e5), FloatBits(0x3ca3d70a)) * 1000.0f;

  for (unsigned index = 0; index < 20; ++index) {
    float time = Fma(spread, FloatBits(ReflectionTimes[index]),
      parameter.reflection_delay * 1000.0f);
    uint32_t samples = RoundedProduct(fixed_rate, Fixed(time));
    state->reflection_taps[index] = samples >= uint32_t(state->early.length)
      ? state->early.length : int32_t(samples);
  }

  state->late_delay = RoundedProduct(fixed_rate,
    Fixed((parameter.reflection_delay + parameter.late_delay) * 1000.0f));
  state->reflection_gain = Power(__builtin_fminf(parameter.room_gain
    + parameter.reflection_gain, 5000.0f) / 2000.0f);
  state->diffusion = (parameter.diffusion * 0.6f) * 0.01f;

  for (unsigned index = 0; index < 4; ++index) {
    float sparse = FloatBits(SparseTimes[index]);
    float dense = FloatBits(DenseTimes[index]);
    int32_t length = RoundedProduct(fixed_rate, Fixed(Fma(
      parameter.density / 100.0f, dense - sparse, sparse)));
    I3dl2DelayLine& line = state->late[index];

    if (line.length >= length) {
      line.delay = length;
      int64_t distance = (reinterpret_cast<uintptr_t>(line.read)
        - reinterpret_cast<uintptr_t>(line.begin)) >> 2;
      line.write = line.begin + (distance + length) % (line.length + 1);
    }

    uint32_t delay = uint32_t(state->allpass_a[index].delay)
      + uint32_t(line.delay) + uint32_t(state->allpass_b[index].delay);
    float sample_rate = float(parameter.sample_rate);
    float decay = (float(delay) * -60.0f)
      / (parameter.decay_time * sample_rate);
    float high_decay = decay / parameter.hf_decay_ratio;
    float ratio = Power((high_decay - decay) / 40.0f);
    float gain = Power((decay + high_decay) / 40.0f) * 0.7071f;
    uint32_t phase = Fixed(((parameter.hf_reference * 0.5f) * 128.0f)
      / sample_rate);
    float cosine = Sine(phase + 0x100000);
    float sine = Sine(phase);
    float tangent = cosine / sine;
    float denominator = ratio + tangent;
    state->filter_coefficients[index][2] = (tangent - ratio) / denominator;
    state->filter_coefficients[index][0] = gain
      * Fma(ratio, tangent, 1.0f) / denominator;
    state->filter_coefficients[index][1] = gain
      * Fmsub(ratio, tangent, 1.0f) / denominator;
    state->allpass_a[index].coefficient = state->diffusion;
    state->allpass_b[index].coefficient = state->diffusion * -0.9f;
  }

  state->late_gain = Power(__builtin_fminf(parameter.room_gain
    + parameter.late_gain, 5000.0f) / 2000.0f);

  if (reset) {
    state->input_history = 0.0f;
    Fill(state->early.begin, 0, uint32_t(state->early.length) * 4 + 4);

    for (unsigned index = 0; index < 4; ++index) {
      Fill(state->late[index].begin, 0,
        uint32_t(state->late[index].length) * 4 + 4);
      state->filter_history[index] = 0.0f;
      Fill(state->allpass_a[index].begin, 0,
        uint32_t(state->allpass_a[index].length) * 4 + 4);
      Fill(state->allpass_b[index].begin, 0,
        uint32_t(state->allpass_b[index].length) * 4 + 4);
    }

    Fill(state->center.begin, 0, uint32_t(state->center.length) * 4 + 4);
  }
}

}
