namespace nn::os {

struct SystemEventType;

}

namespace nv {

[[gnu::visibility("hidden")]] void DumpGraphicsMemoryInfoImpl();
[[gnu::visibility("hidden")]] bool IsCapableNoVsyncForDebugImpl();

void DumpGraphicsMemoryInfo() {
  DumpGraphicsMemoryInfoImpl();
}

bool IsCapableNoVsyncForDebug() {
  return IsCapableNoVsyncForDebugImpl();
}

}

int NvOsDrvQueryEvent(int fd, unsigned int eventId,
  nn::os::SystemEventType* pOutEvent);

int hosGetSystemEventHandle(int fd, unsigned int eventId,
  nn::os::SystemEventType* pOutEvent) {
  return NvOsDrvQueryEvent(fd, eventId, pOutEvent);
}

extern "C" void nvnInstallGlobalDebugCallback(void*, void*) {
}
