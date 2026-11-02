#pragma once

#include <stddef.h>
#include <stdint.h>

namespace nn::nlibsdk::heap {

class TlsHeapCentral;

namespace large {

struct MemoryStats {
  size_t allocated;
  size_t free;
  size_t metadata;
  size_t largest;
};

int Reallocate(TlsHeapCentral* core, void* address, size_t size, void** out)
  asm("_ZN2nn7nlibsdk4heap14TlsHeapCentral18ReallocLargeMemoryEPvmPS3_");
int Shrink(TlsHeapCentral* core, void* address, size_t size)
  asm("_ZN2nn7nlibsdk4heap14TlsHeapCentral17ShrinkLargeMemoryEPvm");
size_t GetSpanMappedArea(TlsHeapCentral* core, const void* span)
  asm("_ZN2nn7nlibsdk4heap14TlsHeapCentral18GetSpanMappedArea_"
      "ERKNS1_4SpanE");
int GetMappedMemoryStats(TlsHeapCentral* core, size_t* free, size_t* largest)
  asm("_ZN2nn7nlibsdk4heap14TlsHeapCentral18GetMappedMemStats_EPmS3_");
void GetMemoryStats(TlsHeapCentral* core, MemoryStats* stats)
  asm("_ZN2nn7nlibsdk4heap14TlsHeapCentral12GetMemStats_"
      "EPNS1_15TlsHeapMemStatsE");
void LockMutexSlow(TlsHeapCentral* core)
  asm("_ZN2nn7nlibsdk4heap14TlsHeapCentral14LockMutexSlow_Ev");
void ResizeSpan(TlsHeapCentral* core, void* span, uintptr_t begin,
                size_t count);

}

}
