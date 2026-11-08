#include <stddef.h>
#include <stdint.h>

struct NvTegraSysInfo {
  uint8_t isInitialized;
  uint32_t chipId;
  uint32_t chipIdRev;
  uint32_t chipRevision;
  uint32_t reserved10[3];
  uint32_t productionMode;
  uint8_t reserved20[0x4c];
  char platform[29];
  uint8_t reserved89[0x17];
};

static_assert(sizeof(NvTegraSysInfo) == 0xa0);

extern "C" {

void nnosLockMutex(void* mutex);
void* memset(void* destination, int value, size_t size);
char* strncpy(char* destination, const char* source, size_t size);

}

[[gnu::visibility("hidden")]] extern NvTegraSysInfo g_NvTegraSysInfo;
[[gnu::visibility("hidden")]] extern uint8_t g_NvTegraSysMutex[];

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

// The chip is always reported as id 0x23 running on silicon.
extern "C" int32_t NvTegraSysInit() {
  if ((g_NvTegraSysInfo.isInitialized & 1) == 0) {
    nnosLockMutex(g_NvTegraSysMutex);
    if ((g_NvTegraSysInfo.isInitialized & 1) == 0) {
      g_NvTegraSysInfo.chipId = 0x23;
      g_NvTegraSysInfo.chipIdRev = 9;
      g_NvTegraSysInfo.chipRevision = 0;
      memset(g_NvTegraSysInfo.reserved10, 0,
        sizeof(NvTegraSysInfo) - offsetof(NvTegraSysInfo, reserved10));
      strncpy(g_NvTegraSysInfo.platform, "silicon",
        sizeof(g_NvTegraSysInfo.platform));
      g_NvTegraSysInfo.isInitialized = 1;
    }

    // The original locks a second time where it means to unlock.
    nnosLockMutex(g_NvTegraSysMutex);
  }

  return 0;
}
