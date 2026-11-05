#include "snd/wave_multi_stream_player.hpp"

namespace snd {

static_assert(sizeof(WaveMultiStreamPlayer) == 0x2d20);

void** WaveMultiStreamPlayer::getRegistry() const {
  return registry();
}

void WaveMultiStreamPlayer::initialize() {
  if (initialized_) {
    return;
  }
  tracks_.clear();
  for (Track& track : trackModes_) {
    track.mode = 2;
  }
  state_ = kStatePlaying;
  initialized_ = true;
}

void WaveMultiStreamPlayer::finalize() {
  if (initialized_ == true) {
    for (size_t i = 0; i < tracks_.size(); i++) {
      if (WaveStreamPlayer* track = tracks_[i].cast<WaveStreamPlayer>()) {
        track->stop(Fade(0.0f));
      }
      tracks_[i].reset();
    }
    tracks_.clear();
    initialized_ = false;
  }
}

void WaveMultiStreamPlayer::setSource(int id, int kind, const void* data) {
  if (tracks_.empty()) {
    return;
  }
  if (WaveStreamPlayer* track = tracks_[0].cast<WaveStreamPlayer>()) {
    track->setSource(id, kind, data);
  }
}

bool WaveMultiStreamPlayer::isLoaded() const {
  for (size_t i = 0; i < tracks_.size(); i++) {
    const WaveStreamPlayer* track = tracks_[i].cast<const WaveStreamPlayer>();
    if (track != nullptr && !track->isLoaded()) {
      return false;
    }
  }
  return true;
}

bool WaveMultiStreamPlayer::isReady() const {
  for (size_t i = 0; i < tracks_.size(); i++) {
    const WaveStreamPlayer* track = tracks_[i].cast<const WaveStreamPlayer>();
    if (track != nullptr && !track->isReady()) {
      return false;
    }
  }
  return true;
}

void WaveMultiStreamPlayer::start() {
  for (size_t i = 0; i < tracks_.size(); i++) {
    if (WaveStreamPlayer* track = tracks_[i].cast<WaveStreamPlayer>()) {
      track->start();
    }
  }
}

void WaveMultiStreamPlayer::stop(const Fade& fade) {
  for (size_t i = 0; i < tracks_.size(); i++) {
    if (WaveStreamPlayer* track = tracks_[i].cast<WaveStreamPlayer>()) {
      track->setAutoReset(false);
      track->stop(fade);
    }
  }
  state_ = kStateStopping;
}

// The tracks follow the volume of this player, so only it fades.
void WaveMultiStreamPlayer::pause(const Fade& fade) {
  if (isPlaying()) {
    startPlayerVolume(fade, 0.0f);
    pauseRequested_ = true;
  }
}

void WaveMultiStreamPlayer::resumePause(const Fade& fade) {
  if (isPlaying()) {
    startPlayerVolume(fade, 1.0f);
    resumePauseRequested_ = true;
  }
}

void WaveMultiStreamPlayer::mute(const Fade& fade) {
  if (isPlaying()) {
    startFadeVolume(fade, 0.0f);
    muteRequested_ = true;
  }
}

void WaveMultiStreamPlayer::resumeMute(const Fade& fade) {
  if (isPlaying()) {
    startFadeVolume(fade, 1.0f);
    resumeMuteRequested_ = true;
  }
}

bool WaveMultiStreamPlayer::seekSample(int) {
  return false;
}

void WaveMultiStreamPlayer::startTrack(int track) {
  if (WaveStreamPlayer* player = tracks_[track].cast<WaveStreamPlayer>()) {
    player->start();
    currentTrack_ = track;
  }
}

// The variables of a multi stream voice are the volumes of its tracks.
void WaveMultiStreamPlayer::setVariable(int index, const Fade& fade,
  float value)
{
  if (static_cast<size_t>(index) < tracks_.size()) {
    if (WaveStreamPlayer* track = tracks_[index].cast<WaveStreamPlayer>()) {
      track->startVolume(fade, value);
    }
  }
}

inline int WaveMultiStreamPlayer::findPlayingTrack() const {
  for (size_t i = 0; i < tracks_.size(); i++) {
    const WaveStreamPlayer* track = tracks_[i].cast<const WaveStreamPlayer>();
    if (track != nullptr && track->isPlaying() && !track->isStopping()) {
      return static_cast<int>(i);
    }
  }
  return -1;
}

inline const WaveStreamPlayer* WaveMultiStreamPlayer::getTrack(
  int index) const
{
  if (index < 0 || static_cast<size_t>(index) >= tracks_.size()) {
    return nullptr;
  }
  return tracks_[index].cast<const WaveStreamPlayer>();
}

float WaveMultiStreamPlayer::getRemainingMs(int sample) const {
  const WaveStreamPlayer* track = getTrack(findPlayingTrack());
  if (track == nullptr) {
    return -1.0f;
  }
  return track->getRemainingMs(sample);
}

int WaveMultiStreamPlayer::getRemainingSamples(int sample) const {
  const WaveStreamPlayer* track = getTrack(findPlayingTrack());
  if (track == nullptr) {
    return -1;
  }
  return track->getRemainingSamples(sample);
}

}
