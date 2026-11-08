#include <stdint.h>

enum NvError : int32_t {
  NvSuccess = 0,
  NvError_NotImplemented = 2,
  NvError_BadValue = 11,
};

struct NvRmChipId {
  uint32_t id;
  uint32_t revision;
};

// Capabilities are filled by the chip descriptor, unknown ones stay at
// UINT32_MAX.
struct NvRmChipInfoData {
  uint32_t id;
  uint32_t revision;
  uint32_t platform;
  uint32_t caps[18];
};

struct NvRmChipInfo {
  uint8_t isInitialized;
  NvRmChipInfoData data;
};

struct NvRmChipDescriptor {
  uint64_t reserved[2];
  void (*init)(NvRmChipInfoData* data);
};

extern "C" NvRmChipId NvRmPrivGetChipIdLimited();

// Folded with an unrelated function, it always answers silicon.
[[gnu::visibility("hidden")]] uint32_t NvRmChipQueryPlatform(NvRmChipId id);

[[gnu::visibility("hidden")]] extern NvRmChipInfo g_NvRmChipInfo;
[[gnu::visibility("hidden")]] extern const NvRmChipDescriptor
  g_NvRmChipDescriptors[7];

namespace {

[[gnu::always_inline]] inline bool LoadChipInfo() {
  if (g_NvRmChipInfo.isInitialized & 1) {
    return true;
  }

  const NvRmChipId id = NvRmPrivGetChipIdLimited();
  const uint32_t platform = NvRmChipQueryPlatform(id);

  const NvRmChipDescriptor* descriptor;
  switch (id.id) {
    case 0xff:
      descriptor = &g_NvRmChipDescriptors[0];
      break;
    case 0x40:
      descriptor = &g_NvRmChipDescriptors[1];
      break;
    case 0x13:
      descriptor = &g_NvRmChipDescriptors[2];
      break;
    case 0x21:
      descriptor = &g_NvRmChipDescriptors[3];
      break;
    case 0x18:
      descriptor = &g_NvRmChipDescriptors[4];
      break;
    case 0x19:
      descriptor = &g_NvRmChipDescriptors[5];
      break;
    case 0x23:
      descriptor = &g_NvRmChipDescriptors[6];
      break;
    default:
      return false;
  }

  NvRmChipInfoData& data = g_NvRmChipInfo.data;
  data = {};
  data.id = id.id;
  data.revision = id.revision;
  data.platform = platform;
  descriptor->init(&data);
  g_NvRmChipInfo.isInitialized = 1;
  return true;
}

}

extern "C" uint32_t NvRmChipGetPlatform() {
  if (!LoadChipInfo()) {
    return 0;
  }

  return g_NvRmChipInfo.data.platform;
}

extern "C" NvError NvRmChipGetCapabilityBool(uint32_t capability,
  uint8_t* pOutValue) {
  if (!LoadChipInfo()) {
    return NvError_NotImplemented;
  }

  uint32_t index;
  switch (capability) {
    case 0x3:
      index = 0;
      break;
    case 0x201:
      index = 1;
      break;
    case 0x403:
      index = 9;
      break;
    default:
      return NvError_BadValue;
  }

  *pOutValue = g_NvRmChipInfo.data.caps[index] != 0;
  return NvSuccess;
}

extern "C" NvError NvRmChipGetCapabilityU32(uint32_t capability,
  uint32_t* pOutValue) {
  if (!LoadChipInfo()) {
    return NvError_NotImplemented;
  }

  uint32_t index;
  switch (capability) {
    case 0x202:
      index = 2;
      break;
    case 0x203:
      index = 3;
      break;
    case 0x301:
      index = 4;
      break;
    case 0x302:
      index = 5;
      break;
    case 0x501:
      index = 6;
      break;
    case 0x401:
      index = 7;
      break;
    case 0x402:
      index = 8;
      break;
    case 0x601:
      index = 10;
      break;
    case 0x701:
      index = 11;
      break;
    case 0xc01:
      index = 12;
      break;
    case 0x801:
      index = 13;
      break;
    case 0x901:
      index = 14;
      break;
    case 0xa01:
      index = 15;
      break;
    case 0xb01:
      index = 16;
      break;
    default:
      return NvError_BadValue;
  }

  const uint32_t value = g_NvRmChipInfo.data.caps[index];
  if (value == UINT32_MAX) {
    return NvError_BadValue;
  }

  *pOutValue = value;
  return NvSuccess;
}
