#include "libm/exp_power.hpp"

#include <stdint.h>

namespace {

static constexpr uint64_t ExponentialTable[41] = {
  0x3FF0000000000000ull, 0x3FEFD9B0D3158574ull, 0x3FEFB5586CF9890Full,
  0x3FEF9301D0125B51ull, 0x3FEF72B83C7D517Bull, 0x3FEF54873168B9AAull,
  0x3FEF387A6E756238ull, 0x3FEF1E9DF51FDEE1ull, 0x3FEF06FE0A31B715ull,
  0x3FEEF1A7373AA9CBull, 0x3FEEDEA64C123422ull, 0x3FEECE086061892Dull,
  0x3FEEBFDAD5362A27ull, 0x3FEEB42B569D4F82ull, 0x3FEEAB07DD485429ull,
  0x3FEEA47EB03A5585ull, 0x3FEEA09E667F3BCDull, 0x3FEE9F75E8EC5F74ull,
  0x3FEEA11473EB0187ull, 0x3FEEA589994CCE13ull, 0x3FEEACE5422AA0DBull,
  0x3FEEB737B0CDC5E5ull, 0x3FEEC49182A3F090ull, 0x3FEED503B23E255Dull,
  0x3FEEE89F995AD3ADull, 0x3FEEFF76F2FB5E47ull, 0x3FEF199BDD85529Cull,
  0x3FEF3720DCEF9069ull, 0x3FEF5818DCFBA487ull, 0x3FEF7C97337B9B5Full,
  0x3FEFA4AFA2A490DAull, 0x3FEFD0765B6E4540ull, 0x42E8000000000000ull,
  0x3FAC6AF84B912394ull, 0x3FCEBFCE50FAC4F3ull, 0x3FE62E42FF0C52D6ull,
  0x4338000000000000ull, 0x40471547652B82FEull, 0x3EBC6AF84B912394ull,
  0x3F2EBFCE50FAC4F3ull, 0x3F962E42FF0C52D6ull,
};

static constexpr uint64_t LogarithmTable[37] = {
  0x3FF661EC79F8F3BEull, 0xC02EFEC65B963019ull, 0x3FF571ED4AAF883Dull,
  0xC02B0B6832D4FCA4ull, 0x3FF49539F0F010B0ull, 0xC027418B0A1FB77Bull,
  0x3FF3C995B0B80385ull, 0xC0239DE91A6DCF7Bull, 0x3FF30D190C8864A5ull,
  0xC0201D9BF3F2B631ull, 0x3FF25E227B0B8EA0ull, 0xC0197C1D1B3B7AF0ull,
  0x3FF1BB4A4A1A343Full, 0xC012F9E393AF3C9Full, 0x3FF12358F08AE5BAull,
  0xC00960CBBF788D5Cull, 0x3FF0953F419900A7ull, 0xBFFA6F9DB6475FCEull,
  0x3FF0000000000000ull, 0x0000000000000000ull, 0x3FEE608CFD9A47ACull,
  0x400338CA9F24F53Dull, 0x3FECA4B31F026AA0ull, 0x401476A9543891BAull,
  0x3FEB2036576AFCE6ull, 0x401E840B4AC4E4D2ull, 0x3FE9C2D163A1AA2Dull,
  0x40240645F0C6651Cull, 0x3FE886E6037841EDull, 0x40288E9C2C1B9FF8ull,
  0x3FE767DCF5534862ull, 0x402CE0A44EB17BCCull, 0x40227616C9496E0Bull,
  0xC0271969A075C67Aull, 0x402EC70A6CA7BADDull, 0xC037154748BEF6C8ull,
  0x40471547652AB82Bull,
};
static float Float(uint32_t bits) {
  return __builtin_bit_cast(float, bits);
}

static double Double(uint64_t bits) {
  return __builtin_bit_cast(double, bits);
}

static double Widen(float value) {
  double result;
  asm volatile("fcvt %d0, %s1" : "=w"(result) : "w"(value));
  return result;
}

static float Narrow(double value) {
  float result;
  asm volatile("fcvt %s0, %d1" : "=w"(result) : "w"(value));
  return result;
}

static int64_t Integer(double value) {
  int64_t result;
  asm volatile("fcvtzs %0, %d1" : "=r"(result) : "w"(value));
  return result;
}

static float Add(float first, float second) {
  float result;
  asm volatile("fadd %s0, %s1, %s2"
    : "=w"(result) : "w"(first), "w"(second));
  return result;
}

static float Subtract(float first, float second) {
  float result;
  asm volatile("fsub %s0, %s1, %s2"
    : "=w"(result) : "w"(first), "w"(second));
  return result;
}

static float Multiply(float first, float second) {
  float result;
  asm volatile("fmul %s0, %s1, %s2"
    : "=w"(result) : "w"(first), "w"(second));
  return result;
}

static float Divide(float first, float second) {
  float result;
  asm volatile("fdiv %s0, %s1, %s2"
    : "=w"(result) : "w"(first), "w"(second));
  return result;
}

static double Add(double first, double second) {
  double result;
  asm volatile("fadd %d0, %d1, %d2"
    : "=w"(result) : "w"(first), "w"(second));
  return result;
}

static double Subtract(double first, double second) {
  double result;
  asm volatile("fsub %d0, %d1, %d2"
    : "=w"(result) : "w"(first), "w"(second));
  return result;
}

static double Multiply(double first, double second) {
  double result;
  asm volatile("fmul %d0, %d1, %d2"
    : "=w"(result) : "w"(first), "w"(second));
  return result;
}

static double MultiplyAdd(double first, double second, double addend) {
  double result;
  asm volatile("fmadd %d0, %d1, %d2, %d3"
    : "=w"(result) : "w"(first), "w"(second), "w"(addend));
  return result;
}

static float RangeResult(uint32_t bits, uint32_t sign) {
  float value = Float(bits);
  float signedValue = Float(bits ^ (sign != 0 ? 0x80000000 : 0));
  return Multiply(value, signedValue);
}

static float Exponential(double value, uint32_t sign) {
  double nearest = round(value);
  uint64_t integer = uint64_t(Integer(round(value)));
  double fraction = Subtract(value, nearest);
  double first = MultiplyAdd(Double(ExponentialTable[38]), fraction,
    Double(ExponentialTable[39]));
  double square = Multiply(fraction, fraction);
  double second = MultiplyAdd(Double(ExponentialTable[40]), fraction, 1.0);
  double polynomial = MultiplyAdd(first, square, second);
  uint64_t scale = ExponentialTable[integer & 31] +
    ((integer + sign) << 47);
  return Narrow(Multiply(polynomial, Double(scale)));
}

}

