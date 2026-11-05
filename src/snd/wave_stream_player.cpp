#include "snd/wave_stream_player.hpp"

#include "snd/proxy.hpp"

namespace snd {

void WaveStreamPlayer::reset() {
  seekFraction_ = 0.0f;
  seekOffset_ = 0;
  seekBlock_ = 0;
  streamBlock_ = 0;
  WavePlayer::reset();
}

bool WaveStreamPlayer::seekBlock(int block) {
  nn::os::LockMutex(&mutex_);
  bool result;
  if ((state_ & ~kStatePrepared) != kStateNone) {
    g_proxy->print("#SoundLibrary : WaveStreamPlayer can not seeking !!\n");
    result = false;
  }
  else {
    WaveReader* reader = reader_;
    seekBlock_ = block;
    streamBlock_ = block;
    seekFraction_ = 0.0f;
    seekOffset_ = 0;
    reader->reset();
    if (format_ == 2) {
      for (int i = 0; i < channelCount_; i++) {
        restoreChannel(&channels_[i], &loopStates_[i]);
      }
    }
    else if (reader_->isStream()) {
      reader_->seekBlock(streamBlock_);
    }
    position_ = static_cast<int>(seekFraction_) + seekBlock_ * blockSamples_
      + seekOffset_;
    playedSamples_ = 0;
    playedFraction_ = 0.0f;
    positionFraction_ = 0.0f;
    state_ = kStateLoaded;
    result = true;
  }
  nn::os::UnlockMutex(&mutex_);
  return result;
}

void WaveStreamPlayer::scrub(bool fade, float time) {
  if (!isPlaying()) {
    g_proxy->print("#SoundLibrary : WaveStreamPlayer can not scrub play !!\n");
    return;
  }
  float fadeTime = 0.0f;
  if (!isMuted() && fade) {
    fadeTime = 30.0f;
  }
  startPlayerVolume(Fade(fadeTime), 0.0f);
  if (time < 0.0f) {
    time = 0.0f;
  }
  if (time >= getLength() / 1000.0f) {
    time = getLength() / 1000.0f;
  }
  scrubTime_ = time;
  state_ = kStateScrubbing;
}

}
