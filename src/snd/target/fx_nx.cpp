#include "snd/target/fx.hpp"

#include "snd/memory.hpp"
#include "snd/target/base.hpp"

namespace snd::target {

namespace {

template <typename T>
T* getEffect(const FxBase* impl) {
  return static_cast<T*>(impl->effect);
}

}

void FxReverbNX::enable() {
  if (!getEffect<nn::atk::EffectReverb>(impl_)->IsEnabled()) {
    getEffect<nn::atk::EffectReverb>(impl_)->SetEnabled(true);
  }
}

void FxReverbNX::disable() {
  if (getEffect<nn::atk::EffectReverb>(impl_)->IsEnabled()) {
    getEffect<nn::atk::EffectReverb>(impl_)->SetEnabled(false);
  }
}

bool FxReverbNX::isRemovable() const {
  return impl_->effect->IsRemovable();
}

void FxCpuReverbNX::enable() {
  if (!impl_->aux->IsEnabled()) {
    impl_->aux->SetEnabled(true);
  }
}

void FxCpuReverbNX::disable() {
  if (impl_->aux->IsEnabled()) {
    impl_->aux->SetEnabled(false);
  }
}

bool FxCpuReverbNX::isRemovable() const {
  return impl_->aux->IsRemovable();
}

void FxI3dl2ReverbNX::enable() {
  if (!getEffect<nn::atk::EffectI3dl2Reverb>(impl_)->IsEnabled()) {
    getEffect<nn::atk::EffectI3dl2Reverb>(impl_)->SetEnabled(true);
  }
}

void FxI3dl2ReverbNX::disable() {
  if (getEffect<nn::atk::EffectI3dl2Reverb>(impl_)->IsEnabled()) {
    getEffect<nn::atk::EffectI3dl2Reverb>(impl_)->SetEnabled(false);
  }
}

bool FxI3dl2ReverbNX::isRemovable() const {
  return impl_->effect->IsRemovable();
}

void FxCpuI3dl2ReverbNX::enable() {
  if (!impl_->aux->IsEnabled()) {
    impl_->aux->SetEnabled(true);
  }
}

void FxCpuI3dl2ReverbNX::disable() {
  if (impl_->aux->IsEnabled()) {
    impl_->aux->SetEnabled(false);
  }
}

bool FxCpuI3dl2ReverbNX::isRemovable() const {
  return impl_->aux->IsRemovable();
}

void FxDelayNX::enable() {
  if (!getEffect<nn::atk::EffectDelay>(impl_)->IsEnabled()) {
    getEffect<nn::atk::EffectDelay>(impl_)->SetEnabled(true);
  }
}

void FxDelayNX::disable() {
  if (getEffect<nn::atk::EffectDelay>(impl_)->IsEnabled()) {
    getEffect<nn::atk::EffectDelay>(impl_)->SetEnabled(false);
  }
}

bool FxDelayNX::isRemovable() const {
  return impl_->effect->IsRemovable();
}

void FxCpuDelayNX::enable() {
  if (!impl_->aux->IsEnabled()) {
    impl_->aux->SetEnabled(true);
  }
}

void FxCpuDelayNX::disable() {
  if (impl_->aux->IsEnabled()) {
    impl_->aux->SetEnabled(false);
  }
}

bool FxCpuDelayNX::isRemovable() const {
  return impl_->aux->IsRemovable();
}

void FxLightLimiterNX::enable() {
  if (!getEffect<nn::atk::EffectLightLimiter>(impl_)->IsEnabled()) {
    getEffect<nn::atk::EffectLightLimiter>(impl_)->SetEnabled(true);
  }
}

void FxLightLimiterNX::disable() {
  if (getEffect<nn::atk::EffectLightLimiter>(impl_)->IsEnabled()) {
    getEffect<nn::atk::EffectLightLimiter>(impl_)->SetEnabled(false);
  }
}

bool FxLightLimiterNX::isRemovable() const {
  return impl_->effect->IsRemovable();
}

void FxCpuLightLimiterNX::enable() {
  if (!impl_->aux->IsEnabled()) {
    impl_->aux->SetEnabled(true);
  }
}

void FxCpuLightLimiterNX::disable() {
  if (impl_->aux->IsEnabled()) {
    impl_->aux->SetEnabled(false);
  }
}

bool FxCpuLightLimiterNX::isRemovable() const {
  return impl_->aux->IsRemovable();
}

void FxCompressorNX::enable() {
  if (!getEffect<nn::atk::EffectCompressor>(impl_)->IsEnabled()) {
    getEffect<nn::atk::EffectCompressor>(impl_)->SetEnabled(true);
  }
}

void FxCompressorNX::disable() {
  if (getEffect<nn::atk::EffectCompressor>(impl_)->IsEnabled()) {
    getEffect<nn::atk::EffectCompressor>(impl_)->SetEnabled(false);
  }
}

bool FxCompressorNX::isRemovable() const {
  return impl_->effect->IsRemovable();
}

void FxFFTNX::enable() {
  if (!impl_->aux->IsEnabled()) {
    impl_->aux->SetEnabled(true);
  }
}

void FxFFTNX::disable() {
  if (impl_->aux->IsEnabled()) {
    impl_->aux->SetEnabled(false);
  }
}

bool FxFFTNX::isRemovable() const {
  return impl_->aux->IsRemovable();
}

void FxEQNX::enable() {
  if (!impl_->aux->IsEnabled()) {
    impl_->aux->SetEnabled(true);
  }
}

void FxEQNX::disable() {
  if (impl_->aux->IsEnabled()) {
    impl_->aux->SetEnabled(false);
  }
}

bool FxEQNX::isRemovable() const {
  return impl_->aux->IsRemovable();
}

void FxMSNX::enable() {
  if (!impl_->aux->IsEnabled()) {
    impl_->aux->SetEnabled(true);
  }
}

void FxMSNX::disable() {
  if (impl_->aux->IsEnabled()) {
    impl_->aux->SetEnabled(false);
  }
}

bool FxMSNX::isRemovable() const {
  return impl_->aux->IsRemovable();
}

void FxMSCtrlNX::enable() {
  if (!impl_->aux->IsEnabled()) {
    impl_->aux->SetEnabled(true);
  }
}

void FxMSCtrlNX::disable() {
  if (impl_->aux->IsEnabled()) {
    impl_->aux->SetEnabled(false);
  }
}

bool FxMSCtrlNX::isRemovable() const {
  return impl_->aux->IsRemovable();
}

void FxMSEQNX::enable() {
  if (!impl_->aux->IsEnabled()) {
    impl_->aux->SetEnabled(true);
  }
}

void FxMSEQNX::disable() {
  if (impl_->aux->IsEnabled()) {
    impl_->aux->SetEnabled(false);
  }
}

bool FxMSEQNX::isRemovable() const {
  return impl_->aux->IsRemovable();
}

void FxSpectrumNX::enable() {
  if (!impl_->aux->IsEnabled()) {
    impl_->aux->SetEnabled(true);
  }
}

void FxSpectrumNX::disable() {
  if (impl_->aux->IsEnabled()) {
    impl_->aux->SetEnabled(false);
  }
}

bool FxSpectrumNX::isRemovable() const {
  return impl_->aux->IsRemovable();
}

void FxVibNX::enable() {
  if (!impl_->aux->IsEnabled()) {
    impl_->aux->SetEnabled(true);
  }
}

void FxVibNX::disable() {
  if (impl_->aux->IsEnabled()) {
    impl_->aux->SetEnabled(false);
  }
}

bool FxVibNX::isRemovable() const {
  return impl_->aux->IsRemovable();
}

void FxFinalMixNX::enable() {
  if (!impl_->aux->IsEnabled()) {
    impl_->aux->SetEnabled(true);
  }
}

void FxFinalMixNX::disable() {
  if (impl_->aux->IsEnabled()) {
    impl_->aux->SetEnabled(false);
  }
}

bool FxFinalMixNX::isRemovable() const {
  return impl_->aux->IsRemovable();
}

void FxMuteNX::enable() {
  if (!impl_->aux->IsEnabled()) {
    impl_->aux->SetEnabled(true);
  }
}

void FxMuteNX::disable() {
  if (impl_->aux->IsEnabled()) {
    impl_->aux->SetEnabled(false);
  }
}

bool FxMuteNX::isRemovable() const {
  return impl_->aux->IsRemovable();
}

void FxNoneNX::enable() {
  if (!impl_->aux->IsEnabled()) {
    impl_->aux->SetEnabled(true);
  }
}

void FxNoneNX::disable() {
  if (impl_->aux->IsEnabled()) {
    impl_->aux->SetEnabled(false);
  }
}

bool FxNoneNX::isRemovable() const {
  return impl_->aux->IsRemovable();
}

void FxSurroundNX::enable() {
  if (!impl_->aux->IsEnabled()) {
    impl_->aux->SetEnabled(true);
  }
}

void FxSurroundNX::disable() {
  if (impl_->aux->IsEnabled()) {
    impl_->aux->SetEnabled(false);
  }
}

bool FxSurroundNX::isRemovable() const {
  return impl_->aux->IsRemovable();
}

void FxLFENX::enable() {
  if (!impl_->aux->IsEnabled()) {
    impl_->aux->SetEnabled(true);
  }
}

void FxLFENX::disable() {
  if (impl_->aux->IsEnabled()) {
    impl_->aux->SetEnabled(false);
  }
}

bool FxLFENX::isRemovable() const {
  return impl_->aux->IsRemovable();
}

void FxSimpleLimiterNX::enable() {
  if (!impl_->aux->IsEnabled()) {
    impl_->aux->SetEnabled(true);
  }
}

void FxSimpleLimiterNX::disable() {
  if (impl_->aux->IsEnabled()) {
    impl_->aux->SetEnabled(false);
  }
}

bool FxSimpleLimiterNX::isRemovable() const {
  return impl_->aux->IsRemovable();
}

void FxWaveformNX::enable() {
  if (!impl_->aux->IsEnabled()) {
    impl_->aux->SetEnabled(true);
  }
}

void FxWaveformNX::disable() {
  if (impl_->aux->IsEnabled()) {
    impl_->aux->SetEnabled(false);
  }
}

bool FxWaveformNX::isRemovable() const {
  return impl_->aux->IsRemovable();
}

void FxSpeakerNX::enable() {
  if (!impl_->aux->IsEnabled()) {
    impl_->aux->SetEnabled(true);
  }
}

void FxSpeakerNX::disable() {
  if (impl_->aux->IsEnabled()) {
    impl_->aux->SetEnabled(false);
  }
}

bool FxSpeakerNX::isRemovable() const {
  return impl_->aux->IsRemovable();
}

void FxPCMPlayerNX::enable() {
  if (!impl_->aux->IsEnabled()) {
    impl_->aux->SetEnabled(true);
  }
}

void FxPCMPlayerNX::disable() {
  if (impl_->aux->IsEnabled()) {
    impl_->aux->SetEnabled(false);
  }
}

bool FxPCMPlayerNX::isRemovable() const {
  return impl_->aux->IsRemovable();
}

void FxMultiBridgeNX::enable() {
  if (!impl_->aux->IsEnabled()) {
    impl_->aux->SetEnabled(true);
  }
}

void FxMultiBridgeNX::disable() {
  if (impl_->aux->IsEnabled()) {
    impl_->aux->SetEnabled(false);
  }
}

bool FxMultiBridgeNX::isRemovable() const {
  return impl_->aux->IsRemovable();
}

// The effect owns its platform object and its buffers.
[[gnu::always_inline]] inline void freeBuffer(void*& buffer) {
  if (void* memory = buffer) {
    buffer = nullptr;
    s_platform->freePoolMemory(memory);
  }
}

FxReverbNX::~FxReverbNX() {
  if (target::FxBase* impl = impl_) {
    impl_ = nullptr;
    snd::destroy(impl);
  }
  freeBuffer(buffer_);
}

FxCpuReverbNX::~FxCpuReverbNX() {
  if (target::FxBase* impl = impl_) {
    impl_ = nullptr;
    snd::destroy(impl);
  }
  freeBuffer(buffer_);
  freeBuffer(buffer2_);
}

FxI3dl2ReverbNX::~FxI3dl2ReverbNX() {
  if (target::FxBase* impl = impl_) {
    impl_ = nullptr;
    snd::destroy(impl);
  }
  freeBuffer(buffer_);
}

FxCpuI3dl2ReverbNX::~FxCpuI3dl2ReverbNX() {
  if (target::FxBase* impl = impl_) {
    impl_ = nullptr;
    snd::destroy(impl);
  }
  freeBuffer(buffer_);
  freeBuffer(buffer2_);
}

FxDelayNX::~FxDelayNX() {
  if (target::FxBase* impl = impl_) {
    impl_ = nullptr;
    snd::destroy(impl);
  }
  freeBuffer(buffer_);
}

FxCpuDelayNX::~FxCpuDelayNX() {
  if (target::FxBase* impl = impl_) {
    impl_ = nullptr;
    snd::destroy(impl);
  }
  freeBuffer(buffer_);
  freeBuffer(buffer2_);
}

FxLightLimiterNX::~FxLightLimiterNX() {
  if (target::FxBase* impl = impl_) {
    impl_ = nullptr;
    snd::destroy(impl);
  }
  freeBuffer(buffer_);
}

FxCpuLightLimiterNX::~FxCpuLightLimiterNX() {
  if (target::FxBase* impl = impl_) {
    impl_ = nullptr;
    snd::destroy(impl);
  }
  freeBuffer(buffer_);
  freeBuffer(buffer2_);
}

FxCompressorNX::~FxCompressorNX() {
  if (target::FxBase* impl = impl_) {
    impl_ = nullptr;
    snd::destroy(impl);
  }
  freeBuffer(buffer_);
}

FxFFTNX::~FxFFTNX() {
  if (target::FxBase* impl = impl_) {
    impl_ = nullptr;
    snd::destroy(impl);
  }
  freeBuffer(buffer_);
}

FxEQNX::~FxEQNX() {
  if (target::FxBase* impl = impl_) {
    impl_ = nullptr;
    snd::destroy(impl);
  }
  freeBuffer(buffer_);
}

FxMSNX::~FxMSNX() {
  if (target::FxBase* impl = impl_) {
    impl_ = nullptr;
    snd::destroy(impl);
  }
  freeBuffer(buffer_);
}

FxMSCtrlNX::~FxMSCtrlNX() {
  if (target::FxBase* impl = impl_) {
    impl_ = nullptr;
    snd::destroy(impl);
  }
  freeBuffer(buffer_);
}

FxMSEQNX::~FxMSEQNX() {
  if (target::FxBase* impl = impl_) {
    impl_ = nullptr;
    snd::destroy(impl);
  }
  freeBuffer(buffer_);
}

FxVibNX::~FxVibNX() {
  if (target::FxBase* impl = impl_) {
    impl_ = nullptr;
    snd::destroy(impl);
  }
  freeBuffer(buffer_);
}

FxFinalMixNX::~FxFinalMixNX() {
  if (target::FxBase* impl = impl_) {
    impl_ = nullptr;
    snd::destroy(impl);
  }
  freeBuffer(buffer_);
}

FxMuteNX::~FxMuteNX() {
  if (target::FxBase* impl = impl_) {
    impl_ = nullptr;
    snd::destroy(impl);
  }
  freeBuffer(buffer_);
}

FxNoneNX::~FxNoneNX() {
  if (target::FxBase* impl = impl_) {
    impl_ = nullptr;
    snd::destroy(impl);
  }
  freeBuffer(buffer_);
}

FxSurroundNX::~FxSurroundNX() {
  if (target::FxBase* impl = impl_) {
    impl_ = nullptr;
    snd::destroy(impl);
  }
  freeBuffer(buffer_);
}

FxLFENX::~FxLFENX() {
  if (target::FxBase* impl = impl_) {
    impl_ = nullptr;
    snd::destroy(impl);
  }
  freeBuffer(buffer_);
}

FxSimpleLimiterNX::~FxSimpleLimiterNX() {
  if (target::FxBase* impl = impl_) {
    impl_ = nullptr;
    snd::destroy(impl);
  }
  freeBuffer(buffer_);
}

FxWaveformNX::~FxWaveformNX() {
  if (target::FxBase* impl = impl_) {
    impl_ = nullptr;
    snd::destroy(impl);
  }
  freeBuffer(buffer_);
}

FxSpeakerNX::~FxSpeakerNX() {
  if (target::FxBase* impl = impl_) {
    impl_ = nullptr;
    snd::destroy(impl);
  }
  freeBuffer(buffer_);
}

FxPCMPlayerNX::~FxPCMPlayerNX() {
  if (target::FxBase* impl = impl_) {
    impl_ = nullptr;
    snd::destroy(impl);
  }
  freeBuffer(buffer_);
}

FxMultiBridgeNX::~FxMultiBridgeNX() {
  if (target::FxBase* impl = impl_) {
    impl_ = nullptr;
    snd::destroy(impl);
  }
  freeBuffer(buffer_);
}

}
