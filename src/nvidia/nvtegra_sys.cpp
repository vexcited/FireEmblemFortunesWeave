#include <stdint.h>

struct NvTegraSysInfo {
  uint8_t isInitialized;
  uint32_t chipId;
  uint32_t chipIdRev;
  uint32_t chipRevision;
  uint32_t reserved10[3];
  uint32_t productionMode;
  uint8_t reserved20[0x4c];
  char platform[1];
};

[[gnu::visibility("hidden")]] extern NvTegraSysInfo g_NvTegraSysInfo;

extern "C" uint32_t NvTegraSysGetChipId() {
  return g_NvTegraSysInfo.isInitialized != 0 ? g_NvTegraSysInfo.chipId : 0;
}

extern "C" uint32_t NvTegraSysGetProductionMode() {
  return g_NvTegraSysInfo.isInitialized != 0 ?
    g_NvTegraSysInfo.productionMode : 0xffffffff;
}

extern "C" uint32_t NvTegraSysGetChipRevision() {
  return g_NvTegraSysInfo.isInitialized != 0 ?
    g_NvTegraSysInfo.chipRevision : 0;
}

extern "C" uint32_t NvTegraSysGetChipIdRev() {
  return g_NvTegraSysInfo.isInitialized != 0 ? g_NvTegraSysInfo.chipIdRev : 0;
}

extern "C" const char* NvTegraSysGetPlatform() {
  return g_NvTegraSysInfo.isInitialized != 0 ? g_NvTegraSysInfo.platform :
    "invalid";
}

extern "C" const char* NvTegraSysGetCpuType() {
  return "invalid";
}
