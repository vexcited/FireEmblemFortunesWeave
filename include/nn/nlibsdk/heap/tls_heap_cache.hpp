#pragma once

#include <stddef.h>

namespace nn::nlibsdk::heap {

class alignas(8) TlsHeapCache {
public:
  void Construct(void* core, unsigned flags)
    asm("_ZN2nn7nlibsdk4heap12TlsHeapCacheC1EPNS1_14TlsHeapCentralEj");
  void ReleaseAllCache();
  void Finalize();
  bool CheckCache();
  void* GetMalloc0Ptr() const;

  static size_t GetAllocSizeFuncMode0(TlsHeapCache* cache,
                                     const void* address);
  static int ShrinkFuncMode0(TlsHeapCache* cache, void* address, size_t size);

  static void* AllocUncached(TlsHeapCache* cache, size_t size)
    asm("_ZN2nn7nlibsdk4heap12TlsHeapCache14AllocFuncMode0INSt3__1"
        "17integral_constantIbLb0EEEEEPvPS2_m");
  static void* AllocAlignedUncached(TlsHeapCache* cache,
                                    size_t size, size_t alignment)
    asm("_ZN2nn7nlibsdk4heap12TlsHeapCache18AllocFuncAlgnMode0INSt3__1"
        "17integral_constantIbLb0EEEEEPvPS2_mm");
  static int FreeUncached(TlsHeapCache* cache, void* address)
    asm("_ZN2nn7nlibsdk4heap12TlsHeapCache13FreeFuncMode0INSt3__1"
        "17integral_constantIbLb0EEEEEiPS2_Pv");
  static int FreeWithSizeUncached(TlsHeapCache* cache,
                                  void* address, size_t size)
    asm("_ZN2nn7nlibsdk4heap12TlsHeapCache17FreeFuncSizeMode0INSt3__1"
        "17integral_constantIbLb0EEEEEiPS2_Pvm");
  static int ReallocUncached(TlsHeapCache* cache, void* address,
                             size_t size, void** output)
    asm("_ZN2nn7nlibsdk4heap12TlsHeapCache16ReallocFuncMode0INSt3__1"
        "17integral_constantIbLb0EEEEEiPS2_PvmPS8_");

  static void* AllocCached(TlsHeapCache* cache, size_t size)
    asm("_ZN2nn7nlibsdk4heap12TlsHeapCache14AllocFuncMode0INSt3__1"
        "17integral_constantIbLb1EEEEEPvPS2_m");
  static void* AllocAlignedCached(TlsHeapCache* cache,
                                  size_t size, size_t alignment)
    asm("_ZN2nn7nlibsdk4heap12TlsHeapCache18AllocFuncAlgnMode0INSt3__1"
        "17integral_constantIbLb1EEEEEPvPS2_mm");
  static int FreeCached(TlsHeapCache* cache, void* address)
    asm("_ZN2nn7nlibsdk4heap12TlsHeapCache13FreeFuncMode0INSt3__1"
        "17integral_constantIbLb1EEEEEiPS2_Pv");
  static int FreeWithSizeCached(TlsHeapCache* cache,
                                void* address, size_t size)
    asm("_ZN2nn7nlibsdk4heap12TlsHeapCache17FreeFuncSizeMode0INSt3__1"
        "17integral_constantIbLb1EEEEEiPS2_Pvm");
  static int ReallocCached(TlsHeapCache* cache, void* address,
                           size_t size, void** output)
    asm("_ZN2nn7nlibsdk4heap12TlsHeapCache16ReallocFuncMode0INSt3__1"
        "17integral_constantIbLb1EEEEEiPS2_PvmPS8_");

private:
  unsigned char storage[0x348];
};

static_assert(sizeof(TlsHeapCache) == 0x348);

}
