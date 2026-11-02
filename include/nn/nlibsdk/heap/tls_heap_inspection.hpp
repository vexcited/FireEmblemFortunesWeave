#pragma once

#include <stddef.h>
#include <stdint.h>

namespace nn::nlibsdk::heap {

class TlsHeapCentral;

namespace inspection {

using WalkCallback = int (*)(void*, size_t, void*);

struct HeapHash {
  uint64_t allocations;
  uint64_t size;
  uint64_t sum;
};

void Dump(TlsHeapCentral* core, int mode, int level, bool detail)
  asm("_ZN2nn7nlibsdk4heap14TlsHeapCentral5Dump_E15NMallocDumpModeib");
int WalkAllocated(TlsHeapCentral* core, WalkCallback callback, void* context)
  asm("_ZN2nn7nlibsdk4heap14TlsHeapCentral18WalkAllocatedPtrs_"
      "EPFiPvmS3_ES3_");
bool CheckSpanList(TlsHeapCentral* core)
  asm("_ZN2nn7nlibsdk4heap14TlsHeapCentral14CheckSpanList_Ev");
void CalculateHash(TlsHeapCentral* core, HeapHash* result)
  asm("_ZN2nn7nlibsdk4heap14TlsHeapCentral12CalcHeapHashEP8HeapHash");
bool IsClean(TlsHeapCentral* core)
  asm("_ZN2nn7nlibsdk4heap14TlsHeapCentral7IsCleanEv");
int InvokeWalkCallback(TlsHeapCentral* core, WalkCallback callback,
                       void* address, size_t size, void* context);

}

}
