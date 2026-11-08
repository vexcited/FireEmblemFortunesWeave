#include <string.h>

extern "C" void NvVicInitGeotransParameters(void* vic, void* pParameters) {
  if (vic == nullptr || pParameters == nullptr) {
    return;
  }

  memset(pParameters, 0, 0x528);
}

extern "C" void NvVicInitDiagnosticParameters(void* vic, void* pParameters) {
  if (vic == nullptr || pParameters == nullptr) {
    return;
  }

  memset(pParameters, 0, 0x1f8);
}
