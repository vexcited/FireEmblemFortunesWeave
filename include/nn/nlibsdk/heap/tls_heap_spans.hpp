#pragma once

namespace nn::nlibsdk::heap {

class TlsHeapCentral;

namespace spans {

bool DestroySpanPageIfEmpty(TlsHeapCentral* core, void* page, bool release)
  asm("_ZN2nn7nlibsdk4heap14TlsHeapCentral23DestroySpanPageIfEmpty_"
      "EPNS1_8SpanPageEb");
void MergeIntoFreeList(TlsHeapCentral* core, void** span)
  asm("_ZN2nn7nlibsdk4heap14TlsHeapCentral18MergeIntoFreeList_ERPNS1_4SpanE");
void* AllocSpanPage(TlsHeapCentral* core)
  asm("_ZN2nn7nlibsdk4heap14TlsHeapCentral14AllocSpanPage_Ev");

}

}
