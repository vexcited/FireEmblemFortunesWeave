#include "snd/fx/fx.hpp"

namespace snd::fx {

void** FxReverb::registry() {
  static void* base = FxBase::registry();
  return &base;
}

void** FxCpuReverb::registry() {
  static void* base = FxBase::registry();
  return &base;
}

void** FxI3dl2Reverb::registry() {
  static void* base = FxBase::registry();
  return &base;
}

void** FxCpuI3dl2Reverb::registry() {
  static void* base = FxBase::registry();
  return &base;
}

void** FxDelay::registry() {
  static void* base = FxBase::registry();
  return &base;
}

void** FxCpuDelay::registry() {
  static void* base = FxBase::registry();
  return &base;
}

void** FxLightLimiter::registry() {
  static void* base = FxBase::registry();
  return &base;
}

void** FxCpuLightLimiter::registry() {
  static void* base = FxBase::registry();
  return &base;
}

void** FxCompressor::registry() {
  static void* base = FxBase::registry();
  return &base;
}

void** FxFFT::registry() {
  static void* base = FxBase::registry();
  return &base;
}

void** FxEQ::registry() {
  static void* base = FxBase::registry();
  return &base;
}

void** FxMS::registry() {
  static void* base = FxBase::registry();
  return &base;
}

void** FxMSCtrl::registry() {
  static void* base = FxBase::registry();
  return &base;
}

void** FxMSEQ::registry() {
  static void* base = FxBase::registry();
  return &base;
}

void** FxSpectrum::registry() {
  static void* base = FxBase::registry();
  return &base;
}

void** FxVib::registry() {
  static void* base = FxBase::registry();
  return &base;
}

void** FxFinalMix::registry() {
  static void* base = FxBase::registry();
  return &base;
}

void** FxMute::registry() {
  static void* base = FxBase::registry();
  return &base;
}

void** FxNone::registry() {
  static void* base = FxBase::registry();
  return &base;
}

void** FxSurround::registry() {
  static void* base = FxBase::registry();
  return &base;
}

void** FxLFE::registry() {
  static void* base = FxBase::registry();
  return &base;
}

void** FxSimpleLimiter::registry() {
  static void* base = FxBase::registry();
  return &base;
}

void** FxWaveform::registry() {
  static void* base = FxBase::registry();
  return &base;
}

void** FxSpeaker::registry() {
  static void* base = FxBase::registry();
  return &base;
}

void** FxPCMPlayer::registry() {
  static void* base = FxBase::registry();
  return &base;
}

void** FxMultiBridge::registry() {
  static void* base = FxBase::registry();
  return &base;
}

}
