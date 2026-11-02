#pragma once

#include <stddef.h>

namespace nn::nlibsdk::heap {

class TlsHeapCentral;

namespace physical {

struct ReleasedMemory {
  size_t size;
  const void* next;
};

void Construct(TlsHeapCentral* core)
  asm("_ZN2nn7nlibsdk4heap14TlsHeapCentralC1Ev");
void Destroy(TlsHeapCentral* core)
  asm("_ZN2nn7nlibsdk4heap14TlsHeapCentralD1Ev");
int Allocate(TlsHeapCentral* core, void* address, size_t size)
  asm("_ZN2nn7nlibsdk4heap14TlsHeapCentral9AllocPhy_EPvm");
int Free(TlsHeapCentral* core, void* address, size_t size)
  asm("_ZN2nn7nlibsdk4heap14TlsHeapCentral8FreePhy_EPvm");
ReleasedMemory TryFree(TlsHeapCentral* core, const void* start)
  asm("_ZN2nn7nlibsdk4heap14TlsHeapCentral22TryFreePhysicalMemory_EPKv");
int Initialize(TlsHeapCentral* core, void* address, size_t size,
               bool physical, bool zero_allocation)
  asm("_ZN2nn7nlibsdk4heap14TlsHeapCentral4InitEPvmbb");

}

}
