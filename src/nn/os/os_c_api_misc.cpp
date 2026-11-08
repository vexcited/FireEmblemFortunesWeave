#include <stddef.h>

extern "C" {

int nnosGetModuleCountMax() {
  return 128;
}

void* nnosGetDefaultUserExceptionStackForApplication() {
  return nullptr;
}

}
