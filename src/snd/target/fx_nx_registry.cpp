#include "snd/target/fx.hpp"

namespace snd::target {

void** FxReverbNX::getRegistry() {
  static void* base = fx::FxReverb::registry();
  return &base;
}

void** FxCpuReverbNX::getRegistry() {
  static void* base = fx::FxCpuReverb::registry();
  return &base;
}

void** FxI3dl2ReverbNX::getRegistry() {
  static void* base = fx::FxI3dl2Reverb::registry();
  return &base;
}

void** FxCpuI3dl2ReverbNX::getRegistry() {
  static void* base = fx::FxCpuI3dl2Reverb::registry();
  return &base;
}

void** FxDelayNX::getRegistry() {
  static void* base = fx::FxDelay::registry();
  return &base;
}

void** FxCpuDelayNX::getRegistry() {
  static void* base = fx::FxCpuDelay::registry();
  return &base;
}

void** FxLightLimiterNX::getRegistry() {
  static void* base = fx::FxLightLimiter::registry();
  return &base;
}

void** FxCpuLightLimiterNX::getRegistry() {
  static void* base = fx::FxCpuLightLimiter::registry();
  return &base;
}

void** FxCompressorNX::getRegistry() {
  static void* base = fx::FxCompressor::registry();
  return &base;
}

void** FxFFTNX::getRegistry() {
  static void* base = fx::FxFFT::registry();
  return &base;
}

void** FxEQNX::getRegistry() {
  static void* base = fx::FxEQ::registry();
  return &base;
}

void** FxMSNX::getRegistry() {
  static void* base = fx::FxMS::registry();
  return &base;
}

void** FxMSCtrlNX::getRegistry() {
  static void* base = fx::FxMSCtrl::registry();
  return &base;
}

void** FxMSEQNX::getRegistry() {
  static void* base = fx::FxMSEQ::registry();
  return &base;
}

void** FxSpectrumNX::getRegistry() {
  static void* base = fx::FxSpectrum::registry();
  return &base;
}

void** FxVibNX::getRegistry() {
  static void* base = fx::FxVib::registry();
  return &base;
}

void** FxFinalMixNX::getRegistry() {
  static void* base = fx::FxFinalMix::registry();
  return &base;
}

void** FxMuteNX::getRegistry() {
  static void* base = fx::FxMute::registry();
  return &base;
}

void** FxNoneNX::getRegistry() {
  static void* base = fx::FxNone::registry();
  return &base;
}

void** FxSurroundNX::getRegistry() {
  static void* base = fx::FxSurround::registry();
  return &base;
}

void** FxLFENX::getRegistry() {
  static void* base = fx::FxLFE::registry();
  return &base;
}

void** FxSimpleLimiterNX::getRegistry() {
  static void* base = fx::FxSimpleLimiter::registry();
  return &base;
}

void** FxWaveformNX::getRegistry() {
  static void* base = fx::FxWaveform::registry();
  return &base;
}

void** FxSpeakerNX::getRegistry() {
  static void* base = fx::FxSpeaker::registry();
  return &base;
}

void** FxPCMPlayerNX::getRegistry() {
  static void* base = fx::FxPCMPlayer::registry();
  return &base;
}

void** FxMultiBridgeNX::getRegistry() {
  static void* base = fx::FxMultiBridge::registry();
  return &base;
}

}
