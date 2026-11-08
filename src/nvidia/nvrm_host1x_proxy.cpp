#include <stddef.h>

namespace nvrm::host1x {

class INvDrvProxy {
public:
  virtual ~INvDrvProxy();
  virtual int Open(const char* path) = 0;
  virtual int Close(int fd) = 0;
  virtual int Ioctl(int fd, unsigned int request, void* argument,
    size_t size) = 0;
};

[[gnu::visibility("hidden")]] extern INvDrvProxy* g_pProxy;

INvDrvProxy* SetProxy(INvDrvProxy* proxy) {
  INvDrvProxy* previous = g_pProxy;
  g_pProxy = proxy;
  return previous;
}

int Open(const char* path) {
  return g_pProxy->Open(path);
}

int Close(int fd) {
  return g_pProxy->Close(fd);
}

int Ioctl(int fd, unsigned int request, void* argument, size_t size) {
  return g_pProxy->Ioctl(fd, request, argument, size);
}

}