extern "C" double round(double value) {
  double result;
  asm volatile("frinta %d0, %d1" : "=w"(result) : "w"(value));
  return result;
}

extern "C" float expf(float value) {
  uint32_t bits = __builtin_bit_cast(uint32_t, value);
  unsigned magnitude = (bits >> 20) & 0x7FF;

  if (magnitude >= 0x42B) {
    if (bits == 0xFF800000) {
      return 0.0f;
    }

    if (magnitude >= 0x7F8) {
      return Add(value, value);
    }

    if (value > Float(0x42B17217)) {
      return RangeResult(0x70000000, 0);
    }

    if (value < Float(0xC2CFF1B4)) {
      return RangeResult(0x10000000, 0);
    }
  }

  return Exponential(Multiply(Double(ExponentialTable[37]), Widen(value)), 0);
}

extern "C" float powf(float base, float exponent) {
  uint32_t x = __builtin_bit_cast(uint32_t, base);
  uint32_t y = __builtin_bit_cast(uint32_t, exponent);

  if ((y & 0x7FFFFFFF) == 0x3F800000) {
    return (y >> 31) != 0 ? Divide(1.0f, base) : base;
  }

  uint32_t sign = 0;

  if (!((x - 0x7F800000) >= 0x81000000 &&
    (y * 2 + 0x1000000) > 0x1000000)) {
    uint32_t doubledY = y * 2;
    uint32_t doubledX = x * 2;

    if ((doubledY - 1) >= 0xFEFFFFFF) {
      if (doubledY == 0 || x == 0x3F800000) {
        uint32_t selector = (doubledY != 0 ? doubledY : doubledX) ^
          0x800000;
        float sum = Add(base, exponent);
        return selector <= 0xFF800000 ? 1.0f : sum;
      }

      if (doubledX > 0xFF000000 || doubledY >= 0xFF000001) {
        return Add(base, exponent);
      }

      if (doubledX == 0x7F000000) {
        return 1.0f;
      }

      float square = Multiply(exponent, exponent);
      return ((doubledX >> 24) < 0x7F) != (int32_t(y) < 0) ?
        0.0f : square;
    }

    if ((doubledX - 1) >= 0xFEFFFFFF) {
      float square = Multiply(base, base);
      unsigned integerExponent = (y >> 23) & 255;

      if ((x >> 31) != 0 && integerExponent >= 127 &&
        integerExponent <= 150) {
        uint32_t bit = 1u << (150 - integerExponent);

        if ((y & (bit - 1)) == 0 && (y & bit) != 0) {
          square = Float(__builtin_bit_cast(uint32_t, square) ^ 0x80000000);
        }
      }

      return (y >> 31) != 0 ? Divide(1.0f, square) : square;
    }

    if ((x >> 31) != 0) {
      unsigned integerExponent = (y >> 23) & 255;
      bool integral = integerExponent >= 127;

      if (integerExponent <= 150 && integral) {
        uint32_t bit = 1u << (150 - integerExponent);
        integral = (y & (bit - 1)) == 0;
        sign = (y & bit) != 0 ? 0x10000 : 0;
      }

      if (!integral) {
        float zero = Subtract(base, base);
        return Divide(zero, zero);
      }

      x &= 0x7FFFFFFF;
    }

    if ((x >> 23) == 0) {
      float normalized = Multiply(base, Float(0x4B000000));
      x = (__builtin_bit_cast(uint32_t, normalized) & 0x7FFFFFFF) -
        0xB800000;
    }
  }

  uint32_t temporary = x - 0x3F330000;
  unsigned index = (temporary >> 19) & 15;
  uint32_t exponentBits = temporary & 0xFF800000;
  float reduced = Float(x - exponentBits);
  double power = Widen(exponent);
  double remainder = MultiplyAdd(Widen(reduced),
    Double(LogarithmTable[index * 2]), -1.0);
  double constant = Add(Double(LogarithmTable[index * 2 + 1]),
    double(int32_t(exponentBits) >> 18));
  double square = Multiply(remainder, remainder);
  double first = MultiplyAdd(Double(LogarithmTable[32]), remainder,
    Double(LogarithmTable[33]));
  double second = MultiplyAdd(Double(LogarithmTable[34]), remainder,
    Double(LogarithmTable[35]));
  double logarithm = MultiplyAdd(Double(LogarithmTable[36]), remainder,
    constant);
  double fourth = Multiply(square, square);
  logarithm = MultiplyAdd(second, square, logarithm);
  logarithm = MultiplyAdd(first, fourth, logarithm);
  double result = Multiply(logarithm, power);

  if ((__builtin_bit_cast(uint64_t, result) & 0x7FFF800000000000ull) >=
    0x40AF800000000000ull) {
    if (result > 4096.0) {
      return RangeResult(0x70000000, sign);
    }

    if (!(result > -4800.0)) {
      return RangeResult(0x10000000, sign);
    }
  }

  return Exponential(result, sign);
}
