#pragma once

#include <stddef.h>

namespace nn::nlibsdk::heap {

class TlsHeapCentral;

namespace pages {

void FreeSpanToSpanPage(TlsHeapCentral* core, void* span, void* page)
  asm("_ZN2nn7nlibsdk4heap14TlsHeapCentral19FreeSpanToSpanPage_"
      "EPNS1_4SpanEPNS1_8SpanPageE");
void* AllocSpanFromSpanPage(TlsHeapCentral* core, void* page)
  asm("_ZN2nn7nlibsdk4heap14TlsHeapCentral22AllocSpanFromSpanPage_"
      "EPNS1_8SpanPageE");
void FreePages(TlsHeapCentral* core, void* span)
  asm("_ZN2nn7nlibsdk4heap14TlsHeapCentral10FreePages_EPNS1_4SpanE");
void* AllocPages(TlsHeapCentral* core, size_t count)
  asm("_ZN2nn7nlibsdk4heap14TlsHeapCentral11AllocPages_Em");
void* MakeFreeSpan(TlsHeapCentral* core, size_t count)
  asm("_ZN2nn7nlibsdk4heap14TlsHeapCentral13MakeFreeSpan_Em");
void* SearchFreeSpan(TlsHeapCentral* core, size_t count)
  asm("_ZN2nn7nlibsdk4heap14TlsHeapCentral15SearchFreeSpan_Em");
void* SplitSpan(TlsHeapCentral* core, void* span, size_t count, void* spare)
  asm("_ZN2nn7nlibsdk4heap14TlsHeapCentral10SplitSpan_EPNS1_4SpanEmS4_");
void* AllocPagesWithBigAlign(TlsHeapCentral* core, size_t count,
                            size_t alignment)
  asm("_ZN2nn7nlibsdk4heap14TlsHeapCentral23AllocPagesWithBigAlign_Emm");

}

}
