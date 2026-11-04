#include "snd/fnd/math.hpp"

#include <array>
#include <cmath>
#include <cstring>

#include "nn/util/math_types.hpp"

namespace snd::fnd {

namespace {

constexpr std::array<uint32_t, 256> kCrc32Table = [] {
  std::array<uint32_t, 256> table{};
  for (uint32_t i = 0; i < 256; i++) {
    uint32_t value = i;
    for (int bit = 0; bit < 8; bit++) {
      value = (value & 1) != 0 ? (value >> 1) ^ 0xedb88320 : value >> 1;
    }
    table[i] = value;
  }
  return table;
}();

// Scales the linear estimate ratio * 45 into degrees, indexed by half
// degrees.
constexpr float kAtanScale[] = {
  1.0f, 1.273187f, 1.27303f, 1.272768f, 1.272402f, 1.271932f, 1.271358f,
  1.270681f, 1.269902f, 1.269021f, 1.268038f, 1.266956f, 1.265774f, 1.264494f,
  1.263116f, 1.261643f, 1.260075f, 1.258413f, 1.256659f, 1.254815f, 1.252881f,
  1.250859f, 1.248752f, 1.24656f, 1.244285f, 1.241929f, 1.239494f, 1.236981f,
  1.234393f, 1.231731f, 1.228997f, 1.226192f, 1.22332f, 1.220382f, 1.217379f,
  1.214315f, 1.211189f, 1.208006f, 1.204766f, 1.201471f, 1.198124f, 1.194727f,
  1.191281f, 1.187787f, 1.18425f, 1.180669f, 1.177047f, 1.173386f, 1.169687f,
  1.165952f, 1.162184f, 1.158384f, 1.154553f, 1.150693f, 1.146806f, 1.142893f,
  1.138957f, 1.134998f, 1.131018f, 1.127019f, 1.123002f, 1.118969f, 1.11492f,
  1.110858f, 1.106783f, 1.102697f, 1.098601f, 1.094496f, 1.090384f, 1.086266f,
  1.082142f, 1.078014f, 1.073883f, 1.06975f, 1.065616f, 1.061482f, 1.057348f,
  1.053216f, 1.049087f, 1.04496f, 1.040838f, 1.036721f, 1.03261f, 1.028504f,
  1.024406f, 1.020316f, 1.016234f, 1.01216f, 1.008097f, 1.004043f, 1.0f
};

uint32_t updateCrc32(uint32_t crc, char c) {
  return kCrc32Table[(crc ^ static_cast<uint8_t>(c)) & 0xff] ^ (crc >> 8);
}

// Zero is reserved for empty names.
uint32_t finishCrc32(uint32_t crc) {
  return crc == 0xffffffff ? 1 : ~crc;
}

int roundToInt(float value) {
  if (value < 0.0f) {
    return -static_cast<int>(0.5f - value);
  }
  return static_cast<int>(value + 0.5f);
}

float calcAngleFromDelta(float dx, float dy, float ax, float ay) {
  if (ax > ay) {
    float ratio = ay / ax * 45.0f;
    float angle = ratio * kAtanScale[roundToInt(ratio + ratio)];
    if (dx >= 0.0f) {
      return dy >= 0.0f ? angle + 90.0f : 90.0f - angle;
    }
    return dy >= 0.0f ? 270.0f - angle : angle + 270.0f;
  }

  float angle = 0.0f;
  if (dy != 0.0f) {
    float ratio = ax / ay * 45.0f;
    angle = ratio * kAtanScale[roundToInt(ratio + ratio)];
    if (dy >= 0.0f) {
      return dx >= 0.0f ? 180.0f - angle : angle + 180.0f;
    }
    if (dx >= 0.0f) {
      return angle;
    }
    return 360.0f - angle;
  }
  return angle;
}

}

uint32_t calcCrc32(const char* str, uint32_t length) {
  if (str == nullptr || *str == '\0') {
    return 0;
  }

  uint32_t crc = 0xffffffff;
  for (uint32_t i = 0; str[i] != '\0';) {
    crc = updateCrc32(crc, str[i]);
    i++;
    if (i > length - 1) {
      break;
    }
  }
  return finishCrc32(crc);
}

uint32_t calcCrc32Reverse(const char* str, uint32_t length) {
  if (str == nullptr || *str == '\0') {
    return 0;
  }

  size_t size = std::strlen(str);
  uint32_t crc = 0xffffffff;
  const char* p = str + size - 1;
  for (uint32_t i = 0; i < size;) {
    crc = updateCrc32(crc, *p--);
    i++;
    if (i > length - 1) {
      break;
    }
  }
  return finishCrc32(crc);
}

float calcDistance(const Vec3& from, const Vec3& to) {
  float dx = to.x - from.x;
  float dy = to.y - from.y;
  float dz = to.z - from.z;
  return std::sqrt(dx * dx + dy * dy + dz * dz);
}

float calcDistance(float x0, float y0, float x1, float y1) {
  float dx = x1 - x0;
  float dy = y1 - y0;
  return std::sqrt(dx * dx + dy * dy);
}

float calcDistance(float x0, float y0, float z0, float x1, float y1,
  float z1) {
  float dx = x1 - x0;
  float dy = y1 - y0;
  float dz = z1 - z0;
  return std::sqrt(dx * dx + dy * dy + dz * dz);
}

float calcDistanceTo(const Vec3& from, const Vec3& to) {
  return calcDistance(from.x, from.y, from.z, to.x, to.y, to.z);
}

float calcCurve(CurveType type, float from, float to, float frame,
  float frames) {
  if (frames == 0.0f || frames <= frame) {
    return to;
  }

  float diff = to - from;
  float rest = frames - frame;
  switch (type) {
    case kCurveLinear:
      return from + diff * frame / frames;

    case kCurveQuadIn:
      return from + diff * (frame * frame) / (frames * frames);

    case kCurveCubicIn:
      return from + diff * (frame * frame * frame)
        / (frames * frames * frames);

    case kCurveQuartIn:
      return from + diff * (frame * frame * frame * frame)
        / (frames * frames * frames * frames);

    case kCurveQuadOut:
      return from + diff - diff * (rest * rest) / (frames * frames);

    case kCurveCubicOut:
      return from + diff - diff * (rest * rest * rest)
        / (frames * frames * frames);

    case kCurveQuartOut:
      return from + diff - diff * (rest * rest * rest * rest)
        / (frames * frames * frames * frames);

    case kCurveBounce: {
      float angle = frame / frames * kPi * 4.0f;
      return to - diff * nn::util::CosEst(angle) * rest * rest
        / (frames * frames);
    }

    case kCurveBounceFast:
    case kCurveBounceFast2: {
      float angle = frame * frame / frames * kPi * 4.0f
        / (frames * 15.0f / 100.0f);
      return to - diff * nn::util::CosEst(angle) * rest * rest
        / (frames * frames);
    }

    case kCurveBounceSlow: {
      float angle = frame * frame / frames * kPi * 4.0f
        / (frames * 40.0f / 100.0f);
      float scale = nn::util::CosEst(angle) * rest * rest / (frames * frames);
      if (scale < 0.0f) {
        scale = -scale;
      }
      return to - diff * scale;
    }

    case kCurveSine: {
      float angle = frame * kPi / frames;
      return from + diff * ((1.0f - nn::util::CosEst(angle)) * 0.5f);
    }

    case kCurveSine2: {
      float angle = frame * kPi / frames;
      angle = (1.0f - nn::util::CosEst(angle)) * 0.5f * kPi;
      return from + diff * ((1.0f - nn::util::CosEst(angle)) * 0.5f);
    }

    case kCurveSine3: {
      float angle = frame * kPi / frames;
      angle = (1.0f - nn::util::CosEst(angle)) * 0.5f * kPi;
      angle = (1.0f - nn::util::CosEst(angle)) * 0.5f * kPi;
      return from + diff * ((1.0f - nn::util::CosEst(angle)) * 0.5f);
    }

    case kCurveSineIn: {
      float angle = frame * (kPi / 2.0f) / frames;
      return from + diff * nn::util::SinEst(angle);
    }

    case kCurveSineOut: {
      float angle = frame * (kPi / 2.0f) / frames;
      return from + diff * (1.0f - nn::util::CosEst(angle));
    }

    case kCurveCosine: {
      float angle = frame * 180.0f / frames * kPi / 180.0f;
      return from + diff * 0.5f + diff * 0.5f * -nn::util::CosEst(angle);
    }

    default:
      return to;
  }
}

float normalizeAngle(float degree) {
  if (degree < 0.0f) {
    while (degree < 0.0f) {
      degree += 360.0f;
    }
  }
  else if (degree != 0.0f) {
    while (degree >= 360.0f) {
      degree -= 360.0f;
    }
  }
  return degree;
}

float calcAngle(float x0, float y0, float x1, float y1) {
  return calcAngleFromDelta(x1 - x0, y1 - y0, std::fabs(x1 - x0),
    std::fabs(y1 - y0));
}

float calcAngle(const Vec3& from, const Vec3& to) {
  return calcAngleFromDelta(to.x - from.x, to.z - from.z,
    std::fabs(to.x - from.x), std::fabs(to.z - from.z));
}

float calcAngleDiff(float from, float to) {
  from = normalizeAngle(from);
  to = normalizeAngle(to);
  if (std::fabs(to - from) >= 180.0f) {
    to += to < from ? 360.0f : -360.0f;
  }
  return to - from;
}

void moveByAngle(float* x, float* y, float distance, float degree) {
  float radian = degree * nn::util::FloatPi / 180.0f;
  *x += nn::util::SinEst(radian) * distance;
  *y += -nn::util::CosEst(radian) * distance;
}

void rotate(float* x, float* y, float degree) {
  float radian = degree * nn::util::FloatPi / 180.0f;
  float sin = nn::util::SinEst(radian);
  float cos = nn::util::CosEst(radian);
  float rx = cos * *x - sin * *y;
  float ry = sin * *x + cos * *y;
  *x = rx;
  *y = ry;
}

}
